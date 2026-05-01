// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32_wrapper.h for the primary calling header

#ifndef VERILATED_VPICORV32_WRAPPER___024ROOT_H_
#define VERILATED_VPICORV32_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"
class Vpicorv32_wrapper_picorv32_wrapper;


class Vpicorv32_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpicorv32_wrapper___024root final {
  public:
    // CELLS
    Vpicorv32_wrapper_picorv32_wrapper* picorv32_wrapper;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_OUT8(trap,0,0);
    VL_OUT8(trace_valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(trace_data,35,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vpicorv32_wrapper__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpicorv32_wrapper___024root(Vpicorv32_wrapper__Syms* symsp, const char* namep);
    ~Vpicorv32_wrapper___024root();
    VL_UNCOPYABLE(Vpicorv32_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
