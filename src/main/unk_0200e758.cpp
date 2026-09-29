#include "types.h"

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; };
struct Unk_02006d14_Vec3 { s32 x, y, z; };
struct Unk_0200e7f4_T24 { u32 a[12]; };

extern Unk_020cbb18 *data_020cbb18;
extern Unk_0200e7f4_T24 data_021cb69c;
extern u8 data_020c65f0[];
extern s16 data_02135f44[];
extern u32 data_020d5e40;

struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02006d14_Vec3 unk_5c;
    Unk_02006d14_Vec3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0xc4 - 0xb4];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 pad_d2[0x16c - 0xd2];
    u32 unk_16c;
    u8 pad_170[0x17e - 0x170];
    u8 unk_17e;
    u8 unk_17f;
    u8 pad_180[0x1ac - 0x180];
    u8 unk_1ac;
    u8 pad_1ad[0x230 - 0x1ad];
    u8 unk_230[0x294 - 0x230];
    Unk_0200e7f4_T24 unk_294;
    u8 pad_2c4[0x458 - 0x2c4];
    s16 unk_458;
    s16 unk_45a;
    s16 unk_45c;
    s16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[0x694 - 0x59c];
    u8 unk_694[0x6b8 - 0x694];
    u32 unk_6b8;
    u32 unk_6bc;
    u32 unk_6c0;
    u8 pad_6c4[0x6e8 - 0x6c4];
    u32 unk_6e8;
    u8 pad_6ec[0x7d1 - 0x6ec];
    u8 unk_7d1;
    u8 pad_7d2[0x7fc - 0x7d2];
    s32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u8 pad_81c[0x820 - 0x81c];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    u8 pad_82c[0x838 - 0x82c];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[0x8c0 - 0x87c];
    s32 unk_8c0;
    s32 unk_8c4;
    s32 unk_8c8;
    u8 pad_8cc[0xc78 - 0x8cc];
    u32 unk_c78;

    s32 func_0200e758();
    BOOL func_0200e7c0();
    void func_0200e7f4();
    void func_0200e870();
    void func_0200e8d0();
    BOOL func_0200ea10(u32 id);
    void func_0200ea4c();
    void func_0200ead0();
    void func_0200eb58(u32 a, u32 b);
    BOOL func_0200eba0(Unk_02006d14_Vec3 *out);
    void func_0200ebe8();
    void func_0200ec1c(u32 id);
    void func_0200ec30(u32 id);
    u32 func_0200ec44(u32 id);
    void func_0200ec54(u32 a, Unk_02006d14_Vec3 *v);
    void func_0200ecdc(u32 a);
    void func_0200ed48();
    void func_0200ed9c();
    BOOL func_0200ede8(Unk_02006d14_Vec3 *p);
    BOOL func_0200eee4(s32 *p);
    BOOL func_0200ef08();
    BOOL func_0200ef98(Unk_02006d14_Vec3 *out, s16 *ang);
    void func_0200f004(u32 a, ...);
    s32 func_0200f5b0();
};

extern "C" {
s32 func_020b50dc();
s32 func_020b50e8();
BOOL func_02072e88(Unk_020cbb18 *g, s32 i);
BOOL func_02072e44(Unk_020cbb18 *g);
BOOL func_020729bc(Unk_020cbb18 *g, s32 i);
BOOL func_020955e8(u32 *out, s32 a, s32 b);
u32 func_0203ef38(void *a, void *b);
s32 func_02002b84(Unk_02006d14 *p, void *buf);
s32 func_020553f8(void *p, s32 v);
s32 func_02053f08(void *p, s32 v);
s32 func_020553cc(void *p, void *q, s32 v);
s32 func_0205e1a0(void *p, s32 a, s32 b, s32 c);
BOOL func_02095154(s32 a, s32 b);
BOOL func_02095670(s16 *s, s32 *x, s32 *z, s32 m, s32 arg);
Unk_02006d14_Vec3 *func_020947f0(u32 n);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(Unk_02006d14_Vec3 *a, Unk_02006d14_Vec3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0200f3ec(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, Unk_02006d14_Vec3 *v, s16 *ang, u32 arg);
s32 func_0201071c(Unk_02006d14 *p);
s32 func_02010dbc(s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_02010c74(Unk_02006d14 *p);
s32 func_020728d4(Unk_020cbb18 *g);
s32 func_020728a4(Unk_020cbb18 *g, void *p, s32 n);
s32 func_02072824(Unk_020cbb18 *g, s32 a, s32 b);
s32 func_020954e0(u32 *out, u32 a, u32 b);
s32 func_0203ee38(Unk_02006d14_Vec3 *v);
BOOL func_0208f024();
BOOL func_0208f010();
s32 func_02003e60(void *p, u32 a, s32 b, s32 c);
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
s32 func_02063c18(s32 a);
s32 func_0204ed8c(Unk_02006d14_Vec3 *out, s32 x, s32 z);
s32 func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_0200f070(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, void *args);
void func_0200f54c(Unk_02006d14 *p, s32 a, s32 b, s32 c);
BOOL func_0200e35c(Unk_02006d14 *p, u8 *b, s32 *x, s32 *z, s16 *ang);
}

s32 Unk_02006d14::func_0200e758()
{
    s32 v = unk_818;
    if (v > 15) {
        v = unk_818;
    }
    return v;
}

extern "C" BOOL func_0200e764()
{
    s32 t = func_020b50dc();
    if (t == 12 || t == 13 || t == 14 || (u8)(t + 0xd2) <= 1) {
        u32 buf;
        s32 i = 0;
        Unk_020cbb18 *g = data_020cbb18;
        for (; i < 4; i++) {
            if (func_02072e88(g, i) && !func_020955e8(&buf, -1, i)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_02006d14::func_0200e7c0()
{
    if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        return FALSE;
    }
    if (unk_7fc != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200e7f4()
{
    Unk_0200e7f4_T24 buf;
    unk_d0 = func_0203ef38(unk_c4, &unk_5c);
    func_02002b84(this, &buf);
    unk_294 = buf;
    data_021cb69c = unk_294;
    func_020553f8(unk_230, 0);
    func_02053f08(unk_230, 0);
    func_020553cc(unk_230, unk_694, 11);
}

void Unk_02006d14::func_0200e870()
{
    s32 r = func_0200f5b0();
    if (r == 4) {
        func_0205e1a0(unk_59c, 0, 9, 0);
    } else if (r == 3) {
        func_0205e1a0(unk_59c, 0x13, 3, 0);
    } else if (r == 10) {
        func_0205e1a0(unk_59c, 0x23, 3, 0);
    } else if (r == 6) {
        func_0205e1a0(unk_59c, 0x21, 3, 0);
    }
}

void Unk_02006d14::func_0200e8d0()
{
    s16 s[2];
    volatile s32 sx, sy, sz;
    Unk_02006d14_Vec3 *q = &unk_5c;
    sx = q->x;
    sy = q->y;
    sz = q->z;
    if (unk_1ac != 0 && unk_17e == 0x15) {
        u32 n = unk_17f;
        if (func_020729bc(data_020cbb18, n) && func_02095154(2, 4)) {
            Unk_02006d14_Vec3 v;
            if (func_02095670(s, &v.x, &v.z, -1, unk_7fc)) {
                Unk_02006d14_Vec3 v2;
                Unk_02006d14_Vec3 *p = func_020947f0(n);
                Unk_02006d14_Vec3 *q2 = &unk_5c;
                v2 = *q2;
                s32 a = func_020e7b98(p->x - v2.x, p->z - v2.z);
                s[1] = func_020e7b98(v.x - v2.x, v.z - v2.z);
                if (func_020e780c(a, s[1]) < 0x400) {
                    s32 d1 = func_020e9650(&v2, p);
                    s32 d2 = func_020e9650(&v2, &v);
                    if (d1 <= d2) {
                        Unk_02006d14_Vec3 out;
                        if (unk_7fc >= (s32)n) {
                            s[1] = s[1] + 0x4000;
                        } else {
                            s[1] = s[1] - 0x4000;
                        }
                        func_0200f3ec(&out, this, &v2, &s[1], (u32)&data_020d5e40);
                        Unk_02006d14_Vec3 *q3 = &unk_5c;
                        *q3 = out;
                    }
                }
            }
        }
    }
    func_0201071c(this);
    q = &unk_5c;
    q->x = sx;
    q->y = sy;
    q->z = sz;
}

BOOL Unk_02006d14::func_0200ea10(u32 id)
{
    if (id == 0x1e) {
        if (unk_7d1 == 0 && unk_c78 == 0) {
            return TRUE;
        }
    } else if (id == 0x4f) {
        if (unk_c78 == 0) {
            return TRUE;
        }
    }
    return data_020c65f0[id];
}

void Unk_02006d14::func_0200ea4c()
{
    if (func_0200ec44(0x15)) {
        func_02010dbc(&unk_458, unk_45c, 0x400, 0x1770000, 0xc0000);
        func_02010dbc(&unk_45a, unk_45e, 0x400, 0x1770000, 0xc0000);
        if (unk_45c == 0 && unk_45e == 0 && unk_458 == 0 && unk_45a == 0) {
            func_0200ec1c(0x15);
        }
    }
}

void Unk_02006d14::func_0200ead0()
{
    Unk_020cbb18 *g = data_020cbb18;
    if (func_02072e44(g)) {
        u8 buf = func_02010c74(this);
        Unk_020cbb18 *g2 = data_020cbb18;
        func_020728d4(g2);
        func_020728a4(g2, &buf, 1);
        func_02072824(g2, 0x2e, 4);
    }
}

extern "C" void func_0200eb18()
{
    if (func_02072e44(data_020cbb18)) {
        u8 buf = 0;
        Unk_020cbb18 *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &buf, 1);
        func_02072824(g, 0x2d, 4);
    }
}

void Unk_02006d14::func_0200eb58(u32 a, u32 b)
{
    if (func_02072e44(data_020cbb18)) {
        u32 buf;
        func_020954e0(&buf, b, a);
        Unk_020cbb18 *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &buf, 3);
        func_02072824(g, 0x2b, 4);
    }
}

BOOL Unk_02006d14::func_0200eba0(Unk_02006d14_Vec3 *out)
{
    u32 a = unk_6b8;
    if (a == 0 && unk_6bc == 0 && unk_6c0 == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = unk_6bc;
    out->z = unk_6c0;
    func_0203ee38(out);
    return TRUE;
}

void Unk_02006d14::func_0200ebe8()
{
    if (func_0208f024()) {
        unk_16c = 1;
    } else if (func_0208f010()) {
        unk_16c = 2;
    } else {
        unk_16c = 0;
    }
}

void Unk_02006d14::func_0200ec1c(u32 id)
{
    unk_6e8 &= ~(1 << id);
}

void Unk_02006d14::func_0200ec30(u32 id)
{
    unk_6e8 |= (1 << id);
}

u32 Unk_02006d14::func_0200ec44(u32 id)
{
    return unk_6e8 & (1 << id);
}

static inline BOOL Unk_0200ec54_Bit(u32 f, u32 m)
{
    return (f & m) != 0 ? TRUE : FALSE;
}

void Unk_02006d14::func_0200ec54(u32 a, Unk_02006d14_Vec3 *v)
{
    u32 f = unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (func_0200ec44(0x19)) {
            func_02003e60(unk_838, a, 0x7f, 0);
        } else {
            func_02003e60(unk_87c, a, 0x7f, 0);
        }
        unk_8c0 = v->x;
        unk_8c4 = v->y;
        unk_8c8 = v->z;
    }
}

void Unk_02006d14::func_0200ecdc(u32 a)
{
    u32 f = unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (func_0200ec44(0x19)) {
            func_02003e70(unk_838, a, 0x7f, 0);
        } else {
            func_02003e70(unk_87c, a, 0x7f, 0);
        }
    }
}

void Unk_02006d14::func_0200ed48()
{
    s32 r = func_02063c18(unk_8e);
    s32 step = unk_7fc;
    switch (r) {
    case 2: unk_5c.z -= step; break;
    case 0: unk_5c.z += step; break;
    case 3: unk_5c.x -= step; break;
    case 1: unk_5c.x += step; break;
    }
}

void Unk_02006d14::func_0200ed9c()
{
    switch (func_02063c18(unk_8e)) {
    case 2: unk_5c.z -= 1; break;
    case 0: unk_5c.z += 1; break;
    case 3: unk_5c.x -= 1; break;
    case 1: unk_5c.x += 1; break;
    }
}

BOOL Unk_02006d14::func_0200ede8(Unk_02006d14_Vec3 *p)
{
    Unk_02006d14_Vec3 v;
    s16 ang;
    Unk_02006d14_Vec3 *pos = &unk_5c;
    if (func_0200ef98(&v, &ang)) {
        if (func_020e9650(&v, p) >= 0x4000) {
            ang = func_020e7b98(p->x - pos->x, p->z - pos->z);
            v.x = p->x - func_01ffcb0c(0x2000, data_02135f44[(u16)ang >> 4 << 1]);
            v.z = p->z - func_01ffcb0c(0x2000, data_02135f44[((u16)ang >> 4 << 1) + 1]);
        } else {
            ang = unk_8e;
        }
    } else {
        return TRUE;
    }
    if (func_020e9650(pos, &v) <= 0x200 && func_020e780c(unk_8e, ang) < 0x100) {
        return TRUE;
    }
    if (func_020e9650(pos, &v) >= 0xe000) {
        Unk_02006d14_Vec3 *q = &unk_68;
        *q = v;
        *pos = *q;
        unk_8e = ang;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02006d14::func_0200eee4(s32 *p)
{
    Unk_02006d14_Vec3 t;
    func_0204ed8c(&t, p[0], p[1]);
    return func_0200ede8(&t);
}

BOOL Unk_02006d14::func_0200ef08()
{
    Unk_02006d14_Vec3 v;
    s16 ang;
    if (func_0200ef98(&v, &ang)) {
        Unk_02006d14_Vec3 *pos = &unk_5c;
        if (pos->x == v.x && pos->z == v.z && ang == unk_8e) {
            return TRUE;
        }
        if (func_020e9650(pos, &v) >= 0xe000) {
            Unk_02006d14_Vec3 *q = &unk_68;
            *q = v;
            *pos = *q;
            unk_8e = ang;
            return FALSE;
        } else {
            func_0200f54c(this, v.x, v.z, ang);
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_02006d14::func_0200ef98(Unk_02006d14_Vec3 *out, s16 *ang)
{
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        return FALSE;
    }
    if (func_0200ec44(0x10)) {
        return FALSE;
    }
    out->y = unk_5c.y + 0;
    u8 buf;
    if (!func_0200e35c(this, &buf, &out->x, &out->z, ang)) {
        return FALSE;
    }
    if (buf == func_020b50e8()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200f004(u32 a, ...)
{
    Unk_02006d14_Vec3 v;
    func_0200f070(&v, this, &a);
    func_020e7870(&unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&unk_828, v.z, 0x800, 0x2000, 0x333);
}
