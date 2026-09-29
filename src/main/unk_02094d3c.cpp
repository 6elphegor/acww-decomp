#include "types.h"

struct Unk_02006d14_V3 { s32 x, y, z; };

class Unk_02006d14 {
public:
    u8 pad_00[0x08];
    u32 unk_08;
    u8 pad_0c[0x5c - 0x0c];
    Unk_02006d14_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2d4 - 0x90];
    s32 unk_2d4;
    u8 pad_2d8[0x7ec - 0x2d8];
    s32 unk_7ec;
    u8 pad_7f0[0xc80 - 0x7f0];
    s16 unk_c80;
};

struct Unk_02095338_E { u32 a, b, c; };
struct Unk_02095338_D { u16 a : 7; u16 b : 4; u16 c : 5; };

struct Unk_02095338 {
    u32 unk_00[4];
    u8 unk_10[4];
    u8 unk_14[4];
    Unk_02095338_D unk_18;
    u16 unk_1a;
    u8 unk_1c;
    u8 pad_1d[3];
    u32 unk_20[4];
    u8 unk_30[4];
    Unk_02095338_E unk_34[4];
    u16 unk_64[4];
};

struct Unk_020955e8_G { u8 pad_00[0x68]; s32 unk_68; };

struct Unk_020954f8_L { u32 out; u8 t[12]; };

extern "C" {
extern Unk_02095338 data_021d085c;
extern Unk_02095338_E data_021d0890[];
extern u8 data_021d088c[];
extern u32 data_021d087c[];
extern u16 data_021d08c0[];
extern Unk_02095338_D data_021d0874;
extern u16 data_021d0876;
extern u8 data_021d0878;
extern s32 data_020d0428;
extern Unk_020955e8_G *data_020cbb18;

Unk_02006d14 *func_02095774(s32 id);
s32 func_0200c358(Unk_02006d14 *o, s32 a, s32 b, s32 c);
s32 func_0200e1dc(Unk_02006d14 *o);
BOOL func_0203d978();
BOOL func_0200ec44(Unk_02006d14 *o, s32 id);
void func_0200ec1c(Unk_02006d14 *o, s32 id);
void func_0200ec30(Unk_02006d14 *o, s32 id);
s32 func_0200ea10(Unk_02006d14 *o, s32 v);
void func_ov004_0222113c(Unk_02006d14 *o, s32 a);
void func_ov004_0222148c(Unk_02006d14 *o, s32 a);
void func_ov004_02221558(Unk_02006d14 *o, s32 a);
void func_ov004_02224224(Unk_02006d14 *o, s32 a);
void func_ov004_022237fc(Unk_02006d14 *o, s32 a);
void func_ov004_02223ca0(Unk_02006d14 *o, s32 a);
void func_0200f3ec(Unk_02006d14_V3 *out, Unk_02006d14 *o, Unk_02006d14_V3 *in, u16 *ang, s32 *p);
void __cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, s32 n, s32 size, void *dtor);
void func_02000c8c(void *p);
void func_02000c98(void *p);
u16 func_0207694c(u8 *p);
void func_02076964(u8 *p, u16 h);
void func_02076994(u8 *p, s32 v);
void func_02076b08(void *p, s32 a, s32 b);
s32 func_020766e0(s32 v);
u16 func_020769ac(void *p);
s32 func_020b50e8();
void func_02116048(const void *src, void *dst, s32 n);
BOOL func_020729bc(Unk_020955e8_G *g, s32 v);
u8 *func_02095720(s32 v);
u8 *func_0209573c(s32 v);
BOOL func_02095574(u32 *out, s32 a, s32 idx);

BOOL func_02094f00(s32 a, s32 b);
BOOL func_02094ee0(s32 a, s32 b);
BOOL func_02095154(s32 v, s32 id);
BOOL func_02095180(s32 a, s32 b);
u8 func_02095430(Unk_02095338 *p, s32 i);
void func_02095440(Unk_02095338 *p, s32 i);
void func_0209544c(Unk_02095338 *p, s32 i, s32 v);
u8 func_02095454(Unk_02095338 *p, s32 i);
void func_02095464(Unk_02095338 *p, s32 i);
void func_02095470(Unk_02095338 *p, s32 i, s32 v);
u32 func_02095478(Unk_02095338 *p, s32 i);
void func_02095488(Unk_02095338 *p, s32 i);
void func_02095494(Unk_02095338 *p, s32 i, u32 v);
u32 func_020953f4(Unk_02095338 *p);
u16 *func_02095294(s32 i);
Unk_02095338_E *func_020952a0(s32 i);
u8 *func_020952b0(s32 i);
u32 *func_020952bc(s32 i);
}

// An enum-typed local keeps the constant in a callee-saved register across the call.
enum Unk_02094d60_Limit { Unk_02094d60_LIMIT_5 = 5, Unk_02094d60_LIMIT_6 = 6 };

extern "C" s32 func_02094d3c()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return func_0200c358(o, 3, 5, -1);
    }
    return 0;
}

extern "C" BOOL func_02094d60()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > func_0200e1dc(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094d88()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 st = o->unk_7ec;
        if (func_0203d978() || func_0200ec44(o, 0x13)) {
            return FALSE;
        }
        if (func_0200ec44(o, 0xb)) {
            if (st == 0x28 || st == 2 || st == 8) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02094de0()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (func_0200ec44(o, 0xb)) {
            if (o->unk_7ec == 0x28 || o->unk_7ec == 0x7c) {
                return TRUE;
            }
        }
        if (func_0200ec44(o, 0x13)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > func_0200e1dc(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094e3c()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_6;
        if (n > func_0200e1dc(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094e64()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (func_0200ec44(o, 0xb)) {
            return FALSE;
        }
        if (func_0203d978() || func_0200ec44(o, 0x13)) {
            return FALSE;
        }
        if (o->unk_7ec == 0x3d || func_0200ec44(o, 7) || func_0200ec44(o, 8)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > func_0200e1dc(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094ee0(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        func_0200ec1c(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094f00(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        func_0200ec30(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094f20()
{
    return func_02094f00(0x17, 4);
}

extern "C" BOOL func_02094f2c(s32 c, s32 b)
{
    if (c) {
        return func_02094f00(0x10, b);
    }
    return func_02094ee0(0x10, b);
}

extern "C" BOOL func_02094f48(s32 c, s32 b)
{
    if (c) {
        return func_02094f00(0xe, b);
    }
    return func_02094ee0(0xe, b);
}

extern "C" BOOL func_02094f64(s32 c)
{
    if (c) {
        return func_02094f00(0xb, 4);
    }
    return func_02094ee0(0xb, 4);
}

extern "C" s32 func_02094f84()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return func_0200ea10(o, o->unk_7ec);
    }
    return 0;
}

extern "C" BOOL func_02094fa8()
{
    return func_02095154(0x3f, 4);
}

extern "C" BOOL func_02094fb4()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o && o->unk_7ec == 7 && o->unk_2d4 < 0x13000) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_02094fec()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 v = o->unk_7ec;
        if (v == 0) {
            v = (o->unk_08 >> 22) & 0xff;
        }
        return v;
    }
    return 0x93;
}

extern "C" s32 func_0209501c(Unk_02006d14_V3 *out, s16 *outAng)
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        Unk_02006d14_V3 saved;
        Unk_02006d14_V3 tmp;
        s16 ang;
        s32 st;
        {
            Unk_02006d14_V3 *pv = &o->unk_5c;
            saved = *pv;
        }
        ang = o->unk_8e;
        st = o->unk_7ec;
        switch (st) {
        case 16:
            st = 2;
            break;
        case 0x2c:
            st = 2;
            func_ov004_0222113c(o, st);
            break;
        case 0x29:
        case 0x2a:
            if (st == 0x29) {
                func_ov004_0222148c(o, 0x2c);
            } else {
                func_ov004_02221558(o, 0x2c);
            }
            st = 2;
            func_0200f3ec(&tmp, o, &saved, (u16 *)&o->unk_8e, &data_020d0428);
            {
                Unk_02006d14_V3 *pv = &o->unk_5c;
                *pv = tmp;
            }
            break;
        case 14:
            st = 2;
            break;
        case 9: case 11: case 12:
            st = 8;
            break;
        case 10:
            st = 2;
            func_ov004_02224224(o, st);
            break;
        case 15:
            st = 8;
            func_ov004_022237fc(o, st);
            break;
        case 13:
            st = 8;
            func_ov004_02223ca0(o, st);
            break;
        }
        {
            Unk_02006d14_V3 *pv = &o->unk_5c;
            *out = *pv;
            *outAng = o->unk_8e;
            *pv = saved;
        }
        o->unk_8e = ang;
        return st;
    }
    return 0x93;
}

extern "C" s32 func_02095134(s32 id)
{
    Unk_02006d14 *o = func_02095774(id);
    if (o) {
        return o->unk_7ec;
    }
    return 0x93;
}

extern "C" BOOL func_02095154(s32 v, s32 id)
{
    Unk_02006d14 *o = func_02095774(id);
    if (o) {
        if (o->unk_7ec == v) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02095180(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        return func_0200ec44(o, a);
    }
    return FALSE;
}

extern "C" BOOL func_020951a0()
{
    return func_02095154(0x90, 4);
}

extern "C" BOOL func_020951ac()
{
    return func_02095154(5, 4);
}

extern "C" BOOL func_020951b8(s32 a)
{
    return func_02095180(5, a);
}

extern "C" BOOL func_020951c4()
{
    return func_02095180(4, 4);
}

extern "C" BOOL func_020951d0()
{
    return func_02095180(1, 4);
}

extern "C" u32 func_020951dc(u32 v)
{
    return (v >> 22) & 0xff;
}

extern "C" u32 func_020951e4(u32 v)
{
    return (v >> 30) & 3;
}

extern "C" void func_02095200();
extern "C" void func_02095218();

extern "C" void func_020951ec(s32 id)
{
    func_02095774(id);
    func_02095200();
}

extern "C" void func_02095200() {}

extern "C" void func_02095204(s32 id)
{
    func_02095774(id);
    func_02095218();
}

extern "C" void func_02095218() {}

extern "C" u32 func_0209521c()
{
    return func_020953f4(&data_021d085c);
}

extern "C" u8 func_0209522c(s32 i)
{
    return func_02095430(&data_021d085c, i);
}

extern "C" void func_0209523c(s32 i)
{
    func_02095440(&data_021d085c, i);
}

extern "C" void func_0209524c(s32 i, s32 v)
{
    func_0209544c(&data_021d085c, i, v);
}

extern "C" void func_02095260(s32 i)
{
    *func_020952bc(i) = 0x93;
    *func_020952b0(i) = 0x33;
    Unk_02095338_E *e = func_020952a0(i);
    e->a = 0;
    e->b = 0;
    e->c = 0;
    *func_02095294(i) = 0;
}

extern "C" u16 *func_02095294(s32 i)
{
    return &data_021d08c0[i];
}

extern "C" Unk_02095338_E *func_020952a0(s32 i)
{
    return &data_021d0890[i];
}

extern "C" u8 *func_020952b0(s32 i)
{
    return &data_021d088c[i];
}

extern "C" u32 *func_020952bc(s32 i)
{
    return &data_021d087c[i];
}

extern "C" u8 *func_020952c8()
{
    return &data_021d0878;
}

extern "C" u16 *func_020952d0()
{
    return &data_021d0876;
}

extern "C" Unk_02095338_D *func_020952d8()
{
    return &data_021d0874;
}

extern "C" u8 func_020952e0(s32 i)
{
    return func_02095454(&data_021d085c, i);
}

extern "C" void func_020952f0(s32 i)
{
    func_02095464(&data_021d085c, i);
}

extern "C" void func_02095300(s32 i, s32 v)
{
    func_02095470(&data_021d085c, i, v);
}

extern "C" u32 func_02095314(s32 i)
{
    return func_02095478(&data_021d085c, i);
}

extern "C" void func_02095324(s32 i, u32 v)
{
    func_02095494(&data_021d085c, i, v);
}

extern "C" Unk_02095338 *func_02095338(Unk_02095338 *p)
{
    __cxa_vec_cleanup(p->unk_34, 4, 12, (void *)func_02000c8c);
    return p;
}

extern "C" Unk_02095338 *func_02095354(Unk_02095338 *p)
{
    u32 i;
    __cxa_vec_ctor(p->unk_34, 4, 12, (void *)func_02000c98, (void *)func_02000c8c);
    for (i = 0; i < 4; i++) {
        func_02095464(&data_021d085c, i);
        func_02095440(&data_021d085c, i);
        p->unk_20[i] = 0x93;
        p->unk_30[i] = 0x33;
        p->unk_34[i].a = 0;
        p->unk_34[i].b = 0;
        p->unk_34[i].c = 0;
        p->unk_64[i] = 0;
    }
    p->unk_18.a = 0;
    p->unk_18.b = 1;
    p->unk_18.c = 1;
    p->unk_1a = 0;
    p->unk_1c = 0;
    return p;
}

extern "C" u32 func_020953f4(Unk_02095338 *p)
{
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == func_02095430(p, j)) {
                break;
            }
        }
        if (j >= 4) {
            return i;
        }
    }
    return 4;
}

extern "C" u8 func_02095430(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_14[i];
    }
    return 4;
}

extern "C" void func_02095440(Unk_02095338 *p, s32 i)
{
    func_0209544c(p, i, 4);
}

extern "C" void func_0209544c(Unk_02095338 *p, s32 i, s32 v)
{
    p->unk_14[i] = v;
}

extern "C" u8 func_02095454(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_10[i];
    }
    return 7;
}

extern "C" void func_02095464(Unk_02095338 *p, s32 i)
{
    func_02095470(p, i, 7);
}

extern "C" void func_02095470(Unk_02095338 *p, s32 i, s32 v)
{
    p->unk_10[i] = v;
}

extern "C" u32 func_02095478(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_00[i];
    }
    return 0;
}

extern "C" void func_02095488(Unk_02095338 *p, s32 i)
{
    func_02095494(p, i, 0);
}

extern "C" void func_02095494(Unk_02095338 *p, s32 i, u32 v)
{
    p->unk_00[i] = v;
}

extern "C" void func_0209549c(u8 *src, u8 *a, u8 *b)
{
    *a = src[0] & 0xf;
    *b = (src[0] >> 4) & 7;
}

extern "C" void func_020954b8(u8 *p, u32 a, u32 b)
{
    *p = ((b << 4) & 0x70) | (a & 0xf);
}

extern "C" void func_020954c8(u8 *p, u16 *a, u32 *b)
{
    *a = func_0207694c(p);
    *b = p[2];
}

extern "C" void func_020954e0(u8 *p, u16 h, u8 v)
{
    func_02076964(p, h);
    p[2] = v;
}

extern "C" void func_020954f8(void *dst, s32 x)
{
    Unk_020954f8_L l;
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        func_02076b08(l.t, func_020b50e8(), 0);
        if (func_02095574(&l.out, -1, 4)) {
            l.t[1] = l.out + 1;
        }
        func_02076994(l.t + 2, o->unk_c80);
        func_02116048((u8 *)o + 0x8ec, l.t + 4, 8);
    } else {
        l.t[1] = 0x94;
    }
    func_02116048(l.t, dst, func_020766e0(x));
}

extern "C" BOOL func_02095574(u32 *out, s32 a, s32 idx)
{
    u8 buf;
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (func_020729bc(data_020cbb18, idx)) {
        Unk_02006d14 *o = func_02095774(4);
        if (o) {
            *out = o->unk_7ec;
            return TRUE;
        }
        return FALSE;
    }
    u8 *p = func_02095720(idx);
    if (!p) {
        return FALSE;
    }
    func_02116048(p + 1, &buf, 1);
    if (buf == 0) {
        return FALSE;
    }
    *out = buf - 1;
    return TRUE;
}

extern "C" BOOL func_020955e8(s16 *out, s32 a, s32 idx)
{
    u32 st;
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (func_020729bc(data_020cbb18, idx)) {
        Unk_02006d14 *o = func_02095774(4);
        if (o) {
            *out = o->unk_8e;
            return TRUE;
        }
        return FALSE;
    }
    if (!func_02095720(idx)) {
        return FALSE;
    }
    if (!func_02095574(&st, a, idx)) {
        return FALSE;
    }
    if ((s32)st >= 0x93) {
        return FALSE;
    }
    u8 *q = func_0209573c(idx);
    if (!q) {
        return FALSE;
    }
    *out = func_020769ac(q);
    return TRUE;
}
