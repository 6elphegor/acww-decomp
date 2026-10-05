; Original assembly (NitroSDK os_context.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ff81dc-0x01ff8228: OS_SaveContext (mrs/msr cpsr mode switch to read sp_svc, stmia with sp and lr in the
; register list, pc arithmetic `add r0, pc, #8`, saves the divider/sqrt state through CP_SaveContext first).
; OSContext offsets: cpsr 0x00, r[13] 0x04-0x34, sp 0x38, lr 0x3c, pc_plus4 0x40, sp_svc 0x44, cp_context 0x48.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern CP_SaveContext
	.arm

; OS_SaveContext(context): returns 0 now and 1 when resumed by OS_LoadContext (r0 is saved as 1)
	.global OS_SaveContext
	.type OS_SaveContext, @function
	.size OS_SaveContext, 0x4c
OS_SaveContext:
	stmfd sp!, {r0, lr}
	add r0, r0, #0x48
	ldr r1, L_01ff8224
	blx r1
	ldmfd sp!, {r0, lr}
	add r1, r0, #0
	mrs r2, cpsr
	str r2, [r1], #4
	mov r0, #0xd3
	msr cpsr_c, r0
	str sp, [r1, #0x40]
	msr cpsr_c, r2
	mov r0, #1
	stmia r1, {r0-r14}
	add r0, pc, #8
	str r0, [r1, #0x3c]
	mov r0, #0
	bx lr
L_01ff8224:
	.word CP_SaveContext
