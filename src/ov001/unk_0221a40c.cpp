// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

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
extern s8 data_ov001_0222debc;
extern s8 data_ov001_0222deb8;
extern u8 data_ov001_0222dec0;
extern void *data_ov001_0222dec4;
extern s8 data_ov001_0222a160[];
extern u8 data_ov001_0222a180[];
extern Unk_ov001_0221a8a8_P data_ov001_0222a168[];
extern u8 data_ov001_0222a15c[];
extern Unk_ov001_0221a9c8_B data_ov001_0222b248;
extern u8 data_ov001_0222b278[];
extern u8 data_ov001_0222b28c[];
extern u8 data_ov001_0222b2a4[];
extern u8 data_ov001_0222b2bc[];
extern u8 data_ov001_0222b2d0[];
extern s8 data_ov001_0222a1f8[];
extern Unk_ov001_0221abb4_R data_ov001_0222a258[];
extern Unk_ov001_0221abb4_R data_ov001_0222a25a[];
extern Unk_ov001_0221abb4_R data_ov001_0222a25c[];
extern Unk_ov001_0221abb4_R data_ov001_0222a25e[];

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
void func_0211172c();
void func_02111ec8();
void func_02111a6c();
void func_02111df8();
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

void func_ov001_0221a4ac() {
    if (data_ov001_0222deb4->unk_1d == 2) {
        func_ov001_0221f09c();
    }
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221a40c);
}

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

void func_ov001_0221a644() {}

void func_ov001_0221a648() {
    u32 i;
    u8 *p;
    p = data_ov001_0222a180;
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

void func_ov001_0221a780() {
    func_ov001_0221a648();
    func_ov001_0221a644();
    func_ov001_0221a4f4();
}

void func_ov001_0221a7a0() {
    if (func_ov001_02208100() == -2) return;
    if (func_ov001_0221ef90() == 1) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221a780);
}

void func_ov001_0221a7f0() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0221a7a0);
}

void func_ov001_0221a848() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0221a7f0);
}

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
            func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, data_ov001_0222a168[i + 3].x, data_ov001_0222a168[i + 3].y);
            func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
        }
        data_ov001_0222deb4->unk_04[i] = func_ov001_02224b14(z[1], data_ov001_0222a15c[a], 1);
        func_ov001_02224558(data_ov001_0222deb4->unk_04[i], -1, data_ov001_0222a168[i].x, data_ov001_0222a168[i].y);
        func_ov001_022244d8(data_ov001_0222deb4->unk_04[i], -1, 3);
    }
}

void func_ov001_0221a9c8() {
    Unk_ov001_0221a9c8_B buf = data_ov001_0222b248;
    func_ov001_02208594(data_ov001_0222b278, (void *)func_02111df8);
    func_ov001_02208594(data_ov001_0222b28c, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222b2a4, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b2bc, (void *)func_02111a6c);
    data_ov001_0222deb4->unk_00 = func_ov001_02224074(func_ov001_022085e0(&buf), 0, 4);
    func_ov001_02225cb4(1, 0x10);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

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

void func_ov001_0221ab50() {
    Unk_ov001_0221ab50_B l = *(Unk_ov001_0221ab50_B *)data_ov001_0222b2d0;
    u32 v = l.b[data_ov001_0222debc];
    func_ov001_0221ce08(data_ov001_0222dec4, v, v);
}

void func_ov001_0221abb4(s32 p) {
    s32 s = data_ov001_0222debc;
    s32 c = func_ov001_0220c5a8(1);
    s8 *row = data_ov001_0222a1f8 + c * 16;
    row += s * 4;
    s32 v = *(s8 *)((u32)p + (u32)row);
    if (v == -1) return;
    if (v == 0) {
        data_ov001_0222deb8 = s;
    }
    if (v == -2) {
        data_ov001_0222debc = data_ov001_0222deb8;
    } else {
        data_ov001_0222debc = v;
    }
    func_ov001_0221e9a0(8);
    u32 a = func_ov001_0220c5a8(1);
    u32 b = func_ov001_0220c5a8(1);
    u32 d = func_ov001_0220c5a8(1);
    u32 e = func_ov001_0220c5a8(1);
    s32 q = data_ov001_0222debc;
    func_ov001_02208690(data_ov001_0222a258[a].v[q * 4], data_ov001_0222a25c[b].v[q * 4],
                        data_ov001_0222a25a[d].v[q * 4], data_ov001_0222a25e[e].v[q * 4]);
}

void func_ov001_0221acb4() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222dec4);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    if (data_ov001_0222dec0 == 0) {
        func_ov001_0220c654(2, 0);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
        return;
    }
    switch (data_ov001_0222debc) {
    case 0:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_02219bc0);
        return;
    case 1:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221181c);
        return;
    case 2:
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_022195a4);
        return;
    case 3:
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(0, 0);
        func_ov001_022156e0(1);
        func_ov001_0220c668((void *)func_ov001_02217e40);
        break;
    }
}
}
