#include "types.h"

// The empty function at 0x020b8d98. It is not part of the file that starts at 0x020b8d9c (U234): that file's
// first code is the implicit destructor pair of SkyProc, which mwcc emits at the very start of a file's text.
extern "C" void func_020b8d98(void) {}
