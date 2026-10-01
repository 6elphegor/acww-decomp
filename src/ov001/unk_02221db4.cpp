// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df28_S {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    s32 unk_08;
    u8 pad_0c[0x34];
    s32 unk_40;
    u8 pad_44[4];
    s32 unk_48;
    s32 unk_4c;
    u16 unk_50;
    u16 unk_52;
    s32 unk_54;
    u32 unk_58;
    u16 unk_5c;
    u16 unk_5e;
    u16 unk_60;
    u8 pad_62[0x7e];
    u8 unk_e0[0x1000 - 0xe0 + 0x2a0];
    s32 unk_12a0;
    s32 unk_12a4;
};

struct Unk_ov001_02222088_A {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[4];
    u16 unk_08;
    u16 unk_0a;
};

typedef void (*Unk_ov001_0222df24_Fn)(u32, void *, ...);

extern "C" {
extern Unk_ov001_0222df28_S *data_ov001_0222df28;
extern Unk_ov001_0222df24_Fn data_ov001_0222df24;
extern u8 data_ov001_0222b748[];
extern u8 data_ov001_0222b760[];
extern u8 data_ov001_0222b798[];

void func_ov001_02222db8(s32);
void func_ov001_02222d98(s32);
void func_ov001_02221a84();
void func_ov001_02221908();
s32 func_021202f4(void *, void *, s32);
s32 func_021202b4(void *);
s32 func_0211fbb4(void *, s32);
s32 func_021204a0(void *);
s32 func_02121838(void *);
s32 func_02120060(void *);
s32 func_021218d0(void *, s32, s32, s32, s32);
s32 func_0211f800();
void func_02115640(u16 *);
void func_0206d49c();

void func_ov001_02221d48(Unk_ov001_02222088_A *);
void func_ov001_02222088(Unk_ov001_02222088_A *);
void func_ov001_02222384(Unk_ov001_02222088_A *);
void func_ov001_02222404(Unk_ov001_02222088_A *);
void func_ov001_02222488(Unk_ov001_02222088_A *);
void func_ov001_02222588(Unk_ov001_02222088_A *);
void func_ov001_022225fc(Unk_ov001_02222088_A *);
u16 func_ov001_02222174(u16);

s32 func_ov001_02221db4() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021202f4((u8 *)data_ov001_0222df28 + 0x80, (void *)func_ov001_02221d48, 2);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02222db8(10);
    return 0;
}

void func_ov001_02221e14(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 8) return;
    func_ov001_02222db8(9);
    func_0206d49c();
}

BOOL func_ov001_02221e48() {
    Unk_ov001_0222df28_S **g = &data_ov001_0222df28;
    (*g)->unk_12a4 = 0;
    (*g)->unk_12a0 = 0;
    (*g)->unk_48 = 0;
    (*g)->unk_50 = 0;
    (*g)->unk_52 = 1;
    (*g)->unk_54 = 0;
    (*g)->unk_00 = 0;
    (*g)->unk_04 = 0;
    (*g)->unk_4c = 0;
    if (func_ov001_02221db4() != 0) return TRUE;
    return FALSE;
}

s16 func_ov001_02221ecc(u16 mask) {
    s16 i;
    s16 last = 0;
    u16 count = 0;
    u16 r;
    for (i = 0; i < 16; i++) {
        if (mask & (1 << i)) {
            last = i + 1;
            count++;
        }
    }
    if (count <= 1) return last;
    data_ov001_0222df28->unk_58 = data_ov001_0222df28->unk_58 * 0x10dcd + 0x3039;
    r = (count * (data_ov001_0222df28->unk_58 & 0xff)) >> 8;
    for (i = 0; i < 16; i++) {
        if (mask & 1) {
            if (r == 0) return i + 1;
            r--;
        }
        mask >>= 1;
    }
    return 0;
}

u16 func_ov001_02221fd0() {
    if (data_ov001_0222df28->unk_40 != 7) func_0206d49c();
    func_ov001_02222db8(1);
    data_ov001_0222df28->unk_5c = func_ov001_02221ecc(data_ov001_0222df28->unk_60);
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b748, data_ov001_0222df28->unk_5c);
    return data_ov001_0222df28->unk_5c;
}

s32 func_ov001_0222205c(void *cb, s32 x) {
    return func_021218d0(cb, 3, 0x11, x, 0x1e);
}

void func_ov001_02222088(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02222db8(9);
        return;
    }
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b760, a->unk_08, a->unk_0a);
    {
        Unk_ov001_0222df28_S *g = data_ov001_0222df28;
        u16 y = a->unk_0a;
        u16 x = a->unk_08;
        u16 w = g->unk_5e;
        u16 r;
        if (w > y) {
            g->unk_5e = y;
            data_ov001_0222df28->unk_60 = 1 << (x - 1);
        } else if (w == y) {
            g->unk_60 = g->unk_60 | (1 << (x - 1));
        }
        r = func_ov001_02222174(x + 1);
        if (r == 0x18) {
            func_ov001_02222db8(7);
            return;
        }
        if (r == 2) return;
        func_ov001_02222db8(9);
    }
}

u16 func_ov001_02222174(u16 x) {
    s32 r = func_0211f800();
    if (r == 0x8000) {
        func_ov001_02222d98(3);
        func_ov001_02222db8(9);
        return 3;
    }
    if (r == 0) {
        func_ov001_02222d98(0x16);
        func_ov001_02222db8(9);
        return 0x18;
    }
    while ((1 << (x - 1) & r) == 0) {
        x++;
        if (x > 16) return 0x18;
    }
    return func_ov001_0222205c((void *)func_ov001_02222088, x);
}

s32 func_ov001_02222228() {
    u16 v[3];
    u16 r;
    func_02115640(v);
    u32 m = *(volatile u32 *)0x27ffc3c;
    u32 a = v[0] + m;
    u32 b = v[1] + a;
    data_ov001_0222df28->unk_58 = v[2] + b;
    data_ov001_0222df28->unk_58 = data_ov001_0222df28->unk_58 * 0x10dcd + 0x3039;
    data_ov001_0222df28->unk_5c = 0;
    data_ov001_0222df28->unk_5e = 0x65;
    func_ov001_02222db8(3);
    r = func_ov001_02222174(1);
    if (r == 0x18) {
        func_ov001_02222d98(0x18);
        func_ov001_02222db8(9);
        return 0;
    }
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02222db8(9);
    return 0;
}

s32 func_ov001_0222230c() {
    return data_ov001_0222df28->unk_40;
}

u16 func_ov001_02222320() {
    return data_ov001_0222df28->unk_52;
}

void func_ov001_02222334(s32 x) {
    data_ov001_0222df28->unk_08 = x;
}

void func_ov001_02222348(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222db8(10);
        return;
    }
    func_ov001_02222db8(0);
}

void func_ov001_02222384(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222db8(9);
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

s32 func_ov001_022223c0() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021202b4((void *)func_ov001_02222384);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

void func_ov001_02222404(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

s32 func_ov001_0222243c() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_0211fbb4((void *)func_ov001_02222404, 0);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    func_ov001_02221a84();
    return 0;
}

void func_ov001_02222488(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02221908();
        return;
    }
    if (func_ov001_0222243c() != 0) return;
    func_ov001_02222db8(9);
}

s32 func_ov001_022224d8() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021204a0((void *)func_ov001_02222488);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

s32 func_ov001_0222251c() {
    s32 r;
    if (data_ov001_0222df28->unk_40 != 6) return 0;
    func_ov001_02222db8(3);
    r = func_02121838((u8 *)data_ov001_0222df28 + 0x1e00);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

void func_ov001_02222588(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        return;
    }
    func_ov001_02222db8(1);
}

s32 func_ov001_022225c0() {
    s32 r;
    r = func_02120060((void *)func_ov001_02222588);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

void func_ov001_022225fc(Unk_ov001_02222088_A *a) {
    if (a->unk_02 != 0) {
        func_ov001_02222d98(a->unk_02);
        func_ov001_02221a84();
        return;
    }
    if (func_ov001_022225c0() != 0) return;
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b798);
    func_ov001_02221a84();
}

s32 func_ov001_0222266c() {
    s32 r;
    func_ov001_02222db8(3);
    r = func_021204a0((void *)func_ov001_022225fc);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}

s32 func_ov001_022226b0() {
    s32 r;
    r = func_02121838((u8 *)data_ov001_0222df28 + 0x1e00);
    if (r == 2) return 1;
    func_ov001_02222d98(r);
    return 0;
}
}
