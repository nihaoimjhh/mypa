// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090003_cpu__Syms.h"


VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_init_sub__TOP__0(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+62,"cpu_clk", false,-1);
    tracep->declBit(c+63,"cpu_rs", false,-1);
    tracep->declBus(c+64,"addr_read_data", false,-1, 31,0);
    tracep->declBus(c+65,"npc", false,-1, 31,0);
    tracep->declBus(c+66,"addr_write_data", false,-1, 31,0);
    tracep->declBus(c+67,"EXaddr", false,-1, 31,0);
    tracep->declBit(c+68,"addr_write_enable", false,-1);
    tracep->pushNamePrefix("ysyx_24090003_cpu ");
    tracep->declBit(c+62,"cpu_clk", false,-1);
    tracep->declBit(c+63,"cpu_rs", false,-1);
    tracep->declBus(c+64,"addr_read_data", false,-1, 31,0);
    tracep->declBus(c+65,"npc", false,-1, 31,0);
    tracep->declBus(c+66,"addr_write_data", false,-1, 31,0);
    tracep->declBus(c+67,"EXaddr", false,-1, 31,0);
    tracep->declBit(c+68,"addr_write_enable", false,-1);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"rd", false,-1, 4,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"funct", false,-1, 2,0);
    tracep->declBus(c+1,"reg_write_data", false,-1, 31,0);
    tracep->declBit(c+2,"reg_write_enable", false,-1);
    tracep->declBit(c+3,"npc_write_enable", false,-1);
    tracep->declBit(c+4,"spc_write_enable", false,-1);
    tracep->declBus(c+40,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+41,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+5,"EXnpc", false,-1, 31,0);
    tracep->declBus(c+6,"EXspc", false,-1, 31,0);
    tracep->declBus(c+7,"EXrd", false,-1, 4,0);
    tracep->declBus(c+52,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24090003_EXU ");
    tracep->declBit(c+62,"cpu_clk", false,-1);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+52,"pc", false,-1, 31,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"funct", false,-1, 2,0);
    tracep->declBus(c+49,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+41,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+5,"EXnpc", false,-1, 31,0);
    tracep->declBus(c+6,"EXspc", false,-1, 31,0);
    tracep->declBus(c+67,"EXaddr", false,-1, 31,0);
    tracep->declBus(c+66,"addr_write_data", false,-1, 31,0);
    tracep->declBus(c+1,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+7,"EXrd", false,-1, 4,0);
    tracep->declBit(c+2,"reg_write_enable", false,-1);
    tracep->declBit(c+68,"addr_write_enable", false,-1);
    tracep->declBit(c+3,"npc_write_enable", false,-1);
    tracep->declBit(c+4,"spc_write_enable", false,-1);
    tracep->declBus(c+42,"operand1_r", false,-1, 31,0);
    tracep->declBus(c+53,"operand2_r", false,-1, 31,0);
    tracep->declBus(c+42,"operand1", false,-1, 31,0);
    tracep->declBus(c+53,"operand2", false,-1, 31,0);
    tracep->declBus(c+70,"addr_write_data_r", false,-1, 31,0);
    tracep->declBus(c+43,"reg_write_data_r", false,-1, 31,0);
    tracep->declBus(c+54,"alu_control", false,-1, 2,0);
    tracep->declBit(c+55,"reg_write_data_enable_r", false,-1);
    tracep->declBit(c+71,"addr_write_data_enable_r", false,-1);
    tracep->declBit(c+71,"npc_write_enable_r", false,-1);
    tracep->declBit(c+71,"spc_write_enable_r", false,-1);
    tracep->declBus(c+52,"EXnpc_r", false,-1, 31,0);
    tracep->declBus(c+52,"EXspc_r", false,-1, 31,0);
    tracep->declBus(c+56,"EXrd_r", false,-1, 4,0);
    tracep->declBus(c+70,"EXaddr_r", false,-1, 31,0);
    tracep->declBus(c+44,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24090003_alu ");
    tracep->declBus(c+42,"operand1", false,-1, 31,0);
    tracep->declBus(c+53,"operand2", false,-1, 31,0);
    tracep->declBus(c+54,"alu_control", false,-1, 2,0);
    tracep->declBus(c+44,"result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_24090003_IDU ");
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"rd", false,-1, 4,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"funct", false,-1, 2,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24090003_immT ");
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+45,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"Itype", false,-1, 2,0);
    tracep->declBus(c+45,"immI", false,-1, 31,0);
    tracep->declBus(c+57,"immS", false,-1, 31,0);
    tracep->declBus(c+58,"immB", false,-1, 31,0);
    tracep->declBus(c+59,"immU", false,-1, 31,0);
    tracep->declBus(c+60,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24090003_instType ");
    tracep->declBus(c+50,"inst", false,-1, 6,0);
    tracep->declBus(c+72,"Itype", false,-1, 2,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_24090003_IFU ");
    tracep->declBit(c+62,"cpu_clk", false,-1);
    tracep->declBit(c+63,"cpu_rs", false,-1);
    tracep->declBus(c+64,"addr_read_data", false,-1, 31,0);
    tracep->declBus(c+5,"EXnpc", false,-1, 31,0);
    tracep->declBus(c+6,"EXspc", false,-1, 31,0);
    tracep->declBit(c+3,"npc_write_enable", false,-1);
    tracep->declBit(c+4,"spc_write_enable", false,-1);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+65,"npc", false,-1, 31,0);
    tracep->declBus(c+52,"pc", false,-1, 31,0);
    tracep->declBus(c+52,"pc_r", false,-1, 31,0);
    tracep->declBus(c+61,"npc_r", false,-1, 31,0);
    tracep->declBus(c+69,"spc_r", false,-1, 31,0);
    tracep->declBus(c+46,"inst_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_24090003_regcontrol ");
    tracep->declBit(c+62,"cpu_clk", false,-1);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"EXrd", false,-1, 4,0);
    tracep->declBit(c+2,"reg_write_enable", false,-1);
    tracep->declBus(c+1,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+40,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+41,"reg_read_data2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_init_top(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_init_top\n"); );
    // Body
    Vysyx_24090003_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090003_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090003_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_register(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24090003_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24090003_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24090003_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_full_sub_0(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24090003_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090003_cpu___024root*>(voidSelf);
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24090003_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24090003_cpu___024root__trace_full_sub_0(Vysyx_24090003_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24090003_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090003_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24090003_cpu__DOT__reg_write_data),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_24090003_cpu__DOT__reg_write_enable));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_24090003_cpu__DOT__npc_write_enable));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_24090003_cpu__DOT__spc_write_enable));
    bufp->fullIData(oldp+5,(vlSelf->ysyx_24090003_cpu__DOT__EXnpc),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_24090003_cpu__DOT__EXspc),32);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24090003_cpu__DOT__EXrd),5);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[16]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[17]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[18]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[19]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[20]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[21]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[22]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[23]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[24]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[25]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[26]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[27]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[28]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[29]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[30]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers[31]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                             [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                             [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+42,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                               ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xcU)))
                                   ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                  [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                             >> 0xfU))]
                                   : 0U) : 0U)),32);
    bufp->fullIData(oldp+43,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                               ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xcU)))
                                   ? ((0U == (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control))
                                       ? (((0x13U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                    >> 0xcU)))
                                                ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                               [(0x1fU 
                                                 & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                    >> 0xfU))]
                                                : 0U)
                                            : 0U) + 
                                          ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                    >> 0xcU)))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                      >> 0x14U))
                                                : 0U)
                                            : 0U)) : 0U)
                                   : 0U) : 0U)),32);
    bufp->fullIData(oldp+44,(((0U == (IData)(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control))
                               ? (((0x13U == (0x7fU 
                                              & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                    ? ((0U == (7U & 
                                               (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xcU)))
                                        ? vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_regcontrol__DOT__registers
                                       [(0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                  >> 0xfU))]
                                        : 0U) : 0U) 
                                  + ((0x13U == (0x7fU 
                                                & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                                      ? ((0U == (7U 
                                                 & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0x14U))
                                          : 0U) : 0U))
                               : 0U)),32);
    bufp->fullIData(oldp+45,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r),32);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                       >> 7U))),5);
    bufp->fullCData(oldp+50,((0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)),7);
    bufp->fullCData(oldp+51,((7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__pc_r),32);
    bufp->fullIData(oldp+53,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                               ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xcU)))
                                   ? (((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 0x14U))
                                   : 0U) : 0U)),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__alu_control),3);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_EXU__DOT__reg_write_data_enable_r));
    bufp->fullCData(oldp+56,(((0x13U == (0x7fU & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r))
                               ? ((0U == (7U & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                >> 0xcU)))
                                   ? (0x1fU & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                               >> 7U))
                                   : 0U) : 0U)),5);
    bufp->fullIData(oldp+57,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+59,((0xfffff000U & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r)),32);
    bufp->fullIData(oldp+60,((((- (IData)((vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__inst_r 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__npc_r),32);
    bufp->fullBit(oldp+62,(vlSelf->cpu_clk));
    bufp->fullBit(oldp+63,(vlSelf->cpu_rs));
    bufp->fullIData(oldp+64,(vlSelf->addr_read_data),32);
    bufp->fullIData(oldp+65,(vlSelf->npc),32);
    bufp->fullIData(oldp+66,(vlSelf->addr_write_data),32);
    bufp->fullIData(oldp+67,(vlSelf->EXaddr),32);
    bufp->fullBit(oldp+68,(vlSelf->addr_write_enable));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24090003_cpu__DOT__ysyx_24090003_IFU__DOT__spc_r),32);
    bufp->fullIData(oldp+70,(0U),32);
    bufp->fullBit(oldp+71,(0U));
    bufp->fullCData(oldp+72,(1U),3);
}
