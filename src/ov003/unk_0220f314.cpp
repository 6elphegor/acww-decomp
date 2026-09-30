#include "types.h"

struct Unk_ov003_0220f314_V3 {
    s32 x, y, z;
    Unk_ov003_0220f314_V3() {}
};

struct Unk_ov003_0220f314_P2 {
    s32 x, z;
    u8 flag;
};

struct Unk_ov003_0220f314_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220f314_P2 unk_0c;
};

struct Unk_ov003_0220f314_Arg4 {
    u8 pad_00[0xc];
    u8 b[4];
};

struct Unk_ov003_0220f314_Pair {
    s32 a, b;
};

struct Unk_ov003_0220f314_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220f314_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220f314_Rec7d0 {
    Unk_ov003_0220f314_V3 v;
    s16 h;
};

struct Unk_ov003_0220f314_Obj : Unk_ov003_0220f314_P0, Unk_ov003_0220f314_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    s32 unk_154;
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x168 - 0x160];
    u8 unk_168;
    u8 pad_169[0x1c0 - 0x169];
    u8 unk_1c0[4];
    u8 pad_1c4[0x2cc - 0x1c4];
    u8 unk_2cc[8];
    u8 pad_2d4[0x6f0 - 0x2d4];
    s32 unk_6f0;
    s32 unk_6f4;
    s32 unk_6f8;
    u8 pad_6fc[0x7d0 - 0x6fc];
    Unk_ov003_0220f314_Rec7d0 unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[8];
};

class Unk_ov003_0220f314_Msg {
public:
    Unk_ov003_0220f314_Msg();
    ~Unk_ov003_0220f314_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    u8 unk_0c[0xc];
    u8 pad_18[4];
};

typedef Unk_ov003_0220f314_Obj Obj;
typedef Unk_ov003_0220f314_V3 V3;
typedef Unk_ov003_0220f314_Msg Msg;
typedef Unk_ov003_0220f314_P2 P2;
typedef Unk_ov003_0220f314_Arg Arg;
typedef Unk_ov003_0220f314_Arg4 Arg4;
typedef Unk_ov003_0220f314_Pair Pair;

extern "C" {
extern void *data_020cbb18;

s32 func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f504(Obj *o, s32 a);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_0200f660(Obj *o);
void func_0200f43c(V3 *out, Obj *o);
void func_0200f45c(V3 *out, Obj *o);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
void func_02089040(void *p);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
s32 func_02063b8c(s32 a);
s32 func_0203081c(V3 *a, s32 *b, s32 c);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_ov003_02205a00(Obj *o, u8 *pa, u8 *pb, s32 *out);
s32 func_ov003_0220eddc(Obj *o, s32 a, s32 *b, s32 c, s32 d);
s32 func_ov003_0220f064(Obj *o, s32 a, s32 b, s32 *c, s32 d, s32 e);
s32 func_ov003_0220f14c(Obj *o);

s32 func_ov003_0220f314(Obj *o);
s32 func_ov003_0220f33c(Obj *o);
void func_ov003_0220f370(Obj *o, s32 a);
s32 func_ov003_0220f3cc(Obj *o, Arg4 *a);
void func_ov003_0220f43c(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
void func_ov003_0220f45c(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f);
void func_ov003_0220f474(u8 *d, u32 x, u32 y, s32 *s);
s32 func_ov003_0220f484(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e);
void func_ov003_0220f4d4(u8 *d, u32 x, u32 y, s32 *s);
s32 func_ov003_0220f4e4(Obj *o);
s32 func_ov003_0220f500(Obj *o);
s32 func_ov003_0220f540(Obj *o);
s32 func_ov003_0220f570(Obj *o, s16 b);
s32 func_ov003_0220f57c(Obj *o);
s32 func_ov003_0220f590(Obj *o, s32 a, s16 b);
s32 func_ov003_0220f5c8(Obj *o);
s32 func_ov003_0220f668(Obj *o, u8 a, ...);
s32 func_ov003_0220f828(Obj *o);
s32 func_ov003_0220f860(Obj *o, s16 b);
s32 func_ov003_0220f86c(Obj *o);
s32 func_ov003_0220f880(Obj *o, s32 a, s16 b);
void func_ov003_0220f8b8(Obj *o);
s32 func_ov003_0220f97c(Obj *o);
s32 func_ov003_0220f9b8(Obj *o);
s32 func_ov003_0220f9ec(Obj *o);
s32 func_ov003_0220fa2c(Obj *o);
s32 func_ov003_0220fa3c(Obj *o, s32 a);
s32 func_ov003_0220fa70(Obj *o, Arg *a);
void func_ov003_0220fb78(void *p, s32 *a, s32 *b, u8 *c);
s32 func_ov003_0220fb90(void *p, s32 a, s32 b, u8 c);
void func_ov003_0220fba8(u8 *d, V3 *v, s32 a);
s32 func_ov003_0220fbb8(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e);
s32 func_ov003_0220fc00(Obj *o, s32 a, s16 b);
void func_ov003_0220fc88(u8 *d, s32 a, s32 b, u32 c);
}

extern "C" s32 func_ov003_0220f314(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 8)) {
        func_ov003_0220f14c(o);
    }
}

extern "C" s32 func_ov003_0220f33c(Obj *o) {
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            func_ov003_0220f14c(o);
        }
    }
}

extern "C" void func_ov003_0220f370(Obj *o, s32 a) {
    struct {
        u8 a, b, c, d, e;
    } l;
    Pair t;
    func_ov003_0220f43c(o->unk_8ec, &l.a, &l.b, &l.c, &l.d, &l.e);
    o->unk_168 = l.c;
    if (l.b == 0) {
        t.a = l.d;
        t.b = l.e;
        func_ov003_0220f484(o, l.a, 0, &t.a, 6, a);
    }
}

extern "C" s32 func_ov003_0220f3cc(Obj *o, Arg4 *a) {
    u8 *q = a->b;
    u8 b2 = q[2];
    u8 b3 = q[3];
    u32 b0 = a->b[0];
    u32 b1 = q[1];
    Pair t;
    t.a = b0;
    t.b = b1;
    func_ov003_0220f474((u8 *)&o->unk_7d0, b2, b3, &t.a);
    func_ov003_0220f45c(o->unk_8ec, b2, b3, o->unk_168, b0, b1);
    func_02010358(o, 0x45, 3, 0);
    if (b3) {
        func_0200ec30(o, 0x1c);
    }
}

extern "C" s32 func_ov003_0220f484(Obj *o, u32 a, u32 b, s32 *c, s32 d, s32 e) {
    Msg m;
    Pair t;
    m.func_0200e2c0(0x49, d, *(s16 *)&e);
    t.a = c[0];
    t.b = c[1];
    func_ov003_0220f4d4(m.unk_0c, a, b, &t.a);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220f4e4(Obj *o) {
    func_ov003_0220f540(o);
    func_0201071c(o);
    func_ov003_0220f500(o);
}

extern "C" s32 func_ov003_0220f500(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" s32 func_ov003_0220f540(Obj *o) {
    if (func_020565e8(o->unk_2cc, 6)) {
        func_0200ecdc(o, 0x83d);
    }
    func_02010914(o);
}

extern "C" s32 func_ov003_0220f570(Obj *o, s16 b) {
    return func_ov003_0220f590(o, 6, b);
}

extern "C" s32 func_ov003_0220f57c(Obj *o) {
    func_02010358(o, 0x46, 3, 0);
}

extern "C" s32 func_ov003_0220f590(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x48, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220f5c8(Obj *o) {
    func_02010914(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d50(o->unk_98, 0);
        func_02010a34(o, &t);
        func_ov003_0220f668(o, 0);
    } else {
        s32 t2;
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d50(o->unk_98, 0);
        func_02010a34(o, &t2);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
    func_ov003_0220f828(o);
}

extern "C" s32 func_ov003_0220f668(Obj *o, u8 a, ...) {
    u8 k;
    s32 v[2];
    s32 r;
    Pair t0, t1, t2, t3, t4, t5;
    if (o->unk_98 != 0) {
        return -1;
    }
    r = func_0200f660(o);
    k = 0;
    if (r != 0xb) {
        if (func_0200ec44(o, 0x14)) {
            if (r != 0xa) {
                k = 1;
            } else {
                k = 2;
            }
        }
    }
    v[0] = 0;
    v[1] = 0;
    r = func_ov003_02205a00(o, &a, &k, v);
    if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
        k = 0;
    }
    switch (r) {
    case 1:
        func_ov003_0220f590(o, 6, -1);
        break;
    case 2:
    case 3:
        if (k == 2) {
            t0.a = v[0];
            t0.b = v[1];
            func_ov003_0220eddc(o, 1, &t0.a, 6, -1);
        } else {
            t1.a = v[0];
            t1.b = v[1];
            BOOL f1 = k ? 1 : 0;
            BOOL f2 = r == 3 ? 1 : 0;
            func_ov003_0220f064(o, f1, f2, &t1.a, 6, -1);
        }
        break;
    case 4:
        if (k == 2) {
            t2.a = v[0];
            t2.b = v[1];
            func_ov003_0220eddc(o, 0, &t2.a, 6, -1);
        } else {
            t3.a = v[0];
            t3.b = v[1];
            func_ov003_0220f484(o, k ? 1 : 0, 0, &t3.a, 6, -1);
        }
        break;
    case 5:
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        break;
    case 6:
        if (k == 2) {
            t4.a = v[0];
            t4.b = v[1];
            func_ov003_0220eddc(o, 1, &t4.a, 6, -1);
        } else {
            t5.a = v[0];
            t5.b = v[1];
            func_ov003_0220f484(o, k ? 1 : 0, 1, &t5.a, 6, -1);
        }
        break;
    }
    return r;
}

extern "C" s32 func_ov003_0220f828(Obj *o) {
    V3 v;
    func_0200f43c(&v, o);
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040(o->unk_1c0);
}

extern "C" s32 func_ov003_0220f860(Obj *o, s16 b) {
    return func_ov003_0220f880(o, 6, b);
}

extern "C" s32 func_ov003_0220f86c(Obj *o) {
    func_020103b4(o, 0x43, 3, 0);
}

extern "C" s32 func_ov003_0220f880(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x47, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220f8b8(Obj *o) {
    s32 old = o->unk_98;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_ov003_0220fa2c(o);
        func_02010914(o);
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        func_ov003_0220f9b8(o);
        func_ov003_0220f9ec(o);
    } else {
        s32 t2;
        func_02010914(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t2);
        func_ov003_0220f97c(o);
    }
    if (old != 0 && o->unk_98 == 0) {
        func_02090330(0x2c, &o->unk_5c, &o->unk_8e, 0);
    }
}

extern "C" s32 func_ov003_0220f97c(Obj *o) {
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_ov003_0220f880(o, 6, -1);
    }
}

extern "C" s32 func_ov003_0220f9b8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        if (func_ov003_0220f668(o, 1) == 0) {
            func_ov003_0220f880(o, 6, -1);
        }
    }
}

extern "C" s32 func_ov003_0220f9ec(Obj *o) {
    V3 t;
    V3 *pv = &o->unk_7d0.v;
    t.x = pv->x;
    t.y = pv->y;
    t.z = pv->z;
    func_02010740(o, &t, 0xf33, 0x1000);
    func_02089040(o->unk_1c0);
}

extern "C" s32 func_ov003_0220fa2c(Obj *o) {
    return func_0200f504(o, o->unk_7d0.h);
}

extern "C" s32 func_ov003_0220fa3c(Obj *o, s32 a) {
    u8 c;
    s32 x, z;
    func_ov003_0220fb78(o->unk_8ec, &x, &z, &c);
    return func_ov003_0220fbb8(o, &x, &z, &c, 6, a);
}

static inline BOOL Unk_ov003_0220fa70_Ge(s32 v) {
    if (v >= 0x1000) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov003_0220fa70(Obj *o, Arg *a) {
    struct {
        s32 out;
        V3 v, A, B, C, D;
    } l;
    P2 *q = &a->unk_0c;
    u8 *rec = (u8 *)&o->unk_7d0;
    s32 x = a->unk_0c.x;
    s32 z = q->z;
    u8 flag = q->flag;
    func_ov003_0220fb90(o->unk_8ec, x, z, flag);
    func_02010358(o, 0x42, 3, 0);
    if (flag != 0) {
        l.v.x = x;
        l.v.z = z;
    } else {
        func_0200f43c(&l.A, o);
        if (Unk_ov003_0220fa70_Ge(func_0203081c(&l.A, &l.out, 0x19))) {
            func_0200f45c(&l.B, o);
            l.v.x = l.B.x;
            l.v.y = l.B.y;
            l.v.z = l.B.z;
        } else {
            func_0200f43c(&l.C, o);
            l.v.x = l.C.x;
            l.v.y = l.C.y;
            l.v.z = l.C.z;
        }
    }
    s32 ang = func_020e7b98(l.v.x - o->unk_6f0, l.v.z - o->unk_6f8);
    l.D.x = l.v.x;
    l.D.y = l.v.y;
    l.D.z = l.v.z;
    func_ov003_0220fba8(rec, &l.D, ang);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0200ec1c(o, 0x14);
        if (func_0200f660(o) != 0xb) {
            if (!func_02063b8c(8)) {
                func_0200ec30(o, 0x14);
            }
        }
    }
}

extern "C" void func_ov003_0220fb78(void *p, s32 *a, s32 *b, u8 *c) {
    func_02076a2c(p, a, b);
    u32 t = ((u8 *)p)[5];
    *c = t;
}

extern "C" s32 func_ov003_0220fb90(void *p, s32 a, s32 b, u8 c) {
    func_02076a6c(p, a, b);
    ((u8 *)p)[5] = c;
}

extern "C" s32 func_ov003_0220fbb8(Obj *o, s32 *a, s32 *b, u8 *c, s32 d, s32 e) {
    Msg m;
    m.func_0200e2c0(0x46, d, *(s16 *)&e);
    func_ov003_0220fc88(m.unk_0c, *a, *b, *c);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220fc00(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *p = m.unk_0c;
    m.func_0200e2c0(0x46, a, b);
    if (o->unk_144) {
        func_ov003_0220fc88(p, o->unk_154, o->unk_15c, 1);
    } else {
        func_ov003_0220fc88(p, o->unk_148, o->unk_150, o->unk_140 != 0 ? 1 : 0);
    }
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220f43c(u8 *s, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e) {
    *a = s[0];
    *b = s[1];
    *c = s[2];
    *d = s[3];
    *e = s[4];
}

extern "C" void func_ov003_0220f45c(u8 *d, u8 a, u8 b, u8 c, u8 e, u8 f) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
    d[4] = f;
}

extern "C" void func_ov003_0220f4d4(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}

extern "C" void func_ov003_0220fba8(u8 *d, V3 *v, s32 a) {
    Unk_ov003_0220f314_Rec7d0 *r = (Unk_ov003_0220f314_Rec7d0 *)d;
    r->v.x = v->x;
    r->v.y = v->y;
    r->v.z = v->z;
    r->h = a;
}

extern "C" void func_ov003_0220f474(u8 *d, u32 x, u32 y, s32 *s) {
    d[2] = x;
    d[3] = y;
    d[0] = s[0];
    d[1] = s[1];
}
