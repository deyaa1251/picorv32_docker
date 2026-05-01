# PicoRV32 Workshop — Full Walkthrough

This document covers everything we did in the workshop session: how the toolchain works, how each C file runs on the core, and how to navigate the repository.

---

## Table of Contents

1. [How a C File Runs on the Core](#1-how-a-c-file-runs-on-the-core)
2. [Firmware Walkthrough](#2-firmware-walkthrough)
   - [hello.c](#helloc)
   - [sieve.c](#sievec)
   - [multest.c](#multestc)
   - [stats.c](#statsc)
   - [irq.c](#irqc)
   - [game.c](#gamec)
3. [How start.S Ties Everything Together](#3-how-starts-ties-everything-together)
4. [Repository Anatomy](#4-repository-anatomy)
5. [The Build Pipeline](#5-the-build-pipeline)
6. [Running the Tests](#6-running-the-tests)

---

## 1. How a C File Runs on the Core

There is no operating system here. The CPU boots, runs your code, and stops. Understanding that flow is the key to everything.

```
Your C code (firmware/*.c)
        │
        ▼
  RISC-V GCC compiler
  (riscv-none-elf-gcc)
        │
        ▼
  firmware.elf  ──► firmware.bin  ──► firmware.hex
                                            │
                                            ▼
                                    Loaded into simulated RAM
                                            │
                                            ▼
                              picorv32.v (CPU core in Verilog)
                              simulated by Icarus Verilog (iverilog)
                                            │
                                            ▼
                                   Output printed to terminal
                                   via memory-mapped UART at
                                   address 0x10000000
```

**The UART trick:** There is no real UART chip. Writing a character to address `0x10000000` is intercepted by the testbench (`testbench.v`) which prints it to your terminal. This is how all `print_str()` calls produce visible output.

```c
// firmware/print.c — this is the entire "driver"
void print_chr(char ch)
{
    *((volatile uint32_t*)0x10000000) = ch;
}
```

One memory write = one character on screen. That's it.

---

## 2. Firmware Walkthrough

All firmware files live in `firmware/`. They are plain C with no standard library — no `printf`, no `malloc`, no OS. Everything is built from scratch.

---

### hello.c

The simplest possible demo.

```c
void hello(void)
{
    print_str("hello world\n");
}
```

**What it shows:** The entire toolchain works. GCC compiled C to RISC-V machine code, the linker placed it in memory, the CPU fetched and executed it, and the testbench caught the UART write and printed it.

---

### sieve.c

Computes all prime numbers up to 64 using the **Sieve of Eratosthenes** algorithm.

**How it works:**
- A 64-bit bitmap (stored as two `uint32_t` words) tracks which odd numbers are composite.
- It starts from 3 and for each prime found, marks all its multiples in the bitmap.
- As each prime is found it is printed with an ordinal suffix (1st, 2nd, 3rd…).

```c
// The bitmap is just two 32-bit integers used as 64 bits
static uint32_t bitmap[BITMAP_SIZE/32];

static void bitmap_set(int idx) {
    bitmap[idx/32] |= 1 << (idx % 32);  // set one bit
}

static bool bitmap_get(int idx) {
    return (bitmap[idx/32] & (1 << (idx % 32))) != 0;  // read one bit
}
```

**Self-checking:** After computing all primes it runs a hash (DJB2 XOR variant) over the results and checks it against the known-good value `0x1772A48F`. If the hash doesn't match it fires `ebreak` (a CPU trap), which fails the test. This means the test catches any bug in arithmetic, memory, or branching.

**Why it's useful for a workshop:** It exercises loops, conditionals, bitwise operations, and memory access all in one short program. The checksum makes it a real correctness test, not just a demo.

---

### multest.c

Tests all 8 multiply/divide instructions in the RISC-V M extension by comparing hardware results against software emulation.

**The 8 instructions tested:**

| Instruction | Operation |
|-------------|-----------|
| `mul`       | Lower 32 bits of a × b |
| `mulh`      | Upper 32 bits of signed × signed |
| `mulhsu`    | Upper 32 bits of signed × unsigned |
| `mulhu`     | Upper 32 bits of unsigned × unsigned |
| `div`       | Signed division |
| `divu`      | Unsigned division |
| `rem`       | Signed remainder |
| `remu`      | Unsigned remainder |

**How the comparison works:**

The "hard" versions call assembly functions in `start.S` that use the actual CPU instruction:
```c
// start.S
hard_mul:
    mul a0, a0, a1   // real RISC-V MUL instruction
    ret
```

The "soft" versions compute the same result using C 64-bit arithmetic:
```c
s_mul  = a * b;                    // compiler emulates with shifts/adds
s_mulh = (as * bs) >> 32;         // signed × signed, take upper half
```

If hard ≠ soft the test fires `ebreak`. It runs 15 test cases including edge cases: `0x80000000`, `0xFFFFFFFF`, and zero.

**Why it matters:** This proves the M-extension hardware in the CPU is correct — the instructions produce the same results as verified software math.

---

### stats.c

Reads the CPU's hardware performance counters using two special RISC-V CSR instructions.

```c
void stats(void)
{
    unsigned int num_cycles, num_instr;

    // rdcycle  — reads how many clock cycles have elapsed
    // rdinstret — reads how many instructions have retired
    __asm__ volatile ("rdcycle %0; rdinstret %1;"
                      : "=r"(num_cycles), "=r"(num_instr));

    // CPI = Cycles Per Instruction
    print_str("CPI: ");
    print_dec(num_cycles / num_instr);
    ...
}
```

**Output from our run:**
```
Cycle counter ......... 447578
Instruction counter .... 93291
CPI: 4.79
```

This means on average the core takes **4.79 clock cycles to execute one instruction**. That is expected for PicoRV32 — it is optimized for small area, not speed. A modern out-of-order CPU runs below 1 CPI.

**Why it's interesting:** This is real hardware introspection. The counters are built into the CPU and increment every cycle. Reading them costs zero overhead.

---

### irq.c

The interrupt handler — called automatically by the CPU whenever an interrupt fires.

**Signature:**
```c
uint32_t *irq(uint32_t *regs, uint32_t irqs)
```

- `regs` — pointer to the saved register file (all 32 RISC-V registers, saved by `start.S`)
- `irqs` — bitmask of which interrupts fired simultaneously

**Three interrupt sources in the testbench:**

| Bit | Source | Trigger |
|-----|--------|---------|
| 0 | Timer IRQ | Fired by `picorv32_timer` instruction in tests |
| 4 | Fast external IRQ | `count_cycle[12:0]` all ones (~every 8192 cycles) |
| 5 | Slow external IRQ | `count_cycle[15:0]` all ones (~every 32768 cycles) |

**What happens on EBREAK or illegal instruction (bits 1–2):**
The handler prints the full CPU state — all 32 registers in a formatted table — then fires another `ebreak` to end the simulation:

```
------------------------------------------------------------
EBREAK instruction at 0x0000072A
pc  0000072D    x8  00000000    x16 E2E2B92B    x24 00000000
x1  000006FC    x9  00000000    x17 38BAA671    x25 00000000
...
------------------------------------------------------------
Number of fast external IRQs counted: 492
Number of slow external IRQs counted: 61
Number of timer IRQs counted: 22
```

**Why it's powerful:** This is a complete bare-metal exception handler. No OS. The CPU jumps to a fixed address on any interrupt, saves all registers, calls your C function, and returns. You can see exactly what the CPU was doing at the moment it was interrupted.

---

### game.c

Conway's Game of Life running bare-metal on the RISC-V core — written specifically for this workshop.

**The grid:** 24 columns × 10 rows, stored as a flat array of `char`.

**Initial patterns:**
- **Glider** (top-left) — moves diagonally across the grid
- **Blinker** (top-right) — oscillates between horizontal and vertical every generation
- **R-pentomino** (center) — chaotic pattern that takes many generations to stabilize
- **Stable block** (bottom-right) — never changes, a fixed point

**Core logic:**
```c
static int neighbors(int r, int c)
{
    int count = 0;
    for (int dr = -1; dr <= 1; dr++)
        for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0) continue;  // skip self
            int nr = r + dr, nc = c + dc;
            if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS)
                count += grid[nr][nc];  // 1 if alive, 0 if dead
        }
    return count;
}
```

**Rules applied each generation:**
- Live cell with 2 or 3 neighbors → stays alive
- Live cell with fewer or more → dies
- Dead cell with exactly 3 neighbors → becomes alive

**Output:** Each generation prints an ASCII grid with `#` for alive cells and spaces for dead ones, bordered by `+---+`.

**Why it's a good demo:** It uses nested loops, 2D arrays, conditionals, and arithmetic — all the building blocks of real programs — and produces a visually interesting result entirely in text.

---

## 3. How start.S Ties Everything Together

`firmware/start.S` is the glue that connects the hardware to your C code. It runs before `main()` — in fact there is no `main()`. Here is what it does in order:

**1. Reset vector** (first instruction the CPU executes at address 0x0):
```asm
reset_vec:
    picorv32_waitirq_insn(zero)   // clear any pending IRQs
    picorv32_maskirq_insn(zero, zero)
    j start                        // jump to main code
```

**2. IRQ vector** (CPU jumps here on any interrupt):
- Saves all 32 registers to a fixed memory region (`irq_regs`)
- Calls your `irq()` C function
- Restores all registers and returns

**3. Main startup** (the `start:` label):
- Zero-initializes all 32 CPU registers
- Sets up the stack pointer (`sp = 128KB`)
- Calls each demo in sequence: `hello` → instruction tests → `sieve` → `multest` → `stats` → `game`
- Fires `ebreak` to end the simulation

Each demo is conditionally compiled with `#define ENABLE_*` flags at the top of the file, so you can easily enable or disable individual parts.

---

## 4. Repository Anatomy

```
picorv32/
│
├── picorv32.v              ← The entire CPU core in one Verilog file (~3000 lines)
│                             This is what you're actually running your code on.
│
├── testbench.v             ← Simulation harness for iverilog
│                             Provides RAM, UART output, IRQ signals, cycle timeout.
│
├── testbench_wb.v          ← Same but with Wishbone bus interface
├── testbench_ez.v          ← Minimal testbench (no firmware needed)
│
├── Makefile                ← All build and test commands
├── Dockerfile              ← Workshop Docker image definition
│
├── firmware/
│   ├── start.S             ← Boot code + IRQ handler (assembly)
│   ├── firmware.h          ← Header shared by all C files
│   ├── print.c             ← UART output (print_str, print_dec, print_hex)
│   ├── hello.c             ← "hello world"
│   ├── sieve.c             ← Prime number sieve with checksum
│   ├── multest.c           ← M-extension multiply/divide verification
│   ├── stats.c             ← Cycle and instruction counters (CPI)
│   ├── irq.c               ← Interrupt handler + register dump
│   ├── game.c              ← Conway's Game of Life (added in workshop)
│   ├── sections.lds        ← Linker script: places code at address 0x0
│   └── makehex.py          ← Converts binary firmware to hex for simulation
│
└── tests/
    ├── add.S               ← Tests the ADD instruction
    ├── addi.S              ← Tests ADDI
    ├── mul.S               ← Tests MUL
    ├── div.S               ← Tests DIV
    ├── beq.S               ← Tests BEQ (branch if equal)
    ├── lw.S                ← Tests LW (load word)
    ├── sw.S                ← Tests SW (store word)
    └── ...                 ← 44 files total, one per RV32IM instruction
```

### How the pieces connect

```
sections.lds   — tells the linker: put everything starting at address 0x0
     │
     ▼
start.S + *.c  — compiled and linked into firmware.elf
     │
     ▼
firmware.hex   — loaded into testbench RAM at address 0x0
     │
     ▼
picorv32.v     — fetches instructions from RAM, executes them
     │
     ▼
testbench.v    — watches address 0x10000000 writes → prints to terminal
```

### Where to look for what

| I want to understand... | Look at |
|------------------------|---------|
| The CPU itself | `picorv32.v` |
| How simulation works | `testbench.v` |
| How boot/IRQ works | `firmware/start.S` |
| How output works | `firmware/print.c` |
| Individual instruction behavior | `tests/*.S` |
| How to add a new C demo | Copy any `firmware/*.c`, add to `Makefile` and `start.S` |

---

## 5. The Build Pipeline

Running `make test` triggers this chain:

```
1. Compile each tests/*.S file → tests/*.o
   riscv-none-elf-gcc -march=rv32im ...

2. Compile each firmware/*.c file → firmware/*.o
   riscv-none-elf-gcc -march=rv32ic -Os -ffreestanding -nostdlib ...

3. Link everything → firmware/firmware.elf
   using sections.lds (code starts at 0x0)

4. Strip to raw binary → firmware/firmware.bin
   riscv-none-elf-objcopy -O binary

5. Convert to hex → firmware/firmware.hex
   python3 firmware/makehex.py

6. Compile the testbench → testbench.vvp
   iverilog testbench.v picorv32.v

7. Run the simulation
   vvp testbench.vvp
   → reads firmware.hex into RAM
   → simulates the CPU
   → prints output to terminal
   → ends when EBREAK fires
```

**Key compiler flags:**
- `-ffreestanding` — no standard library assumed
- `-nostdlib` — don't link libc or startup files
- `-march=rv32imc` — target RV32I + M extension + Compressed instructions
- `-Os` — optimize for size (important on embedded targets)

---

## 6. Running the Tests

| Command | What it does |
|---------|-------------|
| `make test` | Full simulation: all instruction tests + all firmware demos |
| `make test_vcd` | Same + generates `testbench.vcd` waveform file |
| `make test_wb` | Tests the Wishbone bus interface variant |
| `make test_axi` | Tests the AXI4-Lite bus interface variant |
| `make test_ez` | Minimal testbench — runs without any firmware |

**To add your own C program:**

1. Create `firmware/myprog.c` with a function `void myprog(void)`
2. Add `void myprog(void);` to `firmware/firmware.h`
3. Add `firmware/myprog.o` to `FIRMWARE_OBJS` in the `Makefile`
4. Add `#define ENABLE_MYPROG` and `.global myprog` to `firmware/start.S`
5. Add the call block after `ENABLE_STATS`:
   ```asm
   #ifdef ENABLE_MYPROG
       jal ra, myprog
   #endif
   ```
6. Run `make test`
