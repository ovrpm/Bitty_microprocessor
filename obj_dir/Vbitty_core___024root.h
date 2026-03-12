// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef VERILATED_VBITTY_CORE___024ROOT_H_
#define VERILATED_VBITTY_CORE___024ROOT_H_  // guard

#include "verilated.h"
class Vbitty_core___024unit;


class Vbitty_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbitty_core___024root final {
  public:
    // CELLS
    Vbitty_core___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_IN8(run,0,0);
    VL_OUT8(mux_sent,2,0);
    VL_OUT8(state,1,0);
    CData/*3:0*/ bitty_core__DOT__mux_sel;
    CData/*0:0*/ bitty_core__DOT__en0;
    CData/*0:0*/ bitty_core__DOT__en1;
    CData/*0:0*/ bitty_core__DOT__en2;
    CData/*0:0*/ bitty_core__DOT__en3;
    CData/*0:0*/ bitty_core__DOT__en4;
    CData/*0:0*/ bitty_core__DOT__en5;
    CData/*0:0*/ bitty_core__DOT__en6;
    CData/*0:0*/ bitty_core__DOT__en7;
    CData/*0:0*/ bitty_core__DOT__enc;
    CData/*0:0*/ bitty_core__DOT__ens;
    CData/*0:0*/ bitty_core__DOT__eni;
    CData/*2:0*/ bitty_core__DOT__sel_ctrl_alu;
    CData/*7:0*/ bitty_core__DOT__immediate;
    CData/*1:0*/ bitty_core__DOT__ctrl__DOT__current_state;
    CData/*1:0*/ bitty_core__DOT__ctrl__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__done__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    VL_IN16(instruction,15,0);
    VL_OUT16(reg0_out,15,0);
    VL_OUT16(reg1_out,15,0);
    VL_OUT16(reg2_out,15,0);
    VL_OUT16(reg3_out,15,0);
    VL_OUT16(reg4_out,15,0);
    VL_OUT16(reg5_out,15,0);
    VL_OUT16(reg6_out,15,0);
    VL_OUT16(reg7_out,15,0);
    VL_OUT16(regc_extra_out,15,0);
    VL_OUT16(regs_extra_out,15,0);
    VL_OUT16(instruction_out,15,0);
    SData/*15:0*/ bitty_core__DOT__reg0_mux;
    SData/*15:0*/ bitty_core__DOT__reg1_mux;
    SData/*15:0*/ bitty_core__DOT__reg2_mux;
    SData/*15:0*/ bitty_core__DOT__reg3_mux;
    SData/*15:0*/ bitty_core__DOT__reg4_mux;
    SData/*15:0*/ bitty_core__DOT__reg5_mux;
    SData/*15:0*/ bitty_core__DOT__reg6_mux;
    SData/*15:0*/ bitty_core__DOT__reg7_mux;
    SData/*15:0*/ bitty_core__DOT__mux_out;
    SData/*15:0*/ bitty_core__DOT__regc_out;
    SData/*15:0*/ bitty_core__DOT__regs_alua;
    SData/*15:0*/ bitty_core__DOT__inst_ctrl;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbitty_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vbitty_core___024root(Vbitty_core__Syms* symsp, const char* namep);
    ~Vbitty_core___024root();
    VL_UNCOPYABLE(Vbitty_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
