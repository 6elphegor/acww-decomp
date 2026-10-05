; Original assembly (NitroSDK SHA-1 block routine, MATHi_SHA1ProcessBlock-style): hand-written in the original;
; linked as assembly per the project's assembly policy.
; autoload_2 0x0211b3f8-0x0211b68c: the routine's 20-byte constant block (0x0211b3f8-0x0211b40c, placed in .text
; IN FRONT of the code and read with negative pc-relative loads, no relocations) and the block transform itself
; (DGTi_hash2_arm4_small, reached through a function pointer in .data at 0x0213c1c8).
; The constant block is data at the start of the unit, named data_0211b3f8 (symbols.txt kind:data: dsd keeps it as
; the routine's pre-code constant pool); the loads address it by local labels.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; constants of the SHA-1 block routine: byte-swap mask, then K0..K3
	.global data_0211b3f8
data_0211b3f8:
L_0211b3f8:
	.word 0x00ff00ff ; byte-swap mask (big-endian message words)
L_0211b3fc:
	.word 0x5a827999 ; K0, rounds 0-19
L_0211b400:
	.word 0x6ed9eba1 ; K1, rounds 20-39
L_0211b404:
	.word 0x8f1bbcdc ; K2, rounds 40-59
L_0211b408:
	.word 0xca62c1d6 ; K3, rounds 60-79

; SHA-1 block transform(hash[5], data, len): processes len bytes (multiple of 64) of data into hash.
; sp+0x00..0x7f: 32-word message schedule ring (each word is stored at w and w+16), sp+0x80: remaining length.
	.global DGTi_hash2_arm4_small
	.type DGTi_hash2_arm4_small, @function
	.size DGTi_hash2_arm4_small, 0x280
DGTi_hash2_arm4_small:
	stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, lr}
	ldmia r0, {r3, r9, r10, r11, ip}
	sub sp, sp, #0x84
	str r2, [sp, #0x80]
L_0211b41c: ; block
	ldr r8, L_0211b3fc ; K0 (0x0211b3fc) (was ldr r8, [pc, #-40])
	ldr r7, L_0211b3f8 ; 0x00ff00ff (0x0211b3f8) (was ldr r7, [pc, #-48])
	mov r6, sp
	mov r5, #0
L_0211b42c: ; r0_15
	ldr r4, [r1], #4
	add r2, r8, ip
	add r2, r2, r3, ror #27
	and lr, r4, r7
	and r4, r7, r4, ror #24
	orr r4, r4, lr, ror #8
	str r4, [r6, #0x40]
	str r4, [r6], #4
	add r2, r2, r4
	eor r4, r10, r11
	and r4, r4, r9
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov ip, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r5, r5, #4
	cmp r5, #0x40
	blt L_0211b42c
	mov r7, #0
	mov r6, sp
L_0211b48c: ; r16_19
	ldr r2, [r6, #0]
	ldr r5, [r6, #8]
	ldr r4, [r6, #0x20]
	ldr lr, [r6, #0x34]
	eor r2, r2, r5
	eor r4, r4, lr
	eor r2, r2, r4
	mov r2, r2, ror #31
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, ip
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor r4, r10, r11
	and r4, r4, r9
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov ip, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #4
	cmp r7, #16
	blt L_0211b48c
	ldr r8, L_0211b400 ; K1 (0x0211b400) (was ldr r8, [pc, #-252])
	mov r7, #0
L_0211b4fc: ; r20_39
	ldr r2, [r6, #0]
	ldr r4, [r6, #8]
	ldr lr, [r6, #0x20]
	ldr r5, [r6, #0x34]
	eor r2, r2, r4
	eor lr, lr, r5
	eor r2, r2, lr
	mov r2, r2, ror #31
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, ip
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor lr, r9, r10
	eor lr, lr, r11
	add r2, r2, lr
	mov r9, r9, ror #2
	mov ip, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #12
	moveq r6, sp
	cmp r7, #20
	blt L_0211b4fc
	ldr r8, L_0211b404 ; K2 (0x0211b404) (was ldr r8, [pc, #-364])
	mov r7, #0
L_0211b570: ; r40_59
	ldr r2, [r6, #0]
	ldr lr, [r6, #8]
	ldr r5, [r6, #0x20]
	ldr r4, [r6, #0x34]
	eor r2, r2, lr
	eor r5, r5, r4
	eor r2, r2, r5
	mov r2, r2, ror #31
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, ip
	add r2, r2, r8
	add r2, r2, r3, ror #27
	orr r5, r9, r10
	and r5, r5, r11
	and r4, r9, r10
	orr r5, r5, r4
	add r2, r2, r5
	mov r9, r9, ror #2
	mov ip, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #8
	moveq r6, sp
	cmp r7, #20
	blt L_0211b570
	ldr r8, L_0211b408 ; K3 (0x0211b408) (was ldr r8, [pc, #-484])
	mov r7, #0
L_0211b5ec: ; r60_79
	ldr r2, [r6, #0]
	ldr r5, [r6, #8]
	ldr r4, [r6, #0x20]
	ldr lr, [r6, #0x34]
	eor r2, r2, r5
	eor r4, r4, lr
	eor r2, r2, r4
	mov r2, r2, ror #31
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, ip
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor r4, r9, r10
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov ip, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #4
	moveq r6, sp
	cmp r7, #20
	blt L_0211b5ec
	ldmia r0, {r2, r4, r6, r7, lr}
	add r3, r3, r2
	add r9, r9, r4
	add r10, r10, r6
	add r11, r11, r7
	add ip, ip, lr
	stmia r0, {r3, r9, r10, r11, ip}
	ldr lr, [sp, #0x80]
	subs lr, lr, #0x40
	str lr, [sp, #0x80]
	bgt L_0211b41c
	add sp, sp, #0x84
	ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, pc}
