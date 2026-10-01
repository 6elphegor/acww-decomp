// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_02111a6c();
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220c5f0(s32, s32 *);
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_022088f8();
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_0221dc60();
s32 func_ov001_0221e25c();
s32 func_ov001_0221e9a0(s32);

void func_ov001_0221bc10();
void func_ov001_0221bc60();
void func_ov001_0221bca8();
void func_ov001_0221bcac();
void func_ov001_0221bcb0();
void func_ov001_0221bd00();
void func_ov001_0221bd94();
void func_ov001_0221bdf4();
void func_ov001_0221be7c();
void func_ov001_0221b85c();
}

struct Unk_0221bd00_V { s32 v[3]; };

extern "C" s32 data_ov001_0222b388[3] = {0x75, 0x75, 0x9d};

extern "C" void func_ov001_0221be7c() {
    s32 x;
    func_ov001_0221dc60();
    func_ov001_0220c5f0(0, &x);
    func_ov001_0221bdf4();
    func_ov001_02208290(0x7d, -1, 0);
    if (x != 2) func_ov001_022088f8();
    if (x == 1) func_ov001_0221e25c();
    func_ov001_0220c668((void *)func_ov001_0221bd94);
}

extern "C" void func_ov001_0221bdf4() {
    func_ov001_02208594((void *)"char/xb4None.nsc.l", (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

extern "C" void func_ov001_0221bd94() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0221bd00);
}

extern "C" void func_ov001_0221bd00() {
    s32 x;
    Unk_0221bd00_V a = *(Unk_0221bd00_V *)data_ov001_0222b388;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c5f0(0, &x);
    func_ov001_02220778(a.v[x], 1, 1, -1, 0);
    func_ov001_0220c668((void *)func_ov001_0221bcb0);
}

extern "C" void func_ov001_0221bcb0() {
    func_ov001_0221bcac();
    func_ov001_0221bca8();
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0221e9a0(6);
    func_ov001_0220c668((void *)func_ov001_0221bc60);
}

extern "C" void func_ov001_0221bcac() {
}

extern "C" void func_ov001_0221bca8() {
}

extern "C" void func_ov001_0221bc60() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0221bc10);
}

extern "C" void func_ov001_0221bc10() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_02225c58(0, 0x14);
    func_ov001_0220c654(0, 1);
    func_ov001_0220c668((void *)func_ov001_0221b85c);
}
