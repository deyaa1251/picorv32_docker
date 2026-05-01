// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

void Vpicorv32___024root___ctor_var_reset(Vpicorv32___024root* vlSelf);

Vpicorv32___024root::Vpicorv32___024root(Vpicorv32__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vpicorv32___024root___ctor_var_reset(this);
}

void Vpicorv32___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpicorv32___024root::~Vpicorv32___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
