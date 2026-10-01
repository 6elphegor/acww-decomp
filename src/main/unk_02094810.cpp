#include "types.h"

struct Unk_02006d14_Vec { s32 x, y, z; };
typedef Unk_02006d14_Vec Unk_02006d14_V3;
struct Unk_02006d14_Blk { u32 w[12]; };

// An enum-typed local keeps the constant in a callee-saved register across the call.
// _ZN12Unk_0200804013func_020085f0Ejj is declared with the enum parameter (real type u32) so the argument is
// passed with `movs r1, r5` instead of `adds r1, r5, #0`.
enum Unk_02094a08_Limit { Unk_02094a08_LIMIT_5 = 5 };
enum Unk_02094d60_Limit { Unk_02094d60_LIMIT_5 = 5, Unk_02094d60_LIMIT_6 = 6 };

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02006d14 {
    u8 pad_00[0x08];
    u32 unk_08;
    u8 pad_0c[0x5c - 0x0c];
    Unk_02006d14_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2d4 - 0x90];
    s32 unk_2d4;
    u8 pad_2d8[0x44c - 0x2d8];
    s32 unk_44c;
    s32 unk_450;
    s32 unk_454;
    u8 pad_458[4];
    u16 unk_45c;
    u16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[4];
    u8 pad_5a0[0x5c8 - 0x5a0];
    s32 unk_5c8;
    u8 pad_5cc[0x694 - 0x5cc];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    u8 unk_6f0[0x10];
    s32 unk_700;
    u8 pad_704[0x709 - 0x704];
    u8 unk_709[0x7ec - 0x709];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    u32 unk_7f8;
    u8 pad_7fc[4];
    s32 unk_800;
    s32 unk_804;
    u8 pad_808[0x8e7 - 0x808];
    s8 unk_8e7;
    u8 pad_8e8[0xc80 - 0x8e8];
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
    Unk_02095338();
    ~Unk_02095338();
};

struct Unk_020954f8_L { u32 out; u8 t[12]; };

extern "C" {
extern u8 data_020e416c;
extern const u8 data_020d0408[];
extern const u32 data_020d03d8[];
extern const u32 data_020d03e8[];
extern const u32 data_020d03f8[];
extern const s32 data_020d0428;
extern Unk_020cbb18 *data_020cbb18;
}
extern Unk_02095338 data_021d085c;

extern "C" {
Unk_02006d14 *func_02095774(s32 id);

u32 _ZN12Unk_0200769413func_02007c08Ej(Unk_02006d14 *o, u32 a);
s32 _ZN12Unk_02006d1413func_0200ba8cEhhjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, s32 d);
s32 _ZN12Unk_02006d1413func_0200bb68Ejj(Unk_02006d14 *o, u32 a, s32 b);
s32 _ZN12Unk_02006d1413func_0200bd60Esji(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(Unk_02006d14 *o);
s32 _ZN12Unk_02006d1413func_0200f660Ev(Unk_02006d14 *o);
s32 _ZN12Unk_020d6df413func_0200e1acEv(Unk_02006d14 *o);
s32 _ZN12Unk_0200804013func_020085f0Ejj(Unk_02006d14 *o, Unk_02094a08_Limit a, s32 b);
s32 _ZN12Unk_02006d1413func_02009c04Ejj(Unk_02006d14 *o, u32 a, s32 b);
s32 _ZN12Unk_02006d1413func_02009df8EPtjjjjjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 _ZN12Unk_02006d1413func_02008f60Esjj(Unk_02006d14 *o, s32 a, u32 b, s32 c);
s32 _ZN12Unk_02006d1413func_020093f4EP16Unk_02006d14_Vecjjs(Unk_02006d14 *o, Unk_02006d14_Vec *v, u32 a, u32 b, s32 c);
s32 _ZN12Unk_0200804013func_02008100EPtjj(Unk_02006d14 *o, u16 *p, u32 a, s32 b);
s32 _ZN12Unk_02006d1413func_020096e8Etjj(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_0200769413func_0200c2b4Etjjjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN12Unk_02006d1413func_02008e50Ehhhjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN12Unk_020d6df413func_0200ce98Ejjj(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 func_ov004_0221efa4(Unk_02006d14 *o, Unk_02006d14_Vec *v, u32 a, s32 b);
s32 _ZN12Unk_0200769413func_0200c358Etjj(Unk_02006d14 *o, s32 a, s32 b, s32 c);
s32 _ZN12Unk_020d6df413func_0200e1dcEv(Unk_02006d14 *o);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(Unk_02006d14 *o, s32 id);
void _ZN12Unk_02006d1413func_0200ec1cEj(Unk_02006d14 *o, s32 id);
void _ZN12Unk_02006d1413func_0200ec30Ej(Unk_02006d14 *o, s32 id);
s32 _ZN12Unk_02006d1413func_0200ea10Ej(Unk_02006d14 *o, s32 v);

s32 func_020b52f8();
BOOL func_0203d978();
s32 func_0203d878();
void func_02010a7c(void *out, Unk_02006d14 *o);
s32 func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
s32 func_02063c18(s32 v);
void *func_020b4934();
void func_020b4b68(void *a, s32 b, void *c, void *d);
s32 func_ov003_02210628(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 func_ov003_0220dff0(Unk_02006d14 *o, u32 a, u32 b, s32 c);
void func_ov004_0222113c(Unk_02006d14 *o, s32 a);
void func_ov004_0222148c(Unk_02006d14 *o, s32 a);
void func_ov004_02221558(Unk_02006d14 *o, s32 a);
void func_ov004_02224224(Unk_02006d14 *o, s32 a);
void func_ov004_022237fc(Unk_02006d14 *o, s32 a);
void func_ov004_02223ca0(Unk_02006d14 *o, s32 a);
void func_0200f3ec(Unk_02006d14_V3 *out, Unk_02006d14 *o, Unk_02006d14_V3 *in, u16 *ang, s32 *p);
void __cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, s32 n, s32 size, void *dtor);
void _ZN12Unk_02000c8cD1Ev(void *p);
void func_02000c98(void *p);
u16 func_0207694c(u8 *p);
void func_02076964(u8 *p, u16 h);
void func_02076994(u8 *p, s32 v);
void func_02076b08(void *p, s32 a, s32 b);
s32 func_020766e0(s32 v);
u16 func_020769ac(void *p);
s32 func_020b50e8();
void func_02116048(const void *src, void *dst, s32 n);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_020cbb18 *g, s32 v);
u32 _ZN12Unk_020cbb1813func_02072970Ej(Unk_020cbb18 *g, u32 v);
void func_02076a2c(u32 a, s32 *x, s32 *y);
void func_02076ae8(u32 a, u8 *b, s32 c);
u32 func_02095720(s32 v);
u32 func_0209573c(s32 v);
u32 func_02095758(s32 v);
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
s32 func_02094c04(u16 *p, s32 a, s32 b);
void func_02095200();
void func_02095218();
}

extern "C" Unk_02006d14 *func_02095774(s32 idx) {
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    return (Unk_02006d14 *)func_02095478(&data_021d085c, idx);
}

extern "C" u32 func_02095758(s32 idx) { return _ZN12Unk_020cbb1813func_02072970Ej(data_020cbb18, data_020d03d8[idx]); }

extern "C" u32 func_0209573c(s32 idx) { return _ZN12Unk_020cbb1813func_02072970Ej(data_020cbb18, data_020d03e8[idx]); }

extern "C" u32 func_02095720(s32 idx) { return _ZN12Unk_020cbb1813func_02072970Ej(data_020cbb18, data_020d03f8[idx]); }

// ---------------------------------------------------------------- functions (file unk_02095670)
extern "C" BOOL func_02095670(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx) {
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, idx)) {
        Unk_02006d14 *e = func_02095774(4);
        if (e != NULL) {
            s32 *p = (s32 *)&e->unk_5c;
            *outb = func_020b50e8();
            *x = p[0];
            *y = p[2];
            return TRUE;
        }
        return FALSE;
    }
    u32 t = func_02095720(idx);
    if (t == 0) return FALSE;
    s32 v;
    if (!func_02095574((u32 *)&v, mode, idx)) return FALSE;
    if (v >= 0x93) return FALSE;
    u32 t2 = func_02095758(idx);
    if (t2 == 0) return FALSE;
    s32 a, b;
    func_02076a2c(t2, &a, &b);
    *x = a;
    *y = b;
    func_02076ae8(t, outb, 0);
    return TRUE;
}

extern "C" BOOL func_020955e8(s16 *out, s32 a, s32 idx)
{
    u32 st;
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, idx)) {
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
    u8 *q = (u8 *)func_0209573c(idx);
    if (!q) {
        return FALSE;
    }
    *out = func_020769ac(q);
    return TRUE;
}

extern "C" BOOL func_02095574(u32 *out, s32 a, s32 idx)
{
    u8 buf;
    if (idx == 4) {
        idx = data_020cbb18->unk_68;
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, idx)) {
        Unk_02006d14 *o = func_02095774(4);
        if (o) {
            *out = o->unk_7ec;
            return TRUE;
        }
        return FALSE;
    }
    u8 *p = (u8 *)func_02095720(idx);
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

extern "C" void func_020954e0(u8 *p, u16 h, u8 v)
{
    func_02076964(p, h);
    p[2] = v;
}

extern "C" void func_020954c8(u8 *p, u16 *a, u32 *b)
{
    *a = func_0207694c(p);
    *b = p[2];
}

extern "C" void func_020954b8(u8 *p, u32 a, u32 b)
{
    *p = ((b << 4) & 0x70) | (a & 0xf);
}

extern "C" void func_0209549c(u8 *src, u8 *a, u8 *b)
{
    *a = src[0] & 0xf;
    *b = (src[0] >> 4) & 7;
}

extern "C" void func_02095494(Unk_02095338 *p, s32 i, u32 v)
{
    p->unk_00[i] = v;
}

extern "C" void func_02095488(Unk_02095338 *p, s32 i)
{
    func_02095494(p, i, 0);
}

extern "C" u32 func_02095478(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_00[i];
    }
    return 0;
}

extern "C" void func_02095470(Unk_02095338 *p, s32 i, s32 v)
{
    p->unk_10[i] = v;
}

extern "C" void func_02095464(Unk_02095338 *p, s32 i)
{
    func_02095470(p, i, 7);
}

extern "C" u8 func_02095454(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_10[i];
    }
    return 7;
}

extern "C" void func_0209544c(Unk_02095338 *p, s32 i, s32 v)
{
    p->unk_14[i] = v;
}

extern "C" void func_02095440(Unk_02095338 *p, s32 i)
{
    func_0209544c(p, i, 4);
}

extern "C" u8 func_02095430(Unk_02095338 *p, s32 i)
{
    if (i < 4) {
        return p->unk_14[i];
    }
    return 4;
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

Unk_02095338::Unk_02095338()
{
    u32 i;
    __cxa_vec_ctor(unk_34, 4, 12, (void *)func_02000c98, (void *)_ZN12Unk_02000c8cD1Ev);
    for (i = 0; i < 4; i++) {
        func_02095464(&data_021d085c, i);
        func_02095440(&data_021d085c, i);
        unk_20[i] = 0x93;
        unk_30[i] = 0x33;
        unk_34[i].a = 0;
        unk_34[i].b = 0;
        unk_34[i].c = 0;
        unk_64[i] = 0;
    }
    unk_18.a = 0;
    unk_18.b = 1;
    unk_18.c = 1;
    unk_1a = 0;
    unk_1c = 0;
}

Unk_02095338::~Unk_02095338()
{
    __cxa_vec_cleanup(unk_34, 4, 12, (void *)_ZN12Unk_02000c8cD1Ev);
}

extern "C" void func_02095324(s32 i, u32 v)
{
    func_02095494(&data_021d085c, i, v);
}

extern "C" void func_02095314(s32 i)
{
    func_02095488(&data_021d085c, i);
}

extern "C" void func_02095300(s32 i, s32 v)
{
    func_02095470(&data_021d085c, i, v);
}

extern "C" void func_020952f0(s32 i)
{
    func_02095464(&data_021d085c, i);
}

extern "C" u8 func_020952e0(s32 i)
{
    return func_02095454(&data_021d085c, i);
}

extern "C" Unk_02095338_D *func_020952d8()
{
    return &data_021d085c.unk_18;
}

extern "C" u16 *func_020952d0()
{
    return &data_021d085c.unk_1a;
}

extern "C" u8 *func_020952c8()
{
    return &data_021d085c.unk_1c;
}

extern "C" u32 *func_020952bc(s32 i)
{
    return &data_021d085c.unk_20[i];
}

extern "C" u8 *func_020952b0(s32 i)
{
    return &data_021d085c.unk_30[i];
}

extern "C" Unk_02095338_E *func_020952a0(s32 i)
{
    return &data_021d085c.unk_34[i];
}

extern "C" u16 *func_02095294(s32 i)
{
    return &data_021d085c.unk_64[i];
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

extern "C" void func_0209524c(s32 i, s32 v)
{
    func_0209544c(&data_021d085c, i, v);
}

extern "C" void func_0209523c(s32 i)
{
    func_02095440(&data_021d085c, i);
}

extern "C" u8 func_0209522c(s32 i)
{
    return func_02095430(&data_021d085c, i);
}

extern "C" u32 func_0209521c()
{
    return func_020953f4(&data_021d085c);
}

extern "C" void func_02095218() {}

extern "C" void func_02095204(s32 id)
{
    func_02095774(id);
    func_02095218();
}

extern "C" void func_02095200() {}

extern "C" void func_020951ec(s32 id)
{
    func_02095774(id);
    func_02095200();
}

extern "C" u32 func_020951e4(u32 v)
{
    return (v >> 30) & 3;
}

extern "C" u32 func_020951dc(u32 v)
{
    return (v >> 22) & 0xff;
}

extern "C" BOOL func_020951d0()
{
    return func_02095180(1, 4);
}

extern "C" BOOL func_020951c4()
{
    return func_02095180(4, 4);
}

extern "C" BOOL func_020951b8(s32 a)
{
    return func_02095180(5, a);
}

extern "C" BOOL func_020951ac()
{
    return func_02095154(5, 4);
}

extern "C" BOOL func_020951a0()
{
    return func_02095154(0x90, 4);
}

extern "C" BOOL func_02095180(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        return _ZN12Unk_02006d1413func_0200ec44Ej(o, a);
    }
    return FALSE;
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

extern "C" s32 func_02095134(s32 id)
{
    Unk_02006d14 *o = func_02095774(id);
    if (o) {
        return o->unk_7ec;
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
            func_0200f3ec(&tmp, o, &saved, (u16 *)&o->unk_8e, (s32 *)&data_020d0428);
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

extern "C" BOOL func_02094fb4()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o && o->unk_7ec == 7 && o->unk_2d4 < 0x13000) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094fa8()
{
    return func_02095154(0x3f, 4);
}

extern "C" s32 func_02094f84()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return _ZN12Unk_02006d1413func_0200ea10Ej(o, o->unk_7ec);
    }
    return 0;
}

extern "C" BOOL func_02094f64(s32 c)
{
    if (c) {
        return func_02094f00(0xb, 4);
    }
    return func_02094ee0(0xb, 4);
}

extern "C" BOOL func_02094f48(s32 c, s32 b)
{
    if (c) {
        return func_02094f00(0xe, b);
    }
    return func_02094ee0(0xe, b);
}

extern "C" BOOL func_02094f2c(s32 c, s32 b)
{
    if (c) {
        return func_02094f00(0x10, b);
    }
    return func_02094ee0(0x10, b);
}

extern "C" BOOL func_02094f20()
{
    return func_02094f00(0x17, 4);
}

extern "C" BOOL func_02094f00(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        _ZN12Unk_02006d1413func_0200ec30Ej(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094ee0(s32 a, s32 b)
{
    Unk_02006d14 *o = func_02095774(b);
    if (o) {
        _ZN12Unk_02006d1413func_0200ec1cEj(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094e64()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xb)) {
            return FALSE;
        }
        if (func_0203d978() || _ZN12Unk_02006d1413func_0200ec44Ej(o, 0x13)) {
            return FALSE;
        }
        if (o->unk_7ec == 0x3d || _ZN12Unk_02006d1413func_0200ec44Ej(o, 7) || _ZN12Unk_02006d1413func_0200ec44Ej(o, 8)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
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
        if (n > _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094de0()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xb)) {
            if (o->unk_7ec == 0x28 || o->unk_7ec == 0x7c) {
                return TRUE;
            }
        }
        if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0x13)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
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
        if (func_0203d978() || _ZN12Unk_02006d1413func_0200ec44Ej(o, 0x13)) {
            return FALSE;
        }
        if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xb)) {
            if (st == 0x28 || st == 2 || st == 8) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02094d60()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN12Unk_020d6df413func_0200e1dcEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- functions (file unk_02094d3c)
extern "C" s32 func_02094d3c()
{
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return _ZN12Unk_0200769413func_0200c358Etjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094c38() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 r4 = o->unk_7ec;
        s32 r6 = o->unk_8e7;
        o->unk_8e7 = 0;
        if (r4 == 0x2c || (u32)(r4 - 0x29) <= 1) return 1;
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, r4);
        if (r6 > 0) {
            return _ZN12Unk_02006d1413func_02008e50Ehhhjs(o, (u8)(r6 + 3), 0, 0, 6, -1);
        }
        u16 buf[2];
        BOOL c = data_020e416c == 0 ? TRUE : FALSE;
        if (c) {
            func_02010a7c(buf, o);
            BOOL c2;
            if (func_0204b2d4(buf)) {
                buf[1] = 0xfff1;
                c2 = func_0204b25c(buf) == func_0204b25c(&buf[1]) ? TRUE : FALSE;
            } else {
                c2 = buf[0] == 0xfff1 ? TRUE : FALSE;
            }
            if (!c2 && !_ZN12Unk_02006d1413func_0200f660Ev(o) && r4 != 0x39) {
                return func_ov003_02210628(o, 2, 2, 0, 0, 0, 6, -1);
            }
        }
        return _ZN12Unk_020d6df413func_0200ce98Ejjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094c04(u16 *p, s32 a, s32 b) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return _ZN12Unk_0200769413func_0200c2b4Etjjjs(o, *p, a, b, 6, -1);
    return 0;
}

extern "C" s32 func_02094bf8(u16 *p) { return func_02094c04(p, 0, 5); }

extern "C" s32 func_02094bec(u16 *p) { return func_02094c04(p, 1, 5); }

extern "C" s32 func_02094be0(u16 *p) { return func_02094c04(p, 2, 5); }

extern "C" s32 func_02094bc0() {
    u16 v = 0xfff1;
    return func_02094c04(&v, 3, 5);
}

extern "C" s32 func_02094bb4(u16 *p) { return func_02094c04(p, 0, 0x10); }

extern "C" s32 func_02094ba8(u16 *p) { return func_02094c04(p, 1, 0x10); }

extern "C" s32 func_02094b9c(u16 *p) { return func_02094c04(p, 2, 0x10); }

extern "C" s32 func_02094b78(u16 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return _ZN12Unk_02006d1413func_020096e8Etjj(o, *p, 6, -1);
    return 0;
}

extern "C" s32 func_02094b48(u16 *p) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        u16 h = *p;
        return _ZN12Unk_0200804013func_02008100EPtjj(o, &h, 6, -1);
    }
    return 0;
}

extern "C" s32 func_02094b0c(Unk_02006d14_Vec *v, u32 b, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) {
        Unk_02006d14_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return _ZN12Unk_02006d1413func_020093f4EP16Unk_02006d14_Vecjjs(o, &t, b, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094ae8(s32 a, u32 idx) {
    Unk_02006d14 *o = func_02095774(idx);
    if (o) return _ZN12Unk_02006d1413func_02008f60Esjj(o, a, 5, -1);
    return 0;
}

extern "C" s32 func_02094aa8(u16 *a, u32 *b, u8 *c, u32 *d, u32 e) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        return _ZN12Unk_02006d1413func_02009df8EPtjjjjjs(o, (u32)a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 func_02094a84() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) return _ZN12Unk_02006d1413func_02009c04Ejj(o, 6, -1);
    return 0;
}

extern "C" s32 func_02094a08() {
    if (func_0203d878()) return 0;
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xb)) return 0;
        Unk_02094a08_Limit k = Unk_02094a08_LIMIT_5;
        if (!(k > _ZN12Unk_020d6df413func_0200e1acEv(o))) {
            if (o->unk_7ec == 0x4f && o->unk_5c8 != 5) {
                func_ov003_0220dff0(o, 1, 6, -1);
                return 1;
            }
            return 0;
        }
        return _ZN12Unk_0200804013func_020085f0Ejj(o, k, -1);
    }
    return 0;
}

extern "C" void func_020949a0(u32 a) {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        s32 t = _ZN12Unk_02006d1413func_0200f5b0Ev(o);
        if (t == 0) goto A;
        if (t == 0xa) {
            if (a == 1) goto A;
        }
        if (a < 2) goto B;
    A:
        _ZN12Unk_02006d1413func_0200ec30Ej(o, 1);
        _ZN12Unk_02006d1413func_0200bd60Esji(o, 3, 5, -1);
        return;
    B:
        func_ov003_02210628(o, 0x10, a, o->unk_5c.x, o->unk_5c.z, o->unk_8e, 6, -1);
    }
}

extern "C" s32 func_02094960() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        if (o->unk_7ec == 0x28) {
            if (_ZN12Unk_02006d1413func_0200ec44Ej(o, 0xb)) return 1;
        }
        return _ZN12Unk_02006d1413func_0200bd60Esji(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094898() {
    Unk_02006d14 *o = func_02095774(4);
    s16 h;
    s32 pad;
    Unk_02006d14_Vec v;
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        if (o->unk_804 == 3) {
            s32 r5 = o->unk_800;
            h = o->unk_8e;
            if (r5 != -1) {
                func_020b4b68(func_020b4934(), r5, &pad, &h);
            }
            s32 t = func_02063c18(h);
            Unk_02006d14_Vec *pv = &o->unk_5c;
            v.x = o->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            switch (t) {
            case 2: v.z -= 0x6000; break;
            case 0: v.z += 0x6000; break;
            case 3: v.x -= 0x6000; break;
            case 1: v.x += 0x6000; break;
            }
            return func_ov004_0221efa4(o, &v, 6, -1);
        }
    }
    return 0;
}

extern "C" s32 func_02094860() {
    Unk_02006d14 *o = func_02095774(4);
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        return _ZN12Unk_02006d1413func_0200bb68Ejj(o, 5, -1);
    }
    return 0;
}

// ---------------------------------------------------------------- functions (file unk_020943dc)
extern "C" s32 func_02094810(u8 *p) {
    Unk_02006d14 *o = func_02095774(4);
    u32 v = *p;
    u8 t = data_020d0408[v - 1];
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(o, o->unk_7ec);
        return _ZN12Unk_02006d1413func_0200ba8cEhhjs(o, *p, t, 5, -1);
    }
    return 0;
}

// Declarations for data defined further down (definition order sets the data layout)
extern const u32 data_020d03e8[4];
extern const u32 data_020d03f8[4];
extern const u8 data_020d0408[0x20];
extern const u32 data_020d03d8[4];
extern Unk_02095338 data_021d085c;

const u32 data_020d03e8[4] = {4, 5, 6, 7};

const u32 data_020d03f8[4] = {8, 9, 10, 11};

const u8 data_020d0408[0x20] = {
    0x0f, 0x0f, 0x14, 0x0f, 0x22, 0x22, 0x19, 0x22, 0x22, 0x2c, 0x14, 0x14, 0x24, 0x2c, 0x1c, 0x18,
    0x1a, 0x26, 0x1e, 0x0f, 0x0f, 0x0f, 0x28, 0x0f, 0x1b, 0x14, 0x22, 0x28, 0x14, 0x00, 0x00, 0x00,
};

// ---------------------------------------------------------------- data
const u32 data_020d03d8[4] = {0, 1, 2, 3};

Unk_02095338 data_021d085c;
