// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02131e60-0x02131e9c: float ordered compare returning the result in the flags
#include "types.h"

// float compare, RESULT IN THE CONDITION FLAGS (unordered returns the flags of the NaN test itself; equal
// zeros: `cmpeq r0, r0`; negatives compared with swapped operands).
asm void func_02131e60(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmpcs r3, r1, lsl #1
    bcs L_02131e74
    bx lr
L_02131e74:
    orr r3, r0, r1
    movs r3, r3, lsl #1
    cmpeq r0, r0
    bxeq lr
    orrs r2, r0, r1
    bmi L_02131e94
    cmp r0, r1
    bx lr
L_02131e94:
    cmp r1, r0
    bx lr
}
