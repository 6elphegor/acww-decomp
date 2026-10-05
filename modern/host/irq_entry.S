// Host build: interrupt entry. hw.c sends an interrupted game context here (as an IRQ exception would): the
// interrupted EIP is on the stack as the return address. Everything the game could be using is saved - integer
// registers, flags, x87/SSE state - and host_irq_entry() dispatches the interrupts (and may switch threads).
    .text
    .globl host_irq_stub
    .type host_irq_stub, @function
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
    .size host_irq_stub, . - host_irq_stub
    .section .note.GNU-stack, "", @progbits
