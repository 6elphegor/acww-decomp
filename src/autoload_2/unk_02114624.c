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

// OS_SetArenaHi
void func_02114710(s32 id, void *hi) {
    ARENA_HI(id) = hi;
}

// OS_SetArenaLo
void func_021146fc(s32 id, void *lo) {
    ARENA_LO(id) = lo;
}

// OS_AllocFromArenaLo
void *func_02114674(s32 id, u32 size, u32 align) {
    u32 arenaLo = (u32)func_02114940(id);
    u32 arenaHi;
    u32 ptr;
    if (arenaLo == 0) return 0;
    arenaLo = ptr = ((arenaLo) + (align) - 1) & ~((align) - 1);
    arenaLo += size;
    arenaLo = ((arenaLo) + (align) - 1) & ~((align) - 1);
    arenaHi = (u32)func_02114954(id);
    if (arenaLo > arenaHi) return 0;
    func_021146fc(id, (void *)arenaLo);
    return (void *)ptr;
}

// OS_Init
void func_02114624(void) {
    func_021149e8();
    func_02117dcc();
    func_021126d0();
    func_02114968();
    func_021123ac();
    func_0211232c();
    func_02114cf4();
    func_02116638();
    func_021153f8();
    func_021157c0();
    func_02113b6c();
    func_0211555c();
    func_02127380();
    func_0211e0ac();
    func_0211ca48();
}
