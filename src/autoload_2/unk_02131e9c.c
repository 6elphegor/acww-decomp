// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02131e9c-0x02132114: float unordered/ordered tests, double three-way compares, _dneq, _deq
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02131e9c(void);
asm void func_02131ec0(void);
asm void func_02131ee4(void);
asm void func_02131f74(void);
asm void func_02132004(void);
asm void func_0213208c(void);

// float compare, x in r0, y in r1: 1 if x or y is a NaN (unordered test), else 0.
asm void func_02131e9c(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    movcc r0, #1
    bxcc lr
    cmp r3, r1, lsl #1
    movcc r0, #1
    bxcc lr
    mov r0, #0
    bx lr
}

// float compare, x in r0, y in r1: 1 if neither x nor y is a NaN (ordered test), else 0.
asm void func_02131ec0(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    movcc r0, #0
    bxcc lr
    cmp r3, r1, lsl #1
    movcc r0, #0
    bxcc lr
    mov r0, #1
    bx lr
}

// double compare, x in r0:r1, y in r2:r3: returns 0 equal, 1 less, 2 greater, 3 unordered. 64-bit compares with `cmp; cmpeq`,
// negative operands compared with swapped operands, the NaN tests branch back into the main path.
asm void func_02131ee4(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02131f40
    cmn ip, r3, lsl #1
    bcs L_02131f5c
L_02131ef8:
    orrs ip, r3, r1
    bmi L_02131f18
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0
    movcc r0, #1
    movhi r0, #2
    bx lr
L_02131f18:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0
    movcc r0, #1
    movhi r0, #2
    bx lr
L_02131f40:
    movne r0, #3
    bxne lr
    cmp r0, #0
    movhi r0, #3
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_02131ef8
L_02131f5c:
    movne r0, #3
    bxne lr
    cmp r2, #0
    movhi r0, #3
    bxhi lr
    b L_02131ef8
}

// double compare, x in r0:r1, y in r2:r3: identical code to func_02131ee4 (0/1/2/3).
asm void func_02131f74(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02131fd0
    cmn ip, r3, lsl #1
    bcs L_02131fec
L_02131f88:
    orrs ip, r3, r1
    bmi L_02131fa8
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0
    movcc r0, #1
    movhi r0, #2
    bx lr
L_02131fa8:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0
    movcc r0, #1
    movhi r0, #2
    bx lr
L_02131fd0:
    movne r0, #3
    bxne lr
    cmp r0, #0
    movhi r0, #3
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_02131f88
L_02131fec:
    movne r0, #3
    bxne lr
    cmp r2, #0
    movhi r0, #3
    bxhi lr
    b L_02131f88
}

// double compare, x in r0:r1, y in r2:r3: x != y (_dneq; unordered -> 1, +0 == -0).
asm void func_02132004(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02132058
    cmn ip, r3, lsl #1
    bcs L_02132074
L_02132018:
    orrs ip, r3, r1
    bmi L_02132034
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #1
    moveq r0, #0
    bx lr
L_02132034:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #1
    moveq r0, #0
    bx lr
L_02132058:
    movne r0, #1
    bxne lr
    cmp r0, #0
    movhi r0, #1
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_02132018
L_02132074:
    movne r0, #1
    bxne lr
    cmp r2, #0
    movhi r0, #1
    bxhi lr
    b L_02132018
}

// double compare, x in r0:r1, y in r2:r3: x == y (_deq; unordered -> 0, +0 == -0).
asm void func_0213208c(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_021320e0
    cmn ip, r3, lsl #1
    bcs L_021320fc
L_021320a0:
    orrs ip, r3, r1
    bmi L_021320bc
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #1
    movne r0, #0
    bx lr
L_021320bc:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #1
    movne r0, #0
    bx lr
L_021320e0:
    movne r0, #0
    bxne lr
    cmp r0, #0
    movhi r0, #0
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_021320a0
L_021320fc:
    movne r0, #0
    bxne lr
    cmp r2, #0
    movhi r0, #0
    bxhi lr
    b L_021320a0
}
