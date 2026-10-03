; Original assembly (NitroSDK os_tcm.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02114b00-0x02114b24: OS_EnableDTCM, OS_GetDTCMAddress (CP15 register access, mrc/mcr p15).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_EnableDTCM: CP15 control register |= 0x10000 (DTCM enable)
	.global func_02114b00
	.type func_02114b00, @function
	.size func_02114b00, 0x10
func_02114b00:
	mrc p15, 0, r0, c1, c0, 0
	orr r0, r0, #0x10000
	mcr p15, 0, r0, c1, c0, 0
	bx lr

; OS_GetDTCMAddress: CP15 DTCM region register & 0xfffff000 (OS_DTCM_SET_ADDR_MASK, kept in a literal pool)
	.global OS_GetDTCMAddress
	.type OS_GetDTCMAddress, @function
	.size OS_GetDTCMAddress, 0x14
OS_GetDTCMAddress:
	mrc p15, 0, r0, c9, c1, 0
	ldr r1, L_02114b20
	and r0, r0, r1
	bx lr
L_02114b20:
	.word 0xfffff000
