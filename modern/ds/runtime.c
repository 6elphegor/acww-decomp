// Runtime support that GCC's code needs and mwcc's doesn't (modern build only, see docs/modern.md).
#include "types.h"

// Destructors of static objects: GCC registers them with atexit(). The game never exits (the DS powers off) and
// the original registered them on a chain it never ran (__register_global_object), so nothing is kept.
int atexit(void (*func)(void)) {
    (void)func;
    return 0;
}

// Called through the vtable slot of a pure virtual function (never, unless an object is used during its own
// construction or destruction)
void Fatal_Trap(void);
void __cxa_pure_virtual(void) {
    Fatal_Trap();
}
