// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_interrupt.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffa3d4-0x01ffa404: OS_RestoreInterrupts, OS_RestoreInterrupts_IrqAndFiq (mrs/msr on the CPSR).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// OS_RestoreInterrupts(state): sets the IRQ-disable bit to `state`, returns the previous one
asm u32 func_01ffa3d4(u32 state)
{
    mrs r1, cpsr
    bic r2, r1, #0x80
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0x80
    bx lr
}

// OS_RestoreInterrupts_IrqAndFiq(state)
asm u32 func_01ffa3ec(u32 state)
{
    mrs r1, cpsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}
