// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

void Vpicorv32___024root___eval_triggers_vec__ico(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers_vec__ico\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vpicorv32___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___trigger_anySet__ico\n"); );
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

void Vpicorv32___024root___ico_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___ico_sequent__TOP__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.picorv32__DOT__mem_rdata_word = vlSelfRef.mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.picorv32__DOT__mem_rdata_word = (
                                                   (2U 
                                                    & vlSelfRef.picorv32__DOT__reg_op1)
                                                    ? 
                                                   (vlSelfRef.mem_rdata 
                                                    >> 0x10U)
                                                    : 
                                                   (0x0000ffffU 
                                                    & vlSelfRef.mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.picorv32__DOT__mem_rdata_word = (
                                                   (2U 
                                                    & vlSelfRef.picorv32__DOT__reg_op1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.picorv32__DOT__reg_op1)
                                                     ? 
                                                    (vlSelfRef.mem_rdata 
                                                     >> 0x18U)
                                                     : 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.mem_rdata 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.picorv32__DOT__reg_op1)
                                                     ? 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.mem_rdata 
                                                        >> 8U))
                                                     : 
                                                    (0x000000ffU 
                                                     & vlSelfRef.mem_rdata)));
    }
    vlSelfRef.mem_la_write = ((IData)(vlSelfRef.resetn) 
                              & ((~ (0U != (IData)(vlSelfRef.picorv32__DOT__mem_state))) 
                                 & (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
    vlSelfRef.picorv32__DOT__clear_prefetched_high_word 
        = vlSelfRef.picorv32__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.picorv32__DOT__prefetched_high_word)))) {
        vlSelfRef.picorv32__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.picorv32__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.picorv32__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.picorv32__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.mem_la_read = ((IData)(vlSelfRef.resetn) 
                             & ((~ (0U != (IData)(vlSelfRef.picorv32__DOT__mem_state))) 
                                & ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                                   | ((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)))));
    vlSelfRef.picorv32__DOT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                         & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
            ? vlSelfRef.mem_rdata : vlSelfRef.picorv32__DOT__mem_rdata_q);
    vlSelfRef.picorv32__DOT__mem_done = ((IData)(vlSelfRef.resetn) 
                                         & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer) 
                                             & ((0U 
                                                 != (IData)(vlSelfRef.picorv32__DOT__mem_state)) 
                                                & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h233421b0_0_0))) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.picorv32__DOT__mem_state)) 
                                               & (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst))));
}

void Vpicorv32___024root___eval_ico(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_ico\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vpicorv32___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vpicorv32___024root___eval_phase__ico(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__ico\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vpicorv32___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vpicorv32___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32___024root___eval_triggers_vec__act(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers_vec__act\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vpicorv32___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32__ConstPool__TABLE_hee98425f_0;

void Vpicorv32___024root___nba_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___nba_sequent__TOP__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__picorv32__DOT__mem_state;
    __Vdly__picorv32__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__picorv32__DOT__reg_sh;
    __Vdly__picorv32__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__picorv32__DOT__reg_out;
    __Vdly__picorv32__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__picorv32__DOT__count_cycle;
    __Vdly__picorv32__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__decoder_trigger;
    __Vdly__picorv32__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__decoder_pseudo_trigger;
    __Vdly__picorv32__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__mem_do_rinst;
    __Vdly__picorv32__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__picorv32__DOT__mem_wordsize;
    __Vdly__picorv32__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__latched_is_lu;
    __Vdly__picorv32__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__latched_is_lh;
    __Vdly__picorv32__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__latched_is_lb;
    __Vdly__picorv32__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__picorv32__DOT__reg_pc;
    __Vdly__picorv32__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__picorv32__DOT__count_instr;
    __Vdly__picorv32__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__picorv32__DOT__mem_do_prefetch;
    __Vdly__picorv32__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__picorv32__DOT__cpu_state;
    __Vdly__picorv32__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__picorv32__DOT__reg_op1;
    __Vdly__picorv32__DOT__reg_op1 = 0;
    IData/*31:0*/ __VdlyVal__picorv32__DOT__cpuregs__v0;
    __VdlyVal__picorv32__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__picorv32__DOT__cpuregs__v0;
    __VdlyDim0__picorv32__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__picorv32__DOT__cpuregs__v0;
    __VdlySet__picorv32__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__picorv32__DOT__reg_sh = vlSelfRef.picorv32__DOT__reg_sh;
    __Vdly__picorv32__DOT__count_cycle = vlSelfRef.picorv32__DOT__count_cycle;
    __Vdly__picorv32__DOT__decoder_pseudo_trigger = vlSelfRef.picorv32__DOT__decoder_pseudo_trigger;
    __Vdly__picorv32__DOT__latched_is_lu = vlSelfRef.picorv32__DOT__latched_is_lu;
    __Vdly__picorv32__DOT__latched_is_lh = vlSelfRef.picorv32__DOT__latched_is_lh;
    __Vdly__picorv32__DOT__latched_is_lb = vlSelfRef.picorv32__DOT__latched_is_lb;
    __Vdly__picorv32__DOT__count_instr = vlSelfRef.picorv32__DOT__count_instr;
    __Vdly__picorv32__DOT__decoder_trigger = vlSelfRef.picorv32__DOT__decoder_trigger;
    __Vdly__picorv32__DOT__reg_pc = vlSelfRef.picorv32__DOT__reg_pc;
    __Vdly__picorv32__DOT__mem_wordsize = vlSelfRef.picorv32__DOT__mem_wordsize;
    __Vdly__picorv32__DOT__mem_do_prefetch = vlSelfRef.picorv32__DOT__mem_do_prefetch;
    __Vdly__picorv32__DOT__reg_out = vlSelfRef.picorv32__DOT__reg_out;
    __Vdly__picorv32__DOT__cpu_state = vlSelfRef.picorv32__DOT__cpu_state;
    __Vdly__picorv32__DOT__mem_do_rinst = vlSelfRef.picorv32__DOT__mem_do_rinst;
    __Vdly__picorv32__DOT__reg_op1 = vlSelfRef.picorv32__DOT__reg_op1;
    __VdlySet__picorv32__DOT__cpuregs__v0 = 0U;
    __Vdly__picorv32__DOT__mem_state = vlSelfRef.picorv32__DOT__mem_state;
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.picorv32__DOT__latched_rd)))) {
        __VdlyVal__picorv32__DOT__cpuregs__v0 = vlSelfRef.picorv32__DOT__cpuregs_wrdata;
        __VdlyDim0__picorv32__DOT__cpuregs__v0 = vlSelfRef.picorv32__DOT__latched_rd;
        __VdlySet__picorv32__DOT__cpuregs__v0 = 1U;
    }
    vlSelfRef.trace_valid = 0U;
    vlSelfRef.picorv32__DOT__alu_wait_2 = 0U;
    vlSelfRef.trace_data = 0ULL;
    vlSelfRef.picorv32__DOT__alu_wait = 0U;
    vlSelfRef.picorv32__DOT__q_ascii_instr = vlSelfRef.picorv32__DOT__dbg_ascii_instr;
    vlSelfRef.picorv32__DOT__q_insn_imm = vlSelfRef.picorv32__DOT__dbg_insn_imm;
    vlSelfRef.picorv32__DOT__q_insn_rs1 = vlSelfRef.picorv32__DOT__dbg_insn_rs1;
    vlSelfRef.picorv32__DOT__q_insn_rs2 = vlSelfRef.picorv32__DOT__dbg_insn_rs2;
    vlSelfRef.picorv32__DOT__q_insn_rd = vlSelfRef.picorv32__DOT__dbg_insn_rd;
    vlSelfRef.picorv32__DOT__q_insn_opcode = vlSelfRef.picorv32__DOT__dbg_insn_opcode;
    vlSelfRef.picorv32__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.picorv32__DOT__clear_prefetched_high_word;
    if (vlSelfRef.picorv32__DOT__launch_next_insn) {
        vlSelfRef.picorv32__DOT__dbg_insn_addr = vlSelfRef.picorv32__DOT__next_pc;
        vlSelfRef.picorv32__DOT__dbg_rs1val = 0U;
        vlSelfRef.picorv32__DOT__dbg_rs2val = 0U;
        vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.picorv32__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.picorv32__DOT__alu_out_0_q = vlSelfRef.picorv32__DOT__alu_out_0;
    vlSelfRef.picorv32__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.eoi = 0U;
        vlSelfRef.pcpi_valid = 0U;
        vlSelfRef.picorv32__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.picorv32__DOT__pcpi_timeout = 0U;
        vlSelfRef.picorv32__DOT__latched_trace = 0U;
        vlSelfRef.picorv32__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.picorv32__DOT__irq_pending = vlSelfRef.picorv32__DOT__next_irq_pending;
    vlSelfRef.picorv32__DOT__dbg_next = vlSelfRef.picorv32__DOT__launch_next_insn;
    vlSelfRef.picorv32__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.picorv32__DOT__decoder_pseudo_trigger;
    if ((1U & (~ ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap))))) {
        if (vlSelfRef.mem_la_write) {
            vlSelfRef.mem_wdata = vlSelfRef.mem_la_wdata;
        }
        if (((IData)(vlSelfRef.mem_la_read) | (IData)(vlSelfRef.mem_la_write))) {
            vlSelfRef.mem_addr = vlSelfRef.mem_la_addr;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap)))) {
        vlSelfRef.picorv32__DOT__dbg_valid_insn = 0U;
        vlSelfRef.picorv32__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.picorv32__DOT__launch_next_insn) {
        vlSelfRef.picorv32__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.picorv32__DOT__clear_prefetched_high_word) {
        vlSelfRef.picorv32__DOT__prefetched_high_word = 0U;
    }
    if (vlSelfRef.picorv32__DOT__decoder_trigger_q) {
        vlSelfRef.picorv32__DOT__cached_ascii_instr 
            = vlSelfRef.picorv32__DOT__new_ascii_instr;
        vlSelfRef.picorv32__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.picorv32__DOT__next_insn_opcode))
                ? vlSelfRef.picorv32__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.picorv32__DOT__next_insn_opcode));
        vlSelfRef.picorv32__DOT__cached_insn_rd = vlSelfRef.picorv32__DOT__decoded_rd;
        vlSelfRef.picorv32__DOT__cached_insn_rs1 = vlSelfRef.picorv32__DOT__decoded_rs1;
        vlSelfRef.picorv32__DOT__cached_insn_rs2 = vlSelfRef.picorv32__DOT__decoded_rs2;
        vlSelfRef.picorv32__DOT__cached_insn_imm = vlSelfRef.picorv32__DOT__decoded_imm;
    }
    if (__VdlySet__picorv32__DOT__cpuregs__v0) {
        vlSelfRef.picorv32__DOT__cpuregs[__VdlyDim0__picorv32__DOT__cpuregs__v0] 
            = __VdlyVal__picorv32__DOT__cpuregs__v0;
    }
    if (vlSelfRef.resetn) {
        if ((1U & (~ (IData)(vlSelfRef.picorv32__DOT__last_mem_valid)))) {
            vlSelfRef.picorv32__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.picorv32__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.picorv32__DOT__last_mem_valid = ((IData)(vlSelfRef.resetn) 
                                               && ((IData)(vlSelfRef.mem_valid) 
                                                   & (~ (IData)(vlSelfRef.mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
            __Vdly__picorv32__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.mem_ready)))) {
            vlSelfRef.mem_valid = 0U;
        }
        vlSelfRef.picorv32__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.mem_la_read) | (IData)(vlSelfRef.mem_la_write))) {
            vlSelfRef.mem_wstrb = ((IData)(vlSelfRef.mem_la_wstrb) 
                                   & (- (IData)((IData)(vlSelfRef.mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.picorv32__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata))) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = ((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                                       | (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst));
                vlSelfRef.mem_wstrb = 0U;
                __Vdly__picorv32__DOT__mem_state = 1U;
            }
            if (vlSelfRef.picorv32__DOT__mem_do_wdata) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = 0U;
                __Vdly__picorv32__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.picorv32__DOT__mem_state))) {
            if (vlSelfRef.picorv32__DOT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.picorv32__DOT__mem_la_secondword = 0U;
                __Vdly__picorv32__DOT__mem_state = 
                    (((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                      | (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata))
                      ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.picorv32__DOT__mem_state))) {
            if (vlSelfRef.picorv32__DOT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                __Vdly__picorv32__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.picorv32__DOT__mem_state))) {
            if (vlSelfRef.picorv32__DOT__mem_do_rinst) {
                __Vdly__picorv32__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.picorv32__DOT__dbg_insn_opcode = vlSelfRef.picorv32__DOT__q_insn_opcode;
    vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__q_insn_rs1;
    vlSelfRef.picorv32__DOT__mem_state = __Vdly__picorv32__DOT__mem_state;
    vlSelfRef.trap = 0U;
    __Vdly__picorv32__DOT__reg_sh = 0U;
    __Vdly__picorv32__DOT__reg_out = 0U;
    vlSelfRef.picorv32__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.picorv32__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.picorv32__DOT__set_mem_do_wdata = 0U;
    __Vdly__picorv32__DOT__decoder_trigger = ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                                              & (IData)(vlSelfRef.picorv32__DOT__mem_done));
    vlSelfRef.picorv32__DOT__decoder_trigger_q = vlSelfRef.picorv32__DOT__decoder_trigger;
    __Vdly__picorv32__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.resetn) {
        __Vdly__picorv32__DOT__count_cycle = (1ULL 
                                              + vlSelfRef.picorv32__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.picorv32__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.picorv32__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                vlSelfRef.trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                __Vdly__picorv32__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.picorv32__DOT__do_waitirq))));
                __Vdly__picorv32__DOT__mem_wordsize = 0U;
                __Vdly__picorv32__DOT__latched_is_lu = 0U;
                __Vdly__picorv32__DOT__latched_is_lh = 0U;
                __Vdly__picorv32__DOT__latched_is_lb = 0U;
                vlSelfRef.picorv32__DOT__latched_rd 
                    = vlSelfRef.picorv32__DOT__decoded_rd;
                vlSelfRef.picorv32__DOT__latched_compr 
                    = vlSelfRef.picorv32__DOT__compressed_instr;
                vlSelfRef.picorv32__DOT__current_pc 
                    = vlSelfRef.picorv32__DOT__reg_next_pc;
                if (vlSelfRef.picorv32__DOT__latched_branch) {
                    vlSelfRef.picorv32__DOT__current_pc 
                        = ((IData)(vlSelfRef.picorv32__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.picorv32__DOT__latched_stalu)
                                               ? vlSelfRef.picorv32__DOT__alu_out_q
                                               : vlSelfRef.picorv32__DOT__reg_out))
                            : vlSelfRef.picorv32__DOT__reg_next_pc);
                }
                __Vdly__picorv32__DOT__reg_pc = vlSelfRef.picorv32__DOT__current_pc;
                vlSelfRef.picorv32__DOT__reg_next_pc 
                    = vlSelfRef.picorv32__DOT__current_pc;
                vlSelfRef.picorv32__DOT__latched_store = 0U;
                vlSelfRef.picorv32__DOT__latched_stalu = 0U;
                vlSelfRef.picorv32__DOT__latched_branch = 0U;
                if (vlSelfRef.picorv32__DOT__decoder_trigger) {
                    __Vdly__picorv32__DOT__count_instr 
                        = (1ULL + vlSelfRef.picorv32__DOT__count_instr);
                    vlSelfRef.picorv32__DOT__irq_delay 
                        = vlSelfRef.picorv32__DOT__irq_active;
                    vlSelfRef.picorv32__DOT__reg_next_pc 
                        = (vlSelfRef.picorv32__DOT__current_pc 
                           + ((IData)(vlSelfRef.picorv32__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.picorv32__DOT__instr_jal) {
                        __Vdly__picorv32__DOT__mem_do_rinst = 1U;
                        vlSelfRef.picorv32__DOT__reg_next_pc 
                            = (vlSelfRef.picorv32__DOT__current_pc 
                               + vlSelfRef.picorv32__DOT__decoded_imm_j);
                        vlSelfRef.picorv32__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__picorv32__DOT__mem_do_rinst = 0U;
                        __Vdly__picorv32__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.picorv32__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.picorv32__DOT__compressed_instr))));
                        __Vdly__picorv32__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                __Vdly__picorv32__DOT__reg_op1 = 0U;
                vlSelfRef.picorv32__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.picorv32__DOT__instr_trap) 
                      | (IData)(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.picorv32__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.picorv32__DOT__instr_trap) {
                        __Vdly__picorv32__DOT__cpu_state = 0x80U;
                    } else if (vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.picorv32__DOT__instr_rdcycle) {
                            __Vdly__picorv32__DOT__reg_out 
                                = (IData)(vlSelfRef.picorv32__DOT__count_cycle);
                        } else if (vlSelfRef.picorv32__DOT__instr_rdcycleh) {
                            __Vdly__picorv32__DOT__reg_out 
                                = (IData)((vlSelfRef.picorv32__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.picorv32__DOT__instr_rdinstr) {
                            __Vdly__picorv32__DOT__reg_out 
                                = (IData)(vlSelfRef.picorv32__DOT__count_instr);
                        } else if (vlSelfRef.picorv32__DOT__instr_rdinstrh) {
                            __Vdly__picorv32__DOT__reg_out 
                                = (IData)((vlSelfRef.picorv32__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.picorv32__DOT__latched_store = 1U;
                        __Vdly__picorv32__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.picorv32__DOT__is_lui_auipc_jal) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = ((IData)(vlSelfRef.picorv32__DOT__instr_lui)
                                ? 0U : vlSelfRef.picorv32__DOT__reg_pc);
                        vlSelfRef.picorv32__DOT__reg_op2 
                            = vlSelfRef.picorv32__DOT__decoded_imm;
                        __Vdly__picorv32__DOT__mem_do_rinst 
                            = vlSelfRef.picorv32__DOT__mem_do_prefetch;
                        __Vdly__picorv32__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.picorv32__DOT__latched_store = 1U;
                        __Vdly__picorv32__DOT__reg_out 
                            = vlSelfRef.picorv32__DOT__timer;
                        vlSelfRef.picorv32__DOT__dbg_rs1val 
                            = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                        vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__picorv32__DOT__cpu_state = 0x40U;
                        vlSelfRef.picorv32__DOT__timer 
                            = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.picorv32__DOT__instr_trap)))) {
                    __Vdly__picorv32__DOT__reg_op1 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32__DOT__cpu_state = 1U;
                    __Vdly__picorv32__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.picorv32__DOT__is_slli_srli_srai) {
                    __Vdly__picorv32__DOT__reg_op1 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32__DOT__reg_sh = vlSelfRef.picorv32__DOT__decoded_rs2;
                    __Vdly__picorv32__DOT__cpu_state = 4U;
                } else if (vlSelfRef.picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__picorv32__DOT__reg_op1 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.picorv32__DOT__reg_op2 
                        = vlSelfRef.picorv32__DOT__decoded_imm;
                    __Vdly__picorv32__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32__DOT__mem_do_prefetch;
                    __Vdly__picorv32__DOT__cpu_state = 8U;
                } else {
                    __Vdly__picorv32__DOT__reg_op1 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs1;
                    vlSelfRef.picorv32__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__picorv32__DOT__reg_sh = 
                        (0x0000001fU & vlSelfRef.picorv32__DOT__cpuregs_rs2);
                    vlSelfRef.picorv32__DOT__reg_op2 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs2;
                    vlSelfRef.picorv32__DOT__dbg_rs2val 
                        = vlSelfRef.picorv32__DOT__cpuregs_rs2;
                    vlSelfRef.picorv32__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.picorv32__DOT__is_sb_sh_sw) {
                        __Vdly__picorv32__DOT__cpu_state = 2U;
                        __Vdly__picorv32__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.picorv32__DOT__is_sll_srl_sra) {
                        __Vdly__picorv32__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__picorv32__DOT__mem_do_rinst 
                            = vlSelfRef.picorv32__DOT__mem_do_prefetch;
                        __Vdly__picorv32__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                __Vdly__picorv32__DOT__reg_sh = (0x0000001fU 
                                                 & vlSelfRef.picorv32__DOT__cpuregs_rs2);
                vlSelfRef.picorv32__DOT__reg_op2 = vlSelfRef.picorv32__DOT__cpuregs_rs2;
                vlSelfRef.picorv32__DOT__dbg_rs2val 
                    = vlSelfRef.picorv32__DOT__cpuregs_rs2;
                vlSelfRef.picorv32__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.picorv32__DOT__is_sb_sh_sw) {
                    __Vdly__picorv32__DOT__cpu_state = 2U;
                    __Vdly__picorv32__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.picorv32__DOT__is_sll_srl_sra) {
                    __Vdly__picorv32__DOT__cpu_state = 4U;
                } else {
                    __Vdly__picorv32__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32__DOT__mem_do_prefetch;
                    __Vdly__picorv32__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                __Vdly__picorv32__DOT__reg_out = (vlSelfRef.picorv32__DOT__reg_pc 
                                                  + vlSelfRef.picorv32__DOT__decoded_imm);
                if (vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.picorv32__DOT__latched_rd = 0U;
                    vlSelfRef.picorv32__DOT__latched_store 
                        = vlSelfRef.picorv32__DOT__alu_out_0;
                    vlSelfRef.picorv32__DOT__latched_branch 
                        = vlSelfRef.picorv32__DOT__alu_out_0;
                    if (vlSelfRef.picorv32__DOT__mem_done) {
                        __Vdly__picorv32__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.picorv32__DOT__alu_out_0) {
                        vlSelfRef.picorv32__DOT__set_mem_do_rinst = 1U;
                        __Vdly__picorv32__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.picorv32__DOT__latched_branch 
                        = vlSelfRef.picorv32__DOT__instr_jalr;
                    vlSelfRef.picorv32__DOT__latched_store = 1U;
                    vlSelfRef.picorv32__DOT__latched_stalu = 1U;
                    __Vdly__picorv32__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                vlSelfRef.picorv32__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.picorv32__DOT__reg_sh))) {
                    __Vdly__picorv32__DOT__reg_out 
                        = vlSelfRef.picorv32__DOT__reg_op1;
                    __Vdly__picorv32__DOT__mem_do_rinst 
                        = vlSelfRef.picorv32__DOT__mem_do_prefetch;
                    __Vdly__picorv32__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.picorv32__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.picorv32__DOT__instr_slli) 
                         | (IData)(vlSelfRef.picorv32__DOT__instr_sll))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_srli) 
                                | (IData)(vlSelfRef.picorv32__DOT__instr_srl))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_srai) 
                                | (IData)(vlSelfRef.picorv32__DOT__instr_sra))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 4U);
                    }
                    __Vdly__picorv32__DOT__reg_sh = 
                        (0x0000001fU & ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                        - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.picorv32__DOT__instr_slli) 
                         | (IData)(vlSelfRef.picorv32__DOT__instr_sll))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_srli) 
                                | (IData)(vlSelfRef.picorv32__DOT__instr_srl))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_srai) 
                                | (IData)(vlSelfRef.picorv32__DOT__instr_sra))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.picorv32__DOT__reg_op1, 1U);
                    }
                    __Vdly__picorv32__DOT__reg_sh = 
                        (0x0000001fU & ((IData)(vlSelfRef.picorv32__DOT__reg_sh) 
                                        - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.picorv32__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = (vlSelfRef.picorv32__DOT__reg_op1 
                               + vlSelfRef.picorv32__DOT__decoded_imm);
                        vlSelfRef.picorv32__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.picorv32__DOT__instr_sb) {
                            __Vdly__picorv32__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.picorv32__DOT__instr_sh) {
                            __Vdly__picorv32__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.picorv32__DOT__instr_sw) {
                            __Vdly__picorv32__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.picorv32__DOT__mem_done))) {
                        __Vdly__picorv32__DOT__cpu_state = 0x40U;
                        __Vdly__picorv32__DOT__decoder_trigger = 1U;
                        __Vdly__picorv32__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.picorv32__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.picorv32__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.picorv32__DOT__mem_done))) {
                        if (vlSelfRef.picorv32__DOT__latched_is_lu) {
                            __Vdly__picorv32__DOT__reg_out 
                                = vlSelfRef.picorv32__DOT__mem_rdata_word;
                        } else if (vlSelfRef.picorv32__DOT__latched_is_lh) {
                            __Vdly__picorv32__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_word));
                        } else if (vlSelfRef.picorv32__DOT__latched_is_lb) {
                            __Vdly__picorv32__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_word));
                        }
                        __Vdly__picorv32__DOT__decoder_trigger = 1U;
                        __Vdly__picorv32__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__picorv32__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)))) {
                        __Vdly__picorv32__DOT__reg_op1 
                            = (vlSelfRef.picorv32__DOT__reg_op1 
                               + vlSelfRef.picorv32__DOT__decoded_imm);
                        vlSelfRef.picorv32__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.picorv32__DOT__instr_lb) 
                             | (IData)(vlSelfRef.picorv32__DOT__instr_lbu))) {
                            __Vdly__picorv32__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.picorv32__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.picorv32__DOT__instr_lhu))) {
                            __Vdly__picorv32__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.picorv32__DOT__instr_lw) {
                            __Vdly__picorv32__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__picorv32__DOT__latched_is_lu 
                            = vlSelfRef.picorv32__DOT__is_lbu_lhu_lw;
                        __Vdly__picorv32__DOT__latched_is_lh 
                            = vlSelfRef.picorv32__DOT__instr_lh;
                        __Vdly__picorv32__DOT__latched_is_lb 
                            = vlSelfRef.picorv32__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__picorv32__DOT__count_cycle = 0ULL;
        __Vdly__picorv32__DOT__count_instr = 0ULL;
        vlSelfRef.picorv32__DOT__timer = 0U;
        __Vdly__picorv32__DOT__reg_pc = 0U;
        vlSelfRef.picorv32__DOT__reg_next_pc = 0U;
        vlSelfRef.picorv32__DOT__latched_store = 0U;
        vlSelfRef.picorv32__DOT__latched_stalu = 0U;
        vlSelfRef.picorv32__DOT__latched_branch = 0U;
        __Vdly__picorv32__DOT__latched_is_lu = 0U;
        __Vdly__picorv32__DOT__latched_is_lh = 0U;
        __Vdly__picorv32__DOT__latched_is_lb = 0U;
        vlSelfRef.picorv32__DOT__irq_delay = 0U;
        __Vdly__picorv32__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.pcpi_insn = 0U;
        vlSelfRef.picorv32__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.picorv32__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.picorv32__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.picorv32__DOT__instr_getq = 0U;
        vlSelfRef.picorv32__DOT__instr_setq = 0U;
        vlSelfRef.picorv32__DOT__instr_maskirq = 0U;
        vlSelfRef.picorv32__DOT__instr_timer = 0U;
        vlSelfRef.picorv32__DOT__instr_fence = ((0x0fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)) 
                                                & (~ 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                        >> 0x0cU)))));
    }
    if (((IData)(vlSelfRef.resetn) & ((IData)(vlSelfRef.picorv32__DOT__mem_do_rdata) 
                                      | (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.picorv32__DOT__reg_op1)))) {
            __Vdly__picorv32__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize)) 
             & vlSelfRef.picorv32__DOT__reg_op1)) {
            __Vdly__picorv32__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.picorv32__DOT__reg_pc)))) {
        __Vdly__picorv32__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.picorv32__DOT__mem_done)))) {
        __Vdly__picorv32__DOT__mem_do_prefetch = 0U;
        __Vdly__picorv32__DOT__mem_do_rinst = 0U;
        vlSelfRef.picorv32__DOT__mem_do_rdata = 0U;
        vlSelfRef.picorv32__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.picorv32__DOT__set_mem_do_rinst) {
        __Vdly__picorv32__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.picorv32__DOT__set_mem_do_rdata) {
        vlSelfRef.picorv32__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.picorv32__DOT__set_mem_do_wdata) {
        vlSelfRef.picorv32__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.picorv32__DOT__current_pc = 0U;
    vlSelfRef.picorv32__DOT__reg_sh = __Vdly__picorv32__DOT__reg_sh;
    vlSelfRef.picorv32__DOT__count_cycle = __Vdly__picorv32__DOT__count_cycle;
    vlSelfRef.picorv32__DOT__latched_is_lu = __Vdly__picorv32__DOT__latched_is_lu;
    vlSelfRef.picorv32__DOT__latched_is_lh = __Vdly__picorv32__DOT__latched_is_lh;
    vlSelfRef.picorv32__DOT__latched_is_lb = __Vdly__picorv32__DOT__latched_is_lb;
    vlSelfRef.picorv32__DOT__count_instr = __Vdly__picorv32__DOT__count_instr;
    if (((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32__DOT__mem_done))) {
        vlSelfRef.picorv32__DOT__instr_waitirq = 0U;
        vlSelfRef.picorv32__DOT__decoded_rs1 = (0x0000001fU 
                                                & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0fU));
    }
    vlSelfRef.picorv32__DOT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.picorv32__DOT__decoded_rs1))
                                             ? vlSelfRef.picorv32__DOT__cpuregs
                                            [vlSelfRef.picorv32__DOT__decoded_rs1]
                                             : 0U);
    vlSelfRef.picorv32__DOT__reg_pc = __Vdly__picorv32__DOT__reg_pc;
    vlSelfRef.picorv32__DOT__mem_wordsize = __Vdly__picorv32__DOT__mem_wordsize;
    vlSelfRef.picorv32__DOT__mem_do_prefetch = __Vdly__picorv32__DOT__mem_do_prefetch;
    vlSelfRef.picorv32__DOT__reg_out = __Vdly__picorv32__DOT__reg_out;
    vlSelfRef.picorv32__DOT__cpu_state = __Vdly__picorv32__DOT__cpu_state;
    vlSelfRef.picorv32__DOT__reg_op1 = __Vdly__picorv32__DOT__reg_op1;
    vlSelfRef.picorv32__DOT__do_waitirq = 0U;
    vlSelfRef.mem_la_write = ((IData)(vlSelfRef.resetn) 
                              & ((~ (0U != (IData)(vlSelfRef.picorv32__DOT__mem_state))) 
                                 & (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.picorv32__DOT__cpu_state;
    vlSelfRef.picorv32__DOT__dbg_ascii_state[0U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][0U];
    vlSelfRef.picorv32__DOT__dbg_ascii_state[1U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][1U];
    vlSelfRef.picorv32__DOT__dbg_ascii_state[2U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][2U];
    vlSelfRef.picorv32__DOT__dbg_ascii_state[3U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][3U];
    vlSelfRef.picorv32__DOT__cpuregs_write = 0U;
    vlSelfRef.picorv32__DOT__clear_prefetched_high_word 
        = vlSelfRef.picorv32__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.picorv32__DOT__prefetched_high_word)))) {
        vlSelfRef.picorv32__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.picorv32__DOT__irq_state = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.picorv32__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.picorv32__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.picorv32__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.picorv32__DOT__next_pc = (((IData)(vlSelfRef.picorv32__DOT__latched_branch) 
                                         & (IData)(vlSelfRef.picorv32__DOT__latched_store))
                                         ? (0xfffffffeU 
                                            & vlSelfRef.picorv32__DOT__reg_out)
                                         : vlSelfRef.picorv32__DOT__reg_next_pc);
    vlSelfRef.picorv32__DOT__alu_out_q = vlSelfRef.picorv32__DOT__alu_out;
    vlSelfRef.pcpi_rs2 = vlSelfRef.picorv32__DOT__reg_op2;
    if ((0U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.mem_la_wdata = vlSelfRef.picorv32__DOT__reg_op2;
        vlSelfRef.mem_la_wstrb = 0x0fU;
        vlSelfRef.picorv32__DOT__mem_rdata_word = vlSelfRef.mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.mem_la_wdata = ((vlSelfRef.picorv32__DOT__reg_op2 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSelfRef.picorv32__DOT__reg_op2));
        if ((2U & vlSelfRef.picorv32__DOT__reg_op1)) {
            vlSelfRef.mem_la_wstrb = 0x0cU;
            if ((2U & vlSelfRef.picorv32__DOT__reg_op1)) {
                vlSelfRef.picorv32__DOT__mem_rdata_word 
                    = (vlSelfRef.mem_rdata >> 0x10U);
            }
        } else {
            vlSelfRef.mem_la_wstrb = 3U;
            vlSelfRef.picorv32__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSelfRef.mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.mem_la_wdata = ((vlSelfRef.picorv32__DOT__reg_op2 
                                   << 0x00000018U) 
                                  | ((0x00ff0000U & 
                                      (vlSelfRef.picorv32__DOT__reg_op2 
                                       << 0x00000010U)) 
                                     | ((0x0000ff00U 
                                         & (vlSelfRef.picorv32__DOT__reg_op2 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & vlSelfRef.picorv32__DOT__reg_op2))));
        vlSelfRef.mem_la_wstrb = (0x0000000fU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.picorv32__DOT__reg_op1)));
        vlSelfRef.picorv32__DOT__mem_rdata_word = (
                                                   (2U 
                                                    & vlSelfRef.picorv32__DOT__reg_op1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.picorv32__DOT__reg_op1)
                                                     ? 
                                                    (vlSelfRef.mem_rdata 
                                                     >> 0x18U)
                                                     : 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.mem_rdata 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.picorv32__DOT__reg_op1)
                                                     ? 
                                                    (0x000000ffU 
                                                     & (vlSelfRef.mem_rdata 
                                                        >> 8U))
                                                     : 
                                                    (0x000000ffU 
                                                     & vlSelfRef.mem_rdata)));
    }
    vlSelfRef.pcpi_rs1 = vlSelfRef.picorv32__DOT__reg_op1;
    vlSelfRef.picorv32__DOT__alu_eq = (vlSelfRef.picorv32__DOT__reg_op1 
                                       == vlSelfRef.picorv32__DOT__reg_op2);
    vlSelfRef.picorv32__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.picorv32__DOT__reg_op1, vlSelfRef.picorv32__DOT__reg_op2);
    vlSelfRef.picorv32__DOT__alu_ltu = (vlSelfRef.picorv32__DOT__reg_op1 
                                        < vlSelfRef.picorv32__DOT__reg_op2);
    vlSelfRef.picorv32__DOT__is_lbu_lhu_lw = ((IData)(vlSelfRef.picorv32__DOT__instr_lbu) 
                                              | ((IData)(vlSelfRef.picorv32__DOT__instr_lhu) 
                                                 | (IData)(vlSelfRef.picorv32__DOT__instr_lw)));
    vlSelfRef.picorv32__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.picorv32__DOT__cpu_state))) {
        if (vlSelfRef.picorv32__DOT__latched_branch) {
            vlSelfRef.picorv32__DOT__cpuregs_write = 1U;
            vlSelfRef.picorv32__DOT__cpuregs_wrdata 
                = (vlSelfRef.picorv32__DOT__reg_pc 
                   + ((IData)(vlSelfRef.picorv32__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.picorv32__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.picorv32__DOT__latched_branch)))) {
            vlSelfRef.picorv32__DOT__cpuregs_write = 1U;
            vlSelfRef.picorv32__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.picorv32__DOT__latched_stalu)
                    ? vlSelfRef.picorv32__DOT__alu_out_q
                    : vlSelfRef.picorv32__DOT__reg_out);
        }
    }
    vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32__DOT__mem_done))) {
        vlSelfRef.picorv32__DOT__decoded_rd = (0x0000001fU 
                                               & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                  >> 7U));
        vlSelfRef.picorv32__DOT__decoded_rs2 = (0x0000001fU 
                                                & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x14U));
    }
    vlSelfRef.picorv32__DOT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))
                                             ? vlSelfRef.picorv32__DOT__cpuregs
                                            [vlSelfRef.picorv32__DOT__decoded_rs2]
                                             : 0U);
    vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.picorv32__DOT__instr_rdcycle = ((IData)(
                                                          (0xc0002073U 
                                                           == 
                                                           (0xfffff07fU 
                                                            & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                                                  | (IData)(
                                                            (0xc0102073U 
                                                             == 
                                                             (0xfffff07fU 
                                                              & vlSelfRef.picorv32__DOT__mem_rdata_q))));
        vlSelfRef.picorv32__DOT__instr_rdcycleh = ((IData)(
                                                           (0xc8002073U 
                                                            == 
                                                            (0xfffff07fU 
                                                             & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                                                   | (IData)(
                                                             (0xc8102073U 
                                                              == 
                                                              (0xfffff07fU 
                                                               & vlSelfRef.picorv32__DOT__mem_rdata_q))));
        vlSelfRef.picorv32__DOT__instr_rdinstr = (IData)(
                                                         (0xc0202073U 
                                                          == 
                                                          (0xfffff07fU 
                                                           & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_rdinstrh = (IData)(
                                                          (0xc8202073U 
                                                           == 
                                                           (0xfffff07fU 
                                                            & vlSelfRef.picorv32__DOT__mem_rdata_q)));
    }
    vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.picorv32__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.picorv32__DOT__instr_rdinstrh))));
    vlSelfRef.picorv32__DOT__is_lui_auipc_jal = ((IData)(vlSelfRef.picorv32__DOT__instr_lui) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT__instr_auipc) 
                                                    | (IData)(vlSelfRef.picorv32__DOT__instr_jal)));
    vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.picorv32__DOT__instr_lui) 
           | ((IData)(vlSelfRef.picorv32__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.picorv32__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.picorv32__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.picorv32__DOT__instr_add) 
                          | (IData)(vlSelfRef.picorv32__DOT__instr_sub)))))));
    vlSelfRef.picorv32__DOT__is_slti_blt_slt = ((IData)(vlSelfRef.picorv32__DOT__instr_slti) 
                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_blt) 
                                                   | (IData)(vlSelfRef.picorv32__DOT__instr_slt)));
    vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu = ((IData)(vlSelfRef.picorv32__DOT__instr_sltiu) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT__instr_bltu) 
                                                      | (IData)(vlSelfRef.picorv32__DOT__instr_sltu)));
    vlSelfRef.picorv32__DOT__is_compare = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                           | ((IData)(vlSelfRef.picorv32__DOT__instr_slti) 
                                              | ((IData)(vlSelfRef.picorv32__DOT__instr_slt) 
                                                 | ((IData)(vlSelfRef.picorv32__DOT__instr_sltiu) 
                                                    | (IData)(vlSelfRef.picorv32__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.picorv32__DOT__instr_beq = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                              & (0U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_bne = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                              & (0x00001000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_blt = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                              & (0x00004000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_bge = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                              & (0x00005000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_bltu = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                               & (0x00006000U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_bgeu = ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                               & (0x00007000U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_lb = ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                             & (0U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_lh = ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                             & (0x00001000U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_lw = ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                             & (0x00002000U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_lbu = ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                              & (0x00004000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_lhu = ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                              & (0x00005000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sb = ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                             & (0U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sh = ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                             & (0x00001000U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sw = ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw) 
                                             & (0x00002000U 
                                                == 
                                                (0x00007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_addi = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_slti = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x00002000U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sltiu = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                                & (0x00003000U 
                                                   == 
                                                   (0x00007000U 
                                                    & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_xori = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x00004000U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_ori = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                              & (0x00006000U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_andi = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x00007000U 
                                                  == 
                                                  (0x00007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_slli = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x00001000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_srli = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x00005000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_srai = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                                               & (0x40005000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.picorv32__DOT__mem_rdata_q))))));
        vlSelfRef.picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.picorv32__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.picorv32__DOT__is_compare = 0U;
        vlSelfRef.picorv32__DOT__decoded_imm = ((IData)(vlSelfRef.picorv32__DOT__instr_jal)
                                                 ? vlSelfRef.picorv32__DOT__decoded_imm_j
                                                 : 
                                                (((IData)(vlSelfRef.picorv32__DOT__instr_lui) 
                                                  | (IData)(vlSelfRef.picorv32__DOT__instr_auipc))
                                                  ? 
                                                 VL_SHIFTL_III(32,32,32, 
                                                               (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                >> 0x0cU), 0x0000000cU)
                                                  : 
                                                 (((IData)(vlSelfRef.picorv32__DOT__instr_jalr) 
                                                   | ((IData)(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                                                      | (IData)(vlSelfRef.picorv32__DOT__is_alu_reg_imm)))
                                                   ? 
                                                  VL_EXTENDS_II(32,12, 
                                                                (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                 >> 0x14U))
                                                   : 
                                                  ((IData)(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                                                    ? 
                                                   VL_EXTENDS_II(32,13, 
                                                                 ((((2U 
                                                                     & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                        >> 0x0000001eU)) 
                                                                    | (1U 
                                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                          >> 7U))) 
                                                                   << 0x0000000bU) 
                                                                  | ((0x000007e0U 
                                                                      & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                         >> 0x00000014U)) 
                                                                     | (0x0000001eU 
                                                                        & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                           >> 7U)))))
                                                    : 
                                                   ((IData)(vlSelfRef.picorv32__DOT__is_sb_sh_sw)
                                                     ? 
                                                    VL_EXTENDS_II(32,12, 
                                                                  ((0x00000fe0U 
                                                                    & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                       >> 0x00000014U)) 
                                                                   | (0x0000001fU 
                                                                      & (vlSelfRef.picorv32__DOT__mem_rdata_q 
                                                                         >> 7U))))
                                                     : 0U)))));
        vlSelfRef.picorv32__DOT__instr_add = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sub = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x40000000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sll = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x00001000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_slt = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x00002000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sltu = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                               & (0x00003000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_xor = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x00004000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_srl = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x00005000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_sra = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x40005000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_or = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                             & (0x00006000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__instr_and = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                              & (0x00007000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_q)));
        vlSelfRef.picorv32__DOT__is_sll_srl_sra = ((IData)(vlSelfRef.picorv32__DOT__is_alu_reg_reg) 
                                                   & ((IData)(
                                                              (0x00001000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                                                      | ((IData)(
                                                                 (0x00005000U 
                                                                  == 
                                                                  (0xfe007000U 
                                                                   & vlSelfRef.picorv32__DOT__mem_rdata_q))) 
                                                         | (IData)(
                                                                   (0x40005000U 
                                                                    == 
                                                                    (0xfe007000U 
                                                                     & vlSelfRef.picorv32__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.picorv32__DOT__mem_done))) {
        vlSelfRef.picorv32__DOT__compressed_instr = 0U;
        vlSelfRef.picorv32__DOT__is_alu_reg_imm = (0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__is_sb_sh_sw = (0x23U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__decoded_imm_j = ((0x000fffffU 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                                  | (0xfff00000U 
                                                     & VL_EXTENDS_II(32,21, 
                                                                     (0x001ffffeU 
                                                                      & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                                         >> 0x0000000bU)))));
        vlSelfRef.picorv32__DOT__decoded_imm_j = ((0xfffff801U 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                                  | (0x000007feU 
                                                     & (VL_EXTENDS_II(32,21, 
                                                                      (0x001ffffeU 
                                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                                          >> 0x0000000bU))) 
                                                        >> 9U)));
        vlSelfRef.picorv32__DOT__decoded_imm_j = ((0xfffff7ffU 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                                  | (0x00000800U 
                                                     & (VL_EXTENDS_II(32,21, 
                                                                      (0x001ffffeU 
                                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                                          >> 0x0000000bU))) 
                                                        << 2U)));
        vlSelfRef.picorv32__DOT__decoded_imm_j = ((0xfff00fffU 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                                  | (0x000ff000U 
                                                     & (VL_EXTENDS_II(32,21, 
                                                                      (0x001ffffeU 
                                                                       & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                                          >> 0x0000000bU))) 
                                                        << 0x0000000bU)));
        vlSelfRef.picorv32__DOT__decoded_imm_j = ((0xfffffffeU 
                                                   & vlSelfRef.picorv32__DOT__decoded_imm_j) 
                                                  | (1U 
                                                     & VL_EXTENDS_II(1,21, 
                                                                     (0x001ffffeU 
                                                                      & (vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
                                                                         >> 0x0000000bU)))));
        vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__instr_auipc = (0x17U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__instr_lui = (0x37U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__instr_jal = (0x6fU 
                                              == (0x0000007fU 
                                                  & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.picorv32__DOT__instr_jalr = (IData)(
                                                      (0x00000067U 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.picorv32__DOT__is_alu_reg_reg = (0x33U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.picorv32__DOT__instr_fence = 0U;
        vlSelfRef.picorv32__DOT__irq_active = 0U;
        vlSelfRef.picorv32__DOT__is_compare = 0U;
        vlSelfRef.picorv32__DOT__instr_beq = 0U;
        vlSelfRef.picorv32__DOT__instr_bne = 0U;
        vlSelfRef.picorv32__DOT__instr_blt = 0U;
        vlSelfRef.picorv32__DOT__instr_bge = 0U;
        vlSelfRef.picorv32__DOT__instr_bltu = 0U;
        vlSelfRef.picorv32__DOT__instr_bgeu = 0U;
        vlSelfRef.picorv32__DOT__instr_addi = 0U;
        vlSelfRef.picorv32__DOT__instr_slti = 0U;
        vlSelfRef.picorv32__DOT__instr_sltiu = 0U;
        vlSelfRef.picorv32__DOT__instr_xori = 0U;
        vlSelfRef.picorv32__DOT__instr_ori = 0U;
        vlSelfRef.picorv32__DOT__instr_andi = 0U;
        vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.picorv32__DOT__instr_add = 0U;
        vlSelfRef.picorv32__DOT__instr_sub = 0U;
        vlSelfRef.picorv32__DOT__instr_sll = 0U;
        vlSelfRef.picorv32__DOT__instr_slt = 0U;
        vlSelfRef.picorv32__DOT__instr_sltu = 0U;
        vlSelfRef.picorv32__DOT__instr_xor = 0U;
        vlSelfRef.picorv32__DOT__instr_srl = 0U;
        vlSelfRef.picorv32__DOT__instr_sra = 0U;
        vlSelfRef.picorv32__DOT__instr_or = 0U;
        vlSelfRef.picorv32__DOT__instr_and = 0U;
    }
    vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__q_insn_imm;
    vlSelfRef.picorv32__DOT__decoder_pseudo_trigger 
        = __Vdly__picorv32__DOT__decoder_pseudo_trigger;
    vlSelfRef.picorv32__DOT__decoder_trigger = __Vdly__picorv32__DOT__decoder_trigger;
    vlSelfRef.picorv32__DOT__launch_next_insn = ((0x40U 
                                                  == (IData)(vlSelfRef.picorv32__DOT__cpu_state)) 
                                                 & (IData)(vlSelfRef.picorv32__DOT__decoder_trigger));
    vlSelfRef.picorv32__DOT__alu_out_0 = 0U;
    vlSelfRef.picorv32__DOT__alu_out = 0U;
    if (vlSelfRef.picorv32__DOT__instr_beq) {
        vlSelfRef.picorv32__DOT__alu_out_0 = vlSelfRef.picorv32__DOT__alu_eq;
    } else if (vlSelfRef.picorv32__DOT__instr_bne) {
        vlSelfRef.picorv32__DOT__alu_out_0 = (1U & 
                                              (~ (IData)(vlSelfRef.picorv32__DOT__alu_eq)));
    } else if (vlSelfRef.picorv32__DOT__instr_bge) {
        vlSelfRef.picorv32__DOT__alu_out_0 = (1U & 
                                              (~ (IData)(vlSelfRef.picorv32__DOT__alu_lts)));
    } else if (vlSelfRef.picorv32__DOT__instr_bgeu) {
        vlSelfRef.picorv32__DOT__alu_out_0 = (1U & 
                                              (~ (IData)(vlSelfRef.picorv32__DOT__alu_ltu)));
    } else if (vlSelfRef.picorv32__DOT__is_slti_blt_slt) {
        vlSelfRef.picorv32__DOT__alu_out_0 = vlSelfRef.picorv32__DOT__alu_lts;
    } else if (vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.picorv32__DOT__alu_out_0 = vlSelfRef.picorv32__DOT__alu_ltu;
    }
    if (vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.picorv32__DOT__alu_out = ((IData)(vlSelfRef.picorv32__DOT__instr_sub)
                                             ? (vlSelfRef.picorv32__DOT__reg_op1 
                                                - vlSelfRef.picorv32__DOT__reg_op2)
                                             : (vlSelfRef.picorv32__DOT__reg_op1 
                                                + vlSelfRef.picorv32__DOT__reg_op2));
    } else if (vlSelfRef.picorv32__DOT__is_compare) {
        vlSelfRef.picorv32__DOT__alu_out = vlSelfRef.picorv32__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_xori) 
                | (IData)(vlSelfRef.picorv32__DOT__instr_xor))) {
        vlSelfRef.picorv32__DOT__alu_out = (vlSelfRef.picorv32__DOT__reg_op1 
                                            ^ vlSelfRef.picorv32__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_ori) 
                | (IData)(vlSelfRef.picorv32__DOT__instr_or))) {
        vlSelfRef.picorv32__DOT__alu_out = (vlSelfRef.picorv32__DOT__reg_op1 
                                            | vlSelfRef.picorv32__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.picorv32__DOT__instr_andi) 
                | (IData)(vlSelfRef.picorv32__DOT__instr_and))) {
        vlSelfRef.picorv32__DOT__alu_out = (vlSelfRef.picorv32__DOT__reg_op1 
                                            & vlSelfRef.picorv32__DOT__reg_op2);
    }
    vlSelfRef.picorv32__DOT__instr_trap = (1U & (~ 
                                                 ((IData)(vlSelfRef.picorv32__DOT__instr_lui) 
                                                  | ((IData)(vlSelfRef.picorv32__DOT__instr_auipc) 
                                                     | ((IData)(vlSelfRef.picorv32__DOT__instr_jal) 
                                                        | (((IData)(vlSelfRef.picorv32__DOT__instr_jalr) 
                                                            | ((IData)(vlSelfRef.picorv32__DOT__instr_beq) 
                                                               | ((IData)(vlSelfRef.picorv32__DOT__instr_bne) 
                                                                  | ((IData)(vlSelfRef.picorv32__DOT__instr_blt) 
                                                                     | ((IData)(vlSelfRef.picorv32__DOT__instr_bge) 
                                                                        | ((IData)(vlSelfRef.picorv32__DOT__instr_bltu) 
                                                                           | ((IData)(vlSelfRef.picorv32__DOT__instr_bgeu) 
                                                                              | ((IData)(vlSelfRef.picorv32__DOT__instr_lb) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_lh) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.picorv32__DOT__instr_sltu))))))))))))))))))))))))))))) 
                                                           | ((IData)(vlSelfRef.picorv32__DOT__instr_xor) 
                                                              | ((IData)(vlSelfRef.picorv32__DOT__instr_srl) 
                                                                 | ((IData)(vlSelfRef.picorv32__DOT__instr_sra) 
                                                                    | ((IData)(vlSelfRef.picorv32__DOT__instr_or) 
                                                                       | ((IData)(vlSelfRef.picorv32__DOT__instr_and) 
                                                                          | ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycle) 
                                                                             | ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__compressed_instr) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.picorv32__DOT__instr_timer) 
                                                                                | (IData)(vlSelfRef.picorv32__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.picorv32__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.picorv32__DOT__instr_lui) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_auipc) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_jal) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_jalr) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_beq) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_bne) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_blt) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_bge) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_bltu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_bgeu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_lb) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_lh) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_lw) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_lbu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_lhu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sb) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sh) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sw) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_addi) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_slti) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sltiu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_xori) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_ori) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_andi) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_slli) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_srli) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_srai) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_add) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sub) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sll) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_slt) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sltu) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_xor) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_srl) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_sra) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_or) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_and) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_rdcycle) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_rdcycleh) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_rdinstr) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_rdinstrh) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_fence) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_getq) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_setq) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.picorv32__DOT__compressed_instr) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_maskirq) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_waitirq) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.picorv32__DOT__instr_timer) {
        vlSelfRef.picorv32__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    if (vlSelfRef.picorv32__DOT__mem_xfer) {
        vlSelfRef.picorv32__DOT__next_insn_opcode = vlSelfRef.mem_rdata;
        vlSelfRef.picorv32__DOT__mem_rdata_q = vlSelfRef.mem_rdata;
    }
    vlSelfRef.picorv32__DOT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                         & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.picorv32__DOT__mem_xfer)
            ? vlSelfRef.mem_rdata : vlSelfRef.picorv32__DOT__mem_rdata_q);
    vlSelfRef.picorv32__DOT__dbg_ascii_instr = vlSelfRef.picorv32__DOT__q_ascii_instr;
    if (vlSelfRef.picorv32__DOT__dbg_next) {
        if (vlSelfRef.picorv32__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.picorv32__DOT__dbg_insn_opcode 
                = vlSelfRef.picorv32__DOT__cached_insn_opcode;
            vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__cached_insn_rs1;
            vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__cached_insn_rd;
            vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__cached_insn_rs2;
            vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__cached_insn_imm;
            vlSelfRef.picorv32__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.picorv32__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.picorv32__DOT__next_insn_opcode))
                    ? vlSelfRef.picorv32__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.picorv32__DOT__next_insn_opcode));
            vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__decoded_rs1;
            vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__decoded_rd;
            vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__decoded_rs2;
            vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__decoded_imm;
            vlSelfRef.picorv32__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.picorv32__DOT__mem_do_rinst = __Vdly__picorv32__DOT__mem_do_rinst;
    vlSelfRef.mem_la_addr = (((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                              | (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst))
                              ? (0xfffffffcU & vlSelfRef.picorv32__DOT__next_pc)
                              : (0xfffffffcU & vlSelfRef.picorv32__DOT__reg_op1));
    vlSelfRef.mem_la_read = ((IData)(vlSelfRef.resetn) 
                             & ((~ (0U != (IData)(vlSelfRef.picorv32__DOT__mem_state))) 
                                & ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
                                   | ((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.picorv32__DOT__mem_do_rdata)))));
    vlSelfRef.picorv32__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.picorv32__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
    vlSelfRef.picorv32__DOT__mem_done = ((IData)(vlSelfRef.resetn) 
                                         & (((IData)(vlSelfRef.picorv32__DOT__mem_xfer) 
                                             & ((0U 
                                                 != (IData)(vlSelfRef.picorv32__DOT__mem_state)) 
                                                & (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h233421b0_0_0))) 
                                            | ((3U 
                                                == (IData)(vlSelfRef.picorv32__DOT__mem_state)) 
                                               & (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst))));
}

void Vpicorv32___024root___eval_nba(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_nba\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vpicorv32___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vpicorv32___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vpicorv32___024root___eval_phase__act(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__act\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpicorv32___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vpicorv32___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vpicorv32___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpicorv32___024root___eval_phase__nba(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__nba\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpicorv32___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpicorv32___024root___eval_nba(vlSelf);
        Vpicorv32___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpicorv32___024root___eval(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpicorv32___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("picorv32.v", 62, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vpicorv32___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpicorv32___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("picorv32.v", 62, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpicorv32___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("picorv32.v", 62, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vpicorv32___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vpicorv32___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vpicorv32___024root___eval_debug_assertions(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_debug_assertions\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_ready & 0xfeU)))) {
        Verilated::overWidthError("mem_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.pcpi_wr & 0xfeU)))) {
        Verilated::overWidthError("pcpi_wr");
    }
    if (VL_UNLIKELY(((vlSelfRef.pcpi_wait & 0xfeU)))) {
        Verilated::overWidthError("pcpi_wait");
    }
    if (VL_UNLIKELY(((vlSelfRef.pcpi_ready & 0xfeU)))) {
        Verilated::overWidthError("pcpi_ready");
    }
}
#endif  // VL_DEBUG
