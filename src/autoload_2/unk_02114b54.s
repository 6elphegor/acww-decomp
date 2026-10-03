; Original assembly (NitroSDK os_exception.c): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02114b54-0x02114cd8: OSi_ExceptionHandler, OSi_GetAndDisplayContext, OSi_SetExContext,
; OSi_DisplayExContext.
; Replaces the units A001_exchandler (0x02114b54-0x02114bc8) and A001_excontext (0x02114bdc-0x02114cd8).
; 0x02000000 is a plain number in the original (no relocation).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern data_021fce8c
	.extern data_021fce90
	.extern data_021fce94
	.extern data_021fce98
	.extern func_02114b24
	.extern func_02114b34
	.arm

; OSi_ExceptionHandler
	.global func_02114b54
	.type func_02114b54, @function
	.size func_02114b54, 0x74
func_02114b54:
	ldr ip, L_02114bc0
	ldr ip, [ip, #0]
	cmp ip, #0
	movne lr, pc
	bxne ip
	ldr ip, L_02114bc4
	stmdb ip!, {r0, r1, r2, r3, sp, lr}
	and r0, sp, #1
	mov sp, ip
	mrs r1, cpsr
	and r1, r1, #0x1f
	teq r1, #0x17
	bne L_02114b90
	bl func_02114bc8
	b L_02114b9c
L_02114b90: ; not_abort
	teq r1, #0x1b
	bne L_02114b9c
	bl func_02114bc8
L_02114b9c: ; done
	ldr ip, L_02114bc0
	ldr ip, [ip, #0]
	cmp ip, #0
L_02114ba8: ; wait
	beq L_02114ba8
L_02114bac: ; spin
	mov r0, r0
	b L_02114bac
	ldmia sp!, {r0, r1, r2, r3, ip, lr}
	mov sp, ip
	bx lr
L_02114bc0:
	.word data_021fce94
L_02114bc4:
	.word 0x02000000

; OSi_GetAndDisplayContext: no stack padding around the two calls (mwcc pads a call frame to 8 bytes)
	.global func_02114bc8
	.type func_02114bc8, @function
	.size func_02114bc8, 0x14
func_02114bc8:
	stmfd sp!, {lr}
	bl func_02114bdc
	bl func_02114c6c
	ldmfd sp!, {lr}
	bx lr

; OSi_SetExContext: called from OSi_ExceptionHandler with r0 = (sp & 1), ip = exception stack frame
	.global func_02114bdc
	.type func_02114bdc, @function
	.size func_02114bdc, 0x90
func_02114bdc:
	ldr r1, L_02114c68
	mrs r2, cpsr
	str r2, [r1, #0x74]
	str r0, [r1, #0x6c]
	ldr r0, [ip, #0]
	str r0, [r1, #4]
	ldr r0, [ip, #4]
	str r0, [r1, #8]
	ldr r0, [ip, #8]
	str r0, [r1, #12]
	ldr r0, [ip, #12]
	str r0, [r1, #16]
	ldr r2, [ip, #16]
	bic r2, r2, #1
	add r0, r1, #20
	stmia r0, {r4, r5, r6, r7, r8, r9, r10, r11}
	str ip, [r1, #0x70]
	ldr r0, [r2, #0]
	str r0, [r1, #0x64]
	ldr r3, [r2, #4]
	str r3, [r1, #0]
	ldr r0, [r2, #8]
	str r0, [r1, #0x34]
	ldr r0, [r2, #12]
	str r0, [r1, #0x40]
	mrs r0, cpsr
	orr r3, r3, #0x80
	bic r3, r3, #0x20
	msr cpsr_cxsf, r3
	str sp, [r1, #0x38]
	str lr, [r1, #0x3c]
	mrs r2, spsr
	str r2, [r1, #0x7c]
	msr cpsr_cxsf, r0
	bx lr
L_02114c68:
	.word data_021fce98

; OSi_DisplayExContext: if a user handler is set, switch to System mode (HW_PSR_SYS_MODE 0x9f, keeping sp) and
; call handler(&OSi_ExContext, OSi_UserExceptionArgument) with the protection unit enabled
	.global func_02114c6c
	.type func_02114c6c, @function
	.size func_02114c6c, 0x6c
func_02114c6c:
	stmfd sp!, {lr}
	sub sp, sp, #4
	ldr r0, L_02114cc8
	ldr r0, [r0, #0]
	cmp r0, #0
	addeq sp, sp, #4
	ldmeqfd sp!, {lr}
	bxeq lr
	mov r0, sp
	ldr r1, L_02114ccc
	msr cpsr_cxsf, r1
	mov sp, r0
	bl func_02114b24
	ldr r1, L_02114cd0
	ldr r0, L_02114cc8
	ldr r1, [r1, #0]
	ldr r2, [r0, #0]
	ldr r0, L_02114cd4
	blx r2
	bl func_02114b34
	add sp, sp, #4
	ldmfd sp!, {lr}
	bx lr
L_02114cc8:
	.word data_021fce8c
L_02114ccc:
	.word 0x9f
L_02114cd0:
	.word data_021fce90
L_02114cd4:
	.word data_021fce98
