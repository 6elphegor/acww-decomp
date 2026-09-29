#include "types.h"

struct Unk_02085810_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

struct Unk_02085810_Base {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 unk_15;
};

extern "C" {
s32 func_020030e8(Unk_02085810_Rec *p);
void func_02094294(void *p);
void func_0209cf88(u8 *p);
void func_02003100(Unk_02085810_Rec *p);
void func_02003130(Unk_02085810_Rec *p);
void func_020942c8(void *p);
void func_020942f8(void *p);
}


extern "C" {
void func_02094030(void *p);
void func_02094018(void *p);
void func_020b4154(void *p);
void func_020b413c(void *p);
void func_02062650(void *p, u16 *v);
void func_0206260c(void *p);
void func_0209e120(void *, u32);
s32 func_0209e170(void *, s32);
void func_020b31a8(void *a, s32 b, s32 c);
void func_020b3270(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(void *p);
void func_02076fc8(u32 a, u32 b);
void func_0203ce4c(s32 i, void *x);
void func_0203ce38(s32 i, s32 x);
void func_0203ce24(s32 i, s32 x);
void func_02002fc8(void *a, void *b);
s32 func_020030b4(void *p);
s32 func_02094218(void *p);
void func_020940d0(void *a, void *b);
s32 func_02063b8c(u32 n);
}
extern u8 data_021d7350[];
extern u32 data_020e0ca8[];

struct Unk_02085df0_Rec {
    u32 unk_00[7];
    Unk_02085df0_Rec() { func_02094030(this); }
    ~Unk_02085df0_Rec() { func_02094018(this); }
};
struct Unk_02085df0_Num {
    u32 unk_00[11];
    Unk_02085df0_Num() { func_020b4154(this); }
    ~Unk_02085df0_Num() { func_020b413c(this); }
};
struct Unk_02085df0_Str {
    u32 unk_00[9];
    Unk_02085df0_Str(u16 *v) { func_02062650(this, v); }
    ~Unk_02085df0_Str() { func_0206260c(this); }
};

extern "C" {
void func_0209cffc(void *a, void *b, u32 c, u32 d, u32 e);
void func_0209d498(void *p);
void func_0209d164(void *p, s32 v);
s32 func_0209d3d0(void *a, void *b, s32 c);
s32 func_0209d3a4(void *a, void *b);
s32 func_0203f42c(s32 a);
void *func_02097868(void *, s32);
s32 func_02098a48(void *p);
void *func_0209868c(void *p);
s32 func_02087bc0(void *p);
s32 func_02087ba8(void *p);
u16 *func_0209888c(void *p);
s32 func_02087b30(void *p);
void func_02087b18(void *p);
void func_020656dc(void *obj, void *b, void *fmt, void *s, void *s2, void *p);
void func_02065588(void *obj, u32 v, s32 w);
s32 func_02096aac(void *obj);
void func_02065cd4(void *p);
void func_02065cc8(void *p);
s32 func_02128930(void *a, void *b, u32 n);
s32 func_020941e8(void *a, void *b);
}
extern u8 data_021d735c[];
extern u8 data_020e0c48[];
extern u8 data_020e0c50[];
extern u8 data_020e0cb8[];

struct Unk_020859b4_Pair {
    s32 unk_00;
    s32 unk_04;
};
struct Unk_020859b4_Loc {
    /* 0x00 */ u8 unk_00;
    /* 0x02 */ u16 unk_02;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 unk_06[3];
    /* 0x0c */ u32 unk_0c[2];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
};
struct Unk_020859b4_Buf {
    u32 unk_00[0x3d];
    Unk_020859b4_Buf() { func_02065cd4(this); }
    ~Unk_020859b4_Buf() { func_02065cc8(this); }
};

class Unk_02085810 {
public:
    u32 func_02085810();
    void func_02085814(s32 v);
    void func_0208582c(Unk_02085810_Rec *src);
    Unk_02085810_Rec *func_02085828();
    void func_02085860();
    Unk_02085810_Rec *func_0208586c();
    void func_02085870(Unk_02085810_Rec *src);
    void func_020858b0(Unk_02085810_Base *src);
    void func_02085900(u32 v);
    void func_02085908();
    void func_02085940();
    void func_02085df0();
    void func_020859b4();
    void func_020858ac();
    Unk_02085810 *func_0208596c();
    Unk_02085810 *func_0208598c();

    /* 0x00 */ Unk_02085810_Base unk_00;
    /* 0x16 */ Unk_02085810_Rec unk_16;
    /* 0x22 */ Unk_02085810_Rec unk_22;
    /* 0x2e */ u16 unk_2e;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x35 */ u8 unk_35;
    /* 0x36 */ u8 unk_36;
    /* 0x37 */ u8 unk_37;
};

u32 Unk_02085810::func_02085810() { return unk_30; }
void Unk_02085810::func_02085814(s32 v) { unk_30 = v; }
extern "C" void func_02085818(u16 *out, Unk_02085810 *o) { *out = o->unk_2e; }
extern "C" void func_02085820(Unk_02085810 *o, u16 *in) { o->unk_2e = *in; }
Unk_02085810_Rec *Unk_02085810::func_02085828() { return &unk_22; }
void Unk_02085810::func_0208582c(Unk_02085810_Rec *src) { unk_22 = *src; }
void Unk_02085810::func_02085860() { func_020030e8(&unk_22); }
Unk_02085810_Rec *Unk_02085810::func_0208586c() { return &unk_16; }
void Unk_02085810::func_02085870(Unk_02085810_Rec *src) { unk_16 = *src; func_02094294(this); }
void Unk_02085810::func_020858b0(Unk_02085810_Base *src) { unk_00 = *src; func_020030e8(&unk_16); }
void Unk_02085810::func_02085900(u32 v) { unk_37 = v; }
void Unk_02085810::func_02085908() {
    u8 d[8];
    func_02085940();
    func_0209cf88(d);
    unk_36 = d[2];
    unk_35 = d[1];
    unk_34 = d[0];
    unk_37 = 0;
}
void Unk_02085810::func_02085940() {
    func_02094294(this);
    func_020030e8(&unk_16);
    func_020030e8(&unk_22);
    unk_2e = 0xfff1;
    unk_30 = 0;
}
Unk_02085810 *Unk_02085810::func_0208596c() {
    func_02003100(&unk_22);
    func_02003100(&unk_16);
    func_020942c8(this);
    return this;
}
Unk_02085810 *Unk_02085810::func_0208598c() {
    func_020942f8(this);
    func_02003130(&unk_16);
    func_02003130(&unk_22);
    unk_2e = 0xfff1;
    return this;
}

class Unk_02085f7c {
public:
    BOOL func_02085f7c();
    u32 func_02085f90();
    u32 func_02085f98();
    BOOL func_02085fa0();
    void func_02085fb4();
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 3;
    u8 unk_00_2 : 3;
    u8 unk_00_3 : 1;
};
BOOL Unk_02085f7c::func_02085f7c() { if (unk_00_3) return TRUE; return FALSE; }
u32 Unk_02085f7c::func_02085f90() { return unk_00_2; }
u32 Unk_02085f7c::func_02085f98() { return unk_00_1; }
BOOL Unk_02085f7c::func_02085fa0() { if (unk_00_0) return TRUE; return FALSE; }

void Unk_02085810::func_020858ac() {}
void Unk_02085810::func_02085df0() {
    if (func_02094218(this) == 0 && func_020030b4(&unk_16) == 0) {
        func_0209e120(data_021d7350, 0xf);
        return;
    }
    if (unk_37 != 1 && unk_37 != 2 && unk_37 != 3) return;
    if (func_0209e170(data_021d7350, 0xf) == 0) return;
    Unk_02085df0_Rec rec;
    if (func_02094218(this) != 0) func_020940d0(this, &rec);
    else func_02002fc8(&unk_16, &rec);
    if ((u8)(unk_37 + 0xff) <= 1) {
        func_0203ce38(0, unk_35);
        func_0203ce24(1, unk_34);
        func_0203ce4c(4, &rec);
        if (unk_30 > 0) {
            Unk_02085df0_Num num;
            if (unk_37 == 1) func_020b31a8(&num, unk_30, 1);
            else func_020b3270(&num, unk_30 >> 12, 3, 0, 0, 0);
            func_0203ce4c(3, &num);
        }
        BOOL same;
        if (func_0204b2d4(&unk_2e) != 0) {
            u16 v = 0xfff1;
            u32 a = func_0204b25c(&unk_2e);
            if (a == func_0204b25c(&v)) same = TRUE; else same = FALSE;
        } else {
            if (unk_2e == 0xfff1) same = TRUE; else same = FALSE;
        }
        if (same == 0) {
            Unk_02085df0_Str str(&unk_2e);
            func_0203ce4c(2, &str);
        }
    } else {
        func_0203ce4c(0, &rec);
    }
    s32 k;
    if ((u8)(unk_37 + 0xff) <= 1) k = func_02063b8c(3);
    else k = func_02063b8c(2);
    func_02076fc8(k, data_020e0ca8[unk_37]);
    func_0209e120(data_021d7350, 0xf);
}

extern "C" {
s32 func_0209cef4();
s32 func_020e77cc(u32 v, u32 lo, u32 hi);
s32 func_020ae02c(void *p);
}
extern u8 data_021ed104[];

void Unk_02085f7c::func_02085fb4() {
    u32 a, b, c;
    unk_00_0 = func_02063b8c(2);
    unk_00_3 = 1;
    a = func_02063b8c(100);
    b = func_02063b8c(100);
    c = func_02063b8c(100);
    switch (func_0209cef4()) {
    case 6:
        if (func_020e77cc(a, 0, 0x4a)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x4b, 0x54)) unk_00_1 = 1;
        else unk_00_1 = 2;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x54)) unk_00_2 = 1;
        else unk_00_2 = 2;
        break;
    case 0:
        if (func_020e77cc(a, 0, 0x31)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x32, 0x3b)) unk_00_1 = 1;
        else if (func_020e77cc(a, 0x3c, 0x46)) unk_00_1 = 2;
        else unk_00_1 = 4;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x54)) unk_00_2 = 1;
        else if (func_020e77cc(b, 0x55, 0x5e)) unk_00_2 = 2;
        else unk_00_2 = 3;
        break;
    default:
        if (func_020e77cc(a, 0, 0x4a)) unk_00_1 = 0;
        else if (func_020e77cc(a, 0x4b, 0x55)) unk_00_1 = 1;
        else unk_00_1 = 2;
        if (func_020e77cc(b, 0, 0x4a)) unk_00_2 = 0;
        else if (func_020e77cc(b, 0x4b, 0x55)) unk_00_2 = 1;
        else unk_00_2 = 2;
        if (func_020e77cc(c, 0, 0x1d) && func_020ae02c(data_021ed104) == 3) unk_00_3 = 1;
        else unk_00_3 = 0;
        break;
    }
    if (unk_00_1 == unk_00_2) unk_00_2 = 0;
}

void Unk_02085810::func_020859b4() {
    if (func_02094218(this) == 0 && func_020030b4(&unk_16) == 0) return;
    if (unk_37 != 1 && unk_37 != 2 && unk_37 != 3) return;
    Unk_020859b4_Loc l;
    func_0209cf88(l.unk_06);
    if (unk_36 == 0) return;
    if (unk_35 == 0) return;
    if (unk_34 == 0) return;
    func_0209cffc(l.unk_0c, &unk_34, 6, 0, 0);
    l.unk_14 = 0;
    l.unk_18 = 0;
    func_0209d498(&l.unk_14);
    if (((u8 *)&l.unk_14)[2] < 6) {
        func_0209d164(&l.unk_14, 1);
        ((u8 *)&l.unk_14)[2] = 6;
        ((u8 *)&l.unk_14)[1] = 0;
        ((u8 *)&l.unk_14)[0] = 0;
    }
    s32 r6 = func_0209d3d0(&l.unk_14, l.unk_0c, 0x38);
    if (r6 == 1 && func_0209d3a4(l.unk_0c, &l.unk_14) >= 10) goto reset;
    if (r6 == -1 && func_0209d3a4(&l.unk_14, l.unk_0c) >= 10) {
    reset:
        func_02085940();
        func_0209e120(data_021d7350, 0xf);
        return;
    }
    if (unk_37 != 3) {
        if (unk_36 == l.unk_06[2] && unk_35 == l.unk_06[1] && unk_34 == l.unk_06[0]) return;
    } else {
        s32 r4 = func_0203f42c(0xe);
        func_0209d498(&l.unk_14);
        if (r4 != -1) {
            if (r4 < 7) return;
            if (r4 == 7 && ((u8 *)&l.unk_14)[2] < 6) return;
        }
        if (r6 == 1 && func_0209d3a4(l.unk_0c, &l.unk_14) < 1) return;
    }
    if (unk_37 == 3 && func_02094218(this) == 0) {
        func_02085df0();
        func_02085940();
        return;
    }
    Unk_02085df0_Num n1;
    Unk_02085df0_Num n2;
    Unk_02085df0_Num n3;
    Unk_020859b4_Buf buf;
    Unk_02085df0_Rec rec;
    s32 i = 0;
    s32 ok, z10, z14, z1c, z20, z24, z2c;
    l.unk_00 = 0;
    z1c = 0; z14 = 0; z20 = 0; z24 = 0; z2c = 0; z10 = 0;
    for (; i < 4; i++) {
        ok = z10;
        void *r4 = func_02097868(data_021d735c, i);
        if (r4 == 0) continue;
        if (func_02098a48(r4) == 0) continue;
        void *r7 = func_0209868c(r4);
        if ((u8)(unk_37 + 0xff) <= 1) {
            func_0203ce38(z14, unk_35);
            func_0203ce24(1, unk_34);
            s32 f;
            if (func_0204b2d4(&unk_2e) != 0) {
                l.unk_04 = 0xfff1;
                u32 t = func_0204b25c(&unk_2e);
                f = (t == func_0204b25c(&l.unk_04)) ? 1 : z1c;
            } else {
                f = (unk_2e == 0xfff1) ? 1 : z20;
            }
            if (f == 0) {
                Unk_02085df0_Str str(&unk_2e);
                func_0203ce4c(2, &str);
            }
            if (unk_30 > 0) {
                if (unk_37 == 1) func_020b31a8(&n1, unk_30, 1);
                else func_020b3270(&n1, unk_30 >> 12, 3, z24, z24, z24);
                func_0203ce4c(3, &n1);
            }
            if (unk_37 == 1) ok = func_02087bc0(r7);
            else ok = func_02087ba8(r7);
        } else {
            u16 *p = func_0209888c(r4);
            if ((unk_00.unk_00 == p[0] && func_02128930((u8 *)this + 2, p + 1, 8) == 0 && func_020941e8(this, p) != 0) || func_02087b30(r7) != 0) {
                l.unk_00 = func_02063b8c(3);
                func_020940d0(func_0209888c(r4), &rec);
                func_02087b18(r7);
                func_0203ce4c(z2c, &rec);
                ok = 1;
            }
        }
        if (ok == 0) continue;
        if ((u8)(unk_37 + 0xff) <= 1) {
            u16 *q = func_0209888c(r4);
            if (unk_00.unk_00 == q[0] && func_02128930((u8 *)this + 2, q + 1, 8) == 0 && func_020941e8(this, q) != 0) {
                l.unk_00 = func_02063b8c(3);
            } else {
                l.unk_00 = func_02063b8c(3) + 3;
            }
            func_020940d0(func_0209888c(r4), &rec);
            func_0203ce4c(4, &rec);
        }
        u16 *w = func_0209888c(r4);
        func_020656dc(&buf, &l, ((void **)data_020e0cb8)[unk_37], data_020e0c50, data_020e0c48, w);
        u16 *x = func_0209888c(r4);
        if ((unk_00.unk_00 == x[0] && func_02128930((u8 *)this + 2, x + 1, 8) == 0 && func_020941e8(this, x) != 0) || unk_37 == 3) {
            l.unk_02 = 0x3878;
            if (unk_37 == 2) l.unk_02 = 0x387c;
            else if (unk_37 == 3) l.unk_02 = 0x3880;
            func_02065588(&buf, l.unk_02, 1);
        }
        func_02096aac(&buf);
    }
    func_02085df0();
    func_02085940();
}
