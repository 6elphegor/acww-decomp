// mwcc-flags: -nothumb -O4,p
// Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
// assembly policy (accepted by user decision 2026-10-02).
// autoload_2 0x02130eb0-0x02131098: _d2f, _dfixu, _ll_ufrom_d (double conversions)
#include "types.h"

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void _d2f(void);
asm void func_02130fb4(void);
asm void func_0213100c(void);

// _d2f(double) -> float: exponent rebias, round to nearest even (`lsls r1, r1, #1; andeqs r1, r0, #1;
// addne r0, r0, #1`), denormal and overflow paths. Accepted as runtime assembly (user decision).
asm void _d2f(void)
{
    and r2, r1, #0x80000000
    mov ip, r1, lsr #20
    bics ip, ip, #0x800
    beq L_02130f28
    mov r3, ip, lsl #21
    cmn r3, #0x200000
    bcs L_02130f0c
    subs ip, ip, #0x380
    bls L_02130f38
    cmp ip, #255
    bge L_02130fa8
    mov r1, r1, lsl #12
    orr r3, r2, r1, lsr #9
    orr r3, r3, r0, lsr #29
    movs r1, r0, lsl #3
    orr r0, r3, ip, lsl #23
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_02130f0c:
    orrs r3, r0, r1, lsl #12
    bne L_02130f20
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
L_02130f20:
    mvn r0, #0x80000000
    bx lr
L_02130f28:
    orrs r3, r0, r1, lsl #12
    bne L_02130fa0
    mov r0, r2
    bx lr
L_02130f38:
    cmn ip, #23
    beq L_02130f8c
    bmi L_02130fa0
    mov r1, r1, lsl #11
    orr r1, r1, #0x80000000
    mov r3, r1, lsr #8
    orr r3, r3, r0, lsr #29
    rsb ip, ip, #1
    movs r1, r0, lsl #3
    orr r0, r2, r3, lsr ip
    rsb ip, ip, #32
    mov r3, r3, lsl ip
    orrne r3, r3, #1
    movs r1, r3
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
L_02130f8c:
    orr r0, r0, r1, lsl #12
    movs r1, r0
    mov r0, r2
    addne r0, r0, #1
    bx lr
L_02130fa0:
    mov r0, r2
    bx lr
L_02130fa8:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
}

// _dfixu(double) -> u32 (label _dfixu). Literal 0x41e (1023 + 31) at the end, read with an explicit
// pc-relative load.
asm void func_02130fb4(void)
{
    tst r1, #0x80000000
    bne L_02130fec
    ldr r2, [pc, #68]
    subs r2, r2, r1, lsr #20
    blt L_02131000
    cmp r2, #32
    bge L_02130fe4
    mov r3, r1, lsl #11
    orr r3, r3, #0x80000000
    orr r3, r3, r0, lsr #21
    mov r0, r3, lsr r2
    bx lr
L_02130fe4:
    mov r0, #0
    bx lr
L_02130fec:
    cmn r1, #0x100000
    cmpeq r0, #0
    movls r0, #0
    mvnhi r0, #0
    bx lr
L_02131000:
    mvn r0, #0
    bx lr
    dcd 0x0000041e
}

// _ll_ufrom_d(double) -> u64 (label _ll_ufrom_d). Literal 0x43e (1023 + 63) at the end, read with an
// explicit pc-relative load.
asm void func_0213100c(void)
{
    tst r1, #0x80000000
    bne L_02131070
    ldr r2, [pc, #120]
    subs r2, r2, r1, lsr #20
    blt L_02131088
    cmp r2, #64
    bge L_02131064
    mov ip, r1, lsl #11
    orr ip, ip, #0x80000000
    orr ip, ip, r0, lsr #21
    cmp r2, #32
    ble L_0213104c
    sub r2, r2, #32
    mov r1, #0
    mov r0, ip, lsr r2
    bx lr
L_0213104c:
    mov r3, r0, lsl #11
    mov r1, ip, lsr r2
    mov r0, r3, lsr r2
    rsb r2, r2, #32
    orr r0, r0, ip, lsl r2
    bx lr
L_02131064:
    mov r1, #0
    mov r0, #0
    bx lr
L_02131070:
    cmn r1, #0x100000
    cmpeq r0, #0
    bhi L_02131088
    mov r1, #0
    mov r0, #0
    bx lr
L_02131088:
    mvn r1, #0
    mvn r0, #0
    bx lr
    dcd 0x0000043e
}
