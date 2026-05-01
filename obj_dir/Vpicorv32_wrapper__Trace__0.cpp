// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


void Vpicorv32_wrapper___024root__trace_chg_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_chg_0\n"); );
    // Body
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpicorv32_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32_wrapper___024root__trace_chg_0_sub_0(Vpicorv32_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_chg_0_sub_0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgWData(oldp+0,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__axi_test));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+34,(vlSymsp->TOP__picorv32_wrapper.trap));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
        bufp->chgQData(oldp+36,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
        bufp->chgSData(oldp+39,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
        bufp->chgIData(oldp+42,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
        bufp->chgIData(oldp+51,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                  | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                                  ? (0xfffffffcU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc)
                                  : (0xfffffffcU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
        bufp->chgQData(oldp+54,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
        bufp->chgQData(oldp+56,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
        bufp->chgIData(oldp+72,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
        bufp->chgBit(oldp+81,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait))));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
        bufp->chgBit(oldp+94,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_fence));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
        bufp->chgCData(oldp+145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
        bufp->chgCData(oldp+146,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+170,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+182,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+192,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+197,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+198,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+199,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
        bufp->chgCData(oldp+200,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
        bufp->chgWData(oldp+201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
        bufp->chgCData(oldp+216,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
        bufp->chgIData(oldp+220,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+221,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
        bufp->chgIData(oldp+222,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
        bufp->chgIData(oldp+228,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                                   ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                      - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                                   : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                      + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        bufp->chgIData(oldp+229,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                  << (0x0000001fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        bufp->chgIData(oldp+230,((IData)((0x00000001ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                                                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai)) 
                                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                                                >> 0x0000001fU)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))), 
                                                           (0x0000001fU 
                                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))))),32);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
        bufp->chgIData(oldp+236,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu));
        bufp->chgBit(oldp+243,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh))));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
        bufp->chgBit(oldp+245,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q));
        bufp->chgBit(oldp+247,(((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
                                & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait))));
        bufp->chgQData(oldp+248,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1),64);
        bufp->chgQData(oldp+250,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2),64);
        bufp->chgQData(oldp+252,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd),64);
        bufp->chgQData(oldp+254,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx),64);
        bufp->chgQData(oldp+256,(VL_SHIFTR_QQI(64,64,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1, 1U)),64);
        bufp->chgQData(oldp+258,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2, 1U)),64);
        bufp->chgQData(oldp+260,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2),64);
        bufp->chgQData(oldp+262,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd),64);
        bufp->chgQData(oldp+264,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt, 1U)),64);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt),64);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter),7);
        bufp->chgBit(oldp+269,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu));
        bufp->chgBit(oldp+275,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                                      | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))))));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start));
        bufp->chgIData(oldp+278,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend),32);
        bufp->chgQData(oldp+279,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor),63);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk),32);
        bufp->chgBit(oldp+283,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+285,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed));
        bufp->chgIData(oldp+286,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
        bufp->chgBit(oldp+287,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
        bufp->chgIData(oldp+290,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+295,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
        bufp->chgIData(oldp+296,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
        bufp->chgBit(oldp+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
        bufp->chgIData(oldp+298,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
        bufp->chgCData(oldp+299,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
        bufp->chgBit(oldp+300,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_bready));
        bufp->chgBit(oldp+301,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
        bufp->chgCData(oldp+302,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                   ? 4U : 0U)),3);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_rready));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
        bufp->chgQData(oldp+305,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__xorshift64_state),64);
        bufp->chgCData(oldp+307,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_axi_transaction),3);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__async_axi_transaction),5);
        bufp->chgCData(oldp+309,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__delay_axi_transaction),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+310,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_ready));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+319,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+320,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
        bufp->chgIData(oldp+321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
    }
    bufp->chgBit(oldp+322,(vlSelfRef.clk));
    bufp->chgBit(oldp+323,(vlSelfRef.resetn));
    bufp->chgBit(oldp+324,(vlSelfRef.trap));
    bufp->chgBit(oldp+325,(vlSelfRef.trace_valid));
    bufp->chgQData(oldp+326,(vlSelfRef.trace_data),36);
    bufp->chgBit(oldp+328,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
    bufp->chgBit(oldp+329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
    bufp->chgBit(oldp+330,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
    bufp->chgBit(oldp+331,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
}

void Vpicorv32_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root__trace_cleanup\n"); );
    // Body
    Vpicorv32_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32_wrapper___024root*>(voidSelf);
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
