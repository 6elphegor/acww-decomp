; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy. Assembled with mwasmarm (tools/configure.py, rule mwasm).
; autoload_2 0x02132ef8-0x02133100: 64-bit divide/modulo: _ll_udiv, _ull_mod, _ll_mod, _ll_sdiv
; One routine with four entry points. r4 selects the result: bit 0 = remainder, bit 31 = sign. The unsigned
; entries join the shared code at func_02132f0c, the signed ones at func_02132f60; both reach the long division
; at func_02132fc4. Those three join points are global labels because symbols.txt names them (dsd made functions
; of them); nothing outside the routine calls them.
; Evidence: four entry points into one routine, `stmfd sp!, {r4-r7, fp, ip, lr}` (saves ip), shift-subtract loop
; with adds/adcs/adcs and subs/sbcs/sbcs three-word carry chains, rsbs/rsc negation, bl into the body of
; _u32_div_f (func_02133364, after its zero test).

	.text
	.arm

	.extern _s32_div_f
	.extern func_02133364

	.global _ll_udiv
	.global _ull_mod
	.global func_02132f0c
	.global _ll_mod
	.global _ll_sdiv
	.global func_02132f60
	.global func_02132fc4

; _ll_udiv: u64 / u64 (r4 = 0)
	.type _ll_udiv, @function
	.size _ll_udiv, 0xc
_ll_udiv:
	stmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #0
	b func_02132f0c

; _ull_mod: u64 % u64 (r4 = 1), falls through
	.type _ull_mod, @function
	.size _ull_mod, 0x8
_ull_mod:
	stmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #1

; unsigned path: divide by zero returns the dividend; both high words zero -> 32-bit division
; (func_02133364 = _u32_div_f after its zero test); else the long division
	.type func_02132f0c, @function
	.size func_02132f0c, 0x34
func_02132f0c:
	orrs r5, r3, r2
	bne L_02132f1c
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
L_02132f1c:
	orrs r5, r1, r3
	bne func_02132fc4
	mov r1, r2
	bl func_02133364
	cmp r4, #0
	movne r0, r1
	mov r1, #0
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr

; _ll_mod: s64 % s64 (r4 = sign of the dividend | 1)
	.type _ll_mod, @function
	.size _ll_mod, 0x10
_ll_mod:
	stmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, r1
	orr r4, r4, #1
	b func_02132f60

; _ll_sdiv: s64 / s64 (r4 = sign of the quotient), falls through
	.type _ll_sdiv, @function
	.size _ll_sdiv, 0x10
_ll_sdiv:
	stmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	eor r4, r1, r3
	mov r4, r4, asr #1
	mov r4, r4, lsl #1

; signed path: values that fit in 32 bits -> _s32_div_f; else negate to magnitudes, fall through
	.type func_02132f60, @function
	.size func_02132f60, 0x64
func_02132f60:
	orrs r5, r3, r2
	bne L_02132f70
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
L_02132f70:
	mov r5, r0, lsr #31
	add r5, r5, r1
	mov r6, r2, lsr #31
	add r6, r6, r3
	orrs r6, r5, r6
	bne L_02132fa4
	mov r1, r2
	bl _s32_div_f
	ands r4, r4, #1
	movne r0, r1
	mov r1, r0, asr #31
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
L_02132fa4:
	cmp r1, #0
	bge L_02132fb4
	rsbs r0, r0, #0
	rsc r1, r1, #0
L_02132fb4:
	cmp r3, #0
	bge func_02132fc4
	rsbs r2, r2, #0
	rsc r3, r3, #0

; the 64-bit shift-subtract long division and result selection
	.type func_02132fc4, @function
	.size func_02132fc4, 0x13c
func_02132fc4:
	orrs r5, r1, r0
	beq L_021330e8
	mov r5, #0
	mov r6, #1
	cmp r3, #0
	bmi L_02132ff0
L_02132fdc:
	add r5, r5, #1
	adds r2, r2, r2
	adcs r3, r3, r3
	bpl L_02132fdc
	add r6, r6, r5
L_02132ff0:
	cmp r1, #0
	blt L_02133010
L_02132ff8:
	cmp r6, #1
	beq L_02133010
	sub r6, r6, #1
	adds r0, r0, r0
	adcs r1, r1, r1
	bpl L_02132ff8
L_02133010:
	mov r7, #0
	mov ip, #0
	mov r11, #0
	b L_02133038
L_02133020:
	orr ip, ip, #1
	subs r6, r6, #1
	beq L_02133090
	adds r0, r0, r0
	adcs r1, r1, r1
	adcs r7, r7, r7
L_02133038:
	subs r0, r0, r2
	sbcs r1, r1, r3
	sbcs r7, r7, #0
	adds ip, ip, ip
	adc r11, r11, r11
	cmp r7, #0
	bge L_02133020
L_02133054:
	subs r6, r6, #1
	beq L_02133088
	adds r0, r0, r0
	adcs r1, r1, r1
	adc r7, r7, r7
	adds r0, r0, r2
	adcs r1, r1, r3
	adc r7, r7, #0
	adds ip, ip, ip
	adc r11, r11, r11
	cmp r7, #0
	bge L_02133020
	b L_02133054
L_02133088:
	adds r0, r0, r2
	adc r1, r1, r3
L_02133090:
	ands r7, r4, #1
	moveq r0, ip
	moveq r1, r11
	beq L_021330c8
	subs r7, r5, #32
	movge r0, r1, lsr r7
	bge L_021330ec
	rsb r7, r5, #32
	mov r0, r0, lsr r5
	orr r0, r0, r1, lsl r7
	mov r1, r1, lsr r5
	b L_021330c8
	mov r0, r1, lsr r7
	mov r1, #0
L_021330c8:
	cmp r4, #0
	blt L_021330d8
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
L_021330d8:
	rsbs r0, r0, #0
	rsc r1, r1, #0
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
L_021330e8:
	mov r0, #0
L_021330ec:
	mov r1, #0
	cmp r4, #0
	blt L_021330d8
	ldmfd sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
