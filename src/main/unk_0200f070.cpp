#include "types.h"

struct Unk_0200f070_V3 { s32 x, y, z; };
struct Unk_0200f070_M { s32 v[12]; };
struct Unk_0200f6d4_V2 {
    s32 x, y;
    Unk_0200f6d4_V2() {}
    Unk_0200f6d4_V2(const Unk_0200f6d4_V2 &o) { x = o.x; y = o.y; }
};
struct Unk_0200f17c_Date { u16 a : 7; u16 b : 4; u16 c : 5; };
struct Unk_0200f660_S { u16 a; u16 b; };

extern s16 data_02135f44[];
extern s32 data_020c6c64;
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u32 data_020c6210[];

class Unk_02006d14;

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
void func_01ffb898(Unk_0200f070_V3 *v, Unk_0200f070_M *m, Unk_0200f070_V3 *out);
void func_0203ee38(Unk_0200f070_V3 *dst, Unk_0200f070_V3 *src);
BOOL func_020729bc(void *a, s32 b);
BOOL func_0200ec44(Unk_02006d14 *o, s32 id);
BOOL func_0202e8d4();
void func_020082e4(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void func_02008404(Unk_02006d14 *o, s32 a, s32 b);
void func_020987b0(s32 a, Unk_0200f17c_Date d);
void *func_0209c37c(s32 a, s32 b);
s32 func_02010c74(Unk_02006d14 *o);
BOOL func_0200e7c0(Unk_02006d14 *o);
Unk_0200f17c_Date *func_020952d8();
void func_02010d20(void *o);
Unk_0200f17c_Date func_020987c4();
void func_0209d498(void *p);
void func_02116048(void *a, void *b, s32 n);
void func_0209d3d0(void *a, void *b, s32 n);
void func_02003dec(void *a, void *b, s32 c);
Unk_0200f070_V3 *func_020b0cbc(Unk_0200f070_V3 *v);
BOOL func_020565e8(void *o, s32 id);
void func_02090330(s32 a, Unk_0200f070_V3 *v, s16 *r, s32 c);
void func_0200f3ec(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p);
void func_0200f43c(Unk_0200f070_V3 *out, Unk_02006d14 *o);
void func_0200f528(Unk_02006d14 *o, s32 a, s32 b);
void func_0204edd8(void *a, Unk_0200f070_V3 *v);
BOOL func_02010dbc(s16 *a, s32 b, s32 c, s32 d, s32 e);
s32 func_02010a58(void *o, s16 *a);
void func_02010d98(s16 *a);
s32 func_02010e48(void *a, s32 b);
s32 func_02010e68(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02010a7c(Unk_0200f660_S *s, Unk_02006d14 *o);
BOOL func_0204b2d4(Unk_0200f660_S *s);
s32 func_0204b25c(u16 *p);
s32 func_02061794(Unk_0200f660_S *s);
s32 func_0200f9bc(Unk_02006d14 *o);
void func_0204ee10(s32 *a, s32 *b, s32 c);
void func_ov004_022235ec(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void func_0200b76c(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void func_ov003_02211890(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b);
void func_ov003_02208a88(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020433ec(void *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
s32 func_020430b4(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 func_02042ff8(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 func_02042d10(s32 a);
s32 func_02042830(s32 a);
void func_02042820(s32 a);
void *func_0204262c(s32 a);
}

class Unk_02006d14 {
public:
    u8 pad_000[0x5c];
    Unk_0200f070_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0x2cc - 0xb4];
    u8 unk_2cc[4];
    u8 pad_2d0[0x694 - 0x2d0];
    Unk_0200f070_M unk_694;
    s32 unk_6c4[3];
    s32 unk_6d0[3];
    u8 pad_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7fc - 0x704];
    s32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    s32 unk_808;
    s32 unk_80c;
    s32 unk_810;
    s32 unk_814;
    u8 pad_818[4];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x838 - 0x820];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[4];

    BOOL func_0200f0fc();
    void func_0200f258();
    void func_0200f32c();
    s32 func_0200f478(s32 a);
    s32 func_0200f4c0(s32 a);
    s32 func_0200f504(s32 a);
    s32 func_0200f5b0();
    s32 func_0200f660();
    BOOL func_0200f6d4(s32 a, s32 b);
    s32 func_0200f7a0(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    BOOL func_0200f8f8(s32 a, s32 mode, s32 idx);
    s32 func_0200f870();
    void func_0200f8c0();
};

static inline void Unk_0200f070_Set(Unk_0200f070_V3 *r, s32 x, s32 y, s32 z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}

extern "C" void func_0200f070(Unk_0200f070_V3 *dst, Unk_02006d14 *o, s32 *p)
{
    Unk_0200f070_M m = o->unk_694;
    s32 tx = m.v[9], ty = m.v[10], tz = m.v[11];
    m.v[9] = m.v[10] = m.v[11] = 0;
    Unk_0200f070_M m2 = m;
    Unk_0200f070_V3 v, out;
    v.x = func_01ffcb0c(0x800, *p);
    v.y = func_01ffcb0c(-0x400, *p);
    v.z = 0;
    func_01ffb898(&v, &m2, &out);
    Unk_0200f070_V3 r;
    r.x = tx + out.x;
    r.y = ty + out.y;
    r.z = tz + out.z;
    func_0203ee38(dst, &r);
}

BOOL Unk_02006d14::func_0200f0fc()
{
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        if (func_0200ec44(this, 0xb) || func_0200ec44(this, 0x1b)) return FALSE;
        if (func_0202e8d4()) {
            func_020082e4(this, 0, 6, -1);
            return TRUE;
        }
        if ((s32)(*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) {
            func_02008404(this, 1, -1);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0200f17c(Unk_02006d14 *o, s32 a, Unk_0200f17c_Date *d)
{
    func_020987b0(a, *d);
    u16 *r = (u16 *)func_0209c37c(0, 0x50);
    *r = d->c * 10 + (d->b * 1000 + func_02010c74(o));
    if (!func_0200e7c0(o)) {
        *func_020952d8() = *d;
    }
}

extern "C" void func_0200f1e4(void *o, void *a, u8 *b)
{
    Unk_0200f17c_Date d0, d1, d2;
    func_02010d20(o);
    d0 = func_020987c4();
    d1 = d0;
    d2 = d1;
    func_0209d498(a);
    func_02116048(a, b, 8);
    b[5] = d2.a;
    b[4] = d2.b;
    b[3] = d2.c;
    func_0209d3d0(a, b, 0x3f);
}

extern "C" void func_0200f23c(void *o)
{
    u32 a[4];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    func_0200f1e4(o, a, (u8 *)&a[2]);
}

void Unk_02006d14::func_0200f258()
{
    u32 f = unk_b0;
    BOOL c = (f & 4) ? TRUE : FALSE;
    if (!(c && ((f & 2) ? TRUE : FALSE))) {
        if (func_0200ec44(this, 0xa)) {
            BOOL flag = unk_700 == 2;
            Unk_0200f070_V3 v;
            v.x = (unk_6c4[0] + unk_6d0[0]) >> 1;
            v.y = (unk_6c4[1] + unk_6d0[1]) >> 1;
            v.z = (unk_6c4[2] + unk_6d0[2]) >> 1;
            if (func_0200ec44(this, 0x19)) {
                func_02003dec(unk_838, func_020b0cbc(&v), flag);
            } else {
                func_02003dec(unk_87c, func_020b0cbc(&v), flag);
            }
        }
    }
}

void Unk_02006d14::func_0200f32c()
{
    if (func_020565e8(unk_2cc, 1) || func_020565e8(unk_2cc, 9)) {
        s16 rot[2];
        Unk_0200f070_V3 v;
        rot[0] = unk_8e;
        rot[1] = rot[0] + 0x8000;
        if (func_020565e8(unk_2cc, 9)) {
            v.x = unk_6c4[0];
            v.y = unk_6c4[1];
            v.z = unk_6c4[2];
        } else {
            v.x = unk_6d0[0];
            v.y = unk_6d0[1];
            v.z = unk_6d0[2];
        }
        v.y = unk_5c.y;
        if (unk_700 == 2) {
            func_02090330(0, &v, &rot[1], 0);
        }
        func_02090330(0x27, &v, &rot[0], 0);
        func_0200f258();
    }
}

extern "C" void func_0200f3ec(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p)
{
    s32 i;
    s32 s, c;
    *out = *in;
    i = (*ang >> 4) * 2;
    s = func_01ffcb0c(data_02135f44[i + 1], *p);
    c = func_01ffcb0c(data_02135f44[i], *p);
    out->x += c;
    out->z += s;
}

extern "C" void func_0200f43c(Unk_0200f070_V3 *out, Unk_02006d14 *o)
{
    func_0200f3ec(out, o, &o->unk_5c, (u16 *)&o->unk_8e, &data_020c6c64);
}

extern "C" void func_0200f45c(Unk_02006d14 *a, Unk_02006d14 *b)
{
    Unk_0200f070_V3 v;
    func_0200f43c(&v, b);
    func_0204edd8(a, &v);
}

s32 Unk_02006d14::func_0200f478(s32 a)
{
    s16 t = unk_8e;
    BOOL r = func_02010dbc(&t, -0x8000, a, 0x1770000, 0xc0000) == 0;
    func_02010a58(this, &t);
    return r;
}

s32 Unk_02006d14::func_0200f4c0(s32 a)
{
    s16 t = unk_8e;
    BOOL r = func_02010dbc(&t, 0, a, 0x1770000, 0xc0000) == 0;
    func_02010a58(this, &t);
    return r;
}

s32 Unk_02006d14::func_0200f504(s32 a)
{
    s16 t = unk_8e;
    func_02010d98(&t);
    return func_02010a58(this, &t);
}

extern "C" void func_0200f528(Unk_02006d14 *o, s32 a, s32 b)
{
    s32 *p = &o->unk_5c.x;
    func_02010e48(p, a);
    p += 2;
    func_02010e48(p, b);
}

extern "C" void func_0200f54c(Unk_02006d14 *o, s32 a, s32 b, s32 c)
{
    s32 *p = &o->unk_5c.x;
    func_02010e68(p, a, 0xe66, 0x4cd, 0x31);
    p += 2;
    func_02010e68(p, b, 0xe66, 0x4cd, 0x31);
    o->func_0200f504(c);
}

extern "C" void func_0200f594(Unk_02006d14 *o, s32 a, s32 b, s32 c)
{
    func_0200f528(o, a, b);
    o->func_0200f504(c);
}

s32 Unk_02006d14::func_0200f5b0()
{
    s32 f = func_0200f660();
    if (f <= 0) return 0;
    u16 v = f + 0x1368;
    if (v <= 0x136a) return 1;
    if (v <= 0x1373) return 2;
    if (v <= 0x1375) return 3;
    if (v <= 0x1377) return 4;
    if (v <= 0x1379) return 5;
    if (v <= 0x137b) return 6;
    if (v == 0x137c) return 7;
    if (v == 0x137d) return 8;
    if (v <= 0x137f) return 9;
    if (v <= 0x13a7) return 10;
    return 0;
}

s32 Unk_02006d14::func_0200f660()
{
    Unk_0200f660_S s;
    func_02010a7c(&s, this);
    if (func_0200ec44(this, 0)) {
        BOOL ok;
        if (func_0204b2d4(&s)) {
            s.b = 0xfff1;
            ok = func_0204b25c(&s.a) == func_0204b25c(&s.b);
        } else {
            ok = s.a == 0xfff1;
        }
        if (!ok) return func_02061794(&s) + 1;
    }
    return 0;
}

BOOL Unk_02006d14::func_0200f6d4(s32 a, s32 b)
{
    s32 t = func_0200f9bc(this);
    Unk_0200f6d4_V2 v;
    v.x = 0;
    v.y = 0;
    func_0204ee10(&v.x, &v.y, a);
    switch (t) {
    case 3:
    case 4:
    case 0x15:
    case 0x16:
        if (b) {
            func_ov004_022235ec(this, v, -2, 6, -1);
        } else {
            func_0200b76c(this, v, -1, 6, -1);
        }
        return TRUE;
    case 5:
        func_ov003_02211890(this, v, 6, -1);
        return TRUE;
    case 0x14:
        func_ov003_02208a88(this, v, 0, 6, -1);
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02006d14::func_0200f7a0(Unk_0200f6d4_V2 *p, s32 a, s32 b)
{
    s32 result;
    if (unk_808 == -1) {
        s32 x = p->x, y = p->y;
        s32 hx = x >> 4, hy = y >> 4;
        void *r = func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (r == NULL) {
            unk_81c = unk_81e = 0xfff1;
            result = 2;
        } else {
            unk_81c = unk_81e = *(u16 *)r;
            unk_808 = func_020433ec((void *)unk_7fc, *p, a, b, 0xfff1);
            if (unk_808 == -1) {
                result = 0;
            } else {
                unk_814 = func_0200f870();
                switch (unk_814) {
                case 0: result = 1; break;
                case 2: result = 0; break;
                default: result = 3; break;
                }
            }
        }
    } else {
        result = 1;
    }
    return result;
}

s32 Unk_02006d14::func_0200f870()
{
    s32 r = 0;
    unk_810 = 0;
    if (unk_808 != -1) {
        r = func_02042d10(unk_808);
        switch (r) {
        case 1:
        case 2:
            unk_810 = func_0200f9bc(this);
            func_02042820(unk_808);
            unk_808 = -1;
        }
    }
    return r;
}

void Unk_02006d14::func_0200f8c0()
{
    if (unk_80c != -1) {
        switch (func_02042830(unk_80c)) {
        case 1:
        case 2:
            func_02042820(unk_80c);
            unk_80c = -1;
        }
    }
}

BOOL Unk_02006d14::func_0200f8f8(s32 a, s32 mode, s32 idx)
{
    if (unk_808 == -1 && data_021c47c4 != NULL) {
        Unk_0200f6d4_V2 v;
        v.x = 0;
        v.y = 0;
        func_0204ee10(&v.x, &v.y, a);
        switch (mode) {
        case 0:
            unk_808 = func_020430b4((void *)unk_7fc, v, data_020c6210[idx]);
            break;
        case 1:
            unk_808 = func_020433ec((void *)unk_7fc, v, data_020c6210[idx], 0, 0xfff1);
            break;
        case 2:
            unk_808 = func_02042ff8((void *)unk_7fc, v, data_020c6210[idx]);
            break;
        }
    }
    return unk_808 != -1 ? TRUE : FALSE;
}
