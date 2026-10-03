; Original assembly (NitroSDK fx_mtx43.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffb828-0x01ffb898: MTX_Scale43_, MTX_RotX43_, MTX_RotY43_, MTX_RotZ43_ (Thumb `asm` routines of
; fx_mtx43.c, code16: `stmia r0!` stores, constants built in fixed registers, stores in hand-picked order).
; Each routine is followed by 2 bytes of zero padding up to the next 4-byte boundary (section alignment).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.thumb

; MTX_Scale43_(pDst, x, y, z)
	.global func_01ffb828
	.type func_01ffb828, @function
	.size func_01ffb828, 0x16
func_01ffb828:
	stmia r0!, {r1}
	mov r1, #0
	str r3, [r0, #28]
	mov r3, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2, r3}
	mov r2, #0
	stmia r0!, {r1, r3}
	add r0, #4
	stmia r0!, {r1, r2, r3}
	bx lr
	.short 0x0000

; MTX_RotX43_(pDst, sinVal, cosVal)
	.global func_01ffb840
	.type func_01ffb840, @function
	.size func_01ffb840, 0x1e
func_01ffb840:
	str r1, [r0, #20]
	neg r1, r1
	str r1, [r0, #28]
	mov r1, #1
	lsl r1, r1, #12
	stmia r0!, {r1}
	mov r3, #0
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2}
	str r1, [r0, #4]
	add r0, #12
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r3}
	bx lr
	.short 0x0000

; MTX_RotY43_(pDst, sinVal, cosVal)
	.global func_01ffb860
	.type func_01ffb860, @function
	.size func_01ffb860, 0x1a
func_01ffb860:
	str r1, [r0, #24]
	mov r3, #0
	stmia r0!, {r2, r3}
	neg r1, r1
	stmia r0!, {r1, r3}
	mov r1, #1
	lsl r1, r1, #12
	stmia r0!, {r1, r3}
	add r0, #4
	mov r1, #0
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r3}
	bx lr
	.short 0x0000

; MTX_RotZ43_(pDst, sinVal, cosVal)
	.global func_01ffb87c
	.type func_01ffb87c, @function
	.size func_01ffb87c, 0x1a
func_01ffb87c:
	stmia r0!, {r2}
	mov r3, #0
	stmia r0!, {r1, r3}
	neg r1, r1
	stmia r0!, {r1, r2, r3}
	mov r1, #0
	mov r2, #0
	mov r3, #1
	lsl r3, r3, #12
	stmia r0!, {r1, r2, r3}
	mov r3, #0
	stmia r0!, {r1, r2, r3}
	bx lr
