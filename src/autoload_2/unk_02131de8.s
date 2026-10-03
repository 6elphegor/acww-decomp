; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02131de8-0x02131e60: float compares: _fgr, _fgeq
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; float compare, x in r0, y in r1: x > y (_fgr; unordered -> 0).
	.global _fgr
	.type _fgr, @function
	.size _fgr, 0x3c
_fgr:
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
	movgt r0, #1
	movle r0, #0
	bx lr

; float compare, x in r0, y in r1: x >= y (_fgeq; unordered -> 0).
	.global func_02131e24
	.type func_02131e24, @function
	.size func_02131e24, 0x3c
func_02131e24:
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
	movge r0, #1
	movlt r0, #0
	bx lr
