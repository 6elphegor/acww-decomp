#include "types.h"

struct Unk_ov003_02211818_V3 {
    s32 x, y, z;
    Unk_ov003_02211818_V3() {}
};

struct Unk_ov003_02211818_Blk {
    s32 v[12];
};

struct Unk_ov003_02211818_Pair {
    s32 a, b;
};

struct Unk_ov003_02211818_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_02211818_Rec {
    u16 unk_00;
    u8 pad_02[2];
    s32 unk_04;
    void *unk_08;
    u8 unk_0c;
    u8 unk_0d;
};

struct Unk_ov003_02211818_Obj {
    u8 pad_00[0xc4];
    Unk_ov003_02211818_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0x294 - 0xd2];
    Unk_ov003_02211818_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[4];
    Unk_ov003_02211818_Bits unk_2d0;
    Unk_ov003_02211818_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[0x28];
    u8 unk_5c4[0x64];
    u8 pad_628[0x694 - 0x628];
    Unk_ov003_02211818_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov003_02211818_Rec unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    s32 unk_7ec;
    u8 pad_7f0[0x7fc - 0x7f0];
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[4];
};

class Unk_ov003_02211818_Msg {
public:
    Unk_ov003_02211818_Msg();
    ~Unk_ov003_02211818_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    u8 unk_0c[0x10];
};

typedef Unk_ov003_02211818_Obj Obj;
typedef Unk_ov003_02211818_V3 V3;
typedef Unk_ov003_02211818_Blk Blk;
typedef Unk_ov003_02211818_Msg Msg;
typedef Unk_ov003_02211818_Rec Rec;
typedef Unk_ov003_02211818_Pair Pair;

struct Unk_ov003_02211818_T {
    u16 a;
    s16 b, c, d;
};

extern "C" {
extern void *data_020cbb18;

s32 func_0200e248(Obj *o, Msg *m);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0200f5b0(Obj *o);
s32 func_020729bc(void *g, u32 a);
void func_0200bc78(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
void func_02010914(Obj *o);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200e7f4(Obj *o);
void func_020109c4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);
void func_020902f8(s32 a);
void func_020902d4(s32 a, V3 *b, u32 c, u32 d);
s32 func_02090268(s32 a, V3 *b, u32 c, u32 d);
void func_0203ee38(V3 *a, V3 *b);
void func_ov003_02223450(V3 *v, s32 a);
void func_ov003_022261ec(u8 id, s16 *a, Blk *p, s32 f);
void func_ov003_02227074(u8 a, s32 b);
void func_ov003_02227248(u8 a, u8 b);
s32 func_0204f3e4(void *a, s32 b, V3 *c, V3 *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0204f3b4(void *a);
void *func_0204f49c();
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
s32 func_02133150(s32 a, s32 b);
s32 func_02132a4c(s32 a);
float func_02132594(float a, float b);
void func_01ffb898(V3 *a, Blk *b, V3 *c);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020947c0(u16 *p, u32 a);
Obj *func_02095774(u32 a);
void *func_020947f0(u32 a);
u16 func_0207694c(u8 *p);
void func_02076964(u8 *p, s32 a);

void func_ov003_02211878(u8 *p, Pair *o);
void func_ov003_02211884(u8 *p, Pair *s);
void func_ov003_022118d8(u8 *p, Pair *s);
void func_ov003_02211920(Obj *o);
s32 func_ov003_02211978(Obj *o, u32 p, s32 a, s16 b);
void func_ov003_022119b8(u8 *p, u32 v);
void func_ov003_02211a7c(Obj *o);
void func_ov003_02211b8c(Obj *o);
void func_ov003_02212034(Blk *b, V3 *v);
u8 func_ov003_02211f74(u8 *p);
void func_ov003_02211f78(u8 *p, u32 v);
void func_ov003_02211f7c(u8 *p, u16 *out);
void func_ov003_02211f8c(u8 *p, s32 a);
s32 func_ov003_02211f94(Obj *o, u32 a, s32 b, s16 c);
}

static inline s32 Idx(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) r = TRUE;
    if (r) return b - lo;
    return -1;
}

extern "C" void func_ov003_02211878(u8 *p, Pair *o) {
    o->a = p[0];
    o->b = p[1];
}

extern "C" void func_ov003_02211818(Obj *o, u8 *m) {
    Pair s;
    u8 *q = m + 0xc;
    u32 a = q[0];
    u32 b = q[1];
    u8 *r = (u8 *)&o->unk_7d0;
    r[0] = a;
    r[1] = b;
    r[2] = 0;
    s.a = a;
    s.b = b;
    func_ov003_02211884(o->unk_8ec, &s);
    func_020103b4(o, 0x15, 3, 0);
    if (func_0200f5b0(o) == 4) {
        func_0205e1a0(o->unk_59c, 0xb, 3, 0);
    }
}

extern "C" void func_ov003_02211884(u8 *p, Pair *s) {
    p[0] = s->a;
    p[1] = s->b;
}

extern "C" s32 func_ov003_02211890(Obj *o, Pair *p, s32 a, s16 b) {
    Pair t;
    Msg m;
    m.func_0200e2c0(0x16, a, b);
    t.a = p->a;
    t.b = p->b;
    func_ov003_022118d8(m.unk_0c, &t);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022118d8(u8 *p, Pair *s) {
    p[0] = s->a;
    p[1] = s->b;
}

extern "C" void func_ov003_022118e4(Obj *o) {
    func_ov003_02211920(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0200bc78(o);
    } else {
        func_0200ef08(o);
    }
    func_0201071c(o);
}

extern "C" void func_ov003_02211920(Obj *o) {
    func_02010914(o);
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0, 3, 0);
    }
}

extern "C" s32 func_ov003_0221194c(Obj *o, s16 a) {
    return func_ov003_02211978(o, 3, 5, a);
}

extern "C" void func_ov003_02211960(Obj *o, u8 *m) {
    func_02010358(o, 0x9a, *(u16 *)(m + 0xc), 0);
}

extern "C" s32 func_ov003_02211978(Obj *o, u32 p, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x11, a, b);
    func_ov003_022119b8(m.unk_0c, p);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022119b8(u8 *p, u32 v) {
    *(u16 *)p = v;
}

extern "C" void func_ov003_022119bc(Obj *o) {
    func_02010914(o);
    volatile V3 v;
    V3 *pv = &o->unk_c4;
    v.x = o->unk_c4.x;
    v.y = pv->y;
    v.z = pv->z;
    s32 d0 = o->unk_d0;
    Blk b1 = o->unk_294;
    Blk b2 = o->unk_694;
    func_0200e7f4(o);
    func_ov003_02211b8c(o);
    o->unk_c4.x = v.x;
    o->unk_c4.y = v.y;
    o->unk_c4.z = v.z;
    o->unk_d0 = d0;
    o->unk_294 = b1;
    o->unk_694 = b2;
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    func_ov003_02211a7c(o);
}

extern "C" void func_ov003_02211a7c(Obj *o) {
    Rec *r0 = &o->unk_7d0;
    u8 *r6 = o->unk_8ec;
    u8 *r5 = &r0->unk_0d;
    switch (*r5) {
    case 0:
        if (func_020565e8(o->unk_2cc, 10)) {
            func_0200ecdc(o, 0x63);
        } else if (func_020565e8(o->unk_2cc, 0x19)) {
            func_0200ecdc(o, 0x7f2);
        }
        if (func_02056654(o->unk_2cc)) {
            *r5 = 1;
            func_ov003_02211f78(r6, 1);
        }
        break;
    case 1:
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
            if (func_ov003_02211f74(r6) >= 2) {
                *r5 = 2;
            }
        }
        break;
    case 2:
        if (r0->unk_04 > -1) {
            func_020902f8(r0->unk_04);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02211f78(r6, 2);
        }
        func_02010358(o, 0xa0, 3, 0);
        func_0200ecdc(o, 0x7f1);
        *r5 = 3;
        break;
    case 3:
        if (func_02056654(o->unk_2cc)) {
            func_0200c358(o, 3, 5, -1);
        }
        break;
    }
}

extern "C" void func_ov003_02211b8c(Obj *o) {
    Rec *r6 = &o->unk_7d0;
    Unk_ov003_02211818_T t;
    Blk b;
    V3 v50;
    V3 v5c;
    V3 v68;
    s32 *r7;
    s16 sc;
    s32 m;
    t.a = r6->unk_00;
    r7 = &r6->unk_04;
    func_0200f4c0(o, 0x400);
    b = o->unk_694;
    v50.x = 0x4cd;
    v50.y = 0;
    v50.z = 0;
    m = o->unk_2d4.mid;
    if (o->unk_700 != 0xa0 && (s32)m >= 0x10) {
        s32 q = (m - 15) * 0x19a / 12;
        v50.x = v50.x + q * 2;
        v50.y = v50.y + q;
        v50.z = v50.z - q;
    }
    func_ov003_02212034(&b, &v50);
    if (*r7 > -1) {
        v5c.x = b.v[9];
        v5c.y = b.v[10];
        v5c.z = b.v[11];
        func_0203ee38(&v5c, &v5c);
        func_020902d4(*r7, &v5c, 0, 0);
    } else if (*r7 == -1) {
        *r7 = -2;
        if (r6->unk_0c == 0) {
            s32 i = Idx(&t.a, 0x12b0, 0x12e7);
            if (i == 0x18 || i == 0x30 || (u32)(i - 0x32) <= 1) {
                v5c.x = b.v[9];
                v5c.y = b.v[10];
                v5c.z = b.v[11];
                func_0203ee38(&v5c, &v5c);
                *r7 = func_02090268(0x5a, &v5c, 0, 0);
            }
        }
    }
    if (o->unk_700 != 0xa0) {
        if (m <= 10) {
            sc = 0;
        } else if (m < 0x10) {
            sc = (s16)((m - 10) * 0x11);
        } else {
            sc = 0x64;
        }
    } else {
        if (m < 6) {
            sc = (s16)(0x64 - m * 0x11);
        } else {
            sc = 0;
        }
    }
    if (r6->unk_0c == 0) {
        t.b = sc;
        t.c = sc;
        t.d = sc;
        func_ov003_022261ec(o->unk_7fc, &t.b, &b, 0);
    } else {
        float f = (float)sc / 100.0f;
        float g;
        if (f > 0) {
            g = 0.5f + 4096.0f * f;
        } else {
            g = 4096.0f * f - 0.5f;
        }
        s32 k = (s32)g;
        s32 i = Idx(&t.a, 0x12e8, 0x131f);
        func_ov003_02223450(&v68, i);
        v68.x = func_01ffcb0c(v68.x, k);
        v68.y = func_01ffcb0c(v68.y, k);
        v68.z = func_01ffcb0c(v68.z, k);
        v5c.x = b.v[9];
        v5c.y = b.v[10];
        v5c.z = b.v[11];
        func_0203ee38(&v5c, &v5c);
        i = Idx(&t.a, 0x12e8, 0x131f);
        func_0204f3e4(r6->unk_08, i, &v5c, &v68, 0, 0, 0, 1, 1, 0x1f);
    }
}

extern "C" void func_ov003_02211e04(Obj *o) {
    Rec *r4 = &o->unk_7d0;
    if (r4->unk_04 > -1) {
        func_020902f8(r4->unk_04);
    }
    if (r4->unk_0c == 0) {
        func_ov003_02227074(o->unk_7fc, 1);
    } else {
        func_0204f3b4(r4->unk_08);
    }
}

extern "C" s32 func_ov003_02211e48(Obj *o, s16 a) {
    u16 t;
    func_ov003_02211f7c(o->unk_8ec, &t);
    return func_ov003_02211f94(o, t, 5, a);
}

extern "C" void func_ov003_02211e74(Obj *o, u8 *m) {
    Rec *r4 = &o->unk_7d0;
    volatile u16 t;
    u16 r7 = *(u16 *)(m + 0xc);
    u32 id;
    u8 *r6;
    t = r7;
    r4->unk_00 = r7;
    r4->unk_04 = -1;
    r4->unk_08 = 0;
    {
        BOOL z = FALSE;
        volatile u16 *pt = &t;
        u32 b = *pt;
        u32 a = *pt;
        if (a >= 0x12e8 && b <= 0x131f) z = TRUE;
        r4->unk_0c = z;
    }
    r4->unk_0d = 0;
    if (r4->unk_0c == 0) {
        s32 i = Idx(&t, 0x12b0, 0x12e7);
        func_ov003_02227248(i, o->unk_7fc);
        id = 0x9f;
    } else {
        r4->unk_08 = func_0204f49c();
        id = 0x9e;
    }
    func_02010358(o, id, 3, 3);
    func_0200ecdc(o, 0x4f);
    r6 = o->unk_8ec;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_02211f8c(r6, r7);
        func_ov003_02211f78(r6, 0);
    } else if (func_ov003_02211f74(r6) >= 1) {
        r4->unk_0d = 1;
        *(u32 *)&o->unk_2d4 = ((u32)(o->unk_2d0.mid - 1) << 16) >> 4;
    }
}

extern "C" u8 func_ov003_02211f74(u8 *p) {
    return p[2];
}

extern "C" void func_ov003_02211f78(u8 *p, u32 v) {
    p[2] = v;
}

extern "C" void func_ov003_02211f7c(u8 *p, u16 *out) {
    *out = func_0207694c(p);
}

extern "C" void func_ov003_02211f8c(u8 *p, s32 a) {
    func_02076964(p, a);
}

extern "C" s32 func_ov003_02211f94(Obj *o, u32 a, s32 b, s16 c) {
    Msg m;
    m.func_0200e2c0(6, b, c);
    *(u16 *)((u8 *)&m + 0xc) = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" BOOL func_ov003_02211fd0() {
    u16 t;
    func_020947c0(&t, 4);
    BOOL f = FALSE;
    volatile u16 *p = &t;
    u32 b = *p;
    u32 a = *p;
    if (a >= 0x1376 && b <= 0x1376) f = TRUE;
    if (f || (b >= 0x1377 && b <= 0x1377)) return TRUE;
    return FALSE;
}

extern "C" void func_ov003_02212014() {
    Obj *o = func_02095774(4);
    if (o) {
        func_02010358(o, 0x99, 3, 0);
    }
}

extern "C" void func_ov003_02212034(Blk *b, V3 *v) {
    s32 r7 = b->v[9];
    s32 s0 = b->v[10];
    s32 s4 = b->v[11];
    Blk c;
    V3 vv;
    V3 out;
    b->v[9] = b->v[10] = b->v[11] = 0;
    c = *b;
    if (v == 0) {
        vv.x = 0x4cd;
        vv.y = 0;
        vv.z = 0;
    } else {
        vv.x = v->x;
        vv.y = v->y;
        vv.z = v->z;
    }
    func_01ffb898(&vv, &c, &out);
    b->v[9] = out.x + r7;
    b->v[10] = out.y + s0;
    b->v[11] = out.z + s4;
}

extern "C" void *func_ov003_022120ac(u32 a) {
    Obj *p = func_02095774(a);
    if (p != 0 && func_0200f5b0(p) == 3) {
        s32 *q = (s32 *)((u8 *)p + 0x5c4);
        if (q[1] > 1) return q + 2;
    }
    return func_020947f0(a);
}

extern "C" BOOL func_ov003_022120e4() {
    Obj *p = func_02095774(4);
    if (p) {
        if (p->unk_7ec == 6) {
            Rec *r = &p->unk_7d0;
            if (r->unk_0d == 1) {
                r->unk_0d = 2;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" s32 func_ov003_0221211c(u32 a) {
    Obj *p = func_02095774(4);
    if (p) {
        return func_ov003_02211f94(p, a, 5, -1);
    }
    return 0;
}
