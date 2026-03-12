// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"

VL_ATTR_COLD void Vbitty_core___024root___eval_static(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_static\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__done__0 = vlSelfRef.done;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_initial(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbitty_core___024root___eval_final(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_final\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_settle(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_settle\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vbitty_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vbitty_core___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vbitty_core___024root___eval_triggers__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_triggers__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbitty_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vbitty_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vbitty_core___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vbitty_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 4> Vbitty_core__ConstPool__TABLE_h86526885_0;

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___stl_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.done = 0U;
    vlSelfRef.bitty_core__DOT__eni = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state)))) {
            vlSelfRef.bitty_core__DOT__eni = 1U;
        }
    }
    vlSelfRef.instruction_out = vlSelfRef.instruction;
    vlSelfRef.reg0_out = vlSelfRef.bitty_core__DOT__reg0_mux;
    vlSelfRef.reg1_out = vlSelfRef.bitty_core__DOT__reg1_mux;
    vlSelfRef.reg2_out = vlSelfRef.bitty_core__DOT__reg2_mux;
    vlSelfRef.reg3_out = vlSelfRef.bitty_core__DOT__reg3_mux;
    vlSelfRef.reg4_out = vlSelfRef.bitty_core__DOT__reg4_mux;
    vlSelfRef.reg5_out = vlSelfRef.bitty_core__DOT__reg5_mux;
    vlSelfRef.reg6_out = vlSelfRef.bitty_core__DOT__reg6_mux;
    vlSelfRef.reg7_out = vlSelfRef.bitty_core__DOT__reg7_mux;
    vlSelfRef.regs_extra_out = vlSelfRef.bitty_core__DOT__regs_alua;
    vlSelfRef.regc_extra_out = vlSelfRef.bitty_core__DOT__regc_out;
    vlSelfRef.bitty_core__DOT__en7 = 0U;
    vlSelfRef.bitty_core__DOT__en6 = 0U;
    vlSelfRef.bitty_core__DOT__en5 = 0U;
    vlSelfRef.bitty_core__DOT__en4 = 0U;
    vlSelfRef.bitty_core__DOT__en3 = 0U;
    vlSelfRef.bitty_core__DOT__en2 = 0U;
    vlSelfRef.bitty_core__DOT__en1 = 0U;
    vlSelfRef.bitty_core__DOT__en0 = 0U;
    vlSelfRef.bitty_core__DOT__enc = 0U;
    vlSelfRef.bitty_core__DOT__ens = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
            vlSelfRef.done = 1U;
            if ((0x00008000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                if ((0x00004000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                    if ((0x00002000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                        vlSelfRef.bitty_core__DOT__en7 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.bitty_core__DOT__en6 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                        vlSelfRef.bitty_core__DOT__en5 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.bitty_core__DOT__en4 = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                          >> 0x0000000fU)))) {
                if ((0x00004000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                    if ((0x00002000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                        vlSelfRef.bitty_core__DOT__en3 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.bitty_core__DOT__en2 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                              >> 0x0000000eU)))) {
                    if ((0x00002000U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                        vlSelfRef.bitty_core__DOT__en1 = 1U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.bitty_core__DOT__en0 = 1U;
                    }
                }
            }
            vlSelfRef.bitty_core__DOT__enc = 0U;
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl)))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state)))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__sel_ctrl_alu 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 2U));
                vlSelfRef.bitty_core__DOT__immediate 
                    = (0x000000ffU & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                      >> 5U));
                vlSelfRef.bitty_core__DOT__mux_sel = 8U;
            } else if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl)))) {
                vlSelfRef.bitty_core__DOT__ens = 0U;
                vlSelfRef.bitty_core__DOT__sel_ctrl_alu 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 2U));
                vlSelfRef.bitty_core__DOT__mux_sel 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 0x0aU));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
        vlSelfRef.bitty_core__DOT__ens = 1U;
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                               >> 0x0dU));
    }
    __Vtableidx1 = vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state;
    vlSelfRef.bitty_core__DOT__ctrl__DOT__next_state 
        = Vbitty_core__ConstPool__TABLE_h86526885_0
        [__Vtableidx1];
    vlSelfRef.mux_sent = (7U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel));
    vlSelfRef.bitty_core__DOT__mux_out = ((8U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                           ? ((4U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.bitty_core__DOT__immediate))))
                                           : ((4U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? (IData)(vlSelfRef.bitty_core__DOT__reg7_mux)
                                                    : (IData)(vlSelfRef.bitty_core__DOT__reg6_mux))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? (IData)(vlSelfRef.bitty_core__DOT__reg5_mux)
                                                    : (IData)(vlSelfRef.bitty_core__DOT__reg4_mux)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? (IData)(vlSelfRef.bitty_core__DOT__reg3_mux)
                                                    : (IData)(vlSelfRef.bitty_core__DOT__reg2_mux))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.bitty_core__DOT__mux_sel))
                                                    ? (IData)(vlSelfRef.bitty_core__DOT__reg1_mux)
                                                    : (IData)(vlSelfRef.bitty_core__DOT__reg0_mux)))));
}

VL_ATTR_COLD void Vbitty_core___024root___eval_stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vbitty_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__stl\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbitty_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vbitty_core___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vbitty_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vbitty_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vbitty_core___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vbitty_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vbitty_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbitty_core___024root___ctor_var_reset(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ctor_var_reset\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8876431511369994264ull);
    vlSelf->run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13300848193037734645ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->reg0_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 24992745680838435ull);
    vlSelf->reg1_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 168717809132577151ull);
    vlSelf->reg2_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16902412014466398849ull);
    vlSelf->reg3_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12900985515212518931ull);
    vlSelf->reg4_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 273928356991344576ull);
    vlSelf->reg5_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6143472349977250943ull);
    vlSelf->reg6_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12208845363576324972ull);
    vlSelf->reg7_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6559090812774909282ull);
    vlSelf->regc_extra_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 729379187275077609ull);
    vlSelf->regs_extra_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5725979123631035435ull);
    vlSelf->mux_sent = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11707277809318817994ull);
    vlSelf->state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9404372463396948974ull);
    vlSelf->instruction_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2139402400614837945ull);
    vlSelf->bitty_core__DOT__reg0_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6189019266871425252ull);
    vlSelf->bitty_core__DOT__reg1_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14205094714276824050ull);
    vlSelf->bitty_core__DOT__reg2_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3795938494362452501ull);
    vlSelf->bitty_core__DOT__reg3_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15364892292650182208ull);
    vlSelf->bitty_core__DOT__reg4_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10373358227865192671ull);
    vlSelf->bitty_core__DOT__reg5_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8222142981115844613ull);
    vlSelf->bitty_core__DOT__reg6_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18148425061276361807ull);
    vlSelf->bitty_core__DOT__reg7_mux = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1658522221550762238ull);
    vlSelf->bitty_core__DOT__mux_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16196868095692623438ull);
    vlSelf->bitty_core__DOT__mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11517829967975141614ull);
    vlSelf->bitty_core__DOT__regc_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5600119836347290001ull);
    vlSelf->bitty_core__DOT__en0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1500625226432816495ull);
    vlSelf->bitty_core__DOT__en1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3570833953877161100ull);
    vlSelf->bitty_core__DOT__en2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12143093609361481270ull);
    vlSelf->bitty_core__DOT__en3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9023832434902222752ull);
    vlSelf->bitty_core__DOT__en4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18341643093710853733ull);
    vlSelf->bitty_core__DOT__en5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5240870738433407337ull);
    vlSelf->bitty_core__DOT__en6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10165984073060409314ull);
    vlSelf->bitty_core__DOT__en7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12561104512931593334ull);
    vlSelf->bitty_core__DOT__enc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6619374258701672823ull);
    vlSelf->bitty_core__DOT__ens = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14549333824970732262ull);
    vlSelf->bitty_core__DOT__eni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8573288064906984023ull);
    vlSelf->bitty_core__DOT__regs_alua = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14969458746831459153ull);
    vlSelf->bitty_core__DOT__sel_ctrl_alu = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6913580408347505827ull);
    vlSelf->bitty_core__DOT__inst_ctrl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9588993312632013005ull);
    vlSelf->bitty_core__DOT__immediate = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9819457720076936436ull);
    vlSelf->bitty_core__DOT__ctrl__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8437843972541080257ull);
    vlSelf->bitty_core__DOT__ctrl__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17058084720807021169ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__done__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
