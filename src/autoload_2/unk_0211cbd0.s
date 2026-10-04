; NitroSDK RTC (rtc/ARM9/api.c), most likely an `asm` function in the SDK source (not verified against the source;
; see the evidence below); linked as assembly per the project's assembly policy.
; autoload_2 0x0211cbd0-0x0211cbe8: RtcWaitBusy, wait while rtcWork.lock (data_021feb90) is RTC_LOCK_ON (1).
; Evidence: the routine keeps the lock address in r12 (ip). No C form gives that with any
; mwcc build (1.2 b56..sp4, 2.0, DSi, -O1..-O4, volatile pointer/struct/loop variants all load the address into
; r0/r1); the routine is the first function of the RTC file, where mwcc places a file's `asm` functions; the HGSS
; NitroSDK build has the identical routine (ldr ip / ldr r0,[ip] / cmp / beq / bx lr).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

	.extern data_021feb90

	.global RtcWaitBusy
	.type RtcWaitBusy, @function
	.size RtcWaitBusy, 0x18
RtcWaitBusy:
	ldr ip, L_0211cbe4 ; &rtcWork.lock
L_0211cbd4: ; loop
	ldr r0, [ip, #0]
	cmp r0, #1 ; RTC_LOCK_ON
	beq L_0211cbd4
	bx lr
L_0211cbe4:
	.word data_021feb90
