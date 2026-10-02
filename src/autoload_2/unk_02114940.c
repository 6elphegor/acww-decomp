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
void func_0211232c(void);
void func_02114cf4(void);
void func_02116638(void);
void func_021153f8(void);
void func_021157c0(void);
void func_02113b6c(void);
void func_0211555c(void);
void func_02127380(void);
void func_0211e0ac(void);
void func_0211ca48(void);

void func_021146fc(s32 id, void *lo);
void func_02114710(s32 id, void *hi);
void *func_02114724(s32 id);
void *func_02114810(s32 id);
void *func_02114940(s32 id);
void *func_02114954(s32 id);
void func_021149e8(void);
void func_02114968(void);

// OS_GetArenaLo / OS_GetArenaHi / OS_SetArenaLo / OS_SetArenaHi
#define ARENA_LO(id) (((void **)0x027ffda0)[id])
#define ARENA_HI(id) (((void **)0x027ffdc4)[id])

// OS_InitArena
void func_021149e8(void) {
    if (data_021fce84) return;
    data_021fce84 = 1;
    func_02114710(0, func_02114810(0));
    func_021146fc(0, func_02114724(0));
    func_021146fc(2, 0);
    func_02114710(2, 0);
    func_02114710(3, func_02114810(3));
    func_021146fc(3, func_02114724(3));
    func_02114710(4, func_02114810(4));
    func_021146fc(4, func_02114724(4));
    func_02114710(5, func_02114810(5));
    func_021146fc(5, func_02114724(5));
    func_02114710(6, func_02114810(6));
    func_021146fc(6, func_02114724(6));
}

// OS_InitArenaEx
void func_02114968(void) {
    func_02114710(2, func_02114810(2));
    func_021146fc(2, func_02114724(2));
    if (data_021fce88 != 0 && (func_02113fd8() & 3) != 1) return;
    func_02114b44(0x0200002b);
    func_02114b4c(0x023e0021);
}

// OS_GetArenaHi
void *func_02114954(s32 id) {
    return ARENA_HI(id);
}

// OS_GetArenaLo
void *func_02114940(s32 id) {
    return ARENA_LO(id);
}

