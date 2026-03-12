// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vmux___024root___eval_triggers__ico(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_triggers__ico\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vmux___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmux___024root___ico_sequent__TOP__0(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___ico_sequent__TOP__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mux_out = ((8U & (IData)(vlSelfRef.mux_sel))
                          ? ((4U & (IData)(vlSelfRef.mux_sel))
                              ? 0U : ((2U & (IData)(vlSelfRef.mux_sel))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.mux_sel))
                                                ? 0U
                                                : (IData)(vlSelfRef.in8))))
                          : ((4U & (IData)(vlSelfRef.mux_sel))
                              ? ((2U & (IData)(vlSelfRef.mux_sel))
                                  ? ((1U & (IData)(vlSelfRef.mux_sel))
                                      ? (IData)(vlSelfRef.in7)
                                      : (IData)(vlSelfRef.in6))
                                  : ((1U & (IData)(vlSelfRef.mux_sel))
                                      ? (IData)(vlSelfRef.in5)
                                      : (IData)(vlSelfRef.in4)))
                              : ((2U & (IData)(vlSelfRef.mux_sel))
                                  ? ((1U & (IData)(vlSelfRef.mux_sel))
                                      ? (IData)(vlSelfRef.in3)
                                      : (IData)(vlSelfRef.in2))
                                  : ((1U & (IData)(vlSelfRef.mux_sel))
                                      ? (IData)(vlSelfRef.in1)
                                      : (IData)(vlSelfRef.in0)))));
}

void Vmux___024root___eval_ico(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_ico\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.mux_out = ((8U & (IData)(vlSelfRef.mux_sel))
                              ? ((4U & (IData)(vlSelfRef.mux_sel))
                                  ? 0U : ((2U & (IData)(vlSelfRef.mux_sel))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.mux_sel))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.in8))))
                              : ((4U & (IData)(vlSelfRef.mux_sel))
                                  ? ((2U & (IData)(vlSelfRef.mux_sel))
                                      ? ((1U & (IData)(vlSelfRef.mux_sel))
                                          ? (IData)(vlSelfRef.in7)
                                          : (IData)(vlSelfRef.in6))
                                      : ((1U & (IData)(vlSelfRef.mux_sel))
                                          ? (IData)(vlSelfRef.in5)
                                          : (IData)(vlSelfRef.in4)))
                                  : ((2U & (IData)(vlSelfRef.mux_sel))
                                      ? ((1U & (IData)(vlSelfRef.mux_sel))
                                          ? (IData)(vlSelfRef.in3)
                                          : (IData)(vlSelfRef.in2))
                                      : ((1U & (IData)(vlSelfRef.mux_sel))
                                          ? (IData)(vlSelfRef.in1)
                                          : (IData)(vlSelfRef.in0)))));
    }
}

bool Vmux___024root___eval_phase__ico(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__ico\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmux___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vmux___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmux___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/mux.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vmux___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mux_sel & 0xf0U)))) {
        Verilated::overWidthError("mux_sel");
    }
}
#endif  // VL_DEBUG
