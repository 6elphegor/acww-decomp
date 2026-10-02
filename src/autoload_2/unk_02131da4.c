// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02131da4-0x02131de8: float ordered compare returning the result in the flags
#include "types.h"

// float compare, RESULT IN THE CONDITION FLAGS (cmp-style; unordered: `adds r2, r2, #0x10000000` from
// 0xff000000 sets C and clears Z; equal zeros: `cmpeq r0, r0`; negatives compared with swapped operands).
asm void func_02131da4(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmpcs r3, r1, lsl #1
    bcs L_02131dc0
    mov r2, #0xff000000
    adds r2, r2, #0x10000000
    bx lr
L_02131dc0:
    orr r3, r0, r1
    movs r3, r3, lsl #1
    cmpeq r0, r0
    bxeq lr
    orrs r2, r0, r1
    bmi L_02131de0
    cmp r0, r1
    bx lr
L_02131de0:
    cmp r1, r0
    bx lr
}
