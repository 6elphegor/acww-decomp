// mwcc-flags: -nothumb -O4,p
// NitroSDK OS arena (os_arena.c): autoload_2 0x02114940-0x02114b00. ARM code, mwcc 1.2/base.
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
    if (data_021fce88 != 0 && (func_02113fd8() & 3) != 1) return;
    func_02114b44(0x0200002b);
    func_02114b4c(0x023e0021);
}

// OS_GetArenaHi
void *OS_GetArenaHi(s32 id) {
    return ARENA_HI(id);
}

// OS_GetArenaLo
void *OS_GetArenaLo(s32 id) {
    return ARENA_LO(id);
}

