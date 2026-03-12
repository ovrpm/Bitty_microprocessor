// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef VERILATED_VBITTY_CORE___024UNIT_H_
#define VERILATED_VBITTY_CORE___024UNIT_H_  // guard

#include "verilated.h"


class Vbitty_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbitty_core___024unit final {
  public:

    // INTERNAL VARIABLES
    Vbitty_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vbitty_core___024unit() = default;
    ~Vbitty_core___024unit() = default;
    void ctor(Vbitty_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vbitty_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
