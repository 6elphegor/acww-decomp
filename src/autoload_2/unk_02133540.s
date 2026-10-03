; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02133540-0x02133570: 64-bit logical shift right
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; 64-bit logical shift right (_ll_ushr): a r0:r1 >> (n r2 & 63).
	.global func_02133540
	.type func_02133540, @function
	.size func_02133540, 0x30
func_02133540:
	ands r2, r2, #63
	bxeq lr
	subs r3, r2, #32
	bge L_02133564
	rsb r3, r2, #32
	mov r0, r0, lsr r2
	orr r0, r0, r1, lsl r3
	mov r1, r1, lsr r2
	bx lr
L_02133564:
	mov r0, r1, lsr r3
	mov r1, #0
	bx lr
