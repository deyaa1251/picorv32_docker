// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32.h for the primary calling header

#include "Vpicorv32__pch.h"

void Vpicorv32_picorv32__pi1___ctor_var_reset(Vpicorv32_picorv32__pi1* vlSelf);

Vpicorv32_picorv32__pi1::Vpicorv32_picorv32__pi1() = default;
Vpicorv32_picorv32__pi1::~Vpicorv32_picorv32__pi1() = default;

void Vpicorv32_picorv32__pi1::ctor(Vpicorv32__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpicorv32_picorv32__pi1___ctor_var_reset(this);
}

void Vpicorv32_picorv32__pi1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpicorv32_picorv32__pi1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
