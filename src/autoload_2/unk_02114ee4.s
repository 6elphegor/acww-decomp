; Original assembly (NitroSDK os_alarm.c): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x02114ee4-0x02114ef4: the timer-interrupt wrapper of the alarm system (OSi_AlarmHandler, which calls
; OSi_ArrangeTimer = OSi_ArrangeTimer).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern OSi_ArrangeTimer
	.arm

	.global OSi_AlarmHandler
	.type OSi_AlarmHandler, @function
	.size OSi_AlarmHandler, 0x10
OSi_AlarmHandler:
	stmfd sp!, {lr}
	bl OSi_ArrangeTimer
	ldmfd sp!, {lr}
	bx lr
