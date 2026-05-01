// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(Vpicorv32_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_static(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_static\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper((&vlSymsp->TOP__picorv32_wrapper));
    Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem((&vlSymsp->TOP__picorv32_wrapper__mem));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);
VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_initial(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_initial\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper((&vlSymsp->TOP__picorv32_wrapper));
    Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem((&vlSymsp->TOP__picorv32_wrapper__mem));
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_final(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_final\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpicorv32_wrapper___024root___eval_phase__stl(Vpicorv32_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_settle(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_settle\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbench.v", 67, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vpicorv32_wrapper___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_triggers_vec__stl(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_triggers_vec__stl\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vpicorv32_wrapper___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32_wrapper___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vpicorv32_wrapper___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vpicorv32_wrapper___024root___stl_sequent__TOP__0(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
    vlSelfRef.trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlSelfRef.trap = vlSymsp->TOP__picorv32_wrapper.trap;
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

VL_ATTR_COLD void Vpicorv32_wrapper___024root___eval_stl(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_stl\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vpicorv32_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
        Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0((&vlSymsp->TOP__picorv32_wrapper));
    }
}

VL_ATTR_COLD bool Vpicorv32_wrapper___024root___eval_phase__stl(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__stl\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32_wrapper___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vpicorv32_wrapper___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vpicorv32_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vpicorv32_wrapper___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32_wrapper___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vpicorv32_wrapper___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32_wrapper___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(edge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32_wrapper___024root____Vm_traceActivitySetAll(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root____Vm_traceActivitySetAll\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vpicorv32_wrapper___024root___ctor_var_reset(Vpicorv32_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___ctor_var_reset\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214934560881419504ull);
    vlSelf->trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13633812473643571344ull);
    vlSelf->trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2099819338854512805ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
