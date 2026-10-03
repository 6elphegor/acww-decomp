; Original assembly (NitroSDK fx_mtx44.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffbf40-0x01ffbfa0: MTX_Identity44_, MTX_Copy44To43_ (ARM `asm` routines of fx_mtx44.c: straight runs of
; stmia/ldmia with writeback, constants kept in fixed registers, no stack frame).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MTX_Identity44_(pDst): 4x4 identity, FX32_ONE = 0x1000
	.global func_01ffbf40
	.type func_01ffbf40, @function
	.size func_01ffbf40, 0x2c
func_01ffbf40:
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
	.global func_01ffbf6c
	.type func_01ffbf6c, @function
	.size func_01ffbf6c, 0x34
func_01ffbf6c:
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
