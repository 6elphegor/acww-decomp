// mwcc-flags: -nothumb -O4,p
// NitroSDK OS init / arena (os_init.c, os_arena.c): autoload_2 0x02114624-0x02114724. ARM code, mwcc 1.2/base.
#include "uptr.h"
#include "proto/autoload_2/unk_021122b0.h"
#include "proto/autoload_2/unk_02112360.h"
#include "proto/autoload_2/unk_02112458.h"
#include "proto/autoload_2/unk_02113b6c.h"
#include "proto/autoload_2/unk_02114624.h"
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

// OS_SetArenaHi
void OS_SetArenaHi(s32 id, void *hi) {
    ARENA_HI(id) = (u32)(uptr)hi;
}

// OS_SetArenaLo
void OS_SetArenaLo(s32 id, void *lo) {
    ARENA_LO(id) = (u32)(uptr)lo;
}

// OS_AllocFromArenaLo
void *OS_AllocFromArenaLo(s32 id, u32 size, u32 align) {
    uptr arenaLo = (uptr)OS_GetArenaLo(id);
    uptr arenaHi;
    uptr ptr;
    if (arenaLo == 0) return 0;
    arenaLo = ptr = ((arenaLo) + (align) - 1) & ~(uptr)((align) - 1);
    arenaLo += size;
    arenaLo = ((arenaLo) + (align) - 1) & ~(uptr)((align) - 1);
    arenaHi = (uptr)OS_GetArenaHi(id);
    if (arenaLo > arenaHi) return 0;
    OS_SetArenaLo(id, (void *)arenaLo);
    return (void *)ptr;
}

// OS_Init
void OS_Init(void) {
    OS_InitArena();
    PXI_Init();
    OS_InitLock();
    OS_InitArenaEx();
    OS_InitIrqTable();
    OS_SetIrqStackChecker();
    OS_InitException();
    MI_Init();
    OS_InitVAlarm();
    OSi_InitVramExclusive();
    OS_InitThread();
    OS_InitReset();
    CTRDG_Init();
    CARD_Init();
    PM_Init();
}
