; Original assembly (NitroSDK fx_mtx44.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffbf40-0x01ffbfa0: MTX_Identity44_, MTX_Copy44To43_ (ARM `asm` routines of fx_mtx44.c: straight runs of
; stmia/ldmia with writeback, constants kept in fixed registers, no stack frame).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MTX_Identity44_(pDst): 4x4 identity, FX32_ONE = 0x1000
	.global MTX_Identity44_
	.type MTX_Identity44_, @function
	.size MTX_Identity44_, 0x2c
MTX_Identity44_:
	mov r2, #0x1000
	mov r3, #0
	stmia r0!, {r2, r3}
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2}
	bx lr

; MTX_Copy44To43_(pSrc, pDst): drops the 4th column
	.global MTX_Copy44To43_
	.type MTX_Copy44To43_, @function
	.size MTX_Copy44To43_, 0x34
MTX_Copy44To43_:
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	bx lr
