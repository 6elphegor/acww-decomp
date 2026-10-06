// Host build: host_coro_switch (coro.h) for each host CPU. The saved frame, from the stack pointer up:
//   i386:   edi esi ebx ebp, return address
//   x86-64: r15 r14 r13 r12 rbx rbp, return address
//   arm64:  x19-x28, x29 (fp), x30 (lr), d8-d15
// host_coro_prepare (coro.c) builds the same frame on a new stack with host_coro_boot as the return address and
// fn / arg in callee-saved registers, which host_coro_boot passes on.

#if defined(__APPLE__)
#define SYM(x) _##x
#else
#define SYM(x) x
#endif

    .text

#if defined(__i386__)

    .globl SYM(host_coro_switch)
SYM(host_coro_switch):
    movl 4(%esp), %eax      // save
    movl 8(%esp), %edx      // to
    pushl %ebp
    pushl %ebx
    pushl %esi
    pushl %edi
    movl %esp, (%eax)
    movl %edx, %esp
    popl %edi
    popl %esi
    popl %ebx
    popl %ebp
    ret

// first entry of a prepared stack: ebx = fn, esi = arg; the stack is 16-byte aligned here
    .globl SYM(host_coro_boot)
SYM(host_coro_boot):
    subl $12, %esp
    pushl %esi
    call *%ebx
    ud2

#elif defined(__x86_64__) && !defined(_WIN32)

    .globl SYM(host_coro_switch)
SYM(host_coro_switch):
    pushq %rbp
    pushq %rbx
    pushq %r12
    pushq %r13
    pushq %r14
    pushq %r15
    movq %rsp, (%rdi)
    movq %rsi, %rsp
    popq %r15
    popq %r14
    popq %r13
    popq %r12
    popq %rbx
    popq %rbp
    ret

// r12 = fn, r13 = arg; the stack is 16-byte aligned here
    .globl SYM(host_coro_boot)
SYM(host_coro_boot):
    movq %r13, %rdi
    callq *%r12
    ud2

#elif defined(__aarch64__)

    .globl SYM(host_coro_switch)
SYM(host_coro_switch):
    sub sp, sp, #176
    stp x19, x20, [sp, #0]
    stp x21, x22, [sp, #16]
    stp x23, x24, [sp, #32]
    stp x25, x26, [sp, #48]
    stp x27, x28, [sp, #64]
    stp x29, x30, [sp, #80]
    stp d8, d9, [sp, #96]
    stp d10, d11, [sp, #112]
    stp d12, d13, [sp, #128]
    stp d14, d15, [sp, #144]
    mov x9, sp
    str x9, [x0]
    mov sp, x1
    ldp x19, x20, [sp, #0]
    ldp x21, x22, [sp, #16]
    ldp x23, x24, [sp, #32]
    ldp x25, x26, [sp, #48]
    ldp x27, x28, [sp, #64]
    ldp x29, x30, [sp, #80]
    ldp d8, d9, [sp, #96]
    ldp d10, d11, [sp, #112]
    ldp d12, d13, [sp, #128]
    ldp d14, d15, [sp, #144]
    add sp, sp, #176
    ret

// x19 = fn, x20 = arg
    .globl SYM(host_coro_boot)
SYM(host_coro_boot):
    mov x0, x20
    blr x19
    brk #0

#else
#error "coro_switch.S: no stack switch for this CPU yet (Windows x64 needs rdi/rsi/xmm6-15 too)"
#endif

#if defined(__linux__) && defined(__ELF__)
    .section .note.GNU-stack, "", @progbits
#endif
