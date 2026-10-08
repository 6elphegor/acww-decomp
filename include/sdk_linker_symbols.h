#ifndef SDK_LINKER_SYMBOLS_H
#define SDK_LINKER_SYMBOLS_H

// The absolute symbols of the DS build's linker script (config/usa/arm9/abs_symbols.txt and the overlay ids), as
// constants. The DS code read each one as a symbol's address; the host's values are the ones the host runtime gave
// them (the DS's DTCM arena starts at 0x027e0460, after its DTCM bss; on the host the DTCM variables are linked apart).

#define SDK_SYS_STACKSIZE 0x2000             // the launcher thread's stack size
#define SDK_IRQ_STACKSIZE 0x1000             // the IRQ stack size
#define SDK_MAIN_ARENA_LO 0x0229bdc0u        // past the overlay area (Startup_FillOverlayArea)
#define SDK_SECTION_ARENA_ITCM_START 0x01ff8000u
#define SDK_SECTION_ARENA_DTCM_START 0x027e0000u
#define SDK_SECTION_ARENA_EX_START 0x02400000u  // the extended main-RAM arena

// The overlay ids (OVERLAY_<n>_ID: the symbol's value is n)
#define OVERLAY_0_ID 0
#define OVERLAY_1_ID 1
#define OVERLAY_2_ID 2
#define OVERLAY_65_ID 65
#define OVERLAY_66_ID 66
#define OVERLAY_67_ID 67
#define OVERLAY_68_ID 68
#define OVERLAY_69_ID 69
#define OVERLAY_93_ID 93
#define OVERLAY_127_ID 127

#endif // SDK_LINKER_SYMBOLS_H
