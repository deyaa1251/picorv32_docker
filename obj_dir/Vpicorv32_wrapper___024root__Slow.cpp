// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

void Vpicorv32_wrapper___024root___ctor_var_reset(Vpicorv32_wrapper___024root* vlSelf);

Vpicorv32_wrapper___024root::Vpicorv32_wrapper___024root(Vpicorv32_wrapper__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vpicorv32_wrapper___024root___ctor_var_reset(this);
}

void Vpicorv32_wrapper___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpicorv32_wrapper___024root::~Vpicorv32_wrapper___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
