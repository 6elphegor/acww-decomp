// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_02111a6c();
s32 func_0211172c();
s32 func_02111ec8();
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208478(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);

void func_ov001_0221bee0();
void func_ov001_0221bf28();
void func_ov001_0221bfb4();
s32 func_ov001_0221bffc();
void func_ov001_0221c000();
void func_ov001_0221c01c();
void func_ov001_0221c054();
void func_ov001_0221c094();
void func_ov001_0221c134();
void func_ov001_0221be7c();
}

extern "C" u8 data_ov001_0222ded0 = 0;

extern "C" void func_ov001_0221c134() {
    data_ov001_0222ded0 = 0;
    func_ov001_0221c094();
    func_ov001_0220891c(8);
    func_ov001_02208478(0x6f);
    func_ov001_0221e9a0(0x10);
    func_ov001_0220c668((void *)func_ov001_0221c054);
}

extern "C" void func_ov001_0221c094() {
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)func_02111a6c);
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

extern "C" void func_ov001_0221c054() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221c01c);
}

extern "C" void func_ov001_0221c01c() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221c000);
}

extern "C" void func_ov001_0221c000() {
    func_ov001_0221bee0();
    func_ov001_0221bffc();
}

extern "C" s32 func_ov001_0221bffc() {
}

extern "C" void func_ov001_0221bfb4() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221bf28);
}

extern "C" void func_ov001_0221bf28() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 0);
    func_ov001_0220c618(0, 2);
    func_ov001_0220c668((void *)func_ov001_0221be7c);
}

extern "C" void func_ov001_0221bee0() {
    data_ov001_0222ded0++;
    if (data_ov001_0222ded0 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_0221bfb4);
}
