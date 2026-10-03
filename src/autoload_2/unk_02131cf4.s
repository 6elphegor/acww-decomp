; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02131cf4-0x02131d2c: float equality compare returning the result in the flags
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; float compare for (in)equality, RESULT IN THE CONDITION FLAGS (Z set = equal; unordered: `movs r2, #1`
; = NE). No C function returns flags.
	.global func_02131cf4
	.type func_02131cf4, @function
	.size func_02131cf4, 0x38
func_02131cf4:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	bcs L_02131d08
	movs r2, #1
	bx lr
L_02131d08:
	cmp r3, r1, lsl #1
	bcs L_02131d18
	movs r2, #1
	bx lr
L_02131d18:
	orr r3, r0, r1
	movs r3, r3, lsl #1
	bxeq lr
	cmp r0, r1
	bx lr
