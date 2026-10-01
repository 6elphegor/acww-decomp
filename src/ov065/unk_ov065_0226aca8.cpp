// mwcc-flags: -O4,p -str reuse
#include "types.h"

extern "C" {

s32 _s32_div_f(s32, s32);

volatile u8 data_ov065_022905d8[4];
u8 data_ov065_022905dc[16];

u8 func_ov065_0226ad30();

u8 func_ov065_0226ad30() {
    u32 sum = 0;
    u8 cnt = data_ov065_022905d8[0];
    s32 i;
    if (cnt > 16) {
        u8 *p;
        i = sum;
        p = data_ov065_022905dc;
        for (; i < 16; p++, i++) {
            sum += *p;
        }
        sum = _s32_div_f(sum, 16);
    } else if (cnt != 0) {
        for (i = sum; i < cnt; i++) {
            sum += data_ov065_022905dc[i];
        }
        sum = _s32_div_f(sum, cnt);
    }
    return sum;
}

u32 func_ov065_0226ad08() {
    u32 n = func_ov065_0226ad30();
    u32 r = 0;
    if (n >= 0x1c) {
        r = 3;
    } else if (n >= 0x16) {
        r = 2;
    } else if (n >= 0x10) {
        r = 1;
    }
    return r;
}

void func_ov065_0226aca8(s32 v) {
    u32 c;
    u8 idx;
    if ((v & 2) != 0) {
        c = ((u32)v << 22) >> 24;
    } else {
        c = (u8)((v >> 2) + 0x19);
    }
    idx = data_ov065_022905d8[0];
    data_ov065_022905dc[idx % 16] = c;
    if (idx >= 16) {
        data_ov065_022905d8[0] = (idx + 1) % 16 + 16;
    } else {
        data_ov065_022905d8[0] = data_ov065_022905d8[0] + 1;
    }
}

}
