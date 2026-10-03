; Original assembly (NitroSDK os_cache.c): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02114528-0x02114624: the nine DC_/IC_ cache functions (CP15 c7 cache operations, mcr p15).
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.arm

; DC_InvalidateAll
	.global DC_InvalidateAll
	.type DC_InvalidateAll, @function
	.size DC_InvalidateAll, 0xc
DC_InvalidateAll:
	mov r0, #0
	mcr p15, 0, r0, c7, c6, 0
	bx lr

; DC_StoreAll: clean every data-cache line by set/way (4 segments x 32 lines)
	.global DC_StoreAll
	.type DC_StoreAll, @function
	.size DC_StoreAll, 0x2c
DC_StoreAll:
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
	.global DC_FlushAll
	.type DC_FlushAll, @function
	.size DC_FlushAll, 0x34
DC_FlushAll:
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
	.global DC_InvalidateRange
	.type DC_InvalidateRange, @function
	.size DC_InvalidateRange, 0x1c
DC_InvalidateRange:
	add r1, r1, r0
	bic r0, r0, #31
L_0211459c: ; loop
	mcr p15, 0, r0, c7, c6, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_0211459c
	bx lr

; DC_StoreRange(startAddr, nBytes)
	.global DC_StoreRange
	.type DC_StoreRange, @function
	.size DC_StoreRange, 0x1c
DC_StoreRange:
	add r1, r1, r0
	bic r0, r0, #31
L_021145b8: ; loop
	mcr p15, 0, r0, c7, c10, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_021145b8
	bx lr

; DC_FlushRange(startAddr, nBytes)
	.global DC_FlushRange
	.type DC_FlushRange, @function
	.size DC_FlushRange, 0x24
DC_FlushRange:
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
	.global DC_WaitWriteBufferEmpty
	.type DC_WaitWriteBufferEmpty, @function
	.size DC_WaitWriteBufferEmpty, 0xc
DC_WaitWriteBufferEmpty:
	mov r0, #0
	mcr p15, 0, r0, c7, c10, 4
	bx lr

; IC_InvalidateAll
	.global IC_InvalidateAll
	.type IC_InvalidateAll, @function
	.size IC_InvalidateAll, 0xc
IC_InvalidateAll:
	mov r0, #0
	mcr p15, 0, r0, c7, c5, 0
	bx lr

; IC_InvalidateRange(startAddr, nBytes)
	.global IC_InvalidateRange
	.type IC_InvalidateRange, @function
	.size IC_InvalidateRange, 0x1c
IC_InvalidateRange:
	add r1, r1, r0
	bic r0, r0, #31
L_02114610: ; loop
	mcr p15, 0, r0, c7, c5, 1
	add r0, r0, #32
	cmp r0, r1
	blt L_02114610
	bx lr
