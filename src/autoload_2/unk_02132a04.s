; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02132a04-0x02132a94: _ffltu, _fflt (u32/s32 -> float)
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _ffltu(u32) -> float. Evidence: clz.
	.global func_02132a04
	.type func_02132a04, @function
	.size func_02132a04, 0x48
func_02132a04:
	cmp r0, #0
	bxeq lr
	mov r3, #158
	bmi L_02132a20
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
L_02132a20:
	ands r2, r0, #255
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r2, #128
	bxeq lr
	ands r1, r2, #127
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr

; _fflt(s32) -> float. Evidence: clz.
	.global _fflt
	.type _fflt, @function
	.size _fflt, 0x48
_fflt:
	ands r2, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r0, #0
	bxeq lr
	clz r3, r0
	movs r0, r0, lsl r3
	rsb r3, r3, #158
	ands r1, r0, #255
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r1, #128
	bxeq lr
	ands r3, r1, #127
	andeqs r3, r0, #1
	addne r0, r0, #1
	bx lr
