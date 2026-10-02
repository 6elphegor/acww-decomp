// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK mi_uncompress.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02116190-0x02116224: MI_UncompressLZ8 (every output byte is written with swpb).
#include "types.h"

// MI_UncompressLZ8(srcp, destp)
asm void func_02116190(const void *srcp, void *destp)
{
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, [r0], #4
    mov r2, r5, lsr #8
next_flags:
    cmp r2, #0
    ble done
    ldrb lr, [r0], #1
    mov r4, #8
next_bit:
    subs r4, r4, #1
    blt next_flags
    tst lr, #0x80
    bne copy_ref
    ldrb r6, [r0], #1
    swpb r6, r6, [r1]
    add r1, r1, #1
    sub r2, r2, #1
    b bit_done
copy_ref:
    ldrb r5, [r0, #0]
    mov r6, #3
    add r3, r6, r5, asr #4
    ldrb r6, [r0], #1
    and r5, r6, #0xf
    mov ip, r5, lsl #8
    ldrb r6, [r0], #1
    orr r5, r6, ip
    add ip, r5, #1
    sub r2, r2, r3
copy_loop:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #1
    subs r3, r3, #1
    bgt copy_loop
bit_done:
    cmp r2, #0
    movgt lr, lr, lsl #1
    bgt next_bit
    b next_flags
done:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
