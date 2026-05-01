// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__1\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__memory__v4 = 0U;
    vlSelfRef.__VdlySet__memory__v5 = 0U;
    vlSelfRef.__VdlySet__memory__v6 = 0U;
    vlSelfRef.__VdlySet__memory__v7 = 0U;
    vlSelfRef.__VdlySet__memory__v0 = 0U;
    vlSelfRef.__VdlySet__memory__v1 = 0U;
    vlSelfRef.__VdlySet__memory__v2 = 0U;
    vlSelfRef.__VdlySet__memory__v3 = 0U;
}

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__2\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mem_axi_arready = vlSelfRef.__PVT__mem_axi_arready;
    vlSelfRef.__Vdly__mem_axi_awready = vlSelfRef.__PVT__mem_axi_awready;
    vlSelfRef.__Vdly__mem_axi_wready = vlSelfRef.__PVT__mem_axi_wready;
    vlSelfRef.__Vdly__fast_raddr = vlSelfRef.__PVT__fast_raddr;
    vlSelfRef.__Vdly__fast_waddr = vlSelfRef.__PVT__fast_waddr;
    vlSelfRef.__Vdly__fast_wdata = vlSelfRef.__PVT__fast_wdata;
    vlSelfRef.__Vdly__mem_axi_rvalid = vlSelfRef.__PVT__mem_axi_rvalid;
    vlSelfRef.__Vdly__mem_axi_bvalid = vlSelfRef.__PVT__mem_axi_bvalid;
}

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__3\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_raddr_en) 
                | (IData)(vlSelfRef.__PVT__fast_raddr)))) 
         & (IData)(vlSelfRef.__PVT__async_axi_transaction))) {
        vlSelfRef.__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                  ? 4U
                                                  : 0U) 
                                                >> 2U));
        vlSelfRef.__PVT__latched_raddr_en = 1U;
        vlSelfRef.__Vdly__mem_axi_arready = 1U;
        vlSelfRef.__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_waddr_en) 
                | (IData)(vlSelfRef.__PVT__fast_waddr)))) 
         & ((IData)(vlSelfRef.__PVT__async_axi_transaction) 
            >> 1U))) {
        vlSelfRef.__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_waddr_en = 1U;
        vlSelfRef.__Vdly__mem_axi_awready = 1U;
        vlSelfRef.__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_wdata_en) 
                | (IData)(vlSelfRef.__PVT__fast_wdata)))) 
         & ((IData)(vlSelfRef.__PVT__async_axi_transaction) 
            >> 2U))) {
        vlSelfRef.__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelfRef.__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelfRef.__PVT__latched_wdata_en = 1U;
        vlSelfRef.__Vdly__mem_axi_wready = 1U;
        vlSelfRef.__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSelfRef.__PVT__mem_axi_rvalid)) 
          & (IData)(vlSelfRef.__PVT__latched_raddr_en)) 
         & ((IData)(vlSelfRef.__PVT__async_axi_transaction) 
            >> 3U))) {
        if (VL_UNLIKELY((vlSelfRef.__PVT__verbose))) {
            VL_WRITEF_NX("RD: ADDR=%08x DATA=%08x%s\n",0,
                         32,vlSelfRef.__PVT__latched_raddr,
                         32,vlSelfRef.memory[(0x00007fffU 
                                              & (vlSelfRef.__PVT__latched_raddr 
                                                 >> 2U))],
                         40,((IData)(vlSelfRef.__PVT__latched_rinsn)
                              ? 0x00000020494e534eULL
                              : 0ULL));
        }
        if (VL_LIKELY(((0x00020000U > vlSelfRef.__PVT__latched_raddr)))) {
            vlSelfRef.__PVT__latched_raddr_en = 0U;
            vlSelfRef.__PVT__mem_axi_rdata = vlSelfRef.memory
                [(0x00007fffU & (vlSelfRef.__PVT__latched_raddr 
                                 >> 2U))];
            vlSelfRef.__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF_NX("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",0,
                         32,vlSelfRef.__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSelfRef.__PVT__mem_axi_bvalid)) 
           & (IData)(vlSelfRef.__PVT__latched_waddr_en)) 
          & (IData)(vlSelfRef.__PVT__latched_wdata_en)) 
         & ((IData)(vlSelfRef.__PVT__async_axi_transaction) 
            >> 4U))) {
        if (VL_UNLIKELY((vlSelfRef.__PVT__verbose))) {
            VL_WRITEF_NX("WR: ADDR=%08x DATA=%08x STRB=%04b\n",0,
                         32,vlSelfRef.__PVT__latched_waddr,
                         32,vlSelfRef.__PVT__latched_wdata,
                         4,(IData)(vlSelfRef.__PVT__latched_wstrb));
        }
        vlSelfRef.__PVT__latched_waddr_en = 0U;
        vlSelfRef.__PVT__latched_wdata_en = 0U;
        if ((0x00020000U > vlSelfRef.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v4 = (0x000000ffU 
                                                   & vlSelfRef.__PVT__latched_wdata);
                vlSelfRef.__VdlyDim0__memory__v4 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v4 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v5 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__latched_wdata 
                                                      >> 8U));
                vlSelfRef.__VdlyDim0__memory__v5 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v5 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v6 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__latched_wdata 
                                                      >> 0x10U));
                vlSelfRef.__VdlyDim0__memory__v6 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v6 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v7 = (vlSelfRef.__PVT__latched_wdata 
                                                   >> 0x18U);
                vlSelfRef.__VdlyDim0__memory__v7 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v7 = 1U;
            }
        } else if ((0x10000000U == vlSelfRef.__PVT__latched_waddr)) {
            if (VL_LIKELY((vlSelfRef.__PVT__verbose))) {
                if (((0x00000020U <= vlSelfRef.__PVT__latched_wdata) 
                     & (0x00000080U > vlSelfRef.__PVT__latched_wdata))) {
                    VL_WRITEF_NX("OUT: '%c'\n",0,8,
                                 (0x000000ffU & vlSelfRef.__PVT__latched_wdata));
                } else {
                    VL_WRITEF_NX("OUT: %3#\n",0,32,
                                 vlSelfRef.__PVT__latched_wdata);
                }
            } else {
                VL_WRITEF_NX("%c",0,8,(0x000000ffU 
                                       & vlSelfRef.__PVT__latched_wdata));
            }
        } else if (VL_LIKELY(((0x20000000U == vlSelfRef.__PVT__latched_waddr)))) {
            if ((0x075bcd15U == vlSelfRef.__PVT__latched_wdata)) {
                vlSelfRef.__PVT__tests_passed = 1U;
            }
        } else {
            VL_WRITEF_NX("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",0,
                         32,vlSelfRef.__PVT__latched_waddr);
            VL_FINISH_MT("testbench.v", 423, "");
        }
        vlSelfRef.__Vdly__mem_axi_bvalid = 1U;
    }
}

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__4\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mem_axi_arready = 0U;
    vlSelfRef.__Vdly__mem_axi_awready = 0U;
    vlSelfRef.__Vdly__mem_axi_wready = 0U;
    vlSelfRef.__Vdly__fast_raddr = 0U;
    vlSelfRef.__Vdly__fast_waddr = 0U;
    vlSelfRef.__Vdly__fast_wdata = 0U;
    if (((IData)(vlSelfRef.__PVT__mem_axi_rvalid) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_rready))) {
        vlSelfRef.__Vdly__mem_axi_rvalid = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__mem_axi_bvalid) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_bready))) {
        vlSelfRef.__Vdly__mem_axi_bvalid = 0U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (IData)(vlSelfRef.__PVT__mem_axi_arready)) 
         & (~ (IData)(vlSelfRef.__PVT__fast_raddr)))) {
        vlSelfRef.__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                  ? 4U
                                                  : 0U) 
                                                >> 2U));
        vlSelfRef.__PVT__latched_raddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (IData)(vlSelfRef.__PVT__mem_axi_awready)) 
         & (~ (IData)(vlSelfRef.__PVT__fast_waddr)))) {
        vlSelfRef.__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_waddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (IData)(vlSelfRef.__PVT__mem_axi_wready)) 
         & (~ (IData)(vlSelfRef.__PVT__fast_wdata)))) {
        vlSelfRef.__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelfRef.__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelfRef.__PVT__latched_wdata_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_raddr_en) 
                | (IData)(vlSelfRef.__PVT__fast_raddr)))) 
         & (~ (IData)(vlSelfRef.__PVT__delay_axi_transaction)))) {
        vlSelfRef.__PVT__latched_raddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_rinsn = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                                  ? 4U
                                                  : 0U) 
                                                >> 2U));
        vlSelfRef.__PVT__latched_raddr_en = 1U;
        vlSelfRef.__Vdly__mem_axi_arready = 1U;
        vlSelfRef.__Vdly__fast_raddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_waddr_en) 
                | (IData)(vlSelfRef.__PVT__fast_waddr)))) 
         & (~ ((IData)(vlSelfRef.__PVT__delay_axi_transaction) 
               >> 1U)))) {
        vlSelfRef.__PVT__latched_waddr = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSelfRef.__PVT__latched_waddr_en = 1U;
        vlSelfRef.__Vdly__mem_axi_awready = 1U;
        vlSelfRef.__Vdly__fast_waddr = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (~ ((IData)(vlSelfRef.__PVT__latched_wdata_en) 
                | (IData)(vlSelfRef.__PVT__fast_wdata)))) 
         & (~ ((IData)(vlSelfRef.__PVT__delay_axi_transaction) 
               >> 2U)))) {
        vlSelfRef.__PVT__latched_wdata = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSelfRef.__PVT__latched_wstrb = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSelfRef.__PVT__latched_wdata_en = 1U;
        vlSelfRef.__Vdly__mem_axi_wready = 1U;
        vlSelfRef.__Vdly__fast_wdata = 1U;
    }
    if ((((~ (IData)(vlSelfRef.__PVT__mem_axi_rvalid)) 
          & (IData)(vlSelfRef.__PVT__latched_raddr_en)) 
         & (~ ((IData)(vlSelfRef.__PVT__delay_axi_transaction) 
               >> 3U)))) {
        if (VL_UNLIKELY((vlSelfRef.__PVT__verbose))) {
            VL_WRITEF_NX("RD: ADDR=%08x DATA=%08x%s\n",0,
                         32,vlSelfRef.__PVT__latched_raddr,
                         32,vlSelfRef.memory[(0x00007fffU 
                                              & (vlSelfRef.__PVT__latched_raddr 
                                                 >> 2U))],
                         40,((IData)(vlSelfRef.__PVT__latched_rinsn)
                              ? 0x00000020494e534eULL
                              : 0ULL));
        }
        if (VL_LIKELY(((0x00020000U > vlSelfRef.__PVT__latched_raddr)))) {
            vlSelfRef.__PVT__latched_raddr_en = 0U;
            vlSelfRef.__PVT__mem_axi_rdata = vlSelfRef.memory
                [(0x00007fffU & (vlSelfRef.__PVT__latched_raddr 
                                 >> 2U))];
            vlSelfRef.__Vdly__mem_axi_rvalid = 1U;
        } else {
            VL_WRITEF_NX("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",0,
                         32,vlSelfRef.__PVT__latched_raddr);
            VL_FINISH_MT("testbench.v", 392, "");
        }
    }
    if (((((~ (IData)(vlSelfRef.__PVT__mem_axi_bvalid)) 
           & (IData)(vlSelfRef.__PVT__latched_waddr_en)) 
          & (IData)(vlSelfRef.__PVT__latched_wdata_en)) 
         & (~ ((IData)(vlSelfRef.__PVT__delay_axi_transaction) 
               >> 4U)))) {
        if (VL_UNLIKELY((vlSelfRef.__PVT__verbose))) {
            VL_WRITEF_NX("WR: ADDR=%08x DATA=%08x STRB=%04b\n",0,
                         32,vlSelfRef.__PVT__latched_waddr,
                         32,vlSelfRef.__PVT__latched_wdata,
                         4,(IData)(vlSelfRef.__PVT__latched_wstrb));
        }
        vlSelfRef.__PVT__latched_waddr_en = 0U;
        vlSelfRef.__PVT__latched_wdata_en = 0U;
        if ((0x00020000U > vlSelfRef.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v0 = (0x000000ffU 
                                                   & vlSelfRef.__PVT__latched_wdata);
                vlSelfRef.__VdlyDim0__memory__v0 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v1 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__latched_wdata 
                                                      >> 8U));
                vlSelfRef.__VdlyDim0__memory__v1 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v2 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__latched_wdata 
                                                      >> 0x10U));
                vlSelfRef.__VdlyDim0__memory__v2 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__latched_wstrb))) {
                vlSelfRef.__VdlyVal__memory__v3 = (vlSelfRef.__PVT__latched_wdata 
                                                   >> 0x18U);
                vlSelfRef.__VdlyDim0__memory__v3 = 
                    (0x00007fffU & (vlSelfRef.__PVT__latched_waddr 
                                    >> 2U));
                vlSelfRef.__VdlySet__memory__v3 = 1U;
            }
        } else if ((0x10000000U == vlSelfRef.__PVT__latched_waddr)) {
            if (VL_LIKELY((vlSelfRef.__PVT__verbose))) {
                if (((0x00000020U <= vlSelfRef.__PVT__latched_wdata) 
                     & (0x00000080U > vlSelfRef.__PVT__latched_wdata))) {
                    VL_WRITEF_NX("OUT: '%c'\n",0,8,
                                 (0x000000ffU & vlSelfRef.__PVT__latched_wdata));
                } else {
                    VL_WRITEF_NX("OUT: %3#\n",0,32,
                                 vlSelfRef.__PVT__latched_wdata);
                }
            } else {
                VL_WRITEF_NX("%c",0,8,(0x000000ffU 
                                       & vlSelfRef.__PVT__latched_wdata));
            }
        } else if (VL_LIKELY(((0x20000000U == vlSelfRef.__PVT__latched_waddr)))) {
            if ((0x075bcd15U == vlSelfRef.__PVT__latched_wdata)) {
                vlSelfRef.__PVT__tests_passed = 1U;
            }
        } else {
            VL_WRITEF_NX("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",0,
                         32,vlSelfRef.__PVT__latched_waddr);
            VL_FINISH_MT("testbench.v", 423, "");
        }
        vlSelfRef.__Vdly__mem_axi_bvalid = 1U;
    }
    if (vlSelfRef.__PVT__axi_test) {
        vlSelfRef.__PVT__xorshift64_state = (vlSelfRef.__PVT__xorshift64_state 
                                             ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__xorshift64_state, 0x0000000dU));
        vlSelfRef.__PVT__xorshift64_state = (vlSelfRef.__PVT__xorshift64_state 
                                             ^ VL_SHIFTR_QQI(64,64,32, vlSelfRef.__PVT__xorshift64_state, 7U));
        vlSelfRef.__PVT__xorshift64_state = (vlSelfRef.__PVT__xorshift64_state 
                                             ^ VL_SHIFTL_QQI(64,64,32, vlSelfRef.__PVT__xorshift64_state, 0x00000011U));
        vlSelfRef.__PVT__fast_axi_transaction = (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__xorshift64_state 
                                                            >> 0x0000000aU)));
        vlSelfRef.__PVT__async_axi_transaction = (0x0000001fU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__xorshift64_state 
                                                             >> 5U)));
        vlSelfRef.__PVT__delay_axi_transaction = (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__xorshift64_state));
    }
}

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__5\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_axi_arready = vlSelfRef.__Vdly__mem_axi_arready;
    vlSelfRef.__PVT__mem_axi_awready = vlSelfRef.__Vdly__mem_axi_awready;
    vlSelfRef.__PVT__mem_axi_wready = vlSelfRef.__Vdly__mem_axi_wready;
    vlSelfRef.__PVT__fast_raddr = vlSelfRef.__Vdly__fast_raddr;
    vlSelfRef.__PVT__fast_waddr = vlSelfRef.__Vdly__fast_waddr;
    vlSelfRef.__PVT__fast_wdata = vlSelfRef.__Vdly__fast_wdata;
    vlSelfRef.__PVT__mem_axi_rvalid = vlSelfRef.__Vdly__mem_axi_rvalid;
    vlSelfRef.__PVT__mem_axi_bvalid = vlSelfRef.__Vdly__mem_axi_bvalid;
}

void Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___nba_sequent__TOP__picorv32_wrapper__mem__6\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__memory__v0) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v0] 
            = ((0xffffff00U & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__memory__v0));
    }
    if (vlSelfRef.__VdlySet__memory__v1) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v1] 
            = ((0xffff00ffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__memory__v2) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v2] 
            = ((0xff00ffffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__memory__v3) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v3] 
            = ((0x00ffffffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__memory__v4) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v4] 
            = ((0xffffff00U & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v4]) 
               | (IData)(vlSelfRef.__VdlyVal__memory__v4));
    }
    if (vlSelfRef.__VdlySet__memory__v5) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v5] 
            = ((0xffff00ffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v5]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__memory__v6) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v6] 
            = ((0xff00ffffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v6]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v6) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__memory__v7) {
        vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v7] 
            = ((0x00ffffffU & vlSelfRef.memory[vlSelfRef.__VdlyDim0__memory__v7]) 
               | ((IData)(vlSelfRef.__VdlyVal__memory__v7) 
                  << 0x00000018U));
    }
}
