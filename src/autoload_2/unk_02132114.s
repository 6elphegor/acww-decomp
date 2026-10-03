; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02132114-0x02132198: double equality compare returning the result in the flags
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; double compare for (in)equality, RESULT IN THE CONDITION FLAGS (unordered: `movs ip, #1` = NE).
; The last word (0x02132194, `b L_02132128`) is unreachable; dsd made it a separate function
; func_02132194 (a branch into this routine's body). Merged here: see notes.txt.
	.global func_02132114
	.type func_02132114, @function
	.size func_02132114, 0x84
func_02132114:
	mov ip, #0x200000
	cmn ip, r1, lsl #1
	bcs L_02132154
	cmn ip, r3, lsl #1
	bcs L_02132178
L_02132128:
	orrs ip, r3, r1
	bmi L_0213213c
	cmp r1, r3
	cmpeq r0, r2
	bx lr
L_0213213c:
	orr ip, r0, ip, lsl #1
	orrs ip, ip, r2
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	bx lr
L_02132154:
	beq L_02132160
	movs ip, #1
	bx lr
L_02132160:
	cmp r0, #0
	bls L_02132170
	movs ip, #1
	bx lr
L_02132170:
	cmn ip, r3, lsl #1
	bcc L_02132128
L_02132178:
	beq L_02132184
	movs ip, #1
	bx lr
L_02132184:
	cmp r2, #0
	bls L_02132128
	movs ip, #1
	bx lr
	b L_02132128
