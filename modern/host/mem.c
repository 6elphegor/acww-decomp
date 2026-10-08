// Host build: the DS memory the game reaches by address, as host objects (include/host_mem.h; docs/portability.md
// 3.2). Each block is aligned so that its addresses keep the low bits of the DS's (the block's size or more): code
// that looks at an address's low bits sees the DS's values.

#include <stddef.h>
#include <stdio.h>

#include "host.h"
#include "host_mem.h"

HostSysWork gHostSysWork __attribute__((aligned(0x1000)));
unsigned char gHostDtcm[0x4000] __attribute__((aligned(0x4000)));
unsigned char gHostItcm[0x8000] __attribute__((aligned(0x8000)));
unsigned char gHostPltt[0x800] __attribute__((aligned(0x800)));
unsigned char gHostOam[0x800] __attribute__((aligned(0x800)));
unsigned char gHostMainRam[HOST_MAIN_RAM_HI - HOST_MAIN_RAM_LO] __attribute__((aligned(0x200000)));
unsigned char gHostWramArena[32] __attribute__((aligned(32)));

#if __SIZEOF_POINTER__ == 4
// the DS's layout of the system work area (32-bit hosts: the same member sizes)
#define AT(m, a) _Static_assert(offsetof(HostSysWork, m) == (a) - 0x027ff000u, #m)
AT(cardRomHeader, 0x027ffa80);
AT(bootCheckInfo, 0x027ffc00);
AT(resetParameter, 0x027ffc20);
AT(romBaseOffset, 0x027ffc2c);
AT(ctrdgModuleInfo, 0x027ffc30);
AT(vblankCount, 0x027ffc3c);
AT(wmBootBuf, 0x027ffc40);
AT(nvramUserInfo, 0x027ffc80);
AT(excpVector, 0x027ffd9c);
AT(arenaLo, 0x027ffda0);
AT(arenaHi, 0x027ffdc4);
AT(realTimeClock, 0x027ffde8);
AT(romHeader, 0x027ffe00);
AT(pxiHandleChecker, 0x027fff88);
AT(micLastAddress, 0x027fff90);
AT(threadInfoMain, 0x027fffa0);
AT(buttonXY, 0x027fffa8);
AT(touchPanel, 0x027fffaa);
AT(lockIdFlagMain, 0x027fffb0);
AT(vramCLock, 0x027fffc0);
AT(cardLock, 0x027fffe0);
AT(ctrdgLock, 0x027fffe8);
AT(initLock, 0x027ffff0);
AT(mmemCheckerMain, 0x027ffff8);
_Static_assert(sizeof(HostSysWork) == 0x1000, "HostSysWork");
#undef AT
#endif

void *HostMainRam_Ptr(unsigned int a) {
    if (a < HOST_MAIN_RAM_LO || a > HOST_MAIN_RAM_HI) {  // (the end itself: an arena bound)
        fprintf(stderr, "host: main RAM address %08x outside the host's block (%08x-%08x)\n", a, HOST_MAIN_RAM_LO,
                HOST_MAIN_RAM_HI);
        host_fatal("main RAM address");
    }
    return gHostMainRam + (a - HOST_MAIN_RAM_LO);
}

extern char __start_gdata[], __stop_gdata[], __start_gbss[], __stop_gbss[];
void host_root_heap_bounds(uintptr_t *lo, uintptr_t *hi);  // main.c

static int inside(uintptr_t a, uintptr_t n, const void *lo, size_t size) {
    uintptr_t b = (uintptr_t)lo;
    return a >= b && a - b <= size && n <= size - (a - b);
}

int HostMem_IsGameRam(const void *p, unsigned int n) {
    uintptr_t a = (uintptr_t)p, rlo, rhi;
    host_root_heap_bounds(&rlo, &rhi);
    return inside(a, n, gHostMainRam, sizeof gHostMainRam) || inside(a, n, &gHostSysWork, sizeof gHostSysWork) ||
           inside(a, n, gHostDtcm, sizeof gHostDtcm) || inside(a, n, gHostItcm, sizeof gHostItcm) ||
           inside(a, n, gHostWramArena, sizeof gHostWramArena) ||
           inside(a, n, __start_gdata, (size_t)(__stop_gdata - __start_gdata)) ||
           inside(a, n, __start_gbss, (size_t)(__stop_gbss - __start_gbss)) ||
           (rhi > rlo && inside(a, n, (const void *)rlo, rhi - rlo));
}
