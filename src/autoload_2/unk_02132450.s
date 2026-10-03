; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02132450-0x021324e8: double ordered compare returning the result in the flags
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; double compare, RESULT IN THE CONDITION FLAGS (unordered: `adds ip, ip, #0` from 0; equal zeros:
; `cmpeq r1, r1`). Last word 0x021324e4 `b L_02132464` is unreachable (dsd: func_021324e4); merged here.
	.global func_02132450
	.type func_02132450, @function
	.size func_02132450, 0x98
func_02132450:
	mov ip, #0x200000
	cmn ip, r1, lsl #1
	bcs L_02132494
	cmn ip, r3, lsl #1
	bcs L_021324c0
L_02132464:
	orrs ip, r3, r1
	bmi L_02132478
	cmp r1, r3
	cmpeq r0, r2
	bx lr
L_02132478:
	orr ip, r0, ip, lsl #1
	orrs ip, ip, r2
	cmpeq r1, r1
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	bx lr
L_02132494:
	beq L_021324a4
	mov ip, #0
	adds ip, ip, #0
	bx lr
L_021324a4:
	cmp r0, #0
	bls L_021324b8
	mov ip, #0
	adds ip, ip, #0
	bx lr
L_021324b8:
	cmn ip, r3, lsl #1
	bcc L_02132464
L_021324c0:
	beq L_021324d0
	mov ip, #0
	adds ip, ip, #0
	bx lr
L_021324d0:
	cmp r2, #0
	bls L_02132464
	mov ip, #0
	adds ip, ip, #0
	bx lr
	b L_02132464
