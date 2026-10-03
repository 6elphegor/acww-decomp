; Original assembly (NitroSDK mi_memory.c, Thumb part): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x02116178-0x02116188 (0xe bytes of Thumb code, then 2 bytes of alignment): MI_Zero36B.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.thumb

; MI_Zero36B(dest): three stmia of three zero registers
	.global func_02116178
	.type func_02116178, @function
	.size func_02116178, 0x10
func_02116178:
	mov r1, #0
	mov r2, #0
	mov r3, #0
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r2, r3}
	bx lr
