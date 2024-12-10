// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____VdfgTmp_h7abdcc16__0 = (IData)(
                                                       (0U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->BTN))));
    vlSelf->top__DOT____VdfgTmp_h76c634fb__0 = (IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->BTN))));
    vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0 = (IData)(
                                                       (4U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->BTN))));
    vlSelf->top__DOT____VdfgTmp_ha15450f1__0 = (IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->BTN))));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0 
        = (1U & ((~ ((IData)(vlSelf->SW2) >> 2U)) & 
                 ((IData)(vlSelf->SW1) >> 2U)));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0 
        = (1U & ((~ ((IData)(vlSelf->SW1) >> 2U)) & 
                 ((IData)(vlSelf->SW2) >> 2U)));
    vlSelf->__VdfgTmp_h26c8da6b__0 = (3U & ((1U & (IData)(vlSelf->SW1)) 
                                            + (1U & 
                                               ((IData)(1U) 
                                                + (~ (IData)(vlSelf->SW2))))));
    vlSelf->__VdfgTmp_he0ed0bff__0 = (3U & ((1U & (IData)(vlSelf->SW1)) 
                                            + (1U & (IData)(vlSelf->SW2))));
    vlSelf->top__DOT__c3__DOT__eq2 = (1U & (~ (((IData)(vlSelf->SW1) 
                                                ^ (IData)(vlSelf->SW2)) 
                                               >> 2U)));
    vlSelf->__VdfgTmp_h7f867a1a__0 = (3U & ((1U & ((IData)(vlSelf->SW1) 
                                                   >> 1U)) 
                                            + ((1U 
                                                & (((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->SW2))) 
                                                   >> 1U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                                  >> 1U))));
    vlSelf->__VdfgTmp_h4b2d08f0__0 = (3U & ((1U & ((IData)(vlSelf->SW1) 
                                                   >> 1U)) 
                                            + ((1U 
                                                & ((IData)(vlSelf->SW2) 
                                                   >> 1U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                                  >> 1U))));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0 
        = ((IData)(vlSelf->top__DOT__c3__DOT__eq2) 
           & ((~ ((IData)(vlSelf->SW2) >> 1U)) & ((IData)(vlSelf->SW1) 
                                                  >> 1U)));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0 
        = ((IData)(vlSelf->top__DOT__c3__DOT__eq2) 
           & ((~ ((IData)(vlSelf->SW1) >> 1U)) & ((IData)(vlSelf->SW2) 
                                                  >> 1U)));
    vlSelf->top__DOT__c3__DOT__eq1 = ((IData)(vlSelf->top__DOT__c3__DOT__eq2) 
                                      & (~ (((IData)(vlSelf->SW1) 
                                             ^ (IData)(vlSelf->SW2)) 
                                            >> 1U)));
    vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l = 
        ((4U & ((((IData)(vlSelf->SW1) >> 2U) + ((3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->SW2))) 
                                                     >> 2U)) 
                                                 + 
                                                 ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                                  >> 1U))) 
                << 2U)) | ((2U & ((((IData)(vlSelf->SW1) 
                                    >> 1U) + ((7U & 
                                               (((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelf->SW2))) 
                                                >> 1U)) 
                                              + ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                                 >> 1U))) 
                                  << 1U)) | (1U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->SW1) 
                                                    + 
                                                    (~ (IData)(vlSelf->SW2)))))));
    vlSelf->__VdfgTmp_hd800e939__0 = (3U & ((1U & ((IData)(vlSelf->SW1) 
                                                   >> 2U)) 
                                            + ((1U 
                                                & (((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->SW2))) 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                                  >> 1U))));
    vlSelf->top__DOT__add3__DOT__l = ((4U & ((((IData)(vlSelf->SW1) 
                                               >> 2U) 
                                              + (((IData)(vlSelf->SW2) 
                                                  >> 2U) 
                                                 + 
                                                 ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                                  >> 1U))) 
                                             << 2U)) 
                                      | ((2U & ((((IData)(vlSelf->SW1) 
                                                  >> 1U) 
                                                 + 
                                                 (((IData)(vlSelf->SW2) 
                                                   >> 1U) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                                   >> 1U))) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->SW1) 
                                                  + (IData)(vlSelf->SW2)))));
    vlSelf->__VdfgTmp_h48091d8f__0 = (3U & ((1U & ((IData)(vlSelf->SW1) 
                                                   >> 2U)) 
                                            + ((1U 
                                                & ((IData)(vlSelf->SW2) 
                                                   >> 2U)) 
                                               + ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                                  >> 1U))));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0 
        = ((IData)(vlSelf->top__DOT__c3__DOT__eq1) 
           & ((~ (IData)(vlSelf->SW2)) & (IData)(vlSelf->SW1)));
    vlSelf->top__DOT__c3__DOT__eq0 = ((~ ((IData)(vlSelf->SW1) 
                                          ^ (IData)(vlSelf->SW2))) 
                                      & (IData)(vlSelf->top__DOT__c3__DOT__eq1));
    vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0 
        = ((IData)(vlSelf->top__DOT__c3__DOT__eq1) 
           & ((~ (IData)(vlSelf->SW1)) & (IData)(vlSelf->SW2)));
    vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4 
        = (1U & (((IData)(1U) + ((1U & ((IData)(vlSelf->SW1) 
                                        >> 3U)) + ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                   >> 1U))) 
                 >> 1U));
    vlSelf->top__DOT__add3__DOT__cout4 = (1U & (((1U 
                                                  & ((IData)(vlSelf->SW1) 
                                                     >> 3U)) 
                                                 + 
                                                 ((1U 
                                                   & ((IData)(vlSelf->SW2) 
                                                      >> 3U)) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                   >> 1U))) 
                                                >> 1U));
    vlSelf->LD = (0x7fU & (((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                        & (IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0)))) 
                            & ((0x40U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->top__DOT__add3__DOT__l)))) 
                                         << 6U)) | 
                               (((IData)((((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                           >> 1U) ^ (IData)(vlSelf->top__DOT__add3__DOT__cout4))) 
                                 << 5U) | (((IData)(vlSelf->top__DOT__add3__DOT__cout4) 
                                            << 4U) 
                                           | ((8U & 
                                               ((((IData)(vlSelf->SW1) 
                                                  >> 3U) 
                                                 + 
                                                 (((IData)(vlSelf->SW2) 
                                                   >> 3U) 
                                                  + 
                                                  ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                   >> 1U))) 
                                                << 3U)) 
                                              | (IData)(vlSelf->top__DOT__add3__DOT__l)))))) 
                           | (((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0) 
                                           & (IData)(vlSelf->BTN)))) 
                               & ((0x40U & ((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))) 
                                            << 6U)) 
                                  | (((IData)((((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4))) 
                                      << 5U) | (((IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4) 
                                                 << 4U) 
                                                | ((8U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (((IData)(vlSelf->SW1) 
                                                          >> 3U) 
                                                         + 
                                                         ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                          >> 1U))) 
                                                       << 3U)) 
                                                   | (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))))) 
                              | ((0xfU & ((- (IData)(
                                                     ((~ (IData)(vlSelf->BTN)) 
                                                      & (IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0)))) 
                                          & (~ (IData)(vlSelf->SW1)))) 
                                 | (((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0) 
                                                 & (IData)(vlSelf->BTN)))) 
                                     & ((IData)(vlSelf->SW1) 
                                        & (IData)(vlSelf->SW2))) 
                                    | (((- (IData)(
                                                   ((~ (IData)(vlSelf->BTN)) 
                                                    & (IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0)))) 
                                        & ((IData)(vlSelf->SW1) 
                                           | (IData)(vlSelf->SW2))) 
                                       | (((- (IData)(
                                                      ((IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0) 
                                                       & (IData)(vlSelf->BTN)))) 
                                           & ((IData)(vlSelf->SW1) 
                                              ^ (IData)(vlSelf->SW2))) 
                                          | (((- (IData)(
                                                         ((~ (IData)(vlSelf->BTN)) 
                                                          & (IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0)))) 
                                              & ((0x70U 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                                                 | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                                                    | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0))))) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->top__DOT__c3__DOT__eq0) 
                                                     << 3U) 
                                                    | (7U 
                                                       & (- (IData)(
                                                                    ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                                                     | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                                                        | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0))))))))) 
                                             | ((- (IData)(
                                                           ((IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0) 
                                                            & (IData)(vlSelf->BTN)))) 
                                                & (- (IData)((IData)(vlSelf->top__DOT__c3__DOT__eq0))))))))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
                VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex3/vsrc/top.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex3/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/jinghanhui/verilogtest/mustdo/ex3/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    // Body
    if (VL_UNLIKELY((vlSelf->BTN & 0xf8U))) {
        Verilated::overWidthError("BTN");}
    if (VL_UNLIKELY((vlSelf->SW1 & 0xf0U))) {
        Verilated::overWidthError("SW1");}
    if (VL_UNLIKELY((vlSelf->SW2 & 0xf0U))) {
        Verilated::overWidthError("SW2");}
}
#endif  // VL_DEBUG
