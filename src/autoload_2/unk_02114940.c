// mwcc-flags: -nothumb -O4,p
// NitroSDK OS arena (os_arena.c): autoload_2 0x02114940-0x02114b00. ARM code, mwcc 1.2/base.
#include "uptr.h"
#include "proto/autoload_2/unk_021122b0.h"
#include "proto/autoload_2/unk_02112360.h"
#include "proto/autoload_2/unk_02112458.h"
#include "proto/autoload_2/unk_02113b6c.h"
#include "proto/autoload_2/unk_02114940.h"
#include "proto/autoload_2/unk_02114cd8.h"
#include "proto/autoload_2/unk_021153f8.h"
#include "proto/autoload_2/unk_02115468.h"
#include "proto/autoload_2/unk_021157c0.h"
#include "proto/autoload_2/unk_021163b0.h"
#include "proto/autoload_2/unk_02117984.h"
#include "proto/autoload_2/unk_0211c8e8.h"
#include "proto/autoload_2/unk_0211dc4c.h"
#include "proto/autoload_2/unk_0212703c.h"
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fce88;
extern s32 data_021fce84; // OSi_ArenaInitialized

u32 OS_GetConsoleType(void); // OS_GetConsoleType
void OS_SetProtectionRegion1(u32 v);
void OS_SetProtectionRegion2(u32 v);


void OS_SetArenaLo(s32 id, void *lo);
void OS_SetArenaHi(s32 id, void *hi);
void *OS_GetInitArenaLo(s32 id);
void *OS_GetInitArenaHi(s32 id);
void *OS_GetArenaLo(s32 id);
void *OS_GetArenaHi(s32 id);

// OS_GetArenaLo / OS_GetArenaHi / OS_SetArenaLo / OS_SetArenaHi
// the arena bounds in the system area (OSSystemWork): 32-bit addresses
#define ARENA_LO(id) (((u32 *)0x027ffda0)[id])
#define ARENA_HI(id) (((u32 *)0x027ffdc4)[id])

// OS_InitArena
void OS_InitArena(void) {
    if (data_021fce84) return;
    data_021fce84 = 1;
    OS_SetArenaHi(0, OS_GetInitArenaHi(0));
    OS_SetArenaLo(0, OS_GetInitArenaLo(0));
    OS_SetArenaLo(2, 0);
    OS_SetArenaHi(2, 0);
    OS_SetArenaHi(3, OS_GetInitArenaHi(3));
    OS_SetArenaLo(3, OS_GetInitArenaLo(3));
    OS_SetArenaHi(4, OS_GetInitArenaHi(4));
    OS_SetArenaLo(4, OS_GetInitArenaLo(4));
    OS_SetArenaHi(5, OS_GetInitArenaHi(5));
    OS_SetArenaLo(5, OS_GetInitArenaLo(5));
    OS_SetArenaHi(6, OS_GetInitArenaHi(6));
    OS_SetArenaLo(6, OS_GetInitArenaLo(6));
}

// OS_InitArenaEx
void OS_InitArenaEx(void) {
    OS_SetArenaHi(2, OS_GetInitArenaHi(2));
    OS_SetArenaLo(2, OS_GetInitArenaLo(2));
    if (data_021fce88 != 0 && (OS_GetConsoleType() & 3) != 1) return;
    OS_SetProtectionRegion1(0x0200002b);
    OS_SetProtectionRegion2(0x023e0021);
}

// OS_GetArenaHi
void *OS_GetArenaHi(s32 id) {
    return (void *)(uptr)ARENA_HI(id);
}

// OS_GetArenaLo
void *OS_GetArenaLo(s32 id) {
    return (void *)(uptr)ARENA_LO(id);
}

// ---- file-scope objects (autoload_3 .bss 0x021fce84-0x021fce8c; this definition order gives the original order after mwcc's size
// sort)
s32 data_021fce88;
s32 data_021fce84; // OSi_ArenaInitialized
