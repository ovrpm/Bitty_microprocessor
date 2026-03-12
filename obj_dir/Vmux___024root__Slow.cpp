// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

void Vmux___024root___ctor_var_reset(Vmux___024root* vlSelf);

Vmux___024root::Vmux___024root(Vmux__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmux___024root___ctor_var_reset(this);
}

void Vmux___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmux___024root::~Vmux___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
