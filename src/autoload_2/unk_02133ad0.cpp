// mwcc-flags: -nothumb -O4,p -Cpp_exceptions on -char unsigned
// Metrowerks runtime / MSL support for the semihosting console (autoload_2 0x02133ad0-0x02133aec), C++ built with
// exceptions like the rest of the runtime: func_02133ae0 owns its .exceptix index entry in main (0x020c2bb0).
#include "types.h"

extern "C" void func_02133cf4(void);

// Program exit (called from MSL exit, 0x02127974): tail call to the semihosting SYS_EXIT wrapper func_02133cf4
extern "C" void func_02133ae0(void) {
    func_02133cf4();
}

// Constant query, returns 0x40000000 (semihosting-target stub; real name unknown)
extern "C" u32 func_02133ad8(void) {
    return 0x40000000;
}

// Constant query, returns 0 (semihosting-target stub; real name unknown)
extern "C" u32 func_02133ad0(void) {
    return 0;
}

