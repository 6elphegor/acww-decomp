; Original assembly (NitroSDK os_interrupt.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffa2ec-0x01ffa328: OS_DisableInterrupts, OS_DisableInterrupts_IrqAndFiq, OS_EnableInterrupts
; (mrs/msr on the CPSR; 0x80 = HW_PSR_IRQ_DISABLE, 0xc0 = HW_PSR_IRQ_FIQ_DISABLE).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_DisableInterrupts: returns the previous IRQ-disable bit
	.global OS_DisableInterrupts
	.type OS_DisableInterrupts, @function
	.size OS_DisableInterrupts, 0x14
OS_DisableInterrupts:
	mrs r0, cpsr
	orr r1, r0, #0x80
	msr cpsr_c, r1
	and r0, r0, #0x80
	bx lr

; OS_DisableInterrupts_IrqAndFiq
	.global OS_DisableInterrupts_IrqAndFiq
	.type OS_DisableInterrupts_IrqAndFiq, @function
	.size OS_DisableInterrupts_IrqAndFiq, 0x14
OS_DisableInterrupts_IrqAndFiq:
	mrs r0, cpsr
	orr r1, r0, #0xc0
	msr cpsr_c, r1
	and r0, r0, #0xc0
	bx lr

; OS_EnableInterrupts
	.global OS_EnableInterrupts
	.type OS_EnableInterrupts, @function
	.size OS_EnableInterrupts, 0x14
OS_EnableInterrupts:
	mrs r0, cpsr
	bic r1, r0, #0x80
	msr cpsr_c, r1
	and r0, r0, #0x80
	bx lr
