// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

void Vpicorv32_wrapper___024root___eval_triggers_vec__ico(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers_vec__ico\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vpicorv32_wrapper___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

void Vpicorv32_wrapper___024root___eval_ico(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_ico\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vpicorv32_wrapper___024root___eval_phase__ico(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__ico\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vpicorv32_wrapper___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vpicorv32_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32_wrapper___024root___eval_triggers_vec__act(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers_vec__act\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.clk) 
                                                       ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vpicorv32_wrapper___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vpicorv32_wrapper___024root___nba_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___nba_sequent__TOP__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.trap = vlSymsp->TOP__picorv32_wrapper.trap;
    vlSelfRef.trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlSelfRef.trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
}

void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper_axi4_memory* vlSelf);
void Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

void Vpicorv32_wrapper___024root___eval_nba(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_nba\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vpicorv32_wrapper___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1((&vlSymsp->TOP__picorv32_wrapper));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5((&vlSymsp->TOP__picorv32_wrapper__mem));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2((&vlSymsp->TOP__picorv32_wrapper));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6((&vlSymsp->TOP__picorv32_wrapper__mem));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vpicorv32_wrapper___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vpicorv32_wrapper___024root___eval_phase__act(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__act\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32_wrapper___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vpicorv32_wrapper___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpicorv32_wrapper___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpicorv32_wrapper___024root___eval_phase__nba(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__nba\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpicorv32_wrapper___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpicorv32_wrapper___024root___eval_nba(vlSelf);
        Vpicorv32_wrapper___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpicorv32_wrapper___024root___eval(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("testbench.v", 67, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vpicorv32_wrapper___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbench.v", 67, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpicorv32_wrapper___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("testbench.v", 67, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vpicorv32_wrapper___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vpicorv32_wrapper___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vpicorv32_wrapper___024root___eval_debug_assertions(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_debug_assertions\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");
    }
}
#endif  // VL_DEBUG
