; Original assembly (NitroSDK os_protectionRegion.c): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x02114b44-0x02114b54: OS_SetProtectionRegion1, OS_SetProtectionRegion2 (mcr p15 c6).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_SetProtectionRegion1(param): CP15 c6,c1 = protection region 1 base/size
	.global func_02114b44
	.type func_02114b44, @function
	.size func_02114b44, 0x8
func_02114b44:
	mcr p15, 0, r0, c6, c1, 0
	bx lr

; OS_SetProtectionRegion2(param): CP15 c6,c2 = protection region 2 base/size
	.global func_02114b4c
	.type func_02114b4c, @function
	.size func_02114b4c, 0x8
func_02114b4c:
	mcr p15, 0, r0, c6, c2, 0
	bx lr
