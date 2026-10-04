; Original assembly (NitroSDK os_irqHandler.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffd50c-0x01ffd6c0: OS_IrqHandler (clz priority scan, `ldmeqfd sp!, {pc}` returns, return address set by
; hand to OS_IrqHandler_ThreadSwitch), OS_IrqHandler_ThreadSwitch (msr/mrs cpsr/spsr mode switches, user-bank
; `stmib r0!, {r2-r14}^` / `ldmib r1!, {r0-r14}^`, `ldr pc, [sp], #4` returns, stmda/ldmfd {pc} exception exit).
; OSThread: state 0x64 (u16), next 0x68, queue 0x78, link.prev 0x7c, link.next 0x80; context at 0 (OSContext,
; cp_context 0x48, sp_svc 0x44, pc_plus4 0x40). OSThreadInfo (data_021fcc2c): isNeedRescheduling 0x00 (u16),
; current 0x04, list 0x08, switchCallback 0x0c. OSi_IrqThreadQueue (data_027e0450): head 0x00, tail 0x04.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern data_021fcc2c
	.extern data_027e0000
	.extern data_027e0450
	.extern CPi_RestoreContext
	.extern CP_SaveContext
	.arm

; OS_IrqHandler
	.global OS_IrqHandler
	.type OS_IrqHandler, @function
	.size OS_IrqHandler, 0x58
OS_IrqHandler:
	stmfd sp!, {lr}
	mov r12, #0x04000000
	add r12, r12, #0x210 ; REG_IE
	ldr r1, [r12, #-8] ; REG_IME
	cmp r1, #0
	ldmeqfd sp!, {pc}
	ldmia r12, {r1, r2} ; REG_IE, REG_IF
	ands r1, r1, r2
	ldmeqfd sp!, {pc}
	mov r3, #0x80000000
L_01ffd534: ; scan
	clz r0, r1
	bics r1, r1, r3, lsr r0
	bne L_01ffd534
	mov r1, r3, lsr r0
	str r1, [r12, #4] ; REG_IF: acknowledge
	rsbs r0, r0, #31
	ldr r1, L_01ffd55c
	ldr r0, [r1, r0, lsl #2]
	ldr lr, L_01ffd560
	bx r0
L_01ffd55c:
	.word data_027e0000
L_01ffd560:
	.word OS_IrqHandler_ThreadSwitch

; OS_IrqHandler_ThreadSwitch
	.global OS_IrqHandler_ThreadSwitch
	.type OS_IrqHandler_ThreadSwitch, @function
	.size OS_IrqHandler_ThreadSwitch, 0x15c
OS_IrqHandler_ThreadSwitch:
	mov r2, #1
	mov r3, #0
	ldr r12, L_01ffd6b0
	ldr r12, [r12, #0]
	cmp r12, #0
	beq L_01ffd5b4
L_01ffd57c: ; wakeup
	str r2, [r12, #0x64]
	str r3, [r12, #0x78]
	str r3, [r12, #0x7c]
	ldr r0, [r12, #0x80]
	str r3, [r12, #0x80]
	mov r12, r0
	cmp r12, #0
	bne L_01ffd57c
	ldr r12, L_01ffd6b0
	str r3, [r12, #0]
	str r3, [r12, #4]
	ldr r12, L_01ffd6b4
	mov r1, #1
	strh r1, [r12, #0]
L_01ffd5b4: ; thread_switch
	ldr r12, L_01ffd6b4
	ldrh r1, [r12, #0]
	cmp r1, #0
	ldreq pc, [sp], #4
	mov r1, #0
	strh r1, [r12, #0]
	mov r3, #0xd2
	msr cpsr_c, r3
	add r2, r12, #8
	ldr r1, [r2, #0]
L_01ffd5dc: ; find
	cmp r1, #0
	ldrneh r0, [r1, #0x64]
	cmpne r0, #1
	ldrne r1, [r1, #0x68]
	bne L_01ffd5dc
	cmp r1, #0
	bne L_01ffd604
L_01ffd5f8: ; no_switch
	mov r3, #0x92
	msr cpsr_c, r3
	ldr pc, [sp], #4
L_01ffd604: ; found
	ldr r0, [r12, #4]
	cmp r1, r0
	beq L_01ffd5f8
	ldr r3, [r12, #0xc]
	cmp r3, #0
	beq L_01ffd62c
	stmfd sp!, {r0, r1, r12}
	mov lr, pc
	bx r3
	ldmfd sp!, {r0, r1, r12}
L_01ffd62c: ; no_callback
	str r1, [r12, #4]
	mrs r2, spsr
	str r2, [r0, #0]!
	stmfd sp!, {r0, r1}
	add r0, r0, #0
	add r0, r0, #0x48
	ldr r1, L_01ffd6b8
	blx r1
	ldmfd sp!, {r0, r1}
	ldmib sp!, {r2, r3}
	stmib r0!, {r2, r3}
	ldmib sp!, {r2, r3, r12, r14}
	stmib r0!, {r2-r14}^
	stmib r0!, {r14}
	mov r3, #0xd3
	msr cpsr_c, r3
	stmib r0!, {sp}
	stmfd sp!, {r1}
	add r0, r1, #0
	add r0, r0, #0x48
	ldr r1, L_01ffd6bc
	blx r1
	ldmfd sp!, {r1}
	ldr sp, [r1, #0x44]
	mov r3, #0xd2
	msr cpsr_c, r3
	ldr r2, [r1, #0]!
	msr spsr_fc, r2
	ldr lr, [r1, #0x40]
	ldmib r1!, {r0-r14}^
	nop
	stmda sp!, {r0-r3, r12, r14}
	ldmfd sp!, {pc}
L_01ffd6b0:
	.word data_027e0450
L_01ffd6b4:
	.word data_021fcc2c
L_01ffd6b8:
	.word CP_SaveContext
L_01ffd6bc:
	.word CPi_RestoreContext
