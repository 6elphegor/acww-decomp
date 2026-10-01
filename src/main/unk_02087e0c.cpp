#include "types.h"

// TU138: 0x02087e0c-0x02087e60. Sprite attribute helpers and the width table (.rodata 0x020cf558-0x020cf588).

extern "C" {
extern const s32 data_020cf558[12];

s32 func_02087e40(s32 a, s32 b);
s32 func_02087e60(s32 a, s32 b);
}

extern "C" const s32 data_020cf558[12] = {8, 0x10, 0x20, 0x40, 8, 8, 0x10, 0x20, 0x10, 0x20, 0x20, 0x40};

extern "C" s32 func_02087e50(u32 *p) {
    u32 v = *p;
    return func_02087e60((v << 16) >> 30, v >> 30);
}

extern "C" s32 func_02087e40(s32 a, s32 b) {
    return data_020cf558[b + (a << 2)];
}

extern "C" s32 func_02087e30(u32 *p) {
    u32 v = *p;
    return func_02087e40((v << 16) >> 30, v >> 30);
}

extern "C" s32 func_02087e14(u32 *p) {
    s32 v = (*p << 7) >> 23;
    if (v >= 0x100) {
        v -= 0x200;
    }
    return v;
}

extern "C" s32 func_02087e0c(s8 *p) {
    return *p;
}
