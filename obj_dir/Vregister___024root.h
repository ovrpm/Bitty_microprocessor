// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(en,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    VL_IN16(d_in,15,0);
    VL_OUT16(d_out,15,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* namep);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
