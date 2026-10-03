; Original assembly (NitroSDK os_cache.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02114528-0x02114624: the nine DC_/IC_ cache functions (CP15 c7 cache operations, mcr p15).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; DC_InvalidateAll
	.global func_02114528
	.type func_02114528, @function
	.size func_02114528, 0xc
func_02114528:
	mov r0, #0
	mcr p15, 0, r0, c7, c6, 0
	bx lr

; DC_StoreAll: clean every data-cache line by set/way (4 segments x 32 lines)
	.global func_02114534
	.type func_02114534, @function
	.size func_02114534, 0x2c
func_02114534:
	mov r1, #0
L_02114538: ; outer
	mov r0, #0
L_0211453c: ; inner
	orr r2, r1, r0
	mcr p15, 0, r2, c7, c10, 2
	add r0, r0, #32
	cmp r0, #0x400
	blt L_0211453c
	add r1, r1, #0x40000000
	cmp r1, #0
	bne L_02114538
	bx lr

; DC_FlushAll: drain the write buffer, then clean+invalidate every line by set/way
	.global func_02114560
	.type func_02114560, @function
	.size func_02114560, 0x34
func_02114560:
	mov ip, #0
	mov r1, #0
L_02114568: ; outer
	mov r0, #0
L_0211456c: ; inner
	orr r2, r1, r0
	mcr p15, 0, ip, c7, c10, 4
	mcr p15, 0, r2, c7, c14, 2
	add r0, r0, #32
	cmp r0, #0x400
	blt L_0211456c
	add r1, r1, #0x40000000
	cmp r1, #0
	bne L_02114568
	bx lr

; DC_InvalidateRange(startAddr, nBytes)
	.global func_02114594
	.type func_02114594, @function
	.size func_02114594, 0x1c
func_02114594:
	add r1, r1, r0
	bic r0, r0, #31
L_0211459c: ; loop
	mcr p15, 0, r0, c7, c6, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_0211459c
	bx lr

; DC_StoreRange(startAddr, nBytes)
	.global func_021145b0
	.type func_021145b0, @function
	.size func_021145b0, 0x1c
func_021145b0:
	add r1, r1, r0
	bic r0, r0, #31
L_021145b8: ; loop
	mcr p15, 0, r0, c7, c10, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_021145b8
	bx lr

; DC_FlushRange(startAddr, nBytes)
	.global func_021145cc
	.type func_021145cc, @function
	.size func_021145cc, 0x24
func_021145cc:
	mov ip, #0
	add r1, r1, r0
	bic r0, r0, #31
L_021145d8: ; loop
	mcr p15, 0, ip, c7, c10, 4
	mcr p15, 0, r0, c7, c14, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_021145d8
	bx lr

; DC_WaitWriteBufferEmpty
	.global func_021145f0
	.type func_021145f0, @function
	.size func_021145f0, 0xc
func_021145f0:
	mov r0, #0
	mcr p15, 0, r0, c7, c10, 4
	bx lr

; IC_InvalidateAll
	.global func_021145fc
	.type func_021145fc, @function
	.size func_021145fc, 0xc
func_021145fc:
	mov r0, #0
	mcr p15, 0, r0, c7, c5, 0
	bx lr

; IC_InvalidateRange(startAddr, nBytes)
	.global func_02114608
	.type func_02114608, @function
	.size func_02114608, 0x1c
func_02114608:
	add r1, r1, r0
	bic r0, r0, #31
L_02114610: ; loop
	mcr p15, 0, r0, c7, c5, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_02114610
	bx lr
