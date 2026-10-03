// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_interrupt.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffa2ec-0x01ffa328: OS_DisableInterrupts, OS_DisableInterrupts_IrqAndFiq, OS_EnableInterrupts
// (mrs/msr on the CPSR; 0x80 = HW_PSR_IRQ_DISABLE, 0xc0 = HW_PSR_IRQ_FIQ_DISABLE).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// OS_DisableInterrupts: returns the previous IRQ-disable bit
asm u32 func_01ffa2ec(void)
{
    mrs r0, cpsr
    orr r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}

// OS_DisableInterrupts_IrqAndFiq
asm u32 func_01ffa300(void)
{
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}

// OS_EnableInterrupts
asm u32 func_01ffa314(void)
{
    mrs r0, cpsr
    bic r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
