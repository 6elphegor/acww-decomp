// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02131bf4-0x02131cf4: float compares: three-way compares, _fneq, _feq
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02131bf4(void);
asm void func_02131c3c(void);
asm void func_02131c7c(void);
asm void func_02131cb8(void);

// float compare, x in r0, y in r1: returns 0 equal, 1 less, 2 greater, 3 unordered (each operand tested for NaN
// separately). Sign-magnitude to two's complement with `bicmi; rsbmi`.
asm void func_02131bf4(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    movcc r0, #3
    bxcc lr
    cmp r3, r1, lsl #1
    movcc r0, #3
    bxcc lr
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    moveq r0, #0
    movlt r0, #1
    movgt r0, #2
    bx lr
}

// float compare, x in r0, y in r1: same result as func_02131bf4 (0/1/2/3), NaN tests chained with `cmpcs`.
asm void func_02131c3c(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmpcs r3, r1, lsl #1
    movcc r0, #3
    bxcc lr
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    moveq r0, #0
    movlt r0, #1
    movgt r0, #2
    bx lr
}

// float compare, x in r0, y in r1: x != y (_fneq; unordered -> 1, +0 == -0).
asm void func_02131c7c(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    movcc r0, #1
    bxcc lr
    cmp r3, r1, lsl #1
    movcc r0, #1
    bxcc lr
    orr r3, r0, r1
    movs r3, r3, lsl #1
    moveq r0, #0
    bxeq lr
    cmp r0, r1
    movne r0, #1
    moveq r0, #0
    bx lr
}

// float compare, x in r0, y in r1: x == y (_feq; unordered -> 0, +0 == -0).
asm void func_02131cb8(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    movcc r0, #0
    bxcc lr
    cmp r3, r1, lsl #1
    movcc r0, #0
    bxcc lr
    orr r3, r0, r1
    movs r3, r3, lsl #1
    moveq r0, #1
    bxeq lr
    cmp r0, r1
    moveq r0, #1
    movne r0, #0
    bx lr
}
