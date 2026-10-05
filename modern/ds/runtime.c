// Runtime support that GCC's code needs and mwcc's doesn't (modern build only, see docs/modern.md).
#include "types.h"

// Destructors of static objects: GCC registers them with atexit(). The game never exits (the DS powers off) and
// the original registered them on a chain it never ran (__register_global_object), so nothing is kept.
int atexit(void (*func)(void)) {
    (void)func;
    return 0;
}
