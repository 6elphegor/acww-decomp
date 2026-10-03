; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x0213294c-0x021329d0: _f2d (float -> double)
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _f2d(float) -> double. Evidence: clz. Literal 0x7ff00000 at the end.
	.global func_0213294c
	.type func_0213294c, @function
	.size func_0213294c, 0x84
func_0213294c:
	and r2, r0, #0x80000000
	mov ip, r0, lsr #23
	mov r3, r0, lsl #9
	ands ip, ip, #255
	beq L_0213297c
	cmp ip, #255
	beq L_021329a8
L_02132968:
	add ip, ip, #0x380
	mov r0, r3, lsl #20
	orr r1, r2, r3, lsr #12
	orr r1, r1, ip, lsl #20
	bx lr
L_0213297c:
	cmp r3, #0
	bne L_02132990
	mov r1, r2
	mov r0, #0
	bx lr
L_02132990:
	mov r3, r3, lsr #1
	clz ip, r3
	movs r3, r3, lsl ip
	rsb ip, ip, #1
	add r3, r3, r3
	b L_02132968
L_021329a8:
	cmp r3, #0
	bhi L_021329c0
	ldr r1, L_021329cc ; (was ldr r1, [pc, #20])
	orr r1, r1, r2
	mov r0, #0
	bx lr
L_021329c0:
	mvn r0, #0
	bic r1, r0, #0x80000000
	bx lr
L_021329cc:
	.word 0x7ff00000
