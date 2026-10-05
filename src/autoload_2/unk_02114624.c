// mwcc-flags: -nothumb -O4,p
// NitroSDK OS init / arena (os_init.c, os_arena.c): autoload_2 0x02114624-0x02114724. ARM code, mwcc 1.2/base.
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fce88;
extern s32 data_021fce84; // OSi_ArenaInitialized

u32 OS_GetConsoleType(void); // OS_GetConsoleType
void OS_SetProtectionRegion1(u32 v);
void OS_SetProtectionRegion2(u32 v);

void PXI_Init(void);
void OS_InitLock(void);
void OS_InitIrqTable(void);
void OS_SetIrqStackChecker(void);
void OS_InitException(void);
void MI_Init(void);
void OS_InitVAlarm(void);
void OSi_InitVramExclusive(void);
void OS_InitThread(void);
void OS_InitReset(void);
void CTRDG_Init(void);
void CARD_Init(void);
void PM_Init(void);

void OS_SetArenaLo(s32 id, void *lo);
void OS_SetArenaHi(s32 id, void *hi);
void *OS_GetInitArenaLo(s32 id);
void *OS_GetInitArenaHi(s32 id);
void *OS_GetArenaLo(s32 id);
void *OS_GetArenaHi(s32 id);
void OS_InitArena(void);
void OS_InitArenaEx(void);

// OS_GetArenaLo / OS_GetArenaHi / OS_SetArenaLo / OS_SetArenaHi
#define ARENA_LO(id) (((void **)0x027ffda0)[id])
#define ARENA_HI(id) (((void **)0x027ffdc4)[id])

// OS_SetArenaHi
void OS_SetArenaHi(s32 id, void *hi) {
    ARENA_HI(id) = hi;
}

// OS_SetArenaLo
void OS_SetArenaLo(s32 id, void *lo) {
    ARENA_LO(id) = lo;
}

// OS_AllocFromArenaLo
void *OS_AllocFromArenaLo(s32 id, u32 size, u32 align) {
    u32 arenaLo = (u32)OS_GetArenaLo(id);
    u32 arenaHi;
    u32 ptr;
    if (arenaLo == 0) return 0;
    arenaLo = ptr = ((arenaLo) + (align) - 1) & ~((align) - 1);
    arenaLo += size;
    arenaLo = ((arenaLo) + (align) - 1) & ~((align) - 1);
    arenaHi = (u32)OS_GetArenaHi(id);
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
