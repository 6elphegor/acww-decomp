// mwcc-flags: -nothumb -O4,p
// NitroSDK os_arena.c: OS_GetInitArenaLo, autoload_2 0x02114724-0x02114810. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
#include "sdk_linker_symbols.h"
#include "host_mem.h"

extern s32 data_021fce88;

// The arena bounds: the linker script's absolute symbols (sdk_linker_symbols.h) in the host's blocks
// (include/host_mem.h): main RAM's, ITCM's, DTCM's (the DS's DTCM arena starts after the DTCM variables, which on the
// host are ordinary variables: DTCM's start)
#define ARENA_MAIN_LO HostMainRam_Ptr(SDK_MAIN_ARENA_LO)
#define ARENA_ITCM_LO ((void *)HW_ITCM_BLOCK)
#define ARENA_DTCM_LO ((void *)HW_DTCM_BLOCK)

u32 OS_GetConsoleType(void); // OS_GetConsoleType

// OS_GetInitArenaLo
void *OS_GetInitArenaLo(s32 id) {
    switch (id) {
    case 0: return ARENA_MAIN_LO; // SDK_MAIN_ARENA_LO
    case 2:
        // the extended main RAM (SDK_SECTION_ARENA_EX_START, a debugger's 8 MB: data_021fce88): none on the host
        return 0;
    case 3: return ARENA_ITCM_LO; // SDK_SECTION_ARENA_ITCM_START
    case 4: return ARENA_DTCM_LO; // SDK_SECTION_ARENA_DTCM_START
    case 5: return HW_SYSWORK(void, sharedArena); // HW_SHARED_ARENA_LO_DEFAULT
    case 6: return gHostWramArena; // HW_PRV_WRAM (an empty arena)
    default: return 0;
    }
}
