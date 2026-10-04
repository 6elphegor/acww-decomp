// mwcc-flags: -nothumb -O4,p
// NitroSDK os_arena.c: OS_GetInitArenaHi, autoload_2 0x02114810-0x02114940. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

extern s32 data_021fce88;
extern u8 data_027e0000[]; // SDK_AUTOLOAD_DTCM_START (HW_DTCM): a real relocation to the dtcm module

// Absolute symbols of the linker script (config/usa/arm9/abs_symbols.txt)
extern u8 SDK_SYS_STACKSIZE[];            // 0x2000
extern u8 SDK_IRQ_STACKSIZE[];            // 0x1000
extern u8 SDK_SECTION_ARENA_DTCM_START[]; // 0x027e0460

#define HW_DTCM ((u32)data_027e0000)
#define HW_DTCM_SVC_STACK (HW_DTCM + 0x3f80)
#define OSi_SYS_STACK_SIZE ((s32)SDK_SYS_STACKSIZE)
#define OSi_IRQ_STACK_SIZE ((s32)SDK_IRQ_STACKSIZE)

u32 OS_GetConsoleType(void); // OS_GetConsoleType

// OS_GetInitArenaHi
void *OS_GetInitArenaHi(s32 id) {
    switch (id) {
    case 0: return (void *)0x023e0000;
    case 2:
        if (data_021fce88 == 0 || (OS_GetConsoleType() & 3) == 1) return 0;
        return (void *)0x02700000;
    case 3: return (void *)0x02000000;
    case 4: {
        u32 irqStackLo = HW_DTCM_SVC_STACK - OSi_IRQ_STACK_SIZE;
        u32 sysStackLo;
        if (!OSi_SYS_STACK_SIZE) {
            sysStackLo = HW_DTCM;
            if (sysStackLo < (u32)SDK_SECTION_ARENA_DTCM_START) sysStackLo = (u32)SDK_SECTION_ARENA_DTCM_START;
        } else if (OSi_SYS_STACK_SIZE < 0) {
            sysStackLo = (u32)SDK_SECTION_ARENA_DTCM_START - OSi_SYS_STACK_SIZE;
        } else {
            sysStackLo = irqStackLo - OSi_SYS_STACK_SIZE;
        }
        return (void *)sysStackLo;
    }
    case 5: return (void *)0x027ff680;
    case 6: return (void *)0x037f8000;
    default: return 0;
    }
}
