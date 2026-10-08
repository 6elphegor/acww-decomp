// Runtime support that GCC's code needs and mwcc's doesn't (modern build only, see docs/modern.md).
#include "types.h"

// Destructors of static objects: GCC registers them with atexit(). The game never exits (the DS powers off) and
// the original registered them on a chain it never ran (__register_global_object), so nothing is kept. (This is
// ds_atexit: include/host_libc_rename.h; GCC's own calls for function-local statics come here too.)
int atexit(void (*func)(void)) {
    (void)func;
    return 0;
}

// (__cxa_pure_virtual, the vtable slot of a pure virtual function: the host's C++ library's, which aborts. Never
// called, unless an object is used during its own construction or destruction.)
