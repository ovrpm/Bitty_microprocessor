// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

VL_ATTR_COLD void Vcontrol_unit___024root___eval_static(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_static\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_initial\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_final(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_final\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/control_unit.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcontrol_unit___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_triggers__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_triggers__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_unit___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcontrol_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcontrol_unit___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcontrol_unit___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcontrol_unit___024root___stl_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___stl_sequent__TOP__0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vcontrol_unit___024root___eval_stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcontrol_unit___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vcontrol_unit___024root___eval_phase__stl(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__stl\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcontrol_unit___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcontrol_unit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcontrol_unit___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcontrol_unit___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcontrol_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcontrol_unit___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ctor_var_reset\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8876431511369994264ull);
    vlSelf->alu_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15648105097053784295ull);
    vlSelf->mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13386908545813657036ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13300848193037734645ull);
    vlSelf->immediate = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14979782960453030085ull);
    vlSelf->en_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2149072620321429304ull);
    vlSelf->en_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13770331397457447336ull);
    vlSelf->en_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1894250060539204477ull);
    vlSelf->en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14278831644267502780ull);
    vlSelf->en_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777675263327604152ull);
    vlSelf->en_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16414999858553084710ull);
    vlSelf->en_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9582930318971610602ull);
    vlSelf->en_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 338477756683924125ull);
    vlSelf->en_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8165955383371983673ull);
    vlSelf->en_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486469737280858826ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->control_unit__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 150722533310176899ull);
    vlSelf->control_unit__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18256238881488566298ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
