// mwcc-flags: -nothumb -O4,p
// NitroSDK OS init / arena (os_init.c, os_arena.c): autoload_2 0x02114624-0x02114724. ARM code, mwcc 1.2/base.
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fce88;
extern s32 data_021fce84; // OSi_ArenaInitialized

u32 func_02113fd8(void); // OS_GetConsoleType
void func_02114b44(u32 v);
void func_02114b4c(u32 v);

void func_02117dcc(void);
void func_021126d0(void);
void func_021123ac(void);
void OS_SetIrqStackChecker(void);
void func_02114cf4(void);
void MI_Init(void);
void OS_InitVAlarm(void);
void OSi_InitVramExclusive(void);
void OS_InitThread(void);
void OS_InitReset(void);
void func_02127380(void);
void CARD_Init(void);
void func_0211ca48(void);

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
    func_02117dcc();
    func_021126d0();
    OS_InitArenaEx();
    func_021123ac();
    OS_SetIrqStackChecker();
    func_02114cf4();
    MI_Init();
    OS_InitVAlarm();
    OSi_InitVramExclusive();
    OS_InitThread();
    OS_InitReset();
    func_02127380();
    CARD_Init();
    func_0211ca48();
}
