; Original assembly (NitroSDK math.c): hand-written in the original; linked as assembly per the project's assembly
; policy.
; autoload_2 0x0211565c-0x02115664: MATH_CountLeadingZerosFunc (clz).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MATH_CountLeadingZeros(x)
	.global OsCountZeroBits
	.type OsCountZeroBits, @function
	.size OsCountZeroBits, 0x8
OsCountZeroBits:
	clz r0, r0
	bx lr
