// mwcc-flags: -nothumb -O4,p
// NitroSDK os_arena.c: OS_GetInitArenaLo, autoload_2 0x02114724-0x02114810. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fce88;

// Absolute symbol of the linker script (config/usa/arm9/abs_symbols.txt): start of the main-RAM extended arena,
// 0x02400000. As a plain number the compiler would emit `mov r0, #0x2400000`; the original loads it from the pool.
extern u8 SDK_SECTION_ARENA_EX_START[];

u32 OS_GetConsoleType(void); // OS_GetConsoleType

// OS_GetInitArenaLo
void *OS_GetInitArenaLo(s32 id) {
    switch (id) {
    case 0: return (void *)0x0229bdc0; // SDK_MAIN_ARENA_LO
    case 2:
        if (data_021fce88 == 0 || (OS_GetConsoleType() & 3) == 1) return 0;
        return (void *)SDK_SECTION_ARENA_EX_START;
    case 3: return (void *)0x01ffdae0; // SDK_SECTION_ARENA_ITCM_START
    case 4: return (void *)0x027e0460; // SDK_SECTION_ARENA_DTCM_START
    case 5: return (void *)0x027ff000; // HW_SHARED_ARENA_LO_DEFAULT
    case 6: return (void *)0x037f8000; // HW_PRV_WRAM
    default: return 0;
    }
}
