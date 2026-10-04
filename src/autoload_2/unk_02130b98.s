; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02130b98-0x02130eb0: _dadd (double add)
; One routine: the entry flips the sign of y and, when the signs differ, BRANCHES INTO THE BODY OF THE OPPOSITE
; OPERATION (_dadd <-> _dsub, _fadd <-> _fsub; that body is in another unit). So each body start is a global label
; inside its routine (symbols.txt kind:label), not a function.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern func_0213162c
	.arm

; _dadd(x r0:r1, y r2:r3): x + y. If the signs differ, y is negated and control goes to the _dsub body
; (func_0213162c). Evidence: branch into another routine's body; 64-bit carry chains (adds/adc, subs/sbc,
; `adcs r1, r1, #0` + bcc on the carry-out), rrx/rrxs normalisation.
	.global _dadd
	.type _dadd, @function
	.size _dadd, 0x318
_dadd:
	stmfd sp!, {r4, lr}
	eors ip, r1, r3
	eormi r3, r3, #0x80000000
	bmi func_0213162c

; _dadd body (same-sign addition); also entered from _dsub (0x02131628). Literal 0x7ff00000 (+Inf high
; word) at the end, read with explicit pc-relative loads.
	.global func_02130ba8
func_02130ba8:
	subs ip, r0, r2
	sbcs lr, r1, r3
	bcs L_02130bc4
	adds r2, r2, ip
	adc r3, r3, lr
	subs r0, r0, ip
	sbc r1, r1, lr
L_02130bc4:
	mov lr, #0x80000000
	mov ip, r1, lsr #20
	orr r1, lr, r1, lsl #11
	orr r1, r1, r0, lsr #21
	mov r0, r0, lsl #11
	movs r4, ip, lsl #21
	cmnne r4, #0x200000
	beq L_02130cc0
	mov r4, r3, lsr #20
	orr r3, lr, r3, lsl #11
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #11
	movs lr, r4, lsl #21
	beq L_02130d08
L_02130bfc:
	subs r4, ip, r4
	beq L_02130c54
	cmp r4, #32
	ble L_02130c38
	cmp r4, #56
	movge r4, #63
	sub r4, r4, #32
	rsb lr, r4, #32
	orrs lr, r2, r3, lsl lr
	mov r2, r3, lsr r4
	orrne r2, r2, #1
	adds r0, r0, r2
	adcs r1, r1, #0
	bcc L_02130c7c
	b L_02130c60
L_02130c38:
	rsb lr, r4, #32
	movs lr, r2, lsl lr
	rsb lr, r4, #32
	mov r2, r2, lsr r4
	orr r2, r2, r3, lsl lr
	mov r3, r3, lsr r4
	orrne r2, r2, #1
L_02130c54:
	adds r0, r0, r2
	adcs r1, r1, r3
	bcc L_02130c7c
L_02130c60:
	add ip, ip, #1
	and r4, r0, #1
	movs r1, r1, rrx
	orr r0, r4, r0, rrx
	mov lr, ip, lsl #21
	cmn lr, #0x200000
	beq L_02130e8c
L_02130c7c:
	movs r2, r0, lsl #21
	mov r0, r0, lsr #11
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	mov r1, r1, lsr #12
	orr r1, r1, ip, lsl #20
	tst r2, #0x80000000
	ldmeqfd sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqfd sp!, {r4, lr}
	bxeq lr
	adds r0, r0, #1
	adc r1, r1, #0
	ldmfd sp!, {r4, lr}
	bx lr
L_02130cc0:
	cmp ip, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bics ip, ip, #0x800
	beq L_02130d2c
	orrs r4, r0, r1, lsl #1
	bne L_02130e68
	mov r4, r3, lsr #20
	mov r3, r3, lsl #11
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #11
	movs r4, r4, lsl #21
	beq L_02130e54
	cmn r4, #0x200000
	bne L_02130e54
	orrs r4, r2, r3, lsl #1
	beq L_02130e54
	b L_02130e68
L_02130d08:
	cmp r4, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bic ip, ip, #0x800
	bics r4, r4, #0x800
	beq L_02130d98
	orrs r4, r2, r3, lsl #1
	bne L_02130e68
	b L_02130e54
L_02130d2c:
	orrs r4, r0, r1, lsl #1
	beq L_02130d6c
	mov ip, #1
	bic r1, r1, #0x80000000
	mov r4, r3, lsr #20
	mov r3, r3, lsl #11
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #11
	movs r4, r4, lsl #21
	cmnne r4, #0x200000
	mov r4, r4, lsr #21
	orr r4, r4, lr, lsr #20
	beq L_02130d08
	orr r3, r3, #0x80000000
	orr ip, ip, lr, lsr #20
	b L_02130bfc
L_02130d6c:
	mov ip, r3, lsr #20
	mov r1, r3, lsl #11
	orr r1, r1, r2, lsr #21
	mov r0, r2, lsl #11
	movs r4, ip, lsl #21
	beq L_02130e20
	cmn r4, #0x200000
	bne L_02130e20
	orrs r4, r0, r1, lsl #1
	beq L_02130e54
	b L_02130e6c
L_02130d98:
	orrs r4, r2, r3, lsl #1
	beq L_02130e30
	mov r4, #1
	bic r3, r3, #0x80000000
	cmp r1, #0
	bpl L_02130dbc
	orr ip, ip, lr, lsr #20
	orr r4, r4, lr, lsr #20
	b L_02130bfc
L_02130dbc:
	adds r0, r0, r2
	adcs r1, r1, r3
	bcc L_02130ddc
	add ip, ip, #1
	and r4, r0, #1
	movs r1, r1, rrx
	mov r0, r0, rrx
	orr r0, r0, r4
L_02130ddc:
	cmp r1, #0
	subges ip, ip, #1
	movs r2, r0, lsl #21
	mov r0, r0, lsr #11
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, ip, lsl #20
	ldmeqfd sp!, {r4, lr}
	bxeq lr
	tst r2, #0x80000000
	ldmeqfd sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqfd sp!, {r4, lr}
	bxeq lr
L_02130e20:
	mov r1, r3
	mov r0, r2
	ldmfd sp!, {r4, lr}
	bx lr
L_02130e30:
	cmp r1, #0
	subges ip, ip, #1
	mov r0, r0, lsr #11
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, ip, lsl #20
	ldmfd sp!, {r4, lr}
	bx lr
L_02130e54:
	ldr r1, L_02130eac ; (was ldr r1, [pc, #80])
	orr r1, lr, r1
	mov r0, #0
	ldmfd sp!, {r4, lr}
	bx lr
L_02130e68:
	mov r1, r3
L_02130e6c:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmfd sp!, {r4, lr}
	bx lr
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmfd sp!, {r4, lr}
	bx lr
L_02130e8c:
	cmp ip, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	ldr r1, L_02130eac ; (was ldr r1, [pc, #12])
	orr r1, lr, r1
	mov r0, #0
	ldmfd sp!, {r4, lr}
	bx lr
L_02130eac:
	.word 0x7ff00000
