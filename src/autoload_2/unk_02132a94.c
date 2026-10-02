// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02132a94-0x02132c74: _fmul (float multiply)
#include "types.h"

// _fmul(x, y). Evidence: clz (subnormal normalisation).
asm void _fmul(void)
{
    eor r2, r0, r1
    and r2, r2, #0x80000000
    mov ip, #255
    ands r3, ip, r0, lsr #23
    mov r0, r0, lsl #8
    cmpne r3, #255
    beq L_02132b10
    orr r0, r0, #0x80000000
    ands ip, ip, r1, lsr #23
    mov r1, r1, lsl #8
    cmpne ip, #255
    beq L_02132b50
    orr r1, r1, #0x80000000
L_02132ac8:
    add ip, r3, ip
    umull r1, r3, r0, r1
    movs r0, r3
    addpl r0, r0, r0
    subpl ip, ip, #1
    subs ip, ip, #127
    bmi L_02132bdc
    cmp ip, #254
    bge L_02132c48
    ands r3, r0, #255
    orr r0, r2, r0, lsr #8
    add r0, r0, ip, lsl #23
    tst r3, #128
    bxeq lr
    orrs r1, r1, r3, lsl #25
    andeqs r3, r0, #1
    addne r0, r0, #1
    bx lr
L_02132b10:
    cmp r3, #0
    beq L_02132b64
    movs r0, r0, lsl #1
    bne L_02132c38
    mov ip, r1, lsr #23
    mov r1, r1, lsl #9
    ands ip, ip, #255
    beq L_02132b44
    cmp ip, #255
    blt L_02132c2c
    cmp r1, #0
    beq L_02132c2c
    b L_02132c38
L_02132b44:
    cmp r1, #0
    beq L_02132c40
    b L_02132c2c
L_02132b50:
    cmp ip, #0
    beq L_02132bc0
L_02132b58:
    movs r1, r1, lsl #1
    bne L_02132c38
    b L_02132c2c
L_02132b64:
    movs r0, r0, lsl #1
    beq L_02132b9c
    mov r0, r0, lsr #1
    clz r3, r0
    movs r0, r0, lsl r3
    rsb r3, r3, #1
    mov ip, r1, lsr #23
    mov r1, r1, lsl #8
    ands ip, ip, #255
    beq L_02132bc0
    cmp ip, #255
    beq L_02132b58
    orr r1, r1, #0x80000000
    b L_02132ac8
L_02132b9c:
    mov ip, r1, lsr #23
    mov r1, r1, lsl #9
    ands ip, ip, #255
    beq L_02132c6c
    cmp ip, #255
    blt L_02132c6c
    cmp r1, #0
    beq L_02132c40
    b L_02132c38
L_02132bc0:
    movs r1, r1, lsl #1
    beq L_02132c6c
    mov r1, r1, lsr #1
    clz ip, r1
    movs r1, r1, lsl ip
    rsb ip, ip, #1
    b L_02132ac8
L_02132bdc:
    cmn ip, #24
    beq L_02132c24
    bmi L_02132c64
    cmp r1, #0
    orrne r0, r0, #1
    mov r3, r0
    mov r0, r0, lsr #8
    rsb ip, ip, #0
    orr r0, r2, r0, lsr ip
    rsb ip, ip, #24
    movs r1, r3, lsl ip
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_02132c24:
    mov r0, r0, lsl #1
    b L_02132c54
L_02132c2c:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_02132c38:
    mvn r0, #0x80000000
    bx lr
L_02132c40:
    mvn r0, #0x80000000
    bx lr
L_02132c48:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_02132c54:
    movs r1, r0
    mov r0, r2
    addne r0, r0, #1
    bx lr
L_02132c64:
    mov r0, r2
    bx lr
L_02132c6c:
    mov r0, r2
    bx lr
}
