// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcontrol_unit___024root___eval_triggers__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_triggers__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vcontrol_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_anySet__ico\n"); );
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

void Vcontrol_unit___024root___ico_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ico_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.en_7 = 0U;
    vlSelfRef.en_6 = 0U;
    vlSelfRef.en_5 = 0U;
    vlSelfRef.en_4 = 0U;
    vlSelfRef.en_3 = 0U;
    vlSelfRef.en_2 = 0U;
    vlSelfRef.en_1 = 0U;
    vlSelfRef.en_0 = 0U;
    vlSelfRef.en_c = 0U;
    vlSelfRef.en_s = 0U;
    if ((2U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            if ((0x00008000U & (IData)(vlSelfRef.instruction))) {
                if ((0x00004000U & (IData)(vlSelfRef.instruction))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_7 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_6 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_5 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_4 = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                          >> 0x0000000fU)))) {
                if ((0x00004000U & (IData)(vlSelfRef.instruction))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_3 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_2 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_1 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_0 = 1U;
                    }
                }
            }
            vlSelfRef.en_c = 0U;
        } else if ((1U & (IData)(vlSelfRef.instruction))) {
            vlSelfRef.en_c = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.instruction)))) {
            vlSelfRef.en_c = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            if ((1U & (IData)(vlSelfRef.instruction))) {
                vlSelfRef.en_s = 0U;
                vlSelfRef.alu_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 2U));
                vlSelfRef.mux_sel = 8U;
                vlSelfRef.immediate = (0x000000ffU 
                                       & ((IData)(vlSelfRef.instruction) 
                                          >> 5U));
            } else if ((1U & (~ (IData)(vlSelfRef.instruction)))) {
                vlSelfRef.en_s = 0U;
                vlSelfRef.alu_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 2U));
                vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 0x0aU));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        vlSelfRef.en_s = 1U;
        vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                   >> 0x0dU));
    }
}

void Vcontrol_unit___024root___eval_ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vcontrol_unit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vcontrol_unit___024root___eval_phase__ico(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__ico\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vcontrol_unit___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcontrol_unit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcontrol_unit___024root___eval_triggers__act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_triggers__act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcontrol_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 4> Vcontrol_unit__ConstPool__TABLE_h86526885_0;

void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.control_unit__DOT__current_state = 0U;
    } else if (vlSelfRef.run) {
        vlSelfRef.control_unit__DOT__current_state 
            = vlSelfRef.control_unit__DOT__next_state;
    }
    vlSelfRef.done = 0U;
    vlSelfRef.en_i = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.control_unit__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            vlSelfRef.en_i = 1U;
        }
    }
    vlSelfRef.en_7 = 0U;
    vlSelfRef.en_6 = 0U;
    vlSelfRef.en_5 = 0U;
    vlSelfRef.en_4 = 0U;
    vlSelfRef.en_3 = 0U;
    vlSelfRef.en_2 = 0U;
    vlSelfRef.en_1 = 0U;
    vlSelfRef.en_0 = 0U;
    vlSelfRef.en_c = 0U;
    vlSelfRef.en_s = 0U;
    if ((2U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
            vlSelfRef.done = 1U;
            if ((0x00008000U & (IData)(vlSelfRef.instruction))) {
                if ((0x00004000U & (IData)(vlSelfRef.instruction))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_7 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_6 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_5 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_4 = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                          >> 0x0000000fU)))) {
                if ((0x00004000U & (IData)(vlSelfRef.instruction))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_3 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_2 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.instruction))) {
                        vlSelfRef.en_1 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.instruction) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.en_0 = 1U;
                    }
                }
            }
            vlSelfRef.en_c = 0U;
        } else if ((1U & (IData)(vlSelfRef.instruction))) {
            vlSelfRef.en_c = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.instruction)))) {
            vlSelfRef.en_c = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.control_unit__DOT__current_state)))) {
            if ((1U & (IData)(vlSelfRef.instruction))) {
                vlSelfRef.en_s = 0U;
                vlSelfRef.alu_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 2U));
                vlSelfRef.mux_sel = 8U;
                vlSelfRef.immediate = (0x000000ffU 
                                       & ((IData)(vlSelfRef.instruction) 
                                          >> 5U));
            } else if ((1U & (~ (IData)(vlSelfRef.instruction)))) {
                vlSelfRef.en_s = 0U;
                vlSelfRef.alu_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 2U));
                vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                           >> 0x0aU));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.control_unit__DOT__current_state))) {
        vlSelfRef.en_s = 1U;
        vlSelfRef.mux_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                   >> 0x0dU));
    }
    __Vtableidx1 = vlSelfRef.control_unit__DOT__current_state;
    vlSelfRef.control_unit__DOT__next_state = Vcontrol_unit__ConstPool__TABLE_h86526885_0
        [__Vtableidx1];
}

void Vcontrol_unit___024root___eval_nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcontrol_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcontrol_unit___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcontrol_unit___024root___eval_phase__act(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__act\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcontrol_unit___024root___eval_triggers__act(vlSelf);
    Vcontrol_unit___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcontrol_unit___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcontrol_unit___024root___eval_phase__nba(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__nba\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcontrol_unit___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcontrol_unit___024root___eval_nba(vlSelf);
        Vcontrol_unit___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/control_unit.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcontrol_unit___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/control_unit.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcontrol_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/control_unit.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcontrol_unit___024root___eval_phase__act(vlSelf));
    } while (Vcontrol_unit___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.run & 0xfeU)))) {
        Verilated::overWidthError("run");
    }
}
#endif  // VL_DEBUG
