// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221d2f0_State {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1a;
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
};

extern "C" {
extern u8 data_ov001_0222a460[];
void func_ov001_02225f40(void *);
s32 func_ov001_02226118(void *);
s32 func_ov001_02226040(void *);
s32 func_ov001_022260ac(void *);
void func_ov001_0221e93c();
void func_ov001_0221e9a0(s32);
void func_ov001_0221e980(s32);
void func_ov001_0221e95c(s32, s32);
void func_ov001_02226fd0(s32, s32);
void func_ov001_022247e0(s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02225970(s32, s32, void *);
s32 func_ov001_02224b14(s32, s32, s32);
void func_ov001_02224558(s32, s32, u32, u32);
void func_ov001_022244d8(s32, s32, s32);
s32 func_ov001_02227094(s32, void *, s32, s32);
s32 func_01ffc31c(s32, s32);

void func_ov001_0221cfc0(u32 a);
void func_ov001_0221d000(s32 a, u16 *out);
s32 func_ov001_0221d0e0(s32 unused);
s32 func_ov001_0221d134();
void func_ov001_0221d1cc();
void func_ov001_0221d244(s32 a);
void func_ov001_0221d270(s32 a);
void func_ov001_0221d2f0();
void func_ov001_0221d3c8();
void func_ov001_0221d5b8();
void func_ov001_0221d5d0();
void func_ov001_0221d5e8(s32 a);
u32 func_ov001_0221d5f4();
u32 func_ov001_0221d608();
void func_ov001_0221d61c();
void func_ov001_0221d660(u32 a, u32 b, s32 c, s32 d, u32 e);
}

extern "C" const u8 data_ov001_0222a2a8[4] = { 0x55, 0x36, 0x1e, 0x00 };
extern "C" const u8 data_ov001_0222a2a4[4] = { 0x10, 0x0f, 0x0e, 0x00 };
Unk_ov001_0221d2f0_State *data_ov001_0222dee8;

void func_ov001_0221d660(u32 a, u32 b, s32 c, s32 d, u32 e) {
    data_ov001_0222dee8 = (Unk_ov001_0221d2f0_State *)func_ov001_02225db0(0x20, 4);
    data_ov001_0222dee8->unk_1b = a;
    data_ov001_0222dee8->unk_19 = b;
    data_ov001_0222dee8->unk_1a = e;
    func_ov001_02225970(c, d, &data_ov001_0222dee8->unk_10);
    data_ov001_0222dee8->unk_00 = func_ov001_02224b14(0, data_ov001_0222a2a4[a], 1);
    func_ov001_02224558(data_ov001_0222dee8->unk_00, -1, c, d + e);
    func_ov001_022244d8(data_ov001_0222dee8->unk_00, -1, 1);
    data_ov001_0222dee8->unk_0c = func_ov001_02227094(0, (void *)func_ov001_0221d3c8, 0, 0x80);
}

void func_ov001_0221d61c() {
    func_ov001_02226fd0(0, data_ov001_0222dee8->unk_0c);
    func_ov001_022247e0(data_ov001_0222dee8->unk_00);
    func_ov001_02225d58(&data_ov001_0222dee8);
}

u32 func_ov001_0221d608() {
    return data_ov001_0222dee8->unk_1a;
}

u32 func_ov001_0221d5f4() {
    return data_ov001_0222dee8->unk_1d;
}

void func_ov001_0221d5e8(s32 a) {
    func_ov001_0221cfc0(a);
}

void func_ov001_0221d5d0() {
    data_ov001_0222dee8->unk_1e = 0;
}

void func_ov001_0221d5b8() {
    data_ov001_0222dee8->unk_1e = 1;
}

void func_ov001_0221d3c8() {
    data_ov001_0222dee8->unk_1d = 0;
    Unk_ov001_0221d2f0_State *s = data_ov001_0222dee8;
    switch (s->unk_1c) {
    case 0:
        if (s->unk_1e != 0) return;
        switch (func_ov001_0221d134()) {
        case 1:
            if (data_ov001_0222dee8->unk_1b == 0) return;
            func_ov001_0221e9a0(0x16);
            func_ov001_0221e980(0);
            data_ov001_0222dee8->unk_1d = 1;
            func_ov001_02225f40(&data_ov001_0222dee8->unk_14);
            {
                Unk_ov001_0221d2f0_State *t = data_ov001_0222dee8;
                t->unk_18 = t->unk_1a;
            }
            data_ov001_0222dee8->unk_1c = 1;
            break;
        case 2:
            func_ov001_0221d244(2);
            break;
        case 3:
            func_ov001_0221d244(3);
            break;
        case 4:
            func_ov001_0221d1cc();
            break;
        }
        break;
    case 1:
        func_ov001_0221d2f0();
        break;
    case 2:
        if (func_ov001_0221d0e0(2) != 2) {
            data_ov001_0222dee8->unk_1d = 5;
            data_ov001_0222dee8->unk_1c = 0;
            return;
        }
        if (func_ov001_0221d134() != 2) return;
        func_ov001_0221d244(2);
        break;
    case 3:
        if (func_ov001_0221d0e0(3) != 3) {
            data_ov001_0222dee8->unk_1d = 7;
            data_ov001_0222dee8->unk_1c = 0;
            return;
        }
        if (func_ov001_0221d134() != 3) return;
        func_ov001_0221d244(3);
        break;
    }
}

void func_ov001_0221d2f0() {
    u16 pt[2];
    if (func_ov001_02226118(data_ov001_0222a460) != 0) {
        func_ov001_02225f40(pt);
        Unk_ov001_0221d2f0_State *s = data_ov001_0222dee8;
        if ((s32)pt[0] >= (s32)s->unk_10 - 0x1e) {
            s32 v = s->unk_18 + ((s32)pt[1] - (s32)s->unk_16);
            if (v < 0) {
                v = 0;
            } else {
                s32 m = s->unk_19 - data_ov001_0222a2a8[s->unk_1b];
                if (v >= m) v = m;
            }
            func_ov001_0221d270(v);
            func_ov001_0221cfc0(v);
            data_ov001_0222dee8->unk_1d = 2;
            return;
        }
    }
    func_ov001_0221e93c();
    data_ov001_0222dee8->unk_1c = 0;
    data_ov001_0222dee8->unk_1d = 3;
}

void func_ov001_0221d270(s32 a) {
    s32 r4 = data_ov001_0222dee8->unk_1a - a;
    s32 r0, r1;
    if (r4 < 0) r4 = -r4;
    if (r4 < 2) {
        r0 = 0;
    } else if (r4 >= 6) {
        r0 = 0x7f;
    } else {
        r0 = func_01ffc31c(0x7f, 6 - r4);
    }
    func_ov001_0221e980(r0);
    if (r4 < 2) {
        r1 = -0x100;
    } else if (r4 >= 6) {
        r1 = 0x100;
    } else {
        r1 = func_01ffc31c(0x200, 6 - r4) - 0x100;
    }
    func_ov001_0221e95c(0xffff, r1);
}

void func_ov001_0221d244(s32 a) {
    data_ov001_0222dee8->unk_1c = a;
    data_ov001_0222dee8->unk_1d = (a == 2) ? 4 : 6;
}

void func_ov001_0221d1cc() {
    u16 buf[2];
    s32 v;
    func_ov001_02225f40(buf);
    u32 t = data_ov001_0222a2a8[data_ov001_0222dee8->unk_1b];
    v = buf[1] - data_ov001_0222dee8->unk_12 - (t >> 1);
    if (v < 0) {
        v = 0;
    } else {
        s32 m = data_ov001_0222dee8->unk_19 - t;
        if (v >= m) v = m;
    }
    func_ov001_0221cfc0(v);
    data_ov001_0222dee8->unk_1d = 3;
}

s32 func_ov001_0221d134() {
    u16 buf[6];
    s32 i;
    func_ov001_0221d000(1, buf);
    if (func_ov001_02226040(buf) != 0) return 1;
    for (i = 2; i <= 3; i++) {
        func_ov001_0221d000(i, buf);
        if (func_ov001_02226040(buf) != 0) return i;
    }
    func_ov001_0221d000(4, buf);
    if (func_ov001_022260ac(buf) != 0) return 4;
    return 0;
}

s32 func_ov001_0221d0e0(s32 unused) {
    u16 buf[6];
    s32 i;
    for (i = 2; i <= 3; i++) {
        func_ov001_0221d000(i, buf);
        if (func_ov001_02226118(buf) != 0) return i;
    }
    return 0;
}

void func_ov001_0221d000(s32 a, u16 *out) {
    out[0] = data_ov001_0222dee8->unk_10;
    out[2] = out[0] + 0xc;
    switch (a) {
    case 0:
        break;
    case 1:
        out[1] = data_ov001_0222dee8->unk_12 + data_ov001_0222dee8->unk_1a;
        out[3] = out[1] + data_ov001_0222a2a8[data_ov001_0222dee8->unk_1b];
        break;
    case 2:
        out[1] = data_ov001_0222dee8->unk_12 - 0xd;
        out[3] = data_ov001_0222dee8->unk_12;
        break;
    case 3:
        out[1] = data_ov001_0222dee8->unk_12 + data_ov001_0222dee8->unk_19;
        out[3] = out[1] + 0xd;
        break;
    case 4:
        out[1] = data_ov001_0222dee8->unk_12;
        out[3] = out[1] + data_ov001_0222dee8->unk_19;
        break;
    }
}

void func_ov001_0221cfc0(u32 a) {
    func_ov001_02224558(data_ov001_0222dee8->unk_00, -1, data_ov001_0222dee8->unk_10, a + data_ov001_0222dee8->unk_12);
    data_ov001_0222dee8->unk_1a = a;
}

