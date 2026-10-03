; Original assembly (NitroSDK os_system.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; itcm 0x01ffa494-0x01ffa4a0: OS_SpinWait. No instruction a compiler cannot emit: it qualifies only as a routine
; known to be assembly in the public NitroSDK sources (os_system.c `asm void OS_SpinWait(u32 cycle)`).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; OS_SpinWait(cycle): busy loop, 4 cycles per iteration
	.global func_01ffa494
	.type func_01ffa494, @function
	.size func_01ffa494, 0xc
func_01ffa494:
L_01ffa494: ; loop
	subs r0, r0, #4
	bcs L_01ffa494
	bx lr
