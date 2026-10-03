; Original assembly (NitroSDK mi_swap.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02116188-0x02116190: MI_SwapWord (swp).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MI_SwapWord(setData, destp): atomically exchanges *destp with setData, returns the old value
	.global MI_SwapWord
	.type MI_SwapWord, @function
	.size MI_SwapWord, 0x8
MI_SwapWord:
	swp r0, r0, [r1]
	bx lr
