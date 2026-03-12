// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"

VL_ATTR_COLD void Vmux___024root___eval_static(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_static\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux___024root___eval_initial(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_initial\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux___024root___eval_final(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_final\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux___024root___eval_phase__stl(Vmux___024root* vlSelf);

VL_ATTR_COLD void Vmux___024root___eval_settle(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_settle\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/mux.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vmux___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vmux___024root___eval_triggers__stl(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_triggers__stl\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vmux___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmux___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmux___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vmux___024root___eval_stl(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_stl\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool Vmux___024root___eval_phase__stl(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__stl\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmux___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vmux___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmux___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmux___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmux___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux___024root___ctor_var_reset(Vmux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___ctor_var_reset\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->in0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8091406170039428016ull);
    vlSelf->in1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15347402500067000120ull);
    vlSelf->in2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14260782587271488589ull);
    vlSelf->in3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12575345787804495474ull);
    vlSelf->in4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17805266879663807351ull);
    vlSelf->in5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4489270071847521044ull);
    vlSelf->in6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16566910774663376312ull);
    vlSelf->in7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17564663733880059340ull);
    vlSelf->in8 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8356995473190445762ull);
    vlSelf->mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13386908545813657036ull);
    vlSelf->mux_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2898645970647042890ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
}
