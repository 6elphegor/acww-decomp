// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_protectionRegion.c): hand-written in the original; linked as assembly per the
// project's assembly policy.
// autoload_2 0x02114b44-0x02114b54: OS_SetProtectionRegion1, OS_SetProtectionRegion2 (mcr p15 c6).
#include "types.h"

// OS_SetProtectionRegion1(param): CP15 c6,c1 = protection region 1 base/size
asm void func_02114b44(u32 param)
{
    mcr p15, 0, r0, c6, c1, 0
    bx lr
}

// OS_SetProtectionRegion2(param): CP15 c6,c2 = protection region 2 base/size
asm void func_02114b4c(u32 param)
{
    mcr p15, 0, r0, c6, c2, 0
    bx lr
}
