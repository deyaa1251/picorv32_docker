// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

void Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___ico_sequent__TOP__picorv32_wrapper__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vpicorv32_wrapper__ConstPool__TABLE_hee98425f_0;

void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__cycle_counter;
    __Vdly__cycle_counter = 0;
    CData/*1:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_state;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__timer;
    __Vdly__uut__DOT__picorv32_core__DOT__timer = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__irq_active;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_pc = 0;
    CData/*5:0*/ __Vdly__uut__DOT__picorv32_core__DOT__latched_rd;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_rd = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__latched_compr;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_compr = 0;
    CData/*1:0*/ __Vdly__uut__DOT__picorv32_core__DOT__irq_state;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_state = 0;
    QData/*63:0*/ __Vdly__uut__DOT__picorv32_core__DOT__count_instr;
    __Vdly__uut__DOT__picorv32_core__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__uut__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_op1;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__reg_op2;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = 0;
    CData/*0:0*/ __Vdly__uut__DOT__pcpi_valid;
    __Vdly__uut__DOT__pcpi_valid = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__irq_mask;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_mask = 0;
    CData/*3:0*/ __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0;
    CData/*6:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    IData/*31:0*/ __VdlyVal__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlyVal__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*5:0*/ __VdlyDim0__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlyDim0__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlySet__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    // Body
    __VdlySet__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__uut__DOT__picorv32_core__DOT__timer = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
    __Vdly__uut__DOT__picorv32_core__DOT__count_instr 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_instr;
    __Vdly__uut__DOT__pcpi_valid = vlSelfRef.__PVT__uut__DOT__pcpi_valid;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_active 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_pc = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
    __Vdly__uut__DOT__picorv32_core__DOT__irq_state 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state;
    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__cycle_counter = vlSelfRef.__PVT__cycle_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.__Vdly__uut__DOT__mem_wdata = vlSelfRef.__PVT__uut__DOT__mem_wdata;
    vlSelfRef.__Vdly__uut__DOT__mem_addr = vlSelfRef.__PVT__uut__DOT__mem_addr;
    vlSelfRef.__Vdly__uut__DOT__mem_instr = vlSelfRef.__PVT__uut__DOT__mem_instr;
    __Vdly__uut__DOT__picorv32_core__DOT__mem_state 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state;
    vlSelfRef.__Vdly__uut__DOT__mem_wstrb = vlSelfRef.__PVT__uut__DOT__mem_wstrb;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd)))) {
        vlSelfRef.uut__DOT__picorv32_core__DOT____Vlvbound_hc020870f__0 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata;
        if ((0x23U >= (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd))) {
            __VdlyVal__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSelfRef.uut__DOT__picorv32_core__DOT____Vlvbound_hc020870f__0;
            __VdlyDim0__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
            __VdlySet__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
        }
    }
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    if (((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
        }
    }
    if (vlSymsp->TOP.resetn) {
        vlSelfRef.__PVT__count_cycle = (0x0000ffffU 
                                        & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__count_cycle)));
        __Vdly__cycle_counter = ((IData)(1U) + vlSelfRef.__PVT__cycle_counter);
    } else {
        vlSelfRef.__PVT__count_cycle = 0U;
        __Vdly__cycle_counter = 0U;
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.resetn) 
                      & (IData)(vlSelfRef.trap))))) {
        VL_WRITEF_NX("TRAP after %1d clock cycles\n",0,
                     32,vlSelfRef.__PVT__cycle_counter);
        if (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__tests_passed) {
            VL_WRITEF_NX("ALL TESTS PASSED.\n",0);
            VL_FINISH_MT("testbench.v", 266, "");
        } else {
            VL_WRITEF_NX("ERROR!\n",0);
            if (VL_UNLIKELY((VL_TESTPLUSARGS_I("noerror"s)))) {
                VL_FINISH_MT("testbench.v", 270, "");
            }
            VL_STOP_MT("testbench.v", 271, "");
        }
    }
    if ((1U & (~ ((~ (IData)(vlSymsp->TOP.resetn)) 
                  | (IData)(vlSelfRef.trap))))) {
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write) {
            vlSelfRef.__Vdly__uut__DOT__mem_wdata = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelfRef.__Vdly__uut__DOT__mem_addr = 
                (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                  ? (0xfffffffcU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_pc)
                  : (0xfffffffcU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_wait = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_pc;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_next = 0U;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (IData)(vlSymsp->TOP.resetn));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSymsp->TOP.resetn))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 1U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 1U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd 
            = (IData)(((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? VL_SHIFTR_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd, 0x00000020U)
                        : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.trap)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if (__VdlySet__uut__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs[__VdlyDim0__uut__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __VdlyVal__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    vlSelfRef.__PVT__cycle_counter = __Vdly__cycle_counter;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSymsp->TOP.resetn) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlSymsp->TOP.resetn) && ((IData)(vlSelfRef.__PVT__uut__DOT__mem_valid) 
                                            & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready))));
    if (vlSymsp->TOP.resetn) {
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready) 
             & (IData)(vlSelfRef.__PVT__mem_axi_awvalid))) {
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready) 
             & (IData)(vlSelfRef.__PVT__mem_axi_arvalid))) {
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready) 
             & (IData)(vlSelfRef.__PVT__mem_axi_wvalid))) {
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSelfRef.__PVT__uut__DOT__mem_valid))))) {
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                    : (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x0000003eU : 0x0000001eU);
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
                            & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait))));
        } else {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                                  - (IData)(1U)));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt, 1U);
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
        vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__mem_valid) 
               & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready));
    } else {
        vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.trap)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
            __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) 
                   | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready)))) {
            vlSelfRef.__PVT__uut__DOT__mem_valid = 0U;
        }
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelfRef.__Vdly__uut__DOT__mem_wstrb = 
                ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb) 
                 & (- (IData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlSelfRef.__PVT__uut__DOT__mem_valid = 1U;
                vlSelfRef.__Vdly__uut__DOT__mem_instr 
                    = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
                vlSelfRef.__Vdly__uut__DOT__mem_wstrb = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlSelfRef.__PVT__uut__DOT__mem_valid = 1U;
                vlSelfRef.__Vdly__uut__DOT__mem_instr = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelfRef.__PVT__uut__DOT__mem_valid = 0U;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state 
                    = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelfRef.__PVT__uut__DOT__mem_valid = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) {
                __Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = VL_SHIFTR_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1, 1U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2, 1U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1))
            ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2
            : 0ULL);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_state;
    vlSelfRef.trap = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0U;
    vlSelfRef.trace_valid = 0U;
    if ((0U != vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        __Vdly__uut__DOT__picorv32_core__DOT__timer 
            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer 
               - (IData)(1U));
    }
    if (vlSymsp->TOP.resetn) {
        __Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
            = (1ULL + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelfRef.trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq))));
                __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc;
                if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                               ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                                               : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out))
                            : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                                     & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0x00000010U;
                        __Vdly__uut__DOT__picorv32_core__DOT__irq_active = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                               & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask);
                        vlSelfRef.__PVT__uut__DOT__eoi 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                               & (~ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
                    }
                }
                if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_trace) {
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
                    vlSelfRef.trace_valid = 1U;
                    vlSelfRef.trace_data = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)
                                             ? (0x0000000100000000ULL 
                                                | (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                     ? 0x0000000800000000ULL
                                                     : 0ULL) 
                                                   | (0x00000000fffffffeULL 
                                                      & (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc)))))
                                             : (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                  ? 0x0000000800000000ULL
                                                  : 0ULL) 
                                                | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                                    ? (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q))
                                                    : (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out)))));
                }
                __Vdly__uut__DOT__picorv32_core__DOT__reg_pc 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd;
                __Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr;
                if ((((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))) 
                       & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_delay))) 
                      & (0U != (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                & (~ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state)))) {
                    __Vdly__uut__DOT__picorv32_core__DOT__irq_state 
                        = ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                                     ? 2U : 0U));
                    __Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
                    __Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                        = (0x0000003fU & (0x20U | (1U 
                                                   & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state))));
                } else if ((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                             | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq)) 
                            & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq))) {
                    if ((0U != vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending)) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                               + ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                                   ? 2U : 4U));
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) {
                    __Vdly__uut__DOT__picorv32_core__DOT__count_instr 
                        = (1ULL + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_delay 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                           + ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                               ? 2U : 4U));
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 1U;
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                               + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j);
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq))));
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = 0U;
                __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) 
                           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_getq)) 
                        | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_setq)) 
                       | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq)) 
                      | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq)) 
                     | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_timer))) {
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__uut__DOT__pcpi_valid = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            __Vdly__uut__DOT__pcpi_valid = 0U;
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                            __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                            __Vdly__uut__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                    = (2U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                                __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                            } else {
                                __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_cycle);
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui)
                                ? 0U : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc);
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
                        __Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                            = (0x20U | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd));
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
                        vlSelfRef.__PVT__uut__DOT__eoi = 0U;
                        __Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = (0xfffffffeU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1);
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    } else {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__uut__DOT__picorv32_core__DOT__timer 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_trap)))) {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                } else {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                    __Vdly__uut__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        __Vdly__uut__DOT__pcpi_valid = 0U;
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                        __Vdly__uut__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                = (2U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                            __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        } else {
                            __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else {
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                    = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                       + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    __Vdly__uut__DOT__picorv32_core__DOT__latched_rd = 0U;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done) {
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 1U;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
                    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 4U);
                    }
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 1U);
                    }
                    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                    = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        vlSelfRef.trace_valid = 1U;
                        vlSelfRef.trace_data = (0x0000000200000000ULL 
                                                | (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                     ? 0x0000000800000000ULL
                                                     : 0ULL) 
                                                   | (0x00000000ffffffffULL 
                                                      & ((QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                         + (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                    }
                    if (((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word;
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb) {
                            __Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                        }
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                             | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu))) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu))) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
                            __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lh;
                        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
                            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lb;
                        vlSelfRef.trace_valid = 1U;
                        vlSelfRef.trace_data = (0x0000000200000000ULL 
                                                | (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                     ? 0x0000000800000000ULL
                                                     : 0ULL) 
                                                   | (0x00000000ffffffffULL 
                                                      & ((QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                         + (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                        __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                    }
                }
            }
        }
    } else {
        __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = 0ULL;
        __Vdly__uut__DOT__picorv32_core__DOT__count_instr = 0ULL;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        __Vdly__uut__DOT__pcpi_valid = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_delay = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
        __Vdly__uut__DOT__picorv32_core__DOT__irq_state = 0U;
        vlSelfRef.__PVT__uut__DOT__eoi = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__timer = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
           | vlSelfRef.__PVT__irq);
    if ((0U != vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        if ((0U == (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer 
                    - (IData)(1U)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (1U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSymsp->TOP.resetn) & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                         | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (4U | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        } else {
            __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0U;
    vlSelfRef.__PVT__irq = 0U;
    vlSelfRef.__PVT__irq = ((0xffffffcfU & vlSelfRef.__PVT__irq) 
                            | (((0x0000ffffU == (IData)(vlSelfRef.__PVT__count_cycle)) 
                                << 5U) | ((0x00001fffU 
                                           == (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__count_cycle))) 
                                          << 4U)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__timer 
        = __Vdly__uut__DOT__picorv32_core__DOT__timer;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq 
        = __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__count_instr 
        = __Vdly__uut__DOT__picorv32_core__DOT__count_instr;
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                              >> 0x0fU));
        if ((IData)((0x0000000bU == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                = (0x00000020U | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        }
        if ((IData)((0x0400000bU == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_rd 
        = __Vdly__uut__DOT__picorv32_core__DOT__latched_rd;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active 
        = __Vdly__uut__DOT__picorv32_core__DOT__irq_active;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_pc;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_compr 
        = __Vdly__uut__DOT__picorv32_core__DOT__latched_compr;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
        = __Vdly__uut__DOT__picorv32_core__DOT__irq_mask;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_state 
        = __Vdly__uut__DOT__picorv32_core__DOT__irq_state;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state 
        = __Vdly__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_out;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__pcpi_valid)) 
         & (~ ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
               | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait))))) {
        if ((0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter))) {
            __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lw)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                              >> 7U));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                              >> 0x14U));
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_getq 
            = (IData)((0x0000000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_setq 
            = (IData)((0x0200000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq 
            = (IData)((0x0600000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_timer 
            = (IData)((0x0a00000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait 
        = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
            | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
               | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                  | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu)))) 
           & (IData)(vlSymsp->TOP.resetn));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)))))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slli 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srli 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srai 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal)
                ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 0x0cU), 0x0000000cU)
                    : (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_fence = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_andi = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq 
            = (IData)((0x0800000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq 
            = (IData)((0x0400000bU == (0xfe00007fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0x0000000bU)))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                               >> 0x0000000bU)))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_add 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xor 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_or 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_and 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.resetn)))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_add = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_or = 0U;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__pcpi_insn)))) {
        if ((0U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((1U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((2U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((3U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    if ((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSymsp->TOP.resetn) & (IData)(vlSelfRef.__PVT__uut__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.__PVT__uut__DOT__pcpi_insn)))) {
        if ((4U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U != (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((7U == (7U & (vlSelfRef.__PVT__uut__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.__PVT__uut__DOT__pcpi_insn = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q;
    }
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelfRef.__PVT__uut__DOT__pcpi_valid = __Vdly__uut__DOT__pcpi_valid;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 0U;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = 0U;
    if (vlSymsp->TOP.resetn) {
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                       >> 0x1fU)) ? (- vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1);
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTL_QQI(63,63,32, 
                                                         ((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                                            | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                                           & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                                              >> 0x1fU))
                                                           ? 
                                                          (- (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)))
                                                           : (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))), 0x0000001fU));
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU) != (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)) 
                   | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU)));
        } else if (((~ (0U != vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk)) 
                    & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 1U;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd 
                = (((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = VL_SHIFTR_QQI(63,63,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor, 1U);
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk, 1U);
        }
    } else {
        __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
            vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
           & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
              & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_mask) 
                               & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__irq_active)))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSymsp->TOP.resetn) & ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                           & ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                              | ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                 | (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_op2;
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
        = __Vdly__uut__DOT__picorv32_core__DOT__reg_op1;
    if ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
    }
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
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
}

void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__1\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uut__DOT__mem_addr = vlSelfRef.__Vdly__uut__DOT__mem_addr;
    vlSelfRef.__PVT__uut__DOT__mem_instr = vlSelfRef.__Vdly__uut__DOT__mem_instr;
    vlSelfRef.__PVT__uut__DOT__mem_wdata = vlSelfRef.__Vdly__uut__DOT__mem_wdata;
    vlSelfRef.__PVT__uut__DOT__mem_wstrb = vlSelfRef.__Vdly__uut__DOT__mem_wstrb;
    vlSelfRef.__PVT__mem_axi_rready = ((~ (0U != (IData)(vlSelfRef.__PVT__uut__DOT__mem_wstrb))) 
                                       & (IData)(vlSelfRef.__PVT__uut__DOT__mem_valid));
    vlSelfRef.__PVT__mem_axi_bready = ((IData)(vlSelfRef.__PVT__uut__DOT__mem_valid) 
                                       & (0U != (IData)(vlSelfRef.__PVT__uut__DOT__mem_wstrb)));
    vlSelfRef.__PVT__mem_axi_arvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)) 
                                        & (IData)(vlSelfRef.__PVT__mem_axi_rready));
    vlSelfRef.__PVT__mem_axi_awvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)) 
                                        & (IData)(vlSelfRef.__PVT__mem_axi_bready));
    vlSelfRef.__PVT__mem_axi_wvalid = ((~ (IData)(vlSelfRef.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)) 
                                       & (IData)(vlSelfRef.__PVT__mem_axi_bready));
}

void Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_sequent__TOP__picorv32_wrapper__2\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
}

void Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___nba_comb__TOP__picorv32_wrapper__0\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else if ((1U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                ? (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata));
    } else if ((2U == (IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
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
    vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlSelfRef.__PVT__uut__DOT__picorv32_core__DOT__mem_ready) 
           & (IData)(vlSelfRef.__PVT__uut__DOT__mem_valid));
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
