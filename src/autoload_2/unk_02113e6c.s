; Original assembly (NitroSDK os_context.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02113e6c-0x02113ed0: OS_InitContext.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_InitContext(context, newpc, newsp): pc_plus4 = newpc + 4, sp_svc = newsp, sp = newsp - 0x40 (HW_SVC_STACK_SIZE),
; cpsr = Thumb bit of newpc ? 0x3f (SYS|T) : 0x1f (SYS), r0-r12 and lr cleared. OSContext offsets: cpsr 0x00,
; r[13] 0x04-0x34, sp 0x38, lr 0x3c, pc_plus4 0x40, sp_svc 0x44.
	.global func_02113e6c
	.type func_02113e6c, @function
	.size func_02113e6c, 0x64
func_02113e6c:
	add r1, r1, #4
	str r1, [r0, #0x40]
	str r2, [r0, #0x44]
	sub r2, r2, #0x40
	str r2, [r0, #0x38]
	ands r1, r1, #1
	movne r1, #0x3f
	moveq r1, #0x1f
	str r1, [r0, #0]
	mov r1, #0
	str r1, [r0, #0x04]
	str r1, [r0, #0x08]
	str r1, [r0, #0x0c]
	str r1, [r0, #0x10]
	str r1, [r0, #0x14]
	str r1, [r0, #0x18]
	str r1, [r0, #0x1c]
	str r1, [r0, #0x20]
	str r1, [r0, #0x24]
	str r1, [r0, #0x28]
	str r1, [r0, #0x2c]
	str r1, [r0, #0x30]
	str r1, [r0, #0x34]
	str r1, [r0, #0x3c]
	bx lr
