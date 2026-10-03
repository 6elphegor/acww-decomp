; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02133150-0x0213335c: _s32_div_f (s32 divide, quotient r0, remainder r1)
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _s32_div_f(a, b). Evidence: computed jump `add pc, pc, r2, lsl #2` into an unrolled 32-step
; `adcs; subcc; adcs` carry-chain division.
	.global _s32_div_f
	.type _s32_div_f, @function
	.size _s32_div_f, 0x20c
_s32_div_f:
	eor ip, r0, r1
	and ip, ip, #0x80000000
	cmp r0, #0
	rsblt r0, r0, #0
	addlt ip, ip, #1
	cmp r1, #0
	rsblt r1, r1, #0
	beq L_02133348
	cmp r0, r1
	movcc r1, r0
	movcc r0, #0
	bcc L_02133348
	mov r2, #28
	mov r3, r0, lsr #4
	cmp r1, r3, lsr #12
	suble r2, r2, #16
	movle r3, r3, lsr #16
	cmp r1, r3, lsr #4
	suble r2, r2, #8
	movle r3, r3, lsr #8
	cmp r1, r3
	suble r2, r2, #4
	movle r3, r3, lsr #4
	mov r0, r0, lsl r2
	rsb r1, r1, #0
	adds r0, r0, r0
	add r2, r2, r2, lsl #1
	add pc, pc, r2, lsl #2
	nop
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	mov r1, r3
L_02133348:
	ands r3, ip, #0x80000000
	rsbne r0, r0, #0
	ands r3, ip, #1
	rsbne r1, r1, #0
	bx lr
