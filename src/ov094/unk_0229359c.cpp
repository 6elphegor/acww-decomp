#include "types.h"

extern "C" {
s32 func_ov094_0229333c(void *o, u8 v);
void *func_ov094_02292fa4(void *o, s32 i);
void func_ov094_02292f58(void *o);
void func_ov094_02292dcc(void *bits, s32 i);
void func_ov094_02292dec(void *bits, s32 i);
void func_ov094_02292e0c(void *p);
BOOL func_ov094_02292430(u32 v);
BOOL func_ov094_02292450(u32 v);
u32 func_ov094_0229352c(void *o, s32 a);
s32 func_ov094_02293504(void *o, s32 a);
s32 func_ov094_02293f94(void *o, s32 a, s32 b);
s32 func_ov094_02294410(void *o, s32 a);
s32 func_ov094_02294400(void *o);
s32 func_ov094_022941ec(void *o, s32 a);
s32 func_ov094_0229403c(void *o, s32 a);
void func_ov094_02293f64(void *o, s32 a, s32 b, s32 c, s32 d);
void func_ov094_02293fc4(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_ov094_02293f34(void *o, s32 a, s32 b, s32 c);

s32 func_02087e0c(void *p);
s32 func_02087e14(void *p);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_02089f44(void *p);
void func_02089f30(void *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
void func_02094030(void *p);
void func_02094018(void *p);
void func_0206f9fc(void *p, s32 a);
void func_020510d8(void *a, void *b);
void func_02062564(void *a, void *b);
void func_02098e90(void *a, void *b);
void func_020b3544(s32 a, void *p);
void func_02089ac0(void *a, void *b);
s32 func_0204bcb0(void *p);
s32 func_0209750c();
s32 func_02098750(s32 a);
s32 func_02097f6c(s32 a, s32 b);
s32 func_02097eb0(s32 a, s32 b);
s32 func_02097e68(s32 a, s32 b);
void func_02002438(void *a, s32 b, s32 c, s32 d, s32 e);
void func_020b85f8(void *p);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_020641b4(const void *src, void *dst, s32 n);
s32 func_0206eed4(s32 a);
s32 func_02065578(s32 a);
s32 func_020655d0(s32 a);
void func_02088730(s32 a, const void *b, s32 c, s32 d, ...);
extern u32 data_ov094_022946c4[];
extern u8 data_ov094_022946f8[];
extern u8 data_ov094_02294848[];
extern u8 data_ov094_02294b80[];
extern u8 data_ov094_02294b94[];
extern u8 data_ov094_02294bac[];
}

void operator delete(void *p);

struct Unk_ov094_02294a40 {
    u8 unk_04[0x800];
    u8 unk_804;

    Unk_ov094_02294a40();
    virtual ~Unk_ov094_02294a40();
    u8 *func_ov094_02293ac8(s32 idx);
    u8 *func_ov094_02293b08(s32 idx);
    void func_ov094_02293b54();
};

struct Unk_ov094_02294a50 {
    u8 unk_04[0x180];
    Unk_ov094_02294a40 unk_184;
    u8 unk_98c[0xa8];
    u16 *unk_a34;
    u8 unk_a38[8];
    u8 unk_a40[8];
    u8 unk_a48[8];
    u32 unk_a50;
    u8 unk_a54[2];
    u8 unk_a56;
    u8 unk_a57;
    u8 unk_a58;
    u8 unk_a59;
    u8 unk_a5a[2];
    u8 unk_a5c;

    Unk_ov094_02294a50();
    virtual ~Unk_ov094_02294a50();
};

struct Unk_ov094_02293c04_Rec {
    u8 unk_00[0x26];
    volatile u8 unk_26;
    u8 unk_27;
};

struct Unk_ov094_02293ca0_Obj {
    s32 unk_00;
    u8 *volatile unk_04;
    u32 unk_08[2];
};

struct Unk_ov094_022937e4_Ent {
    s32 unk_00;
    u32 unk_04;
};

extern "C" {

void func_ov094_022935dc(Unk_ov094_02294a50 *o);
u8 func_ov094_02293c04(Unk_ov094_02293c04_Rec *o);
void func_ov094_02293c50(Unk_ov094_02293c04_Rec *o);
BOOL func_ov094_02293b90(u32 *bits, s32 i);
void func_ov094_02293bb4(u32 *bits, s32 i);
void func_ov094_02293bd4(u32 *bits, s32 i);
u8 func_ov094_02293abc(void *o, s32 i);
s32 func_ov094_02293c68(void *o, s32 h);
void func_ov094_02293ca0(Unk_ov094_02293ca0_Obj *o, u8 *p, s32 m, s32 n);
s32 func_ov094_02293730(void *o, u16 *p, s32 mode);
void func_ov094_022937e4(Unk_ov094_02294a50 *o, s32 k, u16 *p, s32 a);
void func_ov094_02293678(void *o, void *dst, u16 *p, s32 mode);
s32 func_ov094_02293890(void *o, s32 a, s32 b, s32 c);
u32 func_ov094_022938d4(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e);
s32 func_ov094_02293d9c(void *o, s32 i);
s32 func_ov094_02293df8(void *o, s32 i);

void func_ov094_0229359c(Unk_ov094_02294a50 *o, u32 v)
{
    if (func_ov094_0229333c(o, v)) {
        func_ov094_022935dc(o);
    } else if (o->unk_a56 != v) {
        o->unk_a56 = v;
        o->unk_a57 = 2;
    }
}

void func_ov094_022935dc(Unk_ov094_02294a50 *o)
{
    o->unk_a56 = 0x23;
}

s32 func_ov094_022935e8(Unk_ov094_02294a50 *o)
{
    return data_ov094_022946c4[o->unk_a57];
}

BOOL func_ov094_022935fc(Unk_ov094_02294a50 *o, s32 v)
{
    if (v == o->unk_a56) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov094_02293610(void *o, s32 i)
{
    return func_02087e0c(func_ov094_02292fa4(o, i)) + 0x60;
}

s32 func_ov094_02293624(void *o, s32 i)
{
    return func_02087e14(func_ov094_02292fa4(o, i)) + 0x80;
}

void func_ov094_02293638(void *o, s32 a, s32 b)
{
    u32 r = func_ov094_0229352c(o, b);
    volatile u16 t = 0xfff1;
    t = r;
    if (t != 0xfff1) {
        func_ov094_02293678(o, (void *)a, (u16 *)&t, func_ov094_02293504(o, b));
    }
}

void func_ov094_02293678(void *o, void *dst, u16 *p, s32 mode)
{
    u32 a[16];
    u32 b[10];
    u32 c[9];
    u32 d[7];
    func_0206fcc8(a);
    func_02089f44(b);
    func_0206267c(c);
    func_02094030(d);
    switch (mode) {
    case 1:
        func_0206f9fc(a, 0x18);
        func_020510d8(b, a);
        break;
    case 2:
        if (func_ov094_02292430(*p)) {
            func_02062564(c, p);
            func_020510d8(b, c);
        } else {
            func_02098e90(d, p);
            func_020b3544(0, d);
            func_0206f9fc(a, 0x40);
            func_020510d8(b, a);
        }
        break;
    case 0:
    default:
        func_02062564(c, p);
        func_020510d8(b, c);
        break;
    }
    func_02089ac0(dst, b);
    func_02094018(d);
    func_0206260c(c);
    func_02089f30(b);
    func_0206fca8(a);
}

s32 func_ov094_02293730(void *o, u16 *p, s32 mode)
{
    switch (mode) {
    case 1:
        return 0xb3;
    case 2:
        if (func_ov094_02292450(*p)) {
            return func_0204bcb0(p);
        }
        return 0xb4;
    default:
        return func_0204bcb0(p);
    }
}

void func_ov094_02293764(Unk_ov094_02294a50 *o, u16 *arr)
{
    s32 i;
    s32 k;
    s32 z = 0;
    k = 0xf;
    i = 0;
    do {
        u16 v = arr[i];
        func_ov094_022937e4(o, k, &v, z);
        k++;
        i++;
    } while (i < 0xf);
    o->unk_a34 = arr;
}

void func_ov094_022937a0(Unk_ov094_02294a50 *o)
{
    s32 h = func_02098750(func_0209750c());
    s32 base = func_02097f6c(h, 0);
    s32 i;
    s32 k;
    k = 0;
    i = 0;
    do {
        func_ov094_022937e4(o, k, (u16 *)(base + i * 2), func_02097eb0(h, i));
        k++;
        i++;
    } while (i < 0xf);
}

void func_ov094_022937e4(Unk_ov094_02294a50 *o, s32 k, u16 *p, s32 a)
{
    if (*p == 0xfff1) {
        func_ov094_02292dcc(o->unk_a38, k);
    } else {
        func_ov094_02292dec(o->unk_a38, k);
        s32 r = func_ov094_02293730(o, p, a);
        Unk_ov094_022937e4_Ent *e = (Unk_ov094_022937e4_Ent *)func_ov094_02292fa4(o, k);
        s32 c = (u32)(e->unk_04 << 22) >> 22;
        u8 *q = o->unk_184.func_ov094_02293b08(r);
        func_02002438(q, 8, c, c, c + 1);
        func_02002438(q + 0x400, 8, c + 0x20, c + 0x20, c + 0x21);
        u32 n = func_ov094_02293abc(&o->unk_184, r);
        e->unk_04 = (e->unk_04 & 0xffff0fff) | ((n & 0xf) << 12);
    }
}

s32 func_ov094_02293890(void *o, s32 a, s32 b, s32 c)
{
    s32 a1 = a - 0x7c;
    s32 b1 = b - 0x74;
    s32 b2 = b - 0x5c;
    void *e = func_ov094_02292fa4(o, c);
    s32 x = func_02087e14(e);
    if (a - 0x94 < x && x < a1) {
        s32 y = func_02087e0c(e);
        if (b1 < y && y < b2) {
            return TRUE;
        }
    }
    return FALSE;
}

u32 func_ov094_022938d4(void *o, s32 a, s32 b, s32 c, s32 d, u8 s, u8 e)
{
    s32 i = s;
    for (; i <= e; i++) {
        void *p = func_ov094_02292fa4(o, i);
        s32 x = func_02087e14(p);
        if (a < x && x < c) {
            s32 y = func_02087e0c(p);
            if (b < y && y < d) {
                return (u8)i;
            }
        }
    }
    return 0x23;
}

s32 func_ov094_02293928(void *o, s32 a, s32 b)
{
    return func_ov094_02293890(o, a, b, 0x21);
}

u32 func_ov094_02293938(void *o, s32 a, s32 b)
{
    if (b > 0x68) {
        return 0x23;
    }
    return func_ov094_022938d4(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0xf, 0x1d);
}

u32 func_ov094_02293968(void *o, s32 a, s32 b)
{
    if (b < 0x68) {
        return 0x23;
    }
    return func_ov094_022938d4(o, a - 0x94, b - 0x74, a - 0x7c, b - 0x5c, 0, 0xe);
}

void func_ov094_02293998(void *o)
{
    func_ov094_02292f58(o);
}

void func_ov094_022939a0(Unk_ov094_02294a50 *o)
{
    func_ov094_02292f58(o);
    u8 v = o->unk_a57;
    if (v != 0) {
        o->unk_a57 = v - 1;
    }
}

void func_ov094_022939c0(Unk_ov094_02294a50 *o, u32 a)
{
    o->unk_184.func_ov094_02293b54();
    func_ov094_02292e0c(o->unk_a38);
    func_ov094_02292e0c(o->unk_a40);
    func_ov094_02292e0c(o->unk_a48);
    o->unk_a56 = 0x23;
    o->unk_a57 = 0;
    o->unk_a50 = a;
    o->unk_a34 = 0;
    o->unk_a59 = 0xa;
    o->unk_a5c = 1;
}

u8 func_ov094_02293abc(void *o, s32 i)
{
    return data_ov094_022946f8[i];
}

BOOL func_ov094_02293b90(u32 *bits, s32 i)
{
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & bits[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

void func_ov094_02293bb4(u32 *bits, s32 i)
{
    bits[i >> 5] &= ~(1 << (i & 0x1f));
}

void func_ov094_02293bd4(u32 *bits, s32 i)
{
    bits[i >> 5] |= (1 << (i & 0x1f));
}

void func_ov094_02293bf4(u32 *bits)
{
    s32 i;
    for (i = 0; i < 2; i++) {
        bits[i] = 0;
    }
}

u8 func_ov094_02293c04(Unk_ov094_02293c04_Rec *o)
{
    u32 v = o->unk_26;
    if (v >= 4) {
        return 10;
    }
    return data_ov094_02294848[v];
}

BOOL func_ov094_02293c1c(Unk_ov094_02293c04_Rec *o)
{
    if (o->unk_26 != 0) {
        o->unk_26 = o->unk_26 - 1;
        o->unk_27 = func_ov094_02293c04(o);
        return FALSE;
    }
    func_ov094_02293c50(o);
    return TRUE;
}

void func_ov094_02293c50(Unk_ov094_02293c04_Rec *o)
{
    o->unk_27 = 10;
}

void func_ov094_02293c58(Unk_ov094_02293c04_Rec *o)
{
    o->unk_26 = 4;
    o->unk_27 = 10;
}

s32 func_ov094_02293c68(void *o, s32 h)
{
    s32 r = func_02065578(h);
    if (r == 0) {
        return -1;
    }
    s32 t = (r - 1) * 2;
    if (func_020655d0(h) != 0xfff1) {
        t = t + 1;
    }
    return t;
}

void func_ov094_02293ca0(Unk_ov094_02293ca0_Obj *o, u8 *p, s32 m, s32 n)
{
    s32 i;
    o->unk_04 = p;
    u8 *q = o->unk_04;
    for (i = 0; i < n; i++) {
        if (func_ov094_02293c68(o, (s32)q) != -1) {
            func_ov094_02293bd4(o->unk_08, m);
        } else {
            func_ov094_02293bb4(o->unk_08, m);
        }
        q += 0xf4;
        m++;
    }
}

void func_ov094_02293cf0(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0x23, 0xa);
}

void func_ov094_02293d04(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0xa, 0x19);
}

void func_ov094_02293d18(void *o, u8 *p)
{
    func_ov094_02293ca0((Unk_ov094_02293ca0_Obj *)o, p, 0x2d, 0xa);
}

void func_ov094_02293d2c(Unk_ov094_02293ca0_Obj *o)
{
    s32 q = func_02097e68(func_02098750(func_0209750c()), 0);
    s32 k = 0;
    s32 i = 0;
    do {
        if (func_ov094_02293c68(o, q) != -1) {
            func_ov094_02293bd4(o->unk_08, k);
        } else {
            func_ov094_02293bb4(o->unk_08, k);
        }
        q += 0xf4;
        k++;
        i++;
    } while (i < 10);
}

BOOL func_ov094_02293d80(Unk_ov094_02293ca0_Obj *o, s32 i)
{
    if (func_ov094_02293b90(o->unk_08, i) == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov094_02293d9c(void *o, s32 i)
{
    if (i >= 0 && i <= 9) {
        return (i >> 1) * 0x18 + 0x3c;
    }
    if (i >= 0xa && i <= 0x22) {
        s32 n;
        i -= 0xa;
        n = 0;
        while (i >= 5) {
            i -= 5;
            n++;
        }
        return n * 0x18 + 0x3c;
    }
    if (i >= 0x23 && i <= 0x2c) {
        i -= 0x23;
        return (i >> 1) * 0x18 + 0x3c;
    }
    if (i >= 0x2d && i <= 0x36) {
        i -= 0x2d;
        return (i >> 1) * 0x18 + 0x3c;
    }
    return 0;
}

s32 func_ov094_02293df8(void *o, s32 i)
{
    if (i >= 0 && i <= 9) {
        if (i & 1) {
            return 0xe4;
        }
        return 0xcc;
    }
    if (i >= 0xa && i <= 0x22) {
        i -= 0xa;
        while (i >= 5) {
            i -= 5;
        }
        return data_ov094_02294bac[i];
    }
    if (i >= 0x23 && i <= 0x2c) {
        i -= 0x23;
        if (i & 1) {
            return 0x84;
        }
        return 0x6c;
    }
    if (i >= 0x2d && i <= 0x36) {
        i -= 0x2d;
        if (i & 1) {
            return 0x84;
        }
        return 0x6c;
    }
    return 0;
}

void func_ov094_02293e64(Unk_ov094_02294a50 *o, s32 a1, s32 idx, s32 x, s32 y0)
{
    volatile s32 t;
    s32 y;
    x += func_ov094_02293df8(o, idx);
    y = y0 + func_ov094_02293d9c(o, idx);
    if (x >= -0x18) {
        if (func_ov094_02293b90((u32 *)((u8 *)o + 0x10), idx) != 0) {
            func_ov094_02293f94(o, x, y);
        }
        if (func_ov094_02293b90((u32 *)((u8 *)o + 8), idx) != 0) {
            if (func_ov094_02294410(o, idx) != 0) {
                s32 w = func_ov094_02294400(o);
                x += w;
                y += w;
            }
            if (func_ov094_022941ec(o, (u8)idx) != 0 && func_02065578(a1) == 4) {
                t = 0xe;
            } else {
                t = func_ov094_0229403c(o, a1);
            }
            func_ov094_02293fc4(o, x, y, t, a1, 0);
            func_ov094_02293f64(o, x, y, t, 0);
            if (func_ov094_02294410(o, idx) != 0) {
                func_ov094_02293f34(o, x, y, 0);
            }
        }
    }
}

}

Unk_ov094_02294a50::~Unk_ov094_02294a50() {}

Unk_ov094_02294a50::Unk_ov094_02294a50()
{
    u8 *e = unk_98c;
    do {
        func_020b85f8(e);
        e += 0x38;
    } while (e != (u8 *)&unk_a34);
}

u8 *Unk_ov094_02294a40::func_ov094_02293ac8(s32 idx)
{
    char buf[0x28];
    func_020639e8(buf, (const char *)data_ov094_02294b80);
    func_020641b4(buf, unk_04, 0x800);
    u8 *r = unk_04;
    r += func_0206eed4(idx) << 5;
    unk_804 = 0xff;
    return r;
}

u8 *Unk_ov094_02294a40::func_ov094_02293b08(s32 idx)
{
    char buf[0x28];
    s32 page = idx >> 4;
    if (page != unk_804) {
        unk_804 = page;
        func_020639e8(buf, (const char *)data_ov094_02294b94, page);
        func_020641b4(buf, unk_04, 0x800);
    }
    u8 *r = unk_04;
    r += func_0206eed4(idx & 0xf) << 5;
    return r;
}

void Unk_ov094_02294a40::func_ov094_02293b54()
{
    unk_804 = 0xff;
}

Unk_ov094_02294a40::~Unk_ov094_02294a40() {}

Unk_ov094_02294a40::Unk_ov094_02294a40() {}
