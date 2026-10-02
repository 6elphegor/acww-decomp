#include "types.h"

// 0x0206d470-0x0206d49c: an ASSEMBLY routine of the original game, reproduced as assembly (it cannot be written
// in C). It saves every register and CPSR on the stack, stores the stack pointer of its caller and -1 in place
// of the saved pc, and jumps to the handler func_0206d4a4 with a pointer to the saved block.

extern "C" void func_0206d4a4(void *regs);

#pragma thumb off
extern "C" asm void func_0206d470(void) {
    dcd 0xe92dffff      // stmfd sp!, {r0-r12, sp, lr, pc} (mwcc's assembler drops pc from the list)
    mrs r0, cpsr
    stmfd sp!, {r0}
    mov r0, sp
    add r1, sp, #0x44
    str r1, [sp, #0x38]
    mvn r2, #0
    str r2, [sp, #0x40]
    ldr r3, =func_0206d4a4
    bx r3
}
#pragma thumb reset
