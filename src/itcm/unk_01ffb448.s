; Original assembly (NitroSDK fx_mtx33.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffb448-0x01ffb498: MTX_Identity33_, MTX_Copy33To43_ (ARM `asm` routines of fx_mtx33.c: straight runs of
; stmia/ldmia with writeback, constants kept in fixed registers, no stack frame).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MTX_Identity33_(pDst): 3x3 identity, FX32_ONE = 0x1000
	.global MTX_Identity33_
	.type MTX_Identity33_, @function
	.size MTX_Identity33_, 0x24
MTX_Identity33_:
	mov r2, #0x1000
	str r2, [r0, #32]
	mov r3, #0
	stmia r0!, {r2, r3}
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r3}
	bx lr

; MTX_Copy33To43_(pSrc, pDst): copies the 3x3 rows, translation row cleared
	.global func_01ffb46c
	.type func_01ffb46c, @function
	.size func_01ffb46c, 0x2c
func_01ffb46c:
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	mov r2, #0
	str r2, [r1, #0]
	str r2, [r1, #4]
	str r2, [r1, #8]
	bx lr
