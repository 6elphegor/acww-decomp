// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK fx_mtx33.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffb448-0x01ffb498: MTX_Identity33_, MTX_Copy33To43_ (ARM `asm` routines of fx_mtx33.c: straight runs of
// stmia/ldmia with writeback, constants kept in fixed registers, no stack frame).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// MTX_Identity33_(pDst): 3x3 identity, FX32_ONE = 0x1000
asm void func_01ffb448(void *pDst)
{
    mov r2, #0x1000
    str r2, [r0, #32]
    mov r3, #0
    stmia r0!, {r2, r3}
    mov r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    bx lr
}

// MTX_Copy33To43_(pSrc, pDst): copies the 3x3 rows, translation row cleared
asm void func_01ffb46c(const void *pSrc, void *pDst)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    mov r2, #0
    str r2, [r1, #0]
    str r2, [r1, #4]
    str r2, [r1, #8]
    bx lr
}
