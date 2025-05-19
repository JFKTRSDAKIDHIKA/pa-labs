// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern "C" void simulation_exit();

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP\n"); );
    // Body
    simulation_exit();
}

extern "C" void get_register_values(const svLogicVecVal* rf);

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__get_register_values_TOP(VlUnpacked<IData/*31:0*/, 16> rf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__get_register_values_TOP\n"); );
    // Body
    svLogicVecVal rf__Vcvt[16];
    for (size_t rf__Vidx = 0; rf__Vidx < 16; ++rf__Vidx) VL_SET_SVLV_I(32, rf__Vcvt + 1 * rf__Vidx, (&rf[0])[rf__Vidx]);
    get_register_values(rf__Vcvt);
}

extern "C" void mrom_read(int raddr, int* rdata);

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void write_mem(int instance_id, int bank, int row, int col, int data, int mask);

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mem_TOP(IData/*31:0*/ instance_id, IData/*31:0*/ bank, IData/*31:0*/ row, IData/*31:0*/ col, IData/*31:0*/ data, IData/*31:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram_chip_0__DOT__write_mem_TOP\n"); );
    // Body
    int instance_id__Vcvt;
    for (size_t instance_id__Vidx = 0; instance_id__Vidx < 1; ++instance_id__Vidx) instance_id__Vcvt = instance_id;
    int bank__Vcvt;
    for (size_t bank__Vidx = 0; bank__Vidx < 1; ++bank__Vidx) bank__Vcvt = bank;
    int row__Vcvt;
    for (size_t row__Vidx = 0; row__Vidx < 1; ++row__Vidx) row__Vcvt = row;
    int col__Vcvt;
    for (size_t col__Vidx = 0; col__Vidx < 1; ++col__Vidx) col__Vcvt = col;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int mask__Vcvt;
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) mask__Vcvt = mask;
    write_mem(instance_id__Vcvt, bank__Vcvt, row__Vcvt, col__Vcvt, data__Vcvt, mask__Vcvt);
}

extern "C" int read_mem(int instance_id, int bank, int row, int col);

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram_chip_0__DOT__read_mem_TOP(IData/*31:0*/ instance_id, IData/*31:0*/ bank, IData/*31:0*/ row, IData/*31:0*/ col, IData/*31:0*/ &read_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram_chip_0__DOT__read_mem_TOP\n"); );
    // Body
    int instance_id__Vcvt;
    for (size_t instance_id__Vidx = 0; instance_id__Vidx < 1; ++instance_id__Vidx) instance_id__Vcvt = instance_id;
    int bank__Vcvt;
    for (size_t bank__Vidx = 0; bank__Vidx < 1; ++bank__Vidx) bank__Vcvt = bank;
    int row__Vcvt;
    for (size_t row__Vidx = 0; row__Vidx < 1; ++row__Vidx) row__Vcvt = row;
    int col__Vcvt;
    for (size_t col__Vidx = 0; col__Vidx < 1; ++col__Vidx) col__Vcvt = col;
    int read_mem__Vfuncrtn__Vcvt;
    read_mem__Vfuncrtn__Vcvt = read_mem(instance_id__Vcvt, bank__Vcvt, row__Vcvt, col__Vcvt);
    read_mem__Vfuncrtn = read_mem__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__bitrev__DOT__inactive__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSelfRef.clock)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__flash__DOT__reset__0 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__bitrev__DOT__inactive__0 
        = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr;
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         : 0U));
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
            = ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd) 
                         << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:54: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/perip/flash/flash.v", 54, "", false);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata
                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in 
        = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT___bitrev_miso 
        = vlSelfRef.ysyxSoCFull__DOT___bitrev_miso;
    if (vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__inactive) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT___bitrev_miso = 1U;
    } else if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state))))) {
        VL_WRITEF_NX("RX\n",0);
        Verilated::runFlushCallbacks();
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in 
            = ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                         << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter 
            = ((7U > (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter)))
                : 0U);
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state 
            = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state));
        VL_WRITEF_NX("mosi: %1#\n",0,1,vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi);
        Verilated::runFlushCallbacks();
    } else if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state))))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter 
            = ((7U > (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter)))
                : 0U);
        VL_WRITEF_NX("data: %b\n",0,8,vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in);
        Verilated::runFlushCallbacks();
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state 
            = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state));
        VL_WRITEF_NX("miso: %b\n",0,1,vlSelfRef.ysyxSoCFull__DOT___bitrev_miso);
        Verilated::runFlushCallbacks();
        vlSelfRef.__Vdly__ysyxSoCFull__DOT___bitrev_miso 
            = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                     >> 7U));
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in 
            = (0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in) 
                        << 1U));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state))))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state;
    } else {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state;
        VL_WRITEF_NX("Invalid state",0);
        Verilated::runFlushCallbacks();
        vlSelfRef.__Vdly__ysyxSoCFull__DOT___bitrev_miso = 1U;
        VL_WRITEF_NX("[%0t] %%Fatal: bitrev.v:57: Assertion failed in %NysyxSoCFull.bitrev\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/perip/bitrev/bitrev.v", 57, "", false);
    }
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data_in 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data_in;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    CData/*1:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<8>/*255:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<8>/*255:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_122;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((0x200U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid))) 
                                           << 9U)) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4433: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 4433, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4435: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 4435, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid)) 
                                   | (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                          : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast)))) 
                                  | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4439: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 4439, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4441: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 4441, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1757: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1759: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1759, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1763: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1765: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1765, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1769: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1771: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1771, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1775: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1777: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1777, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1781: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1783: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1783, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1787: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1789: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1789, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1793: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1795: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1795, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1799: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1801: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1801, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1805: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1805, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1807: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1807, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1811: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1811, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1813: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1813, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1817: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1817, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1819: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1819, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1823: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1823, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1825: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1825, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1829: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1829, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1831: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1831, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1835: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1837: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1837, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1841: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1843: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1843, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fffU & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                  >> 3U) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1847: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1849: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1849, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 4U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1853: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1855: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1855, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 4U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1859: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1861: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1861, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 4U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1865: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1867: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1867, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 4U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1871: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1873: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 5U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1877: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1879: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1879, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 5U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1883: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1885: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1885, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 5U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1889: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1891: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1891, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 5U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1895: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1897: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1897, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 6U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1901: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1903: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1903, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 6U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1907: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1909: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1909, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 6U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1913: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1915: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1915, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 6U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1919: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1921: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1921, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                 >> 7U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1925: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1925, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1927: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1927, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                 >> 7U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1931: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1931, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1933: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1933, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                 >> 7U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1937: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1937, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1939: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1939, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1ffU & ((((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                 >> 7U) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1943: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1943, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1945: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1945, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xffU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 8U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1949: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1949, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1951: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1951, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xffU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 8U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1955: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1957: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1957, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xffU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 8U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1961: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1961, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1963: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1963, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xffU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 8U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1967: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1969: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1969, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 9U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1973: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1973, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1975: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1975, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 9U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1979: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1979, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1981: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1981, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 9U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1985: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1985, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1987: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1987, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x7fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 9U) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1991: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1991, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1993: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1993, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 0xaU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1997: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1997, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1999: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 1999, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 0xaU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2003: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2003, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2005: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2005, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 0xaU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2009: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2009, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2011: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2011, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x3fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 0xaU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2015: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2015, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2017: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2017, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2021: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2021, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2023: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2023, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2027: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2027, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2029: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2029, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2033: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2033, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2035: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2035, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0x1fU & ((((IData)(1U) 
                                                 << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2039: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2039, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2041: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2041, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfU & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                               >> 0xcU) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2045: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2045, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2047: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2047, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfU & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                               >> 0xcU) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2051: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2051, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2053: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2053, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfU & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                               >> 0xcU) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2057: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2057, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2059: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2059, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (0xfU & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                               >> 0xcU) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2063: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2063, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2065: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2065, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (7U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                             >> 0xdU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2069: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2069, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2071: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2071, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (7U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 0xdU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2075: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2075, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2077: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2077, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (7U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xdU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2081: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2081, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2083: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2083, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (7U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 0xdU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2087: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2087, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2089: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2089, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (3U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                             >> 0xeU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2093: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2093, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2095: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2095, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (3U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 0xeU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2099: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2099, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2101: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2101, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (3U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                             >> 0xeU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2105: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2105, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2107: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2107, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (3U & ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 0xeU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2111: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2111, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2113: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2113, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                         >> 0xfU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2117: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2117, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2119: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2119, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xfU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2123: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2123, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2125: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2125, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                         >> 0xfU))) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2129: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2129, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2131: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2131, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xfU))) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2135: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2135, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2137: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2137, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2143: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2143, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2145: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2145, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2149: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2149, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2151: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2151, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2155: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2155, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2157: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2157, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2161: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2161, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2163: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2163, "", false);
    }
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                         & (0U == ((6U & (4U ^ (0x1eU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                   | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x18U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2977: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2977, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2979: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2979, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2983: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2983, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2985: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 2985, "", false);
    }
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid)) 
                      & (2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3351: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3351, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3353: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3353, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid)) 
                      & (2U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3357: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3357, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3359: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3359, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:592: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 592, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:594: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 594, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 598, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:600: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 600, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:606: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 606, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                                  | (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 610, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:612: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 612, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                               >> 1U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 616, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:618: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 618, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                               >> 1U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 628, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:630: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 630, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                               >> 2U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:642: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 642, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                               >> 2U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 652, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:654: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 654, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                               >> 3U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 664, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:666: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 666, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1fffU 
                                           & ((((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                               >> 3U) 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 676, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:678: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 678, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xfffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 4U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:690: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 690, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xfffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 4U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 700, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:702: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 702, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 5U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 712, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:714: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 714, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 5U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 724, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:726: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 726, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 6U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 736, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:738: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 738, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 6U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:750: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 750, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 7U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 760, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:762: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 762, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1ffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 7U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 772, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:774: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 774, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 8U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 784, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:786: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 786, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xffU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 8U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 796, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:798: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 798, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 9U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 808, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:810: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 810, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x7fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 9U) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 820, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:822: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 822, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 832, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:834: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 834, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x3fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 844, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:846: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 846, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 856, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:858: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 858, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0x1fU & 
                                           ((((IData)(1U) 
                                              << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 868, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:870: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 870, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xfU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                    >> 0xcU) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 880, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:882: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 882, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (0xfU & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                    >> 0xcU) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 892, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:894: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 894, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (7U & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                  >> 0xdU) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 904, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:906: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 906, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (7U & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                  >> 0xdU) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 916, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:918: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 918, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (3U & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                                  >> 0xeU) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 928, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:930: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 930, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ (3U & ((((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                                  >> 0xeU) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 940, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:942: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 942, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                              >> 0xfU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 952, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:954: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 954, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                              >> 0xfU))) 
                                       << 3U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 964, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:966: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 966, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 976, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:978: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 978, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:982: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 982, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:984: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 984, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:988: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 988, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:990: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 990, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:994: Assertion failed in %NysyxSoCFull.asic.axi4xbar: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 994, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:996: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 996, "", false);
    }
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0U;
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
               << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                           << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full) 
                                         << 0xcU))) 
            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                 << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                             << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full) 
                                           << 8U)))) 
           | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                 << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                           << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                       << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full) 
                                                 << 4U))) 
              | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                   << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
               << 0xfU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                           << 0xeU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full) 
                                         << 0xcU))) 
            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                 << 0xbU) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                             << 0xaU)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full) 
                                           << 8U)))) 
           | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                 << 7U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                           << 6U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                       << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full) 
                                                 << 4U))) 
              | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                   << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                             << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                         << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid)) 
                                  | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                     >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3757: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3759: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3759, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)) 
                                  | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3763: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3765: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 3765, "", false);
    }
    if (((8U <= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x15U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0xf0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                             [(3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))] 
                             << 4U)) | (((((3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                           | (0xcU 
                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)));
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(3U)));
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)
                                                  ? 
                                                 (~ 
                                                  (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                                        >> 1U)
                                                        : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                                                       + 
                                                       (7U 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 0xdU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (7U 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 0xdU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                                                       + 
                                                       (0xfU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 0xcU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xfU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 0xcU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                                                       + 
                                                       (0x1fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 0xbU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 0xbU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                                                       + 
                                                       (0x3fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 0xaU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                                                       + 
                                                       (0x7fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 9U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 9U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                                                       + 
                                                       (0xffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 8U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 8U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 7U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 7U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 6U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                                                       + 
                                                       (0xfffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 4U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xfffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 4U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                                                       + 
                                                       (0x7fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 1U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                                                       + 
                                                       (0x3fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 2U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 2U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 3U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 3U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 5U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 5U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                                                       + 
                                                       (3U 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                            >> 0xeU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1)))) 
                                                      - 
                                                      (3U 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                           >> 0xeU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                                           >> 0xfU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                                          >> 0xfU)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                                                       + 
                                                       (7U 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 0xdU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (7U 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 0xdU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                                                       + 
                                                       (0xfU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 0xcU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xfU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 0xcU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                                                       + 
                                                       (0x1fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 0xbU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 0xbU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                                                       + 
                                                       (0x3fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 0xaU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                                                       + 
                                                       (0x7fU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 9U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7fU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 9U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                                                       + 
                                                       (0xffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 8U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 8U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 7U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 7U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 6U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                                                       + 
                                                       (((IData)(1U) 
                                                         << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                                      - 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                                                       + 
                                                       (0x7fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 1U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                                                       + 
                                                       (0x3fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 2U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x3fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 2U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 3U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x1fffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 3U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                                                       + 
                                                       (0xfffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 4U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0xfffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 4U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 5U) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (0x7ffU 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 5U) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                                                       + 
                                                       (3U 
                                                        & ((((IData)(1U) 
                                                             << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                            >> 0xeU) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1)))) 
                                                      - 
                                                      (3U 
                                                       & ((((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                           >> 0xeU) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                                                       + 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                                        & (((IData)(1U) 
                                                            << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                                           >> 0xfU))) 
                                                      - 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                                       & (((IData)(1U) 
                                                           << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                                          >> 0xfU)))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 1U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
                        >> 8U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 2U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
                        >> 0x10U));
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb) 
            >> 3U))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
               >> 0x18U);
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid))) 
                                                   & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))) 
                                                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && (1U & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                          ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu))
                          : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu)))
                      : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                          ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid)) 
                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu))
                          : ((~ (((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid))) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu))))));
    if (((IData)(vlSelfRef.io_wb_wen_debug) & (0U != 
                                               (0xfU 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst 
                                                   >> 7U))))) {
        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = vlSelfRef.io_wb_data_debug;
        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = (0xfU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst 
                       >> 7U));
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0 = 1U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_20)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_18)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_16)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_14)));
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable) 
                  | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0 
            = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1 
            = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                        >> 8U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2 
            = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                        >> 0x10U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
               >> 0x18U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_21)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_19)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_17)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1 
        = ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))) 
           && ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_15)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1 
        = (0x7800U == (0x7fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                  >> 0xdU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                     >> 2U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr;
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr) 
               << 1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1 
        = (0x7800U == (0x7fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0xdU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 1U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 2U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                            >> 3U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 4U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 5U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 6U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                           >> 7U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 8U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 9U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 0xaU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                          >> 0xbU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                      & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                         >> 0xcU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                       >> 0xdU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                    & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                       >> 0xeU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
              >> 0xfU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 1U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 2U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                         & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                            >> 3U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (0xfffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 4U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (0x7ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 5U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (0x3ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 6U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (0x1ffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                           >> 7U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (0xffU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 8U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (0x7fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 9U))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (0x3fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 0xaU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (0x1fU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                       & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                          >> 0xbU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (0xfU & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                      & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                         >> 0xcU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (7U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                       >> 0xdU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (3U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                    & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                       >> 0xeU))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
              >> 0xfU));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
               + (0xffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len) 
                        - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr 
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst))
                    ? ((0x7fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                   | (0x7fffU 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                            >> 8U))))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_araddr)) 
                << 0xdU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arlen) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize) 
                                                << 2U) 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arburst))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData;
    ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    if (vlSelfRef.reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0xffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)
                    ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                    >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                   >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                  >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                                 >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                               >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count) 
                     - (3U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                     - (0x3fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                     - (0x7ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                     - (0xfffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                     - (0x1fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                     - (0x7fffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                    >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                     - (0x3ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                     - (0x1ffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                   >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count) 
                     - (0xffU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count) 
                     - (0x7fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count) 
                     - (0x3fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count) 
                     - (0x1fU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                  >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count) 
                     - (0xfU & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                                 >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count) 
                     - (7U & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                               >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1)) 
                     - (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state) 
                << 6U) | ((0x20U & ((~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid)))) 
                                    << 5U)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready)
                                                  ? 
                                                 (2U 
                                                  & ((~ 
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)) 
                                                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready) 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid)))) 
                                                     << 1U))
                                                  : 1U) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state), 1U))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                 >> 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                                >> 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                               >> 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                          & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                              >> 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                        & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                            >> 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                        & ((((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                            >> 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
                    >> 0xfU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 1U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 2U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                                >> 3U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 4U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 5U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 6U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                               >> 7U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (0xffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 8U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (0x7fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 9U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (0x3fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 0xaU)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (0x1fU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                              >> 0xbU)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (0xfU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                          & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                             >> 0xcU)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (7U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                           >> 0xdU)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                        & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                           >> 0xeU)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
                    >> 0xfU)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len));
        }
        if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid)) 
               | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo) 
                         - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid))));
    }
    if (ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
               + (0xffffU & ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1) 
                        - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr
                : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                    ? ((0x7fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                                                   | (0x7fffU 
                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                                         | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                            >> 8U))))))
                    : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awaddr)) 
                << 0xdU) | (QData)((IData)((1U | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize) 
                                                  << 2U)))));
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21) 
                  | (~ (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg = 0x30000000U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime = 0ULL;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count = 0ULL;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_0) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state), 1U))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg 
                = ((IData)(vlSelfRef.io_jump_mispredict_debug)
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target
                    : ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
            = (1ULL + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_6) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state), 1U))));
        if ((1U & (~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
                      | (~ ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
                            & (IData)(vlSelfRef.io_jump_mispredict_debug))))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count 
                = (1ULL + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count);
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wlast)))));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = ((0xffffff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = ((0xffff00ffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                  << 8U));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = ((0xff00ffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                  << 0x10U));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = ((0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                  << 0x18U));
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter = 0ULL;
    } else if ((1U & (~ ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter 
            = (1ULL + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state 
            = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))))
                ? (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_36 
                         >> (0x1fU & ((IData)(3U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))))
                : 0U);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_16) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 1U))));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen) 
             & (0x300U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus 
                = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U)))
                     ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))))) 
                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[
                      (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))));
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen)) 
                       | (0x300U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                      | (0x305U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec 
                = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U)))
                     ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))))) 
                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[
                      (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))));
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen)) 
                        | (0x300U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                       | (0x305U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                      | (0x341U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc 
                = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U)))
                     ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))))) 
                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[
                      (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))));
        }
        if ((1U & (~ (((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen)) 
                         | (0x300U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                        | (0x305U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                       | (0x341U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr))) 
                      | (0x342U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause 
                = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U)))
                     ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))))) 
                   | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[
                      (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd), 5U))));
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay 
                = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 1U;
            }
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_0) {
            if ((1U & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                            ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu))
                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1))
                        : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1))))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 2U;
            } else if ((1U & (~ (IData)(vlSelfRef.io_lsu_is_ld_or_st_debug)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 4U;
            }
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad) {
                if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_ready))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 3U;
                }
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore) {
                if ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                        & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN))) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 3U;
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 4U;
            }
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6) {
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)
                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_memory_r_valid)
                  : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)))))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_13) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state = 0U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state;
    vlSelfRef.io_wbu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state;
    vlSelfRef.io_idu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state;
    vlSelfRef.io_perf_jump_mispredict_count = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__perf_jump_mispredict_count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.io_icache_miss_count = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icacheMissCounter;
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_branch_taken 
            = vlSelfRef.io_idu_branch_taken_debug;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs1_data 
            = vlSelfRef.io_idu_rs1_data_debug;
        __Vtemp_82[0U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0xcU))) 
                                   << 0x2cU) | (QData)((IData)(vlSelfRef.io_idu_rs1_data_debug))));
        __Vtemp_82[1U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0xcU))) 
                                    << 0x2cU) | (QData)((IData)(vlSelfRef.io_idu_rs1_data_debug))) 
                                  >> 0x20U));
        __Vtemp_82[2U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0x800U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                >> 7U)))));
        __Vtemp_82[3U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x1fU))) 
                           << 0x14U) | ((0xff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst) 
                                        | ((0x800U 
                                            & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                 >> 0x14U)))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                              (((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                | ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                   | ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                      | (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                ? 0U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x67U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                     & ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                        | (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U)))
                 ? 0U : (__Vtemp_82[(((IData)(0x1fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               (((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                 | ((0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                    | ((0x23U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                       | (3U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                                 ? 0U
                                                                 : 
                                                                ((0x63U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 2U
                                                                  : 
                                                                 ((0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                   ? 3U
                                                                   : 
                                                                  ((0x67U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   & ((0x17U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | (0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, 
                                                                  (((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                    | ((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                       | ((0x23U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                          | (3U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x63U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                     ? 2U
                                                                     : 
                                                                    ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                      ? 3U
                                                                      : 
                                                                     ((0x67U 
                                                                       != 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      & ((0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                         | (0x37U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))) 
               | (__Vtemp_82[(3U & (VL_SHIFTL_III(7,7,32, 
                                                  (((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                    | ((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                          | (3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                    ? 0U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                      & ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 (((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   | ((0x33U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | ((0x23U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                         | (3U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x63U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                    ? 2U
                                                                    : 
                                                                   ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                     ? 3U
                                                                     : 
                                                                    ((0x67U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     & ((0x17U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                        | (0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))));
        __Vtemp_84[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc;
        __Vtemp_84[1U] = (((- (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                       >> 0x14U));
        __Vtemp_84[2U] = (IData)((((QData)((IData)(vlSelfRef.io_idu_rs2_data_debug)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((- (IData)(
                                                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                             >> 0x1fU))) 
                                                                 << 0xcU) 
                                                                | ((0xfe0U 
                                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                         >> 7U))))))));
        __Vtemp_84[3U] = (IData)(((((QData)((IData)(vlSelfRef.io_idu_rs2_data_debug)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                              >> 0x1fU))) 
                                                                  << 0xcU) 
                                                                 | ((0xfe0U 
                                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                                          >> 7U))))))) 
                                  >> 0x20U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                              ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                ? 1U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                     | ((~ 
                                                         ((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                        & (0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U)))
                 ? 0U : (__Vtemp_84[(((IData)(0x1fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               ((0x13U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                 ? 1U
                                                                 : 
                                                                ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                   ? 2U
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                   | ((~ 
                                                                       ((0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                        | (0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                      & (0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, 
                                                                  ((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                    ? 1U
                                                                    : 
                                                                   ((0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                     ? 3U
                                                                     : 
                                                                    ((0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                      ? 2U
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                      | ((~ 
                                                                          ((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                           | (0x6fU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                         & (0x67U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))))) 
               | (__Vtemp_84[(3U & (VL_SHIFTL_III(7,7,32, 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                      | ((~ 
                                                          ((0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                         & (0x67U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, 
                                                                 ((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                   ? 1U
                                                                   : 
                                                                  ((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                    ? 3U
                                                                    : 
                                                                   ((0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))
                                                                     ? 2U
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                     | ((~ 
                                                                         ((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                                                                          | (0x6fU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)))) 
                                                                        & (0x67U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst))))))), 5U))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_redirect_valid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
               >> 6U);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_4) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = 1U;
        }
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_5) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = 2U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_6) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state = 0U;
    }
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__get_register_values_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf);
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.io_wbu_reg_dmem_rdata_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata;
    __Vtemp_89[0U] = (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data 
                                         >> 7U)))) 
                       << 8U) | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data));
    __Vtemp_89[1U] = (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data 
                                         >> 0xfU)))) 
                       << 0x10U) | (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data));
    __Vtemp_89[2U] = (IData)((QData)((IData)(vlSelfRef.io_dmem_rdata_debug)));
    __Vtemp_89[3U] = (IData)(((QData)((IData)(vlSelfRef.io_dmem_rdata_debug)) 
                              >> 0x20U));
    __Vtemp_89[4U] = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data);
    __Vtemp_89[5U] = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__shifted_data);
    __Vtemp_89[6U] = 0U;
    __Vtemp_89[7U] = 0U;
    vlSelfRef.io_wbu_reg_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc;
    vlSelfRef.io_lsu_reg_dmem_addr_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data 
           << (0x18U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                        << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type 
        = (((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                    >> 0x1cU)) & (0x10001000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
            ? 0U : (((0xeffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                     & (0x10000000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                     ? 1U : (((0x2fffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                              & (0x40000000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                              ? 2U : (((0x10000fffU 
                                        < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                                       & (0x10002000U 
                                          > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))
                                       ? 3U : (((0x9fffffffU 
                                                 < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr) 
                                                & (3U 
                                                   != 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                    >> 0x1eU)))
                                                ? 5U
                                                : 6U)))));
    vlSelfRef.io_Arbiter_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_5 
        = ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_2 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.io_lsu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_2 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_6 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_13 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                               >> 0x2dU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                               >> 0x2dU))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 
        = (1U & ((((((0x8000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                                 << 0xfU)) | (0x4000U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                                 << 0xeU))) 
                    | ((0x2000U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                   << 0xdU)) | (0x1000U 
                                                & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                   << 0xcU)))) 
                   | (((0x800U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                  << 0xbU)) | (0x400U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                  << 0xaU))) 
                      | ((0x200U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                    << 9U)) | (0x100U 
                                               & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                  << 8U))))) 
                  | ((((0x80U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                 << 7U)) | (0x40U & 
                                            ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                             << 6U))) 
                      | ((0x20U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                   << 5U)) | (0x10U 
                                              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                 << 4U)))) 
                     | (((8U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                << 3U)) | (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                 << 2U))) 
                        | ((2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                  << 1U)) | (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.io_dmem_wdata_debug = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                      : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                          ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                          : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6
                                              : ((0U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_rs2_data
                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_6))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__delayedData 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4))
                     ? (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U)))
                          ? 0U : (__Vtemp_89[(((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))))) 
                        | (__Vtemp_89[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U) 
                                             >> 5U))] 
                           >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control), 5U))))
                     : vlSelfRef.io_dmem_rdata_debug));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8 
        = ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_7));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
               | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)))) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.io_exu_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_4 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_5 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_result 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs2_data 
            = vlSelfRef.io_idu_rs2_data_debug;
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending 
            = vlSelfRef.io_jump_mispredict_debug;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index 
            = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
                     >> 4U));
    }
    if (VL_UNLIKELY(((0x100073U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)))) {
        VL_WRITEF_NX("EBREAK: Simulation exiting...\n",0);
        Verilated::runFlushCallbacks();
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__ebreakHandler__DOT__simulation_exit_TOP();
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr 
            = (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr 
                = (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc);
        } else if ((1U & (~ ((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                               | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_29))) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)) 
                             | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr 
                = ((0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc) 
                   + ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___singleReadAddr_T) 
                      << 2U));
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_29)))))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM) {
                if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_last)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)));
                }
            } else if ((1U & (~ (IData)((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___singleReadAddr_T;
            }
        }
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
            = ((IData)(vlSelfRef.io_jump_mispredict_debug)
                ? 0x4033U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst);
    }
    vlSelfRef.io_wbu_reg_inst_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_2 
        = ((0x67U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
           | (0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3 
        = ((0x13U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
           | ((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
              | ((0x17U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                 | (0x37U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.io_lsu_reg_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc;
    __Vtemp_90[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                               << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))));
    __Vtemp_90[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                       << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_1)) 
                                              << 0x1aU) 
                                             | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_1))) 
                                            >> 0x20U)));
    __Vtemp_90[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1)))) 
                       >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                              << 0x1aU) 
                                             | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                                            >> 0x20U)) 
                                   << 0x14U));
    __Vtemp_90[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_1)) 
                                 << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_1))) 
                               >> 0x20U)) >> 0xcU);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1 
        = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1) 
               << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1) 
                         << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1) 
                                     << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1))) 
            >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
           & (((0x67U >= (0x7fU & ((IData)(0x1aU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                ? (0x3ffffffU & (((0U == (0x1fU & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                   ? 0U : (__Vtemp_90[
                                           (((IData)(0x19U) 
                                             + (0x7fU 
                                                & ((IData)(0x1aU) 
                                                   * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x1aU) 
                                                     * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                 | (__Vtemp_90[(3U 
                                                & (((IData)(0x1aU) 
                                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                   >> 5U))] 
                                    >> (0x1fU & ((IData)(0x1aU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                : 0U) == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15))) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelfRef.io_wb_wen_debug = (((0x73U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                        | ((3U == (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst)) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3))))) 
                                 & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_2) {
        vlSelfRef.io_wb_sel_debug = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 1U;
    } else if ((0x73U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 4U;
    } else if ((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 0U;
    } else if ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_inst))) {
        vlSelfRef.io_wb_sel_debug = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel = 3U;
    } else {
        vlSelfRef.io_wb_sel_debug = (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3), 1U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT____VdfgRegularize_h6880ea45_0_3) 
               << 1U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
               | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)))) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT___GEN_0 
        = (8U | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state) 
                  << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid)
                             ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_out_valid));
    vlSelfRef.io_wb_data_debug = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result
                                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_dmem_rdata
                                       : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_result
                                           : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_sel))
                                               ? ((IData)(4U) 
                                                  + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wbu_reg_pc)
                                               : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_ready 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___exu_io_out_valid));
    vlSelfRef.io_lsu_reg_inst_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)) 
            | (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)))
            ? 0U : (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                             >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control 
        = ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                         >> 0xcU))) ? 5U : ((1U == 
                                             (7U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                               >> 0xcU)))
                                             ? 1U : 
                                            ((4U == 
                                              (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                >> 0xcU)))
                                              ? 4U : 
                                             ((0U == 
                                               (7U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                   >> 0xcU)))
                                               ? 0U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst 
                                                       >> 0xcU))) 
                                                  << 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_15) 
              & (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
               ? (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))
               : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
                   ? (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))
                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                      & (3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc;
        __Vtemp_92[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0;
        __Vtemp_92[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1;
        __Vtemp_92[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2))));
        __Vtemp_92[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2))) 
                                  >> 0x20U));
        __Vtemp_95[0U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3)
                               ? 0x4033U : (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                                              ? 0U : 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                                            | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[
                                               (3U 
                                                & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))))
                           : 0U);
        __Vtemp_95[1U] = 0U;
        __Vtemp_95[2U] = 0U;
        __Vtemp_95[3U] = 0U;
        __Vtemp_95[4U] = 0U;
        if (((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20))) {
            __Vtemp_95[5U] = 0U;
            __Vtemp_95[6U] = 0U;
            __Vtemp_95[7U] = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3) {
            __Vtemp_95[5U] = 0x4033U;
            __Vtemp_95[6U] = 0x4033U;
            __Vtemp_95[7U] = 0x4033U;
        } else {
            __Vtemp_95[5U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                                ? 0U : (__Vtemp_92[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                              | (__Vtemp_92[(3U & (
                                                   VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
            __Vtemp_95[6U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                                ? 0U : (__Vtemp_92[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                              | (__Vtemp_92[(3U & (
                                                   VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
            __Vtemp_95[7U] = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U)))
                                ? 0U : (__Vtemp_92[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))))) 
                              | (__Vtemp_92[(3U & (
                                                   VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset), 5U))));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U)))
                 ? 0U : (__Vtemp_95[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))))) 
               | (__Vtemp_95[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state), 5U))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_wordOffset 
            = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
                     >> 2U));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__frontend__DOT__icache_frontend_reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
            ? 1U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                     ? 3U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control))
                              ? 0xfU : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_3) 
            | ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_4)))
            ? 2U : (((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)) 
                     | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)))
                     ? 1U : (2U & ((~ ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)) 
                                       | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__mem_access_control)))) 
                                   << 1U))));
    vlSelfRef.io_lsu_is_ld_or_st_debug = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isStore)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid 
        = ((~ ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
               | ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                  | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state))))) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__base_mask) 
                    << (3U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))
               ? (IData)(vlSelfRef.io_lsu_is_ld_or_st_debug)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_7)));
    vlSelfRef.io_lsu_memory_ar_size = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                        ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5 
        = ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_4) 
           | (((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
               & (3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state))) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_7)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_op_T_51 
        = (0x1fU & ((0x33U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))
                     ? ((0x27U >= (0x3fU & ((IData)(5U) 
                                            * (7U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                >> 0xcU)))))
                         ? (IData)(((((QData)((IData)(
                                                      (0x868U 
                                                       | (0x20U 
                                                          != 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                           >> 0x19U))))) 
                                      << 0x19U) | (QData)((IData)(
                                                                  (0x4314e0U 
                                                                   | (0x20U 
                                                                      == 
                                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                                       >> 0x19U)))))) 
                                    >> (0x3fU & ((IData)(5U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                     >> 0xcU))))))
                         : 0U) : ((0x13U == (0x7fU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))
                                   ? ((0x27U >= (0x3fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                        >> 0xcU)))))
                                       ? (IData)(((0x10d0000000ULL 
                                                   | (QData)((IData)(
                                                                     (0x4314e0U 
                                                                      | ((0x20U 
                                                                          != 
                                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                                           >> 0x19U)) 
                                                                         << 0x19U))))) 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                                                          >> 0xcU))))))
                                       : 0U) : (((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                 | ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                       | (0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)))))
                                                 ? 0U
                                                 : 0xfU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable 
        = (IData)((0x100fU == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2 
        = (IData)((0x73U == (0x707fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
            | (0x23U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)))
            ? 0U : (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                             >> 7U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                     ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op 
        = (((0x63U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
            | ((0x67U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
               | (0x6fU == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst))))
            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_op_T_51));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2) 
           & (0x302U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                         >> 0x14U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_1_2) 
           & (0U == (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                     >> 0x14U)));
    __Vtemp_97[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_3;
    __Vtemp_97[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_3;
    __Vtemp_97[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3))));
    __Vtemp_97[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_3)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_3))) 
                              >> 0x20U));
    __Vtemp_99[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_2;
    __Vtemp_99[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_2;
    __Vtemp_99[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2))));
    __Vtemp_99[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_2)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_2))) 
                              >> 0x20U));
    __Vtemp_101[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_1;
    __Vtemp_101[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_1;
    __Vtemp_101[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1))));
    __Vtemp_101[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_1)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_1))) 
                               >> 0x20U));
    __Vtemp_102[1U] = (IData)((((QData)((IData)((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_97[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                 | (__Vtemp_97[
                                                    (3U 
                                                     & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                               ? 0U
                                                               : 
                                                              (__Vtemp_99[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x7fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                             | (__Vtemp_99[
                                                                (3U 
                                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))));
    __Vtemp_102[2U] = (IData)(((((QData)((IData)(((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_97[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                  | (__Vtemp_97[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                                ? 0U
                                                                : 
                                                               (__Vtemp_99[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                              | (__Vtemp_99[
                                                                 (3U 
                                                                  & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))) 
                               >> 0x20U));
    __Vtemp_104[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_1_0;
    __Vtemp_104[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_1_0;
    __Vtemp_104[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0))));
    __Vtemp_104[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_1_0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_1_0))) 
                               >> 0x20U));
    __Vtemp_107[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_3;
    __Vtemp_107[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_3;
    __Vtemp_107[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3))));
    __Vtemp_107[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_3)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_3))) 
                               >> 0x20U));
    __Vtemp_109[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_2;
    __Vtemp_109[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_2;
    __Vtemp_109[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2))));
    __Vtemp_109[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_2)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_2))) 
                               >> 0x20U));
    __Vtemp_111[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_1;
    __Vtemp_111[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_1;
    __Vtemp_111[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1))));
    __Vtemp_111[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_1)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_1))) 
                               >> 0x20U));
    __Vtemp_112[1U] = (IData)((((QData)((IData)((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_107[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                 | (__Vtemp_107[
                                                    (3U 
                                                     & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                               ? 0U
                                                               : 
                                                              (__Vtemp_109[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x7fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                                >> 5U)] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                             | (__Vtemp_109[
                                                                (3U 
                                                                 & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                    >> 5U))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))));
    __Vtemp_112[2U] = (IData)(((((QData)((IData)(((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_107[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                  | (__Vtemp_107[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                                                                ? 0U
                                                                : 
                                                               (__Vtemp_109[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
                                                              | (__Vtemp_109[
                                                                 (3U 
                                                                  & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))))) 
                               >> 0x20U));
    __Vtemp_114[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_0_0_0;
    __Vtemp_114[1U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_1_0_0;
    __Vtemp_114[2U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0))));
    __Vtemp_114[3U] = (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_3_0_0)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__dataArray_2_0_0))) 
                               >> 0x20U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[0U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_104[(((IData)(0x1fU) 
                                       + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_104[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[1U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_101[(((IData)(0x1fU) 
                                       + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_101[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[2U] 
            = __Vtemp_102[1U];
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[3U] 
            = __Vtemp_102[2U];
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[0U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_114[(((IData)(0x1fU) 
                                       + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_114[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[1U] 
            = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U)))
                 ? 0U : (__Vtemp_111[(((IData)(0x1fU) 
                                       + (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))))) 
               | (__Vtemp_111[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index), 5U))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[2U] 
            = __Vtemp_112[1U];
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_8[3U] 
            = __Vtemp_112[2U];
    }
    __Vtemp_116[0U] = (IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                                << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))));
    __Vtemp_116[1U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                  << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                        << 0x14U) | (IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_1_0)) 
                                               << 0x1aU) 
                                              | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_0_0))) 
                                             >> 0x20U)));
    __Vtemp_116[2U] = (((IData)((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                  << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0)))) 
                        >> 0xcU) | ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                               << 0x1aU) 
                                              | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp_116[3U] = ((IData)(((((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_3_0)) 
                                  << 0x1aU) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__tagArray_2_0))) 
                                >> 0x20U)) >> 0xcU);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0))) 
             >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
            & (((0x67U >= (0x7fU & ((IData)(0x1aU) 
                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                 ? (0x3ffffffU & (((0U == (0x1fU & 
                                           ((IData)(0x1aU) 
                                            * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))
                                    ? 0U : (__Vtemp_116[
                                            (((IData)(0x19U) 
                                              + (0x7fU 
                                                 & ((IData)(0x1aU) 
                                                    * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)))))) 
                                  | (__Vtemp_116[(3U 
                                                  & (((IData)(0x1aU) 
                                                      * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index)) 
                                                     >> 5U))] 
                                     >> (0x1fU & ((IData)(0x1aU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))))))
                 : 0U) == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hits_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1
            : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1, 
                                 (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                       >> (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                    : ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                           << (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2))
                        : ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                               < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                            : ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                ? VL_LTS_III(32, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                    ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                       ^ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                    : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                        ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                           | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                        : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                            : ((1U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                                ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                                   - vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op1 
                                                    + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__alu_op2)
                                                    : 0U)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_waddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall)
            ? 0x341U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                        >> 0x14U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_wen 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_cmd 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret)
            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall)
                     ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrs)
                              ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csrrw))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_csr_read) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_rs1_data;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst 
                         >> 0x14U));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & 0x305U);
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr 
            = (0xfffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret)
                          ? 0x341U : 0U));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ecall) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_mret));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0xfU))) & ((0x1fU & 
                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0x14U))) & ((0x1fU & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                             >> 0x14U)) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_lsu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0xfU))) & ((0x1fU & 
                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu 
        = ((0U != (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                            >> 0x14U))) & ((0x1fU & 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                             >> 0x14U)) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_io_wb_addr_exu)));
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17) 
                  | (~ (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid)) 
                        & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17) 
                  | (~ (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid)) 
                        & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17) 
                  | (~ (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid)) 
                        & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data;
    }
    if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17) 
                  | (~ (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_valid)) 
                        & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)))))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__blockBuffer_3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_memory_r_data;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_0[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_1[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[1U] 
        = (IData)((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                     | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[2U] 
        = (IData)(((((QData)((IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata 
                                      | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata))) 
                   >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT___GEN_2[3U] 
        = ((~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_wdata) 
           & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata 
        = ((0xf12U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
            ? 0x1700ac9U : ((0xf11U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                             ? 0x79737978U : ((0x342U 
                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                               ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mcause
                                               : ((0x341U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mtvec
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_raddr))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_file__DOT__mstatus
                                                     : 0U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard 
        = ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable)
            ? ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___csr_file_io_csr_rdata
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT___alu_instance_io_result));
    vlSelfRef.io_idu_rs1_data_debug = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_exu)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs1_conflict_lsu)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                               [(0xfU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0xfU))])));
    vlSelfRef.io_idu_rs2_data_debug = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard) 
                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu))
                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                        : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_exu)
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__exuResultReg
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__rs2_conflict_lsu)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__lsuResultReg
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__rf
                                               [(0xfU 
                                                 & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                    >> 0x14U))])));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___singleReadAddr_T 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__burstCnt)));
    vlSelfRef.io_icache_state_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.io_jump_mispredict_debug = ((((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                               | (((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_inst)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_branch_taken)) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_exception_flow)))) 
                                           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ifu_io_redirect_target 
                                              != ((IData)(4U) 
                                                  + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc))) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_fenceIEnable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt 
        = VL_LTS_III(32, vlSelfRef.io_idu_rs1_data_debug, vlSelfRef.io_idu_rs2_data_debug);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu 
        = (vlSelfRef.io_idu_rs1_data_debug < vlSelfRef.io_idu_rs2_data_debug);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq 
        = (vlSelfRef.io_idu_rs1_data_debug == vlSelfRef.io_idu_rs2_data_debug);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_16) 
           | ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
              | (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14 
        = ((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT____VdfgRegularize_h7011880f_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__redirect_pending) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_redirect_valid) 
              | (IData)(vlSelfRef.io_jump_mispredict_debug)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst)) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM 
        = ((0x9fffffffU < (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)) 
           & (3U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc 
                     >> 0x1eU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.io_idu_branch_taken_debug = (1U & (((
                                                   ((0x80U 
                                                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu)) 
                                                        << 7U)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_ltu) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt)) 
                                                          << 5U)) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_lt) 
                                                         << 4U))) 
                                                  | ((0xcU 
                                                      & ((- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__br_eq)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___io_out_bits_branch_taken_T_4)))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__idu_reg_inst 
                                                     >> 0xcU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20)) 
               & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT___frontend_io_out_ready 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__hit))
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_20)) 
               & ((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__io_in_ready_0))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT___GEN_6 
        = (8U | ((((((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__io_in_ready_0))
                     ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                   << 6U) | ((((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state)) 
                               & ((3U == (0x7fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_inst)) 
                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exu_reg_pc 
                                     == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_pc)))
                               ? 3U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)) 
                             << 4U)) | ((4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__load_use_hazard)) 
                                               << 2U)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_out_valid)
                                            ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__state)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12 = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid) 
               << 1U);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0 = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23 
        = ((5U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_21)) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    __Vtemp_122[0U] = 0U;
    __Vtemp_122[1U] = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_14)
                        ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__isSDRAM)
                                 ? (0xfffffff0U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_pc)
                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__singleReadAddr));
    __Vtemp_122[2U] = (IData)((QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                                ? 0U
                                                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))));
    __Vtemp_122[3U] = (IData)(((QData)((IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_8)
                                                 ? 0U
                                                 : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr))) 
                               >> 0x20U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U)))
             ? 0U : (__Vtemp_122[(((IData)(0x1fU) + 
                                   (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))))) 
           | (__Vtemp_122[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state), 5U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_16 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state) 
             << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_io_arbiter_valid)
                         ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ICache_io_arbiter_valid)) 
                       << 4U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12) 
                                   << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_0)
                                              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__last_granted_lsu)
                                                  ? 1U
                                                  : 2U)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_12))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24 = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_25 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_tag;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_23)) 
              & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__icache_core_reg_index))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__replaceWay));
    vlSelfRef.io_pc_debug = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_reg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN 
        = (((0U != ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                     ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                              ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                      >> 0x19U)))) 
            & (0x200ffffU > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_aw_addr)) 
           | ((0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                      >> 0x19U)) & (0x200ffffU > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_24)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = 2U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_ar_addr = 0U;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize = 2U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_5)
                    ? 0U : (0xfU & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                     : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                         : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT__rw_address_type))
                                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__UnifiedMemoryController__DOT____VdfgRegularize_h08368bad_0_7)
                                             : 1U)))));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize 
                = vlSelfRef.io_lsu_memory_ar_size;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arsize)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                     ? 2U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                              ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___UnifiedMemoryController_io_dmem_rw_size))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awsize)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                  ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_17)) 
                     & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                  : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_6) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                       >> 0x1fU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
              & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                  ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_13)) 
                     & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__state)))
                  : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__isLoad))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11 
        = (0xfU & (0xaU ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                            ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                                    >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)) 
                       & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)) 
                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                             >> 0x1fU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 
        = (0xfU & (0xaU ^ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                            ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                     ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                              ? 0U : 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                              >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT____VdfgRegularize_h1b092a3a_0_3) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_5) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT____VdfgRegularize_hc9d39ebe_0_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___metadata_io_write_way));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_20 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_12)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_21 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_13)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_3_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                    ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 1U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wstrb)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0) 
           | (0U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_0) 
                      << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                 ? 0U : (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_ar_addr 
                                               >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0) 
           | (0U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_0) 
                      << 2U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
                                 ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN_8)
                                          ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT___GEN_9)
                                                   ? 0U
                                                   : 
                                                  (3U 
                                                   & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_reg_dmem_addr 
                                                      >> 0x1cU))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelfRef.reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_14 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_15 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_5)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_16 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_7)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_17 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_8)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_1_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_18 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_10)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_19 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT___GEN_11)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT___GEN_22)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__core__DOT__metadata__DOT__validArray_2_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
               << 0xfU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                           << 0xeU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                                         << 0xdU) | 
                                        ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                                         << 0xcU))) 
            | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                 << 0xbU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                             << 0xaU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                                           << 9U) | 
                                          ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                                           << 8U)))) 
           | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                 << 7U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                           << 6U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                        & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                                       << 5U) | (((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                                                 << 4U))) 
              | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                    & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                   << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                             << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                                         << 1U) | (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                   & (7U 
                                                      != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
               << 0xfU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                           << 0xeU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                         << 0xdU) | 
                                        ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                         << 0xcU))) 
            | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                 << 0xbU) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                             << 0xaU)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                           << 9U) | 
                                          ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                           << 8U)))) 
           | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                  & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                 << 7U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                            & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                           << 6U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                        & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                       << 5U) | (((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                  & (7U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                 << 4U))) 
              | ((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                    & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                   << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                              & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                             << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (7U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                         << 1U) | (
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                   & (7U 
                                                      != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1 
        = (1U & (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
}
