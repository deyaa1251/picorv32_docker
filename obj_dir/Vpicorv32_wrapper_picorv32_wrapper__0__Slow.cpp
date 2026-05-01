// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__irq = 0U;
    vlSelfRef.__PVT__count_cycle = 0U;
}

extern const VlWide<32>/*1023:0*/ Vpicorv32_wrapper__ConstPool__CONST_hac2bd5b2_0;

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___eval_initial__TOP__picorv32_wrapper\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! VL_VALUEPLUSARGS_INW(1024, "firmware=%s"s, 
                                vlSelfRef.__PVT__firmware_file))) {
        VL_ASSIGN_W(1024, vlSelfRef.__PVT__firmware_file, Vpicorv32_wrapper__ConstPool__CONST_hac2bd5b2_0);
    }
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(32, vlSelfRef.__PVT__firmware_file)
                 ,  &(vlSymsp->TOP__picorv32_wrapper__mem.memory)
                 , 0, ~0ULL);
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0;

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___stl_sequent__TOP__picorv32_wrapper__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__irq = 0U;
    vlSelfRef.__PVT__irq = ((0xffffffcfU & vlSelfRef.__PVT__irq) 
                            | (((0x0000ffffU == (IData)(vlSelfRef.__PVT__count_cycle)) 
                                << 5U) | ((0x00001fffU 
                                           == (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__count_cycle))) 
                                          << 4U)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = VL_SHIFTR_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1, 1U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2, 1U);
    if ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0x0fU;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0x0cU;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                = (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                   >> 0x10U);
        } else {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 3U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata);
        }
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                ? ((1U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? (0x000000ffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)));
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd;
    }
    __Vtableidx1 = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][0U];
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][1U];
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][2U];
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0
        [__Vtableidx1][3U];
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlSymsp->TOP.resetn))))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                           & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                 | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))));
    vlSelfRef.__PVT__mem_axi_rready = ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__mem_wstrb))) 
                                       & (IData)(vlSelfRef.__PVT__uut__DOT__mem_valid));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
           & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
              & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask) 
                               & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)))));
    vlSelfRef.__PVT__mem_axi_bready = ((IData)(vlSelfRef.__PVT__uut__DOT__mem_valid) 
                                       & (0U != (IData)(vlSelfRef.__PVT__uut__DOT__mem_wstrb)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                    ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                    : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                   & (~ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1))
            ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2
            : 0ULL);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                          | (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu))))))))))))))))))))))))))))) 
                             | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) 
                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) 
                                   | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                      | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_or) 
                                         | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_and) 
                                            | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
                                               | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                                  | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                                                     | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                                        | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_fence) 
                                                           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) 
                                                              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) 
                                                                 | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) 
                                                                    | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) 
                                                                       | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_timer) 
                                                                          | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_add) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_or) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_and) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_fence) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_timer) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.__PVT__mem_axi_arvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)) 
                                        & (IData)(vlSelfRef.__PVT__mem_axi_rready));
    vlSelfRef.__PVT__mem_axi_awvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)) 
                                        & (IData)(vlSelfRef.__PVT__mem_axi_bready));
    vlSelfRef.__PVT__mem_axi_wvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)) 
                                       & (IData)(vlSelfRef.__PVT__mem_axi_bready));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = (((QData)((IData)((((((0x000000f0U & (((IData)(
                                                         (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                          >> 0x0000003cU)) 
                                                 + 
                                                 ((IData)(
                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                           >> 0x0000003cU)) 
                                                  + (IData)(
                                                            (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                             >> 0x0000003cU)))) 
                                                << 4U)) 
                                | (0x0000000fU & ((IData)(
                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                           >> 0x00000038U)) 
                                                  + 
                                                  ((IData)(
                                                           (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                            >> 0x00000038U)) 
                                                   + (IData)(
                                                             (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                              >> 0x00000038U)))))) 
                               << 0x00000018U) | ((
                                                   (0x000000f0U 
                                                    & (((IData)(
                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                 >> 0x00000034U)) 
                                                        + 
                                                        ((IData)(
                                                                 (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                  >> 0x00000034U)) 
                                                         + (IData)(
                                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                    >> 0x00000034U)))) 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                  >> 0x00000030U)) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                   >> 0x00000030U)) 
                                                          + (IData)(
                                                                    (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                     >> 0x00000030U)))))) 
                                                  << 0x00000010U)) 
                             | ((((0x000000f0U & (((IData)(
                                                           (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                            >> 0x0000002cU)) 
                                                   + 
                                                   ((IData)(
                                                            (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                             >> 0x0000002cU)) 
                                                    + (IData)(
                                                              (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                               >> 0x0000002cU)))) 
                                                  << 4U)) 
                                  | (0x0000000fU & 
                                     ((IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                               >> 0x00000028U)) 
                                      + ((IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                  >> 0x00000028U)) 
                                         + (IData)(
                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                    >> 0x00000028U)))))) 
                                 << 8U) | ((0x000000f0U 
                                            & (((IData)(
                                                        (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                         >> 0x00000024U)) 
                                                + ((IData)(
                                                           (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                            >> 0x00000024U)) 
                                                   + (IData)(
                                                             (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                              >> 0x00000024U)))) 
                                               << 4U)) 
                                           | (0x0000000fU 
                                              & ((IData)(
                                                         (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                          >> 0x00000020U)) 
                                                 + 
                                                 ((IData)(
                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                           >> 0x00000020U)) 
                                                  + (IData)(
                                                            (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                             >> 0x00000020U)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((0x000000f0U 
                                                   & (((IData)(
                                                               (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                >> 0x0000001cU)) 
                                                       + 
                                                       ((IData)(
                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                 >> 0x0000001cU)) 
                                                        + (IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                   >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                 >> 0x00000018U)) 
                                                        + 
                                                        ((IData)(
                                                                 (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                  >> 0x00000018U)) 
                                                         + (IData)(
                                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                    >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | (((0x000000f0U 
                                                     & (((IData)(
                                                                 (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                  >> 0x00000014U)) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                   >> 0x00000014U)) 
                                                          + (IData)(
                                                                    (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                     >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                   >> 0x00000010U)) 
                                                          + 
                                                          ((IData)(
                                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                    >> 0x00000010U)) 
                                                           + (IData)(
                                                                     (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                      >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | ((((0x000000f0U 
                                                     & (((IData)(
                                                                 (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                  >> 0x0000000cU)) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                   >> 0x0000000cU)) 
                                                          + (IData)(
                                                                    (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                     >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                   >> 8U)) 
                                                          + 
                                                          ((IData)(
                                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                    >> 8U)) 
                                                           + (IData)(
                                                                     (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                      >> 8U)))))) 
                                                   << 8U) 
                                                  | ((0x000000f0U 
                                                      & (((IData)(
                                                                  (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                   >> 4U)) 
                                                          + 
                                                          ((IData)(
                                                                   (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                    >> 4U)) 
                                                           + (IData)(
                                                                     (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                      >> 4U)))) 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx) 
                                                            + (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))))))))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = (((QData)((IData)((1U & (((0x0000000fU & (IData)(
                                                           (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                            >> 0x0000003cU))) 
                                    + ((0x0000000fU 
                                        & (IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                   >> 0x0000003cU))) 
                                       + (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                     >> 0x0000003cU))))) 
                                   >> 4U)))) << 0x0000003fU) 
           | (((QData)((IData)((1U & (((0x0000000fU 
                                        & (IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                   >> 0x00000038U))) 
                                       + ((0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                      >> 0x00000038U))) 
                                          + (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                        >> 0x00000038U))))) 
                                      >> 4U)))) << 0x0000003bU) 
              | (((QData)((IData)((1U & (((0x0000000fU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                      >> 0x00000034U))) 
                                          + ((0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                         >> 0x00000034U))) 
                                             + (0x0000000fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                           >> 0x00000034U))))) 
                                         >> 4U)))) 
                  << 0x00000037U) | (((QData)((IData)(
                                                      (1U 
                                                       & (((0x0000000fU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                       >> 0x00000030U))) 
                                                           + 
                                                           ((0x0000000fU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                        >> 0x00000030U))) 
                                                            + 
                                                            (0x0000000fU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                        >> 0x00000030U))))) 
                                                          >> 4U)))) 
                                      << 0x00000033U) 
                                     | (((QData)((IData)(
                                                         (1U 
                                                          & (((0x0000000fU 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                          >> 0x0000002cU))) 
                                                              + 
                                                              ((0x0000000fU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                           >> 0x0000002cU))) 
                                                               + 
                                                               (0x0000000fU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                           >> 0x0000002cU))))) 
                                                             >> 4U)))) 
                                         << 0x0000002fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (((0x0000000fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                             >> 0x00000028U))) 
                                                                 + 
                                                                 ((0x0000000fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                              >> 0x00000028U))) 
                                                                  + 
                                                                  (0x0000000fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                              >> 0x00000028U))))) 
                                                                >> 4U)))) 
                                            << 0x0000002bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (((0x0000000fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x00000024U))) 
                                                                    + 
                                                                    ((0x0000000fU 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x00000024U))) 
                                                                     + 
                                                                     (0x0000000fU 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x00000024U))))) 
                                                                   >> 4U)))) 
                                               << 0x00000027U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((0x0000000fU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x00000020U))) 
                                                                       + 
                                                                       ((0x0000000fU 
                                                                         & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x00000020U))) 
                                                                        + 
                                                                        (0x0000000fU 
                                                                         & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x00000020U))))) 
                                                                      >> 4U)))) 
                                                  << 0x00000023U) 
                                                 | (QData)((IData)(
                                                                   ((0x80000000U 
                                                                     & (((0x0000000fU 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x0000001cU))) 
                                                                         + 
                                                                         ((0x0000000fU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x0000001cU))) 
                                                                          + 
                                                                          (0x0000000fU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x0000001cU))))) 
                                                                        << 0x0000001bU)) 
                                                                    | ((0x08000000U 
                                                                        & (((0x0000000fU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x00000018U))) 
                                                                            + 
                                                                            ((0x0000000fU 
                                                                              & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x00000018U))) 
                                                                             + 
                                                                             (0x0000000fU 
                                                                              & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x00000018U))))) 
                                                                           << 0x00000017U)) 
                                                                       | ((0x00800000U 
                                                                           & (((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x00000014U))) 
                                                                               + 
                                                                               ((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x00000014U))) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x00000014U))))) 
                                                                              << 0x00000013U)) 
                                                                          | ((0x00080000U 
                                                                              & (((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x00000010U))) 
                                                                                + 
                                                                                ((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x00000010U))) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x00000010U))))) 
                                                                                << 0x0000000fU)) 
                                                                             | ((0x00008000U 
                                                                                & (((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 0x0000000cU))) 
                                                                                + 
                                                                                ((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 0x0000000cU))) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 0x0000000cU))))) 
                                                                                << 0x0000000bU)) 
                                                                                | ((0x00000800U 
                                                                                & (((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 8U))) 
                                                                                + 
                                                                                ((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 8U))) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 8U))))) 
                                                                                << 7U)) 
                                                                                | ((0x00000080U 
                                                                                & (((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                                                                                >> 4U))) 
                                                                                + 
                                                                                ((0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                                                                                >> 4U))) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                                                >> 4U))))) 
                                                                                << 3U)) 
                                                                                | (8U 
                                                                                & (((0x0000000fU 
                                                                                & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd)) 
                                                                                + 
                                                                                ((0x0000000fU 
                                                                                & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx)) 
                                                                                + 
                                                                                (0x0000000fU 
                                                                                & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)))) 
                                                                                >> 1U)))))))))))))))))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready) 
           & (IData)(vlSelfRef.__PVT__uut__DOT__mem_valid));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_eq;
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_eq)));
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_lts)));
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu)));
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_lts;
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                ? (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   - vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                : (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_compare) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xor))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               ^ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_or))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_and))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
               & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata
            : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSymsp->TOP.resetn) & (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                            & ((0U 
                                                != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                               & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                  | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                                     | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))) 
                                           | ((3U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                              & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))));
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214934560881419504ull);
    vlSelf->trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13633812473643571344ull);
    vlSelf->trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2099819338854512805ull);
    vlSelf->__PVT__mem_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17559443044801107632ull);
    vlSelf->__PVT__mem_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8684243971228423573ull);
    vlSelf->__PVT__mem_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14409163279036119621ull);
    vlSelf->__PVT__mem_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15764120531857846780ull);
    vlSelf->__PVT__mem_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16869571791053703538ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->__PVT__firmware_file, __VscopeHash, 3146487849762252557ull);
    vlSelf->__PVT__cycle_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7794371460228274500ull);
    vlSelf->__PVT__uut__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15023080160329263565ull);
    vlSelf->__PVT__uut__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15038310428623662497ull);
    vlSelf->__PVT__uut__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18134872739029968408ull);
    vlSelf->__PVT__uut__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9428935006663721887ull);
    vlSelf->__PVT__uut__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8336229030380361145ull);
    vlSelf->__PVT__uut__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2050240217695342571ull);
    vlSelf->__PVT__uut__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3965770824615564046ull);
    vlSelf->__PVT__uut__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5063445186216545391ull);
    vlSelf->__PVT__uut__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13984876001480190098ull);
    vlSelf->__PVT__uut__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10013360303531909266ull);
    vlSelf->__PVT__uut__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3695165109185726665ull);
    vlSelf->__PVT__uut__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848384151697693918ull);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18380928203117293517ull);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11586932832718751064ull);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4702920365554513652ull);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__xfer_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16402007162124554490ull);
    vlSelf->uut__DOT__picorv32_core__DOT____Vlvbound_hc020870f__0 = 0;
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12685781432975545294ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405140088156697267ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483670135898021130ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12626368056117168592ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11408874888907841874ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4307058496703676781ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15466850101775491606ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17835401989953028476ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17833200251780104801ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6833996748953963207ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3900039984874308695ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6484766718847570142ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9323355068109559445ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7662958032723479242ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9964431762718257436ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12213770331109201913ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2363401829824678152ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15462618570397493269ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5649386704436760519ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6628595387521820822ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9391757295102230627ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3536348098096867544ull);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12656736222095223662ull);
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 351310897460342633ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4313492124346105371ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15513101202075027363ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1477030591561637845ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12515952066980718299ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16546868397884576168ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1192028573823570345ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1112912450774236056ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1091885000907614973ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17509965327238164154ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9298702859699626339ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10446329972197711378ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5350262214671077364ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10659830201170803415ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8483751042629091373ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1034112948238548494ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14535027774173545634ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9448934319368828095ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15025901627528740546ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8848052231424823155ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12118655106135541572ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6296128341000560942ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4790908061578107365ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2920770639389538853ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222043174812449212ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16550408369554083855ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5090834879295938451ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13190533447863895659ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3124358112345723692ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5769707824385807594ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16441180443481322107ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16320768772188948785ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8882862103997318897ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8575475460993023392ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16501690318087857702ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3332356600532369639ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406834714884767807ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10450881354493277895ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8013985966295194838ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12810668437761592475ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14701022453542202740ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18211407169032373021ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5532034289176700947ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17492982765206469154ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15688908423989096940ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13140828290865856578ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11540621337018528233ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 76123865584322304ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15692763087329634152ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11601923365777333247ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7657951213830197885ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12710813208502060570ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9672617460417307069ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16097166100714650976ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3467097265032086541ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688706181995810979ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8059819567353462306ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16248589617980998870ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5232623040172996101ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15907968005383001463ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10190745283087416858ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 736583613842748496ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17053061567133170637ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9914179139905164219ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10106777921907159792ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3024754789442854589ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1077831933054524138ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1796249105838319031ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565681329838975084ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11174287064728272958ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316997359587832712ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4414859557328539569ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7371162337427276325ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7815496019807582188ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424060211033862122ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15144555464514087938ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4792568134408859026ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10535935562091098029ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17299181101396512176ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15498345935463825365ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11006853972979576903ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14918124902483799284ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6579409488545761064ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1392670323048705556ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242321224556021898ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8765823780808755616ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8225536199168837102ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11374454457998552737ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7387187333321353410ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14922063202132313519ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16852551295714253517ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182442493886993445ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6692970262353225474ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17618056566216743148ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17874490786983787374ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2924742298702696688ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12208835710646584318ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7200314456082632481ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7841375725198579562ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3608741756446167194ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10384850222813499595ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11884901215079248100ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6333649213589918656ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2462530287324209035ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9023814762347185185ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14816965821038425027ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11643211237531436232ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5040172961158626399ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4572861485298735590ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11505073926941366521ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1379795953327343884ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15340320289218561240ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8360634238656083182ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3055434366848535898ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12890312949704200337ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12060648876166182097ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3213260853997947098ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6033926499669295010ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18075927426132032502ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16815998484483242128ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10588787479149961960ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778738526792049271ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11424079388613626121ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10301119449105186720ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8929843773581975197ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9040730681505001956ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10614698197985217001ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9029006281127172785ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8602163225829584793ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16904189176026611294ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1407505331826270565ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state, __VscopeHash, 1355277566896224266ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11553889095610220949ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4266932749078252954ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17714827625275837553ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1121830899974389167ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13605926051854939285ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16351891272294795949ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675129788422543198ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10950501559190880705ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6301099933510780785ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15421663117564580982ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11154706054337238057ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17413787134634850459ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16974652478389496783ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8112151020376312213ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13424822153253752758ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4173621367401584392ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12227219793959912378ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17110861892661708685ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13342121889826113218ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5773707663595139260ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12494895482763695426ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026225164082718519ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7612523832070985285ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5152926809916165156ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031622226382096525ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12616292753449526171ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5199084091003914270ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7687616122706986351ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13118253418262448530ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17487720449906073747ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8309438436338758084ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 988851265395506687ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14015291760728918870ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12329932480966223507ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14797803348072899337ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10664082709255052481ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3823930509374751818ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2715818754007866010ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5220359888426507ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10673089911980790769ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17418537422294719164ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5408273747028885335ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4267961287878526640ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15390149392419145742ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7460104125137743391ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5417725396415115591ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9182735877513128823ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2435430834327586198ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16270690883625880217ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15172004928019197254ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16022114415512503952ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789627263672650456ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2230330488071468602ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180537658662349868ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17053386272073520937ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15683845224622505348ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 629946816515089445ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5661959044107795997ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12281592868257634916ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8489941382778886434ull);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15358803227187280189ull);
    vlSelf->__Vdly__uut__DOT__mem_wstrb = 0;
    vlSelf->__Vdly__uut__DOT__mem_instr = 0;
    vlSelf->__Vdly__uut__DOT__mem_addr = 0;
    vlSelf->__Vdly__uut__DOT__mem_wdata = 0;
}
