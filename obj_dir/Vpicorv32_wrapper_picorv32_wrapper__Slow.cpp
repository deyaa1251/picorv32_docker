// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"

void Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(Vpicorv32_wrapper_picorv32_wrapper* vlSelf);

Vpicorv32_wrapper_picorv32_wrapper::Vpicorv32_wrapper_picorv32_wrapper() = default;
Vpicorv32_wrapper_picorv32_wrapper::~Vpicorv32_wrapper_picorv32_wrapper() = default;

void Vpicorv32_wrapper_picorv32_wrapper::ctor(Vpicorv32_wrapper__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(this);
}

void Vpicorv32_wrapper_picorv32_wrapper::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpicorv32_wrapper_picorv32_wrapper::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
