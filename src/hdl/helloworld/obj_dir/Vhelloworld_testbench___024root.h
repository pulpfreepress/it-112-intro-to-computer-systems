// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhelloworld_testbench.h for the primary calling header

#ifndef VERILATED_VHELLOWORLD_TESTBENCH___024ROOT_H_
#define VERILATED_VHELLOWORLD_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhelloworld_testbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhelloworld_testbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ helloworld_testbench__DOT__in_a;
    CData/*0:0*/ helloworld_testbench__DOT__in_b;
    CData/*0:0*/ helloworld_testbench__DOT__in_c;
    CData/*0:0*/ helloworld_testbench__DOT__out_y;
    CData/*0:0*/ helloworld_testbench__DOT__dut__DOT____VdfgRegularize_hc27bac09_0_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhelloworld_testbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhelloworld_testbench___024root(Vhelloworld_testbench__Syms* symsp, const char* v__name);
    ~Vhelloworld_testbench___024root();
    VL_UNCOPYABLE(Vhelloworld_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
