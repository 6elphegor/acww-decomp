// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02132588-0x0213294c: reverse float divide entry + _fdiv
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02132588(void);
asm void _fdiv(void);

// reverse-operand entry: swaps x and y (three eors) and FALLS THROUGH into _fdiv (returns y / x). No
// symbol in symbols.txt yet. Evidence: fall-through into the next routine.
asm void func_02132588(void)
{
    eor r0, r0, r1
    eor r1, r0, r1
    eor r0, r0, r1
}

// _fdiv(x, y). Evidence: `sub r0, pc, #148` addresses a 256-byte reciprocal seed table that sits INSIDE
// the code (0x02132648-0x02132748, read with ldrb [r0, lr, lsr #15]: index 0x100-0x1ff), clz,
// `stmfd sp!, {lr}` alone. The table is written as dcd data words (constants, not instructions).
asm void _fdiv(void)
{
    stmfd sp!, {lr}
    mov ip, #255
    ands r3, ip, r0, lsr #23
    cmpne r3, #255
    beq L_02132768
    ands ip, ip, r1, lsr #23
    cmpne ip, #255
    beq L_021327a4
    orr r1, r1, #0x800000
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    bic lr, r1, #0xff000000
L_021325c4:
    cmp r2, lr
    movcc r2, r2, lsl #1
    subcc r3, r3, #1
    teq r0, r1
    sub r0, pc, #148
    ldrb r1, [r0, lr, lsr #15]
    rsb lr, lr, #0
    mov r0, lr, asr #1
    mul r0, r1, r0
    add r0, r0, #0x80000000
    mov r0, r0, lsr #6
    mul r0, r1, r0
    mov r0, r0, lsr #14
    mul r1, lr, r0
    sub ip, r3, ip
    mov r1, r1, lsr #12
    mul r1, r0, r1
    mov r0, r0, lsl #14
    add r0, r0, r1, lsr #15
    umull r1, r0, r2, r0
    mov r3, r0
    orrmi r0, r0, #0x80000000
    adds ip, ip, #126
    bmi L_0213286c
    cmp ip, #254
    bge L_02132920
    add r0, r0, ip, lsl #23
    mov ip, r1, lsr #28
    cmp ip, #7
    beq L_02132748
    add r0, r0, r1, lsr #31
    ldmfd sp!, {lr}
    bx lr
    dcd 0xfdfeffff
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    dcd 0xeeeff0f0
    dcd 0xeaebeced
    dcd 0xe7e8e9ea
    dcd 0xe4e5e6e6
    dcd 0xe1e2e2e3
    dcd 0xdedfdfe0
    dcd 0xdbdcdcdd
    dcd 0xd8d9d9da
    dcd 0xd5d6d7d7
    dcd 0xd2d3d4d4
    dcd 0xd0d0d1d2
    dcd 0xcdcececf
    dcd 0xcbcbcccc
    dcd 0xc8c9c9ca
    dcd 0xc6c6c7c8
    dcd 0xc3c4c5c5
    dcd 0xc1c2c2c3
    dcd 0xbfbfc0c0
    dcd 0xbdbdbebe
    dcd 0xbabbbcbc
    dcd 0xb8b9b9ba
    dcd 0xb6b7b7b8
    dcd 0xb4b5b5b6
    dcd 0xb2b3b3b4
    dcd 0xb0b1b1b2
    dcd 0xafafafb0
    dcd 0xadadaeae
    dcd 0xababacac
    dcd 0xa9aaaaaa
    dcd 0xa7a8a8a9
    dcd 0xa6a6a7a7
    dcd 0xa4a4a5a5
    dcd 0xa2a3a3a4
    dcd 0xa1a1a2a2
    dcd 0x9fa0a0a0
    dcd 0x9e9e9e9f
    dcd 0x9c9d9d9d
    dcd 0x9b9b9b9c
    dcd 0x999a9a9a
    dcd 0x98989999
    dcd 0x96979798
    dcd 0x95959696
    dcd 0x94949495
    dcd 0x92939393
    dcd 0x91919292
    dcd 0x90909191
    dcd 0x8f8f8f90
    dcd 0x8d8e8e8e
    dcd 0x8c8c8d8d
    dcd 0x8b8b8c8c
    dcd 0x8a8a8a8b
    dcd 0x8989898a
    dcd 0x88888888
    dcd 0x86878787
    dcd 0x85868686
    dcd 0x84858585
    dcd 0x83838484
    dcd 0x82828383
    dcd 0x81818282
    dcd 0x80808181
L_02132748:
    mov r1, r3, lsl #1
    add r1, r1, #1
    rsb lr, lr, #0
    mul r1, lr, r1
    cmp r1, r2, lsl #24
    addmi r0, r0, #1
    ldmfd sp!, {lr}
    bx lr
L_02132768:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp r3, #0
    beq L_021327c0
    movs r0, r0, lsl #9
    bne L_02132908
    mov ip, r1, lsr #23
    mov r1, r1, lsl #9
    ands ip, ip, #255
    beq L_021328f8
    cmp ip, #255
    blt L_021328f8
    cmp r1, #0
    beq L_02132914
    b L_021328f0
L_021327a4:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp ip, #0
    beq L_02132824
L_021327b4:
    movs r1, r1, lsl #9
    bne L_021328f0
    b L_02132940
L_021327c0:
    movs r2, r0, lsl #9
    beq L_021327f4
    clz r3, r2
    movs r2, r2, lsl r3
    rsb r3, r3, #0
    mov r2, r2, lsr #8
    ands ip, ip, r1, lsr #23
    beq L_0213284c
    cmp ip, #255
    beq L_021327b4
    orr r1, r1, #0x800000
    bic lr, r1, #0xff000000
    b L_021325c4
L_021327f4:
    mov ip, r1, lsr #23
    mov r1, r1, lsl #9
    ands ip, ip, #255
    beq L_02132818
    cmp ip, #255
    blt L_02132940
    cmp r1, #0
    beq L_02132940
    b L_021328f0
L_02132818:
    cmp r1, #0
    beq L_02132914
    b L_02132940
L_02132824:
    movs ip, r1, lsl #9
    beq L_021328f8
    mov lr, ip
    clz ip, lr
    movs lr, lr, lsl ip
    rsb ip, ip, #0
    mov lr, lr, lsr #8
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    b L_021325c4
L_0213284c:
    movs ip, r1, lsl #9
    beq L_021328f8
    mov lr, ip
    clz ip, lr
    movs lr, lr, lsl ip
    rsb ip, ip, #0
    mov lr, lr, lsr #8
    b L_021325c4
L_0213286c:
    and r0, r0, #0x80000000
    cmn ip, #24
    beq L_021328e0
    bmi L_02132938
    add r1, ip, #23
    mov r2, r2, lsl r1
    rsb ip, ip, #0
    mov r3, r3, lsr ip
    orr r0, r0, r3
    rsb lr, lr, #0
    mul r1, lr, r3
    cmp r1, r2
    ldmeqfd sp!, {lr}
    bxeq lr
    add r1, r1, lr
    cmp r1, r2
    beq L_021328d4
    addmi r0, r0, #1
    subpl r1, r1, lr
    add r1, lr, r1, lsl #1
    cmp r1, r2, lsl #1
    and r3, r0, #1
    addmi r0, r0, #1
    addeq r0, r0, r3
    ldmfd sp!, {lr}
    bx lr
L_021328d4:
    add r0, r0, #1
    ldmfd sp!, {lr}
    bx lr
L_021328e0:
    cmn r2, lr
    addne r0, r0, #1
    ldmfd sp!, {lr}
    bx lr
L_021328f0:
    mov r0, r1
    b L_02132908
L_021328f8:
    mov r0, #0xff000000
    orr r0, lr, r0, lsr #1
    ldmfd sp!, {lr}
    bx lr
L_02132908:
    mvn r0, #0x80000000
    ldmfd sp!, {lr}
    bx lr
L_02132914:
    mvn r0, #0x80000000
    ldmfd sp!, {lr}
    bx lr
L_02132920:
    tst r0, #0x80000000
    mov r0, #0xff000000
    movne r0, r0, asr #1
    moveq r0, r0, lsr #1
    ldmfd sp!, {lr}
    bx lr
L_02132938:
    ldmfd sp!, {lr}
    bx lr
L_02132940:
    mov r0, lr
    ldmfd sp!, {lr}
    bx lr
}
