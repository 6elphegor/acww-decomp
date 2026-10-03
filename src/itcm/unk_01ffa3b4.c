// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_system.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffa3b4-0x01ffa3cc: OS_GetProcMode (mrs cpsr), OS_Halt (mcr p15 c7,c0,4: wait for interrupt).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// OS_GetProcMode: CPSR mode bits (HW_PSR_CPU_MODE_MASK 0x1f)
asm u32 func_01ffa3b4(void)
{
    mrs r0, cpsr
    and r0, r0, #0x1f
    bx lr
}

// OS_Halt
asm void func_01ffa3c0(void)
{
    mov r0, #0
    mcr p15, 0, r0, c7, c0, 4
    bx lr
}
