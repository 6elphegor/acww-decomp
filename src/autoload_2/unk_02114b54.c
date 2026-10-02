// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_exception.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02114b54-0x02114bc8: OSi_ExceptionHandler, the exception entry (mrs cpsr, stmdb with sp in the
// register list, sp switched by hand). The code after the endless loop is unreachable in the original as well.
// 0x02000000 is a plain number in the original (no relocation): the exception stack top used for the saved frame.
#include "types.h"

extern void *data_021fce94;     // OSi_DebuggerHandler
void func_02114bc8(void);       // OSi_GetAndDisplayContext

// OSi_ExceptionHandler
asm void func_02114b54(void)
{
    ldr ip, =data_021fce94
    ldr ip, [ip, #0]
    cmp ip, #0
    movne lr, pc
    bxne ip
    ldr ip, =0x02000000
    stmdb ip!, {r0, r1, r2, r3, sp, lr}
    and r0, sp, #1
    mov sp, ip
    mrs r1, cpsr
    and r1, r1, #0x1f
    teq r1, #0x17
    bne not_abort
    bl func_02114bc8
    b done
not_abort:
    teq r1, #0x1b
    bne done
    bl func_02114bc8
done:
    ldr ip, =data_021fce94
    ldr ip, [ip, #0]
    cmp ip, #0
wait:
    beq wait
spin:
    mov r0, r0
    b spin
    ldmia sp!, {r0, r1, r2, r3, ip, lr}
    mov sp, ip
    bx lr
}
