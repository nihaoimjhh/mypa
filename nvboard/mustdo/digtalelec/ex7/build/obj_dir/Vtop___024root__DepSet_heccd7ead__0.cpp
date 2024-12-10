// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_h181586bb_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = 0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
            if ((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                  & (IData)(vlSelf->ps2_data)) & VL_REDXOR_32(
                                                              (0x1ffU 
                                                               & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                                  >> 1U))))) {
                vlSelf->outdata = (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                            >> 1U));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                vlSelf->top__DOT__my_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                    << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
        }
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vtableidx5 = vlSelf->outdata;
    vlSelf->top__DOT__my_ascii__DOT__ascii = Vtop__ConstPool__TABLE_h181586bb_0
        [__Vtableidx5];
}

extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_hbe312f20_0;
extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_h99f1c24f_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__count;
    __Vdly__count = 0;
    CData/*0:0*/ __Vdly__top__DOT__tep;
    __Vdly__top__DOT__tep = 0;
    // Body
    vlSelf->__Vdly__top__DOT__key_code = vlSelf->top__DOT__key_code;
    __Vdly__top__DOT__tep = vlSelf->top__DOT__tep;
    VL_WRITEF("state%x next_state%x\n",1,vlSelf->top__DOT__state,
              1,(IData)(vlSelf->top__DOT__next_state));
    vlSelf->__Vdly__top__DOT__state = vlSelf->top__DOT__state;
    __Vdly__count = vlSelf->count;
    if ((0xf0U == (IData)(vlSelf->top__DOT__key_code))) {
        __Vdly__top__DOT__tep = 1U;
    }
    if (vlSelf->top__DOT__tep) {
        __Vdly__top__DOT__tep = 0U;
    } else {
        vlSelf->__Vdly__top__DOT__key_code = vlSelf->outdata;
    }
    vlSelf->__Vdly__top__DOT__state = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->top__DOT__next_state));
    if (vlSelf->rst) {
        __Vdly__count = 0U;
    }
    __Vdly__count = (0xffU & (((IData)(vlSelf->top__DOT__state) 
                               & (~ (IData)(vlSelf->top__DOT__next_state)))
                               ? ((IData)(1U) + (IData)(vlSelf->count))
                               : (IData)(vlSelf->count)));
    vlSelf->top__DOT__tep = __Vdly__top__DOT__tep;
    vlSelf->count = __Vdly__count;
    __Vtableidx2 = vlSelf->count;
    vlSelf->count_high = Vtop__ConstPool__TABLE_hbe312f20_0
        [__Vtableidx2];
    vlSelf->count_low = Vtop__ConstPool__TABLE_h99f1c24f_0
        [__Vtableidx2];
}

extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h2b920d4a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__key_code) 
                     << 1U) | (IData)(vlSelf->top__DOT__state));
    vlSelf->top__DOT__next_state = Vtop__ConstPool__TABLE_h2b920d4a_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__key_code = vlSelf->__Vdly__top__DOT__key_code;
    vlSelf->top__DOT__state = vlSelf->__Vdly__top__DOT__state;
}

extern const VlUnpacked<CData/*6:0*/, 512> Vtop__ConstPool__TABLE_h074d707f_0;
extern const VlUnpacked<CData/*6:0*/, 512> Vtop__ConstPool__TABLE_hdb1b10aa_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->outdata) << 1U) 
                    | (IData)(vlSelf->top__DOT__state));
    vlSelf->key_code_high = Vtop__ConstPool__TABLE_h074d707f_0
        [__Vtableidx3];
    vlSelf->key_code_low = Vtop__ConstPool__TABLE_hdb1b10aa_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->top__DOT__my_ascii__DOT__ascii) 
                     << 1U) | (IData)(vlSelf->top__DOT__state));
    vlSelf->ascii_high = Vtop__ConstPool__TABLE_h074d707f_0
        [__Vtableidx4];
    vlSelf->ascii_low = Vtop__ConstPool__TABLE_hdb1b10aa_0
        [__Vtableidx4];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

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
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("/home/jinghanhui/pa0/digtalelec/ex7/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/jinghanhui/pa0/digtalelec/ex7/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
