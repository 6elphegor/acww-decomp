// Host build: stack switching for the game's threads (os.c), portable: a context is the stack pointer of a
// suspended stack, with the callee-saved registers pushed on it (coro_switch.S: i386, x86-64 System V and Windows, arm64
// incl. Apple). Everything else a C function may rely on across a call is the caller's to save.
#ifndef HOST_CORO_H
#define HOST_CORO_H

#include <stddef.h>

// Suspends the running stack (its stack pointer stored in *save) and resumes the one `to` was saved from (or
// prepared by host_coro_prepare). Returns when something switches back to *save.
void host_coro_switch(void **save, void *to);

// A stack, ready for host_coro_switch: the first switch to the returned pointer calls fn(arg) on it. fn must not
// return.
void *host_coro_prepare(void *stack, size_t size, void (*fn)(void *), void *arg);

// The sanitizer variant (configure_host.py --sanitize address): every switch tells ASan which stack it goes to
// (__sanitizer_start_switch_fiber / __sanitizer_finish_switch_fiber, coro.c), so that its stack checks and the
// unpoisoning of a stack's frames follow the stack that runs.
#if defined(HOST_ASAN) && !defined(HOST_CORO_IMPL)
void host_coro_switch_asan(void **save, void *to);
#define host_coro_switch host_coro_switch_asan
#endif

#endif
