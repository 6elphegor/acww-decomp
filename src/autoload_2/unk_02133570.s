; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02133570-0x02133acc: reverse double divide entry + _ddiv
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; reverse-operand entry: swaps x and y (three-eor swap of both words) and FALLS THROUGH into _ddiv
; (returns y / x). Evidence: fall-through into the next routine.
	.global _drdiv
	.type _drdiv, @function
	.size _drdiv, 0x18
_drdiv:
	eor r1, r1, r3
	eor r3, r1, r3
	eor r1, r1, r3
	eor r0, r0, r2
	eor r2, r0, r2
	eor r0, r0, r2

; _ddiv(x, y). Evidence: `sub r4, pc, #36` addresses a 256-byte reciprocal seed table INSIDE the code
; (0x021336c0-0x021337c0, ldrb [r4, r3, lsr #12]), umull/umlal/mla Newton steps with adds/adc and
; rsbs/rsc chains, clz. Literal 0x00000ffe at the end. The table is written as .word data.
	.global func_02133588
	.type func_02133588, @function
	.size func_02133588, 0x544
func_02133588:
	stmfd sp!, {r4, r5, r6, lr}
	ldr lr, L_02133ac8 ; (was ldr lr, [pc, #0x534])
	eor r4, r1, r3
	ands ip, lr, r1, lsr #19
	cmpne ip, lr
	beq L_02133934
	bic r1, r1, lr, lsl #20
	orr r1, r1, #0x100000
	add ip, ip, r4, lsr #31
L_021335ac:
	ands r4, lr, r3, lsr #19
	cmpne r4, lr
	beq L_021339cc
	bic r3, r3, lr, lsl #20
	orr r3, r3, #0x100000
L_021335c0:
	sub ip, ip, r4
	cmp r1, r3
	cmpeq r0, r2
	bcs L_021335dc
	adds r0, r0, r0
	adc r1, r1, r1
	sub ip, ip, #2
L_021335dc:
	sub r4, pc, #36
	ldrb lr, [r4, r3, lsr #12]
	rsbs r2, r2, #0
	rsc r3, r3, #0
	mov r4, #0x20000000
	mla r5, lr, r3, r4
	mov r6, r3, lsl #10
	mov r5, r5, lsr #7
	mul lr, r5, lr
	orr r6, r6, r2, lsr #22
	mov lr, lr, lsr #13
	mul r5, lr, r6
	mov r6, r1, lsl #10
	orr r6, r6, r0, lsr #22
	mov r5, r5, lsr #16
	mul r5, lr, r5
	mov lr, lr, lsl #14
	add lr, lr, r5, lsr #16
	umull r5, r6, lr, r6
	umull r4, r5, r6, r2
	mla r5, r3, r6, r5
	mov r4, r4, lsr #26
	orr r4, r4, r5, lsl #6
	add r4, r4, r0, lsl #2
	umull lr, r5, r4, lr
	mov r4, #0
	adds r5, r5, r6, lsl #24
	adc r4, r4, r6, lsr #8
	cmp ip, #0x800
	bge L_021337c0
	add ip, ip, #0x7f0
	adds ip, ip, #12
	bmi L_021337d8
	orr r1, r4, ip, lsl #31
	bic ip, ip, #1
	add r1, r1, ip, lsl #19
	tst lr, #0x80000000
	bne L_021336b0
	rsbs r2, r2, #0
	mov r4, r4, lsl #1
	add r4, r4, r5, lsr #31
	mul lr, r2, r4
	mov r6, #0
	mov r4, r5, lsl #1
	orr r4, r4, #1
	umlal r6, lr, r4, r2
	rsc r3, r3, #0
	mla lr, r4, r3, lr
	cmp lr, r0, lsl #21
	bmi L_021336b0
	mov r0, r5
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_021336b0:
	adds r0, r5, #1
	adc r1, r1, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
	.word 0xfdfeffff
	.word 0xf9fafbfc
	.word 0xf5f6f7f8
	.word 0xf1f2f3f4
	.word 0xeeeff0f0
	.word 0xeaebeced
	.word 0xe7e8e9ea
	.word 0xe4e5e6e6
	.word 0xe1e2e2e3
	.word 0xdedfdfe0
	.word 0xdbdcdcdd
	.word 0xd8d9d9da
	.word 0xd5d6d7d7
	.word 0xd2d3d4d4
	.word 0xd0d0d1d2
	.word 0xcdcececf
	.word 0xcbcbcccc
	.word 0xc8c9c9ca
	.word 0xc6c6c7c8
	.word 0xc3c4c5c5
	.word 0xc1c2c2c3
	.word 0xbfbfc0c0
	.word 0xbdbdbebe
	.word 0xbabbbcbc
	.word 0xb8b9b9ba
	.word 0xb6b7b7b8
	.word 0xb4b5b5b6
	.word 0xb2b3b3b4
	.word 0xb0b1b1b2
	.word 0xafafafb0
	.word 0xadadaeae
	.word 0xababacac
	.word 0xa9aaaaaa
	.word 0xa7a8a8a9
	.word 0xa6a6a7a7
	.word 0xa4a4a5a5
	.word 0xa2a3a3a4
	.word 0xa1a1a2a2
	.word 0x9fa0a0a0
	.word 0x9e9e9e9f
	.word 0x9c9d9d9d
	.word 0x9b9b9b9c
	.word 0x999a9a9a
	.word 0x98989999
	.word 0x96979798
	.word 0x95959696
	.word 0x94949495
	.word 0x92939393
	.word 0x91919292
	.word 0x90909191
	.word 0x8f8f8f90
	.word 0x8d8e8e8e
	.word 0x8c8c8d8d
	.word 0x8b8b8c8c
	.word 0x8a8a8a8b
	.word 0x8989898a
	.word 0x88888888
	.word 0x86878787
	.word 0x85868686
	.word 0x84858585
	.word 0x83838484
	.word 0x82828383
	.word 0x81818282
	.word 0x80808181
L_021337c0:
	movs r1, ip, lsl #31
	orr r1, r1, #0x7f000000
	orr r1, r1, #0xf00000
	mov r0, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_021337d8:
	mvn r6, ip, asr #1
	cmp r6, #52
	bgt L_02133924
	beq L_02133900
	cmp r6, #20
	bge L_02133820
	rsb r6, r6, #19
	mov lr, r0, lsl r6
	rsb r6, r6, #20
	mov r0, r5, lsr r6
	rsb r6, r6, #32
	orr r0, r0, r4, lsl r6
	rsb r6, r6, #32
	mov r4, r4, lsr r6
	orr r1, r4, ip, lsl #31
	mov ip, lr
	mov lr, #0
	b L_02133850
L_02133820:
	rsb r6, r6, #51
	mov lr, r1, lsl r6
	mov r1, ip, lsl #31
	rsb r6, r6, #32
	orr ip, lr, r0, lsr r6
	rsb r6, r6, #32
	mov lr, r0, lsl r6
	mov r5, r5, lsr #21
	orr r5, r5, r4, lsl #11
	rsb r6, r6, #31
	mov r0, r5, lsr r6
	mov r4, #0
L_02133850:
	rsbs r2, r2, #0
	mul r4, r2, r4
	mov r5, #0
	umlal r5, r4, r2, r0
	rsc r3, r3, #0
	mla r4, r0, r3, r4
	cmp r4, ip
	cmpeq r5, lr
	ldmeqfd sp!, {r4, r5, r6, lr}
	bxeq lr
	adds r5, r5, r2
	adc r4, r4, r3
	cmp r4, ip
	bmi L_021338f4
	bne L_02133898
	cmp r5, lr
	beq L_021338e4
	bcc L_021338f4
L_02133898:
	subs r5, r5, r2
	sbc r4, r4, r3
L_021338a0:
	adds r5, r5, r5
	adc r4, r4, r4
	adds r5, r5, r2
	adc r4, r4, r3
	adds lr, lr, lr
	adc ip, ip, ip
	cmp r4, ip
	bmi L_021338e4
	ldmnefd sp!, {r4, r5, r6, lr}
	bxne lr
	cmp r5, lr
	bcc L_021338e4
	ldmnefd sp!, {r4, r5, r6, lr}
	bxne lr
	tst r0, #1
	ldmeqfd sp!, {r4, r5, r6, lr}
	bxeq lr
L_021338e4:
	adds r0, r0, #1
	adc r1, r1, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_021338f4:
	adds r0, r0, #1
	adc r1, r1, #0
	b L_021338a0
L_02133900:
	rsbs r2, r2, #0
	rsc r3, r3, #0
	cmp r1, r3
	cmpeq r0, r2
	mov r1, ip, lsl #31
	mov r0, #0
	movne r0, #1
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133924:
	mov r1, ip, lsl #31
	mov r0, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133934:
	orrs r5, r0, r1, lsl #1
	beq L_02133a58
	cmp ip, lr
	beq L_0213399c
	movs r1, r1, lsl #12
	beq L_02133978
	clz r5, r1
	movs r1, r1, lsl r5
	sub ip, ip, r5
	add r5, ip, #31
	mov r1, r1, lsr #11
	orr r1, r1, r0, lsr r5
	rsb r5, r5, #32
	mov r0, r0, lsl r5
	mov ip, ip, lsl #1
	orr ip, ip, r4, lsr #31
	b L_021335ac
L_02133978:
	mvn ip, #19
	clz r5, r0
	movs r0, r0, lsl r5
	sub ip, ip, r5
	mov r1, r0, lsr #11
	mov r0, r0, lsl #21
	mov ip, ip, lsl #1
	orr ip, ip, r4, lsr #31
	b L_021335ac
L_0213399c:
	orrs r5, r0, r1, lsl #12
	bne L_02133a80
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	bcs L_021339c0
	and r5, r3, #0x80000000
	eor r1, r5, r1
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_021339c0:
	orrs r5, r2, r3, lsl #12
	bne L_02133aa0
	b L_02133ab8
L_021339cc:
	orrs r5, r2, r3, lsl #1
	beq L_02133a44
	cmp r4, lr
	beq L_02133a2c
	movs r3, r3, lsl #12
	beq L_02133a0c
	clz r5, r3
	movs r3, r3, lsl r5
	sub r4, r4, r5
	add r5, r4, #31
	mov r3, r3, lsr #11
	orr r3, r3, r2, lsr r5
	rsb r5, r5, #32
	mov r2, r2, lsl r5
	mov r4, r4, lsl #1
	b L_021335c0
L_02133a0c:
	mvn r4, #19
	clz r5, r2
	movs r2, r2, lsl r5
	sub r4, r4, r5
	mov r3, r2, lsr #11
	mov r2, r2, lsl #21
	mov r4, r4, lsl #1
	b L_021335c0
L_02133a2c:
	orrs r5, r2, r3, lsl #12
	bne L_02133aa0
	mov r1, ip, lsl #31
	mov r0, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133a44:
	mov r1, ip, lsl #31
	orr r1, r1, lr, lsl #19
	mov r0, #0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133a58:
	orrs r5, r2, r3, lsl #1
	beq L_02133ab8
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	cmpeq r2, #0
	bhi L_02133aa0
	eor r1, r1, r3
	and r1, r1, #0x80000000
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133a80:
	tst r1, #0x80000
	beq L_02133ab8
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	cmpeq r2, #0
	bhi L_02133aa0
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133aa0:
	tst r3, #0x80000
	beq L_02133ab8
	mov r1, r3
	mov r0, r2
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133ab8:
	orr r1, r1, #0x7f000000
	orr r1, r1, #0xf80000
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
L_02133ac8:
	.word 0x00000ffe
