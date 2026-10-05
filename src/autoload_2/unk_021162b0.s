; Original assembly (NitroSDK mi_uncomp_stream.c): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x021162b0-0x021163b0: the streaming LZ8 decoder (MI_ReadUncompLZ8; output bytes written with swpb).
; Context (MIUncompContextLZ): destp 0x0, destCount 0x4, flags 0xb, flagIndex 0xc, length 0xd, lengthFlg 0xe.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MI_ReadUncompLZ8(context, data, len): returns the remaining destination count
	.global MI_ReadUncompLZ8
	.type MI_ReadUncompLZ8, @function
	.size MI_ReadUncompLZ8, 0x100
MI_ReadUncompLZ8:
	stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
	ldr r3, [r0, #0]
	ldr r4, [r0, #4]
	ldrb r5, [r0, #11]
	ldrb r6, [r0, #12]
	ldrb r7, [r0, #13]
	ldrb r8, [r0, #14]
L_021162cc: ; outer
	cmp r4, #0
	ble L_0211638c
	cmp r6, #0
	beq L_02116374
L_021162dc: ; bit_loop
	cmp r2, #0
	beq L_0211638c
	tst r5, #0x80
	bne L_02116304
	ldrb r9, [r1], #1
	sub r4, r4, #1
	sub r2, r2, #1
	swpb r9, r9, [r3]
	add r3, r3, #1
	b L_02116360
L_02116304: ; reference
	cmp r8, #0
	bne L_02116318
	ldrb r7, [r1], #1
	mov r8, #1
	sub r2, r2, #1
L_02116318: ; have_length
	cmp r2, #0
	beq L_0211638c
	and r9, r7, #0xf
	mov r10, r9, lsl #8
	ldrb r9, [r1], #1
	mov r8, #0
	sub r2, r2, #1
	orr r9, r9, r10
	add r9, r9, #1
	mov r10, #3
	adds r7, r10, r7, asr #4
	beq L_02116360
L_02116348: ; copy_loop
	ldrb r10, [r3, -r9]
	sub r4, r4, #1
	swpb r10, r10, [r3]
	add r3, r3, #1
	subs r7, r7, #1
	bgt L_02116348
L_02116360: ; bit_done
	cmp r4, #0
	beq L_0211638c
	mov r5, r5, lsl #1
	subs r6, r6, #1
	bne L_021162dc
L_02116374: ; new_flags
	cmp r2, #0
	beq L_0211638c
	ldrb r5, [r1], #1
	mov r6, #8
	sub r2, r2, #1
	b L_021162cc
L_0211638c: ; save
	str r3, [r0, #0]
	str r4, [r0, #4]
	strb r5, [r0, #11]
	strb r6, [r0, #12]
	strb r7, [r0, #13]
	strb r8, [r0, #14]
	mov r0, r4
	ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
	bx lr
