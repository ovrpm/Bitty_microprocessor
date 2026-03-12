// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"

void Vbitty_core___024unit___ctor_var_reset(Vbitty_core___024unit* vlSelf);

void Vbitty_core___024unit::ctor(Vbitty_core__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vbitty_core___024unit___ctor_var_reset(this);
}

void Vbitty_core___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vbitty_core___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
