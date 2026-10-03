; Original assembly (NitroSDK os_reset.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffd6c0-0x01ffd784: OSi_DoBoot (`ldmia r11, {r0-r10}` register-block load, r11 used as a scratch base,
; jump to the ARM9 entry with `bx r12` and lr set by hand), OSi_CpuClear32 (static asm of os_reset.c: conditional
; single-register `stmltia r1!, {r0}` fill loop, a form the compiler never produces).
; Pool words other than SDK_AUTOLOAD_DTCM_START (= data_027e0000, relocation) are plain numbers in the original:
; 0x04000180 REG_SUBPINTF, 0x027ffd9c HW_EXCP_VECTOR_MAIN, 0x027ffd80 (exception stack area cleared, 0x80 bytes),
; 0x027fff80 (ARM9 boot parameter block, 0x80 bytes), 0x027ffe00 HW_ROM_HEADER_BUF (+0x24: ARM9 entry address).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern data_027e0000
	.arm

; OSi_DoBoot
	.global func_01ffd6c0
	.type func_01ffd6c0, @function
	.size func_01ffd6c0, 0xb0
func_01ffd6c0:
	mov r12, #0x04000000
	str r12, [r12, #0x208] ; REG_IME = 0
	ldr r1, L_01ffd758
	add r1, r1, #0x3fc0
	add r1, r1, #0x3c ; DTCM + 0x3ffc: IRQ handler vector
	mov r0, #0
	str r0, [r1, #0]
	ldr r1, L_01ffd75c ; REG_SUBPINTF
L_01ffd6e0: ; wait_arm7
	ldrh r0, [r1, #0]
	and r0, r0, #0xf
	cmp r0, #1
	bne L_01ffd6e0
	mov r0, #0x100
	strh r0, [r1, #0]
	mov r0, #0
	ldr r3, L_01ffd760
	ldr r4, [r3, #0]
	ldr r1, L_01ffd764
	mov r2, #0x80
	bl func_01ffd770
	str r4, [r3, #0]
	ldr r1, L_01ffd768
	mov r2, #0x80
	bl func_01ffd770
	ldr r1, L_01ffd75c
L_01ffd724: ; wait_arm7_2
	ldrh r0, [r1, #0]
	and r0, r0, #0xf
	cmp r0, #1
	beq L_01ffd724
	mov r0, #0
	strh r0, [r1, #0]
	ldr r3, L_01ffd76c
	ldr r12, [r3, #0x24]
	mov lr, r12
	ldr r11, L_01ffd768
	ldmia r11, {r0-r10}
	mov r11, #0
	bx r12
L_01ffd758:
	.word data_027e0000
L_01ffd75c:
	.word 0x04000180
L_01ffd760:
	.word 0x027ffd9c
L_01ffd764:
	.word 0x027ffd80
L_01ffd768:
	.word 0x027fff80
L_01ffd76c:
	.word 0x027ffe00

; OSi_CpuClear32(data, destp, size)
	.global func_01ffd770
	.type func_01ffd770, @function
	.size func_01ffd770, 0x14
func_01ffd770:
	add r12, r1, r2
L_01ffd774: ; loop
	cmp r1, r12
	stmltia r1!, {r0}
	blt L_01ffd774
	bx lr
