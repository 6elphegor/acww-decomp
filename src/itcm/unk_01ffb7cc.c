// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK fx_mtx43.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffb7cc-0x01ffb828: MTX_Identity43_, MTX_Copy43To44_ (ARM `asm` routines of fx_mtx43.c: straight runs of
// stmia/ldmia with writeback, constants kept in fixed registers, a hand-saved r4 with no stack frame).
// symbols.txt also has the label _ZN12Unk_01ffb7ccC2Ev at 0x01ffb7cc (a game-side alias of MTX_Identity43_).
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.

// MTX_Identity43_(pDst): 4x3 identity, FX32_ONE = 0x1000
asm void func_01ffb7cc(void *pDst)
{
    mov r2, #0x1000
    mov r3, #0
    stmia r0!, {r2, r3}
    mov r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    bx lr
}

// MTX_Copy43To44_(pSrc, pDst): each 4x3 row plus a 4th column 0, 0, 0, FX32_ONE
asm void func_01ffb7f4(const void *pSrc, void *pDst)
{
    stmfd sp!, {r4}
    mov r12, #0
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    mov r12, #0x1000
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmfd sp!, {r4}
    bx lr
}
