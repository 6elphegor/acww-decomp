// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x021319d0-0x02131bec: _fadd (float add)
// Entry and body are two asm functions laid out contiguously: the entry flips the sign of y and BRANCHES INTO THE
// BODY OF THE OPPOSITE OPERATION when the signs differ (_dadd <-> _dsub, _fadd <-> _fsub). mwcc's assembler has no
// global label inside an asm function and no `function+offset` operand, so that body start is its own symbol.
#include "types.h"

// routines of other A002 units that this one branches to
void func_02132c8c(void);

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void _fadd(void);
asm void func_021319dc(void);

// _fadd(x, y): if the signs differ, y is negated and control goes to the _fsub body (func_02132c8c).
// Evidence: branch into another routine's body.
asm void _fadd(void)
{
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi func_02132c8c
}

// _fadd body; also entered from _fsub (0x02132c88). Evidence: rrx (`orr r0, r1, r0, rrx`).
asm void func_021319dc(void)
{
    subs ip, r0, r1
    subcc r0, r0, ip
    addcc r1, r1, ip
    mov r2, #0x80000000
    mov r3, r0, lsr #23
    orr r0, r2, r0, lsl #8
    ands ip, r3, #255
    cmpne ip, #255
    beq L_02131a70
    mov ip, r1, lsr #23
    orr r1, r2, r1, lsl #8
    ands r2, ip, #255
    beq L_02131ab0
L_02131a10:
    subs ip, r3, ip
    beq L_02131a28
    rsb r2, ip, #32
    movs r2, r1, lsl r2
    mov r1, r1, lsr ip
    orrne r1, r1, #1
L_02131a28:
    adds r0, r0, r1
    bcc L_02131a48
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add r3, r3, #1
    and r2, r3, #255
    cmp r2, #255
    beq L_02131bb8
L_02131a48:
    ands r1, r0, #255
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    tst r1, #128
    bxeq lr
    ands r1, r1, #127
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_02131a70:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    ands r3, r3, #255
    beq L_02131ad4
    movs r0, r0, lsl #1
    bne L_02131be4
    mov ip, r1, lsr #23
    mov r1, r1, lsl #9
    ands ip, ip, #255
    beq L_02131bd8
    cmp ip, #255
    blt L_02131bd8
    cmp r1, #0
    beq L_02131bd8
    b L_02131be4
L_02131ab0:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    and r3, r3, #255
    ands ip, ip, #255
    beq L_02131b30
L_02131ac8:
    movs r1, r1, lsl #1
    bne L_02131be4
    b L_02131bd8
L_02131ad4:
    movs r0, r0, lsl #1
    beq L_02131b0c
    mov r3, #1
    mov r0, r0, lsr #1
    mov ip, r1, lsr #23
    mov r1, r1, lsl #8
    ands ip, ip, #255
    beq L_02131b30
    cmp ip, #255
    beq L_02131ac8
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #23
    orr ip, ip, r2, lsr #23
    b L_02131a10
L_02131b0c:
    mov r3, r1, lsr #23
    mov r0, r1, lsl #9
    ands r3, r3, #255
    beq L_02131b98
    cmp r3, #255
    blt L_02131b98
    cmp r0, #0
    beq L_02131bd8
    b L_02131bd0
L_02131b30:
    movs r1, r1, lsl #1
    beq L_02131ba0
    mov r1, r1, lsr #1
    mov ip, #1
    orr r3, r3, r2, lsr #23
    orr ip, ip, r2, lsr #23
    cmp r0, #0
    bmi L_02131a10
    adds r0, r0, r1
    bcc L_02131b64
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add ip, ip, #1
L_02131b64:
    cmp r0, #0
    subge ip, ip, #1
    ands r1, r0, #255
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, ip, lsl #23
    bxeq lr
    tst r1, #128
    bxeq lr
    ands r1, r1, #127
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_02131b98:
    mov r0, r1
    bx lr
L_02131ba0:
    cmp r0, #0
    subges r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
L_02131bb8:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_02131bd0:
    mvn r0, #0x80000000
    bx lr
L_02131bd8:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_02131be4:
    mvn r0, #0x80000000
    bx lr
}
