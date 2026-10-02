// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK mi_swap.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02116188-0x02116190: MI_SwapWord (swp).
#include "types.h"

// MI_SwapWord(setData, destp): atomically exchanges *destp with setData, returns the old value
asm u32 func_02116188(u32 setData, volatile u32 *destp)
{
    swp r0, r0, [r1]
    bx lr
}
