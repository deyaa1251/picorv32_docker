// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

VL_ATTR_COLD void Vpicorv32___024root___eval_static(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_static\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vpicorv32___024root___eval_initial(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_initial\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpicorv32___024root___eval_final(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_final\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpicorv32___024root___eval_phase__stl(Vpicorv32___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32___024root___eval_settle(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_settle\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vpicorv32___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("picorv32.v", 62, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vpicorv32___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vpicorv32___024root___eval_triggers_vec__stl(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_triggers_vec__stl\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vpicorv32___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vpicorv32___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vpicorv32___024root___stl_sequent__TOP__0(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___stl_sequent__TOP__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.pcpi_rs1 = vlSelfRef.picorv32__DOT__reg_op1;
    vlSelfRef.pcpi_rs2 = vlSelfRef.picorv32__DOT__reg_op2;
    if ((0U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.mem_la_wstrb = 0x0fU;
        vlSelfRef.mem_la_wdata = vlSelfRef.picorv32__DOT__reg_op2;
        vlSelfRef.picorv32__DOT__mem_rdata_word = vlSelfRef.mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.picorv32__DOT__reg_op1)) {
            vlSelfRef.mem_la_wstrb = 0x0cU;
            vlSelfRef.picorv32__DOT__mem_rdata_word 
                = (vlSelfRef.mem_rdata >> 0x10U);
        } else {
            vlSelfRef.mem_la_wstrb = 3U;
            vlSelfRef.picorv32__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSelfRef.mem_rdata);
        }
        vlSelfRef.mem_la_wdata = ((vlSelfRef.picorv32__DOT__reg_op2 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSelfRef.picorv32__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.picorv32__DOT__mem_wordsize))) {
        vlSelfRef.mem_la_wstrb = (0x0000000fU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelfRef.picorv32__DOT__reg_op1)));
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
    vlSelfRef.picorv32__DOT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.picorv32__DOT__decoded_rs1))
                                             ? vlSelfRef.picorv32__DOT__cpuregs
                                            [vlSelfRef.picorv32__DOT__decoded_rs1]
                                             : 0U);
    vlSelfRef.picorv32__DOT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.picorv32__DOT__decoded_rs2))
                                             ? vlSelfRef.picorv32__DOT__cpuregs
                                            [vlSelfRef.picorv32__DOT__decoded_rs2]
                                             : 0U);
    vlSelfRef.picorv32__DOT__launch_next_insn = ((0x40U 
                                                  == (IData)(vlSelfRef.picorv32__DOT__cpu_state)) 
                                                 & (IData)(vlSelfRef.picorv32__DOT__decoder_trigger));
    vlSelfRef.picorv32__DOT__cpuregs_write = 0U;
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
    vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.picorv32__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.picorv32__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.picorv32__DOT__instr_rdinstrh))));
    vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__q_insn_imm;
    vlSelfRef.picorv32__DOT__dbg_insn_opcode = vlSelfRef.picorv32__DOT__q_insn_opcode;
    vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__q_insn_rs1;
    vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__q_insn_rs2;
    vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__q_insn_rd;
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
    vlSelfRef.picorv32__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.picorv32__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.picorv32__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.picorv32__DOT__mem_do_wdata)));
    vlSelfRef.picorv32__DOT__next_pc = (((IData)(vlSelfRef.picorv32__DOT__latched_branch) 
                                         & (IData)(vlSelfRef.picorv32__DOT__latched_store))
                                         ? (0xfffffffeU 
                                            & vlSelfRef.picorv32__DOT__reg_out)
                                         : vlSelfRef.picorv32__DOT__reg_next_pc);
    vlSelfRef.picorv32__DOT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                         & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.picorv32__DOT__alu_eq = (vlSelfRef.picorv32__DOT__reg_op1 
                                       == vlSelfRef.picorv32__DOT__reg_op2);
    vlSelfRef.picorv32__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.picorv32__DOT__reg_op1, vlSelfRef.picorv32__DOT__reg_op2);
    vlSelfRef.picorv32__DOT__alu_ltu = (vlSelfRef.picorv32__DOT__reg_op1 
                                        < vlSelfRef.picorv32__DOT__reg_op2);
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
    vlSelfRef.mem_la_addr = (((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                              | (IData)(vlSelfRef.picorv32__DOT__mem_do_rinst))
                              ? (0xfffffffcU & vlSelfRef.picorv32__DOT__next_pc)
                              : (0xfffffffcU & vlSelfRef.picorv32__DOT__reg_op1));
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
    vlSelfRef.picorv32__DOT__alu_out_0 = 0U;
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
    vlSelfRef.picorv32__DOT__alu_out = 0U;
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
    vlSelfRef.picorv32__DOT__dbg_ascii_instr = vlSelfRef.picorv32__DOT__q_ascii_instr;
    if (vlSelfRef.picorv32__DOT__dbg_next) {
        if (vlSelfRef.picorv32__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__cached_insn_imm;
            vlSelfRef.picorv32__DOT__dbg_insn_opcode 
                = vlSelfRef.picorv32__DOT__cached_insn_opcode;
            vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__cached_insn_rs1;
            vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__cached_insn_rs2;
            vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__cached_insn_rd;
            vlSelfRef.picorv32__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.picorv32__DOT__dbg_insn_imm = vlSelfRef.picorv32__DOT__decoded_imm;
            vlSelfRef.picorv32__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.picorv32__DOT__next_insn_opcode))
                    ? vlSelfRef.picorv32__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.picorv32__DOT__next_insn_opcode));
            vlSelfRef.picorv32__DOT__dbg_insn_rs1 = vlSelfRef.picorv32__DOT__decoded_rs1;
            vlSelfRef.picorv32__DOT__dbg_insn_rs2 = vlSelfRef.picorv32__DOT__decoded_rs2;
            vlSelfRef.picorv32__DOT__dbg_insn_rd = vlSelfRef.picorv32__DOT__decoded_rd;
            vlSelfRef.picorv32__DOT__dbg_ascii_instr 
                = vlSelfRef.picorv32__DOT__new_ascii_instr;
        }
    }
}

VL_ATTR_COLD void Vpicorv32___024root____Vm_traceActivitySetAll(Vpicorv32___024root* vlSelf);

VL_ATTR_COLD void Vpicorv32___024root___eval_stl(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_stl\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vpicorv32___024root___stl_sequent__TOP__0(vlSelf);
        Vpicorv32___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vpicorv32___024root___eval_phase__stl(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___eval_phase__stl\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpicorv32___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpicorv32___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vpicorv32___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vpicorv32___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vpicorv32___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vpicorv32___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpicorv32___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpicorv32___024root____Vm_traceActivitySetAll(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root____Vm_traceActivitySetAll\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vpicorv32___024root___ctor_var_reset(Vpicorv32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root___ctor_var_reset\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214934560881419504ull);
    vlSelf->mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1551974250180885553ull);
    vlSelf->mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406578376079151150ull);
    vlSelf->mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6248464876150524742ull);
    vlSelf->mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 326597072690670135ull);
    vlSelf->mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5431754401481461448ull);
    vlSelf->mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8859681292774497410ull);
    vlSelf->mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9659133473039683418ull);
    vlSelf->mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8565982314622665277ull);
    vlSelf->mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2837371101553232879ull);
    vlSelf->mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1622902664297165684ull);
    vlSelf->mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2304483854594787345ull);
    vlSelf->mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11800603327254930916ull);
    vlSelf->pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5227521224921763504ull);
    vlSelf->pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2952725938169097227ull);
    vlSelf->pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1391770658781481200ull);
    vlSelf->pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5164563264027113184ull);
    vlSelf->pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5601562995063903123ull);
    vlSelf->pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17761009456676581553ull);
    vlSelf->pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497305552956645259ull);
    vlSelf->pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 976311364239131236ull);
    vlSelf->irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14145092342636110857ull);
    vlSelf->eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13895818346295942146ull);
    vlSelf->trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13633812473643571344ull);
    vlSelf->trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2099819338854512805ull);
    vlSelf->picorv32__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14121452340704831718ull);
    vlSelf->picorv32__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16912569676483351486ull);
    vlSelf->picorv32__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16335457649852390453ull);
    vlSelf->picorv32__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2072955974374748253ull);
    vlSelf->picorv32__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7914393666922912079ull);
    vlSelf->picorv32__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9437255880761803543ull);
    vlSelf->picorv32__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16072805334387811324ull);
    vlSelf->picorv32__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10968201359270262479ull);
    vlSelf->picorv32__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14219093647599662337ull);
    vlSelf->picorv32__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5097383955938472843ull);
    vlSelf->picorv32__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7346099964648903106ull);
    vlSelf->picorv32__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14298145148609300646ull);
    vlSelf->picorv32__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9498338675854744064ull);
    vlSelf->picorv32__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3050952316280461757ull);
    vlSelf->picorv32__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14815704432389677028ull);
    vlSelf->picorv32__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10354775927647522306ull);
    vlSelf->picorv32__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9023596904872058793ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->picorv32__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11875228895882256926ull);
    }
    vlSelf->picorv32__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18124494494443738326ull);
    vlSelf->picorv32__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14611402561852787097ull);
    vlSelf->picorv32__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2535089821450743398ull);
    vlSelf->picorv32__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13793272151573182329ull);
    vlSelf->picorv32__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8709240280545843705ull);
    vlSelf->picorv32__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12566295514484453907ull);
    vlSelf->picorv32__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5994832022366862886ull);
    vlSelf->picorv32__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1488243902940835121ull);
    vlSelf->picorv32__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2320920837243557805ull);
    vlSelf->picorv32__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16430218567371101683ull);
    vlSelf->picorv32__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3497272993455961204ull);
    vlSelf->picorv32__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8350945465001563891ull);
    vlSelf->picorv32__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1105542352694127826ull);
    vlSelf->picorv32__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3760859787727491509ull);
    vlSelf->picorv32__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12174840319881292729ull);
    vlSelf->picorv32__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3538307675960095726ull);
    vlSelf->picorv32__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8659798619031695854ull);
    vlSelf->picorv32__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6678261728953833063ull);
    vlSelf->picorv32__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1493937047445282542ull);
    vlSelf->picorv32__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16601289861061656312ull);
    vlSelf->picorv32__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13501537097193797168ull);
    vlSelf->picorv32__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8754581043206266233ull);
    vlSelf->picorv32__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5054189934576177358ull);
    vlSelf->picorv32__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8759593791983381597ull);
    vlSelf->picorv32__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11048797323597772286ull);
    vlSelf->picorv32__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18401724377665900064ull);
    vlSelf->picorv32__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4519346663732096638ull);
    vlSelf->picorv32__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1246128965355384747ull);
    vlSelf->picorv32__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14298463661512752649ull);
    vlSelf->picorv32__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2000997673374367342ull);
    vlSelf->picorv32__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14750304330998224372ull);
    vlSelf->picorv32__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10322699012743178045ull);
    vlSelf->picorv32__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325527371582514226ull);
    vlSelf->picorv32__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5723402219920761839ull);
    vlSelf->picorv32__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2146673981983639507ull);
    vlSelf->picorv32__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16831067760475108576ull);
    vlSelf->picorv32__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8060819917737824239ull);
    vlSelf->picorv32__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10846255902989634621ull);
    vlSelf->picorv32__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1987800882367251024ull);
    vlSelf->picorv32__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6133073889772345505ull);
    vlSelf->picorv32__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8721607040870763957ull);
    vlSelf->picorv32__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1457755802198295856ull);
    vlSelf->picorv32__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14801265564512391042ull);
    vlSelf->picorv32__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 433584022273221779ull);
    vlSelf->picorv32__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11045470381228556204ull);
    vlSelf->picorv32__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13830145374238995123ull);
    vlSelf->picorv32__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12901469676269429871ull);
    vlSelf->picorv32__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12699653301056628715ull);
    vlSelf->picorv32__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1775262710246006514ull);
    vlSelf->picorv32__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3272910975512722142ull);
    vlSelf->picorv32__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395035920424086820ull);
    vlSelf->picorv32__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2069993908554212713ull);
    vlSelf->picorv32__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1927084084529988776ull);
    vlSelf->picorv32__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9595986558994995855ull);
    vlSelf->picorv32__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745096191834321405ull);
    vlSelf->picorv32__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1099911806290034231ull);
    vlSelf->picorv32__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4757224017802338825ull);
    vlSelf->picorv32__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9044131213783374902ull);
    vlSelf->picorv32__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 407247596602626510ull);
    vlSelf->picorv32__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14346089137038026893ull);
    vlSelf->picorv32__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16185166006769406131ull);
    vlSelf->picorv32__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212264223384196427ull);
    vlSelf->picorv32__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3573336213069980811ull);
    vlSelf->picorv32__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14104397864298662696ull);
    vlSelf->picorv32__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14047596052610682993ull);
    vlSelf->picorv32__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2796962702815854382ull);
    vlSelf->picorv32__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15307489915299692575ull);
    vlSelf->picorv32__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16650593217380265856ull);
    vlSelf->picorv32__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17990004002487827545ull);
    vlSelf->picorv32__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3012841512747470065ull);
    vlSelf->picorv32__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13896623979865547900ull);
    vlSelf->picorv32__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9584892070052356546ull);
    vlSelf->picorv32__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12132168468850637892ull);
    vlSelf->picorv32__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12653824007771629663ull);
    vlSelf->picorv32__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13917792378206124735ull);
    vlSelf->picorv32__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10179343551050410705ull);
    vlSelf->picorv32__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1380308167679625083ull);
    vlSelf->picorv32__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15675513242825088846ull);
    vlSelf->picorv32__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11068784292456033556ull);
    vlSelf->picorv32__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3230913558628141720ull);
    vlSelf->picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18094578554462591804ull);
    vlSelf->picorv32__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680098426859068008ull);
    vlSelf->picorv32__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14216154367847298694ull);
    vlSelf->picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16176905683984943567ull);
    vlSelf->picorv32__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10512278402946128248ull);
    vlSelf->picorv32__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1805950771039889012ull);
    vlSelf->picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2492315215716003683ull);
    vlSelf->picorv32__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15088829414806394977ull);
    vlSelf->picorv32__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4610083274823270174ull);
    vlSelf->picorv32__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7694167013155358420ull);
    vlSelf->picorv32__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9100982845412002253ull);
    vlSelf->picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6512881017826287995ull);
    vlSelf->picorv32__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 493089728241699942ull);
    vlSelf->picorv32__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 378772743793264895ull);
    vlSelf->picorv32__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14004857994098649207ull);
    vlSelf->picorv32__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1263599489651464435ull);
    vlSelf->picorv32__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5972956092332223800ull);
    vlSelf->picorv32__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13621232188173841334ull);
    vlSelf->picorv32__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11082159260249441682ull);
    vlSelf->picorv32__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11865403906884565298ull);
    vlSelf->picorv32__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629981104930749969ull);
    vlSelf->picorv32__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714182868564464171ull);
    vlSelf->picorv32__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18408138785554815600ull);
    vlSelf->picorv32__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8792101765417454365ull);
    vlSelf->picorv32__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8888863778184249599ull);
    vlSelf->picorv32__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8831505973703778190ull);
    vlSelf->picorv32__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4479465671456494327ull);
    vlSelf->picorv32__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4639505588911434408ull);
    vlSelf->picorv32__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16624433076572244240ull);
    vlSelf->picorv32__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15024261653194956721ull);
    vlSelf->picorv32__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12724315488194027757ull);
    vlSelf->picorv32__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13297473420789265948ull);
    vlSelf->picorv32__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14880605467597357131ull);
    vlSelf->picorv32__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5501627589149919596ull);
    vlSelf->picorv32__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11870708578982314780ull);
    vlSelf->picorv32__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11156497828985738023ull);
    vlSelf->picorv32__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4928647603389742970ull);
    vlSelf->picorv32__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12746049703291863331ull);
    vlSelf->picorv32__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3046311126206853742ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->picorv32__DOT__dbg_ascii_state, __VscopeHash, 11142317762392075746ull);
    vlSelf->picorv32__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1093305222010980532ull);
    vlSelf->picorv32__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11492206739185223581ull);
    vlSelf->picorv32__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9224400617853380489ull);
    vlSelf->picorv32__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18125767250190313322ull);
    vlSelf->picorv32__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148471926206591558ull);
    vlSelf->picorv32__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8745919326613289504ull);
    vlSelf->picorv32__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1375228275687968656ull);
    vlSelf->picorv32__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7079734321650518447ull);
    vlSelf->picorv32__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4221127774782755100ull);
    vlSelf->picorv32__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9761626700996604311ull);
    vlSelf->picorv32__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10816255395667864209ull);
    vlSelf->picorv32__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13137087215421460208ull);
    vlSelf->picorv32__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351233880903638913ull);
    vlSelf->picorv32__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4769056860585434288ull);
    vlSelf->picorv32__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18213593973681793926ull);
    vlSelf->picorv32__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3095300926909481913ull);
    vlSelf->picorv32__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12240022294098419922ull);
    vlSelf->picorv32__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 922710305001310158ull);
    vlSelf->picorv32__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9209453300960891821ull);
    vlSelf->picorv32__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2390570611975329687ull);
    vlSelf->picorv32__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9464808477821117374ull);
    vlSelf->picorv32__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4157016480118076424ull);
    vlSelf->picorv32__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17988570980734900621ull);
    vlSelf->picorv32__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3051651381537927093ull);
    vlSelf->picorv32__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14608876806856536315ull);
    vlSelf->picorv32__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484354542280996278ull);
    vlSelf->picorv32__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17005284316347595648ull);
    vlSelf->picorv32__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4638866069929508448ull);
    vlSelf->picorv32__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10098482340148631320ull);
    vlSelf->picorv32__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2078214393766757778ull);
    vlSelf->picorv32__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16940806177099478716ull);
    vlSelf->picorv32__DOT____VdfgRegularize_h233421b0_0_0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
