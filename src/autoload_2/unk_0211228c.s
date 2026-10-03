; Original assembly (NitroSDK g3.c / gx_g3, GX_SendFifo48B): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x0211228c-0x021122b0, one function.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; GX_SendFifo48B(src, fifo): sends 48 bytes to the FIFO register in r1, 12 bytes per ldm/stm; the stm has NO
; writeback (every burst goes to the same register address), a form the compiler never produces.
	.global GX_SendFifo48B
	.type GX_SendFifo48B, @function
	.size GX_SendFifo48B, 0x24
GX_SendFifo48B:
	ldmia r0!, {r2, r3, ip}
	stmia r1, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1, {r2, r3, ip}
	bx lr
