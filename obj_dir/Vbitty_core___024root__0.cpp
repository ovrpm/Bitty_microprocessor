// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval_triggers__ico(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_triggers__ico\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbitty_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vbitty_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___trigger_anySet__ico\n"); );
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

void Vbitty_core___024root___ico_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ico_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction_out = vlSelfRef.instruction;
}

void Vbitty_core___024root___eval_ico(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_ico\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.instruction_out = vlSelfRef.instruction;
    }
}

bool Vbitty_core___024root___eval_phase__ico(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__ico\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbitty_core___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vbitty_core___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vbitty_core___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_triggers__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelfRef.done)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__done__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__done__0 = vlSelfRef.done;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbitty_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vbitty_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___trigger_anySet__act\n"); );
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

void Vbitty_core___024unit____Vdpiimwrap_emuInit_TOP____024unit(SData/*15:0*/ instruction, SData/*15:0*/ value);

void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__0\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbitty_core___024unit____Vdpiimwrap_emuInit_TOP____024unit(vlSelfRef.instruction, (IData)(vlSelfRef.bitty_core__DOT__regc_out));
}

extern const VlUnpacked<CData/*1:0*/, 4> Vbitty_core__ConstPool__TABLE_h86526885_0;

void Vbitty_core___024root___nba_sequent__TOP__1(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__1\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.bitty_core__DOT__inst_ctrl = 0U;
        vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state = 0U;
        vlSelfRef.bitty_core__DOT__reg0_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg1_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg2_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg3_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg4_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg5_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg6_mux = 0U;
        vlSelfRef.bitty_core__DOT__reg7_mux = 0U;
        vlSelfRef.bitty_core__DOT__regc_out = 0U;
        vlSelfRef.bitty_core__DOT__regs_alua = 0U;
    } else {
        if (vlSelfRef.bitty_core__DOT__eni) {
            vlSelfRef.bitty_core__DOT__inst_ctrl = vlSelfRef.instruction;
        }
        if (vlSelfRef.run) {
            vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state 
                = vlSelfRef.bitty_core__DOT__ctrl__DOT__next_state;
        }
        if (vlSelfRef.bitty_core__DOT__en0) {
            vlSelfRef.bitty_core__DOT__reg0_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en1) {
            vlSelfRef.bitty_core__DOT__reg1_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en2) {
            vlSelfRef.bitty_core__DOT__reg2_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en3) {
            vlSelfRef.bitty_core__DOT__reg3_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en4) {
            vlSelfRef.bitty_core__DOT__reg4_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en5) {
            vlSelfRef.bitty_core__DOT__reg5_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en6) {
            vlSelfRef.bitty_core__DOT__reg6_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__en7) {
            vlSelfRef.bitty_core__DOT__reg7_mux = vlSelfRef.bitty_core__DOT__regc_out;
        }
        if (vlSelfRef.bitty_core__DOT__enc) {
            vlSelfRef.bitty_core__DOT__regc_out = (0x0000ffffU 
                                                   & ((4U 
                                                       & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                         ? 
                                                        (((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                          == (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                           > (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                           ? 1U
                                                           : 2U))
                                                         : 
                                                        VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__regs_alua), (IData)(vlSelfRef.bitty_core__DOT__mux_out)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                         ? 
                                                        VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.bitty_core__DOT__regs_alua), (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                         ^ (IData)(vlSelfRef.bitty_core__DOT__mux_out))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                         ? 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                         | (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__mux_out)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.bitty_core__DOT__sel_ctrl_alu))
                                                         ? 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                         - (IData)(vlSelfRef.bitty_core__DOT__mux_out))
                                                         : 
                                                        ((IData)(vlSelfRef.bitty_core__DOT__regs_alua) 
                                                         + (IData)(vlSelfRef.bitty_core__DOT__mux_out))))));
        }
        if (vlSelfRef.bitty_core__DOT__ens) {
            vlSelfRef.bitty_core__DOT__regs_alua = vlSelfRef.bitty_core__DOT__mux_out;
        }
    }
    vlSelfRef.bitty_core__DOT__eni = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state)))) {
            vlSelfRef.bitty_core__DOT__eni = 1U;
        }
    }
    vlSelfRef.done = 0U;
    vlSelfRef.bitty_core__DOT__en7 = 0U;
    vlSelfRef.bitty_core__DOT__en6 = 0U;
    vlSelfRef.bitty_core__DOT__en5 = 0U;
    vlSelfRef.bitty_core__DOT__en4 = 0U;
    vlSelfRef.bitty_core__DOT__en3 = 0U;
    vlSelfRef.bitty_core__DOT__en2 = 0U;
    vlSelfRef.bitty_core__DOT__en1 = 0U;
    vlSelfRef.bitty_core__DOT__en0 = 0U;
    __Vtableidx1 = vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state;
    vlSelfRef.bitty_core__DOT__ctrl__DOT__next_state 
        = Vbitty_core__ConstPool__TABLE_h86526885_0
        [__Vtableidx1];
    vlSelfRef.reg0_out = vlSelfRef.bitty_core__DOT__reg0_mux;
    vlSelfRef.reg1_out = vlSelfRef.bitty_core__DOT__reg1_mux;
    vlSelfRef.reg2_out = vlSelfRef.bitty_core__DOT__reg2_mux;
    vlSelfRef.reg3_out = vlSelfRef.bitty_core__DOT__reg3_mux;
    vlSelfRef.reg4_out = vlSelfRef.bitty_core__DOT__reg4_mux;
    vlSelfRef.reg5_out = vlSelfRef.bitty_core__DOT__reg5_mux;
    vlSelfRef.reg6_out = vlSelfRef.bitty_core__DOT__reg6_mux;
    vlSelfRef.reg7_out = vlSelfRef.bitty_core__DOT__reg7_mux;
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
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state)))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                vlSelfRef.bitty_core__DOT__immediate 
                    = (0x000000ffU & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                      >> 5U));
                vlSelfRef.bitty_core__DOT__mux_sel = 8U;
            } else if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl)))) {
                vlSelfRef.bitty_core__DOT__mux_sel 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 0x0aU));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                                               >> 0x0dU));
    }
    vlSelfRef.mux_sent = (7U & (IData)(vlSelfRef.bitty_core__DOT__mux_sel));
    vlSelfRef.bitty_core__DOT__enc = 0U;
    vlSelfRef.regc_extra_out = vlSelfRef.bitty_core__DOT__regc_out;
    vlSelfRef.bitty_core__DOT__ens = 0U;
    if ((2U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
            vlSelfRef.bitty_core__DOT__enc = 0U;
        } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl)))) {
            vlSelfRef.bitty_core__DOT__enc = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state)))) {
            if ((1U & (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl))) {
                vlSelfRef.bitty_core__DOT__sel_ctrl_alu 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 2U));
                vlSelfRef.bitty_core__DOT__ens = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.bitty_core__DOT__inst_ctrl)))) {
                vlSelfRef.bitty_core__DOT__sel_ctrl_alu 
                    = (7U & ((IData)(vlSelfRef.bitty_core__DOT__inst_ctrl) 
                             >> 2U));
                vlSelfRef.bitty_core__DOT__ens = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.bitty_core__DOT__ctrl__DOT__current_state))) {
        vlSelfRef.bitty_core__DOT__ens = 1U;
    }
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
    vlSelfRef.regs_extra_out = vlSelfRef.bitty_core__DOT__regs_alua;
}

void Vbitty_core___024root___eval_nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbitty_core___024unit____Vdpiimwrap_emuInit_TOP____024unit(vlSelfRef.instruction, (IData)(vlSelfRef.bitty_core__DOT__regc_out));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbitty_core___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vbitty_core___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vbitty_core___024root___eval_phase__act(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__act\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbitty_core___024root___eval_triggers__act(vlSelf);
    Vbitty_core___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vbitty_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vbitty_core___024root___eval_phase__nba(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__nba\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vbitty_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vbitty_core___024root___eval_nba(vlSelf);
        Vbitty_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vbitty_core___024root___eval(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbitty_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 4, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vbitty_core___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbitty_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbitty_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/bitty_core.v", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vbitty_core___024root___eval_phase__act(vlSelf));
    } while (Vbitty_core___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vbitty_core___024root___eval_debug_assertions(Vbitty_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_debug_assertions\n"); );
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
