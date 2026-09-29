#include "types.h"

extern "C" u32 func_02065ce0(void *self, u32 t);

extern "C" u32 func_020655d8(u8 *self) { return func_02065ce0(self + 4, 7); }
