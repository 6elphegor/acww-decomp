#include "types.h"

// 0x020a6914-0x020a6974: the seven functions between the linked units at 0x020a65fc (U199) and 0x020a6974 (U200).
// Bodies unchanged from src/main/unk_020a6914.cpp.

extern "C" {
void func_02076b08(void *p, int a, int b);
}

extern "C" void func_020a6970(void) {}

extern "C" void func_020a696c(void) {}

extern "C" void func_020a6968(u8 *a, u8 b) { *a = b; }

extern "C" void func_020a6960(u8 *a, u8 *b) { *b = *a; }

extern "C" void func_020a695c(void) {}

extern "C" void func_020a6958(void) {}

extern "C" void func_020a6914(u8 *p, int a, int b, int c, u8 d, int e) {
    u8 flags = 0;
    if (c) flags |= 1;
    if (d) flags |= 2;
    func_02076b08(p, b, flags);
    p[1] = e;
    p[1] |= (a << 6) & 0xc0;
}
