#include "types.h"

// TU113, last function: 0x0206d49c-0x0206d4a4. Fatal_SaveRegisters before it is an assembly routine of the original
// (it pushes every register and CPSR) and stays delinked.

extern "C" void Fatal_SaveRegisters(void);

extern "C" void Fatal_Trap(void) {
    Fatal_SaveRegisters();
}
