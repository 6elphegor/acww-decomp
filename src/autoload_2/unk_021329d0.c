// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x021329d0-0x02132a04: _ffix (float -> s32)
#include "types.h"

// _ffix(float) -> s32, truncating; out of range saturates (`mvn r0, r0, asr #31; add r0, r0, #0x80000000`).
asm void _ffix(void)
{
    bic r1, r0, #0x80000000
    mov r2, #158
    subs r2, r2, r1, lsr #23
    ble L_021329f8
    mov r1, r1, lsl #8
    orr r1, r1, #0x80000000
    cmp r0, #0
    mov r0, r1, lsr r2
    rsbmi r0, r0, #0
    bx lr
L_021329f8:
    mvn r0, r0, asr #31
    add r0, r0, #0x80000000
    bx lr
}
