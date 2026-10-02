// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK SHA-1 block routine, MATHi_SHA1ProcessBlock-style): hand-written in the original;
// linked as assembly per the project's assembly policy.
// autoload_2 0x0211b3f8-0x0211b68c: the routine's 20-byte constant block (0x0211b3f8-0x0211b40c, placed in .text
// IN FRONT of the code and read with negative pc-relative loads, no relocations) and the block transform itself
// (func_0211b40c, reached through a function pointer in .data at 0x0213c1c8).
// The constant block is written as an asm function of five dcd words so that it is emitted, in source order, right
// before the routine (asm functions of a file are emitted first and in source order). Its symbol func_0211b3f8 is
// NOT in symbols.txt yet: see notes.txt (renames.txt supplies it for the check).
#include "types.h"

// constants of the SHA-1 block routine: byte-swap mask, then K0..K3
asm void func_0211b3f8(void)
{
    dcd 0x00ff00ff      // byte-swap mask (big-endian message words)
    dcd 0x5a827999      // K0, rounds 0-19
    dcd 0x6ed9eba1      // K1, rounds 20-39
    dcd 0x8f1bbcdc      // K2, rounds 40-59
    dcd 0xca62c1d6      // K3, rounds 60-79
}

// SHA-1 block transform(hash[5], data, len): processes len bytes (multiple of 64) of data into hash.
// sp+0x00..0x7f: 32-word message schedule ring (each word is stored at w and w+16), sp+0x80: remaining length.
asm void func_0211b40c(u32 *hash, const void *data, s32 len)
{
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, lr}
    ldmia r0, {r3, r9, r10, r11, ip}
    sub sp, sp, #0x84
    str r2, [sp, #0x80]
block:
    ldr r8, [pc, #-40]          // K0 (0x0211b3fc)
    ldr r7, [pc, #-48]          // 0x00ff00ff (0x0211b3f8)
    mov r6, sp
    mov r5, #0
r0_15:
    ldr r4, [r1], #4
    add r2, r8, ip
    add r2, r2, r3, ror #27
    and lr, r4, r7
    and r4, r7, r4, ror #24
    orr r4, r4, lr, ror #8
    str r4, [r6, #0x40]
    str r4, [r6], #4
    add r2, r2, r4
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r5, r5, #4
    cmp r5, #0x40
    blt r0_15
    mov r7, #0
    mov r6, sp
r16_19:
    ldr r2, [r6, #0]
    ldr r5, [r6, #8]
    ldr r4, [r6, #0x20]
    ldr lr, [r6, #0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror #31
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #4
    cmp r7, #16
    blt r16_19
    ldr r8, [pc, #-252]         // K1 (0x0211b400)
    mov r7, #0
r20_39:
    ldr r2, [r6, #0]
    ldr r4, [r6, #8]
    ldr lr, [r6, #0x20]
    ldr r5, [r6, #0x34]
    eor r2, r2, r4
    eor lr, lr, r5
    eor r2, r2, lr
    mov r2, r2, ror #31
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor lr, r9, r10
    eor lr, lr, r11
    add r2, r2, lr
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #12
    moveq r6, sp
    cmp r7, #20
    blt r20_39
    ldr r8, [pc, #-364]         // K2 (0x0211b404)
    mov r7, #0
r40_59:
    ldr r2, [r6, #0]
    ldr lr, [r6, #8]
    ldr r5, [r6, #0x20]
    ldr r4, [r6, #0x34]
    eor r2, r2, lr
    eor r5, r5, r4
    eor r2, r2, r5
    mov r2, r2, ror #31
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    orr r5, r9, r10
    and r5, r5, r11
    and r4, r9, r10
    orr r5, r5, r4
    add r2, r2, r5
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #8
    moveq r6, sp
    cmp r7, #20
    blt r40_59
    ldr r8, [pc, #-484]         // K3 (0x0211b408)
    mov r7, #0
r60_79:
    ldr r2, [r6, #0]
    ldr r5, [r6, #8]
    ldr r4, [r6, #0x20]
    ldr lr, [r6, #0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror #31
    str r2, [r6, #0x40]
    str r2, [r6], #4
    add r2, r2, ip
    add r2, r2, r8
    add r2, r2, r3, ror #27
    eor r4, r9, r10
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror #2
    mov ip, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, #1
    cmp r7, #4
    moveq r6, sp
    cmp r7, #20
    blt r60_79
    ldmia r0, {r2, r4, r6, r7, lr}
    add r3, r3, r2
    add r9, r9, r4
    add r10, r10, r6
    add r11, r11, r7
    add ip, ip, lr
    stmia r0, {r3, r9, r10, r11, ip}
    ldr lr, [sp, #0x80]
    subs lr, lr, #0x40
    str lr, [sp, #0x80]
    bgt block
    add sp, sp, #0x84
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, pc}
}
