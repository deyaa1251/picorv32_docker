// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32__ConstPool__TABLE_hee98425f_0;

VL_ATTR_COLD void Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_axi__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_axi__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wstrb = 0x0fU;
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_rdata_word = vlSymsp->TOP.mem_axi_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        if ((2U & vlSelfRef.__PVT__reg_op1)) {
            vlSelfRef.__PVT__mem_la_wstrb = 0x0cU;
            vlSelfRef.__PVT__mem_rdata_word = (vlSymsp->TOP.mem_axi_rdata 
                                               >> 0x10U);
        } else {
            vlSelfRef.__PVT__mem_la_wstrb = 3U;
            vlSelfRef.__PVT__mem_rdata_word = (0x0000ffffU 
                                               & vlSymsp->TOP.mem_axi_rdata);
        }
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000010U) 
                                         | (0x0000ffffU 
                                            & vlSelfRef.__PVT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wstrb = (0x0000000fU 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & vlSelfRef.__PVT__reg_op1)));
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
    vlSelfRef.__PVT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs1))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs1]
                                     : 0U);
    vlSelfRef.__PVT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs2))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs2]
                                     : 0U);
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    vlSelfRef.__PVT__cpuregs_write = 0U;
    vlSelfRef.__PVT__mem_la_write = ((IData)(vlSymsp->TOP.resetn) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__PVT__dbg_ascii_state[0U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][0U];
    vlSelfRef.__PVT__dbg_ascii_state[1U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][1U];
    vlSelfRef.__PVT__dbg_ascii_state[2U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][2U];
    vlSelfRef.__PVT__dbg_ascii_state[3U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][3U];
    vlSelfRef.__PVT__next_pc = (((IData)(vlSelfRef.__PVT__latched_branch) 
                                 & (IData)(vlSelfRef.__PVT__latched_store))
                                 ? (0xfffffffeU & vlSelfRef.__PVT__reg_out)
                                 : vlSelfRef.__PVT__reg_next_pc);
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__q_insn_rd;
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
    vlSelfRef.mem_ready = ((IData)(vlSymsp->TOP.mem_axi_bvalid) 
                           | (IData)(vlSymsp->TOP.mem_axi_rvalid));
    vlSelfRef.__PVT__alu_eq = (vlSelfRef.__PVT__reg_op1 
                               == vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_lts = VL_LTS_III(32, vlSelfRef.__PVT__reg_op1, vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_ltu = (vlSelfRef.__PVT__reg_op1 
                                < vlSelfRef.__PVT__reg_op2);
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
    vlSelfRef.__PVT__mem_xfer = ((IData)(vlSelfRef.mem_ready) 
                                 & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.__PVT__alu_out_0 = 0U;
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
    vlSelfRef.__PVT__alu_out = 0U;
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
    vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
            vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__decoded_imm;
            vlSelfRef.__PVT__dbg_insn_opcode = ((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__next_insn_opcode))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                (0x0000ffffU 
                                                 & vlSelfRef.__PVT__next_insn_opcode));
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__decoded_rd;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        }
    }
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

VL_ATTR_COLD void Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_wb__DOT__picorv32_core__0(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___stl_sequent__TOP__picorv32_wb__DOT__picorv32_core__0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wstrb = 0x0fU;
        vlSelfRef.__PVT__mem_la_wdata = vlSelfRef.__PVT__reg_op2;
        vlSelfRef.__PVT__mem_rdata_word = vlSymsp->TOP.picorv32_wb__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        if ((2U & vlSelfRef.__PVT__reg_op1)) {
            vlSelfRef.__PVT__mem_la_wstrb = 0x0cU;
            vlSelfRef.__PVT__mem_rdata_word = (vlSymsp->TOP.picorv32_wb__DOT__mem_rdata 
                                               >> 0x10U);
        } else {
            vlSelfRef.__PVT__mem_la_wstrb = 3U;
            vlSelfRef.__PVT__mem_rdata_word = (0x0000ffffU 
                                               & vlSymsp->TOP.picorv32_wb__DOT__mem_rdata);
        }
        vlSelfRef.__PVT__mem_la_wdata = ((vlSelfRef.__PVT__reg_op2 
                                          << 0x00000010U) 
                                         | (0x0000ffffU 
                                            & vlSelfRef.__PVT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_wordsize))) {
        vlSelfRef.__PVT__mem_la_wstrb = (0x0000000fU 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & vlSelfRef.__PVT__reg_op1)));
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
    vlSelfRef.__PVT__cpuregs_rs1 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs1))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs1]
                                     : 0U);
    vlSelfRef.__PVT__cpuregs_rs2 = ((0U != (IData)(vlSelfRef.__PVT__decoded_rs2))
                                     ? vlSelfRef.__PVT__cpuregs
                                    [vlSelfRef.__PVT__decoded_rs2]
                                     : 0U);
    vlSelfRef.__PVT__launch_next_insn = ((0x40U == (IData)(vlSelfRef.__PVT__cpu_state)) 
                                         & (IData)(vlSelfRef.__PVT__decoder_trigger));
    vlSelfRef.__PVT__cpuregs_write = 0U;
    vlSelfRef.__PVT__mem_la_write = ((~ (IData)(vlSymsp->TOP.wb_rst_i)) 
                                     & ((~ (0U != (IData)(vlSelfRef.__PVT__mem_state))) 
                                        & (IData)(vlSelfRef.__PVT__mem_do_wdata)));
    __Vtableidx2 = vlSelfRef.__PVT__cpu_state;
    vlSelfRef.__PVT__dbg_ascii_state[0U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][0U];
    vlSelfRef.__PVT__dbg_ascii_state[1U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][1U];
    vlSelfRef.__PVT__dbg_ascii_state[2U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][2U];
    vlSelfRef.__PVT__dbg_ascii_state[3U] = Vpicorv32__ConstPool__TABLE_hee98425f_0
        [__Vtableidx2][3U];
    vlSelfRef.__PVT__next_pc = (((IData)(vlSelfRef.__PVT__latched_branch) 
                                 & (IData)(vlSelfRef.__PVT__latched_store))
                                 ? (0xfffffffeU & vlSelfRef.__PVT__reg_out)
                                 : vlSelfRef.__PVT__reg_next_pc);
    vlSelfRef.__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__instr_rdinstrh))));
    vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__q_insn_imm;
    vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__q_insn_opcode;
    vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__q_insn_rs1;
    vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__q_insn_rs2;
    vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__q_insn_rd;
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
    vlSelfRef.__PVT__mem_xfer = ((IData)(vlSymsp->TOP.picorv32_wb__DOT__mem_ready) 
                                 & (IData)(vlSelfRef.mem_valid));
    vlSelfRef.__PVT__alu_eq = (vlSelfRef.__PVT__reg_op1 
                               == vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_lts = VL_LTS_III(32, vlSelfRef.__PVT__reg_op1, vlSelfRef.__PVT__reg_op2);
    vlSelfRef.__PVT__alu_ltu = (vlSelfRef.__PVT__reg_op1 
                                < vlSelfRef.__PVT__reg_op2);
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
    vlSelfRef.__PVT__alu_out_0 = 0U;
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
    vlSelfRef.__PVT__alu_out = 0U;
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
    vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__q_ascii_instr;
    if (vlSelfRef.__PVT__dbg_next) {
        if (vlSelfRef.__PVT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__cached_insn_imm;
            vlSelfRef.__PVT__dbg_insn_opcode = vlSelfRef.__PVT__cached_insn_opcode;
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__cached_insn_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__cached_insn_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__cached_insn_rd;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__dbg_insn_imm = vlSelfRef.__PVT__decoded_imm;
            vlSelfRef.__PVT__dbg_insn_opcode = ((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.__PVT__next_insn_opcode))
                                                 ? vlSelfRef.__PVT__next_insn_opcode
                                                 : 
                                                (0x0000ffffU 
                                                 & vlSelfRef.__PVT__next_insn_opcode));
            vlSelfRef.__PVT__dbg_insn_rs1 = vlSelfRef.__PVT__decoded_rs1;
            vlSelfRef.__PVT__dbg_insn_rs2 = vlSelfRef.__PVT__decoded_rs2;
            vlSelfRef.__PVT__dbg_insn_rd = vlSelfRef.__PVT__decoded_rd;
            vlSelfRef.__PVT__dbg_ascii_instr = vlSelfRef.__PVT__new_ascii_instr;
        }
    }
}

VL_ATTR_COLD void Vpicorv32_picorv32__pi1___ctor_var_reset(Vpicorv32_picorv32__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_picorv32__pi1___ctor_var_reset\n"); );
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
    vlSelf->__PVT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8565982314622665277ull);
    vlSelf->__PVT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2837371101553232879ull);
    vlSelf->__PVT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1622902664297165684ull);
    vlSelf->__PVT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2304483854594787345ull);
    vlSelf->__PVT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11800603327254930916ull);
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
    vlSelf->__PVT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1466037190300086479ull);
    vlSelf->__PVT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16089475370154945312ull);
    vlSelf->__PVT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 975696495116532827ull);
    vlSelf->__PVT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2980676362479470640ull);
    vlSelf->__PVT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12240348471805377678ull);
    vlSelf->__PVT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8824309508383478656ull);
    vlSelf->__PVT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2952423901128443226ull);
    vlSelf->__PVT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11669318430656309977ull);
    vlSelf->__PVT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3153149047026890051ull);
    vlSelf->__PVT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9124582033227206145ull);
    vlSelf->__PVT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14929668104437203315ull);
    vlSelf->__PVT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13592750897586193959ull);
    vlSelf->__PVT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17502809485173644391ull);
    vlSelf->__PVT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011871631050033313ull);
    vlSelf->__PVT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3071204081985346807ull);
    vlSelf->__PVT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15993044240584337895ull);
    vlSelf->__PVT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7772426372821814694ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12873047671476587482ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__PVT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1600758913207124612ull);
    vlSelf->__PVT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8489663300528400854ull);
    vlSelf->__PVT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12777991974676146376ull);
    vlSelf->__PVT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13938931461269023028ull);
    vlSelf->__PVT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14739135227261601146ull);
    vlSelf->__PVT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079688079355955985ull);
    vlSelf->__PVT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17565414394389082674ull);
    vlSelf->__PVT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16362535996138463631ull);
    vlSelf->__PVT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2619332033110506152ull);
    vlSelf->__PVT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3578532054036941137ull);
    vlSelf->__PVT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363049370085940842ull);
    vlSelf->__PVT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4979637701094675480ull);
    vlSelf->__PVT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16056660355915575591ull);
    vlSelf->__PVT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10525511139006936102ull);
    vlSelf->__PVT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18330691936419142975ull);
    vlSelf->__PVT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8663327233386234322ull);
    vlSelf->__PVT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9474950122563535624ull);
    vlSelf->__PVT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18084378326973384622ull);
    vlSelf->__PVT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4478166022451651217ull);
    vlSelf->__PVT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14909839650402456617ull);
    vlSelf->__PVT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3820264757758637587ull);
    vlSelf->__PVT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10303756342611384196ull);
    vlSelf->__PVT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6579732052500297502ull);
    vlSelf->__PVT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 931614962723746940ull);
    vlSelf->__PVT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11592302226362323704ull);
    vlSelf->__PVT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18072013413674181080ull);
    vlSelf->__PVT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12848027398090611582ull);
    vlSelf->__PVT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11401606333967796847ull);
    vlSelf->__PVT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 731388363245621993ull);
    vlSelf->__PVT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10625634476902592640ull);
    vlSelf->__PVT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14345009298594866027ull);
    vlSelf->__PVT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11855804704535479591ull);
    vlSelf->__PVT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12813465074323170397ull);
    vlSelf->__PVT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11353569906036657728ull);
    vlSelf->__PVT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9536557717495772322ull);
    vlSelf->__PVT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5365265006099752977ull);
    vlSelf->__PVT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 936074481307994944ull);
    vlSelf->__PVT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 427582524912865910ull);
    vlSelf->__PVT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18002912273521199459ull);
    vlSelf->__PVT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454779133425193943ull);
    vlSelf->__PVT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4636023062638474472ull);
    vlSelf->__PVT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17372440474658645356ull);
    vlSelf->__PVT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8368847275390250350ull);
    vlSelf->__PVT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6267900436198822901ull);
    vlSelf->__PVT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10139747541554010880ull);
    vlSelf->__PVT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7461589490721929397ull);
    vlSelf->__PVT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11730826136944655070ull);
    vlSelf->__PVT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9508233871469669912ull);
    vlSelf->__PVT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12346779967226969585ull);
    vlSelf->__PVT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9866166716140014194ull);
    vlSelf->__PVT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3823081323713146090ull);
    vlSelf->__PVT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10469452693871107483ull);
    vlSelf->__PVT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14639737991138204782ull);
    vlSelf->__PVT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17715377245992132984ull);
    vlSelf->__PVT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7627047272100567847ull);
    vlSelf->__PVT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 136971142098124581ull);
    vlSelf->__PVT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14037916153114805881ull);
    vlSelf->__PVT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4591009460761076704ull);
    vlSelf->__PVT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9727778960599457160ull);
    vlSelf->__PVT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2942357482522241670ull);
    vlSelf->__PVT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15114095921637904359ull);
    vlSelf->__PVT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18164808120675906653ull);
    vlSelf->__PVT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15960355719573822392ull);
    vlSelf->__PVT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7504434274634128322ull);
    vlSelf->__PVT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13366935686373521980ull);
    vlSelf->__PVT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5440714674259069758ull);
    vlSelf->__PVT__decoded_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10744406204422371980ull);
    vlSelf->__PVT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8611884191593328756ull);
    vlSelf->__PVT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5341845574085966547ull);
    vlSelf->__PVT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 655580322669579299ull);
    vlSelf->__PVT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6741153237343283037ull);
    vlSelf->__PVT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1917975087504626647ull);
    vlSelf->__PVT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11676676530118499367ull);
    vlSelf->__PVT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13839278829884568305ull);
    vlSelf->__PVT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15779904971329185636ull);
    vlSelf->__PVT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17233529707459370595ull);
    vlSelf->__PVT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6647714906329649462ull);
    vlSelf->__PVT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10948464557837290449ull);
    vlSelf->__PVT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3959639200770885215ull);
    vlSelf->__PVT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4481572186431599383ull);
    vlSelf->__PVT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17897216663759084195ull);
    vlSelf->__PVT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8203962368939328908ull);
    vlSelf->__PVT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15560182134267798067ull);
    vlSelf->__PVT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11799325751103918500ull);
    vlSelf->__PVT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2707245130517325609ull);
    vlSelf->__PVT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 818198044918898766ull);
    vlSelf->__PVT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6306978120469954796ull);
    vlSelf->__PVT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12417113670346335751ull);
    vlSelf->__PVT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 371673495240351475ull);
    vlSelf->__PVT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9042681106376810680ull);
    vlSelf->__PVT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803304358320677493ull);
    vlSelf->__PVT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3837612894614652261ull);
    vlSelf->__PVT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5672940741330655398ull);
    vlSelf->__PVT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2508266871276421667ull);
    vlSelf->__PVT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13544514538329727420ull);
    vlSelf->__PVT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 71190683228189989ull);
    vlSelf->__PVT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5177287758380735582ull);
    vlSelf->__PVT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12002192387022041769ull);
    vlSelf->__PVT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6193324940124477881ull);
    vlSelf->__PVT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11548331879556965426ull);
    vlSelf->__PVT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15197590355100477673ull);
    vlSelf->__PVT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17200269056095520697ull);
    vlSelf->__PVT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6815325956061278237ull);
    vlSelf->__PVT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8520542868944382685ull);
    vlSelf->__PVT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11344260561519559921ull);
    vlSelf->__PVT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11344899852206752927ull);
    vlSelf->__PVT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7321847298823088182ull);
    vlSelf->__PVT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5525855303659297600ull);
    vlSelf->__PVT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5281001328194726929ull);
    vlSelf->__PVT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14218943090581846064ull);
    vlSelf->__PVT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2402320528937207589ull);
    vlSelf->__PVT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3364077976116029696ull);
    vlSelf->__PVT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4911779796827824348ull);
    vlSelf->__PVT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8040330041813819495ull);
    vlSelf->__PVT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12139508610908682656ull);
    vlSelf->__PVT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10713967622131676163ull);
    vlSelf->__PVT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11713750472698884246ull);
    vlSelf->__PVT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16294739500922806350ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dbg_ascii_state, __VscopeHash, 1347048893397955475ull);
    vlSelf->__PVT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563031553468701023ull);
    vlSelf->__PVT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12982252036739700552ull);
    vlSelf->__PVT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148084770409953927ull);
    vlSelf->__PVT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13959456544079974994ull);
    vlSelf->__PVT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1018533675498039659ull);
    vlSelf->__PVT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12299600202577169638ull);
    vlSelf->__PVT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2358679477044153765ull);
    vlSelf->__PVT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15882088764343248032ull);
    vlSelf->__PVT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192846227567331267ull);
    vlSelf->__PVT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15715421026747517508ull);
    vlSelf->__PVT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6072707252725103003ull);
    vlSelf->__PVT__latched_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17803656559760341103ull);
    vlSelf->__PVT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15397944574740657099ull);
    vlSelf->__PVT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6413233413553660176ull);
    vlSelf->__PVT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2907540728521970515ull);
    vlSelf->__PVT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8505874163848111836ull);
    vlSelf->__PVT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17987931705875015295ull);
    vlSelf->__PVT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6029336550601928105ull);
    vlSelf->__PVT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 594887047609060440ull);
    vlSelf->__PVT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5989680030830735422ull);
    vlSelf->__PVT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 906040987154584526ull);
    vlSelf->__PVT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10205803126814356066ull);
    vlSelf->__PVT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1512386456570489236ull);
    vlSelf->__PVT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16829667594400296931ull);
    vlSelf->__PVT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16217599066645904669ull);
    vlSelf->__PVT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4172780098787670744ull);
    vlSelf->__PVT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13394828583574804807ull);
    vlSelf->__PVT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5200415899735010719ull);
    vlSelf->__PVT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17379557475516888907ull);
    vlSelf->__PVT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17981923146027729995ull);
    vlSelf->__PVT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5058961251574152732ull);
    vlSelf->__Vdly__mem_state = 0;
    vlSelf->__Vdly__mem_do_rinst = 0;
    vlSelf->__Vdly__mem_wordsize = 0;
    vlSelf->__Vdly__latched_is_lu = 0;
    vlSelf->__Vdly__latched_is_lh = 0;
    vlSelf->__Vdly__latched_is_lb = 0;
    vlSelf->__Vdly__reg_pc = 0;
    vlSelf->__Vdly__reg_next_pc = 0;
    vlSelf->__Vdly__latched_store = 0;
    vlSelf->__Vdly__latched_stalu = 0;
    vlSelf->__Vdly__latched_branch = 0;
    vlSelf->__Vdly__count_instr = 0;
    vlSelf->__Vdly__mem_do_prefetch = 0;
    vlSelf->__Vdly__cpu_state = 0;
    vlSelf->__Vdly__reg_op1 = 0;
    vlSelf->__Vdly__timer = 0;
}
