// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 GX_LoadBG2Scr();
s32 func_ov001_022088f8();
s32 func_ov001_02208478(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0221be7c();
void func_ov001_02218e9c();
void func_ov001_02218e10();
void func_ov001_02218ee8();
void func_ov001_02218ee4();
void func_ov001_02218dc8();
void func_ov001_02218f04();
void func_ov001_02218f3c();
void func_ov001_02218f7c();
void func_ov001_0221901c();
}

extern "C" u8 data_ov001_0222dea0 = 0;

extern "C" void func_ov001_0221901c() {
    data_ov001_0222dea0 = 0;
    func_ov001_02218f7c();
    func_ov001_022088f8();
    func_ov001_02208478(0x6b);
    func_ov001_0221e9a0(0x10);
    func_ov001_0220c668((void *)func_ov001_02218f3c);
}

extern "C" void func_ov001_02218f7c() {
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

extern "C" void func_ov001_02218f3c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02218f04);
}

extern "C" void func_ov001_02218f04() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_02218ee8);
}

extern "C" void func_ov001_02218ee8() {
    func_ov001_02218dc8();
    func_ov001_02218ee4();
}

extern "C" void func_ov001_02218ee4() {
}

extern "C" void func_ov001_02218e9c() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02218e10);
}

extern "C" void func_ov001_02218e10() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 0);
    func_ov001_0220c618(0, 1);
    func_ov001_0220c668((void *)func_ov001_0221be7c);
}

extern "C" void func_ov001_02218dc8() {
    data_ov001_0222dea0++;
    if (data_ov001_0222dea0 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_02218e9c);
}

