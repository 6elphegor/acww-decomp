; Original assembly (NitroSDK os_interrupt.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffa3d4-0x01ffa404: OS_RestoreInterrupts, OS_RestoreInterrupts_IrqAndFiq (mrs/msr on the CPSR).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_RestoreInterrupts(state): sets the IRQ-disable bit to `state`, returns the previous one
	.global OS_RestoreInterrupts
	.type OS_RestoreInterrupts, @function
	.size OS_RestoreInterrupts, 0x18
OS_RestoreInterrupts:
	mrs r1, cpsr
	bic r2, r1, #0x80
	orr r2, r2, r0
	msr cpsr_c, r2
	and r0, r1, #0x80
	bx lr

; OS_RestoreInterrupts_IrqAndFiq(state)
	.global OS_RestoreInterrupts_IrqAndFiq
	.type OS_RestoreInterrupts_IrqAndFiq, @function
	.size OS_RestoreInterrupts_IrqAndFiq, 0x18
OS_RestoreInterrupts_IrqAndFiq:
	mrs r1, cpsr
	bic r2, r1, #0xc0
	orr r2, r2, r0
	msr cpsr_c, r2
	and r0, r1, #0xc0
	bx lr
