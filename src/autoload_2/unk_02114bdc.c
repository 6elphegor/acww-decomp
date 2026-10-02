// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_exception.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02114bdc-0x02114cd8: OSi_SetExContext (mrs/msr cpsr and spsr, mode switch to read the banked sp/lr)
// and OSi_DisplayExContext (msr cpsr to System mode with the stack pointer carried over by hand). In the SDK the
// second one is a C function around an inline `asm { mov r0, sp; ldr r1, =HW_PSR_SYS_MODE; msr cpsr_cxsf, r1;
// mov sp, r0 }` block; it is linked here as one asm function (it qualifies by its msr / sp switch).
// OSi_ExContext (data_021fce98) layout: cpsr 0x00, r[13] 0x04-0x34, sp 0x38, lr 0x3c, pc 0x40, ... exinfo 0x64,
// cp15 0x6c, spsr 0x70 (here: the exception stack pointer), exception cpsr 0x74, spsr 0x7c.
#include "types.h"

extern u8 data_021fce98[];      // OSi_ExContext
extern void *data_021fce8c;     // OSi_UserExceptionHandler
extern void *data_021fce90;     // OSi_UserExceptionArgument
void func_02114b24(void);       // OS_EnableProtectionUnit
void func_02114b34(void);       // OS_DisableProtectionUnit

// OSi_SetExContext: called from OSi_ExceptionHandler with r0 = (sp & 1), ip = exception stack frame
asm void func_02114bdc(void)
{
    ldr r1, =data_021fce98
    mrs r2, cpsr
    str r2, [r1, #0x74]
    str r0, [r1, #0x6c]
    ldr r0, [ip, #0]
    str r0, [r1, #4]
    ldr r0, [ip, #4]
    str r0, [r1, #8]
    ldr r0, [ip, #8]
    str r0, [r1, #12]
    ldr r0, [ip, #12]
    str r0, [r1, #16]
    ldr r2, [ip, #16]
    bic r2, r2, #1
    add r0, r1, #20
    stmia r0, {r4, r5, r6, r7, r8, r9, r10, r11}
    str ip, [r1, #0x70]
    ldr r0, [r2, #0]
    str r0, [r1, #0x64]
    ldr r3, [r2, #4]
    str r3, [r1, #0]
    ldr r0, [r2, #8]
    str r0, [r1, #0x34]
    ldr r0, [r2, #12]
    str r0, [r1, #0x40]
    mrs r0, cpsr
    orr r3, r3, #0x80
    bic r3, r3, #0x20
    msr cpsr_cxsf, r3
    str sp, [r1, #0x38]
    str lr, [r1, #0x3c]
    mrs r2, spsr
    str r2, [r1, #0x7c]
    msr cpsr_cxsf, r0
    bx lr
}

// OSi_DisplayExContext: if a user handler is set, switch to System mode (HW_PSR_SYS_MODE 0x9f, keeping sp) and
// call handler(&OSi_ExContext, OSi_UserExceptionArgument) with the protection unit enabled
asm void func_02114c6c(void)
{
    stmfd sp!, {lr}
    sub sp, sp, #4
    ldr r0, =data_021fce8c
    ldr r0, [r0, #0]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_cxsf, r1
    mov sp, r0
    bl func_02114b24
    ldr r1, =data_021fce90
    ldr r0, =data_021fce8c
    ldr r1, [r1, #0]
    ldr r2, [r0, #0]
    ldr r0, =data_021fce98
    blx r2
    bl func_02114b34
    add sp, sp, #4
    ldmfd sp!, {lr}
    bx lr
}
