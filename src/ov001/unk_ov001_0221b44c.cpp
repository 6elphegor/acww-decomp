// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" void func_ov001_0221b44c(s32 a, s32 b);
extern "C" void func_ov001_0221b45c(s32 a, s32 b);
extern "C" const void *const data_ov001_0222a298[3];
extern "C" const void *const data_ov001_0222a298[3] = {(void *)func_ov001_0221b45c, (void *)func_ov001_0221b44c, (void *)0x103};
extern "C" {
u8 data_ov001_0222dec8;
}

namespace F0221b794 {


extern "C" {
extern u8 data_ov001_0222dec8;

s32 func_0211172c();
s32 func_02111ec8();
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

void func_ov001_0221b794();

void func_ov001_0221b85c() {
    s32 x;
    data_ov001_0222dec8 = 0;
    func_ov001_0221b794();
    func_ov001_0220c5f0(0, &x);
    if (x == 0) func_ov001_02208290(0x7d, -1, 0);
    func_ov001_02208538(2);
    if (x == 0) func_ov001_022088f8();
    func_ov001_02208478(0x76);
    func_ov001_02207a40(0);
    func_ov001_0221b6f8();
    func_ov001_02208b4c(0);
    func_ov001_0221e9a0(0xc);
    func_ov001_0220c668((void *)func_ov001_0221b680);
}

void func_ov001_0221b794() {
    func_ov001_02208594((void *)"char/jbBgStep3.ncg.l", (void *)func_0211172c);
    func_ov001_02208594((void *)"char/ybBgStep3.ncl.l", (void *)func_02111ec8);
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

}
}

namespace F0221ae34 {

struct Unk_ov001_0221b220_A22 { u8 b[22]; };
struct Unk_ov001_0221b6f8_A12 { u8 b[12]; };

extern "C" {
extern u8 data_ov001_0222dec0;
extern u8 data_ov001_0222dec8;
extern s8 data_ov001_0222debc;
extern s8 data_ov001_0222deb8;
extern void *data_ov001_0222dec4;
extern u8 data_ov001_0222a218[];
extern u16 data_ov001_0222a258[][16];
extern u16 data_ov001_0222a25a[][16];
extern u16 data_ov001_0222a25c[][16];
extern u16 data_ov001_0222a25e[][16];
extern s8 data_ov001_0222a1f0[];
extern u8 data_ov001_0222b2d4[];
extern u8 data_ov001_0222b2ec[];

extern s32 func_ov001_022250e0(s32);
extern void func_ov001_02208114();
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_0220c668(void *);
extern void func_ov001_0221acb4();
extern void func_ov001_02208070();
extern void func_ov001_02224e4c(s32);
extern s32 func_ov001_02208100();
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0221ab50();
extern u32 func_ov001_0220c5a8(s32);
extern s32 func_ov001_022260ac(void *);
extern void func_ov001_022080e0(s32);
extern void func_ov001_02208690(u32, u32, u32, u32);
extern s32 func_ov001_022261cc(s32);
extern s32 func_ov001_022261a8(s32);
extern void func_ov001_0221abb4(s32);
extern void func_ov001_02208088();
extern void func_ov001_022084f8(s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02208594(void *, void *);
extern u8 *func_ov001_022085e0(void *);
extern void *func_ov001_02224074(void *, s32, s32);
extern void func_0211172c();
extern void func_02111ec8();
extern void func_02111a6c();
extern u8 *func_ov001_0221e8b4();
extern u8 *func_ov001_0221e014();
extern s32 func_ov001_0220c5e0();
extern void func_ov001_022088f8();
extern void func_ov001_02208290(s32, s32, s32);
extern void func_ov001_02208538(s32);
extern void func_ov001_0221b1c0();
extern void func_ov001_02225d08(s32);
extern void func_ov001_02225dd8(s32, s32);
extern s32 func_ov065_0226b1e0();
extern void func_ov001_02208af8();
extern void func_ov001_0221e93c();
extern void func_ov065_0226b16c();
extern void func_ov001_02214f50();
extern void func_ov001_0221b5d0();
extern void func_ov001_02226fdc(s32, s32);
extern s32 func_ov065_0226b110();
extern void *func_020fe848();
extern void func_02116048(void *, void *, s32);
extern void func_ov001_022079fc();
extern void func_ov001_022253d4(s32);
extern void func_ov001_02225c58(s32, s32);
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_022156b8();
extern void func_ov001_0221bbd4();
extern void func_ov001_0221b4f0();
extern void func_ov001_0221b598();
extern void func_ov001_0221b610();
extern void func_ov001_0221b630();
extern void func_ov001_0221b168();
extern void func_ov001_0221b12c();
extern void func_ov001_0221b10c();
extern void func_ov001_0221ae34();
extern void func_ov001_0221aeac();
extern void func_ov001_0221aed8();
extern void func_ov001_0221af40();
extern void func_ov001_0221af44();
extern void func_ov001_0221b604();
extern void func_ov001_0221b608();
extern void func_ov001_0221b60c();
extern void func_ov001_0220c5f0(s32, void *);
extern void func_02115e78(void *, void *, s32);
extern s32 func_ov065_0226b27c(void *);
extern void func_0206d49c();
extern void func_ov065_0226b0ec(s32, void *);
extern void func_ov001_02227094(s32, void *, s32, s32);
extern void func_ov001_0221b470(s32);


#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_0221b44c(s32 a, s32 b);
void func_ov001_0221b45c(s32 a, s32 b);
void func_ov001_0221b470(s32 a);
void func_ov001_0221b4f0();
void func_ov001_0221b598();
void func_ov001_0221b5d0();
void func_ov001_0221b604();
void func_ov001_0221b608();
void func_ov001_0221b60c();
void func_ov001_0221b610();
void func_ov001_0221b630();
void func_ov001_0221b680();
void func_ov001_0221b6f8();

void func_ov001_0221b6f8() {
    u32 l;
    Unk_ov001_0221b6f8_A12 m;
    u8 *o = func_ov001_0221e8b4();
    func_02115e78((void *)data_ov001_0222a298, &m, 12);
    func_ov001_0220c5f0(0, &l);
    if (l == 2) m.b[10] = 4;
    else m.b[10] = o[0xf4] + 1;
    if (func_ov065_0226b27c(&m) == 0) func_0206d49c();
    if (l == 0) func_ov065_0226b0ec(o[0xf4], o);
    func_ov001_02227094(0, (void *)func_ov001_0221b470, 0, 0x78);
}

void func_ov001_0221b680() {
    u32 l;
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c5f0(0, &l);
    if (l == 0) {
        func_ov001_02224ff8(2, 1, 1, 8);
        func_ov001_02225cb4(1, 1);
    }
    func_ov001_0220c668((void *)func_ov001_0221b630);
}

void func_ov001_0221b630() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221b610);
}

void func_ov001_0221b610() {
    func_ov001_0221b60c();
    func_ov001_0221b608();
    func_ov001_0221b604();
}

void func_ov001_0221b60c() {
}

void func_ov001_0221b608() {
}

void func_ov001_0221b604() {
}

void func_ov001_0221b5d0() {
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221b598);
}

void func_ov001_0221b598() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221b4f0);
}

void func_ov001_0221b4f0() {
    u8 *o = func_ov001_0221e014();
    if (func_ov065_0226b110() == 0) return;
    func_02116048(func_020fe848(), o + 0xf0, 0xe);
    func_02116048(func_020fe848(), o + 0x1f0, 0xe);
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222dec8 == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_022156b8);
    } else {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0221bbd4);
    }
}

void func_ov001_0221b470(s32 a) {
    s32 r = func_ov065_0226b1e0();
    if (r == 0) return;
    func_ov001_02208af8();
    func_ov001_0221e93c();
    if (r > 0) {
        data_ov001_0222dec8 = 1;
        func_ov001_0221e9a0(0x11);
    } else {
        func_ov065_0226b16c();
        func_ov001_02214f50();
        func_ov001_0221e9a0(0x12);
    }
    func_ov001_0220c668((void *)func_ov001_0221b5d0);
    func_ov001_02226fdc(0, a);
}

void func_ov001_0221b45c(s32 a, s32 b) {
    func_ov001_02225dd8(b, 0x20);
}

void func_ov001_0221b44c(s32 a, s32 b) {
    func_ov001_02225d08(b);
}

}
}
