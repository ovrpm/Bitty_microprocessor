// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__ico\n"); );
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

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_out = (0x0000ffffU & ((4U & (IData)(vlSelfRef.sel))
                                         ? ((2U & (IData)(vlSelfRef.sel))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                (((IData)(vlSelfRef.in_a) 
                                                  == (IData)(vlSelfRef.in_b))
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelfRef.in_a) 
                                                   > (IData)(vlSelfRef.in_b))
                                                   ? 1U
                                                   : 2U))
                                                 : 
                                                VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.in_a), (IData)(vlSelfRef.in_b)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.in_a), (IData)(vlSelfRef.in_b))
                                                 : 
                                                ((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b))))
                                         : ((2U & (IData)(vlSelfRef.sel))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((IData)(vlSelfRef.in_a) 
                                                 | (IData)(vlSelfRef.in_b))
                                                 : 
                                                ((IData)(vlSelfRef.in_a) 
                                                 & (IData)(vlSelfRef.in_b)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((IData)(vlSelfRef.in_a) 
                                                 - (IData)(vlSelfRef.in_b))
                                                 : 
                                                ((IData)(vlSelfRef.in_a) 
                                                 + (IData)(vlSelfRef.in_b))))));
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.alu_out = (0x0000ffffU & ((4U & (IData)(vlSelfRef.sel))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 (((IData)(vlSelfRef.in_a) 
                                                   == (IData)(vlSelfRef.in_b))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.in_a) 
                                                    > (IData)(vlSelfRef.in_b))
                                                    ? 1U
                                                    : 2U))
                                                  : 
                                                 VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.in_a), (IData)(vlSelfRef.in_b)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.in_a), (IData)(vlSelfRef.in_b))
                                                  : 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  ^ (IData)(vlSelfRef.in_b))))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  | (IData)(vlSelfRef.in_b))
                                                  : 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  & (IData)(vlSelfRef.in_b)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  - (IData)(vlSelfRef.in_b))
                                                  : 
                                                 ((IData)(vlSelfRef.in_a) 
                                                  + (IData)(vlSelfRef.in_b))))));
    }
}

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Valu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/alu.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Valu___024root___eval_phase__ico(vlSelf));
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.sel & 0xf8U)))) {
        Verilated::overWidthError("sel");
    }
}
#endif  // VL_DEBUG
