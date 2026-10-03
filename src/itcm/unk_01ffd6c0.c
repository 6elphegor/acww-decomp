// mwcc-flags: -nothumb -O4,p
// Original assembly (NitroSDK os_reset.c): hand-written in the original; linked as assembly per the project's
// assembly policy.
// itcm 0x01ffd6c0-0x01ffd784: OSi_DoBoot (`ldmia r11, {r0-r10}` register-block load, r11 used as a scratch base,
// jump to the ARM9 entry with `bx r12` and lr set by hand), OSi_CpuClear32 (static asm of os_reset.c: conditional
// single-register `stmltia r1!, {r0}` fill loop, a form the compiler never produces).
// Pool words other than SDK_AUTOLOAD_DTCM_START (= data_027e0000, relocation) are plain numbers in the original:
// 0x04000180 REG_SUBPINTF, 0x027ffd9c HW_EXCP_VECTOR_MAIN, 0x027ffd80 (exception stack area cleared, 0x80 bytes),
// 0x027fff80 (ARM9 boot parameter block, 0x80 bytes), 0x027ffe00 HW_ROM_HEADER_BUF (+0x24: ARM9 entry address).
#include "types.h"

extern u8 data_027e0000[];      // SDK_AUTOLOAD_DTCM_START (DTCM)

// asm functions are emitted first and in source order: they are laid out contiguously.
asm void func_01ffd6c0(void);
asm void func_01ffd770(u32 data, void *destp, u32 size);

// OSi_DoBoot
asm void func_01ffd6c0(void)
{
    mov r12, #0x04000000
    str r12, [r12, #0x208]          // REG_IME = 0
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c               // DTCM + 0x3ffc: IRQ handler vector
    mov r0, #0
    str r0, [r1, #0]
    ldr r1, =0x04000180             // REG_SUBPINTF
wait_arm7:
    ldrh r0, [r1, #0]
    and r0, r0, #0xf
    cmp r0, #1
    bne wait_arm7
    mov r0, #0x100
    strh r0, [r1, #0]
    mov r0, #0
    ldr r3, =0x027ffd9c
    ldr r4, [r3, #0]
    ldr r1, =0x027ffd80
    mov r2, #0x80
    bl func_01ffd770
    str r4, [r3, #0]
    ldr r1, =0x027fff80
    mov r2, #0x80
    bl func_01ffd770
    ldr r1, =0x04000180
wait_arm7_2:
    ldrh r0, [r1, #0]
    and r0, r0, #0xf
    cmp r0, #1
    beq wait_arm7_2
    mov r0, #0
    strh r0, [r1, #0]
    ldr r3, =0x027ffe00
    ldr r12, [r3, #0x24]
    mov lr, r12
    ldr r11, =0x027fff80
    ldmia r11, {r0-r10}
    mov r11, #0
    bx r12
}

// OSi_CpuClear32(data, destp, size)
asm void func_01ffd770(u32 data, void *destp, u32 size)
{
    add r12, r1, r2
loop:
    cmp r1, r12
    stmltia r1!, {r0}
    blt loop
    bx lr
}
