; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02131098-0x02131114: _dfltu, _dflt (u32/s32 -> double)
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _dfltu(u32) -> double. Evidence: clz.
	.global _dfltu
	.type _dfltu, @function
	.size _dfltu, 0x3c
_dfltu:
	cmp r0, #0
	mov r1, #0
	bxeq lr
	mov r3, #0x400
	add r3, r3, #30
	bmi L_021310bc
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
L_021310bc:
	mov r1, r0
	mov r0, r1, lsl #21
	add r1, r1, r1
	mov r1, r1, lsr #12
	orr r1, r1, r3, lsl #20
	bx lr

; _dflt(s32) -> double. Evidence: clz.
	.global _dflt
	.type _dflt, @function
	.size _dflt, 0x40
_dflt:
	ands r2, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r0, #0
	mov r1, #0
	bxeq lr
	mov r3, #0x400
	add r3, r3, #30
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
	movs r1, r0
	mov r0, r1, lsl #21
	add r1, r1, r1
	orr r1, r2, r1, lsr #12
	orr r1, r1, r3, lsl #20
	bx lr
