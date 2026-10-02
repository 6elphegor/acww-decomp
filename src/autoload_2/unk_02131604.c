// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02131604-0x021319d0: reverse double subtract entry + _dsub
// Entry and body are two asm functions laid out contiguously: the entry flips the sign of y and BRANCHES INTO THE
// BODY OF THE OPPOSITE OPERATION when the signs differ (_dadd <-> _dsub, _fadd <-> _fsub). mwcc's assembler has no
// global label inside an asm function and no `function+offset` operand, so that body start is its own symbol.
#include "types.h"

// routines of other A002 units that this one branches to
void func_02130ba8(void);

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02131604(void);
asm void _dsub(void);
asm void func_0213162c(void);

// reverse-operand entry: swaps x and y (three-eor swap of both words) and FALLS THROUGH into _dsub,
// i.e. returns y - x. No symbol in symbols.txt yet (see notes.txt). Evidence: fall-through into the next
// routine (second entry point).
asm void func_02131604(void)
{
    eor r1, r1, r3
    eor r3, r1, r3
    eor r1, r1, r3
    eor r0, r0, r2
    eor r2, r0, r2
    eor r0, r0, r2
}

// _dsub(x, y): x - y. If the signs differ, y is negated and control goes to the _dadd body
// (func_02130ba8). Evidence: branch into another routine's body.
asm void _dsub(void)
{
    stmfd sp!, {r4, lr}
    eors ip, r1, r3
    eormi r3, r3, #0x80000000
    bmi func_02130ba8
}

// _dsub body; also entered from _dadd (0x02130ba4). Evidence: subs/sbcs carry chains, clz.
asm void func_0213162c(void)
{
    subs ip, r0, r2
    sbcs lr, r1, r3
    bcs L_0213164c
    eor lr, lr, #0x80000000
    adds r2, r2, ip
    adc r3, r3, lr
    subs r0, r0, ip
    sbc r1, r1, lr
L_0213164c:
    mov lr, #0x80000000
    mov ip, r1, lsr #20
    orr r1, lr, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #11
    movs r4, ip, lsl #21
    cmnne r4, #0x200000
    beq L_02131850
    mov r4, r3, lsr #20
    orr r3, lr, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs lr, r4, lsl #21
    beq L_02131898
L_02131684:
    subs r4, ip, r4
    beq L_0213172c
    cmp r4, #32
    ble L_021316c0
    cmp r4, #56
    movge r4, #63
    sub r4, r4, #32
    rsb lr, r4, #32
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, #0
    bmi L_021316e8
    b L_021317d8
L_021316c0:
    rsb lr, r4, #32
    movs lr, r2, lsl lr
    rsb lr, r4, #32
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, r3
    bpl L_021317d8
L_021316e8:
    movs r2, r0, lsl #21
    mov r0, r0, lsr #11
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    mov r1, r1, lsr #12
    orr r1, r1, ip, lsl #20
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andeqs r2, r0, #1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_0213172c:
    subs r0, r0, r2
    sbc r1, r1, r3
    orrs lr, r1, r0
    beq L_021319bc
    mov lr, ip, lsl #20
    and lr, lr, #0x80000000
    bic ip, ip, #0x800
    cmp r1, #0
    bmi L_021317b4
    bne L_02131764
    sub ip, ip, #32
    movs r1, r0
    mov r0, #0
    bmi L_02131780
L_02131764:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #32
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #32
    mov r0, r0, lsl r4
    sub ip, ip, r4
L_02131780:
    cmp ip, #0
    bgt L_021317bc
    rsb ip, ip, #12
    cmp ip, #32
    movge r0, r1
    movge r1, #0
    subge ip, ip, #32
    rsb r4, ip, #32
    mov r0, r0, lsr ip
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr ip
    ldmfd sp!, {r4, lr}
    bx lr
L_021317b4:
    cmp r1, #0
    subges ip, ip, #1
L_021317bc:
    mov r0, r0, lsr #11
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, ip, lsl #20
    ldmfd sp!, {r4, lr}
    bx lr
L_021317d8:
    mov lr, ip, lsl #20
    and lr, lr, #0x80000000
    bic ip, ip, #0x800
    cmp r1, #0
    bne L_021317fc
    sub ip, ip, #32
    movs r1, r0
    mov r0, #0
    bmi L_02131818
L_021317fc:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #32
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #32
    mov r0, r0, lsl r4
    sub ip, ip, r4
L_02131818:
    cmp ip, #0
    orrgt ip, ip, lr, lsr #20
    bgt L_021316e8
    rsb ip, ip, #12
    cmp ip, #32
    movge r0, r1
    movge r1, #0
    subge ip, ip, #32
    rsb r4, ip, #32
    mov r0, r0, lsr ip
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr ip
    ldmfd sp!, {r4, lr}
    bx lr
L_02131850:
    cmp ip, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bics ip, ip, #0x800
    beq L_021318bc
    orrs r4, r0, r1, lsl #1
    bne L_02131998
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r4, r4, lsl #21
    beq L_02131984
    cmn r4, #0x200000
    bne L_02131984
    orrs r4, r2, r3, lsl #1
    beq L_021319ac
    b L_02131998
L_02131898:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bic ip, ip, #0x800
    bics r4, r4, #0x800
    beq L_02131934
    orrs r4, r2, r3, lsl #1
    bne L_02131998
    b L_02131984
L_021318bc:
    orrs r4, r0, r1, lsl #1
    beq L_021318fc
    mov ip, #1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #20
    mov r3, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #11
    movs r4, r4, lsl #21
    cmnne r4, #0x200000
    mov r4, r4, lsr #21
    orr r4, r4, lr, lsr #20
    beq L_02131898
    orr r3, r3, #0x80000000
    orr ip, ip, lr, lsr #20
    b L_02131684
L_021318fc:
    mov ip, r3, lsr #20
    mov r1, r3, lsl #11
    orr r1, r1, r2, lsr #21
    mov r0, r2, lsl #11
    movs r4, ip, lsl #21
    beq L_02131928
    cmn r4, #0x200000
    bne L_02131950
    orrs r4, r0, r1, lsl #1
    bne L_0213199c
    b L_02131984
L_02131928:
    orrs r4, r0, r1, lsl #1
    beq L_021319bc
    b L_02131950
L_02131934:
    orrs r4, r2, r3, lsl #1
    beq L_02131960
    mov r4, #1
    bic r3, r3, #0x80000000
    orr ip, ip, lr, lsr #20
    orr r4, r4, lr, lsr #20
    b L_02131684
L_02131950:
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, lr}
    bx lr
L_02131960:
    cmp r1, #0
    subges ip, ip, #1
    mov r0, r0, lsr #11
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, ip, lsl #20
    ldmfd sp!, {r4, lr}
    bx lr
L_02131984:
    ldr r1, [pc, #64]
    orr r1, lr, r1
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
L_02131998:
    mov r1, r3
L_0213199c:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_021319ac:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_021319bc:
    mov r1, #0
    mov r0, #0
    ldmfd sp!, {r4, lr}
    bx lr
    dcd 0x7ff00000
}
