; Original assembly (NitroSDK os_context.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ff8164-0x01ff81a8: OS_LoadContext (mrs/msr cpsr switch to SVC mode, msr spsr, user-bank
; `ldmia r0, {r0-r14}^`, exception return `subs pc, lr, #4`; restores the divider/sqrt state through
; CPi_RestoreContext first).
; OSContext offsets: cpsr 0x00, r[13] 0x04-0x34, sp 0x38, lr 0x3c, pc_plus4 0x40, sp_svc 0x44, cp_context 0x48.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern func_01ff8000
	.arm

; OS_LoadContext(context): does not return
	.global OS_LoadContext
	.type OS_LoadContext, @function
	.size OS_LoadContext, 0x44
OS_LoadContext:
	stmfd sp!, {r0, lr}
	add r0, r0, #0x48
	ldr r1, L_01ff81a4
	blx r1
	ldmfd sp!, {r0, lr}
	mrs r1, cpsr
	bic r1, r1, #0x1f
	orr r1, r1, #0xd3
	msr cpsr_c, r1
	ldr r1, [r0], #4
	msr spsr_fsxc, r1
	ldr sp, [r0, #0x40]
	ldr lr, [r0, #0x3c]
	ldmia r0, {r0-r14}^
	nop
	subs pc, lr, #4
L_01ff81a4:
	.word func_01ff8000
