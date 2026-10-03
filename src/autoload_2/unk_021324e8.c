// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x021324e8-0x02132588: double unordered/ordered tests
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_021324e8(void);
asm void func_02132538(void);

// double compare, x in r0:r1, y in r2:r3: 1 if x or y is a NaN (unordered test), else 0.
asm void func_021324e8(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02132504
    cmn ip, r3, lsl #1
    bcs L_02132520
L_021324fc:
    mov r0, #0
    bx lr
L_02132504:
    movne r0, #1
    bxne lr
    cmp r0, #0
    movhi r0, #1
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_021324fc
L_02132520:
    movne r0, #1
    bxne lr
    cmp r2, #0
    movhi r0, #1
    bxhi lr
    b L_021324fc
}

// double compare, x in r0:r1, y in r2:r3: 1 if neither x nor y is a NaN (ordered test), else 0.
asm void func_02132538(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02132554
    cmn ip, r3, lsl #1
    bcs L_02132570
L_0213254c:
    mov r0, #1
    bx lr
L_02132554:
    movne r0, #0
    bxne lr
    cmp r0, #0
    movhi r0, #0
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_0213254c
L_02132570:
    movne r0, #0
    bxne lr
    cmp r2, #0
    movhi r0, #0
    bxhi lr
    b L_0213254c
}
