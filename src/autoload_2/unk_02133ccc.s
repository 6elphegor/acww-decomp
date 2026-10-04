; Original assembly (Metrowerks semihosting console support): hand-written in the original; linked as assembly per
; the project's assembly policy (swi 0x123456 = ARM semihosting call; str lr / ldr pc frame).
; autoload_2 0x02133ccc-0x02133d04.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; SYS_WRITEC (3): write the character at *p to the debugger console
	.global sys_writec
	.type sys_writec, @function
	.size sys_writec, 0x14
sys_writec:
	str lr, [sp, #-4]!
	mov r1, r0
	mov r0, #3
	swi 0x123456
	ldr pc, [sp], #4

; SYS_READC (7): read one character from the debugger console
	.global sys_readc
	.type sys_readc, @function
	.size sys_readc, 0x14
sys_readc:
	str lr, [sp, #-4]!
	mov r1, #0
	mov r0, #7
	swi 0x123456
	ldr pc, [sp], #4

; SYS_EXIT (0x18, angel_SWIreason_ReportException): end the program under the debugger
	.global sys_exit
	.type sys_exit, @function
	.size sys_exit, 0x10
sys_exit:
	mov r1, #0
	mov r0, #0x18
	swi 0x123456
	mov pc, lr
