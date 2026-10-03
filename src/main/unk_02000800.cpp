// Original assembly (NitroSDK crt0.c, ARM9 startup): hand-written `asm` routines in the original; linked as
// assembly per the project's assembly policy.
// main 0x02000800-0x02000b44: _start (= Entry, the ARM9 entry point of the ROM header), INITi_CpuClear32,
// MIi_UncompressBackward, do_autoload, _start_AutoloadDoneCallback, init_cp15. All ARM (main's default is Thumb).
// Evidence: msr cpsr (mode switches, stack setup), mcr/mrc p15 (cache flush, protection unit, TCM setup), the
// conditional single-register `stmltia r1!, {r0}` fill loop, ldmdb, hand-allocated registers, `bx` into NitroMain
// with lr set by hand to HW_RESET_VECTOR.
// Not here: 0x02000b44 func_02000b44 (OSi_ReferSymbol, C), 0x02000b48 BuildInfo (_start_ModuleParams, data).
#include "types.h"

extern "C" {
extern u8 data_027e0000[];          // SDK_AUTOLOAD_DTCM_START (DTCM)
extern u8 SDK_IRQ_STACKSIZE[];      // linker-script number 0x1000 (abs_symbols.txt)
extern u32 BuildInfo[];             // _start_ModuleParams (0x02000b48): autoload list, bss range, compressed end
void NitroMain(void);
void func_01ffd50c(void);           // OS_IrqHandler (ITCM)
void func_02133acc(void);           // _fp_init
void func_020b0a80(void);           // NitroStartUp (Thumb)
void func_02135310(void);           // __call_static_initializers
}

#pragma thumb off

// asm functions are emitted first and in source order: they are laid out contiguously.
extern "C" asm void Entry(void);
extern "C" asm void func_02000920(u32 data, void *destp, u32 size);
extern "C" asm void func_02000934(void *bottom);
extern "C" asm void func_020009e0(void);
extern "C" asm void AutoloadCallback(void *argv[]);
extern "C" asm void func_02000a5c(void);

// _start
extern "C" asm void Entry(void)
{
    mov r12, #0x04000000
    str r12, [r12, #0x208]          // REG_IME = 0
    bl func_02000a5c                // init_cp15
    mov r0, #0x13                   // SVC mode
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12                   // IRQ mode
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    sub sp, r0, #4
    ldr r1, =SDK_IRQ_STACKSIZE
    sub r1, r0, r1
    mov r0, #0x1f                   // SYS mode
    msr cpsr_cxsf, r0
    sub sp, r1, #4
    mov r0, #0
    ldr r1, =data_027e0000
    mov r2, #0x4000
    bl func_02000920                // clear DTCM
    mov r0, #0
    ldr r1, =0x05000000             // HW_PLTT
    mov r2, #0x400
    bl func_02000920
    mov r0, #0x200
    ldr r1, =0x07000000             // HW_OAM
    mov r2, #0x400
    bl func_02000920
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]             // compressed static end
    bl func_02000934                // MIi_UncompressBackward
    bl func_020009e0                // do_autoload
    ldr r0, =BuildInfo
    ldr r1, [r0, #0xc]              // static bss start
    ldr r2, [r0, #0x10]             // static bss end
    mov r3, r1
    mov r0, #0
clear_bss:
    cmp r1, r2
    strcc r0, [r1], #4
    bcc clear_bss
    bic r1, r3, #0x1f
flush_bss:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r1, c7, c5, 1
    mcr p15, 0, r1, c7, c14, 1
    add r1, r1, #0x20
    cmp r1, r2
    blt flush_bss
    ldr r1, =0x027fff9c
    str r0, [r1, #0]
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c               // DTCM + 0x3ffc: IRQ handler vector
    ldr r0, =func_01ffd50c
    str r0, [r1, #0]
    bl func_02133acc
    bl func_020b0a80                // blx: mwld turns bl + R_ARM_PC24 to a Thumb symbol into blx
    bl func_02135310
    ldr r1, =NitroMain
    ldr lr, =0xffff0000             // HW_RESET_VECTOR
    bx r1
}

// INITi_CpuClear32
extern "C" asm void func_02000920(u32 data, void *destp, u32 size)
{
    add r12, r1, r2
loop:
    cmp r1, r12
    stmltia r1!, {r0}
    blt loop
    bx lr
}

// MIi_UncompressBackward
extern "C" asm void func_02000934(void *bottom)
{
    cmp r0, #0
    beq done
    stmfd sp!, {r4, r5, r6, r7}
    ldmdb r0, {r1, r2}
    add r2, r0, r2
    sub r3, r0, r1, lsr #24
    bic r1, r1, #0xff000000
    sub r1, r0, r1
    mov r4, r2
loop:
    cmp r3, r1
    ble end_loop
    ldrb r5, [r3, #-1]!
    mov r6, #8
loop8:
    subs r6, r6, #1
    blt loop
    tst r5, #0x80
    bne compressed
    ldrb r0, [r3, #-1]!
    strb r0, [r2, #-1]!
    b next
compressed:
    ldrb r12, [r3, #-1]!
    ldrb r7, [r3, #-1]!
    orr r7, r7, r12, lsl #8
    bic r7, r7, #0xf000
    add r7, r7, #2
    add r12, r12, #0x20
copy:
    ldrb r0, [r2, r7]
    strb r0, [r2, #-1]!
    subs r12, r12, #0x10
    bge copy
next:
    cmp r3, r1
    mov r5, r5, lsl #1
    bgt loop8
end_loop:
    mov r0, #0
    bic r3, r1, #0x1f
flush:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r3, c7, c5, 1
    mcr p15, 0, r3, c7, c14, 1
    add r3, r3, #0x20
    cmp r3, r4
    blt flush
    ldmfd sp!, {r4, r5, r6, r7}
done:
    bx lr
}

// do_autoload
extern "C" asm void func_020009e0(void)
{
    ldr r0, =BuildInfo
    ldr r1, [r0, #0]                // autoload list
    ldr r2, [r0, #4]                // autoload list end
    ldr r3, [r0, #8]                // autoload data source
next_block:
    cmp r1, r2
    beq done
    ldr r5, [r1], #4                // destination
    ldr r7, [r1], #4                // size
    add r6, r5, r7
    mov r4, r5
copy:
    cmp r4, r6
    ldrmi r7, [r3], #4
    strmi r7, [r4], #4
    bmi copy
    ldr r7, [r1], #4                // bss size
    add r6, r4, r7
    mov r7, #0
clear:
    cmp r4, r6
    strcc r7, [r4], #4
    bcc clear
    bic r4, r5, #0x1f
flush:
    mcr p15, 0, r7, c7, c10, 4
    mcr p15, 0, r4, c7, c5, 1
    mcr p15, 0, r4, c7, c14, 1
    add r4, r4, #0x20
    cmp r4, r6
    blt flush
    b next_block
done:
    b AutoloadCallback
}

// _start_AutoloadDoneCallback
extern "C" asm void AutoloadCallback(void *argv[])
{
    bx lr
}

// init_cp15
extern "C" asm void func_02000a5c(void)
{
    mrc p15, 0, r0, c1, c0, 0
    ldr r1, =0x000f9005
    bic r0, r0, r1
    mcr p15, 0, r0, c1, c0, 0       // protection unit, caches, TCMs off
    mov r0, #0
    mcr p15, 0, r0, c7, c5, 0       // invalidate instruction cache
    mcr p15, 0, r0, c7, c6, 0       // invalidate data cache
    mcr p15, 0, r0, c7, c10, 4      // drain write buffer
    ldr r0, =0x04000033             // region 0: I/O registers, 64MB
    mcr p15, 0, r0, c6, c0, 0
    ldr r0, =0x0200002d             // region 1: main memory, 8MB
    mcr p15, 0, r0, c6, c1, 0
    ldr r0, =0x027e0021             // region 2: ARM7-dedicated main memory 0x027e0000, 128KB (a number)
    mcr p15, 0, r0, c6, c2, 0
    ldr r0, =0x08000035             // region 3: cartridge, 128MB
    mcr p15, 0, r0, c6, c3, 0
    ldr r0, =data_027e0000          // region 4: DTCM, 16KB
    orr r0, r0, #0x1a
    orr r0, r0, #1
    mcr p15, 0, r0, c6, c4, 0
    ldr r0, =0x0100002f             // region 5: ITCM, 32MB
    mcr p15, 0, r0, c6, c5, 0
    ldr r0, =0xffff001d             // region 6: BIOS, 32KB
    mcr p15, 0, r0, c6, c6, 0
    ldr r0, =0x027ff017             // region 7: shared main memory, 4KB
    mcr p15, 0, r0, c6, c7, 0
    mov r0, #0x20
    mcr p15, 0, r0, c9, c1, 1       // ITCM size
    ldr r0, =data_027e0000
    orr r0, r0, #0xa
    mcr p15, 0, r0, c9, c1, 0       // DTCM base and size
    mov r0, #0x42
    mcr p15, 0, r0, c2, c0, 1       // instruction cacheable regions
    mov r0, #0x42
    mcr p15, 0, r0, c2, c0, 0       // data cacheable regions
    mov r0, #2
    mcr p15, 0, r0, c3, c0, 0       // write buffer
    ldr r0, =0x05100011
    mcr p15, 0, r0, c5, c0, 3       // instruction access permissions
    ldr r0, =0x15111011
    mcr p15, 0, r0, c5, c0, 2       // data access permissions
    mrc p15, 0, r0, c1, c0, 0
    ldr r1, =0x0005707d
    orr r0, r0, r1
    mcr p15, 0, r0, c1, c0, 0       // protection unit, caches, TCMs on
    bx lr
}

#pragma thumb reset
