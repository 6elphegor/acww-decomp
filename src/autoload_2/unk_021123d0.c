// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_spinLock.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x021123d0-0x02112458: OS_GetLockID, OS_ReleaseLockID. 0x027fffb0 is HW_LOCK_ID_FLAG_MAIN (shared
// main-memory lock-ID bitmap), a plain number in the original (no relocation).
#include "types.h"

// OS_GetLockID: finds a free lock ID with clz on the two 32-bit flag words; returns 0x40+n / 0x60+n or
// OS_LOCK_ID_ERROR (-3).
asm s32 func_021123d0(void)
{
    ldr r3, =0x027fffb0
    ldr r1, [r3, #0]
    clz r2, r1
    cmp r2, #32
    movne r0, #0x40
    bne found
    add r3, r3, #4
    ldr r1, [r3, #0]
    clz r2, r1
    cmp r2, #32
    ldr r0, =0xfffffffd
    bxeq lr
    mov r0, #0x60
found:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3, #0]
    bic r2, r2, r1
    str r2, [r3, #0]
    bx lr
}

// OS_ReleaseLockID(lockID): sets the ID's bit again (pl/mi predication on the 0x60 compare).
asm void func_02112428(u16 lockID)
{
    ldr r3, =0x027fffb0
    cmp r0, #0x60
    addpl r3, r3, #4
    subpl r0, r0, #0x60
    submi r0, r0, #0x40
    mov r1, #0x80000000
    mov r1, r1, lsr r0
    ldr r2, [r3, #0]
    orr r2, r2, r1
    str r2, [r3, #0]
    bx lr
}
