# PicoRV32 RISC-V Workshop

A hands-on introduction to RISC-V using **PicoRV32** — a small, open-source RV32IMC CPU core written in Verilog. You will compile bare-metal C firmware, run it on a simulated CPU, and see real RISC-V instructions executing cycle by cycle.

The environment includes:
- **PicoRV32** CPU core (`picorv32.v`)
- **Icarus Verilog** simulator
- **xPack RISC-V GCC toolchain** (riscv-none-elf)
- Demo firmware: Hello World, Prime Sieve, Multiply/Divide, IRQ handling, Performance stats, and **Conway's Game of Life**

---

## Getting Started with Docker

No installation needed — everything runs inside a Docker container.

**Step 1 — Install Docker Desktop**

Download from [docker.com/products/docker-desktop](https://www.docker.com/products/docker-desktop) and start it.

**Step 2 — Clone the repo**

```bash
git clone https://github.com/deyaa1251/picorv32_docker
cd picorv32_docker
```

**Step 3 — Build the Docker image**

```bash
docker build -t picorv32-workshop .
```

**Step 4 — Start the workshop environment**

```bash
docker run --rm -it picorv32-workshop
```

---

## Running the Demos

Once inside the container:

```bash
# Run the full simulation (all instruction tests + firmware demos)
make test

# Run with waveform output (opens in GTKWave)
make test_vcd

# Test the Wishbone bus interface
make test_wb

# Test the AXI4-Lite bus interface
make test_axi
```

---

## What Runs on the Core

| Demo | What it shows |
|------|--------------|
| **Hello World** | Basic C code + UART output |
| **Instruction tests** | All 44 RV32IM instructions verified individually |
| **Prime Sieve** | Sieve of Eratosthenes with checksum validation |
| **Multiply/Divide** | Hardware M-extension vs software emulation |
| **IRQ Handler** | Timer and external interrupts, full register dump |
| **Performance stats** | Cycle counter, instruction counter, CPI |
| **Conway's Game of Life** | ASCII game running bare-metal on the RISC-V core |

---

## Key Files

```
picorv32.v          — The CPU core (single Verilog file, ~3000 lines)
testbench.v         — Simulation testbench
firmware/
  start.S           — Boot code and IRQ handler (assembly)
  hello.c           — Hello World
  sieve.c           — Prime number sieve
  multest.c         — Multiply/divide tests
  stats.c           — Performance counters
  game.c            — Conway's Game of Life
  irq.c             — Interrupt handler
tests/              — Individual RISC-V instruction tests
Dockerfile          — Workshop Docker image
```

---

## Original Core

PicoRV32 is developed by [YosysHQ](https://github.com/YosysHQ/picorv32) and licensed under the ISC license.
