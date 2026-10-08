// Host build runtime: platform services for Windows. See plat.h. (Not built or run yet: there is no Windows build;
// docs/portability.md 4.2, 4.4.)
#ifdef _WIN32

#include <stdlib.h>
#include <windows.h>

#include "plat.h"

uint64_t host_plat_time_ns(void) {
    static LARGE_INTEGER freq;
    LARGE_INTEGER c;
    if (!freq.QuadPart) QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&c);
    return (uint64_t)(c.QuadPart / freq.QuadPart) * 1000000000u +
           (uint64_t)(c.QuadPart % freq.QuadPart) * 1000000000u / (uint64_t)freq.QuadPart;
}

void host_plat_sleep_until_ns(uint64_t t) {
    // a high-resolution waitable timer (Windows 10 1803 and later), else an ordinary one; relative due times are
    // negative, in 100 ns units
    static HANDLE timer;
    if (!timer) timer = CreateWaitableTimerExW(0, 0, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, TIMER_ALL_ACCESS);
    if (!timer) timer = CreateWaitableTimerW(0, TRUE, 0);
    for (;;) {
        uint64_t now = host_plat_time_ns();
        if (now >= t) return;
        LARGE_INTEGER due;
        due.QuadPart = -(LONGLONG)((t - now + 99) / 100);
        if (!timer || !SetWaitableTimer(timer, &due, 0, 0, 0, FALSE)) {
            Sleep((DWORD)((t - now) / 1000000u));
            continue;
        }
        WaitForSingleObject(timer, INFINITE);
    }
}

void host_plat_sleep_ms(unsigned ms) { Sleep(ms); }

struct Start { void (*fn)(void *); void *arg; };
static DWORD WINAPI thread_main(LPVOID p) {
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
    HANDLE h = CreateThread(0, 0, thread_main, s, 0, 0);
    if (!h) { free(s); return 0; }
    CloseHandle(h);
    return 1;
}

#endif
