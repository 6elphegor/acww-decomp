// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02133570-0x02133acc: reverse double divide entry + _ddiv
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_02133570(void);
asm void func_02133588(void);

// reverse-operand entry: swaps x and y (three-eor swap of both words) and FALLS THROUGH into _ddiv
// (returns y / x). No symbol in symbols.txt yet. Evidence: fall-through into the next routine.
asm void func_02133570(void)
{
    eor r1, r1, r3
    eor r3, r1, r3
    eor r1, r1, r3
    eor r0, r0, r2
    eor r2, r0, r2
    eor r0, r0, r2
}

// _ddiv(x, y). Evidence: `sub r4, pc, #36` addresses a 256-byte reciprocal seed table INSIDE the code
// (0x021336c0-0x021337c0, ldrb [r4, r3, lsr #12]), umull/umlal/mla Newton steps with adds/adc and
// rsbs/rsc chains, clz. Literal 0x00000ffe at the end. The table is dcd data words.
asm void func_02133588(void)
{
    stmfd sp!, {r4, r5, r6, lr}
    ldr lr, [pc, #0x534]
    eor r4, r1, r3
    ands ip, lr, r1, lsr #19
    cmpne ip, lr
    beq L_02133934
    bic r1, r1, lr, lsl #20
    orr r1, r1, #0x100000
    add ip, ip, r4, lsr #31
L_021335ac:
    ands r4, lr, r3, lsr #19
    cmpne r4, lr
    beq L_021339cc
    bic r3, r3, lr, lsl #20
    orr r3, r3, #0x100000
L_021335c0:
    sub ip, ip, r4
    cmp r1, r3
    cmpeq r0, r2
    bcs L_021335dc
    adds r0, r0, r0
    adc r1, r1, r1
    sub ip, ip, #2
L_021335dc:
    sub r4, pc, #36
    ldrb lr, [r4, r3, lsr #12]
    rsbs r2, r2, #0
    rsc r3, r3, #0
    mov r4, #0x20000000
    mla r5, lr, r3, r4
    mov r6, r3, lsl #10
    mov r5, r5, lsr #7
    mul lr, r5, lr
    orr r6, r6, r2, lsr #22
    mov lr, lr, lsr #13
    mul r5, lr, r6
    mov r6, r1, lsl #10
    orr r6, r6, r0, lsr #22
    mov r5, r5, lsr #16
    mul r5, lr, r5
    mov lr, lr, lsl #14
    add lr, lr, r5, lsr #16
    umull r5, r6, lr, r6
    umull r4, r5, r6, r2
    mla r5, r3, r6, r5
    mov r4, r4, lsr #26
    orr r4, r4, r5, lsl #6
    add r4, r4, r0, lsl #2
    umull lr, r5, r4, lr
    mov r4, #0
    adds r5, r5, r6, lsl #24
    adc r4, r4, r6, lsr #8
    cmp ip, #0x800
    bge L_021337c0
    add ip, ip, #0x7f0
    adds ip, ip, #12
    bmi L_021337d8
    orr r1, r4, ip, lsl #31
    bic ip, ip, #1
    add r1, r1, ip, lsl #19
    tst lr, #0x80000000
    bne L_021336b0
    rsbs r2, r2, #0
    mov r4, r4, lsl #1
    add r4, r4, r5, lsr #31
    mul lr, r2, r4
    mov r6, #0
    mov r4, r5, lsl #1
    orr r4, r4, #1
    umlal r6, lr, r4, r2
    rsc r3, r3, #0
    mla lr, r4, r3, lr
    cmp lr, r0, lsl #21
    bmi L_021336b0
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021336b0:
    adds r0, r5, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, lr}
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
L_021337c0:
    movs r1, ip, lsl #31
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf00000
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021337d8:
    mvn r6, ip, asr #1
    cmp r6, #52
    bgt L_02133924
    beq L_02133900
    cmp r6, #20
    bge L_02133820
    rsb r6, r6, #19
    mov lr, r0, lsl r6
    rsb r6, r6, #20
    mov r0, r5, lsr r6
    rsb r6, r6, #32
    orr r0, r0, r4, lsl r6
    rsb r6, r6, #32
    mov r4, r4, lsr r6
    orr r1, r4, ip, lsl #31
    mov ip, lr
    mov lr, #0
    b L_02133850
L_02133820:
    rsb r6, r6, #51
    mov lr, r1, lsl r6
    mov r1, ip, lsl #31
    rsb r6, r6, #32
    orr ip, lr, r0, lsr r6
    rsb r6, r6, #32
    mov lr, r0, lsl r6
    mov r5, r5, lsr #21
    orr r5, r5, r4, lsl #11
    rsb r6, r6, #31
    mov r0, r5, lsr r6
    mov r4, #0
L_02133850:
    rsbs r2, r2, #0
    mul r4, r2, r4
    mov r5, #0
    umlal r5, r4, r2, r0
    rsc r3, r3, #0
    mla r4, r0, r3, r4
    cmp r4, ip
    cmpeq r5, lr
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    adds r5, r5, r2
    adc r4, r4, r3
    cmp r4, ip
    bmi L_021338f4
    bne L_02133898
    cmp r5, lr
    beq L_021338e4
    bcc L_021338f4
L_02133898:
    subs r5, r5, r2
    sbc r4, r4, r3
L_021338a0:
    adds r5, r5, r5
    adc r4, r4, r4
    adds r5, r5, r2
    adc r4, r4, r3
    adds lr, lr, lr
    adc ip, ip, ip
    cmp r4, ip
    bmi L_021338e4
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r5, lr
    bcc L_021338e4
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    tst r0, #1
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
L_021338e4:
    adds r0, r0, #1
    adc r1, r1, #0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021338f4:
    adds r0, r0, #1
    adc r1, r1, #0
    b L_021338a0
L_02133900:
    rsbs r2, r2, #0
    rsc r3, r3, #0
    cmp r1, r3
    cmpeq r0, r2
    mov r1, ip, lsl #31
    mov r0, #0
    movne r0, #1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133924:
    mov r1, ip, lsl #31
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133934:
    orrs r5, r0, r1, lsl #1
    beq L_02133a58
    cmp ip, lr
    beq L_0213399c
    movs r1, r1, lsl #12
    beq L_02133978
    clz r5, r1
    movs r1, r1, lsl r5
    sub ip, ip, r5
    add r5, ip, #31
    mov r1, r1, lsr #11
    orr r1, r1, r0, lsr r5
    rsb r5, r5, #32
    mov r0, r0, lsl r5
    mov ip, ip, lsl #1
    orr ip, ip, r4, lsr #31
    b L_021335ac
L_02133978:
    mvn ip, #19
    clz r5, r0
    movs r0, r0, lsl r5
    sub ip, ip, r5
    mov r1, r0, lsr #11
    mov r0, r0, lsl #21
    mov ip, ip, lsl #1
    orr ip, ip, r4, lsr #31
    b L_021335ac
L_0213399c:
    orrs r5, r0, r1, lsl #12
    bne L_02133a80
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    bcs L_021339c0
    and r5, r3, #0x80000000
    eor r1, r5, r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_021339c0:
    orrs r5, r2, r3, lsl #12
    bne L_02133aa0
    b L_02133ab8
L_021339cc:
    orrs r5, r2, r3, lsl #1
    beq L_02133a44
    cmp r4, lr
    beq L_02133a2c
    movs r3, r3, lsl #12
    beq L_02133a0c
    clz r5, r3
    movs r3, r3, lsl r5
    sub r4, r4, r5
    add r5, r4, #31
    mov r3, r3, lsr #11
    orr r3, r3, r2, lsr r5
    rsb r5, r5, #32
    mov r2, r2, lsl r5
    mov r4, r4, lsl #1
    b L_021335c0
L_02133a0c:
    mvn r4, #19
    clz r5, r2
    movs r2, r2, lsl r5
    sub r4, r4, r5
    mov r3, r2, lsr #11
    mov r2, r2, lsl #21
    mov r4, r4, lsl #1
    b L_021335c0
L_02133a2c:
    orrs r5, r2, r3, lsl #12
    bne L_02133aa0
    mov r1, ip, lsl #31
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133a44:
    mov r1, ip, lsl #31
    orr r1, r1, lr, lsl #19
    mov r0, #0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133a58:
    orrs r5, r2, r3, lsl #1
    beq L_02133ab8
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    cmpeq r2, #0
    bhi L_02133aa0
    eor r1, r1, r3
    and r1, r1, #0x80000000
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133a80:
    tst r1, #0x80000
    beq L_02133ab8
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    cmpeq r2, #0
    bhi L_02133aa0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133aa0:
    tst r3, #0x80000
    beq L_02133ab8
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02133ab8:
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf80000
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
    dcd 0x00000ffe
}
