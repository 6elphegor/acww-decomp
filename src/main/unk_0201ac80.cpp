#include "types.h"

struct Unk_020d77a4_Vec3 { s32 x, y, z; };
struct Unk_0201b2b8_T30 { u32 a[12]; };
struct Unk_0201b2b8_Bits { u32 lo : 12; u32 mid : 16; u32 hi : 4; };
struct Unk_0201b2b8_S { u8 b0; u8 pad; s16 h2; s16 h4; u16 h6; u16 h8; u16 ha; };
struct Unk_0201b138_Buf { u8 pad[0x24]; Unk_020d77a4_Vec3 v; };

extern "C" {
extern u8 data_020c6da8[];
extern u8 data_020c6dcc[];
extern u32 data_020c6d84[];
extern u16 data_020c6cc8;
extern u8 *data_021c47c4;
extern u8 *data_020cbb18;

void func_0201ac10(void *a, void *b);
void func_02116048(void *src, void *dst, u32 n);
void *func_0209750c();
void *func_02098750(void *p);
s32 func_02097a48(void *p, s32 v, s32 n);
s32 func_02097ce4(void *p, s32 a, s32 b);
s32 func_02097a90(void *p, s32 v, s32 n, s32 m);
u32 func_0204e328(void *g, Unk_020d77a4_Vec3 *v);
void func_0204edd8(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *in);
void func_01ffd070(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
s32 func_020e9650(Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
void func_020e972c(Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
s32 func_02077f40(Unk_020d77a4_Vec3 *v, s32 a);
void func_02133ef8(void *p, u32 n);
s32 func_02072e44(u8 *g);
Unk_020d77a4_Vec3 *func_020947f0(u32 n);
s32 func_02094f48(s32 a, s32 b);
void func_0203ee38(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *in);
void func_0201bdf8(void *p);
void func_02019998(void *p);
void func_02015d24(void *p);
void func_02003dcc(void *p);
void func_0201b8cc(void *p, s32 v);
s32 func_02053f08(void *p, s32 v);
void func_0201a764(void *p, void *q);
s32 func_020553cc(void *p, void *q, s32 v);
void func_020abc10(void *p, s32 a, s32 b, s32 c);
s32 func_0201ba88(void *p);
s32 func_0201b858(void *p, s32 *a, s32 *b, void *buf);
s32 func_020197a8(void *p);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_02019614(void *p, s32 a, s32 b);
void func_0201942c(s32 *a, s32 *b, s32 *c, s32 *d, s16 *e, u16 *f, void *buf);
void func_020193d4(s16 *a, u16 *b, u16 *c, void *buf);
void func_020193a0(u32 *a, void *b, u16 *c, u16 *d, void *buf);
void func_020195c8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02019380(u16 *a, void *buf);
void func_02016c80(void *p, s32 a, u16 *b);
void func_02014040(void *p, void *q);
void func_02019334(void *p, void *q);
s32 func_02015e48(void *p, s32 a);
void func_02019e34(void *a, void *b, s32 c, s32 d, s32 e);
void func_0201aa20(void *p, void *q);
s32 func_020a62a0();
void func_020309d4(void *a, void *b, void *c, s32 d, s32 e, void *f, s32 g);
s32 func_02030814(s32 a);
void func_0201a1e0(void *p, void *q);
void func_0201a8b4(void *p);
void func_0201a7ec(void *p, void *q);
u32 func_0203ef38(void *a, void *b);
s32 func_02002b84(void *p, void *buf);
s32 func_0201b9bc(void *p);
void func_02089040(void *p);
void func_0208905c(void *p);
void func_02015d2c(void *p, void *q);
void func_020539a0(void *p);
void func_02003df4(void *p, Unk_020d77a4_Vec3 *v);
void func_02011c08(s32 v, void *p);
void func_02013474(void *p, void *q);
void func_020198c4(void *p, void *q);
void func_020192f0(void *p, void *q);
}

#define F(T, o) (*(T *)((u8 *)this + (o)))
#define P(o) ((void *)((u8 *)this + (o)))

class Unk_020d77a4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual BOOL vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *out);
    virtual s32 vfunc_60();
    virtual s32 vfunc_64();
    virtual void vfunc_68();

};

extern "C" void func_0201ac80(void *a, void *b) { func_0201ac10(a, b); }

struct Unk_0201ac88 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[0x24];
    s32 unk_30;
    u8 pad_34[4];
    s32 unk_38;
    s32 unk_3c;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u8 pad_50[4];
    u8 unk_54;
    u8 unk_55;

    void func_0201ac88();
    void func_0201acc8();
    Unk_0201ac88 *func_0201accc();
};

void Unk_0201ac88::func_0201ac88()
{
    unk_00 = 0x1000;
    unk_04 = 0;
    unk_08 = 0;
    unk_30 = 5;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_54 = 0;
    unk_55 = 0;
    func_02116048(data_020c6da8, unk_0c, 0x24);
}

void Unk_0201ac88::func_0201acc8() {}

Unk_0201ac88 *Unk_0201ac88::func_0201accc()
{
    unk_00 = 0x1000;
    unk_04 = 0;
    unk_08 = 0;
    unk_30 = 5;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_54 = 0;
    unk_55 = 0;
    return this;
}

struct Unk_0201acf8 {
    u16 unk_00;
    u16 unk_02;

    void func_0201acf8(u16 v);
    s32 func_0201acfc();
    void func_0201ad18();
};

void Unk_0201acf8::func_0201acf8(u16 v) { unk_02 = v; }

s32 Unk_0201acf8::func_0201acfc()
{
    s32 r = 2;
    u32 v = unk_00;
    if (v < 100) {
        r = 0;
    } else if (v < 0x320) {
        r = 1;
    }
    return r;
}

void Unk_0201acf8::func_0201ad18()
{
    unk_00 = 0;
    unk_02 = 0;
}

struct Unk_0201ad20 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;

    s32 func_0201ad20();
    s32 func_0201ad24();
    s32 func_0201ad28();
    void func_0201ad2c(s32 v);
    void func_0201ad30(s32 v);
    void func_0201ad34(s32 v);
    void func_0201ad38();
    void func_0201ad3c();
};

s32 Unk_0201ad20::func_0201ad20() { return unk_08; }
s32 Unk_0201ad20::func_0201ad24() { return unk_04; }
s32 Unk_0201ad20::func_0201ad28() { return unk_00; }
void Unk_0201ad20::func_0201ad2c(s32 v) { unk_08 = v; }
void Unk_0201ad20::func_0201ad30(s32 v) { unk_04 = v; }
void Unk_0201ad20::func_0201ad34(s32 v) { unk_00 = v; }
void Unk_0201ad20::func_0201ad38() {}
void Unk_0201ad20::func_0201ad3c()
{
    unk_00 = 0;
    unk_04 = 1;
    unk_08 = 2;
}

extern "C" void func_0201ad4c(void *self, s32 v)
{
    func_02097a48(func_02098750(func_0209750c()), v, 1);
}

extern "C" s32 func_0201ad68(void *self, s32 v, s32 w)
{
    void *p = func_0209750c() ? func_02098750(func_0209750c()) : 0;
    s32 lo = p ? func_02097ce4(p, 0, 0) : 0;
    s32 hi = p ? func_02097ce4(p, 1, w) : 0;
    s32 r = 2;
    if (v <= lo) {
        r = 0;
    } else if (v <= hi) {
        r = 1;
    }
    return r;
}

extern "C" void func_0201adc8(void *self, s32 v)
{
    func_02097a48(func_02098750(func_0209750c()), -v, 1);
}

extern "C" void func_0201ade4(void *self, s32 v)
{
    func_02097a90(func_02098750(func_0209750c()), -v, 1, 0);
}

typedef Unk_020d77a4_Vec3 V3;

extern "C" void func_0201ae00(V3 *out, Unk_020d77a4 *self, V3 *in)
{
    V3 a, b, cand1, cand2, arr[4], tmp, t1, t2, t3, t4;
    u32 m0, m1;
    s32 best, bestDist, d1, i1, dir0, dir1, best2, d, d0, i, j;
    u8 *g;
    s32 z0, z1, z2, z3;
    *out = *in;
    g = data_021c47c4;
    m0 = func_0204e328(g, (V3 *)((u8 *)self + 0x5c));
    m1 = func_0204e328(g, in);
    func_0204edd8(&a, (V3 *)((u8 *)self + 0x5c));
    func_0204edd8(&b, in);
    best = 0;
    a.y = 0;
    b.y = 0;
    if (m0 == 0) {
        bestDist = best;
        i1 = z0 = best;
        for (i1 = i1; i1 < 4; i1++) {
            func_01ffd070(&t1, &a, (V3 *)(data_020c6dcc + i1 * 12));
            cand1 = t1;
            d1 = func_020e9650((V3 *)((u8 *)self + 0x5c), &cand1);
            if (func_0204e328(g, &cand1) && func_02077f40(&cand1, z0)) {
                if (bestDist == 0 || bestDist > d1) {
                    bestDist = d1;
                    best = i1;
                }
            }
        }
        if (bestDist != 0) {
            func_01ffd070(&t2, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t2;
        } else {
            *out = *in;
        }
    } else {
        best2 = best;
        d0 = func_020e9650(in, &a);
        func_02133ef8(arr, 0x30);
        u32 ang = *(u16 *)((u8 *)self + 0x8e);
        if (ang >= 0xe000 || ang < 0x2000) {
            dir0 = 2;
            dir1 = 0;
        } else if (ang < 0x6000) {
            dir0 = 3;
            dir1 = 1;
        } else if (ang < 0xa000) {
            dir0 = 0;
            dir1 = 2;
        } else {
            dir0 = 1;
            dir1 = 3;
        }
        if (func_02072e44(data_020cbb18)) {
            u32 k;
            z1 = 0;
            for (k = 0; k < 4; k++) {
                V3 *p = func_020947f0(k);
                if (p) {
                    func_0204edd8(&tmp, p);
                    tmp.y = z1;
                    arr[k] = tmp;
                }
            }
        }
        z2 = z3 = 0;
        for (i = z2; i < 4; i++) {
            func_01ffd070(&t3, &a, (V3 *)(data_020c6dcc + i * 12));
            cand2 = t3;
            d = func_020e9650(in, &cand2);
            if (i == dir0) {
                d -= 0x2000;
            } else if (i == dir1) {
                d += 0x2000;
            }
            for (j = z2; j < 4; j++) {
                func_020e972c(&cand2, &arr[j]);
            }
            if (func_02077f40(&cand2, z3) && (m0 & data_020c6d84[i])) {
                if (best2 == 0 || best2 > d) {
                    best2 = d;
                    best = i;
                }
            }
        }
        if (m1 == 0 && best2 > d0) {
            *out = *(V3 *)((u8 *)self + 0x5c);
        } else {
            func_01ffd070(&t4, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t4;
        }
    }
}

BOOL Unk_020d77a4::vfunc_5c(Unk_020d77a4_Vec3 *out)
{
    s32 a = F(s32, 0x46c);
    if (a == 0 && F(s32, 0x470) == 0 && F(s32, 0x474) == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = F(s32, 0x470);
    out->z = F(s32, 0x474);
    func_0203ee38(out, out);
    return TRUE;
}

s32 Unk_020d77a4::vfunc_64() { return 0; }
s32 Unk_020d77a4::vfunc_60() { return 0; }

void Unk_020d77a4::vfunc_4c(s32 v)
{
    if (v == 8) {
        func_02094f48(0, 4);
    }
}

BOOL Unk_020d77a4::vfunc_0c()
{
    func_0201bdf8(this);
    func_02019998(P(0x2ac));
    func_02015d24(P(0x334));
    func_02003dcc(P(0x514));
    if (F(u8, 0x563) == 0) {
        func_0201b8cc(this, 1);
    }
    return TRUE;
}

void Unk_020d77a4::vfunc_30() {}

BOOL Unk_020d77a4::vfunc_24()
{
    Unk_0201b138_Buf buf;
    Unk_020d77a4_Vec3 t0, t1, t2;
    if (F(u8, 0x561) == 0) {
        Unk_020d77a4_Vec3 *p = (Unk_020d77a4_Vec3 *)P(0x5c);
        F(s32, 0x478) = F(s32, 0x5c);
        F(s32, 0x47c) = p->y;
        F(s32, 0x480) = p->z;
        F(s32, 0x484) = F(s32, 0x5c);
        F(s32, 0x488) = p->y;
        F(s32, 0x48c) = p->z;
        F(s32, 0x490) = F(s32, 0x5c);
        F(s32, 0x494) = p->y;
        F(s32, 0x498) = p->z;
        return TRUE;
    }
    if (F(u8, 0x562) == 0) {
        Unk_020d77a4_Vec3 *p = (Unk_020d77a4_Vec3 *)P(0x5c);
        F(s32, 0x478) = F(s32, 0x5c);
        F(s32, 0x47c) = p->y;
        F(s32, 0x480) = p->z;
        F(s32, 0x484) = F(s32, 0x5c);
        F(s32, 0x488) = p->y;
        F(s32, 0x48c) = p->z;
        F(s32, 0x490) = F(s32, 0x5c);
        F(s32, 0x494) = p->y;
        F(s32, 0x498) = p->z;
        return TRUE;
    }
    func_02053f08(P(0xec), 0);
    func_0201a764(P(0x3b0), this);
    func_020553cc(P(0xec), P(0x448), 0xb);
    func_020553cc(P(0xec), &buf, 0x10);
    t0 = buf.v;
    func_0203ee38((Unk_020d77a4_Vec3 *)P(0x478), &t0);
    func_020553cc(P(0xec), &buf, 0x7);
    t1 = buf.v;
    func_0203ee38((Unk_020d77a4_Vec3 *)P(0x484), &t1);
    func_020553cc(P(0xec), &buf, 0x4);
    t2 = buf.v;
    func_0203ee38((Unk_020d77a4_Vec3 *)P(0x490), &t2);
    if (F(u8, 0x511) != 0) {
        func_020abc10(P(0x5c), 0xb00, 0x4000, 0x1000);
    }
    return TRUE;
}

BOOL Unk_020d77a4::vfunc_18()
{
    Unk_0201b2b8_S s;
    struct Unk_0201b2b8_L { s32 a, b, x, y, z; } L;
    Unk_0201b2b8_T30 t;
    u8 buf[0x10];
    Unk_020d77a4_Vec3 v;
    s32 cur;

    func_0201ac80(P(0x350), this);
    vfunc_68();
    if (F(u8, 0x561) == 0) {
        return TRUE;
    }
    if (!func_0201ba88(this)) {
        L.a = 0x16;
        L.b = 0;
        if (func_0201b858(this, &L.a, &L.b, buf)) {
            if (L.b == 1 && (u32)L.a <= 2) {
                if (func_020197a8(P(0x564)) != 0x15) {
                    func_020196b4(P(0x564), 0x15, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
                if ((u32)(L.a - 1) <= 1) {
                    F(s32, 0x564) = L.a;
                } else {
                    F(s32, 0x564) = 0;
                }
            } else {
                cur = L.a;
                if (cur != func_020197a8(P(0x564))) {
                    L.x = 0;
                    s.h2 = 0;
                    s.h4 = 0;
                    L.y = 0;
                    s.h6 = 0;
                    s.h8 = 0;
                    L.b = 3;
                    switch (cur) {
                    case 0:
                        func_02019614(P(0x564), L.b, data_020c6cc8);
                        break;
                    case 1:
                    case 2:
                        func_0201942c(&L.x, &L.x, &L.y, &L.y, &s.h2, &s.h6, buf);
                        func_020196b4(P(0x564), L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 3:
                        func_020193d4(&s.h2, (u16 *)&s.h4, &s.h6, buf);
                        func_020196b4(P(0x564), L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 12:
                        L.z = 0x137;
                        s.b0 = 0;
                        func_020193a0((u32 *)&L.z, &s, &s.h6, &s.h8, buf);
                        func_020195c8(P(0x564), L.b, L.z, s.b0, s.h6, s.h8);
                        break;
                    case 20:
                        s.ha = 0xfff1;
                        func_02019380(&s.ha, buf);
                        func_02016c80(P(0x564), L.b, &s.ha);
                        break;
                    }
                }
            }
        }
    }
    func_02014040(P(0x618), this);
    func_02019334(P(0x564), this);
    func_02019e34(P(0x420), P(0x478), F(s16, 0x8e), func_02015e48(P(0x334), 0), ((Unk_0201b2b8_Bits *)P(0x190))->mid);
    func_0201aa20(P(0x350), this);
    if (func_020a62a0() && F(u8, 0x510) && F(s32, 0x638) > 0) {
        func_020309d4(P(0x49c), P(0x5c), P(0x68), F(s16, 0x8e), F(s32, 0x638), this, 0xf);
    }
    F(s32, 0x60) = func_02030814(0);
    func_0201a1e0(P(0x3b0), this);
    func_0201a8b4(P(0x3a8));
    func_0201a7ec(P(0x3a8), this);
    F(u16, 0xd0) = func_0203ef38(P(0xc4), P(0x5c));
    func_02002b84(this, &t);
    F(Unk_0201b2b8_T30, 0x150) = t;
    if (func_0201b9bc(this)) {
        if ((F(u32, 0x4e8) & 2) == 0 && func_020a62a0()) {
            F(u32, 0x4e8) |= 2;
            F(u8, 0x62c) = 1;
        }
    } else if (F(u8, 0x62c) == 1 && func_020a62a0()) {
        F(u32, 0x4e8) &= ~2;
        F(u8, 0x62c) = 0;
    }
    if (F(u8, 0x510)) {
        func_02089040(P(0x4cc));
    } else {
        func_0208905c(P(0x4cc));
    }
    func_02015d2c(P(0x334), this);
    func_020539a0(P(0xec));
    Unk_020d77a4_Vec3 *pp = (Unk_020d77a4_Vec3 *)P(0x5c);
    v.x = F(s32, 0x5c);
    v.y = pp->y;
    v.z = pp->z;
    func_02003df4(P(0x514), &v);
    if (F(s32, 0x628)) {
        func_02011c08(F(s32, 0x628), this);
    }
    func_02013474(P(0x558), this);
    func_020198c4(P(0x2ac), this);
    func_020192f0(P(0x564), this);
    if (F(u8, 0x563) == 0) {
        func_0201b8cc(this, 1);
    }
    return TRUE;
}
