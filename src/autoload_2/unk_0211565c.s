; Original assembly (NitroSDK math.c): hand-written in the original; linked as assembly per the project's assembly
; policy.
; autoload_2 0x0211565c-0x02115664: MATH_CountLeadingZerosFunc (clz).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MATH_CountLeadingZeros(x)
	.global func_0211565c
	.type func_0211565c, @function
	.size func_0211565c, 0x8
func_0211565c:
	clz r0, r0
	bx lr
