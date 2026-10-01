#include "types.h"

// TU113, last function: 0x0206d49c-0x0206d4a4. func_0206d470 before it is an assembly routine of the original
// (it pushes every register and CPSR) and stays delinked.

extern "C" void func_0206d470(void);

extern "C" void func_0206d49c(void) {
    func_0206d470();
}
