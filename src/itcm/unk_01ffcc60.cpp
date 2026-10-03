// mwcc-flags: -nothumb -O4,p
// I004b: itcm 0x01ffcc60-0x01ffcd50 (3 ARM functions): the vblank work callback, the window-edge animation step and an empty
// function. mwcc 1.2/base, C++, ARM, -O4,p. The two H-blank handlers behind it (0x01ffcd50, 0x01ffceb8) are UNMATCHED, see notes.txt.
#include "types.h"

extern "C" {
extern s32 sVBlankCount;
extern s32 gVBlanksPerFrame;
extern u16 gMainWaitingFrame;
extern u8 gFrameWaitQueue[];
extern u8 gVBlankQueue[];
extern u8 data_027e0000[];
extern u8 sMenuWipeLine;
extern u8 sMenuWipeEdge[];

void OS_WakeupThread(void *queue); // OS_WakeupThread
void VramQueueTex_Run(void);
void HBlank_RunVBlank(void);
}

extern "C" void Sky_HBlankNone(void) {
}

// WIN1H (0x04000042) animation: sMenuWipeLine counts 0..47, sMenuWipeEdge is a 24-entry table walked up and down
extern "C" void MenuScreen_WipeHBlank(void) {
    u32 i = sMenuWipeLine;
    u32 j = (i >= 24) ? 47 - i : i;
    u32 w = sMenuWipeEdge[j];
    vu16 *reg = (vu16 *)0x04000000;
    u32 v = ((w << 8) & 0xff00) | 0xff;
    if (reg[2] & 2) {
        reg[0x21] = v;
    }
    i++;
    if (i >= 48) {
        i -= 48;
    }
    sMenuWipeLine = (u8)i;
}

// vblank work
extern "C" void Main_VBlankCallback(void) {
    sVBlankCount++;
    if (sVBlankCount >= gVBlanksPerFrame) {
        if (gMainWaitingFrame != 0) {
            OS_WakeupThread(gFrameWaitQueue);
            sVBlankCount = 0;
            VramQueueTex_Run();
        }
    }
    HBlank_RunVBlank();
    OS_WakeupThread(gVBlankQueue);
    *(vu32 *)((u32)data_027e0000 + 0x3ff8) |= 1;
}

