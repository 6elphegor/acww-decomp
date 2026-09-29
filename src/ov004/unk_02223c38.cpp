#include "types.h"

struct Unk_ov004_02223c38_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02223c38_V3c {
    s32 x, y, z;
    Unk_ov004_02223c38_V3c() {}
    ~Unk_ov004_02223c38_V3c() {}
};

struct Unk_ov004_02223c38_Rec {
    s32 x;
    s32 z;
    s16 h;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
};

class Unk_ov004_02223c38_Msg {
public:
    Unk_ov004_02223c38_Msg();
    ~Unk_ov004_02223c38_Msg();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0xc];
    u8 unk_0c;
    u8 pad_0d[0x1c - 0xd];
};

struct Unk_ov004_02223c38_Sub2cc {
    u32 unk_00;
};

struct Unk_ov004_02223c38_Bits16 {
    u16 lo : 7;
    u16 mid : 4;
    u16 hi : 5;
};

struct Unk_ov004_02223c38_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02223c38_V3 unk_5c;
    Unk_ov004_02223c38_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x1c0 - 0x90];
    u8 unk_1c0[0x3c];
    u8 unk_1fc;
    u8 pad_1fd[0x2cc - 0x1fd];
    Unk_ov004_02223c38_Sub2cc unk_2cc;
    u8 pad_2d0[0x7d0 - 0x2d0];
    Unk_ov004_02223c38_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8e6 - 0x800];
    u8 unk_8e6;
    u8 pad_8e7[0x8ec - 0x8e7];
    u8 unk_8ec[8];
};

typedef Unk_ov004_02223c38_Obj Obj;
typedef Unk_ov004_02223c38_V3 V3;
typedef Unk_ov004_02223c38_V3c V3c;
typedef Unk_ov004_02223c38_Rec Rec;
typedef Unk_ov004_02223c38_Msg Msg;
typedef Unk_ov004_02223c38_Bits16 Bits16;

extern "C" {
extern void *data_020cbb18;
extern u8 data_020e416c;
extern s16 data_02135f44[];

void func_0200ef08(Obj *o);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0200ecdc(Obj *o, u32 a);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010a58(Obj *o, s16 *a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_0200f3ec(V3 *out, Obj *o, V3 *pos, s16 *ang, s32 *d);
s32 func_02007c08(Obj *o, u32 a);
void func_0200bd60(Obj *o, u32 a, u32 b, s32 c);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
u16 *func_020952d0(void);
Bits16 *func_020952d8(void);
u8 *func_020952c8(void);
u32 func_02010d20(Obj *o);
u32 func_02010c74(Obj *o);
u32 func_020987c4(void);
s32 func_0200f23c(Obj *o);
u16 *func_0209c37c(s32 a, s32 b);
s32 func_02030814(u32 a);
void func_020106e0(Obj *o, V3 *v);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02051468(void);
void func_02051470(V3 *v);
void func_02051478(void);
s32 func_02051484(void);
void func_0205148c(V3 *v);

void func_ov004_02233074(V3 *p);
s32 func_ov004_022247b8(Obj *o, u32 a, s32 b, s32 c);
s32 func_ov004_0222459c(Rec *r, V3 *v, u32 c);

void func_ov004_02223c38(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b);
void func_ov004_02223c50(Obj *o);
void func_ov004_02223c6c(Obj *o);
void func_ov004_02223ca0(Obj *o);
void func_ov004_02223cb8(Obj *o, s32 a);
void func_ov004_02223ce4(Obj *o, Msg *m);
void func_ov004_02223d9c(u8 *p, u8 *out);
void func_ov004_02223da4(u8 *p, u32 v);
void func_ov004_02223da8(s32 *p, s32 x, s32 z);
s32 func_ov004_02223db0(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223df0(u8 *p, u32 v);
void func_ov004_02223df4(Obj *o);
void func_ov004_02223e08(Obj *o);
void func_ov004_02223e30(Obj *o, s32 a);
void func_ov004_02223e5c(Obj *o, Msg *m);
void func_ov004_02223e9c(u8 *p, u8 *out);
void func_ov004_02223ea4(u8 *p, u32 v);
s32 func_ov004_02223ea8(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_02223ee8(u8 *p, u32 v);
void func_ov004_02223eec(Obj *o);
void func_ov004_02223f08(Obj *o);
void func_ov004_02223f7c(Obj *o, s32 a);
void func_ov004_02223fa8(Obj *o, Msg *m);
void func_ov004_0222405c(u8 *p, u8 *out);
void func_ov004_02224064(u8 *p, u32 v);
void func_ov004_02224068(u8 *p, u32 v);
s32 func_ov004_02224070(Obj *o, u32 a, s32 b, s32 c);
void func_ov004_022240b0(u8 *p, u32 v);
void func_ov004_022240b4(Obj *o);
void func_ov004_022240d0(Obj *o);
void func_ov004_022241ac(Obj *o);
void func_ov004_022241dc(Obj *o);
void func_ov004_02224224(Obj *o);
void func_ov004_02224254(Obj *o, s32 a);
void func_ov004_02224284(Obj *o, Msg *m);
void func_ov004_0222437c(u8 *p, u8 *out);
void func_ov004_02224384(u8 *p, u32 v);
void func_ov004_02224388(Rec *r, s32 x, s32 z, s16 h, u8 a);
s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, s32 c, s32 d);
void func_ov004_022243e4(u8 *p, u32 a, u32 b);
void func_ov004_022243ec(Obj *o);
void func_ov004_0222440c(Obj *o);
void func_ov004_02224494(Obj *o);
void func_ov004_022244d0(void);
void func_ov004_022244d4(Obj *o, Msg *m);
}

static inline BOOL Unk_ov004_02224284_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_ov004_02223c38(Rec *t, s32 x, s32 z, s16 h, u8 a, u8 b) {
    t->x = x;
    t->z = z;
    t->h = h;
    t->unk_0a = a;
    t->unk_0b = b;
}

extern "C" void func_ov004_02223c50(Obj *o) {
    func_0200ef08(o);
    func_02010914(o);
    func_ov004_02223c6c(o);
}

extern "C" void func_ov004_02223c6c(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        if (func_ov004_022247b8(o, 0, 6, -1)) {
            o->unk_8e6 = 0;
        }
    }
}

extern "C" void func_ov004_02223ca0(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
}

extern "C" void func_ov004_02223cb8(Obj *o, s32 a) {
    u8 b;
    func_ov004_02223d9c(o->unk_8ec, &b);
    func_ov004_02223db0(o, b, 6, a);
}

extern "C" void func_ov004_02223ce4(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3c w;
    V3 v;
    if (c != 0) {
        k = 0xb;
    } else {
        k = 0xe;
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02010358(o, k, 3, 0);
    } else {
        func_02010358(o, k, 0, 0);
    }
    Rec *r = &o->unk_7d0;
    if (c == 0) {
        d = -0x2000;
    } else {
        d = 0x2000;
    }
    ang = o->unk_8e + 0x4000;
    func_0200f3ec(&v, o, &o->unk_5c, &ang, &d);
    s32 tx = v.x;
    w.x = tx;
    w.y = v.y;
    s32 tz = v.z;
    w.z = tz;
    func_ov004_02223da8((s32 *)r, tx, tz);
    func_ov004_02223da4(o->unk_8ec, c);
    func_0200ecdc(o, 0x435);
}

extern "C" void func_ov004_02223d9c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02223da4(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02223da8(s32 *p, s32 x, s32 z) {
    p[0] = x;
    p[1] = z;
}

extern "C" s32 func_ov004_02223db0(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xd, b, c);
    func_ov004_02223df0(&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02223df0(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02223df4(Obj *o) {
    func_02010914(o);
    func_ov004_02223e08(o);
}

extern "C" void func_ov004_02223e08(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        func_ov004_022247b8(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02223e30(Obj *o, s32 a) {
    u8 b;
    func_ov004_02223e9c(o->unk_8ec, &b);
    func_ov004_02223ea8(o, b, 6, a);
}

extern "C" void func_ov004_02223e5c(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    func_ov004_02223ea4(o->unk_8ec, c);
    s32 k;
    if (c != 0) {
        k = 0xd;
    } else {
        k = 0x10;
    }
    func_02010358(o, k, 3, 0);
    func_0200ecdc(o, 0x4a4);
}

extern "C" void func_ov004_02223e9c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02223ea4(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov004_02223ea8(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xc, b, c);
    func_ov004_02223ee8(&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_02223ee8(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02223eec(Obj *o) {
    func_0200ef08(o);
    func_02010914(o);
    func_ov004_02223f08(o);
}

extern "C" void func_ov004_02223f08(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u8 *p = (u8 *)&o->unk_7d0;
        if (p[0] < 3) {
            p[0] = p[0] + 1;
        }
        switch (func_02051468()) {
        case 0:
            break;
        case 1:
            if (p[0] >= 3) {
                func_ov004_02223db0(o, p[1], 6, -1);
            }
            break;
        case 2:
            if (p[0] >= 3) {
                func_ov004_02223ea8(o, p[1], 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_02223f7c(Obj *o, s32 a) {
    u8 b;
    func_ov004_0222405c(o->unk_8ec, &b);
    func_ov004_02224070(o, b, 6, a);
}

extern "C" void func_ov004_02223fa8(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 k;
    s32 d;
    s16 ang;
    V3 w;
    V3 v;
    func_ov004_02224068((u8 *)&o->unk_7d0, c);
    func_ov004_02224064(o->unk_8ec, c);
    if (c != 0) {
        k = 0xc;
    } else {
        k = 0xf;
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (c == 0) {
            d = -0x2000;
        } else {
            d = 0x2000;
        }
        ang = o->unk_8e + 0x4000;
        func_0200f3ec(&v, o, &o->unk_5c, &ang, &d);
        w.x = v.x;
        w.y = v.y;
        w.z = v.z;
        func_02051470(&w);
        func_020103b4(o, k, 3, 0);
    } else {
        func_020103b4(o, k, 3, 0);
    }
}

extern "C" void func_ov004_0222405c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02224064(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02224068(u8 *p, u32 v) {
    p[0] = 0;
    p[1] = v;
}

extern "C" s32 func_ov004_02224070(Obj *o, u32 a, s32 b, s32 c) {
    Msg m;
    m.func_0200e2c0(0xb, b, c);
    func_ov004_022240b0(&m.unk_0c, a);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_022240b0(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_022240b4(Obj *o) {
    func_ov004_022241dc(o);
    func_ov004_022241ac(o);
    func_ov004_022240d0(o);
}

extern "C" void func_ov004_022240d0(Obj *o) {
    if (func_02056654(&o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (o->unk_7d0.unk_0a != 0) {
            volatile u16 t[2];
            func_0200bd60(o, 0, 5, -1);
            *func_020952d0() = 0x4650;
            func_02010d20(o);
            t[0] = func_020987c4();
            t[1] = t[0];
            *(u16 *)func_020952d8() = t[1];
            s32 r5 = func_0200f23c(o);
            u16 *r7 = func_0209c37c(0, 0x50);
            u32 r4 = func_02010c74(o);
            Bits16 *r6 = func_020952d8();
            *r7 = r4 + r6->mid * 1000 + func_020952d8()->hi * 10;
            if (r5 == 0) {
                *func_020952c8() = 0x11;
            } else {
                *func_020952c8() = 0;
            }
        } else {
            func_0200ce98(o, 0, 1, -1);
        }
    }
}

extern "C" void func_ov004_022241ac(Obj *o) {
    V3 v;
    Rec *r = &o->unk_7d0;
    v.x = r->x;
    v.y = func_02030814(0);
    v.z = r->z;
    func_020106e0(o, &v);
}

extern "C" void func_ov004_022241dc(Obj *o) {
    func_02010914(o);
    if (func_020565e8(&o->unk_2cc, 0x15)) {
        func_0200ecdc(o, 0x4c6);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02051478();
        }
    }
}

extern "C" void func_ov004_02224224(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->z;
    func_02010a58(o, &r->h);
    o->unk_68.x = o->unk_5c.x;
    o->unk_68.y = o->unk_5c.y;
    o->unk_68.z = o->unk_5c.z;
}

extern "C" void func_ov004_02224254(Obj *o, s32 a) {
    u8 b;
    func_ov004_0222437c(o->unk_8ec, &b);
    func_ov004_0222439c(o, b, 0, 6, a);
}

extern "C" void func_ov004_02224284(Obj *o, Msg *m) {
    u8 *q0 = (u8 *)m;
    u8 *q = q0 + 0xc;
    u8 c = m->unk_0c;
    if (Unk_ov004_02224284_IsOne(data_020e416c)) {
        func_ov004_02233074(&o->unk_5c);
    }
    func_02010358(o, c ? 0xa : 9, 3, 0);
    s32 ang = o->unk_8e;
    Rec *r = &o->unk_7d0;
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p = &o->unk_5c;
    s32 x = p->x + dx;
    s32 z = p->z + dz;
    s16 h;
    if (c != 0) {
        h = ang + 0x4000;
    } else {
        h = ang - 0x4000;
    }
    func_ov004_02224388(r, x, z, h, q[1]);
    func_ov004_02224384(o->unk_8ec, c);
}

extern "C" void func_ov004_0222437c(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov004_02224384(u8 *p, u32 v) {
    *p = v;
}

extern "C" void func_ov004_02224388(Rec *r, s32 x, s32 z, s16 h, u8 a) {
    r->x = x;
    r->z = z;
    r->h = h;
    r->unk_0a = a;
}

extern "C" s32 func_ov004_0222439c(Obj *o, u32 a, u32 b, s32 c, s32 d) {
    Msg m;
    m.func_0200e2c0(0xa, c, *(s16 *)&d);
    func_ov004_022243e4(&m.unk_0c, a, b);
    return func_0200e248(o, &m);
}

extern "C" void func_ov004_022243e4(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" void func_ov004_022243ec(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov004_0222440c(o);
    func_ov004_02224494(o);
}

extern "C" void func_ov004_0222440c(Obj *o) {
    switch (func_02051484()) {
    case 0:
        return;
    case 1:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        break;
    case 2:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_ov004_022247b8(o, 0, 6, -1);
        return;
    }
    Rec *r = &o->unk_7d0;
    if (o->unk_1fc != 0) {
        func_ov004_022247b8(o, 0, 6, -1);
    } else {
        func_ov004_0222439c(o, r->unk_0c, 0, 6, -1);
    }
}

extern "C" void func_ov004_02224494(Obj *o) {
    V3 v;
    V3 *s = (V3 *)&o->unk_7d0;
    v.x = s->x;
    v.y = s->y;
    v.z = s->z;
    func_02010740(o, &v, 0x1000, 0x1000);
    func_02089040(o->unk_1c0);
}

extern "C" void func_ov004_022244d0(void) {
}

extern "C" void func_ov004_022244d4(Obj *o, Msg *m) {
    u8 c = m->unk_0c;
    s32 ang = o->unk_8e;
    Rec *r = &o->unk_7d0;
    V3 v;
    V3 w;
    {
        V3 *pp = &o->unk_5c;
        v.x = o->unk_5c.x;
        v.y = pp->y;
        v.z = pp->z;
    }
    s32 k = 0x2000;
    if (c == 0) {
        k *= -1;
    }
    s32 t[2];
    t[0] = data_02135f44[((u16)ang >> 4) * 2];
    t[1] = data_02135f44[((u16)ang >> 4) * 2 + 1];
    s32 dz = func_01ffcb0c(t[1], 0x1000);
    dz -= func_01ffcb0c(t[0], k);
    s32 dx = func_01ffcb0c(t[0], 0x1000);
    dx += func_01ffcb0c(t[1], k);
    V3 *p2 = &o->unk_5c;
    v.x = p2->x + dx;
    v.z = p2->z + dz;
    w.x = v.x;
    w.y = v.y;
    w.z = v.z;
    func_ov004_0222459c(r, &w, c);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0205148c(&v);
    }
}
