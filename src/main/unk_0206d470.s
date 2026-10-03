; Original assembly (game code, ARM): hand-written in the original; linked as assembly per the project's assembly
; policy.
; main 0x0206d470-0x0206d49c: an assembly routine of the original game (it cannot be written in C). It saves every
; register and CPSR on the stack, stores the stack pointer of its caller and -1 in place of the saved pc, and jumps
; to the handler func_0206d4a4 (Thumb) with a pointer to the saved block.
; Evidence: `stmfd sp!, {r0-r12, sp, lr, pc}` (a full register dump including sp and pc), mrs cpsr, hand-built
; frame, ldr/bx jump without return.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern func_0206d4a4
	.arm

	.global func_0206d470
	.type func_0206d470, @function
	.size func_0206d470, 0x2c
func_0206d470:
	stmfd sp!, {r0-r12, sp, lr, pc} ; full register dump (mwcc's inline assembler dropped pc from this list: the old unit had a dcd word)
	mrs r0, cpsr
	stmfd sp!, {r0}
	mov r0, sp
	add r1, sp, #0x44
	str r1, [sp, #0x38]
	mvn r2, #0
	str r2, [sp, #0x40]
	ldr r3, L_0206d498
	bx r3
L_0206d498:
	.word func_0206d4a4
