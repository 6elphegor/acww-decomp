; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02131bf4-0x02131cf4: float compares: three-way compares, _fneq, _feq
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; float compare, x in r0, y in r1: returns 0 equal, 1 less, 2 greater, 3 unordered (each operand tested for NaN
; separately). Sign-magnitude to two's complement with `bicmi; rsbmi`.
	.global func_02131bf4
	.type func_02131bf4, @function
	.size func_02131bf4, 0x48
func_02131bf4:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	movcc r0, #3
	bxcc lr
	cmp r3, r1, lsl #1
	movcc r0, #3
	bxcc lr
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	moveq r0, #0
	movlt r0, #1
	movgt r0, #2
	bx lr

; float compare, x in r0, y in r1: same result as func_02131bf4 (0/1/2/3), NaN tests chained with `cmpcs`.
	.global func_02131c3c
	.type func_02131c3c, @function
	.size func_02131c3c, 0x40
func_02131c3c:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	movcc r0, #3
	bxcc lr
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	moveq r0, #0
	movlt r0, #1
	movgt r0, #2
	bx lr

; float compare, x in r0, y in r1: x != y (_fneq; unordered -> 1, +0 == -0).
	.global func_02131c7c
	.type func_02131c7c, @function
	.size func_02131c7c, 0x3c
func_02131c7c:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	movcc r0, #1
	bxcc lr
	cmp r3, r1, lsl #1
	movcc r0, #1
	bxcc lr
	orr r3, r0, r1
	movs r3, r3, lsl #1
	moveq r0, #0
	bxeq lr
	cmp r0, r1
	movne r0, #1
	moveq r0, #0
	bx lr

; float compare, x in r0, y in r1: x == y (_feq; unordered -> 0, +0 == -0).
	.global func_02131cb8
	.type func_02131cb8, @function
	.size func_02131cb8, 0x3c
func_02131cb8:
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	movcc r0, #0
	bxcc lr
	cmp r3, r1, lsl #1
	movcc r0, #0
	bxcc lr
	orr r3, r0, r1
	movs r3, r3, lsl #1
	moveq r0, #1
	bxeq lr
	cmp r0, r1
	moveq r0, #1
	movne r0, #0
	bx lr
