#include "types.h"

struct Unk_ov003_0220b0f0_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220b0f0_Pair {
    s32 a, b;
    Unk_ov003_0220b0f0_Pair() {}
    Unk_ov003_0220b0f0_Pair(const Unk_ov003_0220b0f0_Pair &o) {
        a = o.a;
        b = o.b;
    }
};

struct Unk_ov003_0220b0f0_V3C : Unk_ov003_0220b0f0_V3 {
    Unk_ov003_0220b0f0_V3C() {}
    Unk_ov003_0220b0f0_V3C(const Unk_ov003_0220b0f0_V3C &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov003_0220b0f0_B3 {
    u8 a, b, c;
};

struct Unk_ov003_0220b0f0_RecB {
    u8 pad_00[0xc];
    Unk_ov003_0220b0f0_B3 unk_0c;
};

struct Unk_ov003_0220b0f0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220b0f0_S30 {
    s32 v[12];
};

struct Unk_ov003_0220b0f0_Rec {
    Unk_ov003_0220b0f0_V3 unk_00;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
};

class Unk_ov003_0220b0f0_Msg {
public:
    Unk_ov003_0220b0f0_Msg();
    ~Unk_ov003_0220b0f0_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

struct Unk_ov003_0220b0f0_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220b0f0_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x5c - 4];
    Unk_ov003_0220b0f0_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    s32 unk_98;
    u8 pad_9c[0xec - 0x9c];
};

struct Unk_ov003_0220b0f0_Obj : Unk_ov003_0220b0f0_P0, Unk_ov003_0220b0f0_Sec {
    u8 pad_f0[0x140 - 0xf0];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    u8 pad_14c[4];
    s32 unk_150;
    s32 unk_154;
    u8 pad_158[4];
    s32 unk_15c;
    u8 pad_160[0x2cc - 0x160];
    u8 unk_2cc[8];
    Unk_ov003_0220b0f0_Bits unk_2d4;
    u8 pad_2d8[0x458 - 0x2d8];
    s16 unk_458;
    s16 unk_45a;
    u8 pad_45c[0x59c - 0x45c];
    u8 unk_59c[0x28];
    u8 pad_5c4[0x694 - 0x5c4];
    Unk_ov003_0220b0f0_S30 unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    s32 unk_6f0;
    u8 pad_6f4[4];
    s32 unk_6f8;
    u8 pad_6fc[4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_0220b0f0_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    s32 unk_808;
    u8 pad_80c[0x818 - 0x80c];
    s32 unk_818;
    u8 pad_81c[0x8ec - 0x81c];
    u8 unk_8ec[2];
};

typedef Unk_ov003_0220b0f0_Obj Obj;
typedef Unk_ov003_0220b0f0_V3 V3;
typedef Unk_ov003_0220b0f0_V3C V3C;
typedef Unk_ov003_0220b0f0_RecB RecB;
typedef Unk_ov003_0220b0f0_Pair Pair;
typedef Unk_ov003_0220b0f0_Rec Rec;
typedef Unk_ov003_0220b0f0_Msg Msg;
typedef Unk_ov003_0220b0f0_S30 S30;
typedef Unk_ov003_0220b0f0_Sec Sec;

extern "C" {
extern void *data_020cbb18;

void func_02010914(Obj *o);
void func_0201071c(Obj *o);
s32 func_0200ef08(Obj *o);
void func_020109c4(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_02056654(void *p);
s32 func_020729bc(void *g, s32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
void func_0204ed8c(V3 *out, u32 a, u32 b);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
void func_0204edd8(V3 *out, V3 *in);
void func_02010740(Obj *o, V3 *v, s32 a, s32 b);
s32 func_02089040(void *p);
s32 func_02010d5c(s32 a, s32 b, s32 c);
void func_02010a34(Obj *o, s32 *a);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
void func_0200f45c(V3 *out, Obj *o);
void func_0200f504(Obj *o, s32 a);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, void *arg);
s32 func_0200e248(Obj *o, Msg *m);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_0203ef38(V3 *a, V3 *b);
void func_02099124(s16 *p);
s32 func_0206e7d4(u32 a);
s32 func_0206ec6c();
s32 func_0206ed18();
void func_0203e47c(Obj *o, Sec *s);
void func_0203d7f8();
s32 func_02063b8c(s32 a);

s32 func_ov003_0220af3c(Obj *o, V3C v, s32 a);
void func_ov003_02212034(S30 *p, s32 a);
void func_ov003_02227074(u8 id, s32 a);
void func_ov003_0222746c(u8 id, s32 a);
s32 func_ov003_02227434(u8 id);
V3 *func_ov003_02227320(u8 id);
void func_ov003_022261ec(u8 id, s16 *a, S30 *p, s32 f);
void func_ov003_0220bb60(u8 *p, s32 a);
void func_ov003_0220bb6c(u8 *p, s32 a);
s32 func_ov003_0220bb3c(u8 *p);
s32 func_ov003_0220bb30(u8 *p);

s32 func_ov003_0220b1f8(Obj *o, Pair p, s32 id, s16 e);
void func_ov003_0220b240(u8 *d, Pair v);
void func_ov003_0220b1d4(u8 *p, Pair *out);
void func_ov003_0220b1e0(u8 *p, Pair *v);
void func_ov003_0220b1ec(u8 *p, Pair *v);
void func_ov003_0220b41c(Obj *o);
void func_ov003_0220b330(Obj *o);
void func_ov003_0220b3dc(Obj *o);
void func_ov003_0220b2f4(Obj *o);
void func_ov003_0220b5a0(u8 *src, u8 *a, u8 *b, u8 *c);
void func_ov003_0220b5b4(u8 *p, u8 a, u8 b, u32 c);
void func_ov003_0220b5bc(Rec *r, V3C v, s32 c, u32 d);
s32 func_ov003_0220b5d8(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e);
void func_ov003_0220b6cc(u8 *p, u8 a, u8 b, u32 c);
namespace ovcall {
s32 func_ov003_0220b6f4(Obj *o);
}
void func_ov003_0220b6f4(Obj *o);
}

extern "C" void func_ov003_0220b0f0(Obj *o) {
    V3 v;
    u8 *p = (u8 *)&o->unk_7d0;
    func_0204ed8c(&v, p[0], p[1]);
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}

extern "C" s32 func_ov003_0220b130(Obj *o, s16 a) {
    Pair v;
    v.a = 0;
    v.b = 0;
    func_ov003_0220b1d4(o->unk_8ec, &v);
    return func_ov003_0220b1f8(o, v, 6, a);
}

extern "C" void func_ov003_0220b168(Obj *o, RecB *r) {
    Pair w;
    Pair w2;
    Unk_ov003_0220b0f0_B3 *q = &r->unk_0c;
    u32 b = q->b;
    u8 *p = (u8 *)&o->unk_7d0;
    u32 a = q->a;
    w.a = a;
    w.b = b;
    func_ov003_0220b1ec(p, &w);
    if (o->unk_808 == -1) {
        p[2] = 0;
    } else {
        p[2] = 1;
    }
    w2.a = a;
    w2.b = b;
    func_ov003_0220b1e0(o->unk_8ec, &w2);
    if (o->unk_700 == 0x4a) {
        func_020103b4(o, 0x4a, 3, 0);
    }
}

extern "C" void func_ov003_0220b1d4(u8 *p, Pair *out) {
    out->a = p[0];
    out->b = p[1];
}

extern "C" void func_ov003_0220b1e0(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}

extern "C" void func_ov003_0220b1ec(u8 *p, Pair *v) {
    p[0] = v->a;
    p[1] = v->b;
}

extern "C" s32 func_ov003_0220b1f8(Obj *o, Pair p, s32 id, s16 e) {
    Msg m;
    m.func_0200e2c0(0x5a, id, e);
    func_ov003_0220b240((u8 *)&m.unk_0c, p);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220b240(u8 *d, Pair v) {
    d[0] = v.a;
    d[1] = v.b;
}

extern "C" void func_ov003_0220b24c(Obj *o) {
    s32 r4 = o->unk_98;
    s32 t = func_02010d5c(r4, 0, 0x171);
    func_02010a34(o, &t);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220b41c(o);
        func_02010914(o);
        func_020109c4(o);
        func_0201071c(o);
        func_ov003_0220b330(o);
        func_ov003_0220b3dc(o);
    } else {
        func_02010914(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        func_ov003_0220b2f4(o);
    }
    if (r4 != 0 && o->unk_98 == 0) {
        func_02090330(0x2a, &o->unk_5c, &o->unk_8e, 0);
    }
}

extern "C" void func_ov003_0220b2f4(Obj *o) {
    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0x4a, 3, 0);
    }
}

static inline BOOL Unk_ov003_0220b330_IsZero(s32 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void func_ov003_0220b330(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (func_02056654(o->unk_2cc) != 0 || o->unk_700 == 0x4a) {
        if (o->unk_700 == 0x49) {
            func_020103b4(o, 0x4a, 3, 0);
        }
        if (o->unk_98 == 0) {
            if (r4->unk_0c == o->unk_8e) {
                V3C a;
                a.x = r4->unk_00.x;
                a.y = r4->unk_00.y;
                a.z = r4->unk_00.z;
                if (Unk_ov003_0220b330_IsZero(func_ov003_0220af3c(o, a, 1))) {
                    s32 x = 0;
                    s32 y = 0;
                    Pair w;
                    func_0204ee10(&x, &y, &a);
                    w.a = x;
                    w.b = y;
                    func_ov003_0220b1f8(o, w, 6, -1);
                }
            }
        }
    }
}

extern "C" void func_ov003_0220b3dc(Obj *o) {
    V3 v;
    Rec *r = &o->unk_7d0;
    v.x = r->unk_00.x;
    v.y = r->unk_00.y;
    v.z = r->unk_00.z;
    func_02010740(o, &v, 0xf33, 0x1000);
    func_02089040((u8 *)o + 0x1c0);
}

extern "C" void func_ov003_0220b41c(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    s32 h;
    if (o->unk_98 == 0 && r4->unk_0e == 0) {
        V3 t;
        func_0200f45c(&t, o);
        h = func_020e7b98(t.x - o->unk_6f0, t.z - o->unk_6f8);
        r4->unk_0c = h;
        r4->unk_0e = 1;
        r4->unk_00.x = t.x;
        r4->unk_00.y = t.y;
        r4->unk_00.z = t.z;
    } else {
        h = r4->unk_0c;
    }
    func_0200f504(o, h);
}

extern "C" s32 func_ov003_0220b488(Obj *o, s32 a) {
    u8 b[3];
    func_ov003_0220b5a0(o->unk_8ec, &b[0], &b[1], &b[2]);
    return func_ov003_0220b5d8(o, &b[0], &b[1], &b[2], 6, a);
}

extern "C" void func_ov003_0220b4c4(Obj *o, RecB *r) {
    Unk_ov003_0220b0f0_B3 *q = &r->unk_0c;
    Rec *rp = &o->unk_7d0;
    u32 a = q->a;
    u32 b = q->b;
    u32 c = q->c;
    V3 pos;
    V3 out;
    V3C t;
    s32 acc;
    func_ov003_0220b5b4(o->unk_8ec, a, b, c);
    func_02010358(o, 0x49, 3, 0);
    func_0204ed8c(&pos, a, b);
    if (c == 0) {
        s32 d = o->unk_98;
        acc = 0x2000;
        while (d != 0) {
            d -= 0x171;
            if (d > 0) {
                acc += d;
            } else {
                d = 0;
            }
        }
        func_0200f3ec(&out, o, &o->unk_5c, &o->unk_8e, &acc);
        pos.x = out.x;
        pos.y = out.y;
        pos.z = out.z;
        func_0204edd8(&pos, &pos);
    }
    s32 h = func_020e7b98(pos.x - o->unk_6f0, pos.z - o->unk_6f8);
    t.x = pos.x;
    t.y = pos.y;
    t.z = pos.z;
    func_ov003_0220b5bc(rp, t, h, c);
}

extern "C" void func_ov003_0220b5a0(u8 *src, u8 *a, u8 *b, u8 *c) {
    *a = src[0];
    *b = src[1];
    *c = src[2];
}

extern "C" void func_ov003_0220b5b4(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}

extern "C" void func_ov003_0220b5bc(Rec *r, V3C v, s32 c, u32 d) {
    r->unk_00.x = v.x;
    r->unk_00.y = v.y;
    r->unk_00.z = v.z;
    r->unk_0c = c;
    r->unk_0e = d;
    r->unk_0f = 0;
}

extern "C" s32 func_ov003_0220b5d8(Obj *o, u8 *a, u8 *b, u8 *c, s32 id, s32 e) {
    Msg m;
    m.func_0200e2c0(0x59, id, *(s16 *)&e);
    func_ov003_0220b6cc((u8 *)&m.unk_0c, *a, *b, *c);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220b620(Obj *o, s32 a, s16 b) {
    Msg m;
    u8 *d = (u8 *)&m.unk_0c;
    V3 v;
    s32 f;
    m.func_0200e2c0(0x59, a, b);
    if (o->unk_144 != 0) {
        s32 z = o->unk_15c;
        v.x = o->unk_154;
        v.y = 0;
        v.z = z;
        f = 1;
    } else {
        s32 z = o->unk_150;
        v.x = o->unk_148;
        f = 0;
        v.y = 0;
        v.z = z;
        if (o->unk_140 != 0) {
            f = 1;
        }
    }
    s32 x = 0;
    s32 y = 0;
    func_0204ee10(&x, &y, &v);
    func_ov003_0220b6cc(d, x, y, f);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220b6cc(u8 *p, u8 a, u8 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}

extern "C" void func_ov003_0220b6d4(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    ovcall::func_ov003_0220b6f4(o);
}

extern "C" void func_ov003_0220b6f4(Obj *o) {
    s32 flag = 0;
    s16 w[4];
    V3 pos;
    S30 cp;
    u32 code;
    s32 v;
    s16 h;
    u32 id;
    V3 *pv = &o->unk_5c;
    pos.x = pv->x;
    pos.y = pv->y;
    pos.z = pv->z;
    id = o->unk_7fc;
    if (o->unk_700 == 0x5d) {
        u32 m = o->unk_2d4.mid;
        if (m < 6) {
            h = 0x64 - m * 16;
        } else {
            h = 0;
        }
    } else {
        h = 0;
    }
    w[1] = h;
    w[2] = h;
    w[3] = h;
    cp = o->unk_694;
    func_ov003_02212034(&cp, 0);
    u8 *rec = (u8 *)&o->unk_7d0;
    u8 *p6 = o->unk_8ec;
    u8 *st = rec + 1;
    code = (u16)(rec[0] + 0x12b0);
    switch (rec[1]) {
    case 0:
        if (func_02056654(o->unk_2cc) == 0) {
            goto tail;
        }
        func_ov003_02227074(o->unk_7fc, 1);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 6, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            w[0] = code;
            func_02099124(w);
        }
        flag = 1;
        goto tail;
    case 1:
        if (o->unk_700 == 0x5d) {
            if (func_02056654(o->unk_2cc) == 0) {
                goto tail;
            }
            func_020103b4(o, 0x6c, 3, 3);
            func_0205e1a0(o->unk_59c, 0, 3, 0);
        }
        pos.x -= 0x400;
        pos.y += 0x1b34;
        pos.z += 0x1400;
        func_0203ef38(&pos, &pos);
        cp.v[9] = pos.x;
        cp.v[10] = pos.y;
        cp.v[11] = pos.z;
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            s32 s = o->unk_818;
            if (s == 5) {
                if (func_0206e7d4(code) == 0) {
                    goto tail;
                }
                o->unk_818 = 6;
                goto tail;
            } else if (s == 6) {
                if (func_0206ec6c() == 0) {
                    goto tail;
                }
                o->unk_818 = 0xf;
                if (func_0206ed18() != 0) {
                    if (func_0200ec44(o, 0x11)) {
                        func_0200ec1c(o, 0x11);
                        func_0203e47c(o, o);
                    }
                    func_0203d7f8();
                    o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                    func_0200ce98(o, 6, 1, -1);
                    return;
                }
            } else if (s < 0xf) {
                goto tail;
            }
            v = (s16)(func_02063b8c(0x2aaa) - 0x1555);
            func_ov003_0222746c(id, v);
            func_ov003_0220bb60(p6, v);
            if (func_0200ec44(o, 0x11)) {
                func_0200ec1c(o, 0x11);
                func_0203e47c(o, o);
            }
            func_0203d7f8();
            *st = 2;
            func_ov003_0220bb6c(p6, 2);
            func_020103b4(o, 0, 4, 4);
            return;
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (func_ov003_0220bb3c(p6) == 2) {
                func_ov003_0222746c(id, func_ov003_0220bb30(p6));
                *st = 2;
                func_020103b4(o, 0, 4, 4);
            }
            return;
        }
    case 2:
        if (func_ov003_02227434(id) != 3) {
            if (o->unk_458 == 0 && o->unk_45a == 0) {
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 6, 1, -1);
            } else {
                func_02010dbc(&o->unk_458, 0, 0x400, 0x1770000, 0xc0000);
                func_02010dbc(&o->unk_45a, 0, 0x400, 0x1770000, 0xc0000);
            }
            return;
        } else {
            V3 *q = func_ov003_02227320(id);
            V3 p3;
            V3 *pv2 = &o->unk_5c;
            p3.x = pv2->x;
            p3.y = pv2->y;
            p3.z = pv2->z;
            p3.y += 0x1b33;
            s32 yaw = func_020e7b98(q->x - p3.x, q->z - p3.z);
            s32 hh = func_020e7b98(q->y - p3.y, func_020e9650(q, &p3));
            o->unk_45a = yaw;
            if (hh >= 0x1800) {
                hh = 0x1800;
            }
            o->unk_458 = hh;
            return;
        }
    default:
    tail:
        func_ov003_022261ec(id, &w[1], &cp, flag);
    }
}
