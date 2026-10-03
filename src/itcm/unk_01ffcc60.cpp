// mwcc-flags: -nothumb -O4,p
// I004b: itcm 0x01ffcc60-0x01ffcd50 (3 ARM functions): the vblank work callback, the window-edge animation step and an empty
// function. mwcc 1.2/base, C++, ARM, -O4,p. The two H-blank handlers behind it (0x01ffcd50, 0x01ffceb8) are UNMATCHED, see notes.txt.
#include "types.h"

extern "C" {
extern s32 data_021cb3dc;
extern s32 data_020dc520;
extern u16 data_021cb3c0;
extern u8 data_021cb3ec[];
extern u8 data_021cb3e4[];
extern u8 data_027e0000[];
extern u8 data_027e0434;
extern u8 data_027e0438[];

void func_021136a0(void *queue); // OS_WakeupThread
void func_020b83f0(void);
void func_0205b714(void);
}

extern "C" void func_01ffcd4c(void) {
}

// WIN0H animation: data_027e0434 counts 0..47, data_027e0438 is a 24-entry table walked up and down
extern "C" void func_01ffccf4(void) {
    u32 i = data_027e0434;
    u32 j = (i >= 24) ? 47 - i : i;
    u32 w = data_027e0438[j];
    vu16 *reg = (vu16 *)0x04000000;
    u32 v = ((w << 8) & 0xff00) | 0xff;
    if (reg[2] & 2) {
        reg[0x21] = v;
    }
    i++;
    if (i >= 48) {
        i -= 48;
    }
    data_027e0434 = (u8)i;
}

// vblank work
extern "C" void func_01ffcc60(void) {
    data_021cb3dc++;
    if (data_021cb3dc >= data_020dc520) {
        if (data_021cb3c0 != 0) {
            func_021136a0(data_021cb3ec);
            data_021cb3dc = 0;
            func_020b83f0();
        }
    }
    func_0205b714();
    func_021136a0(data_021cb3e4);
    *(vu32 *)((u32)data_027e0000 + 0x3ff8) |= 1;
}

