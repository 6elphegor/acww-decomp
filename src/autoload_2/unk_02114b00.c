// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_tcm.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02114b00-0x02114b24: OS_EnableDTCM, OS_GetDTCMAddress (CP15 register access, mrc/mcr p15).
#include "types.h"

// OS_EnableDTCM: CP15 control register |= 0x10000 (DTCM enable)
asm void func_02114b00(void)
{
    mrc p15, 0, r0, c1, c0, 0
    orr r0, r0, #0x10000
    mcr p15, 0, r0, c1, c0, 0
    bx lr
}

// OS_GetDTCMAddress: CP15 DTCM region register & 0xfffff000 (OS_DTCM_SET_ADDR_MASK, kept in a literal pool)
asm u32 func_02114b10(void)
{
    mrc p15, 0, r0, c9, c1, 0
    ldr r1, =0xfffff000
    and r0, r0, r1
    bx lr
}
