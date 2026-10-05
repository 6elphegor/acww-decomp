; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02132340-0x02132450: double compares: _dgr, _dgeq
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; double compare, x in r0:r1, y in r2:r3: x > y (_dgr; unordered -> 0).
	.global _dgr
	.type _dgr, @function
	.size _dgr, 0x88
_dgr:
	mov ip, #0x200000
	cmn ip, r1, lsl #1
	bcs L_02132394
	cmn ip, r3, lsl #1
	bcs L_021323b0
L_02132354:
	orrs ip, r3, r1
	bmi L_02132370
	cmp r1, r3
	cmpeq r0, r2
	movhi r0, #1
	movls r0, #0
	bx lr
L_02132370:
	orr ip, r0, ip, lsl #1
	orrs ip, ip, r2
	moveq r0, #0
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	movhi r0, #1
	movls r0, #0
	bx lr
L_02132394:
	movne r0, #0
	bxne lr
	cmp r0, #0
	movhi r0, #0
	bxhi lr
	cmn ip, r3, lsl #1
	bcc L_02132354
L_021323b0:
	movne r0, #0
	bxne lr
	cmp r2, #0
	movhi r0, #0
	bxhi lr
	b L_02132354

; double compare, x in r0:r1, y in r2:r3: x >= y (_dgeq; unordered -> 0).
	.global _dgeq
	.type _dgeq, @function
	.size _dgeq, 0x88
_dgeq:
	mov ip, #0x200000
	cmn ip, r1, lsl #1
	bcs L_0213241c
	cmn ip, r3, lsl #1
	bcs L_02132438
L_021323dc:
	orrs ip, r3, r1
	bmi L_021323f8
	cmp r1, r3
	cmpeq r0, r2
	movcs r0, #1
	movcc r0, #0
	bx lr
L_021323f8:
	orr ip, r0, ip, lsl #1
	orrs ip, ip, r2
	moveq r0, #1
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	movcs r0, #1
	movcc r0, #0
	bx lr
L_0213241c:
	movne r0, #0
	bxne lr
	cmp r0, #0
	movhi r0, #0
	bxhi lr
	cmn ip, r3, lsl #1
	bcc L_021323dc
L_02132438:
	movne r0, #0
	bxne lr
	cmp r2, #0
	movhi r0, #0
	bxhi lr
	b L_021323dc
