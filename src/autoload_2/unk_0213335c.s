; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x0213335c-0x02133540: _u32_div_f (u32 divide, quotient r0, remainder r1)
; 0x02133364 (after the divide-by-zero test) is a second entry, called from the 64-bit divide (0x02132f28):
; a global label inside the routine, func_02133364 (symbols.txt kind:label).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; _u32_div_f(a, b): b == 0 returns a unchanged; falls through.
	.global _u32_div_f
	.type _u32_div_f, @function
	.size _u32_div_f, 0x1e4
_u32_div_f:
	cmp r1, #0
	bxeq lr

; _u32_div_f body (second entry). Evidence: computed jump `add pc, pc, r2, lsl #2` into an unrolled
; `adcs; subcc; adcs` carry-chain division.
	.global func_02133364
func_02133364:
	cmp r0, r1
	movcc r1, r0
	movcc r0, #0
	bxcc lr
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
	bx lr
