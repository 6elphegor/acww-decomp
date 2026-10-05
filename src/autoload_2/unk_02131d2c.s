; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02131d2c-0x02131da4: float compares: _fls, _fleq
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; float compare, x in r0, y in r1: x < y (_fls; unordered -> 0).
	.global _fls
	.type _fls, @function
	.size _fls, 0x3c
_fls:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	movcc r0, #0
	bxcc lr
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	movlt r0, #1
	movge r0, #0
	bx lr

; float compare, x in r0, y in r1: x <= y (_fleq; unordered -> 0).
	.global _fleq
	.type _fleq, @function
	.size _fleq, 0x3c
_fleq:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	movcc r0, #0
	bxcc lr
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	movle r0, #1
	movgt r0, #0
	bx lr
