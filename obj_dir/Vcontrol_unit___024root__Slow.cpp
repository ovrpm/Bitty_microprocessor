// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf);

Vcontrol_unit___024root::Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcontrol_unit___024root___ctor_var_reset(this);
}

void Vcontrol_unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcontrol_unit___024root::~Vcontrol_unit___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
