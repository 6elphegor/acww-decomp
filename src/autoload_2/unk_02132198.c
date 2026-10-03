// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02132198-0x021322a8: double compares: _dls, _dleq
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02132198(void);
asm void func_02132220(void);

// double compare, x in r0:r1, y in r2:r3: x < y (_dls; unordered -> 0).
asm void func_02132198(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_021321ec
    cmn ip, r3, lsl #1
    bcs L_02132208
L_021321ac:
    orrs ip, r3, r1
    bmi L_021321c8
    cmp r1, r3
    cmpeq r0, r2
    movcc r0, #1
    movcs r0, #0
    bx lr
L_021321c8:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movcc r0, #1
    movcs r0, #0
    bx lr
L_021321ec:
    movne r0, #0
    bxne lr
    cmp r0, #0
    movhi r0, #0
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_021321ac
L_02132208:
    movne r0, #0
    bxne lr
    cmp r2, #0
    movhi r0, #0
    bxhi lr
    b L_021321ac
}

// double compare, x in r0:r1, y in r2:r3: x <= y (_dleq; unordered -> 0).
asm void func_02132220(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_02132274
    cmn ip, r3, lsl #1
    bcs L_02132290
L_02132234:
    orrs ip, r3, r1
    bmi L_02132250
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #1
    movhi r0, #0
    bx lr
L_02132250:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    moveq r0, #1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #1
    movhi r0, #0
    bx lr
L_02132274:
    movne r0, #0
    bxne lr
    cmp r0, #0
    movhi r0, #0
    bxhi lr
    cmn ip, r3, lsl #1
    bcc L_02132234
L_02132290:
    movne r0, #0
    bxne lr
    cmp r2, #0
    movhi r0, #0
    bxhi lr
    b L_02132234
}
