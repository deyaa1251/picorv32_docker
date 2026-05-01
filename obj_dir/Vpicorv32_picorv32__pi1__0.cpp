// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

void Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_axi__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = vlSymsp->TOP.mem_axi_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = ((2U & vlSelfRef.__PVT__reg_op1)
                                            ? (vlSymsp->TOP.mem_axi_rdata 
                                               >> 0x10U)
                                            : (0x0000ffffU 
                                               & vlSymsp->TOP.mem_axi_rdata));
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = ((2U & vlSelfRef.__PVT__reg_op1)
                                            ? ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (vlSymsp->TOP.mem_axi_rdata 
                                                   >> 0x18U)
                                                : (0x000000ffU 
                                                   & (vlSymsp->TOP.mem_axi_rdata 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (0x000000ffU 
                                                   & (vlSymsp->TOP.mem_axi_rdata 
                                                      >> 8U))
                                                : (0x000000ffU 
                                                   & vlSymsp->TOP.mem_axi_rdata)));
    }
    vlSelfRef.__PVT__mem_la_write = ((IData)(vlSymsp->TOP.resetn) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__latched_branch) 
                | (0U != (IData)(vlSelfRef.__PVT__irq_state))) 
               | (~ (IData)(vlSymsp->TOP.resetn))))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__mem_la_read = ((IData)(vlSymsp->TOP.resetn) 
                                    & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                       & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                             | (IData)(vlSelfRef.__PVT__mem_do_rdata)))));
    vlSelfRef.mem_ready = ((IData)(vlSymsp->TOP.mem_axi_bvalid) 
                           | (IData)(vlSymsp->TOP.mem_axi_rvalid));
    vlSelfRef.__PVT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                 & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.__PVT__mem_rdata_latched_noshuffle = 
        ((IData)(vlSelfRef.__PVT__mem_xfer) ? vlSymsp->TOP.mem_axi_rdata
          : vlSelfRef.__PVT__mem_rdata_q);
    vlSelfRef.__PVT__mem_done = ((IData)(vlSymsp->TOP.resetn) 
                                 & (((IData)(vlSelfRef.__PVT__mem_xfer) 
                                     & ((0U != (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                              | (IData)(vlSelfRef.__PVT__mem_do_wdata))))) 
                                    | ((3U == (IData)(vlSelfRef.__PVT__mem_state)) 
                                       & (IData)(vlSelfRef.__PVT__mem_do_rinst))));
}

void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__reg_sh;
    __Vdly__reg_sh = 0;
    IData/*31:0*/ __Vdly__reg_out;
    __Vdly__reg_out = 0;
    QData/*63:0*/ __Vdly__count_cycle;
    __Vdly__count_cycle = 0;
    CData/*0:0*/ __Vdly__decoder_trigger;
    __Vdly__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__decoder_pseudo_trigger;
    __Vdly__decoder_pseudo_trigger = 0;
    IData/*31:0*/ __VdlyVal__cpuregs__v0;
    __VdlyVal__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpuregs__v0;
    __VdlyDim0__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpuregs__v0;
    __VdlySet__cpuregs__v0 = 0;
    // Body
    __Vdly__reg_sh = vlSelfRef.__PVT__reg_sh;
    __Vdly__count_cycle = vlSelfRef.__PVT__count_cycle;
    __Vdly__decoder_pseudo_trigger = vlSelfRef.__PVT__decoder_pseudo_trigger;
    vlSelfRef.__Vdly__latched_is_lu = vlSelfRef.__PVT__latched_is_lu;
    vlSelfRef.__Vdly__latched_is_lh = vlSelfRef.__PVT__latched_is_lh;
    vlSelfRef.__Vdly__latched_is_lb = vlSelfRef.__PVT__latched_is_lb;
    vlSelfRef.__Vdly__count_instr = vlSelfRef.__PVT__count_instr;
    __Vdly__decoder_trigger = vlSelfRef.__PVT__decoder_trigger;
    vlSelfRef.__Vdly__mem_do_prefetch = vlSelfRef.__PVT__mem_do_prefetch;
    vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__reg_pc;
    vlSelfRef.__Vdly__mem_wordsize = vlSelfRef.__PVT__mem_wordsize;
    vlSelfRef.__Vdly__mem_do_rinst = vlSelfRef.__PVT__mem_do_rinst;
    __Vdly__reg_out = vlSelfRef.__PVT__reg_out;
    vlSelfRef.__Vdly__cpu_state = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__reg_op1;
    __VdlySet__cpuregs__v0 = 0U;
    vlSelfRef.__Vdly__mem_state = vlSelfRef.__PVT__mem_state;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.__PVT__latched_rd)))) {
        __VdlyVal__cpuregs__v0 = vlSelfRef.__PVT__cpuregs_wrdata;
        __VdlyDim0__cpuregs__v0 = vlSelfRef.__PVT__latched_rd;
        __VdlySet__cpuregs__v0 = 1U;
    }
    vlSelfRef.__PVT__alu_wait_2 = 0U;
    vlSelfRef.__PVT__alu_wait = 0U;
    vlSelfRef.trace_data = 0ULL;
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_insn_addr = vlSelfRef.__PVT__next_pc;
    }
    vlSelfRef.__PVT__q_ascii_instr = vlSelfRef.__PVT__dbg_ascii_instr;
    vlSelfRef.__PVT__q_insn_imm = vlSelfRef.__PVT__dbg_insn_imm;
    vlSelfRef.__PVT__q_insn_rs1 = vlSelfRef.__PVT__dbg_insn_rs1;
    vlSelfRef.__PVT__q_insn_rs2 = vlSelfRef.__PVT__dbg_insn_rs2;
    vlSelfRef.__PVT__q_insn_rd = vlSelfRef.__PVT__dbg_insn_rd;
    vlSelfRef.__PVT__q_insn_opcode = vlSelfRef.__PVT__dbg_insn_opcode;
    vlSelfRef.__PVT__clear_prefetched_high_word_q = vlSelfRef.__PVT__clear_prefetched_high_word;
    vlSelfRef.__PVT__alu_out_0_q = vlSelfRef.__PVT__alu_out_0;
    vlSelfRef.__PVT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.__PVT__irq_mask = 0xffffffffU;
        vlSelfRef.__PVT__pcpi_timeout = 0U;
        vlSelfRef.__PVT__latched_trace = 0U;
        vlSelfRef.__PVT__next_irq_pending = 0U;
    }
    vlSelfRef.__PVT__irq_pending = vlSelfRef.__PVT__next_irq_pending;
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.pcpi_insn = 0U;
        vlSelfRef.__PVT__instr_ecall_ebreak = (((0x73U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_q)) 
                                                & (~ 
                                                   (0U 
                                                    != 
                                                    (vlSelfRef.__PVT__mem_rdata_q 
                                                     >> 0x15U)))) 
                                               & (~ 
                                                  (0U 
                                                   != 
                                                   (0x00001fffU 
                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                       >> 7U)))));
        vlSelfRef.__PVT__instr_getq = 0U;
        vlSelfRef.__PVT__instr_setq = 0U;
        vlSelfRef.__PVT__instr_maskirq = 0U;
        vlSelfRef.__PVT__instr_timer = 0U;
        vlSelfRef.__PVT__instr_fence = ((0x0fU == (0x0000007fU 
                                                   & vlSelfRef.__PVT__mem_rdata_q)) 
                                        & (~ (0U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__mem_rdata_q 
                                                >> 0x0cU)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.eoi = 0U;
        vlSelfRef.pcpi_valid = 0U;
        vlSelfRef.__PVT__irq_state = 0U;
        vlSelfRef.__PVT__instr_fence = 0U;
    }
    vlSelfRef.__PVT__dbg_next = vlSelfRef.__PVT__launch_next_insn;
    vlSelfRef.__PVT__decoder_pseudo_trigger_q = vlSelfRef.__PVT__decoder_pseudo_trigger;
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.trap)))) {
        vlSelfRef.__PVT__dbg_valid_insn = 0U;
        vlSelfRef.__PVT__prefetched_high_word = 0U;
    } else if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_valid_insn = 1U;
    }
    if ((1U & (~ ((~ (IData)(vlSymsp->TOP.resetn)) 
                  | (IData)(vlSelfRef.trap))))) {
        if (vlSelfRef.__PVT__mem_la_write) {
            vlSelfRef.mem_wdata = vlSelfRef.__PVT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.__PVT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__mem_la_write))) {
            vlSelfRef.mem_addr = (((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                   | (IData)(vlSelfRef.__PVT__mem_do_rinst))
                                   ? (0xfffffffcU & vlSelfRef.__PVT__next_pc)
                                   : (0xfffffffcU & vlSelfRef.__PVT__reg_op1));
        }
    }
    if (vlSelfRef.__PVT__decoder_trigger_q) {
        vlSelfRef.__PVT__cached_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        vlSelfRef.__PVT__cached_insn_opcode = ((3U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.__PVT__next_insn_opcode))
                                                ? vlSelfRef.__PVT__next_insn_opcode
                                                : (0x0000ffffU 
                                                   & vlSelfRef.__PVT__next_insn_opcode));
        vlSelfRef.__PVT__cached_insn_rd = vlSelfRef.__PVT__decoded_rd;
        vlSelfRef.__PVT__cached_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
    }
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__instr_waitirq = 0U;
        vlSelfRef.__PVT__decoded_rs1 = (0x0000001fU 
                                        & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                           >> 0x0fU));
    }
    if (vlSelfRef.__PVT__decoder_trigger_q) {
        vlSelfRef.__PVT__cached_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
        vlSelfRef.__PVT__cached_insn_imm = vlSelfRef.__PVT__decoded_imm;
    }
    if (vlSelfRef.__PVT__clear_prefetched_high_word) {
        vlSelfRef.__PVT__prefetched_high_word = 0U;
    }
    if (vlSymsp->TOP.resetn) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__last_mem_valid)))) {
            vlSelfRef.__PVT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.__PVT__mem_la_firstword_reg = 0U;
    }
    if (__VdlySet__cpuregs__v0) {
        vlSelfRef.__PVT__cpuregs[__VdlyDim0__cpuregs__v0] 
            = __VdlyVal__cpuregs__v0;
    }
    if (vlSelfRef.__PVT__mem_xfer) {
        vlSelfRef.__PVT__next_insn_opcode = vlSymsp->TOP.mem_axi_rdata;
    }
    vlSelfRef.__PVT__last_mem_valid = ((IData)(vlSymsp->TOP.resetn) 
                                       && ((IData)(vlSelfRef.mem_valid) 
                                           & (~ (IData)(vlSelfRef.mem_ready))));
    vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
        } else {
            vlSelfRef.__PVT__dbg_insn_opcode = ((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__next_insn_opcode))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                (0x0000ffffU 
                                                 & vlSelfRef.__PVT__next_insn_opcode));
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
        }
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32__ConstPool__TABLE_hee98425f_0;

void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__1(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_axi__DOT__picorv32_core__1\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vdly__reg_sh;
    __Vdly__reg_sh = 0;
    IData/*31:0*/ __Vdly__reg_out;
    __Vdly__reg_out = 0;
    QData/*63:0*/ __Vdly__count_cycle;
    __Vdly__count_cycle = 0;
    CData/*0:0*/ __Vdly__decoder_trigger;
    __Vdly__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__decoder_pseudo_trigger;
    __Vdly__decoder_pseudo_trigger = 0;
    // Body
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.trap)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
            vlSelfRef.__Vdly__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) 
                   | (IData)(vlSelfRef.mem_ready)))) {
            vlSelfRef.mem_valid = 0U;
        }
        vlSelfRef.__PVT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__mem_la_write))) {
            vlSelfRef.mem_wstrb = ((IData)(vlSelfRef.__PVT__mem_la_wstrb) 
                                   & (- (IData)((IData)(vlSelfRef.__PVT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if ((((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.__PVT__mem_do_rdata))) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                       | (IData)(vlSelfRef.__PVT__mem_do_rinst));
                vlSelfRef.mem_wstrb = 0U;
                vlSelfRef.__Vdly__mem_state = 1U;
            }
            if (vlSelfRef.__PVT__mem_do_wdata) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = 0U;
                vlSelfRef.__Vdly__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.__PVT__mem_la_secondword = 0U;
                vlSelfRef.__Vdly__mem_state = (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.__PVT__mem_do_rdata))
                                                ? 0U
                                                : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_do_rinst) {
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        }
    }
    vlSelfRef.__PVT__mem_state = vlSelfRef.__Vdly__mem_state;
    vlSelfRef.trap = 0U;
    __Vdly__reg_sh = 0U;
    __Vdly__reg_out = 0U;
    vlSelfRef.__PVT__set_mem_do_rinst = 0U;
    vlSelfRef.__PVT__set_mem_do_rdata = 0U;
    vlSelfRef.__PVT__set_mem_do_wdata = 0U;
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_rs1val = 0U;
        vlSelfRef.__PVT__dbg_rs2val = 0U;
        vlSelfRef.__PVT__dbg_rs1val_valid = 0U;
        vlSelfRef.__PVT__dbg_rs2val_valid = 0U;
    }
    __Vdly__decoder_trigger = ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                               & (IData)(vlSelfRef.__PVT__mem_done));
    vlSelfRef.__PVT__decoder_trigger_q = vlSelfRef.__PVT__decoder_trigger;
    __Vdly__decoder_pseudo_trigger = 0U;
    if (vlSymsp->TOP.resetn) {
        __Vdly__count_cycle = (1ULL + vlSelfRef.__PVT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.__PVT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.__PVT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.__PVT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__mem_do_rinst = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__decoder_trigger)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__do_waitirq))));
                vlSelfRef.__Vdly__mem_wordsize = 0U;
                vlSelfRef.__Vdly__latched_is_lu = 0U;
                vlSelfRef.__Vdly__latched_is_lh = 0U;
                vlSelfRef.__Vdly__latched_is_lb = 0U;
                vlSelfRef.__PVT__latched_rd = vlSelfRef.__PVT__decoded_rd;
                vlSelfRef.__PVT__latched_compr = vlSelfRef.__PVT__compressed_instr;
                vlSelfRef.__PVT__current_pc = vlSelfRef.__PVT__reg_next_pc;
                if (vlSelfRef.__PVT__latched_branch) {
                    vlSelfRef.__PVT__current_pc = ((IData)(vlSelfRef.__PVT__latched_store)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                        ? vlSelfRef.__PVT__alu_out_q
                                                        : vlSelfRef.__PVT__reg_out))
                                                    : vlSelfRef.__PVT__reg_next_pc);
                }
                vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__PVT__reg_next_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__PVT__latched_store = 0U;
                vlSelfRef.__PVT__latched_stalu = 0U;
                vlSelfRef.__PVT__latched_branch = 0U;
                if (vlSelfRef.__PVT__decoder_trigger) {
                    vlSelfRef.__Vdly__count_instr = 
                        (1ULL + vlSelfRef.__PVT__count_instr);
                    vlSelfRef.__PVT__irq_delay = vlSelfRef.__PVT__irq_active;
                    vlSelfRef.__PVT__reg_next_pc = 
                        (vlSelfRef.__PVT__current_pc 
                         + ((IData)(vlSelfRef.__PVT__compressed_instr)
                             ? 2U : 4U));
                    if (vlSelfRef.__PVT__instr_jal) {
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                        vlSelfRef.__PVT__reg_next_pc 
                            = (vlSelfRef.__PVT__current_pc 
                               + vlSelfRef.__PVT__decoded_imm_j);
                        vlSelfRef.__PVT__latched_branch = 1U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst = 0U;
                        vlSelfRef.__Vdly__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.__PVT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.__PVT__compressed_instr))));
                        vlSelfRef.__Vdly__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__reg_op1 = 0U;
                vlSelfRef.__PVT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.__PVT__instr_trap) 
                      | (IData)(vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.__PVT__is_lui_auipc_jal))) {
                    if (vlSelfRef.__PVT__instr_trap) {
                        vlSelfRef.__Vdly__cpu_state = 0x80U;
                    } else if (vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.__PVT__instr_rdcycle) {
                            __Vdly__reg_out = (IData)(vlSelfRef.__PVT__count_cycle);
                        } else if (vlSelfRef.__PVT__instr_rdcycleh) {
                            __Vdly__reg_out = (IData)(
                                                      (vlSelfRef.__PVT__count_cycle 
                                                       >> 0x20U));
                        } else if (vlSelfRef.__PVT__instr_rdinstr) {
                            __Vdly__reg_out = (IData)(vlSelfRef.__PVT__count_instr);
                        } else if (vlSelfRef.__PVT__instr_rdinstrh) {
                            __Vdly__reg_out = (IData)(
                                                      (vlSelfRef.__PVT__count_instr 
                                                       >> 0x20U));
                        }
                        vlSelfRef.__PVT__latched_store = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__is_lui_auipc_jal) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            ((IData)(vlSelfRef.__PVT__instr_lui)
                              ? 0U : vlSelfRef.__PVT__reg_pc);
                        vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    } else {
                        vlSelfRef.__PVT__latched_store = 1U;
                        __Vdly__reg_out = vlSelfRef.__PVT__timer;
                        vlSelfRef.__PVT__dbg_rs1val 
                            = vlSelfRef.__PVT__cpuregs_rs1;
                        vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                        vlSelfRef.__PVT__timer = vlSelfRef.__PVT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.__PVT__instr_trap)))) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__cpu_state = 1U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_slli_srli_srai) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    __Vdly__reg_sh = vlSelfRef.__PVT__decoded_rs2;
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else if (vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                } else {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    __Vdly__reg_sh = (0x0000001fU & vlSelfRef.__PVT__cpuregs_rs2);
                    vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__PVT__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__PVT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.__PVT__is_sb_sh_sw) {
                        vlSelfRef.__Vdly__cpu_state = 2U;
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                    } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                        vlSelfRef.__Vdly__cpu_state = 4U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                __Vdly__reg_sh = (0x0000001fU & vlSelfRef.__PVT__cpuregs_rs2);
                vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__PVT__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__PVT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.__PVT__is_sb_sh_sw) {
                    vlSelfRef.__Vdly__cpu_state = 2U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else {
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                __Vdly__reg_out = (vlSelfRef.__PVT__reg_pc 
                                   + vlSelfRef.__PVT__decoded_imm);
                if (vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.__PVT__latched_rd = 0U;
                    vlSelfRef.__PVT__latched_store 
                        = vlSelfRef.__PVT__alu_out_0;
                    vlSelfRef.__PVT__latched_branch 
                        = vlSelfRef.__PVT__alu_out_0;
                    if (vlSelfRef.__PVT__mem_done) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.__PVT__alu_out_0) {
                        vlSelfRef.__PVT__set_mem_do_rinst = 1U;
                        __Vdly__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__latched_branch 
                        = vlSelfRef.__PVT__instr_jalr;
                    vlSelfRef.__PVT__latched_store = 1U;
                    vlSelfRef.__PVT__latched_stalu = 1U;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__PVT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.__PVT__reg_sh))) {
                    __Vdly__reg_out = vlSelfRef.__PVT__reg_op1;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.__PVT__reg_sh))) {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    }
                    __Vdly__reg_sh = (0x0000001fU & 
                                      ((IData)(vlSelfRef.__PVT__reg_sh) 
                                       - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    }
                    __Vdly__reg_sh = (0x0000001fU & 
                                      ((IData)(vlSelfRef.__PVT__reg_sh) 
                                       - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.__PVT__instr_sb) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (vlSelfRef.__PVT__instr_sh) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_sw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                        __Vdly__decoder_trigger = 1U;
                        __Vdly__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        if (vlSelfRef.__PVT__latched_is_lu) {
                            __Vdly__reg_out = vlSelfRef.__PVT__mem_rdata_word;
                        } else if (vlSelfRef.__PVT__latched_is_lh) {
                            __Vdly__reg_out = VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.__PVT__mem_rdata_word));
                        } else if (vlSelfRef.__PVT__latched_is_lb) {
                            __Vdly__reg_out = VL_EXTENDS_II(32,8, 
                                                            (0x000000ffU 
                                                             & vlSelfRef.__PVT__mem_rdata_word));
                        }
                        __Vdly__decoder_trigger = 1U;
                        __Vdly__decoder_pseudo_trigger = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_rdata)))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.__PVT__instr_lb) 
                             | (IData)(vlSelfRef.__PVT__instr_lbu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.__PVT__instr_lh) 
                                    | (IData)(vlSelfRef.__PVT__instr_lhu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_lw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                        vlSelfRef.__Vdly__latched_is_lu 
                            = vlSelfRef.__PVT__is_lbu_lhu_lw;
                        vlSelfRef.__Vdly__latched_is_lh 
                            = vlSelfRef.__PVT__instr_lh;
                        vlSelfRef.__Vdly__latched_is_lb 
                            = vlSelfRef.__PVT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__count_cycle = 0ULL;
        vlSelfRef.__Vdly__count_instr = 0ULL;
        vlSelfRef.__PVT__timer = 0U;
        vlSelfRef.__Vdly__reg_pc = 0U;
        vlSelfRef.__PVT__reg_next_pc = 0U;
        vlSelfRef.__PVT__latched_store = 0U;
        vlSelfRef.__PVT__latched_stalu = 0U;
        vlSelfRef.__PVT__latched_branch = 0U;
        vlSelfRef.__Vdly__latched_is_lu = 0U;
        vlSelfRef.__Vdly__latched_is_lh = 0U;
        vlSelfRef.__Vdly__latched_is_lb = 0U;
        vlSelfRef.__PVT__irq_delay = 0U;
        vlSelfRef.__Vdly__cpu_state = 0x40U;
    }
    if (((IData)(vlSymsp->TOP.resetn) & ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                         | (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.__PVT__reg_op1)))) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & vlSelfRef.__PVT__reg_op1)) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.__PVT__reg_pc)))) {
        vlSelfRef.__Vdly__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.__PVT__mem_done)))) {
        vlSelfRef.__Vdly__mem_do_prefetch = 0U;
        vlSelfRef.__Vdly__mem_do_rinst = 0U;
        vlSelfRef.__PVT__mem_do_rdata = 0U;
        vlSelfRef.__PVT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rinst) {
        vlSelfRef.__Vdly__mem_do_rinst = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rdata) {
        vlSelfRef.__PVT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_wdata) {
        vlSelfRef.__PVT__mem_do_wdata = 1U;
    }
    vlSelfRef.__PVT__current_pc = 0U;
    vlSelfRef.__PVT__reg_sh = __Vdly__reg_sh;
    vlSelfRef.__PVT__count_cycle = __Vdly__count_cycle;
    vlSelfRef.__PVT__latched_is_lu = vlSelfRef.__Vdly__latched_is_lu;
    vlSelfRef.__PVT__latched_is_lh = vlSelfRef.__Vdly__latched_is_lh;
    vlSelfRef.__PVT__latched_is_lb = vlSelfRef.__Vdly__latched_is_lb;
    vlSelfRef.__PVT__count_instr = vlSelfRef.__Vdly__count_instr;
    vlSelfRef.__PVT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs1))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs1]
                                     : 0U);
    vlSelfRef.__PVT__mem_do_prefetch = vlSelfRef.__Vdly__mem_do_prefetch;
    vlSelfRef.__PVT__reg_pc = vlSelfRef.__Vdly__reg_pc;
    vlSelfRef.__PVT__mem_wordsize = vlSelfRef.__Vdly__mem_wordsize;
    vlSelfRef.__PVT__reg_out = __Vdly__reg_out;
    vlSelfRef.__PVT__cpu_state = vlSelfRef.__Vdly__cpu_state;
    vlSelfRef.__PVT__reg_op1 = vlSelfRef.__Vdly__reg_op1;
    vlSelfRef.__PVT__mem_la_write = ((IData)(vlSymsp->TOP.resetn) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    vlSelfRef.__PVT__do_waitirq = 0U;
    __Vtableidx1 = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__PVT__dbg_ascii_state[0U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][0U];
    vlSelfRef.__PVT__dbg_ascii_state[1U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][1U];
    vlSelfRef.__PVT__dbg_ascii_state[2U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][2U];
    vlSelfRef.__PVT__dbg_ascii_state[3U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][3U];
    vlSelfRef.__PVT__cpuregs_write = 0U;
    vlSelfRef.__PVT__next_pc = (((IData)(vlSelfRef.__PVT__latched_branch) 
                                 & (IData)(vlSelfRef.__PVT__latched_store))
                                 ? (0xfffffffeU & vlSelfRef.__PVT__reg_out)
                                 : vlSelfRef.__PVT__reg_next_pc);
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__latched_branch) 
                | (0U != (IData)(vlSelfRef.__PVT__irq_state))) 
               | (~ (IData)(vlSymsp->TOP.resetn))))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__alu_out_q = vlSelfRef.__PVT__alu_out;
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_la_wstrb = 0x0fU;
        vlSelfRef.__PVT__mem_rdata_word = vlSymsp->TOP.mem_axi_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000010U) 
                                         | (0x0000ffffU 
                                            & vlSelfRef.__PVT__reg_op2));
        if ((2U & vlSelfRef.__PVT__reg_op1)) {
            vlSelfRef.__PVT__mem_la_wstrb = 0x0cU;
            if ((2U & vlSelfRef.__PVT__reg_op1)) {
                vlSelfRef.__PVT__mem_rdata_word = (vlSymsp->TOP.mem_axi_rdata 
                                                   >> 0x10U);
            }
        } else {
            vlSelfRef.__PVT__mem_la_wstrb = 3U;
            vlSelfRef.__PVT__mem_rdata_word = (0x0000ffffU 
                                               & vlSymsp->TOP.mem_axi_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000018U) 
                                         | ((0x00ff0000U 
                                             & (vlSelfRef.__PVT__reg_op2 
                                                << 0x00000010U)) 
                                            | ((0x0000ff00U 
                                                & (vlSelfRef.__PVT__reg_op2 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__reg_op2))));
        vlSelfRef.__PVT__mem_la_wstrb = (0x0000000fU 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & vlSelfRef.__PVT__reg_op1)));
        vlSelfRef.__PVT__mem_rdata_word = ((2U & vlSelfRef.__PVT__reg_op1)
                                            ? ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (vlSymsp->TOP.mem_axi_rdata 
                                                   >> 0x18U)
                                                : (0x000000ffU 
                                                   & (vlSymsp->TOP.mem_axi_rdata 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (0x000000ffU 
                                                   & (vlSymsp->TOP.mem_axi_rdata 
                                                      >> 8U))
                                                : (0x000000ffU 
                                                   & vlSymsp->TOP.mem_axi_rdata)));
    }
    vlSelfRef.__PVT__alu_eq = (vlSelfRef.__PVT__reg_op1 
                               == vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_lts = VL_LTS_III(32, vlSelfRef.__PVT__reg_op1, vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_ltu = (vlSelfRef.__PVT__reg_op1 
                                < vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__is_lbu_lhu_lw = ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                      | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                         | (IData)(vlSelfRef.__PVT__instr_lw)));
    vlSelfRef.__PVT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        if (vlSelfRef.__PVT__latched_branch) {
            vlSelfRef.__PVT__cpuregs_write = 1U;
            vlSelfRef.__PVT__cpuregs_wrdata = (vlSelfRef.__PVT__reg_pc 
                                               + ((IData)(vlSelfRef.__PVT__latched_compr)
                                                   ? 2U
                                                   : 4U));
        } else if (((IData)(vlSelfRef.__PVT__latched_store) 
                    & (~ (IData)(vlSelfRef.__PVT__latched_branch)))) {
            vlSelfRef.__PVT__cpuregs_write = 1U;
            vlSelfRef.__PVT__cpuregs_wrdata = ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                ? vlSelfRef.__PVT__alu_out_q
                                                : vlSelfRef.__PVT__reg_out);
        }
    }
    vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__q_insn_rd;
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__decoded_rd = (0x0000001fU 
                                       & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                          >> 7U));
        vlSelfRef.__PVT__decoded_rs2 = (0x0000001fU 
                                        & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                           >> 0x14U));
    }
    vlSelfRef.__PVT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs2))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs2]
                                     : 0U);
    vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__instr_rdcycle = ((IData)((0xc0002073U 
                                                   == 
                                                   (0xfffff07fU 
                                                    & vlSelfRef.__PVT__mem_rdata_q))) 
                                          | (IData)(
                                                    (0xc0102073U 
                                                     == 
                                                     (0xfffff07fU 
                                                      & vlSelfRef.__PVT__mem_rdata_q))));
        vlSelfRef.__PVT__instr_rdcycleh = ((IData)(
                                                   (0xc8002073U 
                                                    == 
                                                    (0xfffff07fU 
                                                     & vlSelfRef.__PVT__mem_rdata_q))) 
                                           | (IData)(
                                                     (0xc8102073U 
                                                      == 
                                                      (0xfffff07fU 
                                                       & vlSelfRef.__PVT__mem_rdata_q))));
        vlSelfRef.__PVT__instr_rdinstr = (IData)((0xc0202073U 
                                                  == 
                                                  (0xfffff07fU 
                                                   & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_rdinstrh = (IData)((0xc8202073U 
                                                   == 
                                                   (0xfffff07fU 
                                                    & vlSelfRef.__PVT__mem_rdata_q)));
    }
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    vlSelfRef.__PVT__is_lui_auipc_jal = ((IData)(vlSelfRef.__PVT__instr_lui) 
                                         | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                            | (IData)(vlSelfRef.__PVT__instr_jal)));
    vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.__PVT__instr_lui) | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                                  | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                              | (IData)(vlSelfRef.__PVT__instr_sub)))))));
    vlSelfRef.__PVT__is_slti_blt_slt = ((IData)(vlSelfRef.__PVT__instr_slti) 
                                        | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                           | (IData)(vlSelfRef.__PVT__instr_slt)));
    vlSelfRef.__PVT__is_sltiu_bltu_sltu = ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                           | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                              | (IData)(vlSelfRef.__PVT__instr_sltu)));
    vlSelfRef.__PVT__is_compare = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                   | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                      | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                         | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                            | (IData)(vlSelfRef.__PVT__instr_sltu)))));
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__instr_beq = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0U == (0x00007000U 
                                                & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bne = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00001000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_blt = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00004000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bge = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00005000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bltu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (0x00006000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bgeu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (0x00007000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lb = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0U == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lh = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0x00001000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lw = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0x00002000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lbu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (0x00004000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lhu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (0x00005000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sb = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0U == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sh = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0x00001000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sw = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0x00002000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_addi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0U == (0x00007000U 
                                                 & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slti = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00002000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sltiu = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (0x00003000U 
                                           == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_xori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00004000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_ori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                      & (0x00006000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_andi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00007000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slli = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00001000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srli = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00005000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srai = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x40005000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__is_slli_srli_srai = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                              & ((IData)(
                                                         (0x00001000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.__PVT__mem_rdata_q))) 
                                                 | ((IData)(
                                                            (0x00005000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.__PVT__mem_rdata_q))) 
                                                    | (IData)(
                                                              (0x40005000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.__PVT__mem_rdata_q))))));
        vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.__PVT__instr_jalr) 
               | ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.__PVT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.__PVT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.__PVT__is_compare = 0U;
        vlSelfRef.__PVT__decoded_imm = ((IData)(vlSelfRef.__PVT__instr_jal)
                                         ? vlSelfRef.__PVT__decoded_imm_j
                                         : (((IData)(vlSelfRef.__PVT__instr_lui) 
                                             | (IData)(vlSelfRef.__PVT__instr_auipc))
                                             ? VL_SHIFTL_III(32,32,32, 
                                                             (vlSelfRef.__PVT__mem_rdata_q 
                                                              >> 0x0cU), 0x0000000cU)
                                             : (((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                 | ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                                    | (IData)(vlSelfRef.__PVT__is_alu_reg_imm)))
                                                 ? 
                                                VL_EXTENDS_II(32,12, 
                                                              (vlSelfRef.__PVT__mem_rdata_q 
                                                               >> 0x14U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu)
                                                  ? 
                                                 VL_EXTENDS_II(32,13, 
                                                               ((((2U 
                                                                   & (vlSelfRef.__PVT__mem_rdata_q 
                                                                      >> 0x0000001eU)) 
                                                                  | (1U 
                                                                     & (vlSelfRef.__PVT__mem_rdata_q 
                                                                        >> 7U))) 
                                                                 << 0x0000000bU) 
                                                                | ((0x000007e0U 
                                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                                       >> 0x00000014U)) 
                                                                   | (0x0000001eU 
                                                                      & (vlSelfRef.__PVT__mem_rdata_q 
                                                                         >> 7U)))))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__is_sb_sh_sw)
                                                   ? 
                                                  VL_EXTENDS_II(32,12, 
                                                                ((0x00000fe0U 
                                                                  & (vlSelfRef.__PVT__mem_rdata_q 
                                                                     >> 0x00000014U)) 
                                                                 | (0x0000001fU 
                                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                                       >> 7U))))
                                                   : 0U)))));
        vlSelfRef.__PVT__instr_add = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0U == (0xfe007000U 
                                                & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sub = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x40000000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sll = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00001000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slt = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00002000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sltu = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                       & (0x00003000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_xor = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00004000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srl = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00005000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sra = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x40005000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_or = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                     & (0x00006000U 
                                        == (0xfe007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_and = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00007000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__is_sll_srl_sra = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                           & ((IData)(
                                                      (0x00001000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelfRef.__PVT__mem_rdata_q))) 
                                              | ((IData)(
                                                         (0x00005000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.__PVT__mem_rdata_q))) 
                                                 | (IData)(
                                                           (0x40005000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.__PVT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__compressed_instr = 0U;
        vlSelfRef.__PVT__is_alu_reg_imm = (0x13U == 
                                           (0x0000007fU 
                                            & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu = (3U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__is_sb_sh_sw = (0x23U == (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__decoded_imm_j = ((0x000fffffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0xfff00000U 
                                             & VL_EXTENDS_II(32,21, 
                                                             (0x001ffffeU 
                                                              & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                 >> 0x0000000bU)))));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffff801U 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x000007feU 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                >> 9U)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffff7ffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x00000800U 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                << 2U)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfff00fffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x000ff000U 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                << 0x0000000bU)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffffffeU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (1U & VL_EXTENDS_II(1,21, 
                                                                (0x001ffffeU 
                                                                 & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                    >> 0x0000000bU)))));
        vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_auipc = (0x17U == (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_lui = (0x37U == (0x0000007fU 
                                                & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_jal = (0x6fU == (0x0000007fU 
                                                & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_jalr = (IData)((0x00000067U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.__PVT__mem_rdata_latched_noshuffle)));
        vlSelfRef.__PVT__is_alu_reg_reg = (0x33U == 
                                           (0x0000007fU 
                                            & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.__PVT__irq_active = 0U;
        vlSelfRef.__PVT__is_compare = 0U;
        vlSelfRef.__PVT__instr_beq = 0U;
        vlSelfRef.__PVT__instr_bne = 0U;
        vlSelfRef.__PVT__instr_blt = 0U;
        vlSelfRef.__PVT__instr_bge = 0U;
        vlSelfRef.__PVT__instr_bltu = 0U;
        vlSelfRef.__PVT__instr_bgeu = 0U;
        vlSelfRef.__PVT__instr_addi = 0U;
        vlSelfRef.__PVT__instr_slti = 0U;
        vlSelfRef.__PVT__instr_sltiu = 0U;
        vlSelfRef.__PVT__instr_xori = 0U;
        vlSelfRef.__PVT__instr_ori = 0U;
        vlSelfRef.__PVT__instr_andi = 0U;
        vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.__PVT__instr_add = 0U;
        vlSelfRef.__PVT__instr_sub = 0U;
        vlSelfRef.__PVT__instr_sll = 0U;
        vlSelfRef.__PVT__instr_slt = 0U;
        vlSelfRef.__PVT__instr_sltu = 0U;
        vlSelfRef.__PVT__instr_xor = 0U;
        vlSelfRef.__PVT__instr_srl = 0U;
        vlSelfRef.__PVT__instr_sra = 0U;
        vlSelfRef.__PVT__instr_or = 0U;
        vlSelfRef.__PVT__instr_and = 0U;
    }
    vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__PVT__decoder_pseudo_trigger = __Vdly__decoder_pseudo_trigger;
    vlSelfRef.__PVT__decoder_trigger = __Vdly__decoder_trigger;
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    vlSelfRef.__PVT__alu_out_0 = 0U;
    vlSelfRef.__PVT__alu_out = 0U;
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_eq;
    } else if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_eq)));
    } else if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_lts)));
    } else if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_ltu)));
    } else if (vlSelfRef.__PVT__is_slti_blt_slt) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_lts;
    } else if (vlSelfRef.__PVT__is_sltiu_bltu_sltu) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_ltu;
    }
    if (vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.__PVT__alu_out = ((IData)(vlSelfRef.__PVT__instr_sub)
                                     ? (vlSelfRef.__PVT__reg_op1 
                                        - vlSelfRef.__PVT__reg_op2)
                                     : (vlSelfRef.__PVT__reg_op1 
                                        + vlSelfRef.__PVT__reg_op2));
    } else if (vlSelfRef.__PVT__is_compare) {
        vlSelfRef.__PVT__alu_out = vlSelfRef.__PVT__alu_out_0;
    } else if (((IData)(vlSelfRef.__PVT__instr_xori) 
                | (IData)(vlSelfRef.__PVT__instr_xor))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    ^ vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_ori) 
                | (IData)(vlSelfRef.__PVT__instr_or))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    | vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_andi) 
                | (IData)(vlSelfRef.__PVT__instr_and))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    & vlSelfRef.__PVT__reg_op2);
    }
    vlSelfRef.__PVT__instr_trap = (1U & (~ ((IData)(vlSelfRef.__PVT__instr_lui) 
                                            | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                               | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                  | (((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                      | ((IData)(vlSelfRef.__PVT__instr_beq) 
                                                         | ((IData)(vlSelfRef.__PVT__instr_bne) 
                                                            | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                                               | ((IData)(vlSelfRef.__PVT__instr_bge) 
                                                                  | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                                                     | ((IData)(vlSelfRef.__PVT__instr_bgeu) 
                                                                        | ((IData)(vlSelfRef.__PVT__instr_lb) 
                                                                           | ((IData)(vlSelfRef.__PVT__instr_lh) 
                                                                              | ((IData)(vlSelfRef.__PVT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_sltu))))))))))))))))))))))))))))) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_xor) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_srl) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_sra) 
                                                              | ((IData)(vlSelfRef.__PVT__instr_or) 
                                                                 | ((IData)(vlSelfRef.__PVT__instr_and) 
                                                                    | ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
                                                                       | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
                                                                          | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                                                                             | ((IData)(vlSelfRef.__PVT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.__PVT__compressed_instr) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_timer) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.__PVT__new_ascii_instr = 0ULL;
    if (vlSelfRef.__PVT__instr_lui) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.__PVT__instr_auipc) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.__PVT__instr_jal) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.__PVT__instr_jalr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.__PVT__instr_blt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.__PVT__instr_bltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.__PVT__instr_lb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.__PVT__instr_lh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.__PVT__instr_lw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.__PVT__instr_lbu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.__PVT__instr_lhu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.__PVT__instr_sb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.__PVT__instr_sh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.__PVT__instr_sw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.__PVT__instr_addi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.__PVT__instr_slti) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.__PVT__instr_sltiu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.__PVT__instr_xori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_ori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_andi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.__PVT__instr_slli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srai) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.__PVT__instr_add) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.__PVT__instr_sub) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.__PVT__instr_sll) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.__PVT__instr_slt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.__PVT__instr_sltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_xor) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.__PVT__instr_srl) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.__PVT__instr_sra) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.__PVT__instr_or) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.__PVT__instr_and) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycle) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycleh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstrh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.__PVT__instr_fence) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.__PVT__instr_getq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.__PVT__instr_setq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.__PVT__compressed_instr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.__PVT__instr_maskirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.__PVT__instr_waitirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.__PVT__instr_timer) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    if (vlSelfRef.__PVT__mem_xfer) {
        vlSelfRef.__PVT__mem_rdata_q = vlSymsp->TOP.mem_axi_rdata;
    }
    vlSelfRef.__PVT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                 & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.__PVT__mem_rdata_latched_noshuffle = 
        ((IData)(vlSelfRef.__PVT__mem_xfer) ? vlSymsp->TOP.mem_axi_rdata
          : vlSelfRef.__PVT__mem_rdata_q);
    vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__decoded_rd;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__decoded_imm;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        }
    }
    vlSelfRef.__PVT__mem_do_rinst = vlSelfRef.__Vdly__mem_do_rinst;
    vlSelfRef.__PVT__mem_la_read = ((IData)(vlSymsp->TOP.resetn) 
                                    & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                       & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                             | (IData)(vlSelfRef.__PVT__mem_do_rdata)))));
    vlSelfRef.__PVT__mem_done = ((IData)(vlSymsp->TOP.resetn) 
                                 & (((IData)(vlSelfRef.__PVT__mem_xfer) 
                                     & ((0U != (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                              | (IData)(vlSelfRef.__PVT__mem_do_wdata))))) 
                                    | ((3U == (IData)(vlSelfRef.__PVT__mem_state)) 
                                       & (IData)(vlSelfRef.__PVT__mem_do_rinst))));
}

void Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___ico_sequent__TOP__picorv32_wb__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_la_write = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((((IData)(vlSelfRef.__PVT__latched_branch) 
          | (0U != (IData)(vlSelfRef.__PVT__irq_state))) 
         | (IData)(vlSymsp->TOP.wb_rst_i))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__mem_la_read = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                    & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                       & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                             | (IData)(vlSelfRef.__PVT__mem_do_rdata)))));
    vlSelfRef.__PVT__mem_done = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                 & (((IData)(vlSelfRef.__PVT__mem_xfer) 
                                     & ((0U != (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                              | (IData)(vlSelfRef.__PVT__mem_do_wdata))))) 
                                    | ((3U == (IData)(vlSelfRef.__PVT__mem_state)) 
                                       & (IData)(vlSelfRef.__PVT__mem_do_rinst))));
}

void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__reg_sh;
    __Vdly__reg_sh = 0;
    IData/*31:0*/ __Vdly__reg_out;
    __Vdly__reg_out = 0;
    QData/*63:0*/ __Vdly__count_cycle;
    __Vdly__count_cycle = 0;
    CData/*0:0*/ __Vdly__decoder_trigger;
    __Vdly__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__decoder_pseudo_trigger;
    __Vdly__decoder_pseudo_trigger = 0;
    IData/*31:0*/ __VdlyVal__cpuregs__v0;
    __VdlyVal__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpuregs__v0;
    __VdlyDim0__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpuregs__v0;
    __VdlySet__cpuregs__v0 = 0;
    // Body
    __Vdly__reg_sh = vlSelfRef.__PVT__reg_sh;
    __Vdly__count_cycle = vlSelfRef.__PVT__count_cycle;
    __Vdly__decoder_pseudo_trigger = vlSelfRef.__PVT__decoder_pseudo_trigger;
    vlSelfRef.__Vdly__count_instr = vlSelfRef.__PVT__count_instr;
    vlSelfRef.__Vdly__latched_is_lu = vlSelfRef.__PVT__latched_is_lu;
    vlSelfRef.__Vdly__latched_is_lh = vlSelfRef.__PVT__latched_is_lh;
    vlSelfRef.__Vdly__latched_is_lb = vlSelfRef.__PVT__latched_is_lb;
    vlSelfRef.__Vdly__timer = vlSelfRef.__PVT__timer;
    __Vdly__decoder_trigger = vlSelfRef.__PVT__decoder_trigger;
    vlSelfRef.__Vdly__reg_next_pc = vlSelfRef.__PVT__reg_next_pc;
    vlSelfRef.__Vdly__mem_do_prefetch = vlSelfRef.__PVT__mem_do_prefetch;
    vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__reg_pc;
    vlSelfRef.__Vdly__latched_stalu = vlSelfRef.__PVT__latched_stalu;
    vlSelfRef.__Vdly__mem_wordsize = vlSelfRef.__PVT__mem_wordsize;
    vlSelfRef.__Vdly__mem_do_rinst = vlSelfRef.__PVT__mem_do_rinst;
    __Vdly__reg_out = vlSelfRef.__PVT__reg_out;
    vlSelfRef.__Vdly__latched_store = vlSelfRef.__PVT__latched_store;
    vlSelfRef.__Vdly__cpu_state = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__Vdly__latched_branch = vlSelfRef.__PVT__latched_branch;
    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__reg_op1;
    __VdlySet__cpuregs__v0 = 0U;
    vlSelfRef.__Vdly__mem_state = vlSelfRef.__PVT__mem_state;
    if ((((~ (IData)(vlSymsp->TOP.wb_rst_i)) & (IData)(vlSelfRef.__PVT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.__PVT__latched_rd)))) {
        __VdlyVal__cpuregs__v0 = vlSelfRef.__PVT__cpuregs_wrdata;
        __VdlyDim0__cpuregs__v0 = vlSelfRef.__PVT__latched_rd;
        __VdlySet__cpuregs__v0 = 1U;
    }
    vlSelfRef.__PVT__alu_wait_2 = 0U;
    vlSelfRef.__PVT__alu_wait = 0U;
    vlSelfRef.trace_data = 0ULL;
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_insn_addr = vlSelfRef.__PVT__next_pc;
    }
    vlSelfRef.__PVT__q_ascii_instr = vlSelfRef.__PVT__dbg_ascii_instr;
    vlSelfRef.__PVT__q_insn_imm = vlSelfRef.__PVT__dbg_insn_imm;
    vlSelfRef.__PVT__q_insn_rs1 = vlSelfRef.__PVT__dbg_insn_rs1;
    vlSelfRef.__PVT__q_insn_rs2 = vlSelfRef.__PVT__dbg_insn_rs2;
    vlSelfRef.__PVT__q_insn_rd = vlSelfRef.__PVT__dbg_insn_rd;
    vlSelfRef.__PVT__q_insn_opcode = vlSelfRef.__PVT__dbg_insn_opcode;
    vlSelfRef.__PVT__clear_prefetched_high_word_q = vlSelfRef.__PVT__clear_prefetched_high_word;
    vlSelfRef.__PVT__alu_out_0_q = vlSelfRef.__PVT__alu_out_0;
    vlSelfRef.__PVT__next_irq_pending = 0U;
    if (vlSymsp->TOP.wb_rst_i) {
        vlSelfRef.__PVT__irq_mask = 0xffffffffU;
        vlSelfRef.__PVT__pcpi_timeout = 0U;
        vlSelfRef.__PVT__latched_trace = 0U;
        vlSelfRef.__PVT__next_irq_pending = 0U;
    }
    vlSelfRef.__PVT__irq_pending = vlSelfRef.__PVT__next_irq_pending;
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.pcpi_insn = 0U;
        vlSelfRef.__PVT__instr_ecall_ebreak = (((0x73U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_q)) 
                                                & (~ 
                                                   (0U 
                                                    != 
                                                    (vlSelfRef.__PVT__mem_rdata_q 
                                                     >> 0x15U)))) 
                                               & (~ 
                                                  (0U 
                                                   != 
                                                   (0x00001fffU 
                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                       >> 7U)))));
        vlSelfRef.__PVT__instr_getq = 0U;
        vlSelfRef.__PVT__instr_setq = 0U;
        vlSelfRef.__PVT__instr_maskirq = 0U;
        vlSelfRef.__PVT__instr_timer = 0U;
        vlSelfRef.__PVT__instr_fence = ((0x0fU == (0x0000007fU 
                                                   & vlSelfRef.__PVT__mem_rdata_q)) 
                                        & (~ (0U != 
                                              (7U & 
                                               (vlSelfRef.__PVT__mem_rdata_q 
                                                >> 0x0cU)))));
    }
    if (vlSymsp->TOP.wb_rst_i) {
        vlSelfRef.eoi = 0U;
        vlSelfRef.__PVT__irq_state = 0U;
        vlSelfRef.__PVT__instr_fence = 0U;
        vlSelfRef.__PVT__mem_la_firstword_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__last_mem_valid)))) {
        vlSelfRef.__PVT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.__PVT__dbg_next = vlSelfRef.__PVT__launch_next_insn;
    vlSelfRef.__PVT__decoder_pseudo_trigger_q = vlSelfRef.__PVT__decoder_pseudo_trigger;
    if (((IData)(vlSymsp->TOP.wb_rst_i) | (IData)(vlSelfRef.trap))) {
        vlSelfRef.__PVT__dbg_valid_insn = 0U;
        vlSelfRef.__PVT__prefetched_high_word = 0U;
    } else if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.__PVT__clear_prefetched_high_word) {
        vlSelfRef.__PVT__prefetched_high_word = 0U;
    }
    if (vlSelfRef.__PVT__decoder_trigger_q) {
        vlSelfRef.__PVT__cached_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        vlSelfRef.__PVT__cached_insn_opcode = ((3U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.__PVT__next_insn_opcode))
                                                ? vlSelfRef.__PVT__next_insn_opcode
                                                : (0x0000ffffU 
                                                   & vlSelfRef.__PVT__next_insn_opcode));
        vlSelfRef.__PVT__cached_insn_rd = vlSelfRef.__PVT__decoded_rd;
        vlSelfRef.__PVT__cached_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
    }
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__instr_waitirq = 0U;
        vlSelfRef.__PVT__decoded_rs1 = (0x0000001fU 
                                        & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                           >> 0x0fU));
    }
    if (vlSelfRef.__PVT__decoder_trigger_q) {
        vlSelfRef.__PVT__cached_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
        vlSelfRef.__PVT__cached_insn_imm = vlSelfRef.__PVT__decoded_imm;
    }
    if (__VdlySet__cpuregs__v0) {
        vlSelfRef.__PVT__cpuregs[__VdlyDim0__cpuregs__v0] 
            = __VdlyVal__cpuregs__v0;
    }
    if (vlSelfRef.__PVT__mem_xfer) {
        vlSelfRef.__PVT__next_insn_opcode = vlSymsp->TOP.picorv32_wb__DOT__mem_rdata;
    }
    vlSelfRef.__PVT__last_mem_valid = ((1U & (~ (IData)(vlSymsp->TOP.wb_rst_i))) 
                                       && ((IData)(vlSelfRef.mem_valid) 
                                           & (~ (IData)(vlSymsp->TOP.picorv32_wb__DOT__mem_ready))));
    vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
        } else {
            vlSelfRef.__PVT__dbg_insn_opcode = ((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__next_insn_opcode))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                (0x0000ffffU 
                                                 & vlSelfRef.__PVT__next_insn_opcode));
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
        }
    }
}

void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__1(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__1\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vdly__reg_sh;
    __Vdly__reg_sh = 0;
    IData/*31:0*/ __Vdly__reg_out;
    __Vdly__reg_out = 0;
    QData/*63:0*/ __Vdly__count_cycle;
    __Vdly__count_cycle = 0;
    CData/*0:0*/ __Vdly__decoder_trigger;
    __Vdly__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__decoder_pseudo_trigger;
    __Vdly__decoder_pseudo_trigger = 0;
    // Body
    if ((1U & (~ ((IData)(vlSymsp->TOP.wb_rst_i) | (IData)(vlSelfRef.trap))))) {
        if (vlSelfRef.__PVT__mem_la_write) {
            vlSelfRef.mem_wdata = vlSelfRef.__PVT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.__PVT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__mem_la_write))) {
            vlSelfRef.mem_addr = (((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                   | (IData)(vlSelfRef.__PVT__mem_do_rinst))
                                   ? (0xfffffffcU & vlSelfRef.__PVT__next_pc)
                                   : (0xfffffffcU & vlSelfRef.__PVT__reg_op1));
        }
    }
    if (((IData)(vlSymsp->TOP.wb_rst_i) | (IData)(vlSelfRef.trap))) {
        if (vlSymsp->TOP.wb_rst_i) {
            vlSelfRef.__Vdly__mem_state = 0U;
        }
        if (((IData)(vlSymsp->TOP.wb_rst_i) | (IData)(vlSymsp->TOP.picorv32_wb__DOT__mem_ready))) {
            vlSelfRef.mem_valid = 0U;
        }
        vlSelfRef.__PVT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__mem_la_write))) {
            vlSelfRef.mem_wstrb = ((IData)(vlSelfRef.__PVT__mem_la_wstrb) 
                                   & (- (IData)((IData)(vlSelfRef.__PVT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if ((((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.__PVT__mem_do_rdata))) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                       | (IData)(vlSelfRef.__PVT__mem_do_rinst));
                vlSelfRef.mem_wstrb = 0U;
                vlSelfRef.__Vdly__mem_state = 1U;
            }
            if (vlSelfRef.__PVT__mem_do_wdata) {
                vlSelfRef.mem_valid = 1U;
                vlSelfRef.mem_instr = 0U;
                vlSelfRef.__Vdly__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.__PVT__mem_la_secondword = 0U;
                vlSelfRef.__Vdly__mem_state = (((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.__PVT__mem_do_rdata))
                                                ? 0U
                                                : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_xfer) {
                vlSelfRef.mem_valid = 0U;
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__mem_state))) {
            if (vlSelfRef.__PVT__mem_do_rinst) {
                vlSelfRef.__Vdly__mem_state = 0U;
            }
        }
    }
    vlSelfRef.__PVT__mem_state = vlSelfRef.__Vdly__mem_state;
    vlSelfRef.trap = 0U;
    __Vdly__reg_sh = 0U;
    __Vdly__reg_out = 0U;
    vlSelfRef.__PVT__set_mem_do_rinst = 0U;
    vlSelfRef.__PVT__set_mem_do_rdata = 0U;
    vlSelfRef.__PVT__set_mem_do_wdata = 0U;
    if (vlSelfRef.__PVT__launch_next_insn) {
        vlSelfRef.__PVT__dbg_rs1val = 0U;
        vlSelfRef.__PVT__dbg_rs2val = 0U;
        vlSelfRef.__PVT__dbg_rs1val_valid = 0U;
        vlSelfRef.__PVT__dbg_rs2val_valid = 0U;
    }
    __Vdly__decoder_trigger = ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                               & (IData)(vlSelfRef.__PVT__mem_done));
    vlSelfRef.__PVT__decoder_trigger_q = vlSelfRef.__PVT__decoder_trigger;
    __Vdly__decoder_pseudo_trigger = 0U;
    if (vlSymsp->TOP.wb_rst_i) {
        __Vdly__count_cycle = 0ULL;
        vlSelfRef.__Vdly__reg_pc = 0U;
        vlSelfRef.__Vdly__reg_next_pc = 0U;
        vlSelfRef.__Vdly__count_instr = 0ULL;
        vlSelfRef.__Vdly__latched_store = 0U;
        vlSelfRef.__Vdly__latched_stalu = 0U;
        vlSelfRef.__Vdly__latched_branch = 0U;
        vlSelfRef.__Vdly__latched_is_lu = 0U;
        vlSelfRef.__Vdly__latched_is_lh = 0U;
        vlSelfRef.__Vdly__latched_is_lb = 0U;
        vlSelfRef.__PVT__irq_delay = 0U;
        vlSelfRef.__Vdly__timer = 0U;
        vlSelfRef.__Vdly__cpu_state = 0x40U;
    } else {
        __Vdly__count_cycle = (1ULL + vlSelfRef.__PVT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.__PVT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.__PVT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.__PVT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__mem_do_rinst = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__decoder_trigger)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__do_waitirq))));
                vlSelfRef.__Vdly__mem_wordsize = 0U;
                vlSelfRef.__Vdly__latched_is_lu = 0U;
                vlSelfRef.__Vdly__latched_is_lh = 0U;
                vlSelfRef.__Vdly__latched_is_lb = 0U;
                vlSelfRef.__PVT__latched_rd = vlSelfRef.__PVT__decoded_rd;
                vlSelfRef.__PVT__latched_compr = vlSelfRef.__PVT__compressed_instr;
                vlSelfRef.__PVT__current_pc = vlSelfRef.__PVT__reg_next_pc;
                if (vlSelfRef.__PVT__latched_branch) {
                    vlSelfRef.__PVT__current_pc = ((IData)(vlSelfRef.__PVT__latched_store)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                        ? vlSelfRef.__PVT__alu_out_q
                                                        : vlSelfRef.__PVT__reg_out))
                                                    : vlSelfRef.__PVT__reg_next_pc);
                }
                vlSelfRef.__Vdly__reg_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__Vdly__reg_next_pc = vlSelfRef.__PVT__current_pc;
                vlSelfRef.__Vdly__latched_store = 0U;
                vlSelfRef.__Vdly__latched_stalu = 0U;
                vlSelfRef.__Vdly__latched_branch = 0U;
                if (vlSelfRef.__PVT__decoder_trigger) {
                    vlSelfRef.__Vdly__count_instr = 
                        (1ULL + vlSelfRef.__PVT__count_instr);
                    vlSelfRef.__PVT__irq_delay = vlSelfRef.__PVT__irq_active;
                    vlSelfRef.__Vdly__reg_next_pc = 
                        (vlSelfRef.__PVT__current_pc 
                         + ((IData)(vlSelfRef.__PVT__compressed_instr)
                             ? 2U : 4U));
                    if (vlSelfRef.__PVT__instr_jal) {
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                        vlSelfRef.__Vdly__reg_next_pc 
                            = (vlSelfRef.__PVT__current_pc 
                               + vlSelfRef.__PVT__decoded_imm_j);
                        vlSelfRef.__Vdly__latched_branch = 1U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst = 0U;
                        vlSelfRef.__Vdly__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.__PVT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.__PVT__compressed_instr))));
                        vlSelfRef.__Vdly__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__reg_op1 = 0U;
                vlSelfRef.__PVT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.__PVT__instr_trap) 
                      | (IData)(vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.__PVT__is_lui_auipc_jal))) {
                    if (vlSelfRef.__PVT__instr_trap) {
                        vlSelfRef.__Vdly__cpu_state = 0x80U;
                    } else if (vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.__PVT__instr_rdcycle) {
                            __Vdly__reg_out = (IData)(vlSelfRef.__PVT__count_cycle);
                        } else if (vlSelfRef.__PVT__instr_rdcycleh) {
                            __Vdly__reg_out = (IData)(
                                                      (vlSelfRef.__PVT__count_cycle 
                                                       >> 0x20U));
                        } else if (vlSelfRef.__PVT__instr_rdinstr) {
                            __Vdly__reg_out = (IData)(vlSelfRef.__PVT__count_instr);
                        } else if (vlSelfRef.__PVT__instr_rdinstrh) {
                            __Vdly__reg_out = (IData)(
                                                      (vlSelfRef.__PVT__count_instr 
                                                       >> 0x20U));
                        }
                        vlSelfRef.__Vdly__latched_store = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__is_lui_auipc_jal) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            ((IData)(vlSelfRef.__PVT__instr_lui)
                              ? 0U : vlSelfRef.__PVT__reg_pc);
                        vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    } else {
                        vlSelfRef.__Vdly__latched_store = 1U;
                        __Vdly__reg_out = vlSelfRef.__PVT__timer;
                        vlSelfRef.__PVT__dbg_rs1val 
                            = vlSelfRef.__PVT__cpuregs_rs1;
                        vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                        vlSelfRef.__Vdly__timer = vlSelfRef.__PVT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.__PVT__instr_trap)))) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    vlSelfRef.__Vdly__cpu_state = 1U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_slli_srli_srai) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    __Vdly__reg_sh = vlSelfRef.__PVT__decoded_rs2;
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else if (vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__decoded_imm;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                } else {
                    vlSelfRef.__Vdly__reg_op1 = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val = vlSelfRef.__PVT__cpuregs_rs1;
                    vlSelfRef.__PVT__dbg_rs1val_valid = 1U;
                    __Vdly__reg_sh = (0x0000001fU & vlSelfRef.__PVT__cpuregs_rs2);
                    vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__PVT__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                    vlSelfRef.__PVT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.__PVT__is_sb_sh_sw) {
                        vlSelfRef.__Vdly__cpu_state = 2U;
                        vlSelfRef.__Vdly__mem_do_rinst = 1U;
                    } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                        vlSelfRef.__Vdly__cpu_state = 4U;
                    } else {
                        vlSelfRef.__Vdly__mem_do_rinst 
                            = vlSelfRef.__PVT__mem_do_prefetch;
                        vlSelfRef.__Vdly__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                __Vdly__reg_sh = (0x0000001fU & vlSelfRef.__PVT__cpuregs_rs2);
                vlSelfRef.__PVT__reg_op2 = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__PVT__dbg_rs2val = vlSelfRef.__PVT__cpuregs_rs2;
                vlSelfRef.__PVT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.__PVT__is_sb_sh_sw) {
                    vlSelfRef.__Vdly__cpu_state = 2U;
                    vlSelfRef.__Vdly__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__is_sll_srl_sra) {
                    vlSelfRef.__Vdly__cpu_state = 4U;
                } else {
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                __Vdly__reg_out = (vlSelfRef.__PVT__reg_pc 
                                   + vlSelfRef.__PVT__decoded_imm);
                if (vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.__PVT__latched_rd = 0U;
                    vlSelfRef.__Vdly__latched_store 
                        = vlSelfRef.__PVT__alu_out_0;
                    vlSelfRef.__Vdly__latched_branch 
                        = vlSelfRef.__PVT__alu_out_0;
                    if (vlSelfRef.__PVT__mem_done) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.__PVT__alu_out_0) {
                        vlSelfRef.__PVT__set_mem_do_rinst = 1U;
                        __Vdly__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.__Vdly__latched_branch 
                        = vlSelfRef.__PVT__instr_jalr;
                    vlSelfRef.__Vdly__latched_store = 1U;
                    vlSelfRef.__Vdly__latched_stalu = 1U;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                vlSelfRef.__Vdly__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.__PVT__reg_sh))) {
                    __Vdly__reg_out = vlSelfRef.__PVT__reg_op1;
                    vlSelfRef.__Vdly__mem_do_rinst 
                        = vlSelfRef.__PVT__mem_do_prefetch;
                    vlSelfRef.__Vdly__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.__PVT__reg_sh))) {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 4U);
                    }
                    __Vdly__reg_sh = (0x0000001fU & 
                                      ((IData)(vlSelfRef.__PVT__reg_sh) 
                                       - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.__PVT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__instr_sll))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__instr_srl))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__instr_sra))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__reg_op1, 1U);
                    }
                    __Vdly__reg_sh = (0x0000001fU & 
                                      ((IData)(vlSelfRef.__PVT__reg_sh) 
                                       - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.__PVT__instr_sb) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (vlSelfRef.__PVT__instr_sh) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_sw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                        __Vdly__decoder_trigger = 1U;
                        __Vdly__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.__Vdly__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.__PVT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__mem_done))) {
                        if (vlSelfRef.__PVT__latched_is_lu) {
                            __Vdly__reg_out = vlSelfRef.__PVT__mem_rdata_word;
                        } else if (vlSelfRef.__PVT__latched_is_lh) {
                            __Vdly__reg_out = VL_EXTENDS_II(32,16, 
                                                            (0x0000ffffU 
                                                             & vlSelfRef.__PVT__mem_rdata_word));
                        } else if (vlSelfRef.__PVT__latched_is_lb) {
                            __Vdly__reg_out = VL_EXTENDS_II(32,8, 
                                                            (0x000000ffU 
                                                             & vlSelfRef.__PVT__mem_rdata_word));
                        }
                        __Vdly__decoder_trigger = 1U;
                        __Vdly__decoder_pseudo_trigger = 1U;
                        vlSelfRef.__Vdly__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__mem_do_rdata)))) {
                        vlSelfRef.__Vdly__reg_op1 = 
                            (vlSelfRef.__PVT__reg_op1 
                             + vlSelfRef.__PVT__decoded_imm);
                        vlSelfRef.__PVT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.__PVT__instr_lb) 
                             | (IData)(vlSelfRef.__PVT__instr_lbu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.__PVT__instr_lh) 
                                    | (IData)(vlSelfRef.__PVT__instr_lhu))) {
                            vlSelfRef.__Vdly__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__instr_lw) {
                            vlSelfRef.__Vdly__mem_wordsize = 0U;
                        }
                        vlSelfRef.__Vdly__latched_is_lu 
                            = vlSelfRef.__PVT__is_lbu_lhu_lw;
                        vlSelfRef.__Vdly__latched_is_lh 
                            = vlSelfRef.__PVT__instr_lh;
                        vlSelfRef.__Vdly__latched_is_lb 
                            = vlSelfRef.__PVT__instr_lb;
                    }
                }
            }
        }
    }
    if (((~ (IData)(vlSymsp->TOP.wb_rst_i)) & ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                               | (IData)(vlSelfRef.__PVT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.__PVT__reg_op1)))) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__mem_wordsize)) 
             & vlSelfRef.__PVT__reg_op1)) {
            vlSelfRef.__Vdly__cpu_state = 0x80U;
        }
    }
    if ((((~ (IData)(vlSymsp->TOP.wb_rst_i)) & (IData)(vlSelfRef.__PVT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.__PVT__reg_pc)))) {
        vlSelfRef.__Vdly__cpu_state = 0x80U;
    }
    if (((IData)(vlSymsp->TOP.wb_rst_i) | (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__Vdly__mem_do_prefetch = 0U;
        vlSelfRef.__Vdly__mem_do_rinst = 0U;
        vlSelfRef.__PVT__mem_do_rdata = 0U;
        vlSelfRef.__PVT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rinst) {
        vlSelfRef.__Vdly__mem_do_rinst = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_rdata) {
        vlSelfRef.__PVT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.__PVT__set_mem_do_wdata) {
        vlSelfRef.__PVT__mem_do_wdata = 1U;
    }
    vlSelfRef.__PVT__current_pc = 0U;
    vlSelfRef.__PVT__reg_sh = __Vdly__reg_sh;
    vlSelfRef.__PVT__count_cycle = __Vdly__count_cycle;
    vlSelfRef.__PVT__count_instr = vlSelfRef.__Vdly__count_instr;
    vlSelfRef.__PVT__latched_is_lu = vlSelfRef.__Vdly__latched_is_lu;
    vlSelfRef.__PVT__latched_is_lh = vlSelfRef.__Vdly__latched_is_lh;
    vlSelfRef.__PVT__latched_is_lb = vlSelfRef.__Vdly__latched_is_lb;
    vlSelfRef.__PVT__timer = vlSelfRef.__Vdly__timer;
    vlSelfRef.__PVT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs1))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs1]
                                     : 0U);
    vlSelfRef.__PVT__reg_next_pc = vlSelfRef.__Vdly__reg_next_pc;
    vlSelfRef.__PVT__mem_do_prefetch = vlSelfRef.__Vdly__mem_do_prefetch;
    vlSelfRef.__PVT__reg_pc = vlSelfRef.__Vdly__reg_pc;
    vlSelfRef.__PVT__latched_stalu = vlSelfRef.__Vdly__latched_stalu;
    vlSelfRef.__PVT__mem_wordsize = vlSelfRef.__Vdly__mem_wordsize;
    vlSelfRef.__PVT__reg_out = __Vdly__reg_out;
    vlSelfRef.__PVT__latched_store = vlSelfRef.__Vdly__latched_store;
    vlSelfRef.__PVT__cpu_state = vlSelfRef.__Vdly__cpu_state;
    vlSelfRef.__PVT__latched_branch = vlSelfRef.__Vdly__latched_branch;
    vlSelfRef.__PVT__reg_op1 = vlSelfRef.__Vdly__reg_op1;
    vlSelfRef.__PVT__mem_la_write = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    vlSelfRef.__PVT__do_waitirq = 0U;
    __Vtableidx2 = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__PVT__dbg_ascii_state[0U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][0U];
    vlSelfRef.__PVT__dbg_ascii_state[1U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][1U];
    vlSelfRef.__PVT__dbg_ascii_state[2U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][2U];
    vlSelfRef.__PVT__dbg_ascii_state[3U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][3U];
    vlSelfRef.__PVT__cpuregs_write = 0U;
    vlSelfRef.__PVT__next_pc = (((IData)(vlSelfRef.__PVT__latched_branch) 
                                 & (IData)(vlSelfRef.__PVT__latched_store))
                                 ? (0xfffffffeU & vlSelfRef.__PVT__reg_out)
                                 : vlSelfRef.__PVT__reg_next_pc);
    vlSelfRef.__PVT__clear_prefetched_high_word = vlSelfRef.__PVT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__prefetched_high_word)))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    if ((((IData)(vlSelfRef.__PVT__latched_branch) 
          | (0U != (IData)(vlSelfRef.__PVT__irq_state))) 
         | (IData)(vlSymsp->TOP.wb_rst_i))) {
        vlSelfRef.__PVT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__alu_out_q = vlSelfRef.__PVT__alu_out;
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000010U) 
                                         | (0x0000ffffU 
                                            & vlSelfRef.__PVT__reg_op2));
        vlSelfRef.__PVT__mem_la_wstrb = ((2U & vlSelfRef.__PVT__reg_op1)
                                          ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000018U) 
                                         | ((0x00ff0000U 
                                             & (vlSelfRef.__PVT__reg_op2 
                                                << 0x00000010U)) 
                                            | ((0x0000ff00U 
                                                & (vlSelfRef.__PVT__reg_op2 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__reg_op2))));
        vlSelfRef.__PVT__mem_la_wstrb = (0x0000000fU 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & vlSelfRef.__PVT__reg_op1)));
    }
    vlSelfRef.__PVT__alu_eq = (vlSelfRef.__PVT__reg_op1 
                               == vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_lts = VL_LTS_III(32, vlSelfRef.__PVT__reg_op1, vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_ltu = (vlSelfRef.__PVT__reg_op1 
                                < vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__is_lbu_lhu_lw = ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                      | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                         | (IData)(vlSelfRef.__PVT__instr_lw)));
    vlSelfRef.__PVT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state))) {
        if (vlSelfRef.__PVT__latched_branch) {
            vlSelfRef.__PVT__cpuregs_write = 1U;
            vlSelfRef.__PVT__cpuregs_wrdata = (vlSelfRef.__PVT__reg_pc 
                                               + ((IData)(vlSelfRef.__PVT__latched_compr)
                                                   ? 2U
                                                   : 4U));
        } else if (((IData)(vlSelfRef.__PVT__latched_store) 
                    & (~ (IData)(vlSelfRef.__PVT__latched_branch)))) {
            vlSelfRef.__PVT__cpuregs_write = 1U;
            vlSelfRef.__PVT__cpuregs_wrdata = ((IData)(vlSelfRef.__PVT__latched_stalu)
                                                ? vlSelfRef.__PVT__alu_out_q
                                                : vlSelfRef.__PVT__reg_out);
        }
    }
    vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__q_insn_rd;
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__decoded_rd = (0x0000001fU 
                                       & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                          >> 7U));
        vlSelfRef.__PVT__decoded_rs2 = (0x0000001fU 
                                        & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                           >> 0x14U));
    }
    vlSelfRef.__PVT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs2))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs2]
                                     : 0U);
    vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__instr_rdcycle = ((IData)((0xc0002073U 
                                                   == 
                                                   (0xfffff07fU 
                                                    & vlSelfRef.__PVT__mem_rdata_q))) 
                                          | (IData)(
                                                    (0xc0102073U 
                                                     == 
                                                     (0xfffff07fU 
                                                      & vlSelfRef.__PVT__mem_rdata_q))));
        vlSelfRef.__PVT__instr_rdcycleh = ((IData)(
                                                   (0xc8002073U 
                                                    == 
                                                    (0xfffff07fU 
                                                     & vlSelfRef.__PVT__mem_rdata_q))) 
                                           | (IData)(
                                                     (0xc8102073U 
                                                      == 
                                                      (0xfffff07fU 
                                                       & vlSelfRef.__PVT__mem_rdata_q))));
        vlSelfRef.__PVT__instr_rdinstr = (IData)((0xc0202073U 
                                                  == 
                                                  (0xfffff07fU 
                                                   & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_rdinstrh = (IData)((0xc8202073U 
                                                   == 
                                                   (0xfffff07fU 
                                                    & vlSelfRef.__PVT__mem_rdata_q)));
    }
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    vlSelfRef.__PVT__is_lui_auipc_jal = ((IData)(vlSelfRef.__PVT__instr_lui) 
                                         | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                            | (IData)(vlSelfRef.__PVT__instr_jal)));
    vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.__PVT__instr_lui) | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                                  | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                              | (IData)(vlSelfRef.__PVT__instr_sub)))))));
    vlSelfRef.__PVT__is_slti_blt_slt = ((IData)(vlSelfRef.__PVT__instr_slti) 
                                        | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                           | (IData)(vlSelfRef.__PVT__instr_slt)));
    vlSelfRef.__PVT__is_sltiu_bltu_sltu = ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                           | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                              | (IData)(vlSelfRef.__PVT__instr_sltu)));
    vlSelfRef.__PVT__is_compare = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                   | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                      | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                         | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                            | (IData)(vlSelfRef.__PVT__instr_sltu)))));
    if (((IData)(vlSelfRef.__PVT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__instr_beq = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0U == (0x00007000U 
                                                & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bne = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00001000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_blt = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00004000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bge = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                      & (0x00005000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bltu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (0x00006000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_bgeu = ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu) 
                                       & (0x00007000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lb = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0U == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lh = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0x00001000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lw = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                     & (0x00002000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lbu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (0x00004000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_lhu = ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                      & (0x00005000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sb = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0U == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sh = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0x00001000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sw = ((IData)(vlSelfRef.__PVT__is_sb_sh_sw) 
                                     & (0x00002000U 
                                        == (0x00007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_addi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0U == (0x00007000U 
                                                 & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slti = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00002000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sltiu = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                        & (0x00003000U 
                                           == (0x00007000U 
                                               & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_xori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00004000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_ori = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                      & (0x00006000U 
                                         == (0x00007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_andi = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00007000U 
                                          == (0x00007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slli = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00001000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srli = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x00005000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srai = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                       & (0x40005000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__is_slli_srli_srai = ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                                              & ((IData)(
                                                         (0x00001000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.__PVT__mem_rdata_q))) 
                                                 | ((IData)(
                                                            (0x00005000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.__PVT__mem_rdata_q))) 
                                                    | (IData)(
                                                              (0x40005000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.__PVT__mem_rdata_q))))));
        vlSelfRef.__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.__PVT__instr_jalr) 
               | ((IData)(vlSelfRef.__PVT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.__PVT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.__PVT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.__PVT__is_compare = 0U;
        vlSelfRef.__PVT__decoded_imm = ((IData)(vlSelfRef.__PVT__instr_jal)
                                         ? vlSelfRef.__PVT__decoded_imm_j
                                         : (((IData)(vlSelfRef.__PVT__instr_lui) 
                                             | (IData)(vlSelfRef.__PVT__instr_auipc))
                                             ? VL_SHIFTL_III(32,32,32, 
                                                             (vlSelfRef.__PVT__mem_rdata_q 
                                                              >> 0x0cU), 0x0000000cU)
                                             : (((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                 | ((IData)(vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu) 
                                                    | (IData)(vlSelfRef.__PVT__is_alu_reg_imm)))
                                                 ? 
                                                VL_EXTENDS_II(32,12, 
                                                              (vlSelfRef.__PVT__mem_rdata_q 
                                                               >> 0x14U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu)
                                                  ? 
                                                 VL_EXTENDS_II(32,13, 
                                                               ((((2U 
                                                                   & (vlSelfRef.__PVT__mem_rdata_q 
                                                                      >> 0x0000001eU)) 
                                                                  | (1U 
                                                                     & (vlSelfRef.__PVT__mem_rdata_q 
                                                                        >> 7U))) 
                                                                 << 0x0000000bU) 
                                                                | ((0x000007e0U 
                                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                                       >> 0x00000014U)) 
                                                                   | (0x0000001eU 
                                                                      & (vlSelfRef.__PVT__mem_rdata_q 
                                                                         >> 7U)))))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__is_sb_sh_sw)
                                                   ? 
                                                  VL_EXTENDS_II(32,12, 
                                                                ((0x00000fe0U 
                                                                  & (vlSelfRef.__PVT__mem_rdata_q 
                                                                     >> 0x00000014U)) 
                                                                 | (0x0000001fU 
                                                                    & (vlSelfRef.__PVT__mem_rdata_q 
                                                                       >> 7U))))
                                                   : 0U)))));
        vlSelfRef.__PVT__instr_add = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0U == (0xfe007000U 
                                                & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sub = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x40000000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sll = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00001000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_slt = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00002000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sltu = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                       & (0x00003000U 
                                          == (0xfe007000U 
                                              & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_xor = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00004000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_srl = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00005000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_sra = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x40005000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_or = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                     & (0x00006000U 
                                        == (0xfe007000U 
                                            & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__instr_and = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                      & (0x00007000U 
                                         == (0xfe007000U 
                                             & vlSelfRef.__PVT__mem_rdata_q)));
        vlSelfRef.__PVT__is_sll_srl_sra = ((IData)(vlSelfRef.__PVT__is_alu_reg_reg) 
                                           & ((IData)(
                                                      (0x00001000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelfRef.__PVT__mem_rdata_q))) 
                                              | ((IData)(
                                                         (0x00005000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.__PVT__mem_rdata_q))) 
                                                 | (IData)(
                                                           (0x40005000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.__PVT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.__PVT__mem_do_rinst) & (IData)(vlSelfRef.__PVT__mem_done))) {
        vlSelfRef.__PVT__compressed_instr = 0U;
        vlSelfRef.__PVT__is_alu_reg_imm = (0x13U == 
                                           (0x0000007fU 
                                            & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__is_lb_lh_lw_lbu_lhu = (3U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__is_sb_sh_sw = (0x23U == (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__decoded_imm_j = ((0x000fffffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0xfff00000U 
                                             & VL_EXTENDS_II(32,21, 
                                                             (0x001ffffeU 
                                                              & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                 >> 0x0000000bU)))));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffff801U 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x000007feU 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                >> 9U)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffff7ffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x00000800U 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                << 2U)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfff00fffU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (0x000ff000U 
                                             & (VL_EXTENDS_II(32,21, 
                                                              (0x001ffffeU 
                                                               & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                  >> 0x0000000bU))) 
                                                << 0x0000000bU)));
        vlSelfRef.__PVT__decoded_imm_j = ((0xfffffffeU 
                                           & vlSelfRef.__PVT__decoded_imm_j) 
                                          | (1U & VL_EXTENDS_II(1,21, 
                                                                (0x001ffffeU 
                                                                 & (vlSelfRef.__PVT__mem_rdata_latched_noshuffle 
                                                                    >> 0x0000000bU)))));
        vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_auipc = (0x17U == (0x0000007fU 
                                                  & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_lui = (0x37U == (0x0000007fU 
                                                & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_jal = (0x6fU == (0x0000007fU 
                                                & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__instr_jalr = (IData)((0x00000067U 
                                               == (0x0000707fU 
                                                   & vlSelfRef.__PVT__mem_rdata_latched_noshuffle)));
        vlSelfRef.__PVT__is_alu_reg_reg = (0x33U == 
                                           (0x0000007fU 
                                            & vlSelfRef.__PVT__mem_rdata_latched_noshuffle));
    }
    if (vlSymsp->TOP.wb_rst_i) {
        vlSelfRef.__PVT__irq_active = 0U;
        vlSelfRef.__PVT__is_compare = 0U;
        vlSelfRef.__PVT__instr_beq = 0U;
        vlSelfRef.__PVT__instr_bne = 0U;
        vlSelfRef.__PVT__instr_blt = 0U;
        vlSelfRef.__PVT__instr_bge = 0U;
        vlSelfRef.__PVT__instr_bltu = 0U;
        vlSelfRef.__PVT__instr_bgeu = 0U;
        vlSelfRef.__PVT__instr_addi = 0U;
        vlSelfRef.__PVT__instr_slti = 0U;
        vlSelfRef.__PVT__instr_sltiu = 0U;
        vlSelfRef.__PVT__instr_xori = 0U;
        vlSelfRef.__PVT__instr_ori = 0U;
        vlSelfRef.__PVT__instr_andi = 0U;
        vlSelfRef.__PVT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.__PVT__instr_add = 0U;
        vlSelfRef.__PVT__instr_sub = 0U;
        vlSelfRef.__PVT__instr_sll = 0U;
        vlSelfRef.__PVT__instr_slt = 0U;
        vlSelfRef.__PVT__instr_sltu = 0U;
        vlSelfRef.__PVT__instr_xor = 0U;
        vlSelfRef.__PVT__instr_srl = 0U;
        vlSelfRef.__PVT__instr_sra = 0U;
        vlSelfRef.__PVT__instr_or = 0U;
        vlSelfRef.__PVT__instr_and = 0U;
    }
    vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__PVT__decoder_pseudo_trigger = __Vdly__decoder_pseudo_trigger;
    vlSelfRef.__PVT__decoder_trigger = __Vdly__decoder_trigger;
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    if (vlSelfRef.__PVT__mem_xfer) {
        vlSelfRef.__PVT__mem_rdata_q = vlSymsp->TOP.picorv32_wb__DOT__mem_rdata;
    }
    vlSelfRef.__PVT__alu_out_0 = 0U;
    vlSelfRef.__PVT__alu_out = 0U;
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_eq;
    } else if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_eq)));
    } else if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_lts)));
    } else if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__alu_out_0 = (1U & (~ (IData)(vlSelfRef.__PVT__alu_ltu)));
    } else if (vlSelfRef.__PVT__is_slti_blt_slt) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_lts;
    } else if (vlSelfRef.__PVT__is_sltiu_bltu_sltu) {
        vlSelfRef.__PVT__alu_out_0 = vlSelfRef.__PVT__alu_ltu;
    }
    if (vlSelfRef.__PVT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.__PVT__alu_out = ((IData)(vlSelfRef.__PVT__instr_sub)
                                     ? (vlSelfRef.__PVT__reg_op1 
                                        - vlSelfRef.__PVT__reg_op2)
                                     : (vlSelfRef.__PVT__reg_op1 
                                        + vlSelfRef.__PVT__reg_op2));
    } else if (vlSelfRef.__PVT__is_compare) {
        vlSelfRef.__PVT__alu_out = vlSelfRef.__PVT__alu_out_0;
    } else if (((IData)(vlSelfRef.__PVT__instr_xori) 
                | (IData)(vlSelfRef.__PVT__instr_xor))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    ^ vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_ori) 
                | (IData)(vlSelfRef.__PVT__instr_or))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    | vlSelfRef.__PVT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__instr_andi) 
                | (IData)(vlSelfRef.__PVT__instr_and))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__reg_op1 
                                    & vlSelfRef.__PVT__reg_op2);
    }
    vlSelfRef.__PVT__instr_trap = (1U & (~ ((IData)(vlSelfRef.__PVT__instr_lui) 
                                            | ((IData)(vlSelfRef.__PVT__instr_auipc) 
                                               | ((IData)(vlSelfRef.__PVT__instr_jal) 
                                                  | (((IData)(vlSelfRef.__PVT__instr_jalr) 
                                                      | ((IData)(vlSelfRef.__PVT__instr_beq) 
                                                         | ((IData)(vlSelfRef.__PVT__instr_bne) 
                                                            | ((IData)(vlSelfRef.__PVT__instr_blt) 
                                                               | ((IData)(vlSelfRef.__PVT__instr_bge) 
                                                                  | ((IData)(vlSelfRef.__PVT__instr_bltu) 
                                                                     | ((IData)(vlSelfRef.__PVT__instr_bgeu) 
                                                                        | ((IData)(vlSelfRef.__PVT__instr_lb) 
                                                                           | ((IData)(vlSelfRef.__PVT__instr_lh) 
                                                                              | ((IData)(vlSelfRef.__PVT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_add) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_slt) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_sltu))))))))))))))))))))))))))))) 
                                                     | ((IData)(vlSelfRef.__PVT__instr_xor) 
                                                        | ((IData)(vlSelfRef.__PVT__instr_srl) 
                                                           | ((IData)(vlSelfRef.__PVT__instr_sra) 
                                                              | ((IData)(vlSelfRef.__PVT__instr_or) 
                                                                 | ((IData)(vlSelfRef.__PVT__instr_and) 
                                                                    | ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
                                                                       | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
                                                                          | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                                                                             | ((IData)(vlSelfRef.__PVT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.__PVT__compressed_instr) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.__PVT__instr_timer) 
                                                                                | (IData)(vlSelfRef.__PVT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.__PVT__new_ascii_instr = 0ULL;
    if (vlSelfRef.__PVT__instr_lui) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.__PVT__instr_auipc) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.__PVT__instr_jal) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.__PVT__instr_jalr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.__PVT__instr_beq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.__PVT__instr_bne) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.__PVT__instr_blt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.__PVT__instr_bge) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.__PVT__instr_bltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_bgeu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.__PVT__instr_lb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.__PVT__instr_lh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.__PVT__instr_lw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.__PVT__instr_lbu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.__PVT__instr_lhu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.__PVT__instr_sb) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.__PVT__instr_sh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.__PVT__instr_sw) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.__PVT__instr_addi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.__PVT__instr_slti) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.__PVT__instr_sltiu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.__PVT__instr_xori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_ori) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.__PVT__instr_andi) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.__PVT__instr_slli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srli) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.__PVT__instr_srai) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.__PVT__instr_add) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.__PVT__instr_sub) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.__PVT__instr_sll) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.__PVT__instr_slt) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.__PVT__instr_sltu) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.__PVT__instr_xor) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.__PVT__instr_srl) {
        vlSelfRef.__PVT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.__PVT__instr_sra) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.__PVT__instr_or) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.__PVT__instr_and) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycle) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.__PVT__instr_rdcycleh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.__PVT__instr_rdinstrh) {
        vlSelfRef.__PVT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.__PVT__instr_fence) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.__PVT__instr_getq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.__PVT__instr_setq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.__PVT__compressed_instr) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.__PVT__instr_maskirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.__PVT__instr_waitirq) {
        vlSelfRef.__PVT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.__PVT__instr_timer) {
        vlSelfRef.__PVT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__decoded_rd;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__decoded_imm;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        }
    }
    vlSelfRef.__PVT__mem_do_rinst = vlSelfRef.__Vdly__mem_do_rinst;
    vlSelfRef.__PVT__mem_la_read = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                    & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                       & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                          | ((IData)(vlSelfRef.__PVT__mem_do_prefetch) 
                                             | (IData)(vlSelfRef.__PVT__mem_do_rdata)))));
}

void Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__2(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___nba_sequent__TOP__picorv32_wb__DOT__picorv32_core__2\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_xfer = ((IData)(vlSymsp->TOP.picorv32_wb__DOT__mem_ready) 
                                 & (IData)(vlSelfRef.mem_valid));
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = vlSymsp->TOP.picorv32_wb__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = ((2U & vlSelfRef.__PVT__reg_op1)
                                            ? (vlSymsp->TOP.picorv32_wb__DOT__mem_rdata 
                                               >> 0x10U)
                                            : (0x0000ffffU 
                                               & vlSymsp->TOP.picorv32_wb__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_rdata_word = ((2U & vlSelfRef.__PVT__reg_op1)
                                            ? ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (vlSymsp->TOP.picorv32_wb__DOT__mem_rdata 
                                                   >> 0x18U)
                                                : (0x000000ffU 
                                                   & (vlSymsp->TOP.picorv32_wb__DOT__mem_rdata 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelfRef.__PVT__reg_op1)
                                                ? (0x000000ffU 
                                                   & (vlSymsp->TOP.picorv32_wb__DOT__mem_rdata 
                                                      >> 8U))
                                                : (0x000000ffU 
                                                   & vlSymsp->TOP.picorv32_wb__DOT__mem_rdata)));
    }
    vlSelfRef.__PVT__mem_rdata_latched_noshuffle = 
        ((IData)(vlSelfRef.__PVT__mem_xfer) ? vlSymsp->TOP.picorv32_wb__DOT__mem_rdata
          : vlSelfRef.__PVT__mem_rdata_q);
    vlSelfRef.__PVT__mem_done = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                 & (((IData)(vlSelfRef.__PVT__mem_xfer) 
                                     & ((0U != (IData)(vlSelfRef.__PVT__mem_state)) 
                                        & ((IData)(vlSelfRef.__PVT__mem_do_rinst) 
                                           | ((IData)(vlSelfRef.__PVT__mem_do_rdata) 
                                              | (IData)(vlSelfRef.__PVT__mem_do_wdata))))) 
                                    | ((3U == (IData)(vlSelfRef.__PVT__mem_state)) 
                                       & (IData)(vlSelfRef.__PVT__mem_do_rinst))));
}
