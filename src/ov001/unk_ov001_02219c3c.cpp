// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" const u8 data_ov001_0222a15c[4];
extern "C" const s8 data_ov001_0222a160[8];
extern "C" const u16 data_ov001_0222a168[12];
extern "C" const u16 data_ov001_0222a180[28];
extern "C" const u16 data_ov001_0222a1b8[28];
extern "C" {
u8 data_ov001_0222deb0;
void *data_ov001_0222deb4;
}

namespace F0221a40c {

struct Unk_ov001_0221a40c_G {
    u32 unk_00;
    u32 unk_04[3];
    u32 unk_10[3];
    u8 unk_1c;
    u8 unk_1d;
    u8 pad_1e[2];
};

struct Unk_ov001_0221abb4_R { u16 v[16]; };
struct Unk_ov001_0221ab50_B { u8 b[4]; };
struct Unk_ov001_0221a8a8_P { u16 x, y; };
struct Unk_ov001_0221a9c8_B { u8 b[22]; };

extern "C" {
extern Unk_ov001_0221a40c_G *data_ov001_0222deb4;
extern u8 data_ov001_0222deb0;
extern const s8 data_ov001_0222a160[];
extern const u16 data_ov001_0222a168[];
extern const u8 data_ov001_0222a15c[];

s32 func_ov001_022250e0(s32);
s32 func_ov001_02208100();
void func_ov001_02208114();
u8 *func_ov001_0221e8b4();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_0220c668(void *);
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
void func_ov001_0221f09c();
s32 func_ov001_0220c5c8();
void func_ov001_0221e9a0(s32);
u32 func_ov001_0221e434(u32);
void func_ov001_022080cc(s32);
s32 func_ov001_0220c5e0();
void func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_02219ee4();
void func_ov001_0221e348(s32);
void func_ov001_02219c3c();
s32 func_ov001_022260ac(void *);
void func_ov001_022080e0(s32);
void func_ov001_0221a1a8();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022261a8(s32);
void func_ov001_02219f80(s32);
s32 func_ov001_0221ef90();
void func_ov001_02208088();
void func_ov001_022084f8(s32);
void func_ov001_02225cb4(s32, s32);
u32 func_ov001_02224b14(u32, u32, u32);
void func_ov001_02224558(u32, s32, u32, u32);
void func_ov001_022244d8(u32, s32, s32);
s32 func_ov001_02208594(void *, void *);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void GX_LoadOBJPltt();
void *func_ov001_022085e0(void *);
u32 func_ov001_02224074(void *, s32, s32);
u32 func_ov001_02225db0(s32, s32);
void func_ov001_0220891c(s32);
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void func_ov001_0221ce08(void *, u32, u32);
u32 func_ov001_0220c5a8(s32);
void func_ov001_02208690(u32, u32, u32, u32);
s32 func_ov001_022080a0();
void func_ov001_0220864c();
void func_ov001_02208244();
void func_ov001_02224038(void *);
void func_ov001_02225c58(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220c618(s32, s32);
void func_ov001_022156e0(s32);
void func_ov001_02219bc0();
void func_ov001_0221181c();
void func_ov001_022195a4();
void func_ov001_02217e40();
void func_ov001_0221a238();
void func_ov001_0220d440();
void func_ov001_02219d64();

void func_ov001_0221a40c();
void func_ov001_0221a4ac();
s32 func_ov001_0221a4f4();
void func_ov001_0221a644();
void func_ov001_0221a648();
void func_ov001_0221a780();
void func_ov001_0221a7a0();
void func_ov001_0221a7f0();
void func_ov001_0221a848();
void func_ov001_0221a8a8();
void func_ov001_0221a9c8();
void func_ov001_0221aae4();
void func_ov001_0221ab50();
void func_ov001_0221abb4(s32);
void func_ov001_0221acb4();

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

void func_ov001_0221aae4() {
    data_ov001_0222deb4 = (Unk_ov001_0221a40c_G *)func_ov001_02225db0(0x20, 4);
    data_ov001_0222deb4->unk_1d = 0;
    func_ov001_0221a9c8();
    func_ov001_0220891c(1);
    func_ov001_02208290(0x7b, -1, 0);
    func_ov001_02208538(0);
    func_ov001_0221a8a8();
    func_ov001_0221a1a8();
    func_ov001_0220c668((void *)func_ov001_0221a848);
}

void func_ov001_0221a9c8() {
    char buf[22] = "char/ybBgStep11.ncl.l";
    func_ov001_02208594((void *)"char/ybObjWay.ncl.l", (void *)GX_LoadOBJPltt);
    func_ov001_02208594((void *)"char/jbBgStep1.ncg.l", (void *)GX_LoadBG2Char);
    func_ov001_02208594((void *)"char/jbBgStep1.ncl.l", (void *)GX_LoadBGPltt);
    func_ov001_02208594((void *)"char/jb2Ap.nsc.l", (void *)GX_LoadBG2Scr);
    data_ov001_0222deb4->unk_00 = func_ov001_02224074(func_ov001_022085e0(&buf), 0, 4);
    func_ov001_02225cb4(1, 0x10);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

#define P168 ((const Unk_ov001_0221a8a8_P *)data_ov001_0222a168)

void func_ov001_0221a8a8() {
    u32 z[2];
    u32 a;
    s32 i;
    z[0] = 0;
    z[1] = 0;
    for (i = 0; i < 3; i++) {
        a = func_ov001_0221e434(i);
        if (a == 0xff) {
            a = 3;
        } else {
            data_ov001_0222deb4->unk_10[i] = func_ov001_02224b14(z[0], 0x11, 1);
            func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, P168[i + 3].x, P168[i + 3].y);
            func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
        }
        data_ov001_0222deb4->unk_04[i] = func_ov001_02224b14(z[1], data_ov001_0222a15c[a], 1);
        func_ov001_02224558(data_ov001_0222deb4->unk_04[i], -1, P168[i].x, P168[i].y);
        func_ov001_022244d8(data_ov001_0222deb4->unk_04[i], -1, 3);
    }
}

void func_ov001_0221a848() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0221a7f0);
}

void func_ov001_0221a7f0() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0221a7a0);
}

void func_ov001_0221a7a0() {
    if (func_ov001_02208100() == -2) return;
    if (func_ov001_0221ef90() == 1) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221a780);
}

void func_ov001_0221a780() {
    func_ov001_0221a648();
    func_ov001_0221a644();
    func_ov001_0221a4f4();
}

void func_ov001_0221a648() {
    u32 i;
    u8 *p;
    p = (u8 *)data_ov001_0222a180;
    for (i = 0; i < 7; p += 8, i++) {
        if (func_ov001_022260ac(p)) {
            func_ov001_022080e0(1);
            data_ov001_0222deb0 = i;
            func_ov001_0221a1a8();
            return;
        }
    }
    if (func_ov001_022261cc(1)) {
        func_ov001_022080e0(1);
        return;
    }
    if (func_ov001_022261cc(2)) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_022261a8(0x40)) {
        func_ov001_02219f80(1);
        return;
    }
    if (func_ov001_022261a8(0x80)) {
        func_ov001_02219f80(3);
        return;
    }
    if (func_ov001_022261a8(0x20)) {
        func_ov001_02219f80(0);
        return;
    }
    if (func_ov001_022261a8(0x10) == 0) return;
    func_ov001_02219f80(2);
}

void func_ov001_0221a644() {}

s32 func_ov001_0221a4f4() {
    s32 r = func_ov001_02208100();
    switch (r) {
    case 0:
        switch (func_ov001_0220c5c8()) {
        case 0:
            func_ov001_0221e9a0(7);
            data_ov001_0222deb4->unk_1d = 2;
            break;
        case 1:
            func_ov001_02208070();
            func_ov001_0220c668((void *)func_ov001_0220d440);
            return;
        }
        break;
    case 1: {
        u32 t;
        data_ov001_0222deb4->unk_1d = 1;
        t = data_ov001_0222deb0;
        if (t >= 4) {
            u32 k = t - 4;
            if (func_ov001_0221e434(k) == 0xff) {
                func_ov001_0221e9a0(9);
                func_ov001_022080cc(-1);
                return;
            }
            func_ov001_0221e9a0(6);
            func_ov001_02220778(0x98, 0, 1, data_ov001_0222a160[func_ov001_0220c5e0()], k + 1);
            func_ov001_02219ee4();
            func_ov001_02208070();
            func_ov001_0220c668((void *)func_ov001_02219d64);
            return;
        }
        if (t <= 2) {
            func_ov001_0221e348(t);
        }
        func_ov001_0221e9a0(6);
        func_ov001_02219c3c();
        break;
    }
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_0221a4ac);
}

void func_ov001_0221a4ac() {
    if (data_ov001_0222deb4->unk_1d == 2) {
        func_ov001_0221f09c();
    }
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221a40c);
}

void func_ov001_0221a40c() {
    if (func_ov001_022250e0(1)) return;
    if (data_ov001_0222deb4->unk_1d == 1) {
        if (data_ov001_0222deb0 == 3 || func_ov001_0221e8b4()[0xe7] != 0xff) {
            func_ov001_02208114();
        }
    }
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0221a238);
}

}
}

#define A1B8 ((const u8 *)data_ov001_0222a1b8)

namespace F02219a98 {

struct Unk_ov001_0222deb4_G {
    void *unk_00;
    void *unk_04[3];
    void *unk_10[3];
    u8 unk_1c;
    u8 unk_1d;
};

struct Unk_ov001_02219c3c_Q { u8 b[4]; };

extern "C" {
extern u8 data_ov001_0222b1fc[];
extern u8 data_ov001_0222b214[];
extern u8 data_ov001_0222b22c[];
extern u8 data_ov001_0222b240[];
extern u8 data_ov001_0222b244[];
extern char data_ov001_0222b260[];
extern u16 data_ov001_0222deac;
extern u8 data_ov001_0222dea8;
extern u8 data_ov001_0222deb0;
extern Unk_ov001_0222deb4_G *data_ov001_0222deb4;
extern const u8 data_ov001_0222a15c[];
extern const u16 data_ov001_0222a168[];

extern void GX_LoadBG2Char();
extern void GX_LoadBGPltt();
extern void GX_LoadBG2Scr();
extern void GX_LoadOBJPltt();
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02225c58(s32, s32);
extern void func_ov001_0220c668(void *);
extern s32 func_ov001_02208594(void *, void *);
extern void func_ov001_02208290(s32, s32, s32);
extern void func_ov001_022088f8();
extern void func_ov001_02208538(s32);
extern void func_ov001_02208478(s32);
extern void func_ov001_02207a40(s32);
extern void func_ov001_0221dca4();
extern void func_ov001_0221db6c();
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0221ce08(void *, s32, s32);
extern s32 func_ov001_0221e434();
extern s32 func_ov001_02224670(void *, s32, s32, s32);
extern s32 func_ov001_022206f8();
extern void func_ov001_02208088();
extern s32 func_ov001_02220714();
extern void func_ov001_02220728();
extern void func_ov001_0221dfcc(s32);
extern void *func_ov001_022247d4(void *, s32);
extern void func_ov001_02224b9c(s32, s32, void *);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_022247e0(void *);
extern void func_ov001_02208690(s32, s32, s32, s32);
extern void func_ov001_02208780(s32, s32, s32, s32);
extern s32 func_ov001_022250e0(s32);
extern s32 func_ov001_0221eb38();
extern s32 func_ov001_022080a0();
extern void func_ov001_0220864c();
extern void func_ov001_02208244();
extern void func_ov001_02224038(void *);
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_0220c618(s32, s32);
extern u8 *func_ov001_0221e8b4();
extern void func_ov001_022156e0(s32);
extern void func_ov001_02225d58(void *);
extern void func_ov001_0220dd94();
extern void func_ov001_0221b318();
extern void func_ov001_02217e40();
extern void func_ov001_0221c5a0();
extern void func_ov001_0221a780();

void func_ov001_02219a40();
void func_ov001_02219a98();
void func_ov001_02219af8();
void func_ov001_02219bc0();
void func_ov001_02219c3c();
void func_ov001_02219d2c();
void func_ov001_02219d64();
void func_ov001_02219ee4();
void func_ov001_02219f80(u32 a);
void func_ov001_0221a1a8();
void func_ov001_0221a238();

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_0221a238() {
    s32 i;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0221eb38() == 0) return;
    if (func_ov001_022080a0() == 0) return;
    for (i = 0; (u32)i < 3; i++) {
        if (data_ov001_0222deb4->unk_04[i] != 0) func_ov001_022247e0(data_ov001_0222deb4->unk_04[i]);
    }
    for (i = 0; (u32)i < 3; i++) {
        if (data_ov001_0222deb4->unk_10[i] != 0) func_ov001_022247e0(data_ov001_0222deb4->unk_10[i]);
    }
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222deb4->unk_00);
    func_ov001_02208594(data_ov001_0222b260, (void *)GX_LoadOBJPltt);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    if (data_ov001_0222deb4->unk_1d == 2) {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0220dd94);
    } else {
        switch (data_ov001_0222deb0) {
        case 0: case 1: case 2:
            func_ov001_0220c654(2, 0);
            if (func_ov001_0221e8b4()[0xe7] == 0xff) {
                func_ov001_0220c668((void *)func_ov001_0221b318);
            } else {
                func_ov001_0220c618(0, 0);
                func_ov001_022156e0(0);
                func_ov001_0220c668((void *)func_ov001_02217e40);
            }
            break;
        case 3:
            func_ov001_0220c654(2, 1);
            func_ov001_0220c668((void *)func_ov001_0221c5a0);
            break;
        }
    }
    func_ov001_02225d58(&data_ov001_0222deb4);
}

void func_ov001_0221a1a8() {
    u32 i = data_ov001_0222deb0;
    if (i < 4) {
        func_ov001_02208690(*(u16 *)(A1B8 + (i << 3)), *(u16 *)(A1B8 + 4 + (i << 3)), *(u16 *)(A1B8 + 2 + (i << 3)), *(u16 *)(A1B8 + 6 + (i << 3)));
    } else {
        func_ov001_02208780(0, *(u16 *)(A1B8 + (i << 3)), *(u16 *)(A1B8 + 4 + (i << 3)), *(u16 *)(A1B8 + 2 + (i << 3)));
    }
}

void func_ov001_02219f80(u32 a) {
    u32 f = 1;
    switch (data_ov001_0222deb0) {
    case 0:
        data_ov001_0222deb4->unk_1c = 0;
        if (a == 0) data_ov001_0222deb0 = 2;
        else if (a == 2) data_ov001_0222deb0 = 1;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 4;
        break;
    case 1:
        data_ov001_0222deb4->unk_1c = 1;
        if (a == 0) data_ov001_0222deb0 = 0;
        else if (a == 2) data_ov001_0222deb0 = 2;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 5;
        break;
    case 2:
        data_ov001_0222deb4->unk_1c = 2;
        if (a == 0) data_ov001_0222deb0 = 1;
        else if (a == 2) data_ov001_0222deb0 = 0;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 6;
        break;
    case 3: {
        u32 t = data_ov001_0222deb4->unk_1c;
        u32 t4 = t + 4;
        if (a == 1) data_ov001_0222deb0 = t4;
        else if (a == 3) data_ov001_0222deb0 = t;
        else f = 0;
        break;
    }
    case 4:
        data_ov001_0222deb4->unk_1c = 0;
        if (a == 0) data_ov001_0222deb0 = 6;
        else if (a == 2) data_ov001_0222deb0 = 5;
        else if (a == 1) data_ov001_0222deb0 = 0;
        else data_ov001_0222deb0 = 3;
        break;
    case 5:
        data_ov001_0222deb4->unk_1c = 1;
        if (a == 0) data_ov001_0222deb0 = 4;
        else if (a == 2) data_ov001_0222deb0 = 6;
        else if (a == 1) data_ov001_0222deb0 = 1;
        else data_ov001_0222deb0 = 3;
        break;
    case 6:
        data_ov001_0222deb4->unk_1c = 2;
        if (a == 0) data_ov001_0222deb0 = 5;
        else if (a == 2) data_ov001_0222deb0 = 4;
        else if (a == 1) data_ov001_0222deb0 = 2;
        else data_ov001_0222deb0 = 3;
        break;
    }
    if (f == 0) return;
    func_ov001_0221e9a0(8);
    func_ov001_0221a1a8();
}

void func_ov001_02219ee4() {
    s32 i = data_ov001_0222deb0 - 4;
    func_ov001_02224b9c(0, 0x32, func_ov001_022247d4(data_ov001_0222deb4->unk_10[i], 0));
    func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, data_ov001_0222a168[(i + 3) * 2], (data_ov001_0222a168 + 1)[(i + 3) * 2]);
    func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
}

void func_ov001_02219d64() {
    s32 i = data_ov001_0222deb0 - 4;
    s32 r = func_ov001_02220714();
    switch (r) {
    case 1:
        func_ov001_0221e9a0(14);
        func_ov001_0221dfcc(i);
        func_ov001_02224b9c(0, data_ov001_0222a15c[3], func_ov001_022247d4(data_ov001_0222deb4->unk_04[i], 0));
        func_ov001_02224558(data_ov001_0222deb4->unk_04[i], -1, ((u16 (*)[2])data_ov001_0222a168)[i][0], ((u16 (*)[2])(data_ov001_0222a168 + 1))[i][0]);
        func_ov001_022244d8(data_ov001_0222deb4->unk_04[i], -1, 3);
        func_ov001_022247e0(data_ov001_0222deb4->unk_10[i]);
        data_ov001_0222deb4->unk_10[i] = 0;
        break;
    case 0:
        func_ov001_0221e9a0(7);
        func_ov001_02224b9c(0, 0x11, func_ov001_022247d4(data_ov001_0222deb4->unk_10[i], 0));
        func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, data_ov001_0222a168[(i + 3) * 2], (data_ov001_0222a168 + 1)[(i + 3) * 2]);
        func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
        break;
    default:
        return;
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02219d2c);
}

void func_ov001_02219d2c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221a780);
}

void func_ov001_02219c3c() {
    Unk_ov001_02219c3c_Q b = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b240;
    Unk_ov001_02219c3c_Q c = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b244;
    if (data_ov001_0222deb0 > 3) return;
    u32 v = b.b[data_ov001_0222deb0];
    func_ov001_0221ce08(data_ov001_0222deb4->unk_00, v, v);
    if (data_ov001_0222deb0 == 3) return;
    s32 r = func_ov001_0221e434();
    if (r > 2) r = 3;
    func_ov001_02224670(data_ov001_0222deb4->unk_04[data_ov001_0222deb0], -1, 0, c.b[r]);
}

}
}
// Declarations for data defined further down (definition order sets the data layout)
extern "C" u8 data_ov001_0222b244[4];
extern "C" const s8 data_ov001_0222a160[8];
extern "C" const u16 data_ov001_0222a168[12];
extern "C" const u8 data_ov001_0222a15c[4];
extern "C" const u16 data_ov001_0222a180[28];
extern "C" const u16 data_ov001_0222a1b8[28];
extern "C" u8 data_ov001_0222b240[4];
extern "C" char data_ov001_0222b260[22];

extern "C" u8 data_ov001_0222b244[4] = {0xa, 9, 0xb, 6};

extern "C" const s8 data_ov001_0222a160[8] = {0x03, 0x2d, 0x27, 0x1d, 0x32, 0x30, 0, 0};

extern "C" const u16 data_ov001_0222a168[12] = {8, 0x30, 0x5a, 0x30, 0xac, 0x30, 0xc, 0x58, 0x5e, 0x58, 0xb0, 0x58};

extern "C" const u8 data_ov001_0222a15c[4] = {0x13, 0x14, 0x12, 0x56};

extern "C" const u16 data_ov001_0222a1b8[28] = {6, 0x1e, 0x46, 0x48, 0x58, 0x1e, 0x98, 0x48, 0xaa, 0x1e, 0xea, 0x48, 6, 0x76, 0xea, 0x92, 9, 0x54, 0x43, 0x70, 0x5b, 0x54, 0x95, 0x70, 0xad, 0x54, 0xe7, 0x70};

extern "C" const u16 data_ov001_0222a180[28] = {8, 0x20, 0x54, 0x56, 0x5a, 0x20, 0xa6, 0x56, 0xac, 0x20, 0xf8, 0x56, 8, 0x78, 0xf8, 0xa0, 8, 0x54, 0x54, 0x70, 0x5a, 0x54, 0xa6, 0x70, 0xac, 0x54, 0xf8, 0x70};

extern "C" u8 data_ov001_0222b240[4] = {3, 4, 5, 7};

extern "C" char data_ov001_0222b260[22] = "char/ybObjMain.ncl.l";

