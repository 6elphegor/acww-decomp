; Original assembly (Metrowerks ARM C++ exception runtime): hand-written in the original; linked as assembly per the
; project's assembly policy.
; autoload_2 0x02133aec-0x02133b68: the unwinder's register-context entry and exit.
; ThrowContext (0x70 bytes, see the C++ runtime unit): +0x00 throwtype, +0x04 location, +0x08 dtor, +0x10 return
; address, +0x14 SP, +0x1c regs[16] (r4-r11 at +0x2c..+0x48), +0x5c throw SP, +0x64 extra stack adjust.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern __ThrowHandler
	.arm

; Resume at a landing pad: restore r4-r11 from the context, sp = throwSP - adjust, jump to r2.
; (context, unused, landing pad address)
	.global func_02133aec
	.type func_02133aec, @function
	.size func_02133aec, 0x30
func_02133aec:
	ldr r4, [r0, #0x2c]
	ldr r5, [r0, #0x30]
	ldr r6, [r0, #0x34]
	ldr r7, [r0, #0x38]
	ldr r8, [r0, #0x3c]
	ldr r9, [r0, #0x40]
	ldr r10, [r0, #0x44]
	ldr r11, [r0, #0x48]
	ldr sp, [r0, #0x5c]
	ldr r12, [r0, #0x64]
	sub sp, sp, r12
	mov pc, r2

; __rethrow (the name mwcc emits for `throw;`): build a ThrowContext on the stack (callee-saved registers, caller's
; sp and return address, throwtype/location/dtor = 0) and enter the C++ throw handler __ThrowHandler with it.
	.global __rethrow
	.type __rethrow, @function
	.size __rethrow, 0x4c
__rethrow:
	mov r12, sp
	sub sp, sp, #0x70
	str r4, [sp, #0x2c]
	str r5, [sp, #0x30]
	str r6, [sp, #0x34]
	str r7, [sp, #0x38]
	str r8, [sp, #0x3c]
	str r9, [sp, #0x40]
	str r10, [sp, #0x44]
	str r11, [sp, #0x48]
	str r12, [sp, #0x14]
	str r12, [sp, #0x5c]
	str lr, [sp, #0x10]
	mov r12, #0
	str r12, [sp, #0]
	str r12, [sp, #4]
	str r12, [sp, #8]
	mov r0, sp
	b __ThrowHandler
