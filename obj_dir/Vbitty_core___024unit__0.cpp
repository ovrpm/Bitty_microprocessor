// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"

extern "C" void emuInit(short instruction, short value);

void Vbitty_core___024unit____Vdpiimwrap_emuInit_TOP____024unit(SData/*15:0*/ instruction, SData/*15:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbitty_core___024unit____Vdpiimwrap_emuInit_TOP____024unit\n"); );
    // Body
    short instruction__Vcvt;
    instruction__Vcvt = instruction;
    short value__Vcvt;
    value__Vcvt = value;
    emuInit(instruction__Vcvt, value__Vcvt);
}
