; Original assembly (NitroSDK os_protectionRegion.c): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x02114b44-0x02114b54: OS_SetProtectionRegion1, OS_SetProtectionRegion2 (mcr p15 c6).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_SetProtectionRegion1(param): CP15 c6,c1 = protection region 1 base/size
	.global OS_SetProtectionRegion1
	.type OS_SetProtectionRegion1, @function
	.size OS_SetProtectionRegion1, 0x8
OS_SetProtectionRegion1:
	mcr p15, 0, r0, c6, c1, 0
	bx lr

; OS_SetProtectionRegion2(param): CP15 c6,c2 = protection region 2 base/size
	.global OS_SetProtectionRegion2
	.type OS_SetProtectionRegion2, @function
	.size OS_SetProtectionRegion2, 0x8
OS_SetProtectionRegion2:
	mcr p15, 0, r0, c6, c2, 0
	bx lr
