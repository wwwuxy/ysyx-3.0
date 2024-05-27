// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecode24t__Syms.h"
#include "Vdecode24t.h"
#include "Vdecode24t___024root.h"

// FUNCTIONS
Vdecode24t__Syms::~Vdecode24t__Syms()
{
}

Vdecode24t__Syms::Vdecode24t__Syms(VerilatedContext* contextp, const char* namep, Vdecode24t* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
