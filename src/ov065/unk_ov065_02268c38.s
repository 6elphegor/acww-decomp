; Original assembly (ov065 network library): hand-written in the original; linked as assembly per the project's
; assembly policy. Assembled with mwasmarm (tools/configure.py, rule mwasm).
; ov065 0x02268c38-0x02268c64: two ARM clz helpers called from the Thumb code of the following unit
; (func_ov065_02268c38: number of set bits by repeated clz, func_ov065_02268c5c: clz).
; Evidence: ARM routines without prologue in a Thumb-compiled unit, built around clz (no C intrinsic in mwcc).

	.text

	.arm

	.global func_ov065_02268c38
	.type func_ov065_02268c38, @function
	.size func_ov065_02268c38, 0x24
func_ov065_02268c38:
	mov r1, r0
	mov r0, #0
	mov r3, #1
L_02268c44:
	clz r2, r1
	rsbs r2, r2, #0x1f
	bxlo lr
	bic r1, r1, r3, lsl r2
	add r0, r0, #1
	b L_02268c44

	.global func_ov065_02268c5c
	.type func_ov065_02268c5c, @function
	.size func_ov065_02268c5c, 0x8
func_ov065_02268c5c:
	clz r0, r0
	bx lr
