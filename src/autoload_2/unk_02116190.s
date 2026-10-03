; Original assembly (NitroSDK mi_uncompress.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02116190-0x02116224: MI_UncompressLZ8 (every output byte is written with swpb).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MI_UncompressLZ8(srcp, destp)
	.global func_02116190
	.type func_02116190, @function
	.size func_02116190, 0x94
func_02116190:
	stmfd sp!, {r4, r5, r6, lr}
	ldr r5, [r0], #4
	mov r2, r5, lsr #8
L_0211619c: ; next_flags
	cmp r2, #0
	ble L_0211621c
	ldrb lr, [r0], #1
	mov r4, #8
L_021161ac: ; next_bit
	subs r4, r4, #1
	blt L_0211619c
	tst lr, #0x80
	bne L_021161d0
	ldrb r6, [r0], #1
	swpb r6, r6, [r1]
	add r1, r1, #1
	sub r2, r2, #1
	b L_0211620c
L_021161d0: ; copy_ref
	ldrb r5, [r0, #0]
	mov r6, #3
	add r3, r6, r5, asr #4
	ldrb r6, [r0], #1
	and r5, r6, #0xf
	mov ip, r5, lsl #8
	ldrb r6, [r0], #1
	orr r5, r6, ip
	add ip, r5, #1
	sub r2, r2, r3
L_021161f8: ; copy_loop
	ldrb r5, [r1, -ip]
	swpb r5, r5, [r1]
	add r1, r1, #1
	subs r3, r3, #1
	bgt L_021161f8
L_0211620c: ; bit_done
	cmp r2, #0
	movgt lr, lr, lsl #1
	bgt L_021161ac
	b L_0211619c
L_0211621c: ; done
	ldmfd sp!, {r4, r5, r6, lr}
	bx lr
