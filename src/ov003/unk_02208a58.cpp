#include "types.h"

struct Unk_ov003_02208a58_V3 {
    s32 x, y, z;
};

struct Unk_ov003_02208a58_Pair {
    s32 a, b;
    Unk_ov003_02208a58_Pair(const Unk_ov003_02208a58_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_02208a58_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02208a58_Rec {
    s32 unk_00;
    Unk_ov003_02208a58_V3 unk_04;
    s16 unk_10;
    u8 unk_12;
    u8 pad_13;
};

class Unk_ov003_02208a58_Msg {
public:
    Unk_ov003_02208a58_Msg();
    ~Unk_ov003_02208a58_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_02208a58_V3 unk_0c;
    u8 pad_18[4];
};

struct Unk_ov003_02208a58_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_02208a58_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_02208a58_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

struct Unk_ov003_02208a58_Obj : Unk_ov003_02208a58_P0, Unk_ov003_02208a58_Sec {
    u8 pad_f0[0x2cc - 0xf0];
    u8 unk_2cc[8];
    Unk_ov003_02208a58_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    Unk_ov003_02208a58_V3 unk_628;
    u8 pad_634[0x6f0 - 0x634];
    Unk_ov003_02208a58_V3 unk_6f0;
    s32 unk_6fc;
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02208a58_Rec unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec;
};

typedef Unk_ov003_02208a58_Obj Obj;
typedef Unk_ov003_02208a58_V3 V3;
typedef Unk_ov003_02208a58_Pair Pair;
typedef Unk_ov003_02208a58_Rec Rec;
typedef Unk_ov003_02208a58_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u8 data_ov003_02258f00;
extern V3 data_ov003_02258f18;

void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_0201065c(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02056654(void *p);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_0200f478(Obj *o, s32 a);
void func_0200ec54(Obj *o, s32 a, V3 *v);
s32 func_020565e8(void *p, u32 a);
void func_0205f92c(void *p, u32 a);
void func_0205fae8(void *p, V3 *v);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_0203d7c4();
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_02007d30(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_020b8e60(s32 h);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_02095574(s32 *out, s32 a, u32 b);
s32 func_ov003_02205c28(Obj *o);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
void func_020902d4(s32 h, V3 *v, u32 z);
void func_020902f8(s32 h);
void func_0200f43c(V3 *out, Obj *o);
s32 func_0200f8f8(Obj *o, V3 *v, s32 a, s32 b);
void func_0200ede8(Obj *o, V3 *v);
void func_0200f504(Obj *o, s32 a);
s32 func_020e7b98(s32 a, s32 b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
u16 *func_0204eba0(void *grid, V3 *v, u32 a);
void func_ov003_02219b84(s32 h, V3 *v);
void func_ov003_02219b18(s32 h, V3 *v);
void func_0203e47c(Obj *o, Unk_ov003_02208a58_Sec *s);
s32 func_0200e248(Obj *o, Msg *m);

void func_ov003_02208ad8(u8 *d, Pair v, u32 c);
void func_ov003_02208bc0(Obj *o);
void func_ov003_02208b6c(Obj *o);
s32 func_ov003_02208d18(Obj *o, s32 a, s16 b);
void func_ov003_02208ec8(Obj *o);
void func_ov003_02208e38(Obj *o);
void func_ov003_02208d90(Obj *o);
void func_ov003_02209024(u8 *p, u8 *out);
void func_ov003_0220902c(u8 *p, u32 v);
s32 func_ov003_02209030(Obj *o, s32 a, s16 b);
void func_ov003_02209274(Obj *o);
void func_ov003_02209170(Obj *o);
void func_ov003_022090a8(Obj *o);
}

extern "C" void func_ov003_02208a58(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}

extern "C" void func_ov003_02208a64(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}

extern "C" void func_ov003_02208a70(u8 *r, u32 a, u32 b, V3 *v) {
    r[0xf] = a;
    r[0xe] = 0;
    *(u16 *)(r + 0xc) = b;
    ((V3 *)r)->x = v->x;
    ((V3 *)r)->y = v->y;
    ((V3 *)r)->z = v->z;
}

extern "C" s32 func_ov003_02208a88(Obj *o, Pair *p, u32 c, s32 b, s16 d) {
    Msg m;
    m.func_0200e2c0(0x66, b, d);
    func_ov003_02208ad8((u8 *)&m.unk_0c, *p, c);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02208ad8(u8 *d, Pair v, u32 c) {
    d[0] = v.a;
    d[1] = v.b;
    d[2] = c;
}

extern "C" void func_ov003_02208ae4(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_0201065c(o);
}

extern "C" void func_ov003_02208b00() {}

extern "C" void func_ov003_02208b04(Obj *o) {
    func_020103b4(o, 0, 3, 0);
}

extern "C" s32 func_ov003_02208b18(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x65, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02208b50(Obj *o) {
    func_ov003_02208bc0(o);
    func_0201071c(o);
    func_ov003_02208b6c(o);
}

extern "C" void func_ov003_02208b6c(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0x60, 3, 3);
        if (!func_020729bc(data_020cbb18, o->unk_7fc)) {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        }
    }
}

extern "C" void func_ov003_02208bc0(Obj *o) {
    V3 v;
    V3 w;
    func_0200f478(o, 0x400);
    func_02010914(o);
    if (o->unk_700 == 0x5f) {
        v.x = o->unk_6f0.x;
        v.y = o->unk_6f0.y;
        v.z = o->unk_6f0.z;
        v.y += 0xb00;
        v.z += 0x300;
        if (o->unk_2d4.mid < 0xb) {
            func_0200ec54(o, 0x851, &v);
        } else if (func_020565e8(o->unk_2cc, 0xb)) {
            func_0205f92c(o->unk_5c4, 9);
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            func_0205fae8(o->unk_5c4, &w);
            func_0200ecdc(o, 0x852);
            func_0200ecdc(o, 0x853);
            func_0200ec30(o, 9);
        }
    }
}

extern "C" s32 func_ov003_02208c94(Obj *o, s16 b) {
    return func_ov003_02208d18(o, 6, b);
}

extern "C" void func_ov003_02208ca0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc) && !func_0203d7c4()) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    } else {
        func_020b8e60(o->unk_7fc);
        func_02010358(o, 0x5f, 3, 0);
        func_0205e1a0(o->unk_59c, 0x22, 3, 1);
    }
}

extern "C" s32 func_ov003_02208d18(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x64, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02208d50(Obj *o) {
    func_ov003_02208ec8(o);
    func_0201071c(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02208e38(o);
    } else {
        func_ov003_02208d90(o);
    }
}

extern "C" void func_ov003_02208d90(Obj *o) {
    u8 b;
    s32 out;
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    u8 *p6 = &o->unk_8ec;
    func_ov003_02209024(p6, &b);
    if (b != 0 && func_02095574(&out, -1, o->unk_7fc) && out == 0x63) {
        func_ov003_02209030(o, 6, -1);
        s32 *p4 = &o->unk_7d0.unk_00;
        func_ov003_0220902c(p6, 1);
        if (o->unk_7d0.unk_00 != -1) {
            func_020902f8(o->unk_7d0.unk_00);
            *p4 = -1;
        }
    } else {
        if (func_02056654(o->unk_2cc)) {
            func_0200ce98(o, 3, 1, -1);
        }
    }
}

extern "C" void func_ov003_02208e38(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    u8 *p6 = &o->unk_8ec;
    func_ov003_0220902c(p6, 0);
    if (o->unk_2d4.mid >= 0x21 && func_ov003_02205c28(o)) {
        s32 *p4 = &o->unk_7d0.unk_00;
        func_ov003_0220902c(p6, 1);
        if (o->unk_7d0.unk_00 != -1) {
            func_020902f8(o->unk_7d0.unk_00);
            *p4 = -1;
        }
    }
}

extern "C" void func_ov003_02208ec8(Obj *o) {
    V3 v;
    V3 t;
    V3 t2;
    func_02010914(o);
    s32 k = o->unk_2d4.mid;
    s32 *h = &o->unk_7d0.unk_00;
    if (k >= 5 && k <= 0x23) {
        s32 z = o->unk_628.z;
        s32 y = o->unk_628.y;
        v.x = o->unk_628.x;
        v.y = y;
        v.z = z;
        func_0203ee38(&v, &v);
        if (*h == -1) {
            *h = func_02090330(0x26, &v, &o->unk_8e, 0);
            func_0200ecdc(o, 0x854);
            func_0200f43c(&t, o);
            data_ov003_02258f00 = 1;
            data_ov003_02258f18.x = t.x;
            data_ov003_02258f18.y = t.y;
            data_ov003_02258f18.z = t.z;
        } else {
            func_020902d4(*h, &v, 0);
        }
        switch (k) {
        case 0x14:
            func_0200f43c(&t2, o);
            v.x = t2.x;
            v.y = t2.y;
            v.z = t2.z;
            func_0200f8f8(o, &v, 1, 5);
            break;
        case 0x23:
            if (*h != -1) {
                func_020902f8(*h);
                *h = -1;
            }
            break;
        }
    }
}

extern "C" void func_ov003_02208fb0(Obj *o) {
    V3 t;
    if (o->unk_7d0.unk_00 != -1) {
        func_020902f8(o->unk_7d0.unk_00);
    }
    func_0200f43c(&t, o);
    data_ov003_02258f00 = 0;
    data_ov003_02258f18.x = t.x;
    data_ov003_02258f18.y = t.y;
    data_ov003_02258f18.z = t.z;
}

extern "C" s32 func_ov003_02208ff8(Obj *o, s16 b) {
    return func_ov003_02209030(o, 6, b);
}

extern "C" void func_ov003_02209004(Obj *o) {
    func_02010358(o, 0x61, 3, 0);
    o->unk_7d0.unk_00 = -1;
}

extern "C" void func_ov003_02209024(u8 *p, u8 *out) {
    *out = *p;
}

extern "C" void func_ov003_0220902c(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov003_02209030(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x63, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02209068(Obj *o) {
    V3 v;
    func_ov003_02209274(o);
    func_ov003_02209170(o);
    Rec *r = &o->unk_7d0;
    v.x = r->unk_04.x;
    v.y = r->unk_04.y;
    v.z = r->unk_04.z;
    func_0200ede8(o, &v);
    func_0201071c(o);
    func_ov003_022090a8(o);
}

extern "C" void func_ov003_022090a8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        Rec *r5 = &o->unk_7d0;
        if (o->unk_700 == 0x49) {
            func_02010358(o, 0x51, 3, 0);
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            u32 b = r5->unk_12;
            if (b == 1) {
                func_0200c358(o, 3, 5, -1);
            } else if (func_020729bc(data_020cbb18, o->unk_7fc) && b == 3) {
                if (func_0200ec44(o, 0x11)) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_02007d30(o, 3, 1, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
            }
        }
    }
}

extern "C" void func_ov003_02209170(Obj *o) {
    V3 v;
    V3 w;
    V3 x;
    s16 h;
    if (o->unk_700 != 0x49) {
        Rec *r = &o->unk_7d0;
        v.x = r->unk_04.x;
        v.y = r->unk_04.y;
        v.z = r->unk_04.z;
        h = o->unk_8e;
        s32 k = o->unk_2d4.mid;
        switch (k) {
        case 1:
            func_02090330(9, &v, &h, 0);
            break;
        case 5:
            if (func_020729bc(data_020cbb18, o->unk_7fc)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                func_ov003_02219b84(o->unk_7fc, &w);
            } else {
                u16 *p = func_0204eba0(data_021c47c4, &v, 0);
                BOOL f = FALSE;
                if (*p >= 0xfc && *p <= 0xfd) f = TRUE;
                if (f) {
                    x.x = v.x;
                    x.y = v.y;
                    x.z = v.z;
                    func_ov003_02219b18(o->unk_7fc, &x);
                }
            }
            func_0200ec1c(o, 0x1c);
            break;
        case 7:
            func_0200ecdc(o, 0x843);
            func_0200ec30(o, 9);
            break;
        case 0x15:
            func_02090330(0xa, &v, 0, 0);
            break;
        }
    }
    func_02010914(o);
}

extern "C" void func_ov003_02209274(Obj *o) {
    func_0200f504(o, o->unk_7d0.unk_10);
}

extern "C" void func_ov003_02209284(Obj *o) {
    volatile V3 v;
    V3 w;
    V3 x;
    void *g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        if (func_0200ec44(o, 0x1c)) {
            Rec *r = &o->unk_7d0;
            v.x = r->unk_04.x;
            v.y = r->unk_04.y;
            v.z = r->unk_04.z;
            if (func_020729bc(g, o->unk_7fc)) {
                w.x = v.x;
                w.y = v.y;
                w.z = v.z;
                func_ov003_02219b84(o->unk_7fc, &w);
            } else {
                x.x = v.x;
                x.y = v.y;
                x.z = v.z;
                func_ov003_02219b18(o->unk_7fc, &x);
            }
            func_0200ec1c(o, 0x1c);
        }
    }
}

extern "C" void func_ov003_02209310() {}

struct Unk_ov003_02209314_Arg {
    u8 pad_00[0xc];
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
};

extern "C" void func_ov003_02209314(Obj *o, Unk_ov003_02209314_Arg *a) {
    V3 v;
    u8 *q = (u8 *)&a->unk_0c;
    Rec *r4 = &o->unk_7d0;
    u32 b = q[4];
    func_0204ed8c(&v, q[2], q[3]);
    *(u16 *)&o->unk_7d0.unk_00 = a->unk_0c;
    r4->unk_12 = b;
    r4->unk_04.x = v.x;
    r4->unk_04.y = v.y;
    r4->unk_04.z = v.z;
    r4->unk_10 = func_020e7b98(v.x - o->unk_5c.x, v.z - o->unk_5c.z);
    switch (o->unk_700) {
    case 0x4a:
        func_02010358(o, 0x51, 3, 0);
        break;
    case 0x49:
        if (func_02056654(o->unk_2cc)) {
            func_02010358(o, 0x51, 3, 0);
        }
        break;
    default:
        func_02010358(o, 0x49, 3, 0);
        break;
    }
    func_0200ec1c(o, 0xd);
    func_0200ec30(o, 0x1c);
}
