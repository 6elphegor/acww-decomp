// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df08_S {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 pad_0e[0x1b140 - 0x0e];
    void *unk_1b140;
    void *unk_1b144;
};

struct Unk_ov001_0222df28_S {
    u8 pad_00[0x0c];
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad_1a[0x32 - 0x1a];
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
    u8 pad_38[8];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[4];
    s32 unk_4c;
    u8 pad_50[0x12a0 - 0x50];
    s32 unk_12a0;
    s32 unk_12a4;
    u8 pad_12a8[0x13e0 - 0x12a8];
    u8 unk_13e0[0x20];
    u8 pad_1400[0x1c00 - 0x1400];
    u8 unk_1c00[4];
};

struct Unk_ov001_02221734_Z { u16 v[7]; };

struct Unk_ov001_02221734_D {
    u8 lo : 4;
    u8 hi : 4;
    u8 b1;
    u8 data[0x14];
    Unk_ov001_02221734_Z z;
};

struct Unk_ov001_02221734_B {
    u8 pad_00[1];
    u8 unk_01;
    u8 pad_02[2];
    u8 unk_04[0x14];
    u16 unk_18;
    u8 pad_1a[0x54 - 0x1a];
};

typedef void (*Unk_ov001_02221908_Fn)(u32, const char *, ...);

extern "C" {
extern Unk_ov001_0222df08_S *data_ov001_0222df08;
extern Unk_ov001_0222df28_S *data_ov001_0222df28;
extern Unk_ov001_02221908_Fn data_ov001_0222df24;
extern char data_ov001_0222b650[];
extern char data_ov001_0222b674[];
extern char data_ov001_0222b698[];
extern char data_ov001_0222b6c8[];
extern char data_ov001_0222b6fc[];
extern char data_ov001_0222b714[];
extern char data_ov001_0222b72c[];

s32 func_02122eb0(s32, s32);
s32 func_01ffa2ec();
void func_01ffa3d4(s32);
void func_02124a94(s32);
void func_02119d78(void *);
s32 func_02119a28(void *, s32);
s32 func_02123e58(void *);
s32 func_021239ec(void *, void *, u32);
s32 func_02123680(void *, void *);
void func_021199e0(void *);
void func_ov001_02220d2c(u32);
s32 func_02124d50(s32);
void func_0206d49c();
void func_021155c4(void *);
void func_02116048(void *, void *, u32);
s32 func_021251ac(void *, void *, s32, s32, s32);
void func_02125098(u32, u32);
void func_021230a4(void *);
void func_ov001_02220d40();
void func_ov001_02222e48(void *);
void func_ov001_02222db8(u32);
s32 func_0212026c(void *);
void func_ov001_02222348();
s32 func_ov001_0222251c();
s32 func_ov001_022224d8();
s32 func_ov001_022226b0();
s32 func_ov001_0222266c();
s32 func_ov001_022223c0();
s32 func_021210f0(void *, s32, void *);
void func_ov001_02222d98(s32);
void func_02120aa0(void *, void *, s32);
u32 func_0211f698();
s32 func_ov001_02222d40();
s32 func_0211fb68(void *);
void func_ov001_02221e14();

void func_ov001_02221454(u32 n);
void func_ov001_02221540(u32 n);
s32 func_ov001_022215f4(s32 *p);
void func_ov001_022216d0(s32 *a, s32 b);
void func_ov001_02221734(s32 a, s32 b);
void func_ov001_02221854(void *p);
s32 func_ov001_022218a4();
void func_ov001_02221908();
void func_ov001_02221a84();
s32 func_ov001_02221ab4(s32 a);
void func_ov001_02221b74(s32 a);
void func_ov001_02221ba0(s32 a);
s32 func_ov001_02221bb4(s32 a, u32 b, u32 c);
void func_ov001_02221d48(u16 *p);

void func_ov001_02221454(u32 n) {
    if (func_02122eb0(n, 0) == 0) {
        u16 m = ~(1 << n);
        s32 e = func_01ffa2ec();
        data_ov001_0222df08->unk_02 &= m;
        data_ov001_0222df08->unk_04 &= m;
        data_ov001_0222df08->unk_06 &= m;
        data_ov001_0222df08->unk_08 &= m;
        data_ov001_0222df08->unk_0a &= m;
        data_ov001_0222df08->unk_0c &= m;
        func_01ffa3d4(e);
        func_02124a94(n);
    } else {
        s32 e = func_01ffa2ec();
        u32 m = ~(1 << n);
        data_ov001_0222df08->unk_04 &= m;
        data_ov001_0222df08->unk_02 &= m;
        func_01ffa3d4(e);
    }
}

void func_ov001_02221540(u32 n) {
    if (func_02122eb0(n, 1) != 0) return;
    u16 m = ~(1 << n);
    s32 e = func_01ffa2ec();
    data_ov001_0222df08->unk_02 &= m;
    data_ov001_0222df08->unk_04 &= m;
    data_ov001_0222df08->unk_06 &= m;
    data_ov001_0222df08->unk_08 &= m;
    data_ov001_0222df08->unk_0a &= m;
    data_ov001_0222df08->unk_0c &= m;
    func_01ffa3d4(e);
    func_02124a94(n);
}

s32 func_ov001_022215f4(s32 *p) {
    void *q;
    s32 r = 0;
    u8 buf[0x48];
    if (*p == 0) {
        q = 0;
    } else {
        func_02119d78(buf);
        if (func_02119a28(buf, *p) == 0) return r;
        q = buf;
    }
    if (func_02123e58(q) != 0) {
        Unk_ov001_0222df08_S *g = data_ov001_0222df08;
        g->unk_1b144 = (u8 *)g + 0x2c;
        if (data_ov001_0222df08->unk_1b144 != 0) {
            if (func_021239ec(q, data_ov001_0222df08->unk_1b144, 0x10000) != 0) {
                if (func_02123680(p, data_ov001_0222df08->unk_1b144) != 0) r = 1;
            }
        }
    }
    if (q == buf) func_021199e0(buf);
    return r;
}

void func_ov001_022216d0(s32 *a, s32 b) {
    func_ov001_02220d2c(2);
    if (func_02124d50(b) != 0) {
        func_ov001_02220d2c(7);
        return;
    }
    if (func_ov001_022215f4(a) != 0) return;
    func_0206d49c();
}

void func_ov001_02221734(s32 a, s32 b) {
    Unk_ov001_02221734_D d;
    Unk_ov001_02221734_B buf;
    func_021155c4(&buf);
    d.lo = buf.unk_01;
    d.b1 = buf.unk_18;
    func_02116048(buf.unk_04, d.data, buf.unk_18 * 2);
    d.hi = 0;
    Unk_ov001_02221734_Z *zp = &d.z;
    zp->v[0] = 0;
    zp->v[1] = 0;
    zp->v[2] = 0;
    zp->v[3] = 0;
    zp->v[4] = 0;
    zp->v[5] = 0;
    zp->v[6] = 0;
    *(Unk_ov001_02221734_Z *)data_ov001_0222df08 = *zp;
    data_ov001_0222df08->unk_1b140 = (u8 *)data_ov001_0222df08 + 0x10040;
    if (func_021251ac(data_ov001_0222df08->unk_1b140, &d, a, b, 2) != 0) func_0206d49c();
    func_02125098(0x100, 1);
    func_021230a4((void *)func_ov001_02220d40);
    func_ov001_02220d2c(1);
}

void func_ov001_02221854(void *p) {
    data_ov001_0222df08 = (Unk_ov001_0222df08_S *)p;
    func_ov001_02222e48((u8 *)p + 0x1b160);
    data_ov001_0222df08->unk_1b140 = 0;
    data_ov001_0222df08->unk_1b144 = 0;
}

s32 func_ov001_022218a4() {
    if (data_ov001_0222df28->unk_40 != 1) func_0206d49c();
    func_ov001_02222db8(3);
    if (func_0212026c((void *)func_ov001_02222348) == 2) return 1;
    func_ov001_02222db8(9);
    return 0;
}

void func_ov001_02221908() {
    s32 st = data_ov001_0222df28->unk_40;
    if (st == 1) {
        if (data_ov001_0222df24 == 0) return;
        data_ov001_0222df24(0x8000000, data_ov001_0222b650);
        return;
    }
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b674, st);
    st = data_ov001_0222df28->unk_40;
    if (st != 6 && st != 5 && st != 4) {
        func_ov001_02222db8(3);
        func_ov001_02221a84();
        return;
    }
    func_ov001_02222db8(3);
    switch (data_ov001_0222df28->unk_44) {
    case 3:
        if (func_ov001_0222251c() != 0) return;
        func_ov001_02221a84();
        return;
    case 1:
    case 5:
        if (func_ov001_022224d8() != 0) return;
        func_ov001_02221a84();
        return;
    case 2:
        if (func_ov001_022226b0() != 0) return;
        func_ov001_02221a84();
        return;
    case 0:
    case 4:
        if (func_ov001_0222266c() != 0) return;
        func_ov001_02221a84();
        return;
    }
}

void func_ov001_02221a84() {
    if (func_ov001_022223c0() != 0) return;
    func_ov001_02222db8(0xa);
}

s32 func_ov001_02221ab4(s32 a) {
    Unk_ov001_0222df28_S *g = data_ov001_0222df28;
    s32 r = func_021210f0(g->unk_13e0, a, g->unk_1c00);
    if (r == 7) {
        if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b698);
        return 0;
    }
    if (r == 5) {
        if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b6c8);
        func_ov001_02222d98(r);
        return 0;
    }
    if (r == 0) return 1;
    func_ov001_02222d98(r);
    return 0;
}

void func_ov001_02221b74(s32 a) {
    Unk_ov001_0222df28_S *g = data_ov001_0222df28;
    func_02120aa0(g->unk_13e0, g->unk_1c00, a);
}

void func_ov001_02221ba0(s32 a) {
    data_ov001_0222df28->unk_4c = a;
}

s32 func_ov001_02221bb4(s32 a, u32 b, u32 c) {
    if (data_ov001_0222df28->unk_40 != 1) func_0206d49c();
    data_ov001_0222df28->unk_12a4 = 0x180;
    data_ov001_0222df28->unk_12a0 = 0xe0;
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b6fc, data_ov001_0222df28->unk_12a4);
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b714, data_ov001_0222df28->unk_12a0);
    data_ov001_0222df28->unk_44 = a;
    func_ov001_02222db8(3);
    data_ov001_0222df28->unk_0c = b;
    data_ov001_0222df28->unk_32 = c;
    data_ov001_0222df28->unk_18 = func_0211f698();
    data_ov001_0222df28->unk_34 = 0xd0;
    data_ov001_0222df28->unk_36 = 0x44;
    data_ov001_0222df28->unk_10 = 2;
    data_ov001_0222df28->unk_16 = 0;
    data_ov001_0222df28->unk_12 = 0;
    data_ov001_0222df28->unk_0e = 1;
    data_ov001_0222df28->unk_14 = (a == 2) ? 1 : 0;
    if (a == 0 || a == 2 || a == 4) return func_ov001_02222d40();
    if (data_ov001_0222df24 != 0) data_ov001_0222df24(0x8000000, data_ov001_0222b72c, a);
    return 0;
}

void func_ov001_02221d48(u16 *p) {
    if (p[1] != 0) {
        func_ov001_02222d98(p[1]);
        func_ov001_02222db8(0xa);
        return;
    }
    s32 r = func_0211fb68((void *)func_ov001_02221e14);
    if (r != 0) {
        func_ov001_02222d98(r);
        func_ov001_02222db8(0xa);
        return;
    }
    func_ov001_02222db8(1);
}
}
