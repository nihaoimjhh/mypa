// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(((0x70U & ((- (IData)(
                                                     ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                                      | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                                         | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0))))) 
                                          << 4U)) | 
                                (((IData)(vlSelf->top__DOT__c3__DOT__eq0) 
                                  << 3U) | (7U & (- (IData)(
                                                            ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                                             | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                                                | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0))))))))),7);
        bufp->chgCData(oldp+1,((0x7fU & (- (IData)((IData)(vlSelf->top__DOT__c3__DOT__eq0))))),7);
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                    >> 1U))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                    >> 1U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                    >> 1U))));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__add3__DOT__cout4));
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__add3__DOT__l),3);
        bufp->chgCData(oldp+7,((((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                 << 2U) | (((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0)))),3);
        bufp->chgCData(oldp+8,((((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                 << 2U) | (((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0)))),3);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__c3__DOT__eq1));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__c3__DOT__eq2));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__c3__DOT__eq0));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4));
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l),3);
    }
    bufp->chgCData(oldp+17,(vlSelf->BTN),3);
    bufp->chgCData(oldp+18,(vlSelf->SW1),4);
    bufp->chgCData(oldp+19,(vlSelf->SW2),4);
    bufp->chgCData(oldp+20,(vlSelf->LD),7);
    bufp->chgCData(oldp+21,(((0x40U & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->top__DOT__add3__DOT__l)))) 
                                       << 6U)) | (((IData)(
                                                           (((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                             >> 1U) 
                                                            ^ (IData)(vlSelf->top__DOT__add3__DOT__cout4))) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT__add3__DOT__cout4) 
                                                      << 4U) 
                                                     | ((8U 
                                                         & ((((IData)(vlSelf->SW1) 
                                                              >> 3U) 
                                                             + 
                                                             (((IData)(vlSelf->SW2) 
                                                               >> 3U) 
                                                              + 
                                                              ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                               >> 1U))) 
                                                            << 3U)) 
                                                        | (IData)(vlSelf->top__DOT__add3__DOT__l)))))),7);
    bufp->chgCData(oldp+22,(((0x40U & ((~ (IData)((0U 
                                                   != (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))) 
                                       << 6U)) | (((IData)(
                                                           (((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                             >> 1U) 
                                                            ^ (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4))) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__cout4) 
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
                                                        | (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))))),7);
    bufp->chgCData(oldp+23,((0xfU & (~ (IData)(vlSelf->SW1)))),7);
    bufp->chgCData(oldp+24,(((IData)(vlSelf->SW1) & (IData)(vlSelf->SW2))),7);
    bufp->chgCData(oldp+25,(((IData)(vlSelf->SW1) | (IData)(vlSelf->SW2))),7);
    bufp->chgCData(oldp+26,(((IData)(vlSelf->SW1) ^ (IData)(vlSelf->SW2))),7);
    bufp->chgCData(oldp+27,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                 & (IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0)))))),7);
    bufp->chgCData(oldp+28,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0) 
                                                 & (IData)(vlSelf->BTN)))))),7);
    bufp->chgCData(oldp+29,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                 & (IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0)))))),7);
    bufp->chgCData(oldp+30,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0) 
                                                 & (IData)(vlSelf->BTN)))))),7);
    bufp->chgCData(oldp+31,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                 & (IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0)))))),7);
    bufp->chgCData(oldp+32,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0) 
                                                 & (IData)(vlSelf->BTN)))))),7);
    bufp->chgCData(oldp+33,((0x7fU & (- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                 & (IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0)))))),7);
    bufp->chgCData(oldp+34,((0x7fU & (- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0) 
                                                 & (IData)(vlSelf->BTN)))))),7);
    bufp->chgCData(oldp+35,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                         & (IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0)))) 
                             & ((0x40U & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->top__DOT__add3__DOT__l)))) 
                                          << 6U)) | 
                                (((IData)((((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                            >> 1U) 
                                           ^ (IData)(vlSelf->top__DOT__add3__DOT__cout4))) 
                                  << 5U) | (((IData)(vlSelf->top__DOT__add3__DOT__cout4) 
                                             << 4U) 
                                            | ((8U 
                                                & ((((IData)(vlSelf->SW1) 
                                                     >> 3U) 
                                                    + 
                                                    (((IData)(vlSelf->SW2) 
                                                      >> 3U) 
                                                     + 
                                                     ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                                      >> 1U))) 
                                                   << 3U)) 
                                               | (IData)(vlSelf->top__DOT__add3__DOT__l))))))),7);
    bufp->chgCData(oldp+36,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h7abdcc16__0) 
                                         & (IData)(vlSelf->BTN)))) 
                             & ((0x40U & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l)))) 
                                          << 6U)) | 
                                (((IData)((((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
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
                                               | (IData)(vlSelf->top__DOT__sub3__DOT__insert_0__DOT__l))))))),7);
    bufp->chgCData(oldp+37,((0xfU & ((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                                 & (IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0)))) 
                                     & (~ (IData)(vlSelf->SW1))))),7);
    bufp->chgCData(oldp+38,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h76c634fb__0) 
                                         & (IData)(vlSelf->BTN)))) 
                             & ((IData)(vlSelf->SW1) 
                                & (IData)(vlSelf->SW2)))),7);
    bufp->chgCData(oldp+39,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                         & (IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0)))) 
                             & ((IData)(vlSelf->SW1) 
                                | (IData)(vlSelf->SW2)))),7);
    bufp->chgCData(oldp+40,(((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h5a14e8fb__0) 
                                         & (IData)(vlSelf->BTN)))) 
                             & ((IData)(vlSelf->SW1) 
                                ^ (IData)(vlSelf->SW2)))),7);
    bufp->chgCData(oldp+41,(((- (IData)(((~ (IData)(vlSelf->BTN)) 
                                         & (IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0)))) 
                             & ((0x70U & ((- (IData)(
                                                     ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h71ab6dfa__0) 
                                                      | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_h36219a96__0) 
                                                         | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha43d8be6__0))))) 
                                          << 4U)) | 
                                (((IData)(vlSelf->top__DOT__c3__DOT__eq0) 
                                  << 3U) | (7U & (- (IData)(
                                                            ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_ha34209dd__0) 
                                                             | ((IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_hf557f565__0) 
                                                                | (IData)(vlSelf->top__DOT__c3__DOT____VdfgTmp_he1976823__0)))))))))),7);
    bufp->chgCData(oldp+42,((0x7fU & ((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_ha15450f1__0) 
                                                  & (IData)(vlSelf->BTN)))) 
                                      & (- (IData)((IData)(vlSelf->top__DOT__c3__DOT__eq0)))))),7);
    bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->SW1) 
                                 + (IData)(vlSelf->SW2)))));
    bufp->chgBit(oldp+44,((1U & (((IData)(vlSelf->SW1) 
                                  >> 1U) + (((IData)(vlSelf->SW2) 
                                             >> 1U) 
                                            + ((IData)(vlSelf->__VdfgTmp_he0ed0bff__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+45,((1U & (((IData)(vlSelf->SW1) 
                                  >> 2U) + (((IData)(vlSelf->SW2) 
                                             >> 2U) 
                                            + ((IData)(vlSelf->__VdfgTmp_h4b2d08f0__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+46,((1U & (((IData)(vlSelf->SW1) 
                                  >> 3U) + (((IData)(vlSelf->SW2) 
                                             >> 3U) 
                                            + ((IData)(vlSelf->__VdfgTmp_h48091d8f__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+47,((1U & (IData)(vlSelf->SW1))));
    bufp->chgBit(oldp+48,((1U & (IData)(vlSelf->SW2))));
    bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->SW1) 
                                 >> 1U))));
    bufp->chgBit(oldp+50,((1U & ((IData)(vlSelf->SW2) 
                                 >> 1U))));
    bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->SW1) 
                                 >> 2U))));
    bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->SW2) 
                                 >> 2U))));
    bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->SW1) 
                                 >> 3U))));
    bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->SW2) 
                                 >> 3U))));
    bufp->chgCData(oldp+55,((7U & (IData)(vlSelf->SW1))),3);
    bufp->chgCData(oldp+56,((7U & (IData)(vlSelf->SW2))),3);
    bufp->chgCData(oldp+57,((8U | (7U & ((IData)(1U) 
                                         + (~ (IData)(vlSelf->SW2)))))),4);
    bufp->chgCData(oldp+58,((0xfU & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->SW2))))),4);
    bufp->chgBit(oldp+59,((1U & ((IData)(1U) + ((IData)(vlSelf->SW1) 
                                                + (~ (IData)(vlSelf->SW2)))))));
    bufp->chgBit(oldp+60,((1U & (((IData)(vlSelf->SW1) 
                                  >> 1U) + ((7U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->SW2))) 
                                                   >> 1U)) 
                                            + ((IData)(vlSelf->__VdfgTmp_h26c8da6b__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+61,((1U & (((IData)(vlSelf->SW1) 
                                  >> 2U) + ((3U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->SW2))) 
                                                   >> 2U)) 
                                            + ((IData)(vlSelf->__VdfgTmp_h7f867a1a__0) 
                                               >> 1U))))));
    bufp->chgBit(oldp+62,((1U & ((IData)(1U) + (((IData)(vlSelf->SW1) 
                                                 >> 3U) 
                                                + ((IData)(vlSelf->__VdfgTmp_hd800e939__0) 
                                                   >> 1U))))));
    bufp->chgBit(oldp+63,((1U & ((IData)(1U) + (~ (IData)(vlSelf->SW2))))));
    bufp->chgBit(oldp+64,((1U & (((IData)(1U) + (~ (IData)(vlSelf->SW2))) 
                                 >> 1U))));
    bufp->chgBit(oldp+65,((1U & (((IData)(1U) + (~ (IData)(vlSelf->SW2))) 
                                 >> 2U))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
