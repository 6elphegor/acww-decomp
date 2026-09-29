// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220c474_Rec {
    u16 unk_00[0x82];
};

struct Unk_ov001_0220c5c8_Bits {
    u32 lo : 4;
    u32 hi : 28;
};

struct Unk_ov001_0220c398_Obj {
    u16 unk_000;
    Unk_ov001_0220c474_Rec unk_002;
    u16 unk_106;
    s16 unk_108;
    u16 unk_10a;
    s16 unk_10c;
    s16 unk_10e;
    u8 unk_110[6];
    u8 unk_116;
    u8 unk_117[0x155];
};

struct Unk_ov001_0220cbd0_Tbl {
    u32 *unk_00;
    u8 *unk_04;
    void *unk_08;
};

struct Unk_ov001_0220cc30_Ent {
    u32 unk_00;
    u32 unk_04;
    void *unk_08;
};

struct Unk_ov001_0220cc30_Mgr {
    u8 unk_00[0x60];
    void *unk_60;
};

extern "C" {
extern Unk_ov001_0220c398_Obj *data_ov001_0222dde8;
extern volatile u8 data_ov001_0222dde4;
extern u8 data_ov001_0222ddec;
extern u8 data_ov001_0222ddf0;
extern u32 data_ov001_0222ddf4;
extern u32 data_ov001_0222ddf8;
extern void (*data_ov001_0222ddfc)();
extern u32 data_ov001_0222de00[];
extern Unk_ov001_0220cc30_Mgr *data_ov001_0222de10;
extern u8 data_ov001_02229f84[];

extern s32 func_ov001_02202b3c(void *);
extern s32 func_ov001_02203040();
extern s32 func_ov001_022030fc(void *, void *);
extern void func_0206d49c();
extern void func_020ff2e4();
extern void VBlankIntrWait();

#pragma thumb off

extern void func_ov001_02225d08();
void func_ov001_0220d570();
void func_ov001_0220c668(void (*)());
s32 func_ov001_0220c9d8();
s32 func_ov001_0220c6d4();
s32 func_ov001_0220caac(s32, u32);
void func_ov001_0220c37c();
void *func_ov001_0220c388(s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void *func_ov001_02225db0(s32, s32);
extern void func_ov001_02225d58(void *);
extern void func_ov001_0221e024(void *);
extern void func_02115e30(u32, void *, u32);
extern void func_02116048(void *, void *);
extern void func_02115640(void *);
extern s32 func_0210f1a0();
extern void func_0210f1e8(s32);
extern void func_021101f4(s32);
extern void func_02110088(s32);
extern void func_0210f0e0(s32, s32, s32);
extern void func_0210f098(u32, s32);
extern void func_02110abc(u32, s32, s32);
extern void func_0210f900(s32);
extern void func_0210f884(s32);
extern void func_0210f0c4(s32);
extern void func_0210f154();
extern s32 func_02114e38();
extern s32 func_021152f4();
extern void func_01ffcb28();
extern void func_02119da8(s32);
extern void func_0211bed0();
extern void func_0211d45c();
extern void func_ov001_02226c50();
extern void func_ov001_022264f4();
extern void func_ov001_022265e0();
extern void func_ov001_0221e9c4();
extern void func_ov001_022249e8();
extern void func_ov001_0222685c();
extern void func_ov001_02225828();
extern void func_ov001_02225104();
extern void func_ov001_02224258();
extern void func_ov001_0222718c();
extern s32 func_ov001_02225e28();
extern void func_ov001_02226d68();
extern void func_ov001_0222587c();
extern void func_ov001_022268e4();
extern void func_ov001_02226b60();
extern void func_ov001_02224a3c();
extern void func_ov001_02226ea8();
extern void func_ov001_02225e58(u32);
extern void func_ov001_0222662c();
extern void func_ov001_022271dc();
extern void func_ov001_022242e8();
extern void func_ov001_0222652c();
extern void func_ov001_02225118();
extern void func_ov001_0221e9f8();
extern void func_ov001_022264d8();
extern void func_ov001_022270b4(s32);
extern void func_ov001_02225ea0();
extern void func_ov001_02226c60();
extern void func_ov001_02224038(void *);
extern void *func_ov001_02224ca0(void *);
extern void func_ov001_02224cfc(void *, void *);
extern void *func_ov001_02224074(void *, void *, u32);

void func_ov001_0220c37c() {
    func_ov001_02225d08();
}

void *func_ov001_0220c388(s32 a) {
    return func_ov001_02225dd8(a, 0x20);
}

u32 func_ov001_0220c398() {
    if (func_ov001_02202b3c(data_ov001_0222dde8) == 0) {
        data_ov001_0222dde4 = 1;
        return 1;
    }
    u32 t = data_ov001_0222dde8->unk_116;
    if (t == 1) goto zero;
    if ((u8)(t + 0xfd) > 2) goto two;
zero:
    return 0;
two:
    return 2;
}

void func_ov001_0220c414(s32 a) {
    func_ov001_02203040();
    if (a != 0) {
        Unk_ov001_0220c398_Obj *o = data_ov001_0222dde8;
        if (o->unk_116 == 0) {
            if (data_ov001_0222dde4 == 1) {
                func_ov001_0221e024(o->unk_117);
            }
        }
    }
    func_ov001_02225d58(&data_ov001_0222dde8);
}

void func_ov001_0220c474() {
    volatile u16 z;
    Unk_ov001_0220c474_Rec r;
    data_ov001_0222dde8 = (Unk_ov001_0220c398_Obj *)func_ov001_02225db0(0x26c, 4);
    data_ov001_0222dde4 = 0;
    z = 0;
    func_02115e30(z, &r, 0x104);
    *(u8 *)&r = 0x50;
    r.unk_00[1] = 0xc;
    func_02116048(data_ov001_02229f84, &r.unk_00[2]);
    data_ov001_0222dde8->unk_000 = 3;
    data_ov001_0222dde8->unk_002 = r;
    data_ov001_0222dde8->unk_106 = 1;
    data_ov001_0222dde8->unk_108 = -1;
    data_ov001_0222dde8->unk_10a = 1;
    data_ov001_0222dde8->unk_10c = -1;
    data_ov001_0222dde8->unk_10e = -1;
    func_02115640(data_ov001_0222dde8->unk_110);
    if (func_ov001_022030fc((void *)func_ov001_0220c388, (void *)func_ov001_0220c37c) != 0) {
        func_0206d49c();
    }
}

void func_ov001_0220c594() {
    data_ov001_0222ddf0 = 1;
}

BOOL func_ov001_0220c5a8(u32 m) {
    if (((data_ov001_0222ddf8 >> 4) & m) != 0) return TRUE;
    return FALSE;
}

u32 func_ov001_0220c5c8() {
    return ((Unk_ov001_0220c5c8_Bits *)&data_ov001_0222ddf8)->lo;
}

u32 func_ov001_0220c5e0() {
    return data_ov001_0222ddec;
}

void func_ov001_0220c5f0(u32 *a, u32 *b) {
    if (a) *a = data_ov001_0222de00[2];
    if (b) *b = data_ov001_0222de00[3];
}

void func_ov001_0220c618(u32 a, u32 b) {
    data_ov001_0222de00[2] = a;
    data_ov001_0222de00[3] = b;
}

void func_ov001_0220c62c(u32 *a, u32 *b) {
    if (a) *a = data_ov001_0222de00[0];
    if (b) *b = data_ov001_0222de00[1];
}

void func_ov001_0220c654(u32 a, u32 b) {
    data_ov001_0222de00[0] = a;
    data_ov001_0222de00[1] = b;
}

void func_ov001_0220c668(void (*f)()) {
    data_ov001_0222ddfc = f;
}

s32 func_ov001_0220c678() {
    func_0210f1a0();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    func_ov001_02226c50();
    func_ov001_022264f4();
    func_ov001_022265e0();
    func_ov001_0221e9c4();
    func_ov001_022249e8();
    func_ov001_0222685c();
    func_ov001_02225828();
    func_ov001_02225104();
    func_ov001_02224258();
    func_ov001_0222718c();
    func_ov001_02225e28();
    func_ov001_02226d68();
}

s32 func_ov001_0220c6d4() {
    func_0210f1e8(0);
    func_021101f4(1);
    func_02110088(2);
    func_0210f0e0(1, 0, 0);
    *(volatile u32 *)0x4000000 &= ~0x1f00;
    *(volatile u32 *)0x4000000 &= ~0xe000;
    func_0210f098(0x400006c, 0);
    *(volatile u32 *)0x4000000 = (*(volatile u32 *)0x4000000 & 0xffcfffef) | 0x200010;
    *(volatile u16 *)0x4000008 &= ~0x40;
    *(volatile u16 *)0x400000a &= ~0x40;
    *(volatile u16 *)0x400000c &= ~0x40;
    *(volatile u16 *)0x400000e &= ~0x40;
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000014 = 0;
    *(volatile u32 *)0x4000018 = 0;
    *(volatile u32 *)0x400001c = 0;
    func_02110abc(0x4000050, 0x3f, 0x10);
    func_0210f900(0x80);
    func_0210f884(0x100);
    func_0210f0c4(0);
    *(volatile u32 *)0x4001000 &= ~0x1f00;
    *(volatile u32 *)0x4001000 &= ~0xe000;
    func_0210f098(0x400106c, 0);
    *(volatile u32 *)0x4001000 = (*(volatile u32 *)0x4001000 & 0xffcfffef) | 0x10;
    *(volatile u16 *)0x4001008 &= ~0x40;
    *(volatile u16 *)0x400100a &= ~0x40;
    *(volatile u16 *)0x400100c &= ~0x40;
    *(volatile u16 *)0x400100e &= ~0x40;
    *(volatile u32 *)0x4001010 = 0;
    *(volatile u32 *)0x4001014 = 0;
    *(volatile u32 *)0x4001018 = 0;
    *(volatile u32 *)0x400101c = 0;
    func_02110abc(0x4001050, 0x3f, 0x10);
    *(volatile u16 *)0x4000008 = (*(volatile u16 *)0x4000008 & 0x43) | 0xc00;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & 0x43) | 0xd08;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & 0x43) | 0xe10;
    *(volatile u16 *)0x400000e = (*(volatile u16 *)0x400000e & 0x43) | 0xf10;
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & 0x43) | 0xc00;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & 0x43) | 0xd00;
    *(volatile u16 *)0x400100c = (*(volatile u16 *)0x400100c & 0x43) | 0xe00;
    *(volatile u16 *)0x400100e = (*(volatile u16 *)0x400100e & 0x43) | 0xf00;
    *(volatile u16 *)0x4000304 &= ~0x8000;
    func_ov001_0222587c();
    func_ov001_022268e4();
    func_ov001_02226b60();
    func_ov001_02224a3c();
    func_0210f154();
    *(volatile u32 *)0x4001000 |= 0x10000;
    func_0210f1e8(1);
}

s32 func_ov001_0220c9d8() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 old = *ime;
    *ime = 0;
    func_0210f1a0();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    if (func_02114e38() == 0) func_0206d49c();
    if (func_021152f4() == 0) func_0206d49c();
    func_0210f1e8(0);
    func_01ffcb28();
    func_02119da8(-1);
    func_0211bed0();
    func_0211d45c();
    func_0210f1a0();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    func_ov001_02226ea8();
    func_ov001_02225e58(data_ov001_0222ddf4);
    func_ov001_0222662c();
    func_ov001_022271dc();
    func_ov001_022242e8();
    func_ov001_0222652c();
    func_ov001_02225118();
    void *p = func_ov001_02225dd8(0x700, 0x20);
    func_020ff2e4();
    func_ov001_02225d58(&p);
}

s32 func_ov001_0220caac(s32 a, u32 b) {
    data_ov001_0222ddec = a;
    data_ov001_0222ddf8 = b;
    if (a < 0 || a > 5) return 0;
    if ((u32)(b << 28) >> 28 > 1) return 0;
    if (a != 0) {
        if (((b >> 4) & 1) != 0) return 0;
    }
    if (a == 0) {
        if (((*(volatile u32 *)&data_ov001_0222ddf8 >> 4) & 1) == 0) return 0;
    }
    return 1;
}

s32 func_ov001_0220cb30(u32 a, s32 b, u32 c) {
    data_ov001_0222ddf4 = a;
    if (func_ov001_0220caac(b, c) == 0) return -1;
    data_ov001_0222ddf0 = 0;
    func_ov001_0220c9d8();
    func_ov001_0220c6d4();
    func_ov001_0221e9f8();
    func_ov001_0220c668(func_ov001_0220d570);
    do {
        func_ov001_022264d8();
        data_ov001_0222ddfc();
        func_ov001_022270b4(0);
        func_ov001_02225ea0();
        func_ov001_02226c60();
        VBlankIntrWait();
    } while (data_ov001_0222ddf0 == 0);
    func_ov001_0220c678();
    return 0;
}

u16 *func_ov001_0220cbd0(Unk_ov001_0220cbd0_Tbl *t, u32 i, s32 j, u32 v) {
    u16 *p = (u16 *)(t->unk_04 + t->unk_00[i & 0xffff]);
    if (j >= 0) p[j] = v + 0x30;
    return p;
}

u8 *func_ov001_0220cc10(Unk_ov001_0220cbd0_Tbl *t, u32 i) {
    return t->unk_04 + t->unk_00[i & 0xffff];
}

void func_ov001_0220cc30(Unk_ov001_0220cc30_Ent *e) {
    func_ov001_02224038(e->unk_08);
    func_ov001_02224cfc(data_ov001_0222de10->unk_60, e);
}

Unk_ov001_0220cc30_Ent *func_ov001_0220cc60(void *a) {
    u32 sz;
    Unk_ov001_0220cc30_Ent *e = (Unk_ov001_0220cc30_Ent *)func_ov001_02224ca0(data_ov001_0222de10->unk_60);
    e->unk_08 = func_ov001_02224074(a, &sz, 4);
    u8 *b = (u8 *)e->unk_08 + 0x20;
    e->unk_00 = (u32)(b + 0x10);
    e->unk_04 = (u32)(b + *(u32 *)(b + 4) + 8);
    return e;
}
}
#pragma thumb reset
