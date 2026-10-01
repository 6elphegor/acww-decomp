// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

typedef volatile u16 vu16;

extern "C" {
s32 func_0211c460(u32 a);

void func_ov001_02225ea0();

u8 data_ov001_0222df4c;
}

void func_ov001_02225ea0() {
    if (data_ov001_0222df4c != 0) {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) != 0) return;
        if (func_0211c460(1) != 0) data_ov001_0222df4c = 0;
    } else {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) == 0) return;
        if (func_0211c460(0) != 0) data_ov001_0222df4c = 1;
    }
}

