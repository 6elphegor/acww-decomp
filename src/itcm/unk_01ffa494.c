// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_system.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffa494-0x01ffa4a0: OS_SpinWait. No instruction a compiler cannot emit: it qualifies only as a routine
// known to be assembly in the public NitroSDK sources (os_system.c `asm void OS_SpinWait(u32 cycle)`).
#include "types.h"

// OS_SpinWait(cycle): busy loop, 4 cycles per iteration
asm void func_01ffa494(u32 cycle)
{
loop:
    subs r0, r0, #4
    bcs loop
    bx lr
}
