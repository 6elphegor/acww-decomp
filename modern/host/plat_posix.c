// Host build runtime: platform services for POSIX systems (Linux, macOS). See plat.h.
#ifndef _WIN32

#define _GNU_SOURCE
#include <errno.h>
#include <pthread.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

#include "plat.h"

uint64_t host_plat_time_ns(void) {
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return (uint64_t)t.tv_sec * 1000000000u + (uint64_t)t.tv_nsec;
}

void host_plat_sleep_until_ns(uint64_t t) {
#if defined(__linux__)
    // an absolute deadline: no drift from the time spent between computing it and sleeping
    struct timespec ts = {(time_t)(t / 1000000000u), (long)(t % 1000000000u)};
    while (clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &ts, 0) == EINTR) {}
#else
    // macOS has no clock_nanosleep: relative sleeps until the deadline has passed
    for (;;) {
        uint64_t now = host_plat_time_ns();
        if (now >= t) return;
        uint64_t d = t - now;
        struct timespec ts = {(time_t)(d / 1000000000u), (long)(d % 1000000000u)};
        nanosleep(&ts, 0);
    }
#endif
}

void host_plat_sleep_ms(unsigned ms) { host_plat_sleep_until_ns(host_plat_time_ns() + (uint64_t)ms * 1000000u); }

struct Start { void (*fn)(void *); void *arg; };
static void *thread_main(void *p) {
    struct Start s = *(struct Start *)p;
    free(p);
    s.fn(s.arg);
    return 0;
}
int host_plat_thread_start(void (*fn)(void *), void *arg) {
    struct Start *s = malloc(sizeof *s);
    if (!s) return 0;
    s->fn = fn;
    s->arg = arg;
    // no signals for the new thread (it inherits this mask): the debugging handlers (debug_posix.c) look at the
    // game's thread
    sigset_t all, old;
    sigfillset(&all);
    pthread_sigmask(SIG_SETMASK, &all, &old);
    pthread_t t;
    int err = pthread_create(&t, 0, thread_main, s);
    pthread_sigmask(SIG_SETMASK, &old, 0);
    if (err) { free(s); return 0; }
    pthread_detach(t);
    return 1;
}

#endif
