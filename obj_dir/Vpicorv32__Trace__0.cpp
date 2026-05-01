// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpicorv32__Syms.h"


void Vpicorv32___024root__trace_chg_0_sub_0(Vpicorv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpicorv32___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_chg_0\n"); );
    // Body
    Vpicorv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32___024root*>(voidSelf);
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpicorv32___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpicorv32___024root__trace_chg_0_sub_0(Vpicorv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_chg_0_sub_0\n"); );
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.picorv32__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+1,(vlSelfRef.picorv32__DOT__mem_xfer));
        bufp->chgBit(oldp+2,(vlSelfRef.picorv32__DOT__clear_prefetched_high_word));
        bufp->chgIData(oldp+3,(vlSelfRef.picorv32__DOT__mem_rdata_latched_noshuffle),32);
        bufp->chgBit(oldp+4,(vlSelfRef.picorv32__DOT__mem_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+5,(vlSelfRef.picorv32__DOT__count_cycle),64);
        bufp->chgQData(oldp+7,(vlSelfRef.picorv32__DOT__count_instr),64);
        bufp->chgIData(oldp+9,(vlSelfRef.picorv32__DOT__reg_pc),32);
        bufp->chgIData(oldp+10,(vlSelfRef.picorv32__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+11,(vlSelfRef.picorv32__DOT__reg_op1),32);
        bufp->chgIData(oldp+12,(vlSelfRef.picorv32__DOT__reg_op2),32);
        bufp->chgIData(oldp+13,(vlSelfRef.picorv32__DOT__reg_out),32);
        bufp->chgCData(oldp+14,(vlSelfRef.picorv32__DOT__reg_sh),5);
        bufp->chgIData(oldp+15,(vlSelfRef.picorv32__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+16,(vlSelfRef.picorv32__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+17,(vlSelfRef.picorv32__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+18,(vlSelfRef.picorv32__DOT__next_pc),32);
        bufp->chgBit(oldp+19,(vlSelfRef.picorv32__DOT__irq_delay));
        bufp->chgBit(oldp+20,(vlSelfRef.picorv32__DOT__irq_active));
        bufp->chgIData(oldp+21,(vlSelfRef.picorv32__DOT__irq_mask),32);
        bufp->chgIData(oldp+22,(vlSelfRef.picorv32__DOT__irq_pending),32);
        bufp->chgIData(oldp+23,(vlSelfRef.picorv32__DOT__timer),32);
        bufp->chgIData(oldp+24,(vlSelfRef.picorv32__DOT__cpuregs[0]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.picorv32__DOT__cpuregs[1]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.picorv32__DOT__cpuregs[2]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.picorv32__DOT__cpuregs[3]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.picorv32__DOT__cpuregs[4]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.picorv32__DOT__cpuregs[5]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.picorv32__DOT__cpuregs[6]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.picorv32__DOT__cpuregs[7]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.picorv32__DOT__cpuregs[8]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.picorv32__DOT__cpuregs[9]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.picorv32__DOT__cpuregs[10]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.picorv32__DOT__cpuregs[11]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.picorv32__DOT__cpuregs[12]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.picorv32__DOT__cpuregs[13]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.picorv32__DOT__cpuregs[14]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.picorv32__DOT__cpuregs[15]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.picorv32__DOT__cpuregs[16]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.picorv32__DOT__cpuregs[17]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.picorv32__DOT__cpuregs[18]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.picorv32__DOT__cpuregs[19]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.picorv32__DOT__cpuregs[20]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.picorv32__DOT__cpuregs[21]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.picorv32__DOT__cpuregs[22]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.picorv32__DOT__cpuregs[23]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.picorv32__DOT__cpuregs[24]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.picorv32__DOT__cpuregs[25]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.picorv32__DOT__cpuregs[26]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.picorv32__DOT__cpuregs[27]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.picorv32__DOT__cpuregs[28]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.picorv32__DOT__cpuregs[29]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.picorv32__DOT__cpuregs[30]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.picorv32__DOT__cpuregs[31]),32);
        bufp->chgCData(oldp+56,(vlSelfRef.picorv32__DOT__mem_state),2);
        bufp->chgCData(oldp+57,(vlSelfRef.picorv32__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+58,(vlSelfRef.picorv32__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+59,(vlSelfRef.picorv32__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+60,(vlSelfRef.picorv32__DOT__mem_do_rinst));
        bufp->chgBit(oldp+61,(vlSelfRef.picorv32__DOT__mem_do_rdata));
        bufp->chgBit(oldp+62,(vlSelfRef.picorv32__DOT__mem_do_wdata));
        bufp->chgBit(oldp+63,(vlSelfRef.picorv32__DOT__mem_la_secondword));
        bufp->chgBit(oldp+64,(vlSelfRef.picorv32__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+65,(vlSelfRef.picorv32__DOT__last_mem_valid));
        bufp->chgBit(oldp+66,(vlSelfRef.picorv32__DOT__prefetched_high_word));
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.picorv32__DOT__mem_do_prefetch) 
                               | (IData)(vlSelfRef.picorv32__DOT____VdfgRegularize_h233421b0_0_0))));
        bufp->chgBit(oldp+68,(vlSelfRef.picorv32__DOT__instr_lui));
        bufp->chgBit(oldp+69,(vlSelfRef.picorv32__DOT__instr_auipc));
        bufp->chgBit(oldp+70,(vlSelfRef.picorv32__DOT__instr_jal));
        bufp->chgBit(oldp+71,(vlSelfRef.picorv32__DOT__instr_jalr));
        bufp->chgBit(oldp+72,(vlSelfRef.picorv32__DOT__instr_beq));
        bufp->chgBit(oldp+73,(vlSelfRef.picorv32__DOT__instr_bne));
        bufp->chgBit(oldp+74,(vlSelfRef.picorv32__DOT__instr_blt));
        bufp->chgBit(oldp+75,(vlSelfRef.picorv32__DOT__instr_bge));
        bufp->chgBit(oldp+76,(vlSelfRef.picorv32__DOT__instr_bltu));
        bufp->chgBit(oldp+77,(vlSelfRef.picorv32__DOT__instr_bgeu));
        bufp->chgBit(oldp+78,(vlSelfRef.picorv32__DOT__instr_lb));
        bufp->chgBit(oldp+79,(vlSelfRef.picorv32__DOT__instr_lh));
        bufp->chgBit(oldp+80,(vlSelfRef.picorv32__DOT__instr_lw));
        bufp->chgBit(oldp+81,(vlSelfRef.picorv32__DOT__instr_lbu));
        bufp->chgBit(oldp+82,(vlSelfRef.picorv32__DOT__instr_lhu));
        bufp->chgBit(oldp+83,(vlSelfRef.picorv32__DOT__instr_sb));
        bufp->chgBit(oldp+84,(vlSelfRef.picorv32__DOT__instr_sh));
        bufp->chgBit(oldp+85,(vlSelfRef.picorv32__DOT__instr_sw));
        bufp->chgBit(oldp+86,(vlSelfRef.picorv32__DOT__instr_addi));
        bufp->chgBit(oldp+87,(vlSelfRef.picorv32__DOT__instr_slti));
        bufp->chgBit(oldp+88,(vlSelfRef.picorv32__DOT__instr_sltiu));
        bufp->chgBit(oldp+89,(vlSelfRef.picorv32__DOT__instr_xori));
        bufp->chgBit(oldp+90,(vlSelfRef.picorv32__DOT__instr_ori));
        bufp->chgBit(oldp+91,(vlSelfRef.picorv32__DOT__instr_andi));
        bufp->chgBit(oldp+92,(vlSelfRef.picorv32__DOT__instr_slli));
        bufp->chgBit(oldp+93,(vlSelfRef.picorv32__DOT__instr_srli));
        bufp->chgBit(oldp+94,(vlSelfRef.picorv32__DOT__instr_srai));
        bufp->chgBit(oldp+95,(vlSelfRef.picorv32__DOT__instr_add));
        bufp->chgBit(oldp+96,(vlSelfRef.picorv32__DOT__instr_sub));
        bufp->chgBit(oldp+97,(vlSelfRef.picorv32__DOT__instr_sll));
        bufp->chgBit(oldp+98,(vlSelfRef.picorv32__DOT__instr_slt));
        bufp->chgBit(oldp+99,(vlSelfRef.picorv32__DOT__instr_sltu));
        bufp->chgBit(oldp+100,(vlSelfRef.picorv32__DOT__instr_xor));
        bufp->chgBit(oldp+101,(vlSelfRef.picorv32__DOT__instr_srl));
        bufp->chgBit(oldp+102,(vlSelfRef.picorv32__DOT__instr_sra));
        bufp->chgBit(oldp+103,(vlSelfRef.picorv32__DOT__instr_or));
        bufp->chgBit(oldp+104,(vlSelfRef.picorv32__DOT__instr_and));
        bufp->chgBit(oldp+105,(vlSelfRef.picorv32__DOT__instr_rdcycle));
        bufp->chgBit(oldp+106,(vlSelfRef.picorv32__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+107,(vlSelfRef.picorv32__DOT__instr_rdinstr));
        bufp->chgBit(oldp+108,(vlSelfRef.picorv32__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+109,(vlSelfRef.picorv32__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+110,(vlSelfRef.picorv32__DOT__instr_fence));
        bufp->chgBit(oldp+111,(vlSelfRef.picorv32__DOT__instr_getq));
        bufp->chgBit(oldp+112,(vlSelfRef.picorv32__DOT__instr_setq));
        bufp->chgBit(oldp+113,(vlSelfRef.picorv32__DOT__compressed_instr));
        bufp->chgBit(oldp+114,(vlSelfRef.picorv32__DOT__instr_maskirq));
        bufp->chgBit(oldp+115,(vlSelfRef.picorv32__DOT__instr_waitirq));
        bufp->chgBit(oldp+116,(vlSelfRef.picorv32__DOT__instr_timer));
        bufp->chgBit(oldp+117,(vlSelfRef.picorv32__DOT__instr_trap));
        bufp->chgCData(oldp+118,(vlSelfRef.picorv32__DOT__decoded_rd),5);
        bufp->chgCData(oldp+119,(vlSelfRef.picorv32__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+120,(vlSelfRef.picorv32__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+121,(vlSelfRef.picorv32__DOT__decoded_imm),32);
        bufp->chgIData(oldp+122,(vlSelfRef.picorv32__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+123,(vlSelfRef.picorv32__DOT__decoder_trigger));
        bufp->chgBit(oldp+124,(vlSelfRef.picorv32__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+125,(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+126,(vlSelfRef.picorv32__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+127,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+128,(vlSelfRef.picorv32__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+129,(vlSelfRef.picorv32__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+130,(vlSelfRef.picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+131,(vlSelfRef.picorv32__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+132,(vlSelfRef.picorv32__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+133,(vlSelfRef.picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+134,(vlSelfRef.picorv32__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+135,(vlSelfRef.picorv32__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+136,(vlSelfRef.picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+137,(vlSelfRef.picorv32__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+138,(vlSelfRef.picorv32__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+139,(vlSelfRef.picorv32__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+140,(vlSelfRef.picorv32__DOT__is_compare));
        bufp->chgBit(oldp+141,(vlSelfRef.picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+142,(vlSelfRef.picorv32__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+144,(vlSelfRef.picorv32__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+146,(vlSelfRef.picorv32__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+147,(vlSelfRef.picorv32__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+148,(vlSelfRef.picorv32__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+149,(vlSelfRef.picorv32__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+150,(vlSelfRef.picorv32__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+151,(vlSelfRef.picorv32__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+152,(vlSelfRef.picorv32__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+153,(vlSelfRef.picorv32__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+154,(vlSelfRef.picorv32__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+156,(vlSelfRef.picorv32__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+157,(vlSelfRef.picorv32__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+158,(vlSelfRef.picorv32__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+159,(vlSelfRef.picorv32__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+160,(vlSelfRef.picorv32__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+161,(vlSelfRef.picorv32__DOT__dbg_next));
        bufp->chgBit(oldp+162,(vlSelfRef.picorv32__DOT__launch_next_insn));
        bufp->chgBit(oldp+163,(vlSelfRef.picorv32__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+164,(vlSelfRef.picorv32__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+166,(vlSelfRef.picorv32__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+167,(vlSelfRef.picorv32__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+168,(vlSelfRef.picorv32__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+169,(vlSelfRef.picorv32__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+170,(vlSelfRef.picorv32__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+171,(vlSelfRef.picorv32__DOT__cpu_state),8);
        bufp->chgCData(oldp+172,(vlSelfRef.picorv32__DOT__irq_state),2);
        bufp->chgWData(oldp+173,(vlSelfRef.picorv32__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+177,(vlSelfRef.picorv32__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+178,(vlSelfRef.picorv32__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+179,(vlSelfRef.picorv32__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+180,(vlSelfRef.picorv32__DOT__latched_store));
        bufp->chgBit(oldp+181,(vlSelfRef.picorv32__DOT__latched_stalu));
        bufp->chgBit(oldp+182,(vlSelfRef.picorv32__DOT__latched_branch));
        bufp->chgBit(oldp+183,(vlSelfRef.picorv32__DOT__latched_compr));
        bufp->chgBit(oldp+184,(vlSelfRef.picorv32__DOT__latched_trace));
        bufp->chgBit(oldp+185,(vlSelfRef.picorv32__DOT__latched_is_lu));
        bufp->chgBit(oldp+186,(vlSelfRef.picorv32__DOT__latched_is_lh));
        bufp->chgBit(oldp+187,(vlSelfRef.picorv32__DOT__latched_is_lb));
        bufp->chgCData(oldp+188,(vlSelfRef.picorv32__DOT__latched_rd),5);
        bufp->chgIData(oldp+189,(vlSelfRef.picorv32__DOT__current_pc),32);
        bufp->chgBit(oldp+190,(vlSelfRef.picorv32__DOT__pcpi_timeout));
        bufp->chgIData(oldp+191,(vlSelfRef.picorv32__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+192,(vlSelfRef.picorv32__DOT__do_waitirq));
        bufp->chgIData(oldp+193,(vlSelfRef.picorv32__DOT__alu_out),32);
        bufp->chgIData(oldp+194,(vlSelfRef.picorv32__DOT__alu_out_q),32);
        bufp->chgBit(oldp+195,(vlSelfRef.picorv32__DOT__alu_out_0));
        bufp->chgBit(oldp+196,(vlSelfRef.picorv32__DOT__alu_out_0_q));
        bufp->chgBit(oldp+197,(vlSelfRef.picorv32__DOT__alu_wait));
        bufp->chgBit(oldp+198,(vlSelfRef.picorv32__DOT__alu_wait_2));
        bufp->chgIData(oldp+199,(((IData)(vlSelfRef.picorv32__DOT__instr_sub)
                                   ? (vlSelfRef.picorv32__DOT__reg_op1 
                                      - vlSelfRef.picorv32__DOT__reg_op2)
                                   : (vlSelfRef.picorv32__DOT__reg_op1 
                                      + vlSelfRef.picorv32__DOT__reg_op2))),32);
        bufp->chgIData(oldp+200,((vlSelfRef.picorv32__DOT__reg_op1 
                                  << (0x0000001fU & vlSelfRef.picorv32__DOT__reg_op2))),32);
        bufp->chgIData(oldp+201,((IData)((0x00000001ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSelfRef.picorv32__DOT__instr_sra) 
                                                                               | (IData)(vlSelfRef.picorv32__DOT__instr_srai)) 
                                                                              & (vlSelfRef.picorv32__DOT__reg_op1 
                                                                                >> 0x0000001fU)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.picorv32__DOT__reg_op1))), 
                                                           (0x0000001fU 
                                                            & vlSelfRef.picorv32__DOT__reg_op2))))),32);
        bufp->chgBit(oldp+202,(vlSelfRef.picorv32__DOT__alu_eq));
        bufp->chgBit(oldp+203,(vlSelfRef.picorv32__DOT__alu_ltu));
        bufp->chgBit(oldp+204,(vlSelfRef.picorv32__DOT__alu_lts));
        bufp->chgBit(oldp+205,(vlSelfRef.picorv32__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+206,(vlSelfRef.picorv32__DOT__cpuregs_write));
        bufp->chgIData(oldp+207,(vlSelfRef.picorv32__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+208,(vlSelfRef.picorv32__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+209,(vlSelfRef.picorv32__DOT__cpuregs_rs2),32);
    }
    bufp->chgBit(oldp+210,(vlSelfRef.clk));
    bufp->chgBit(oldp+211,(vlSelfRef.resetn));
    bufp->chgBit(oldp+212,(vlSelfRef.trap));
    bufp->chgBit(oldp+213,(vlSelfRef.mem_valid));
    bufp->chgBit(oldp+214,(vlSelfRef.mem_instr));
    bufp->chgBit(oldp+215,(vlSelfRef.mem_ready));
    bufp->chgIData(oldp+216,(vlSelfRef.mem_addr),32);
    bufp->chgIData(oldp+217,(vlSelfRef.mem_wdata),32);
    bufp->chgCData(oldp+218,(vlSelfRef.mem_wstrb),4);
    bufp->chgIData(oldp+219,(vlSelfRef.mem_rdata),32);
    bufp->chgBit(oldp+220,(vlSelfRef.mem_la_read));
    bufp->chgBit(oldp+221,(vlSelfRef.mem_la_write));
    bufp->chgIData(oldp+222,(vlSelfRef.mem_la_addr),32);
    bufp->chgIData(oldp+223,(vlSelfRef.mem_la_wdata),32);
    bufp->chgCData(oldp+224,(vlSelfRef.mem_la_wstrb),4);
    bufp->chgBit(oldp+225,(vlSelfRef.pcpi_valid));
    bufp->chgIData(oldp+226,(vlSelfRef.pcpi_insn),32);
    bufp->chgIData(oldp+227,(vlSelfRef.pcpi_rs1),32);
    bufp->chgIData(oldp+228,(vlSelfRef.pcpi_rs2),32);
    bufp->chgBit(oldp+229,(vlSelfRef.pcpi_wr));
    bufp->chgIData(oldp+230,(vlSelfRef.pcpi_rd),32);
    bufp->chgBit(oldp+231,(vlSelfRef.pcpi_wait));
    bufp->chgBit(oldp+232,(vlSelfRef.pcpi_ready));
    bufp->chgIData(oldp+233,(vlSelfRef.irq),32);
    bufp->chgIData(oldp+234,(vlSelfRef.eoi),32);
    bufp->chgBit(oldp+235,(vlSelfRef.trace_valid));
    bufp->chgQData(oldp+236,(vlSelfRef.trace_data),36);
}

void Vpicorv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32___024root__trace_cleanup\n"); );
    // Body
    Vpicorv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpicorv32___024root*>(voidSelf);
    Vpicorv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
