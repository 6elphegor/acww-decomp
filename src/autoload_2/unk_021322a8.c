// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x021322a8-0x02132340: double ordered compare returning the result in the flags
#include "types.h"

// double compare, RESULT IN THE CONDITION FLAGS (unordered: `adds ip, ip, #0x10000000` from 0xff000000;
// equal zeros: `cmpeq r1, r1`). Last word 0x0213233c `b L_021322bc` is unreachable (dsd: func_0213233c);
// merged here.
asm void func_021322a8(void)
{
    mov ip, #0x200000
    cmn ip, r1, lsl #1
    bcs L_021322ec
    cmn ip, r3, lsl #1
    bcs L_02132318
L_021322bc:
    orrs ip, r3, r1
    bmi L_021322d0
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_021322d0:
    orr ip, r0, ip, lsl #1
    orrs ip, ip, r2
    cmpeq r1, r1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_021322ec:
    beq L_021322fc
    mov ip, #0xff000000
    adds ip, ip, #0x10000000
    bx lr
L_021322fc:
    cmp r0, #0
    bls L_02132310
    mov ip, #0xff000000
    adds ip, ip, #0x10000000
    bx lr
L_02132310:
    cmn ip, r3, lsl #1
    bcc L_021322bc
L_02132318:
    beq L_02132328
    mov ip, #0xff000000
    adds ip, ip, #0x10000000
    bx lr
L_02132328:
    cmp r2, #0
    bls L_021322bc
    mov ip, #0xff000000
    adds ip, ip, #0x10000000
    bx lr
    b L_021322bc
}
