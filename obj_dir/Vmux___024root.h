// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"


class Vmux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(mux_sel,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    VL_IN16(in0,15,0);
    VL_IN16(in1,15,0);
    VL_IN16(in2,15,0);
    VL_IN16(in3,15,0);
    VL_IN16(in4,15,0);
    VL_IN16(in5,15,0);
    VL_IN16(in6,15,0);
    VL_IN16(in7,15,0);
    VL_IN16(in8,15,0);
    VL_OUT16(mux_out,15,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vmux__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmux___024root(Vmux__Syms* symsp, const char* namep);
    ~Vmux___024root();
    VL_UNCOPYABLE(Vmux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
