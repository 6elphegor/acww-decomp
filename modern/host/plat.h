// Host build runtime: the operating-system services the runtime needs (docs/portability.md 1.4, 4.2). One
// implementation per platform: plat_posix.c (Linux, macOS), plat_win32.c (Windows).
#ifndef HOST_PLAT_H
#define HOST_PLAT_H

#include <stdint.h>

uint64_t host_plat_time_ns(void);           // a monotonic clock in nanoseconds (any epoch)
void host_plat_sleep_until_ns(uint64_t t);  // sleep until host_plat_time_ns() >= t
void host_plat_sleep_ms(unsigned ms);
// a detached background thread (the watchdog); 0 if it couldn't be started
int host_plat_thread_start(void (*fn)(void *), void *arg);

#endif
