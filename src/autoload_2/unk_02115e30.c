// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK mi_memory.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// autoload_2 0x02115e30-0x02116178: the ARM memory routines of mi_memory.c (predicated ldm/stm loops, push/pop of
// r4-r10 without lr, ldm into the base register, unaligned halfword accesses at [rN, #-1]).
#include "types.h"

// MIi_CpuClear16(data, dest, size)
asm void func_02115e30(u16 data, void *dest, u32 size)
{
    mov r3, #0
loop:
    cmp r3, r2
    strlth r0, [r1, r3]
    addlt r3, r3, #2
    blt loop
    bx lr
}

// MIi_CpuCopy16(src, dest, size)
asm void func_02115e48(const void *src, void *dest, u32 size)
{
    mov ip, #0
loop:
    cmp ip, r2
    ldrlth r3, [r0, ip]
    strlth r3, [r1, ip]
    addlt ip, ip, #2
    blt loop
    bx lr
}

// MIi_CpuClear32(data, dest, size)
asm void func_02115e64(u32 data, void *dest, u32 size)
{
    add ip, r1, r2
loop:
    cmp r1, ip
    stmltia r1!, {r0}
    blt loop
    bx lr
}

// MIi_CpuCopy32(src, dest, size)
asm void func_02115e78(const void *src, void *dest, u32 size)
{
    add ip, r1, r2
loop:
    cmp r1, ip
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt loop
    bx lr
}

// MIi_CpuSend32(src, dest, size): every word goes to the same destination address
asm void func_02115e90(const void *src, volatile void *dest, u32 size)
{
    add ip, r0, r2
loop:
    cmp r0, ip
    ldmltia r0!, {r2}
    strlt r2, [r1, #0]
    blt loop
    bx lr
}

// MIi_CpuClearFast(data, dest, size): 32-byte stm bursts, then words
asm void func_02115ea8(u32 data, void *dest, u32 size)
{
    stmfd sp!, {r4, r5, r6, r7, r8, r9}
    add r9, r1, r2
    mov ip, r2, lsr #5
    add ip, r1, ip, lsl #5
    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2
loop32:
    cmp r1, ip
    stmltia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
    blt loop32
loop4:
    cmp r1, r9
    stmltia r1!, {r0}
    blt loop4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9}
    bx lr
}

// MIi_CpuCopyFast(src, dest, size): 32-byte ldm/stm bursts, then words
asm void func_02115ef4(const void *src, void *dest, u32 size)
{
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    add r10, r1, r2
    mov ip, r2, lsr #5
    add ip, r1, ip, lsl #5
loop32:
    cmp r1, ip
    ldmltia r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
    stmltia r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
    blt loop32
loop4:
    cmp r1, r10
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt loop4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}

// MI_Copy32B(src, dest)
asm void func_02115f2c(const void *src, void *dest)
{
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3}
    stmia r1!, {r2, r3}
    bx lr
}

// MI_Copy36B(src, dest)
asm void func_02115f48(const void *src, void *dest)
{
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    bx lr
}

// MI_Copy48B(src, dest)
asm void func_02115f64(const void *src, void *dest)
{
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    bx lr
}

// MI_Copy64B(src, dest): the last ldm loads into its own base register
asm void func_02115f88(const void *src, void *dest)
{
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0, {r0, r2, r3, ip}
    stmia r1!, {r0, r2, r3, ip}
    bx lr
}

// MI_CpuFill8(dest, data, size): byte fill through halfword/word stores
asm void func_02115fb4(void *dest, u8 data, u32 size)
{
    cmp r2, #0
    bxeq lr
    tst r0, #1
    beq aligned2
    ldrh ip, [r0, #-1]
    and ip, ip, #0xff
    orr r3, ip, r1, lsl #8
    strh r3, [r0, #-1]
    add r0, r0, #1
    subs r2, r2, #1
    bxeq lr
aligned2:
    cmp r2, #2
    bcc tail1
    orr r1, r1, r1, lsl #8
    tst r0, #2
    beq aligned4
    strh r1, [r0], #2
    subs r2, r2, #2
    bxeq lr
aligned4:
    orr r1, r1, r1, lsl #16
    bics r3, r2, #3
    beq tail2
    sub r2, r2, r3
    add ip, r3, r0
words:
    str r1, [r0], #4
    cmp r0, ip
    bcc words
tail2:
    tst r2, #2
    strneh r1, [r0], #2
tail1:
    tst r2, #1
    bxeq lr
    ldrh r3, [r0, #0]
    and r3, r3, #0xff00
    and r1, r1, #0xff
    orr r1, r1, r3
    strh r1, [r0, #0]
    bx lr
}

// MI_CpuCopy8(src, dest, size): byte copy through halfword/word accesses
asm void func_02116048(const void *src, void *dest, u32 size)
{
    cmp r2, #0
    bxeq lr
    tst r1, #1
    beq dst_even
    ldrh ip, [r1, #-1]
    and ip, ip, #0xff
    tst r0, #1
    ldrneh r3, [r0, #-1]
    movne r3, r3, lsr #8
    ldreqh r3, [r0, #0]
    orr r3, ip, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    bxeq lr
dst_even:
    eor ip, r1, r0
    tst ip, #1
    beq same_parity
    bic r0, r0, #1
    ldrh ip, [r0], #2
    mov r3, ip, lsr #8
    subs r2, r2, #2
    bcc odd_done
odd_loop:
    ldrh ip, [r0], #2
    orr ip, r3, ip, lsl #8
    strh ip, [r1], #2
    mov r3, ip, lsr #16
    subs r2, r2, #2
    bcs odd_loop
odd_done:
    tst r2, #1
    bxeq lr
    ldrh ip, [r1, #0]
    and ip, ip, #0xff00
    orr ip, ip, r3
    strh ip, [r1, #0]
    bx lr
same_parity:
    tst ip, #2
    beq same_align4
    bics r3, r2, #1
    beq last_byte
    sub r2, r2, r3
    add ip, r3, r1
half_loop:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, ip
    bcc half_loop
    b last_byte
same_align4:
    cmp r2, #2
    bcc last_byte
    tst r1, #2
    beq word_part
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    bxeq lr
word_part:
    bics r3, r2, #3
    beq half_tail
    sub r2, r2, r3
    add ip, r3, r1
word_loop:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, ip
    bcc word_loop
half_tail:
    tst r2, #2
    ldrneh r3, [r0], #2
    strneh r3, [r1], #2
last_byte:
    tst r2, #1
    bxeq lr
    ldrh r2, [r1, #0]
    ldrh r0, [r0, #0]
    and r2, r2, #0xff00
    and r0, r0, #0xff
    orr r0, r2, r0
    strh r0, [r1, #0]
    bx lr
}
