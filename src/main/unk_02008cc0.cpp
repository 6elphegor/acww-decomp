#include "types.h"

struct Unk_02006d14_Vec { s32 x, y, z; Unk_02006d14_Vec() {} };

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};

struct Unk_02008e48 {
    u8 unk_00, unk_01, unk_02;
    void func_02008e34(u8 *a, u8 *b, u8 *c);
    void func_02008e48(u8 a, u8 b, u8 c);
};

struct Unk_02008f5c { s16 unk_00; void func_02008f5c(s16 v); };
struct Unk_02008fa0 { s16 unk_00; void func_02008fa0(s16 v); };
struct Unk_02008e50_Pay {
    u8 unk_00, unk_01, unk_02;
    u8 pad_03[0xd];
    void set(u8 a, u8 b, u8 c) { unk_00 = a; unk_01 = b; unk_02 = c; }
};
struct Unk_02008e50_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008e50_Pay unk_0c;
};

struct Unk_02008f60_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008fa0 unk_0c;
    u8 pad_0e[0xe];
};

struct Unk_020093d4 {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    void func_020093d4(Unk_02006d14_Vec v, s32 a, s32 b);
};

struct Unk_0200944c {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    void func_0200944c(Unk_02006d14_Vec v, s32 a);
};

struct Unk_020093f4_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_0200944c unk_0c;
    u8 pad_1c[4];
};

struct Unk_02006d14_7d0 {
    union {
        struct { s16 unk_00; u8 unk_02, unk_03, unk_04, unk_05, unk_06; };
        struct { s32 w0; s32 w4; s32 w8; s32 wc; s32 w10; s32 w14; };
        struct { u16 h0, h2; u16 h4; u8 b6; };
    };
    void set_h2(s16 v) { h2 = v; }
};

struct Unk_02008ee4_Sub { s16 unk_00; s16 unk_02; void set(s16 v) { unk_02 = v; } };
struct Unk_020092c8_Flags { u8 f0 : 1; u8 f1 : 2; u8 f3 : 5; };
struct Unk_020092c8_Date { union { struct { u32 w0, w1; }; u8 b[8]; }; };
struct Unk_020092c8_Bits { u16 y : 7; u16 m : 4; u16 d : 5; };
struct Unk_020092c8_Loc { Unk_020092c8_Bits bits; u16 pad; Unk_020092c8_Date date; };

inline s32 Unk_0200905c_abs(s32 x) { return x < 0 ? -x : x; }

class Unk_02006d14 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ Unk_02006d14_Vec unk_5c;
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[8];
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ u8 pad_09c[0x230 - 0x9c];
    /* 0x230 */ u8 unk_230[0x2cc - 0x230];
    /* 0x2cc */ u8 unk_2cc[4];
    /* 0x2d0 */ s32 unk_2d0;
    /* 0x2d4 */ u32 unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[4];
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ u8 pad_2e0[0x59c - 0x2e0];
    /* 0x59c */ u8 unk_59c[0x700 - 0x59c];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_02006d14_7d0 unk_7d0;
    /* 0x7e8 */ u8 pad_7e8[4];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[8];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[4];
    /* 0x804 */ s32 unk_804;
    /* 0x808 */ u8 pad_808[0x818 - 0x808];
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u8 pad_81c[0x8e7 - 0x81c];
    /* 0x8e7 */ u8 unk_8e7;
    /* 0x8e8 */ u8 pad_8e8[4];
    /* 0x8ec */ Unk_02008e48 unk_8ec;

    BOOL func_02008cc0(s16 v);
    void func_02008cfc(Unk_02006d14_Item *item, u32 old);
    BOOL func_02008e50(u8 a, u8 b, u8 c, u32 d, s16 e);
    void func_02008e94();
    void func_02008eb4();
    void func_02008ee4();
    void func_02008f18();
    void func_02008f1c(Unk_02006d14_Item *item, u32 old);
    BOOL func_02008f60(s16 v, u32 a, u32 b);
    void func_02008fa4();
    void func_02008fd4(s32 f);
    void func_0200905c();
    void func_020090d8();
    s32 func_02009170();
    void func_020092c4();
    void func_020092c8(Unk_02006d14_Item *item, u32 old);
    BOOL func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void func_02009464();
    void func_02009484();
    void func_020095b8();

    BOOL func_0200ec44(u32 id);
    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    BOOL func_0200e248(void *msg);
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
};

extern "C" {
extern void *data_020cbb18;
extern u32 data_020c61f0[];
extern u16 data_020c61c0[];
extern s16 data_02135f44[];
extern u8 data_020e416c;

void func_0203d76c();
s32 func_02010358(Unk_02006d14 *, u32, u32, u32);
s32 func_0200f5b0(Unk_02006d14 *);
void func_0205e1a0(void *, u32, u32, u32);
BOOL func_020729bc(void *, s32);
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
void *func_0200e2e0(void *);
void func_0200e2c0(void *, u32, u32, u32);
void *func_0200e2d0(void *);
void func_02010914(Unk_02006d14 *);
void func_0201071c(Unk_02006d14 *);
void func_0200bd60(Unk_02006d14 *, u32, u32, s32);
void func_0200c358(Unk_02006d14 *, u32, u32, s32);
s32 func_0200ce98(Unk_02006d14 *, u32, u32, s32);
void func_0203da54();
void func_02010d98(void *, s32);
void func_02010a58(Unk_02006d14 *, void *);
void func_020109c4(Unk_02006d14 *);
void *func_0209c60c();
s32 func_0209c86c();
s32 func_02030814(u32);
s32 *func_0209c868(void *);
s32 func_01ffc5a4(s32);
s32 func_01ffcb0c(s32, s32);
void func_02010380(Unk_02006d14 *, u32, u32, u32);
void func_02053f20(void *);
void func_0200f32c(Unk_02006d14 *);
s32 func_020b50e8();
void func_02010e48(void *, s32);
s32 func_020e9688(void *);
s32 func_020e9650(void *, void *);
s32 func_02010d50();
s32 func_02010d68(s32, s32);
s32 func_020e7b98(s32, s32);
void func_02010a34(Unk_02006d14 *, void *);
BOOL func_0200e7c0(Unk_02006d14 *);
void *func_02010d20(Unk_02006d14 *);
void func_0209d498(void *);
u8 *func_020952c8();
void func_0209d164(void *);
void func_020987b0(void *, Unk_020092c8_Bits);
void func_0200ef08(Unk_02006d14 *);
void func_020946f0(u32, s32);
void func_0200f4c0(Unk_02006d14 *, u32);
void func_02010284(Unk_02006d14 *, u32, u32);
BOOL func_02056654(void *);
void func_02097520(s32);
u16 *func_02098744();
void func_0200eb58(Unk_02006d14 *, u32, u32);
void func_0200bd60(Unk_02006d14 *, u32, u32, s32);
}

void Unk_02008e48::func_02008e34(u8 *a, u8 *b, u8 *c) {
    *a = unk_00;
    *b = unk_01;
    *c = unk_02;
}

void Unk_02008e48::func_02008e48(u8 a, u8 b, u8 c) {
    unk_00 = a;
    unk_01 = b;
    unk_02 = c;
}

void Unk_02008f5c::func_02008f5c(s16 v) { unk_00 = v; }
void Unk_02008fa0::func_02008fa0(s16 v) { unk_00 = v; }

void Unk_020093d4::func_020093d4(Unk_02006d14_Vec v, s32 a, s32 b) {
    unk_00 = v;
    unk_0c = 0;
    unk_10 = a;
    unk_14 = b;
}

void Unk_0200944c::func_0200944c(Unk_02006d14_Vec v, s32 a) {
    unk_00 = v;
    unk_0c = a;
}

BOOL Unk_02006d14::func_02008cc0(s16 v) {
    u8 a, b, c;
    unk_8ec.func_02008e34(&a, &b, &c);
    return func_02008e50(a, b, c, 6, v);
}

BOOL Unk_02006d14::func_02008e50(u8 a, u8 b, u8 c, u32 d, s16 e) {
    Unk_02008e50_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x76, d, e);
    Unk_02008e50_Pay *pp = &m.unk_0c;
    pp->set(a, b, c);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_02008e94() {
    func_02008ee4();
    func_02010914(this);
    func_0201071c(this);
    func_02008eb4();
}

void Unk_02006d14::func_02008eb4() {
    if (unk_7d0.unk_00 == unk_8e) {
        func_0200bd60(this, 3, 5, -1);
        func_0200ec1c(6);
    }
}

void Unk_02006d14::func_02008ee4() {
    s16 t;
    Unk_02006d14_7d0 *p = &unk_7d0;
    p->h2 = t = unk_8e;
    func_02010d98(&t, unk_7d0.unk_00);
    func_02010a58(this, &t);
}

void Unk_02006d14::func_02008f18() {}

void Unk_02006d14::func_02008f1c(Unk_02006d14_Item *item, u32 old) {
    s16 *p = (s16 *)&item->unk_0c[0];
    Unk_02008f5c *s = (Unk_02008f5c *)&unk_7d0;
    if (!func_0200ec44(0x17)) {
        func_020103b4(1, 3, 0);
    }
    s->func_02008f5c(*p);
    func_0200ec30(6);
}

BOOL Unk_02006d14::func_02008f60(s16 v, u32 a, u32 b) {
    Unk_02008f60_Msg m;
    BOOL r;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x70, a, b);
    m.unk_0c.func_02008fa0(v);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_02008fa4() {
    s32 r = func_02009170();
    func_020090d8();
    func_0200905c();
    func_0201071c(this);
    func_02008fd4(r);
}

void Unk_02006d14::func_02008fd4(s32 f) {
    if (f) {
        if (func_0200ec44(0x18)) {
            if (unk_700) {
                func_020103b4(0, 3, 0);
            }
            unk_7f8 = func_02007c08(unk_7ec);
            func_0200ce98(this, 3, 1, -1);
            func_0203da54();
            func_0200ec1c(5);
            func_0200ec1c(0x18);
            func_0200ec1c(3);
        } else {
            func_0200bd60(this, 3, 5, -1);
            func_0200ec1c(5);
        }
    }
}

void Unk_02006d14::func_0200905c() {
    if (func_0200ec44(0x18)) {
        func_020109c4(this);
        void *r7 = func_0209c60c();
        if (func_0209c86c() == 1) {
            s32 *r4 = &unk_5c.y;
            s32 r6 = func_02030814(0);
            if (unk_5c.y >= r6) {
                s32 d = Unk_0200905c_abs(((s32 *)func_0209c868(r7))[2] - unk_5c.z);
                if (d < 0x1000) {
                    s32 m = func_01ffc5a4(0x1000 - d) * 6;
                    *r4 = *r4 + (m >> 5);
                } else {
                    *r4 = r6;
                }
            } else {
                *r4 = r6;
            }
        }
    } else {
        func_020109c4(this);
    }
}

void Unk_02006d14::func_020090d8() {
    if (unk_700 == 0) {
        func_02010914(this);
        return;
    }
    s32 r4 = unk_98;
    if (func_0200ec44(0x18)) r4 <<= 1;
    s32 q = func_01ffcb0c(r4, 0x3ae1);
    if (q <= unk_2d0) unk_2dc = q;
    if (r4 > 0x53f) {
        if (unk_700 != 2) func_02010380(this, 2, 3, 0);
    } else {
        if (unk_700 != 1) func_02010380(this, 1, 3, 0);
    }
    func_02053f20(unk_230);
    func_0200f32c(this);
}

s32 Unk_02006d14::func_02009170() {
    Unk_02006d14_7d0 *p = &unk_7d0;
    s32 *r6 = &p->wc;
    s32 sp0 = p->w10;
    s32 r7 = 0;
    Unk_02006d14_Vec d;
    Unk_02006d14_Vec *pv = &unk_5c;
    Unk_02006d14_Vec saved = *pv;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    if (func_0200ec44(0x18)) p->w0 = unk_5c.x;
    if (func_020b50e8() == 0x20 && p->w14 == 0x40 && saved.z >= p->w8) {
        p->w8 = saved.z;
    }
    d.x = p->w0 - unk_5c.x;
    d.z = p->w8 - unk_5c.z;
    t = func_01ffcb0c(0x4000, *r6);
    if (t < 0x1000) t = 0x1000;
    if (func_020e9688(&d) < t) {
        if (*r6 <= 0x333) {
            func_02010e48(&unk_5c, p->w0);
            func_02010e48(&unk_5c.z, p->w8);
            if (p->w0 == unk_5c.x && p->w8 == unk_5c.z) {
                *r6 = 0;
                r7 = 1;
            } else {
                *r6 = func_020e9650(&unk_5c, &saved);
                Unk_02006d14_Vec *pw = &unk_5c;
                *pw = saved;
            }
        } else {
            *r6 = func_02010d50();
        }
    } else {
        *r6 = func_02010d68(*r6, sp0);
    }
    ang = func_020e7b98(d.x, d.z);
    h = unk_8e;
    if (*r6) {
        func_02010d98(&h, ang);
        func_02010a58(this, &h);
    }
    s32 vt = func_01ffcb0c(*r6, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    func_02010a34(this, &v);
    return r7;
}

void Unk_02006d14::func_020092c4() {}

void Unk_02006d14::func_020092c8(Unk_02006d14_Item *item, u32 old) {
    Unk_02006d14_Vec *p = (Unk_02006d14_Vec *)&item->unk_0c[0];
    Unk_020092c8_Loc loc;
    s32 r6;
    func_020103b4(1, 3, 0);
    r6 = ((s32 *)p)[3];
    ((Unk_020093d4 *)&unk_7d0)->func_020093d4(*p, r6, old);
    func_0200ec30(5);
    unk_804 = 0;
    if (func_0200e7c0(this)) {
        if (func_020729bc(data_020cbb18, unk_7fc)) {
            if (func_020b50e8() == 0xc) {
                if (r6 == 0x666) {
                    loc.date.w0 = 0;
                    loc.date.w1 = 0;
                    func_0209d498(&loc.date);
                    { u8 *q0 = func_020952c8(); *q0 = *q0 & 0xf9; }
                    { u8 *q1 = func_020952c8(); if ((*q1 & 1) == 0) func_0209d164(&loc.date); }
                    loc.bits.y = loc.date.b[5];
                    loc.bits.m = loc.date.b[4];
                    loc.bits.d = loc.date.b[3];
                    func_020987b0(func_02010d20(this), loc.bits);
                }
            }
        }
    }
}

BOOL Unk_02006d14::func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c) {
    Unk_020093f4_Msg m;
    BOOL r;
    if (unk_7ec == 0x6f) return 0;
    func_0200e2e0(&m);
    func_0200e2c0(&m, 0x6f, b, c);
    m.unk_0c.func_0200944c(*v, a);
    r = func_0200e248(&m);
    func_0200e2d0(&m);
    return r;
}

void Unk_02006d14::func_02009464() {
    func_02010914(this);
    func_0200ef08(this);
    func_0201071c(this);
    func_02009484();
}

void Unk_02006d14::func_02009484() {
    Unk_02006d14_7d0 *r6 = &unk_7d0;
    u16 r4 = r6->h4;
    BOOL b = (data_020e416c == 1);
    if (b) {
        if (r4 >= 0x1369 && r4 <= 0x13a7) {
            func_020946f0(r4 - 0x1368, unk_7fc);
        } else {
            func_020946f0(0, unk_7fc);
        }
        unk_7f8 = func_02007c08(unk_7ec);
        if (r6->b6) func_0200bd60(this, 3, 5, -1);
        else func_0200c358(this, 3, 5, -1);
    } else {
        func_0200f4c0(this, 0x400);
        switch ((unk_2d4 << 4) >> 16) {
        case 8:
            func_020946f0(0, unk_7fc);
            break;
        case 0xb:
            if (r4 >= 0x1369 && r4 <= 0x13a7) func_020946f0(r4 - 0x1368, unk_7fc);
            break;
        case 0xe:
            func_02010284(this, 0, 6);
            break;
        }
        if (func_02056654(unk_2cc)) {
            unk_7f8 = func_02007c08(unk_7ec);
            if (r6->b6) func_0200bd60(this, 3, 5, -1);
            else func_0200c358(this, 3, 5, -1);
        }
    }
}

void Unk_02006d14::func_020095b8() {
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        func_02097520(unk_7fc);
        u16 *p = func_02098744();
        if (p) func_0200eb58(this, 3, *p);
    }
}

void Unk_02006d14::func_02008cfc(Unk_02006d14_Item *item, u32 old) {
    u8 *p = &item->unk_0c[0];
    u8 a = p[0];
    u8 b = p[1];
    u8 c = p[2];
    Unk_02006d14_7d0 *s;
    if ((u8)(a + 254) <= 1) func_0203d76c();
    s = &unk_7d0;
    s->unk_02 = a;
    if (a == 0) {
        if (old != 0x57) s->unk_03 = 3;
        else s->unk_03 = 0;
    } else {
        s->unk_03 = 0;
    }
    s->unk_04 = 0;
    s->unk_05 = b;
    s->unk_06 = c;
    unk_8ec.func_02008e48(a, b, c);
    func_02010358(this, data_020c61f0[a], 3, 0);
    unk_8e7 = 0;
    s32 r = func_0200f5b0(this);
    if (r != 3) {
        if (r == 4) func_0205e1a0(unk_59c, 9, 3, 1);
    } else {
        func_0205e1a0(unk_59c, 0x1f, 3, 1);
    }
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        u32 t = 0xd;
        switch (a) {
        case 0:
        case 1:
            t = 6;
            break;
        case 2:
        case 3:
            t = 6;
            func_02034d70(0x12);
            func_02034dd0(5, 0, 1);
            unk_818 = 7;
            break;
        default:
            func_02034dd0(0xc, 0, 1);
            unk_818 = 7;
            break;
        }
        u16 hv = data_020c61c0[a];
        s->unk_00 = hv;
        func_02034e10(t, hv, 0x7f, 1);
    }
}
