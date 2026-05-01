// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___eval_static__TOP__picorv32_wrapper__mem\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xorshift64_state = 0x0139408dcbbf7a44ULL;
    vlSelfRef.__PVT__fast_axi_transaction = 7U;
    vlSelfRef.__PVT__async_axi_transaction = 0x1fU;
    vlSelfRef.__PVT__delay_axi_transaction = 0U;
    vlSelfRef.__PVT__latched_raddr_en = 0U;
    vlSelfRef.__PVT__latched_waddr_en = 0U;
    vlSelfRef.__PVT__latched_wdata_en = 0U;
    vlSelfRef.__PVT__fast_raddr = 0U;
    vlSelfRef.__PVT__fast_waddr = 0U;
    vlSelfRef.__PVT__fast_wdata = 0U;
}

VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___eval_initial__TOP__picorv32_wrapper__mem\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__verbose = (0U != VL_TESTPLUSARGS_I("verbose"s));
    vlSelfRef.__PVT__axi_test = (0U != VL_TESTPLUSARGS_I("axi_test"s));
    vlSelfRef.__PVT__mem_axi_awready = 0U;
    vlSelfRef.__PVT__mem_axi_wready = 0U;
    vlSelfRef.__PVT__mem_axi_bvalid = 0U;
    vlSelfRef.__PVT__mem_axi_arready = 0U;
    vlSelfRef.__PVT__mem_axi_rvalid = 0U;
    vlSelfRef.__PVT__tests_passed = 0U;
}

VL_ATTR_COLD void Vpicorv32_wrapper_axi4_memory___ctor_var_reset(Vpicorv32_wrapper_axi4_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_memory___ctor_var_reset\n"); );
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__mem_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17559443044801107632ull);
    vlSelf->__PVT__mem_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446238535284319381ull);
    vlSelf->__PVT__mem_axi_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6015756283153445758ull);
    vlSelf->__PVT__mem_axi_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2773365492624509875ull);
    vlSelf->__PVT__mem_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8684243971228423573ull);
    vlSelf->__PVT__mem_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084387298021132711ull);
    vlSelf->__PVT__mem_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12977372346438807741ull);
    vlSelf->__PVT__mem_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16070527282711347721ull);
    vlSelf->__PVT__mem_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3423382366691979168ull);
    vlSelf->__PVT__mem_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14409163279036119621ull);
    vlSelf->__PVT__mem_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15764120531857846780ull);
    vlSelf->__PVT__mem_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 644973069092060034ull);
    vlSelf->__PVT__mem_axi_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15141219782433923650ull);
    vlSelf->__PVT__mem_axi_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16539122384155974171ull);
    vlSelf->__PVT__mem_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497594198048542165ull);
    vlSelf->__PVT__mem_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16869571791053703538ull);
    vlSelf->__PVT__mem_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6572034503445906291ull);
    vlSelf->__PVT__tests_passed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4355285203529625685ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6692689881718318837ull);
    }
    vlSelf->__PVT__verbose = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11561477062799790748ull);
    vlSelf->__PVT__axi_test = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5873060326522692002ull);
    vlSelf->__PVT__latched_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 297137515078137646ull);
    vlSelf->__PVT__latched_waddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11717681442597212403ull);
    vlSelf->__PVT__latched_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2786707623842157266ull);
    vlSelf->__PVT__latched_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11647000779171674058ull);
    vlSelf->__PVT__latched_rinsn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8997291524337965339ull);
    vlSelf->__Vdly__mem_axi_arready = 0;
    vlSelf->__Vdly__mem_axi_awready = 0;
    vlSelf->__Vdly__mem_axi_wready = 0;
    vlSelf->__Vdly__fast_raddr = 0;
    vlSelf->__Vdly__fast_waddr = 0;
    vlSelf->__Vdly__fast_wdata = 0;
    vlSelf->__Vdly__mem_axi_rvalid = 0;
    vlSelf->__Vdly__mem_axi_bvalid = 0;
    vlSelf->__VdlyVal__memory__v0 = 0;
    vlSelf->__VdlyDim0__memory__v0 = 0;
    vlSelf->__VdlySet__memory__v0 = 0;
    vlSelf->__VdlyVal__memory__v1 = 0;
    vlSelf->__VdlyDim0__memory__v1 = 0;
    vlSelf->__VdlySet__memory__v1 = 0;
    vlSelf->__VdlyVal__memory__v2 = 0;
    vlSelf->__VdlyDim0__memory__v2 = 0;
    vlSelf->__VdlySet__memory__v2 = 0;
    vlSelf->__VdlyVal__memory__v3 = 0;
    vlSelf->__VdlyDim0__memory__v3 = 0;
    vlSelf->__VdlySet__memory__v3 = 0;
    vlSelf->__VdlyVal__memory__v4 = 0;
    vlSelf->__VdlyDim0__memory__v4 = 0;
    vlSelf->__VdlySet__memory__v4 = 0;
    vlSelf->__VdlyVal__memory__v5 = 0;
    vlSelf->__VdlyDim0__memory__v5 = 0;
    vlSelf->__VdlySet__memory__v5 = 0;
    vlSelf->__VdlyVal__memory__v6 = 0;
    vlSelf->__VdlyDim0__memory__v6 = 0;
    vlSelf->__VdlySet__memory__v6 = 0;
    vlSelf->__VdlyVal__memory__v7 = 0;
    vlSelf->__VdlyDim0__memory__v7 = 0;
    vlSelf->__VdlySet__memory__v7 = 0;
}
