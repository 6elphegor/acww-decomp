// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02131114-0x02131478: _dmul (double multiply)
#include "types.h"

// _dmul(x, y). Evidence: umull partial products summed with an adds/adcs/adc carry chain, clz
// (subnormal normalisation).
asm void func_02131114(void)
{
    stmfd sp!, {r4, r5, r6, r7, lr}
    eor lr, r1, r3
    and lr, lr, #0x80000000
    mov ip, r1, lsr #20
    mov r1, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #11
    movs r6, ip, lsl #21
    cmnne r6, #0x200000
    beq L_0213121c
    orr r1, r1, #0x80000000
    bic ip, ip, #0x800
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r5, r4, lsl #21
    cmnne r5, #0x200000
    beq L_02131264
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
L_02131168:
    add ip, r4, ip
    umull r5, r4, r0, r2
    umull r7, r6, r0, r3
    adds r4, r7, r4
    adc r6, r6, #0
    umull r7, r0, r1, r2
    adds r4, r7, r4
    adcs r0, r0, r6
    umull r7, r2, r1, r3
    adc r1, r2, #0
    adds r0, r0, r7
    adc r1, r1, #0
    orrs r4, r4, r5
    orrne r0, r0, #1
    cmp r1, #0
    blt L_021311b4
    sub ip, ip, #1
    adds r0, r0, r0
    adc r1, r1, r1
L_021311b4:
    add ip, ip, #2
    subs ip, ip, #0x400
    bmi L_02131350
    beq L_02131350
    mov r6, ip, lsl #20
    cmn r6, #0x100000
    bmi L_02131450
    movs r2, r0, lsl #21
    mov r0, r0, lsr #11
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, ip, lsl #20
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_0213121c:
    bics ip, ip, #0x800
    beq L_02131278
    orrs r6, r0, r1, lsl #1
    bne L_02131404
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r5, r4, lsl #21
    beq L_02131258
    cmn r5, #0x200000
    bne L_021313f0
    orrs r5, r2, r3, lsl #1
    beq L_021313f0
    b L_02131404
L_02131258:
    orrs r5, r3, r2
    beq L_02131418
    b L_021313f0
L_02131264:
    bics r4, r4, #0x800
    beq L_0213130c
    orrs r6, r2, r3, lsl #1
    bne L_02131404
    b L_021313f0
L_02131278:
    orrs r6, r0, r1, lsl #1
    beq L_021312e0
    mov ip, #1
    cmp r1, #0
    bne L_0213129c
    sub ip, ip, #32
    movs r1, r0
    mov r0, #0
    bmi L_021312b8
L_0213129c:
    clz r6, r1
    movs r1, r1, lsl r6
    rsb r6, r6, #32
    orr r1, r1, r0, lsr r6
    rsb r6, r6, #32
    mov r0, r0, lsl r6
    sub ip, ip, r6
L_021312b8:
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r5, r4, lsl #21
    cmnne r5, #0x200000
    beq L_02131264
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
    b L_02131168
L_021312e0:
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r5, r4, lsl #21
    beq L_02131464
    cmn r5, #0x200000
    bne L_02131464
    orrs r6, r2, r3, lsl #1
    beq L_02131418
    b L_02131404
L_0213130c:
    orrs r5, r2, r3, lsl #1
    beq L_02131464
    mov r4, #1
    cmp r3, #0
    bne L_02131330
    sub r4, r4, #32
    movs r3, r2
    mov r2, #0
    bmi L_02131168
L_02131330:
    clz r6, r3
    movs r3, r3, lsl r6
    rsb r6, r6, #32
    orr r3, r3, r2, lsr r6
    rsb r6, r6, #32
    mov r2, r2, lsl r6
    sub r4, r4, r6
    b L_02131168
L_02131350:
    cmn ip, #52
    beq L_021313e8
    bmi L_02131440
    mov r2, r1
    mov r3, r0
    add r4, ip, #52
    cmp r4, #32
    movge r2, r3
    movge r3, #0
    subge r4, r4, #32
    rsb r5, r4, #32
    mov r2, r2, lsl r4
    orr r2, r2, r3, lsr r5
    movs r3, r3, lsl r4
    orrne r2, r2, #1
    rsb ip, ip, #12
    cmp ip, #32
    movge r0, r1
    movge r1, #0
    subge ip, ip, #32
    rsb r4, ip, #32
    mov r0, r0, lsr ip
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr ip
    cmp r2, #0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_021313e8:
    orr r0, r0, r1, lsl #1
    b L_02131428
L_021313f0:
    ldr r1, [pc, #124]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131404:
    mov r1, r3
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131418:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131428:
    movs r2, r0
    mov r1, lr
    mov r0, #0
    addne r0, r0, #1
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131440:
    mov r1, lr
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131450:
    ldr r1, [pc, #28]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02131464:
    mov r1, lr
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
    dcd 0x7ff00000
}
