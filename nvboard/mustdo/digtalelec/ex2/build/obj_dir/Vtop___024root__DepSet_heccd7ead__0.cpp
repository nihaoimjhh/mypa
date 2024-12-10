// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT____VdfgTmp_he172bd47__0;
    top__DOT____VdfgTmp_he172bd47__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h411f97d8__0;
    top__DOT____VdfgTmp_h411f97d8__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h147b1b8f__0;
    top__DOT____VdfgTmp_h147b1b8f__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hfb9b631a__0;
    top__DOT____VdfgTmp_hfb9b631a__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h85d386e0__0;
    top__DOT____VdfgTmp_h85d386e0__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hffd87515__0;
    top__DOT____VdfgTmp_hffd87515__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hec1dd238__0;
    top__DOT____VdfgTmp_hec1dd238__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h32dc4a0e__0;
    top__DOT____VdfgTmp_h32dc4a0e__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h2221a05d__0;
    top__DOT____VdfgTmp_h2221a05d__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hcc07b903__0;
    top__DOT____VdfgTmp_hcc07b903__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_he3b44ea8__0;
    top__DOT____VdfgTmp_he3b44ea8__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h4f4357a7__0;
    top__DOT____VdfgTmp_h4f4357a7__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h03a038a9__0;
    top__DOT____VdfgTmp_h03a038a9__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hbc114bb7__0;
    top__DOT____VdfgTmp_hbc114bb7__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_he2e953c9__0;
    top__DOT____VdfgTmp_he2e953c9__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h0143e3f9__0;
    top__DOT____VdfgTmp_h0143e3f9__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h77f8de97__0;
    top__DOT____VdfgTmp_h77f8de97__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_h3ee5c965__0;
    top__DOT____VdfgTmp_h3ee5c965__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_ha5373642__0;
    top__DOT____VdfgTmp_ha5373642__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_hc9ea86a2__0;
    top__DOT____VdfgTmp_hc9ea86a2__0 = 0;
    CData/*0:0*/ top__DOT____VdfgTmp_haa04ef9d__0;
    top__DOT____VdfgTmp_haa04ef9d__0 = 0;
    // Body
    top__DOT____VdfgTmp_h0143e3f9__0 = (IData)((((IData)(vlSelf->SW) 
                                                 >> 7U) 
                                                | (0x40U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->SW)))));
    top__DOT____VdfgTmp_h03a038a9__0 = (IData)((0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->SW))));
    top__DOT____VdfgTmp_he2e953c9__0 = ((IData)(top__DOT____VdfgTmp_h03a038a9__0) 
                                        & ((IData)(vlSelf->SW) 
                                           >> 5U));
    top__DOT____VdfgTmp_hbc114bb7__0 = ((~ ((IData)(vlSelf->SW) 
                                            >> 5U)) 
                                        & (IData)(top__DOT____VdfgTmp_h03a038a9__0));
    top__DOT____VdfgTmp_he172bd47__0 = (((IData)(top__DOT____VdfgTmp_hbc114bb7__0) 
                                         & ((IData)(vlSelf->SW) 
                                            >> 4U)) 
                                        | ((IData)(top__DOT____VdfgTmp_he2e953c9__0) 
                                           | (IData)(top__DOT____VdfgTmp_h0143e3f9__0)));
    top__DOT____VdfgTmp_h77f8de97__0 = ((~ ((IData)(vlSelf->SW) 
                                            >> 4U)) 
                                        & (IData)(top__DOT____VdfgTmp_hbc114bb7__0));
    top__DOT____VdfgTmp_ha5373642__0 = ((IData)(top__DOT____VdfgTmp_h77f8de97__0) 
                                        & ((IData)(vlSelf->SW) 
                                           >> 3U));
    top__DOT____VdfgTmp_h3ee5c965__0 = ((~ ((IData)(vlSelf->SW) 
                                            >> 3U)) 
                                        & (IData)(top__DOT____VdfgTmp_h77f8de97__0));
    top__DOT____VdfgTmp_hfb9b631a__0 = ((~ ((IData)(vlSelf->SW) 
                                            >> 2U)) 
                                        & (IData)(top__DOT____VdfgTmp_h3ee5c965__0));
    top__DOT____VdfgTmp_h411f97d8__0 = (((IData)(top__DOT____VdfgTmp_h3ee5c965__0) 
                                         & ((IData)(vlSelf->SW) 
                                            >> 2U)) 
                                        | ((IData)(top__DOT____VdfgTmp_ha5373642__0) 
                                           | (IData)(top__DOT____VdfgTmp_h0143e3f9__0)));
    vlSelf->LD4 = (1U & (~ ((~ ((IData)(vlSelf->SW) 
                                >> 1U)) & (IData)(top__DOT____VdfgTmp_hfb9b631a__0))));
    top__DOT____VdfgTmp_h147b1b8f__0 = (1U & (((IData)(top__DOT____VdfgTmp_hfb9b631a__0) 
                                               & ((IData)(vlSelf->SW) 
                                                  >> 1U)) 
                                              | ((IData)(top__DOT____VdfgTmp_ha5373642__0) 
                                                 | ((IData)(top__DOT____VdfgTmp_he2e953c9__0) 
                                                    | ((IData)(vlSelf->SW) 
                                                       >> 7U)))));
    top__DOT____VdfgTmp_h4f4357a7__0 = ((~ (IData)(top__DOT____VdfgTmp_he172bd47__0)) 
                                        & (IData)(top__DOT____VdfgTmp_h411f97d8__0));
    top__DOT____VdfgTmp_hffd87515__0 = ((~ (IData)(top__DOT____VdfgTmp_h411f97d8__0)) 
                                        & (IData)(top__DOT____VdfgTmp_he172bd47__0));
    top__DOT____VdfgTmp_haa04ef9d__0 = ((IData)(top__DOT____VdfgTmp_he172bd47__0) 
                                        & (IData)(top__DOT____VdfgTmp_h411f97d8__0));
    top__DOT____VdfgTmp_hc9ea86a2__0 = (1U & ((~ (IData)(top__DOT____VdfgTmp_he172bd47__0)) 
                                              & (~ (IData)(top__DOT____VdfgTmp_h411f97d8__0))));
    vlSelf->LD = (((IData)(top__DOT____VdfgTmp_he172bd47__0) 
                   << 2U) | (((IData)(top__DOT____VdfgTmp_h411f97d8__0) 
                              << 1U) | (IData)(top__DOT____VdfgTmp_h147b1b8f__0)));
    top__DOT____VdfgTmp_h32dc4a0e__0 = ((~ (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                        & (IData)(top__DOT____VdfgTmp_h4f4357a7__0));
    top__DOT____VdfgTmp_hec1dd238__0 = ((~ (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                        & (IData)(top__DOT____VdfgTmp_haa04ef9d__0));
    top__DOT____VdfgTmp_h2221a05d__0 = ((IData)(top__DOT____VdfgTmp_haa04ef9d__0) 
                                        & (IData)(top__DOT____VdfgTmp_h147b1b8f__0));
    top__DOT____VdfgTmp_hcc07b903__0 = ((~ (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                        & (IData)(top__DOT____VdfgTmp_hc9ea86a2__0));
    top__DOT____VdfgTmp_he3b44ea8__0 = ((IData)(top__DOT____VdfgTmp_hc9ea86a2__0) 
                                        & (IData)(top__DOT____VdfgTmp_h147b1b8f__0));
    top__DOT____VdfgTmp_h85d386e0__0 = ((IData)(top__DOT____VdfgTmp_he3b44ea8__0) 
                                        | ((~ (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                           & (IData)(top__DOT____VdfgTmp_hffd87515__0)));
    vlSelf->SEG = (((IData)(top__DOT____VdfgTmp_h85d386e0__0) 
                    << 6U) | (((((IData)(top__DOT____VdfgTmp_hffd87515__0) 
                                 & (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                | (IData)(top__DOT____VdfgTmp_hec1dd238__0)) 
                               << 5U) | (((IData)(top__DOT____VdfgTmp_h32dc4a0e__0) 
                                          << 4U) | 
                                         ((((IData)(top__DOT____VdfgTmp_h85d386e0__0) 
                                            | (IData)(top__DOT____VdfgTmp_h2221a05d__0)) 
                                           << 3U) | 
                                          ((4U & ((~ 
                                                   ((IData)(top__DOT____VdfgTmp_hcc07b903__0) 
                                                    | ((IData)(top__DOT____VdfgTmp_h32dc4a0e__0) 
                                                       | (IData)(top__DOT____VdfgTmp_hec1dd238__0)))) 
                                                  << 2U)) 
                                           | ((((IData)(top__DOT____VdfgTmp_he3b44ea8__0) 
                                                | ((IData)(top__DOT____VdfgTmp_h32dc4a0e__0) 
                                                   | (((IData)(top__DOT____VdfgTmp_h4f4357a7__0) 
                                                       & (IData)(top__DOT____VdfgTmp_h147b1b8f__0)) 
                                                      | (IData)(top__DOT____VdfgTmp_h2221a05d__0)))) 
                                               << 1U) 
                                              | ((IData)(top__DOT____VdfgTmp_hcc07b903__0) 
                                                 | ((IData)(top__DOT____VdfgTmp_he3b44ea8__0) 
                                                    | (IData)(top__DOT____VdfgTmp_h2221a05d__0)))))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex2/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex2/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex2/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
