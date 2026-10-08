// mwcc-flags: -nothumb -O4,p
// NitroSDK os_arena.c: OS_GetInitArenaHi, autoload_2 0x02114810-0x02114940. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned int u32;
#include "uptr.h"
#include "host_mem.h"
typedef int s32;
#include "sdk_linker_symbols.h"

extern s32 data_021fce88;
#define HW_DTCM ((uptr)HW_DTCM_BLOCK)  // (the host's DTCM block, include/host_mem.h)
#define HW_DTCM_SVC_STACK (HW_DTCM + 0x3f80)
#define OSi_SYS_STACK_SIZE SDK_SYS_STACKSIZE
#define OSi_IRQ_STACK_SIZE SDK_IRQ_STACKSIZE

u32 OS_GetConsoleType(void); // OS_GetConsoleType

// OS_GetInitArenaHi
void *OS_GetInitArenaHi(s32 id) {
    switch (id) {
    case 0: return HostMainRam_Ptr(0x023e0000);
    case 2:
        return 0;  // (no extended main RAM on the host: OS_GetInitArenaLo)
    case 3: return HW_ITCM_BLOCK + sizeof HW_ITCM_BLOCK;  // (ITCM's end: 0x02000000)
    case 4: {
        uptr irqStackLo = HW_DTCM_SVC_STACK - OSi_IRQ_STACK_SIZE;
        uptr sysStackLo;
        if (!OSi_SYS_STACK_SIZE) {
            sysStackLo = HW_DTCM;
            if (sysStackLo < HW_DTCM) sysStackLo = HW_DTCM;  // (SDK_SECTION_ARENA_DTCM_START)
        } else if (OSi_SYS_STACK_SIZE < 0) {
            sysStackLo = HW_DTCM - OSi_SYS_STACK_SIZE;
        } else {
            sysStackLo = irqStackLo - OSi_SYS_STACK_SIZE;
        }
        return (void *)sysStackLo;
    }
    case 5: return HW_SYSWORK_AT(void, sharedArena, sizeof gHostSysWork.sharedArena);  // (0x027ff680)
    case 6: return gHostWramArena;
    default: return 0;
    }
}
