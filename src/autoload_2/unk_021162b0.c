// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK mi_uncomp_stream.c): hand-written in the original; linked as assembly per the
// project's assembly policy.
// autoload_2 0x021162b0-0x021163b0: the streaming LZ8 decoder (MI_ReadUncompLZ8; output bytes written with swpb).
// Context (MIUncompContextLZ): destp 0x0, destCount 0x4, flags 0xb, flagIndex 0xc, length 0xd, lengthFlg 0xe.
#include "types.h"

// MI_ReadUncompLZ8(context, data, len): returns the remaining destination count
asm s32 func_021162b0(void *context, const u8 *data, u32 len)
{
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    ldr r3, [r0, #0]
    ldr r4, [r0, #4]
    ldrb r5, [r0, #11]
    ldrb r6, [r0, #12]
    ldrb r7, [r0, #13]
    ldrb r8, [r0, #14]
outer:
    cmp r4, #0
    ble save
    cmp r6, #0
    beq new_flags
bit_loop:
    cmp r2, #0
    beq save
    tst r5, #0x80
    bne reference
    ldrb r9, [r1], #1
    sub r4, r4, #1
    sub r2, r2, #1
    swpb r9, r9, [r3]
    add r3, r3, #1
    b bit_done
reference:
    cmp r8, #0
    bne have_length
    ldrb r7, [r1], #1
    mov r8, #1
    sub r2, r2, #1
have_length:
    cmp r2, #0
    beq save
    and r9, r7, #0xf
    mov r10, r9, lsl #8
    ldrb r9, [r1], #1
    mov r8, #0
    sub r2, r2, #1
    orr r9, r9, r10
    add r9, r9, #1
    mov r10, #3
    adds r7, r10, r7, asr #4
    beq bit_done
copy_loop:
    ldrb r10, [r3, -r9]
    sub r4, r4, #1
    swpb r10, r10, [r3]
    add r3, r3, #1
    subs r7, r7, #1
    bgt copy_loop
bit_done:
    cmp r4, #0
    beq save
    mov r5, r5, lsl #1
    subs r6, r6, #1
    bne bit_loop
new_flags:
    cmp r2, #0
    beq save
    ldrb r5, [r1], #1
    mov r6, #8
    sub r2, r2, #1
    b outer
save:
    str r3, [r0, #0]
    str r4, [r0, #4]
    strb r5, [r0, #11]
    strb r6, [r0, #12]
    strb r7, [r0, #13]
    strb r8, [r0, #14]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}
