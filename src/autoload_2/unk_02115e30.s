; Original assembly (NitroSDK mi_memory.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02115e30-0x02116178: the ARM memory routines of mi_memory.c (predicated ldm/stm loops, push/pop of
; r4-r10 without lr, ldm into the base register, unaligned halfword accesses at [rN, #-1]).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; MIi_CpuClear16(data, dest, size)
	.global MIi_CpuClear16
	.type MIi_CpuClear16, @function
	.size MIi_CpuClear16, 0x18
MIi_CpuClear16:
	mov r3, #0
L_02115e34: ; loop
	cmp r3, r2
	strlth r0, [r1, r3]
	addlt r3, r3, #2
	blt L_02115e34
	bx lr

; MIi_CpuCopy16(src, dest, size)
	.global MIi_CpuCopy16
	.type MIi_CpuCopy16, @function
	.size MIi_CpuCopy16, 0x1c
MIi_CpuCopy16:
	mov ip, #0
L_02115e4c: ; loop
	cmp ip, r2
	ldrlth r3, [r0, ip]
	strlth r3, [r1, ip]
	addlt ip, ip, #2
	blt L_02115e4c
	bx lr

; MIi_CpuClear32(data, dest, size)
	.global func_02115e64
	.type func_02115e64, @function
	.size func_02115e64, 0x14
func_02115e64:
	add ip, r1, r2
L_02115e68: ; loop
	cmp r1, ip
	stmltia r1!, {r0}
	blt L_02115e68
	bx lr

; MIi_CpuCopy32(src, dest, size)
	.global MIi_CpuCopy32
	.type MIi_CpuCopy32, @function
	.size MIi_CpuCopy32, 0x18
MIi_CpuCopy32:
	add ip, r1, r2
L_02115e7c: ; loop
	cmp r1, ip
	ldmltia r0!, {r2}
	stmltia r1!, {r2}
	blt L_02115e7c
	bx lr

; MIi_CpuSend32(src, dest, size): every word goes to the same destination address
	.global MIi_CpuSend32
	.type MIi_CpuSend32, @function
	.size MIi_CpuSend32, 0x18
MIi_CpuSend32:
	add ip, r0, r2
L_02115e94: ; loop
	cmp r0, ip
	ldmltia r0!, {r2}
	strlt r2, [r1, #0]
	blt L_02115e94
	bx lr

; MIi_CpuClearFast(data, dest, size): 32-byte stm bursts, then words
	.global MIi_CpuClearFast
	.type MIi_CpuClearFast, @function
	.size MIi_CpuClearFast, 0x4c
MIi_CpuClearFast:
	stmfd sp!, {r4, r5, r6, r7, r8, r9}
	add r9, r1, r2
	mov ip, r2, lsr #5
	add ip, r1, ip, lsl #5
	mov r2, r0
	mov r3, r2
	mov r4, r2
	mov r5, r2
	mov r6, r2
	mov r7, r2
	mov r8, r2
L_02115ed4: ; loop32
	cmp r1, ip
	stmltia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
	blt L_02115ed4
L_02115ee0: ; loop4
	cmp r1, r9
	stmltia r1!, {r0}
	blt L_02115ee0
	ldmfd sp!, {r4, r5, r6, r7, r8, r9}
	bx lr

; MIi_CpuCopyFast(src, dest, size): 32-byte ldm/stm bursts, then words
	.global MIi_CpuCopyFast
	.type MIi_CpuCopyFast, @function
	.size MIi_CpuCopyFast, 0x38
MIi_CpuCopyFast:
	stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
	add r10, r1, r2
	mov ip, r2, lsr #5
	add ip, r1, ip, lsl #5
L_02115f04: ; loop32
	cmp r1, ip
	ldmltia r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
	stmltia r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
	blt L_02115f04
L_02115f14: ; loop4
	cmp r1, r10
	ldmltia r0!, {r2}
	stmltia r1!, {r2}
	blt L_02115f14
	ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
	bx lr

; MI_Copy32B(src, dest)
	.global MI_Copy32B
	.type MI_Copy32B, @function
	.size MI_Copy32B, 0x1c
MI_Copy32B:
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3}
	stmia r1!, {r2, r3}
	bx lr

; MI_Copy36B(src, dest)
	.global MI_Copy36B
	.type MI_Copy36B, @function
	.size MI_Copy36B, 0x1c
MI_Copy36B:
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	bx lr

; MI_Copy48B(src, dest)
	.global MI_Copy48B
	.type MI_Copy48B, @function
	.size MI_Copy48B, 0x24
MI_Copy48B:
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	bx lr

; MI_Copy64B(src, dest): the last ldm loads into its own base register
	.global MI_Copy64B
	.type MI_Copy64B, @function
	.size MI_Copy64B, 0x2c
MI_Copy64B:
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0!, {r2, r3, ip}
	stmia r1!, {r2, r3, ip}
	ldmia r0, {r0, r2, r3, ip}
	stmia r1!, {r0, r2, r3, ip}
	bx lr

; MI_CpuFill8(dest, data, size): byte fill through halfword/word stores
	.global MI_CpuFill8
	.type MI_CpuFill8, @function
	.size MI_CpuFill8, 0x94
MI_CpuFill8:
	cmp r2, #0
	bxeq lr
	tst r0, #1
	beq L_02115fe0
	ldrh ip, [r0, #-1]
	and ip, ip, #0xff
	orr r3, ip, r1, lsl #8
	strh r3, [r0, #-1]
	add r0, r0, #1
	subs r2, r2, #1
	bxeq lr
L_02115fe0: ; aligned2
	cmp r2, #2
	bcc L_02116028
	orr r1, r1, r1, lsl #8
	tst r0, #2
	beq L_02116000
	strh r1, [r0], #2
	subs r2, r2, #2
	bxeq lr
L_02116000: ; aligned4
	orr r1, r1, r1, lsl #16
	bics r3, r2, #3
	beq L_02116020
	sub r2, r2, r3
	add ip, r3, r0
L_02116014: ; words
	str r1, [r0], #4
	cmp r0, ip
	bcc L_02116014
L_02116020: ; tail2
	tst r2, #2
	strneh r1, [r0], #2
L_02116028: ; tail1
	tst r2, #1
	bxeq lr
	ldrh r3, [r0, #0]
	and r3, r3, #0xff00
	and r1, r1, #0xff
	orr r1, r1, r3
	strh r1, [r0, #0]
	bx lr

; MI_CpuCopy8(src, dest, size): byte copy through halfword/word accesses
	.global MI_CpuCopy8
	.type MI_CpuCopy8, @function
	.size MI_CpuCopy8, 0x130
MI_CpuCopy8:
	cmp r2, #0
	bxeq lr
	tst r1, #1
	beq L_02116088
	ldrh ip, [r1, #-1]
	and ip, ip, #0xff
	tst r0, #1
	ldrneh r3, [r0, #-1]
	movne r3, r3, lsr #8
	ldreqh r3, [r0, #0]
	orr r3, ip, r3, lsl #8
	strh r3, [r1, #-1]
	add r0, r0, #1
	add r1, r1, #1
	subs r2, r2, #1
	bxeq lr
L_02116088: ; dst_even
	eor ip, r1, r0
	tst ip, #1
	beq L_021160dc
	bic r0, r0, #1
	ldrh ip, [r0], #2
	mov r3, ip, lsr #8
	subs r2, r2, #2
	bcc L_021160c0
L_021160a8: ; odd_loop
	ldrh ip, [r0], #2
	orr ip, r3, ip, lsl #8
	strh ip, [r1], #2
	mov r3, ip, lsr #16
	subs r2, r2, #2
	bcs L_021160a8
L_021160c0: ; odd_done
	tst r2, #1
	bxeq lr
	ldrh ip, [r1, #0]
	and ip, ip, #0xff00
	orr ip, ip, r3
	strh ip, [r1, #0]
	bx lr
L_021160dc: ; same_parity
	tst ip, #2
	beq L_02116108
	bics r3, r2, #1
	beq L_02116154
	sub r2, r2, r3
	add ip, r3, r1
L_021160f4: ; half_loop
	ldrh r3, [r0], #2
	strh r3, [r1], #2
	cmp r1, ip
	bcc L_021160f4
	b L_02116154
L_02116108: ; same_align4
	cmp r2, #2
	bcc L_02116154
	tst r1, #2
	beq L_02116128
	ldrh r3, [r0], #2
	strh r3, [r1], #2
	subs r2, r2, #2
	bxeq lr
L_02116128: ; word_part
	bics r3, r2, #3
	beq L_02116148
	sub r2, r2, r3
	add ip, r3, r1
L_02116138: ; word_loop
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, ip
	bcc L_02116138
L_02116148: ; half_tail
	tst r2, #2
	ldrneh r3, [r0], #2
	strneh r3, [r1], #2
L_02116154: ; last_byte
	tst r2, #1
	bxeq lr
	ldrh r2, [r1, #0]
	ldrh r0, [r0, #0]
	and r2, r2, #0xff00
	and r0, r0, #0xff
	orr r0, r2, r0
	strh r0, [r1, #0]
	bx lr
