// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02133100-0x02133150: _ll_mul, _ll_shl (64-bit multiply and shift left)
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void _ll_mul(void);
asm void func_02133120(void);

// _ll_mul / _ull_mul(a r0:r1, b r2:r3) -> a * b mod 2^64: umull + two mla, `stmfd sp!, {r4, r5, lr}`.
asm void _ll_mul(void)
{
    stmfd sp!, {r4, r5, lr}
    umull r5, r4, r0, r2
    mla r4, r0, r3, r4
    mla r4, r2, r1, r4
    mov r1, r4
    mov r0, r5
    ldmfd sp!, {r4, r5, lr}
    bx lr
}

// _ll_shl(a r0:r1, n r2) -> a << (n & 63) (label _ll_shl).
asm void func_02133120(void)
{
    ands r2, r2, #63
    bxeq lr
    subs r3, r2, #32
    bge L_02133144
    rsb r3, r2, #32
    mov r1, r1, lsl r2
    orr r1, r1, r0, lsr r3
    mov r0, r0, lsl r2
    bx lr
L_02133144:
    mov r1, r0, lsl r3
    mov r0, #0
    bx lr
}
