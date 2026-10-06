// Host build: host_coro_prepare (coro.h): the frame host_coro_switch pops (coro_switch.S), on a new stack.

#include <stdint.h>
#include <string.h>

#include "coro.h"

void host_coro_boot(void);

void *host_coro_prepare(void *stack, size_t size, void (*fn)(void *), void *arg) {
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
}
