; Original assembly (NitroSDK crt0.c, ARM9 startup): hand-written `asm` routines in the original; linked as
; assembly per the project's assembly policy.
; main 0x02000800-0x02000b44: _start (= Entry, the ARM9 entry point of the ROM header), INITi_CpuClear32,
; MIi_UncompressBackward, do_autoload, _start_AutoloadDoneCallback, init_cp15. All ARM (main's default is Thumb).
; Evidence: msr cpsr (mode switches, stack setup), mcr/mrc p15 (cache flush, protection unit, TCM setup), the
; conditional single-register `stmltia r1!, {r0}` fill loop, ldmdb, hand-allocated registers, `bx` into NitroMain
; with lr set by hand to HW_RESET_VECTOR.
; Not here: 0x02000b44 OSi_ReferSymbol (OSi_ReferSymbol, C), 0x02000b48 BuildInfo (_start_ModuleParams, data).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern BuildInfo
	.extern NitroMain
	.extern SDK_IRQ_STACKSIZE
	.extern data_027e0000
	.extern OS_IrqHandler
	.extern NitroStartUp
	.extern _fp_init
	.extern func_02135310
	.arm

; _start
	.global Entry
	.type Entry, @function
	.size Entry, 0x120
Entry:
	mov r12, #0x04000000
	str r12, [r12, #0x208] ; REG_IME = 0
	bl init_cp15 ; init_cp15
	mov r0, #0x13 ; SVC mode
	msr cpsr_c, r0
	ldr r0, L_020008fc
	add r0, r0, #0x3fc0
	mov sp, r0
	mov r0, #0x12 ; IRQ mode
	msr cpsr_c, r0
	ldr r0, L_020008fc
	add r0, r0, #0x3fc0
	sub r0, r0, #0x40
	sub sp, r0, #4
	ldr r1, L_02000900
	sub r1, r0, r1
	mov r0, #0x1f ; SYS mode
	msr cpsr_cxsf, r0
	sub sp, r1, #4
	mov r0, #0
	ldr r1, L_020008fc
	mov r2, #0x4000
	bl INITi_CpuClear32 ; clear DTCM
	mov r0, #0
	ldr r1, L_02000904 ; HW_PLTT
	mov r2, #0x400
	bl INITi_CpuClear32
	mov r0, #0x200
	ldr r1, L_02000908 ; HW_OAM
	mov r2, #0x400
	bl INITi_CpuClear32
	ldr r1, L_0200090c
	ldr r0, [r1, #0x14] ; compressed static end
	bl MIi_UncompressBackward ; MIi_UncompressBackward
	bl do_autoload ; do_autoload
	ldr r0, L_0200090c
	ldr r1, [r0, #0xc] ; static bss start
	ldr r2, [r0, #0x10] ; static bss end
	mov r3, r1
	mov r0, #0
L_020008a0: ; clear_bss
	cmp r1, r2
	strcc r0, [r1], #4
	bcc L_020008a0
	bic r1, r3, #0x1f
L_020008b0: ; flush_bss
	mcr p15, 0, r0, c7, c10, 4
	mcr p15, 0, r1, c7, c5, 1
	mcr p15, 0, r1, c7, c14, 1
	add r1, r1, #0x20
	cmp r1, r2
	blt L_020008b0
	ldr r1, L_02000910
	str r0, [r1, #0]
	ldr r1, L_020008fc
	add r1, r1, #0x3fc0
	add r1, r1, #0x3c ; DTCM + 0x3ffc: IRQ handler vector
	ldr r0, L_02000914
	str r0, [r1, #0]
	bl _fp_init
	blx NitroStartUp ; NitroStartUp (Thumb)
	bl func_02135310
	ldr r1, L_02000918
	ldr lr, L_0200091c ; HW_RESET_VECTOR
	bx r1
L_020008fc:
	.word data_027e0000
L_02000900:
	.word SDK_IRQ_STACKSIZE
L_02000904:
	.word 0x05000000
L_02000908:
	.word 0x07000000
L_0200090c:
	.word BuildInfo
L_02000910:
	.word 0x027fff9c
L_02000914:
	.word OS_IrqHandler
L_02000918:
	.word NitroMain
L_0200091c:
	.word 0xffff0000

; INITi_CpuClear32
	.global INITi_CpuClear32
	.type INITi_CpuClear32, @function
	.size INITi_CpuClear32, 0x14
INITi_CpuClear32:
	add r12, r1, r2
L_02000924: ; loop
	cmp r1, r12
	stmltia r1!, {r0}
	blt L_02000924
	bx lr

; MIi_UncompressBackward
	.global MIi_UncompressBackward
	.type MIi_UncompressBackward, @function
	.size MIi_UncompressBackward, 0xac
MIi_UncompressBackward:
	cmp r0, #0
	beq L_020009dc
	stmfd sp!, {r4, r5, r6, r7}
	ldmdb r0, {r1, r2}
	add r2, r0, r2
	sub r3, r0, r1, lsr #24
	bic r1, r1, #0xff000000
	sub r1, r0, r1
	mov r4, r2
L_02000958: ; loop
	cmp r3, r1
	ble L_020009b8
	ldrb r5, [r3, #-1]!
	mov r6, #8
L_02000968: ; loop8
	subs r6, r6, #1
	blt L_02000958
	tst r5, #0x80
	bne L_02000984
	ldrb r0, [r3, #-1]!
	strb r0, [r2, #-1]!
	b L_020009ac
L_02000984: ; compressed
	ldrb r12, [r3, #-1]!
	ldrb r7, [r3, #-1]!
	orr r7, r7, r12, lsl #8
	bic r7, r7, #0xf000
	add r7, r7, #2
	add r12, r12, #0x20
L_0200099c: ; copy
	ldrb r0, [r2, r7]
	strb r0, [r2, #-1]!
	subs r12, r12, #0x10
	bge L_0200099c
L_020009ac: ; next
	cmp r3, r1
	mov r5, r5, lsl #1
	bgt L_02000968
L_020009b8: ; end_loop
	mov r0, #0
	bic r3, r1, #0x1f
L_020009c0: ; flush
	mcr p15, 0, r0, c7, c10, 4
	mcr p15, 0, r3, c7, c5, 1
	mcr p15, 0, r3, c7, c14, 1
	add r3, r3, #0x20
	cmp r3, r4
	blt L_020009c0
	ldmfd sp!, {r4, r5, r6, r7}
L_020009dc: ; done
	bx lr

; do_autoload
	.global do_autoload
	.type do_autoload, @function
	.size do_autoload, 0x78
do_autoload:
	ldr r0, L_02000a54
	ldr r1, [r0, #0] ; autoload list
	ldr r2, [r0, #4] ; autoload list end
	ldr r3, [r0, #8] ; autoload data source
L_020009f0: ; next_block
	cmp r1, r2
	beq L_02000a50
	ldr r5, [r1], #4 ; destination
	ldr r7, [r1], #4 ; size
	add r6, r5, r7
	mov r4, r5
L_02000a08: ; copy
	cmp r4, r6
	ldrmi r7, [r3], #4
	strmi r7, [r4], #4
	bmi L_02000a08
	ldr r7, [r1], #4 ; bss size
	add r6, r4, r7
	mov r7, #0
L_02000a24: ; clear
	cmp r4, r6
	strcc r7, [r4], #4
	bcc L_02000a24
	bic r4, r5, #0x1f
L_02000a34: ; flush
	mcr p15, 0, r7, c7, c10, 4
	mcr p15, 0, r4, c7, c5, 1
	mcr p15, 0, r4, c7, c14, 1
	add r4, r4, #0x20
	cmp r4, r6
	blt L_02000a34
	b L_020009f0
L_02000a50: ; done
	b AutoloadCallback
L_02000a54:
	.word BuildInfo

; _start_AutoloadDoneCallback
	.global AutoloadCallback
	.type AutoloadCallback, @function
	.size AutoloadCallback, 0x4
AutoloadCallback:
	bx lr

; init_cp15
	.global init_cp15
	.type init_cp15, @function
	.size init_cp15, 0xe8
init_cp15:
	mrc p15, 0, r0, c1, c0, 0
	ldr r1, L_02000b14
	bic r0, r0, r1
	mcr p15, 0, r0, c1, c0, 0 ; protection unit, caches, TCMs off
	mov r0, #0
	mcr p15, 0, r0, c7, c5, 0 ; invalidate instruction cache
	mcr p15, 0, r0, c7, c6, 0 ; invalidate data cache
	mcr p15, 0, r0, c7, c10, 4 ; drain write buffer
	ldr r0, L_02000b18 ; region 0: I/O registers, 64MB
	mcr p15, 0, r0, c6, c0, 0
	ldr r0, L_02000b1c ; region 1: main memory, 8MB
	mcr p15, 0, r0, c6, c1, 0
	ldr r0, L_02000b20 ; region 2: ARM7-dedicated main memory 0x027e0000, 128KB (a number)
	mcr p15, 0, r0, c6, c2, 0
	ldr r0, L_02000b24 ; region 3: cartridge, 128MB
	mcr p15, 0, r0, c6, c3, 0
	ldr r0, L_02000b28 ; region 4: DTCM, 16KB
	orr r0, r0, #0x1a
	orr r0, r0, #1
	mcr p15, 0, r0, c6, c4, 0
	ldr r0, L_02000b2c ; region 5: ITCM, 32MB
	mcr p15, 0, r0, c6, c5, 0
	ldr r0, L_02000b30 ; region 6: BIOS, 32KB
	mcr p15, 0, r0, c6, c6, 0
	ldr r0, L_02000b34 ; region 7: shared main memory, 4KB
	mcr p15, 0, r0, c6, c7, 0
	mov r0, #0x20
	mcr p15, 0, r0, c9, c1, 1 ; ITCM size
	ldr r0, L_02000b28
	orr r0, r0, #0xa
	mcr p15, 0, r0, c9, c1, 0 ; DTCM base and size
	mov r0, #0x42
	mcr p15, 0, r0, c2, c0, 1 ; instruction cacheable regions
	mov r0, #0x42
	mcr p15, 0, r0, c2, c0, 0 ; data cacheable regions
	mov r0, #2
	mcr p15, 0, r0, c3, c0, 0 ; write buffer
	ldr r0, L_02000b38
	mcr p15, 0, r0, c5, c0, 3 ; instruction access permissions
	ldr r0, L_02000b3c
	mcr p15, 0, r0, c5, c0, 2 ; data access permissions
	mrc p15, 0, r0, c1, c0, 0
	ldr r1, L_02000b40
	orr r0, r0, r1
	mcr p15, 0, r0, c1, c0, 0 ; protection unit, caches, TCMs on
	bx lr
L_02000b14:
	.word 0x000f9005
L_02000b18:
	.word 0x04000033
L_02000b1c:
	.word 0x0200002d
L_02000b20:
	.word 0x027e0021
L_02000b24:
	.word 0x08000035
L_02000b28:
	.word data_027e0000
L_02000b2c:
	.word 0x0100002f
L_02000b30:
	.word 0xffff001d
L_02000b34:
	.word 0x027ff017
L_02000b38:
	.word 0x05100011
L_02000b3c:
	.word 0x15111011
L_02000b40:
	.word 0x0005707d
