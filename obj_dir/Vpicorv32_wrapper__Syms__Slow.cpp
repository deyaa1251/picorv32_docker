// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpicorv32_wrapper__pch.h"

Vpicorv32_wrapper__Syms::Vpicorv32_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vpicorv32_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(440);
    // Setup sub module instances
    TOP__picorv32_wrapper.ctor(this, "picorv32_wrapper");
    TOP__picorv32_wrapper__mem.ctor(this, "picorv32_wrapper.mem");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.picorv32_wrapper = &TOP__picorv32_wrapper;
    TOP__picorv32_wrapper.mem = &TOP__picorv32_wrapper__mem;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__picorv32_wrapper.__Vconfigure(true);
    TOP__picorv32_wrapper__mem.__Vconfigure(true);
    // Setup scopes
    __Vscopep_picorv32_wrapper__mem = new VerilatedScope{this, "picorv32_wrapper.mem", "mem", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_picorv32_wrapper__mem->varInsert("memory", &(TOP__picorv32_wrapper__mem.memory), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,0,32767 ,31,0);
}

Vpicorv32_wrapper__Syms::~Vpicorv32_wrapper__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_picorv32_wrapper__mem, __Vscopep_picorv32_wrapper__mem = nullptr);
    // Tear down sub module instances
    TOP__picorv32_wrapper__mem.dtor();
    TOP__picorv32_wrapper.dtor();
}
