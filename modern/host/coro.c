// Host build: host_coro_prepare (coro.h): the frame host_coro_switch pops (coro_switch.S), on a new stack.

#include <stdint.h>
#include <string.h>

#include "coro.h"

void host_coro_boot(void);

// x86-64 Windows: the 256-byte frame of coro_switch.S (32 words: xmm6-15, StackLimit, StackBase, DeallocationStack,
// r15 r14 r13 r12 rdi rsi rbx rbp, return address), with the stack's own bounds for the TIB.
// (HOST_CORO_WIN64_TEST: the same for the Linux test of that code, modern/host/tests/coro_win64_test.c.)
#if defined(__x86_64__) && (defined(_WIN32) || defined(HOST_CORO_WIN64_TEST))
static void *prepare_win64(void *stack, size_t size, void (*fn)(void *), void *arg, void (*boot)(void)) {
    uintptr_t top = ((uintptr_t)stack + size) & ~(uintptr_t)15;
    uint64_t *sp = (uint64_t *)top - 32;   // sp = top after the frame is popped
    memset(sp, 0, 32 * sizeof *sp);
    sp[20] = (uint64_t)(uintptr_t)stack;   // StackLimit: the lowest usable address (all of the stack is committed)
    sp[21] = (uint64_t)top;                // StackBase
    sp[22] = (uint64_t)(uintptr_t)stack;   // DeallocationStack
    sp[25] = (uint64_t)(uintptr_t)arg;     // r13
    sp[26] = (uint64_t)(uintptr_t)fn;      // r12
    sp[31] = (uint64_t)(uintptr_t)boot;
    return sp;
}
#endif
#if defined(__x86_64__) && defined(HOST_CORO_WIN64_TEST)
void host_coro_boot_w64(void);
void *host_coro_prepare_w64(void *stack, size_t size, void (*fn)(void *), void *arg) {
    return prepare_win64(stack, size, fn, arg, host_coro_boot_w64);
}
#endif

void *host_coro_prepare(void *stack, size_t size, void (*fn)(void *), void *arg) {
#if defined(__x86_64__) && defined(_WIN32)
    return prepare_win64(stack, size, fn, arg, host_coro_boot);
#else
    uintptr_t top = ((uintptr_t)stack + size) & ~(uintptr_t)15;
#if defined(__i386__)
    // edi esi ebx ebp ret, then host_coro_boot runs with esp = top (16-aligned)
    uint32_t *sp = (uint32_t *)top - 5;
    sp[0] = 0;                              // edi
    sp[1] = (uint32_t)(uintptr_t)arg;       // esi
    sp[2] = (uint32_t)(uintptr_t)fn;        // ebx
    sp[3] = 0;                              // ebp
    sp[4] = (uint32_t)(uintptr_t)host_coro_boot;
    return sp;
#elif defined(__x86_64__)
    // r15 r14 r13 r12 rbx rbp ret; after the pops and the ret rsp = top (16-aligned before the boot's call)
    uint64_t *sp = (uint64_t *)top - 7;
    memset(sp, 0, 7 * sizeof *sp);
    sp[2] = (uint64_t)(uintptr_t)arg;       // r13
    sp[3] = (uint64_t)(uintptr_t)fn;        // r12
    sp[6] = (uint64_t)(uintptr_t)host_coro_boot;
    return sp;
#elif defined(__aarch64__)
    uint64_t *sp = (uint64_t *)top - 22;    // the 176-byte frame; sp = top after it is popped
    memset(sp, 0, 22 * sizeof *sp);
    sp[0] = (uint64_t)(uintptr_t)fn;        // x19
    sp[1] = (uint64_t)(uintptr_t)arg;       // x20
    sp[11] = (uint64_t)(uintptr_t)host_coro_boot;  // x30
    return sp;
#else
#error "coro.c: no stack switch for this CPU yet"
#endif
#endif
}
