#include "types.h"

// TU178: 0x0209b598-0x0209b5d4. One setting word in .data (0x020e22cc) and the function that applies it to a
// temporary Unk_0209be24 grid.

extern "C" {
// Unk_0209be24 (0x140 bytes), called by its symbols.txt names
void _ZN12Unk_0209be24C1Ev(void *self);
void _ZN12Unk_0209be2413func_0209bee4Ei(void *self, s32 v);
void _ZN12Unk_0209be2413func_0209be24EPh(void *self, s32 arg);
void _ZN12Unk_0209be24D1Ev(void *self);
}

s32 data_020e22cc = 3;

extern "C" void func_0209b5c8(s32 v) {
    data_020e22cc = v;
}

extern "C" void func_0209b598(s32 arg) {
    u32 buf[0x50];
    _ZN12Unk_0209be24C1Ev(buf);
    _ZN12Unk_0209be2413func_0209bee4Ei(buf, data_020e22cc);
    _ZN12Unk_0209be2413func_0209be24EPh(buf, arg);
    _ZN12Unk_0209be24D1Ev(buf);
}
