// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK math.c): hand-written in the original; linked as assembly per the project's assembly
// policy.
// autoload_2 0x0211565c-0x02115664: MATH_CountLeadingZerosFunc (clz).
#include "types.h"

// MATH_CountLeadingZeros(x)
asm u32 func_0211565c(u32 x)
{
    clz r0, r0
    bx lr
}
