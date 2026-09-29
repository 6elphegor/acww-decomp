// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221ce48_S { s32 unk_00; u8 unk_04[0x600]; u8 unk_604; };
struct Unk_ov001_0221cfc0_S { s32 unk_00; u8 pad_04[0xc]; u16 unk_10; u16 unk_12; u8 pad_14[5]; u8 unk_19; u8 unk_1a; u8 unk_1b; u8 unk_1c; u8 unk_1d; };
struct Unk_ov001_0221ccb4_S { u8 pad_00[4]; u8 unk_04[0x14]; u16 unk_18; u8 pad_1a[0x3a]; };
struct Unk_ov001_0221cd74_D { void *unk_00; void *unk_04; };

extern "C" {
extern u8 data_ov001_0222ded8;
extern Unk_ov001_0221cd74_D data_ov001_0222dee0;
extern Unk_ov001_0221ce48_S *data_ov001_0222dedc;
extern Unk_ov001_0221cfc0_S *data_ov001_0222dee8;
extern u8 data_ov001_0222a2a8[];
extern u8 data_ov001_0222b400[];
extern u8 data_ov001_0222b418[];
extern u8 data_ov001_0222b430[];

s32 func_ov001_022250e0(s32);
void func_ov001_02208114();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_0220c668(void *);
void func_ov001_0221c87c();
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
void func_ov001_0221e93c();
void func_ov001_0221e9a0(s32);
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
void func_ov001_02208088();
void func_ov001_022084f8(s32);
void func_ov001_02225cb4(s32, s32);
s32 func_ov001_02208594(void *, void *);
void func_0211172c();
void func_02111ec8();
void func_02111a6c(void *, s32, u32);
void func_ov001_0220891c(s32);
void func_ov001_02208538(s32);
void func_021155c4(void *);
void func_02115e30(u16, void *, u32);
void func_02115e48(void *, void *, u32);
void func_ov001_022083ac(void *, s32);
void func_ov001_02207a40(s32);
void func_ov001_0221fd14(void *);
void func_ov001_0221c764();
void func_ov001_02226fdc(s32, s32);
u32 func_ov001_02227094(s32, void *, s32, s32);
void func_021145cc(void *, s32);
void func_ov001_02226fd0(s32, s32);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
void func_02115ef4(void *, void *, u32);
void func_ov001_02224558(s32, s32, u32, u32);
s32 func_ov001_02226118(void *);
s32 func_ov001_02226040(void *);
s32 func_ov001_022260ac(void *);
void func_ov001_02225f40(void *);
s32 func_01ffc31c(s32, s32);
void func_ov001_0221e980(s32);
void func_ov001_0221e95c(s32, s32);

void func_ov001_0221ca50();
void func_ov001_0221ca24();
void func_ov001_0221c9a4();
void func_ov001_0221cb10();
void func_ov001_0221cb30();
void func_ov001_0221cb6c();
void func_ov001_0221cbac();
void func_ov001_0221ce48();
void func_ov001_0221cd74(s32);
void func_ov001_0221cdd4(s32);
s32 func_ov001_0221cd54();
void func_ov001_0221cab8();
s32 func_ov001_0221cabc();

void func_ov001_0221c9a4() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if ((u8)(data_ov001_0222ded8 + 0xfe) <= 1) func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221c87c);
}

void func_ov001_0221ca24() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221c9a4);
}

void func_ov001_0221ca50() {
    if (data_ov001_0222ded8 != 0) return;
    if (func_ov001_02208100() != 0) return;
    data_ov001_0222ded8 = 2;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_0221ca24);
}

void func_ov001_0221cab8() {}

s32 func_ov001_0221cabc() {
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_0221cd54() == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0221cb10() {
    func_ov001_0221cabc();
    func_ov001_0221cab8();
    func_ov001_0221ca50();
}

void func_ov001_0221cb30() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221cb10);
}

void func_ov001_0221cb6c() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(2);
    func_ov001_0220c668((void *)func_ov001_0221cb30);
}

void func_ov001_0221cbac() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221cb6c);
}

void func_ov001_0221cbec() {
    func_ov001_02208594(data_ov001_0222b400, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222b418, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b430, (void *)func_02111a6c);
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

void func_ov001_0221ccb4() {
    volatile u16 z;
    u8 b[0x16];
    Unk_ov001_0221ccb4_S s;
    data_ov001_0222ded8 = 0;
    func_ov001_0221cbec();
    func_ov001_0220891c(8);
    func_ov001_02208538(2);
    func_021155c4(&s);
    z = 0;
    func_02115e30(z, b, 0x16);
    func_02115e48(s.unk_04, b, s.unk_18 << 1);
    func_ov001_022083ac(b, 0x6d);
    func_ov001_02207a40(0);
    func_ov001_0221fd14((void *)func_ov001_0221c764);
    func_ov001_0221e9a0(0xb);
    func_ov001_0220c668((void *)func_ov001_0221cbac);
}

s32 func_ov001_0221cd54() {
    s32 t = *(u16 *)0x27fffa8 & 0x8000;
    return (t >> 15) ? TRUE : FALSE;
}

void func_ov001_0221cd74(s32 a) {
    func_02115e48(data_ov001_0222dee0.unk_00, (void *)0x5000000, 0x200);
    func_ov001_02226fdc(1, a);
}

void func_ov001_0221cda8(s32 a) {
    data_ov001_0222dee0.unk_00 = (void *)a;
    func_ov001_02227094(1, (void *)func_ov001_0221cd74, 0, 0x78);
}

void func_ov001_0221cdd4(s32 a) {
    func_02115e48(data_ov001_0222dee0.unk_00, data_ov001_0222dee0.unk_04, 0x20);
    func_ov001_02226fdc(1, a);
}

void func_ov001_0221ce08(s32 a, s32 b, s32 c) {
    data_ov001_0222dee0.unk_00 = (void *)(a + (b << 5));
    data_ov001_0222dee0.unk_04 = (void *)((c << 5) + 0x5000000);
    func_ov001_02227094(1, (void *)func_ov001_0221cdd4, 0, 0x78);
}

void func_ov001_0221ce48() {
    if (data_ov001_0222dedc->unk_604 == 0) return;
    func_021145cc(data_ov001_0222dedc->unk_04, 0x600);
    func_02111a6c(data_ov001_0222dedc->unk_04, 0, 0x600);
    data_ov001_0222dedc->unk_604 = 0;
}

void func_ov001_0221ceb0(u8 *a, s32 b, s32 c, s32 d) {
    u8 *src = data_ov001_0222dedc->unk_04 + b * 2;
    s32 i;
    for (i = 0; i < d; a += 0x40, src += 0x40, i++) {
        func_02115e48(a, src, c * 2);
    }
}

void func_ov001_0221cf10() {
    data_ov001_0222dedc->unk_604 = 1;
}

void func_ov001_0221cf28() {
    func_ov001_02226fd0(1, data_ov001_0222dedc->unk_00);
    func_ov001_02225d58(&data_ov001_0222dedc);
}

void func_ov001_0221cf5c(void *a) {
    Unk_ov001_0221ce48_S *p = (Unk_ov001_0221ce48_S *)func_ov001_02225db0(0x608, 4);
    data_ov001_0222dedc = p;
    func_02115ef4(a, p->unk_04, 0x600);
    data_ov001_0222dedc->unk_00 = func_ov001_02227094(1, (void *)func_ov001_0221ce48, 0, 0x78);
}

void func_ov001_0221cfc0(u32 a) {
    func_ov001_02224558(data_ov001_0222dee8->unk_00, -1, data_ov001_0222dee8->unk_10, a + data_ov001_0222dee8->unk_12);
    data_ov001_0222dee8->unk_1a = a;
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

s32 func_ov001_0221d0e0() {
    u16 buf[6];
    s32 i;
    for (i = 2; i <= 3; i++) {
        func_ov001_0221d000(i, buf);
        if (func_ov001_02226118(buf) != 0) return i;
    }
    return 0;
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

void func_ov001_0221d244(s32 a) {
    data_ov001_0222dee8->unk_1c = a;
    data_ov001_0222dee8->unk_1d = (a == 2) ? 4 : 6;
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
}
