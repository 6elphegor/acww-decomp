// mwcc-flags: -nothumb -O4,p
// G013b: autoload_2 0x020fa398-0x020fa39c (1 function). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ name, nothing defined but the function.
// Empty texture-state callback of the particle manager (used when a resource has the "skip texture" bit; selected next to func_020fa39c).
#include "types.h"

extern "C" void func_020fa398(void *p) {}
