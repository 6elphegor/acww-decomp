// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 data_ov001_0222decc;
}



extern "C" {

s32 func_0211172c();
s32 GX_LoadBGPltt();
s32 func_02111a6c();
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220c5f0(s32, s32 *);
s32 func_ov001_0220c5c8();
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_02208538(s32);
s32 func_ov001_022088f8();
s32 func_ov001_02208478(s32);
s32 func_ov001_02207a40(s32);
void func_ov001_0221b6f8();
s32 func_ov001_02208b4c(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
void func_ov001_0221b680();
s32 func_ov001_0220d440();
s32 func_ov001_02217e40();
s32 func_ov001_0220dd94();
s32 func_ov001_0221f09c();
s32 func_ov001_022250e0(s32);
s32 func_ov001_0221eb38();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_0221dc60();
s32 func_ov001_0221e25c();

void func_ov001_0221b85c();
void func_ov001_0221b8f4();
void func_ov001_0221b980();
void func_ov001_0221ba50();
s32 func_ov001_0221bab4();
void func_ov001_0221bab8();
void func_ov001_0221bad4();
void func_ov001_0221bb0c();
void func_ov001_0221bb4c();
void func_ov001_0221bc10();
void func_ov001_0221bc60();
void func_ov001_0221bca8();
void func_ov001_0221bcac();
void func_ov001_0221bcb0();
void func_ov001_0221bd00();
void func_ov001_0221bd94();
void func_ov001_0221bdf4();
void func_ov001_0221be7c();
void func_ov001_0221bee0();
void func_ov001_0221bf28();
void func_ov001_0221bfb4();
s32 func_ov001_0221bffc();
void func_ov001_0221c000();
void func_ov001_0221c01c();

void func_ov001_0221bbd4();

void func_ov001_0221bbd4() {
    data_ov001_0222decc = 0;
    func_ov001_0221bb4c();
    func_ov001_02208478(0x77);
    func_ov001_0220c668((void *)func_ov001_0221bb0c);
}

void func_ov001_0221bb4c() {
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

void func_ov001_0221bb0c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221bad4);
}

void func_ov001_0221bad4() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221bab8);
}

void func_ov001_0221bab8() {
    func_ov001_0221b8f4();
    func_ov001_0221bab4();
}

s32 func_ov001_0221bab4() {
}

void func_ov001_0221ba50() {
    s32 x;
    func_ov001_0220c5f0(0, &x);
    if (x != 0) func_ov001_0221f09c();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221b980);
}

void func_ov001_0221b980() {
    s32 x;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0221eb38() == 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(2, 1);
    func_ov001_0220c5f0(0, &x);
    if (x == 0) {
        func_ov001_0220c618(0, 0);
        func_ov001_0220c668((void *)func_ov001_02217e40);
    } else {
        func_ov001_0220c668((void *)func_ov001_0220dd94);
    }
}

void func_ov001_0221b8f4() {
    s32 x;
    s32 r;
    data_ov001_0222decc++;
    if (data_ov001_0222decc < 0xb4) return;
    func_ov001_0220c5f0(0, &x);
    r = func_ov001_0220c5c8();
    switch (r) {
    case 0:
        break;
    case 1:
        if (x != 0) {
            func_ov001_0220c668((void *)func_ov001_0220d440);
            return;
        }
        break;
    }
    func_ov001_0220c668((void *)func_ov001_0221ba50);
}

}
