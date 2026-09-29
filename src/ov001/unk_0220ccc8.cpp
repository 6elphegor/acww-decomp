// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220cc30_Mgr {
    u8 unk_00[0x60];
    void *unk_60;
};

typedef void (*Unk_ov001_0220cd24_Fn)(u32);

struct Unk_ov001_0220d1f4_V3 {
    s32 v[3];
};

struct Unk_ov001_0220cd24_Big {
    u8 unk_00000[0x1e280];
    u8 unk_1e280[0x18];
    Unk_ov001_0220cd24_Fn unk_1e298;
    void *unk_1e29c;
    u8 unk_1e2a0;
    u8 unk_1e2a1;
};

struct Unk_ov001_0220d23c_Buf {
    u8 unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0xec - 0x28];
};

struct Unk_ov001_0220d0e4_Init {
    s32 v[7];
};

extern "C" {
extern Unk_ov001_0220cc30_Mgr *data_ov001_0222de10;
extern Unk_ov001_0220cd24_Big *data_ov001_0222de14;
extern Unk_ov001_0220d1f4_V3 *data_ov001_0222de18;
extern void *data_ov001_0222de1c;
extern Unk_ov001_0220d0e4_Init data_ov001_0222aaa4;
extern u8 data_ov001_0222ab38[];
extern void *data_ov001_0222ab20[];
extern u8 data_ov001_0222ab48[];
extern u8 data_ov001_0222ab5c[];
extern u8 data_ov001_0222ab70[];
extern u8 data_ov001_0222ab84[];
extern u8 data_ov001_0222ab98[];
extern u8 data_ov001_0222abb0[];
extern u8 data_ov001_0222abc8[];
extern u8 data_ov001_0222abe0[];
extern u8 data_ov001_0222abf8[];
extern u8 data_ov001_0222ac10[];
extern u8 data_ov001_0222ac28[];
extern u8 data_ov001_0222ac3c[];

extern void func_0206d49c();
extern void func_021132e0(s32);
extern void func_02115e48(void *, void *, u32);
extern void func_02111794();
extern void func_02111e60();
extern void func_02111c0c();
extern void func_02111d90();
extern void func_0211172c();
extern void func_02111ec8();
extern void func_02111c6c();
extern void func_02111df8();
extern void func_02111ad4();

extern s32 func_ov001_02203b38(void *);
extern s32 func_ov001_02203b90();
extern s32 func_ov001_02203c48(s32, s32, void *, void *, void *, u32);
extern void func_ov001_0221e140(void *);
extern u32 func_ov001_0220c5e0();
extern s32 func_ov001_0220c5c8();
extern s32 func_ov001_0220c5a8(s32);
extern void func_ov001_0220c594();
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_0220c668(void *);
extern void *func_ov001_0220cc10(void *, s32);
extern void func_ov001_0220cc30(void *);
extern void *func_ov001_0220cc60(void *);
extern void func_ov001_0220dd94();
extern void func_ov001_0221aae4();
extern void func_ov001_0220d3b0();
extern void func_ov001_0220d488();
extern void func_ov001_0220d528();
extern void func_ov001_0221e8c8();
extern void func_ov001_0221e8dc();
extern u8 *func_ov001_022085e0(u8 *);
extern s32 func_ov001_02208594(void *, void *);
extern void func_ov001_02208840();
extern void func_ov001_02208864();
extern void func_ov001_0220897c();
extern void func_ov001_02208990();
extern void func_ov001_02208374();
extern s32 func_ov001_022250e0(s32);
extern s32 func_ov001_02223d9c();
extern void func_ov001_02223ecc(void *, void *);
extern s32 func_ov001_02223ca8();
extern void func_ov001_022237b4(void *);
extern void func_ov001_0222376c(u8 *, u8 *);
extern void *func_ov001_0222375c();
extern void func_ov001_02223c60();
extern void func_ov001_02224c40(s32);
extern void func_ov001_02224c6c(s32, void *);
extern void *func_ov001_02224d84(s32, void *, s32);
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02225d08();
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void func_ov001_02226f68(s32, s32);
extern void func_ov001_02226fdc(s32, s32);
extern void *func_ov001_02227094(s32, void *, s32, s32);

#pragma thumb off

void func_ov001_0220ccc8() {
    func_ov001_02225d58(&data_ov001_0222de10);
}

void func_ov001_0220ccdc() {
    Unk_ov001_0220cc30_Mgr *m = (Unk_ov001_0220cc30_Mgr *)func_ov001_02225dd8(0x64, 4);
    data_ov001_0222de10 = m;
    data_ov001_0222de10->unk_60 = func_ov001_02224d84(8, m, 0xc);
}


void func_ov001_0220cd24(s32 a) {
    u8 t[2];
    func_ov001_022237b4((void *)a);
    if (data_ov001_0222de14->unk_1e2a0 != 0 && data_ov001_0222de14->unk_1e2a1 == 0) {
        Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
        if (f != 0) f(0);
        return;
    }
    func_ov001_0222376c(&t[0], &t[1]);
    switch ((s32)t[0]) {
    case 0:
        break;
    case 5:
        if (t[1] != 0) {
            u8 *d = data_ov001_0222de14->unk_1e280;
            func_02115e48(func_ov001_0222375c(), d, 0x16);
            Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
            if (f == 0) data_ov001_0222de14->unk_1e2a0 = 1;
            else f(0);
        }
        break;
    case 13:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
            if (f == 0) data_ov001_0222de14->unk_1e2a0 = 1;
            else f(1);
        }
        break;
    case 20:
    case 23:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
            if (f == 0) data_ov001_0222de14->unk_1e2a0 = 1;
            else f(3);
        }
        break;
    case 26:
    case 29:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
            if (f == 0) data_ov001_0222de14->unk_1e2a0 = 1;
            else f(4);
        }
        break;
    case 12:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = data_ov001_0222de14->unk_1e298;
            if (f == 0) data_ov001_0222de14->unk_1e2a0 = 1;
            else f(2);
        }
        break;
    case 34:
        func_ov001_02226fdc(0, a);
        func_ov001_02225d58(&data_ov001_0222de14);
        break;
    }
}

u8 *func_ov001_0220d024() {
    return data_ov001_0222de14->unk_1e280;
}

void func_ov001_0220d040() {
    func_ov001_02223c60();
}

void func_ov001_0220d04c(Unk_ov001_0220cd24_Fn f) {
    data_ov001_0222de14->unk_1e298 = f;
}

BOOL func_ov001_0220d064() {
    return data_ov001_0222de14 == 0;
}

void func_ov001_0220d080(s32 a) {
    if (func_ov001_02223d9c() != 0) {
        data_ov001_0222de14->unk_1e2a1 = 1;
        func_ov001_02226fdc(0, a);
    }
}

void func_ov001_0220d0c4() {
    func_ov001_02227094(0, (void *)func_ov001_0220d080, 0, 0x78);
}

void func_ov001_0220d0e4(Unk_ov001_0220cd24_Fn a) {
    data_ov001_0222de14 = (Unk_ov001_0220cd24_Big *)func_ov001_02225dd8(0x1e2a4, 0x20);
    data_ov001_0222de14->unk_1e298 = a;
    data_ov001_0222de14->unk_1e2a0 = 0;
    data_ov001_0222de14->unk_1e2a1 = 0;
    Unk_ov001_0220d0e4_Init s = data_ov001_0222aaa4;
    s.v[1] = (s32)func_ov001_0220cc10(data_ov001_0222de1c, 0xf);
    s.v[2] = (s32)func_ov001_0220cc10(data_ov001_0222de1c, 0x10);
    *(u8 *)&s.v[6] = func_ov001_0220c5e0() + 0x31;
    func_ov001_02223ecc(data_ov001_0222de14, &s);
    if (func_ov001_02223ca8() == 0) func_0206d49c();
    data_ov001_0222de14->unk_1e29c = func_ov001_02227094(0, (void *)func_ov001_0220cd24, 0, 0x78);
}

void func_ov001_0220d1d8() {
    func_ov001_02225d08();
}

void *func_ov001_0220d1e4(s32 a) {
    return func_ov001_02225dd8(a, 0x20);
}

void func_ov001_0220d1f4(Unk_ov001_0220d1f4_V3 *p) {
    *data_ov001_0222de18 = *p;
}

void func_ov001_0220d20c() {
    u8 buf[0xec];
    if (func_ov001_02203b38(buf) != 1) func_0206d49c();
    func_ov001_0221e140(buf);
}

s32 func_ov001_0220d23c() {
    Unk_ov001_0220d23c_Buf buf;
    s32 r;
    switch (data_ov001_0222de18->v[0]) {
    case 0:
    case 1:
    case 3:
    case 5:
        return 0;
    case 2:
        return 1;
    case 4:
        return 2;
    case 6:
        if (func_ov001_02203b38(&buf) != 1) func_0206d49c();
        if (buf.unk_20 >= 0 && buf.unk_20 <= 3) {
            if (buf.unk_24 == 1) return 3;
        }
        return 5;
    case 7:
        r = 4;
        break;
    }
    return r;
}

void func_ov001_0220d310() {
    if (func_ov001_02203b90() != 1) func_0206d49c();
    func_ov001_02225d58(&data_ov001_0222de18);
}

void func_ov001_0220d340() {
    data_ov001_0222de18 = (Unk_ov001_0220d1f4_V3 *)func_ov001_02225db0(0xc, -4);
    if (func_ov001_02203c48(0xf, 0x40, (void *)func_ov001_0220d1f4, (void *)func_ov001_0220d1e4, (void *)func_ov001_0220d1d8, 0x800) != 1) func_0206d49c();
    func_021132e0(10);
}

void func_ov001_0220d3b0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_02226f68(0, 0);
    func_ov001_02226f68(1, 0);
    func_ov001_02224c40(1);
    func_ov001_02224c40(0);
    func_ov001_0220897c();
    func_ov001_02208840();
    func_ov001_0220cc30(data_ov001_0222de1c);
    func_ov001_0220ccc8();
    func_ov001_0221e8c8();
    func_ov001_0220c594();
}

void func_ov001_0220d440() {
    func_ov001_02224ff8(3, 1, 0x3f, 0x14);
    func_ov001_02224ff8(3, 0, 0x3f, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220d3b0);
}

void func_ov001_0220d488() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220dd94);
        break;
    case 1:
        func_ov001_0220c654(1, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
        break;
    }
}

void func_ov001_0220d528() {
    func_ov001_02224ff8(2, 1, 2, 0x14);
    func_ov001_02224ff8(2, 0, 2, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220d488);
}

void func_ov001_0220d570() {
    func_ov001_0221e8dc();
    func_ov001_0220ccdc();
    func_ov001_02208864();
    func_ov001_02208990();
    func_ov001_02208374();
    if (func_ov001_0220c5e0() == 1 && func_ov001_0220c5a8(2) != 0) {
        data_ov001_0222de1c = func_ov001_0220cc60(data_ov001_0222ab38);
    } else {
        data_ov001_0222de1c = func_ov001_0220cc60(data_ov001_0222ab20[func_ov001_0220c5e0()]);
    }
    func_ov001_02224c6c(1, func_ov001_022085e0(data_ov001_0222ab48));
    func_ov001_02224c6c(0, func_ov001_022085e0(data_ov001_0222ab5c));
    func_ov001_02208594(data_ov001_0222ab70, (void *)func_02111794);
    func_ov001_02208594(data_ov001_0222ab84, (void *)func_02111e60);
    func_ov001_02208594(data_ov001_0222ab98, (void *)func_02111c0c);
    func_ov001_02208594(data_ov001_0222abb0, (void *)func_02111d90);
    func_ov001_02208594(data_ov001_0222abc8, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222abe0, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222abf8, (void *)func_02111c6c);
    func_ov001_02208594(data_ov001_0222ac10, (void *)func_02111df8);
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_02208594(data_ov001_0222ac28, (void *)func_02111ad4);
        break;
    case 1:
        func_ov001_02208594(data_ov001_0222ac3c, (void *)func_02111ad4);
        break;
    }
    volatile u16 *r1 = (volatile u16 *)0x400100a;
    volatile u16 *r2 = (volatile u16 *)0x400000a;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    func_ov001_02225cb4(1, 2);
    func_ov001_02225cb4(0, 2);
    func_ov001_0220c668((void *)func_ov001_0220d528);
}

#pragma thumb reset
}
