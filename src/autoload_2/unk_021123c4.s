; Original assembly (NitroSDK os_spinLock.c): hand-written in the original; linked as assembly per the project's
; assembly policy (accepted by user decision 2026-10-02).
; autoload_2 0x021123c4-0x02112458: OS_UnLockCartridge (old-name compatibility stub), OS_GetLockID,
; OS_ReleaseLockID. 0x027fffb0 is HW_LOCK_ID_FLAG_MAIN, a plain number in the original (no relocation).
; Replaces the unit A001_lockid (0x021123d0-0x02112458): the stub belongs to the same file.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern func_02112528
	.arm

; OS_UnLockCartridge(lockID): `ldr r1, =OS_UnlockCartridge; bx r1` (the SDK's asm compatibility stub; a C tail
; call from mwcc goes through ip, not r1)
	.global func_021123c4
	.type func_021123c4, @function
	.size func_021123c4, 0xc
func_021123c4:
	ldr r1, L_021123cc
	bx r1
L_021123cc:
	.word func_02112528

; OS_GetLockID: finds a free lock ID with clz on the two 32-bit flag words; returns 0x40+n / 0x60+n or
; OS_LOCK_ID_ERROR (-3).
	.global func_021123d0
	.type func_021123d0, @function
	.size func_021123d0, 0x58
func_021123d0:
	ldr r3, L_02112420
	ldr r1, [r3, #0]
	clz r2, r1
	cmp r2, #32
	movne r0, #0x40
	bne L_02112404
	add r3, r3, #4
	ldr r1, [r3, #0]
	clz r2, r1
	cmp r2, #32
	ldr r0, L_02112424
	bxeq lr
	mov r0, #0x60
L_02112404: ; found
	add r0, r0, r2
	mov r1, #0x80000000
	mov r1, r1, lsr r2
	ldr r2, [r3, #0]
	bic r2, r2, r1
	str r2, [r3, #0]
	bx lr
L_02112420:
	.word 0x027fffb0
L_02112424:
	.word 0xfffffffd

; OS_ReleaseLockID(lockID): sets the ID's bit again (pl/mi predication on the 0x60 compare).
	.global func_02112428
	.type func_02112428, @function
	.size func_02112428, 0x30
func_02112428:
	ldr r3, L_02112454
	cmp r0, #0x60
	addpl r3, r3, #4
	subpl r0, r0, #0x60
	submi r0, r0, #0x40
	mov r1, #0x80000000
	mov r1, r1, lsr r0
	ldr r2, [r3, #0]
	orr r2, r2, r1
	str r2, [r3, #0]
	bx lr
L_02112454:
	.word 0x027fffb0
