// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks semihosting console support): hand-written in the original; linked as assembly per
// the project's assembly policy (swi 0x123456 = ARM semihosting call; str lr / ldr pc frame).
// autoload_2 0x02133ccc-0x02133d04.
#include "types.h"

// SYS_WRITEC (3): write the character at *p to the debugger console
asm void func_02133ccc(const char *p)
{
    str lr, [sp, #-4]!
    mov r1, r0
    mov r0, #3
    swi 0x123456
    ldr pc, [sp], #4
}

// SYS_READC (7): read one character from the debugger console
asm int func_02133ce0(void)
{
    str lr, [sp, #-4]!
    mov r1, #0
    mov r0, #7
    swi 0x123456
    ldr pc, [sp], #4
}

// SYS_EXIT (0x18, angel_SWIreason_ReportException): end the program under the debugger
asm void func_02133cf4(void)
{
    mov r1, #0
    mov r0, #0x18
    swi 0x123456
    mov pc, lr
}
