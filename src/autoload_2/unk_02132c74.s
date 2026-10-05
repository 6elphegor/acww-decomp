; Original assembly (Metrowerks ARM runtime): hand-written in the original; linked as assembly per the project's
; assembly policy.
; autoload_2 0x02132c74-0x02132ef8: reverse float subtract entry + _fsub
; One routine: the entry flips the sign of y and, when the signs differ, BRANCHES INTO THE BODY OF THE OPPOSITE
; OPERATION (_dadd <-> _dsub, _fadd <-> _fsub; that body is in another unit). So each body start is a global label
; inside its routine (symbols.txt kind:label), not a function.
; Assembled with mwasmarm (tools/configure.py, rule mwasm).

	.text

	.extern func_021319dc
	.arm

; reverse-operand entry: swaps x and y (three eors) and FALLS THROUGH into _fsub (returns y - x).
; Evidence: fall-through into the next routine.
	.global _frsb
	.type _frsb, @function
	.size _frsb, 0xc
_frsb:
	eor r0, r0, r1
	eor r1, r0, r1
	eor r0, r0, r1

; _fsub(x, y): if the signs differ, y is negated and control goes to the _fadd body (func_021319dc).
; Evidence: branch into another routine's body.
	.global _fsub
	.type _fsub, @function
	.size _fsub, 0x278
_fsub:
	eors r2, r0, r1
	eormi r1, r1, #0x80000000
	bmi func_021319dc

; _fsub body; also entered from _fadd (0x021319d8). Evidence: clz. 0x02132ebc-0x02132ed4 is unreachable
; (kept as in the original).
	.global func_02132c8c
func_02132c8c:
	subs ip, r0, r1
	eorcc ip, ip, #0x80000000
	subcc r0, r0, ip
	addcc r1, r1, ip
	mov r2, #0x80000000
	mov r3, r0, lsr #23
	orr r0, r2, r0, lsl #8
	ands ip, r3, #255
	cmpne ip, #255
	beq L_02132da8
	mov ip, r1, lsr #23
	orr r1, r2, r1, lsl #8
	ands r2, ip, #255
	beq L_02132de8
L_02132cc4:
	subs ip, r3, ip
	beq L_02132d0c
	rsb r2, ip, #32
	movs r2, r1, lsl r2
	mov r1, r1, lsr ip
	orrne r1, r1, #1
	subs r0, r0, r1
	bpl L_02132d50
	ands r1, r0, #255
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	tst r1, #128
	bxeq lr
	ands r1, r1, #127
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
L_02132d0c:
	subs r0, r0, r1
	beq L_02132eb4
	mov r2, r3, lsl #23
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
	cmp r3, #0
	bgt L_02132d40
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
L_02132d40:
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
L_02132d50:
	mov r2, r3, lsl #23
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
	cmp r3, #0
	bgt L_02132d7c
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
L_02132d7c:
	ands r1, r0, #255
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r1, #128
	bxeq lr
	ands r1, r1, #127
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
L_02132da8:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	ands r3, r3, #255
	beq L_02132e10
	movs r0, r0, lsl #1
	bne L_02132ee8
	mov ip, r1, lsr #23
	mov r1, r1, lsl #9
	ands ip, ip, #255
	beq L_02132edc
	cmp ip, #255
	blt L_02132edc
	cmp r1, #0
	beq L_02132ef0
	b L_02132ee8
L_02132de8:
	cmp ip, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	and r3, r3, #255
	ands ip, ip, #255
	beq L_02132e78
L_02132e00:
	eor r2, r2, #0x80000000
	movs r1, r1, lsl #1
	bne L_02132ee8
	b L_02132edc
L_02132e10:
	movs r0, r0, lsl #1
	beq L_02132e48
	mov r0, r0, lsr #1
	mov r3, #1
	mov ip, r1, lsr #23
	mov r1, r1, lsl #8
	ands ip, ip, #255
	beq L_02132e78
	cmp ip, #255
	beq L_02132e00
	orr r1, r1, #0x80000000
	orr r3, r3, r2, lsr #23
	orr ip, ip, r2, lsr #23
	b L_02132cc4
L_02132e48:
	mov r3, r1, lsr #23
	mov r0, r1, lsl #9
	ands r2, r3, #255
	beq L_02132e6c
	cmp r2, #255
	blt L_02132e94
	cmp r0, #0
	bne L_02132ed4
	b L_02132edc
L_02132e6c:
	cmp r0, #0
	beq L_02132eb4
	b L_02132e94
L_02132e78:
	movs r1, r1, lsl #1
	beq L_02132e9c
	mov r1, r1, lsr #1
	mov ip, #1
	orr ip, ip, r2, lsr #23
	orr r3, r3, r2, lsr #23
	b L_02132cc4
L_02132e94:
	mov r0, r1
	bx lr
L_02132e9c:
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
L_02132eb4:
	mov r0, #0
	bx lr
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
L_02132ed4:
	mvn r0, #0x80000000
	bx lr
L_02132edc:
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
L_02132ee8:
	mvn r0, #0x80000000
	bx lr
L_02132ef0:
	mvn r0, #0x80000000
	bx lr
