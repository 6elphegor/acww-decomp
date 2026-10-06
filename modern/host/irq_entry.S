// Host build: interrupt entry. hw.c sends an interrupted game context here (as an IRQ exception would): the
// interrupted EIP is on the stack as the return address. Everything the game could be using is saved - integer
// registers, flags, x87/SSE state - and host_irq_entry() dispatches the interrupts (and may switch threads).
    .text
    .globl host_irq_stub
    .type host_irq_stub, @function
#if defined(__x86_64__)
// (the game is compiled without a red zone, so the return address could be pushed just below its stack pointer)
host_irq_stub:
    pushfq
    pushq %rax
    pushq %rcx
    pushq %rdx
    pushq %rbx
    pushq %rbp
    pushq %rsi
    pushq %rdi
    pushq %r8
    pushq %r9
    pushq %r10
    pushq %r11
    pushq %r12
    pushq %r13
    pushq %r14
    pushq %r15
    movq %rsp, %rbp
    subq $528, %rsp
    andq $-16, %rsp
    fxsave (%rsp)
    call host_irq_entry
    fxrstor (%rsp)
    movq %rbp, %rsp
    popq %r15
    popq %r14
    popq %r13
    popq %r12
    popq %r11
    popq %r10
    popq %r9
    popq %r8
    popq %rdi
    popq %rsi
    popq %rbp
    popq %rbx
    popq %rdx
    popq %rcx
    popq %rax
    popfq
    ret
#else
host_irq_stub:
    pushfl
    pushal
    movl %esp, %ebp
    subl $528, %esp
    andl $-16, %esp
    fxsave (%esp)
    call host_irq_entry
    fxrstor (%esp)
    movl %ebp, %esp
    popal
    popfl
    ret
#endif
    .size host_irq_stub, . - host_irq_stub
    .section .note.GNU-stack, "", @progbits
