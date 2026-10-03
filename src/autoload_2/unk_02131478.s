; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02131478-0x02131604: double square root
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; double square root (bit-by-bit). Evidence: asrs + bcs on the shifted-out bit, lsls/adc and subs/sbc
; 64-bit chains, rrxs + adcs rounding chain, clz. Literals 0x7ff00000, 0x7ff80000 (NaN) at the end.
	.global func_02131478
	.type func_02131478, @function
	.size func_02131478, 0x18c
func_02131478:
	stmfd sp!, {r4, r5, r6, lr}
	ldr r2, L_021315fc ; (was ldr r2, [pc, #0x178])
	cmp r1, r2
	bcs L_021315c4
	movs ip, r1, lsr #20
	beq L_02131570
	bic r1, r1, r2
	orr r1, r1, #0x100000
L_02131498:
	movs ip, ip, asr #1
	bcs L_021314ac
	sub ip, ip, #1
	movs r0, r0, lsl #1
	adc r1, r1, r1
L_021314ac:
	movs r3, r0, lsl #1
	adc r1, r1, r1
	mov r2, #0
	mov r4, #0
	mov lr, #0x200000
L_021314c0:
	add r6, r4, lr
	cmp r6, r1
	addle r4, r6, lr
	suble r1, r1, r6
	addle r2, r2, lr
	movs r3, r3, lsl #1
	adc r1, r1, r1
	movs lr, lr, lsr #1
	bne L_021314c0
	mov r0, #0
	mov r5, #0
	cmp r1, r4
	cmpeq r3, #0x80000000
	bcc L_02131508
	subs r3, r3, #0x80000000
	sbc r1, r1, r4
	add r4, r4, #1
	mov r0, #0x80000000
L_02131508:
	movs r3, r3, lsl #1
	adc r1, r1, r1
	mov lr, #0x40000000
L_02131514:
	add r6, r5, lr
	cmp r4, r1
	cmpeq r6, r3
	bhi L_02131534
	add r5, r6, lr
	subs r3, r3, r6
	sbc r1, r1, r4
	add r0, r0, lr
L_02131534:
	movs r3, r3, lsl #1
	adc r1, r1, r1
	movs lr, lr, lsr #1
	bne L_02131514
	orrs r1, r1, r3
	biceq r0, r0, #1
	movs r1, r2, lsr #1
	movs r0, r0, rrx
	adcs r0, r0, #0
	adc r1, r1, #0
	add r1, r1, #0x20000000
	sub r1, r1, #0x100000
	add r1, r1, ip, lsl #20
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02131570:
	cmp r1, #0
	bne L_021315a0
	cmp r0, #0
	ldmeqfd sp!, {r4, r5, r6, lr}
	bxeq lr
	mvn ip, #19
	clz r5, r0
	movs r0, r0, lsl r5
	sub ip, ip, r5
	mov r1, r0, lsr #11
	mov r0, r0, lsl #21
	b L_02131498
L_021315a0:
	clz r2, r1
	movs r1, r1, lsl r2
	rsb r2, r2, #43
	mov r1, r1, lsr #11
	orr r1, r1, r0, lsr r2
	rsb r2, r2, #32
	mov r0, r0, lsl r2
	rsb ip, r2, #1
	b L_02131498
L_021315c4:
	tst r1, #0x80000000
	beq L_021315e0
	bics r3, r1, #0x80000000
	cmpeq r0, #0
	ldmeqfd sp!, {r4, r5, r6, lr}
	bxeq lr
	b L_021315ec
L_021315e0:
	orrs r2, r0, r1, lsl #12
	ldmeqfd sp!, {r4, r5, r6, lr}
	bxeq lr
L_021315ec:
	ldr r2, L_02131600 ; (was ldr r2, [pc, #12])
	orr r1, r1, r2
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_021315fc:
	.word 0x7ff00000
L_02131600:
	.word 0x7ff80000
