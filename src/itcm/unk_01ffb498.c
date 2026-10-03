// mwcc-flags: -O4,p
// Original assembly (NitroSDK fx_mtx33.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffb498-0x01ffb4e8: MTX_RotX33_, MTX_RotY33_, MTX_RotZ33_ (Thumb `asm` routines of fx_mtx33.c, code16:
// `stmia r0!` stores, constants built in fixed registers, stores in hand-picked order).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// MTX_RotX33_(pDst, sinVal, cosVal)
asm void func_01ffb498(void *pDst, s32 sinVal, s32 cosVal)
{
    mov r3, #1
    lsl r3, r3, #12
    str r3, [r0, #0]
    mov r3, #0
    str r3, [r0, #4]
    str r3, [r0, #8]
    str r3, [r0, #12]
    str r2, [r0, #16]
    str r1, [r0, #20]
    str r3, [r0, #24]
    neg r1, r1
    str r1, [r0, #28]
    str r2, [r0, #32]
    bx lr
}

// MTX_RotY33_(pDst, sinVal, cosVal)
asm void func_01ffb4b4(void *pDst, s32 sinVal, s32 cosVal)
{
    str r2, [r0, #0]
    str r2, [r0, #32]
    mov r3, #0
    str r3, [r0, #4]
    str r3, [r0, #12]
    str r3, [r0, #20]
    str r3, [r0, #28]
    neg r2, r1
    mov r3, #1
    lsl r3, r3, #12
    str r1, [r0, #24]
    str r2, [r0, #8]
    str r3, [r0, #16]
    bx lr
}

// MTX_RotZ33_(pDst, sinVal, cosVal)
asm void func_01ffb4d0(void *pDst, s32 sinVal, s32 cosVal)
{
    stmia r0!, {r2}
    mov r3, #0
    stmia r0!, {r1, r3}
    neg r1, r1
    stmia r0!, {r1, r2}
    mov r1, #1
    lsl r1, r1, #12
    str r3, [r0, #0]
    str r3, [r0, #4]
    str r3, [r0, #8]
    str r1, [r0, #12]
    bx lr
}
