#include "types.h"

struct Unk_ov003_0220e030_V3 {
    s32 x, y, z;
    Unk_ov003_0220e030_V3() {}
    Unk_ov003_0220e030_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220e030_P2 {
    s32 x, z;
};

struct Unk_ov003_0220e030_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220e030_P2 unk_0c;
};

struct Unk_ov003_0220e030_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220e030_P0 {
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

struct Unk_ov003_0220e030_Obj : Unk_ov003_0220e030_P0, Unk_ov003_0220e030_Sec {
    u8 pad_f0[0x13c - 0xf0];
    u8 unk_13c;
    u8 pad_13d[0x2cc - 0x13d];
    u8 unk_2cc[8];
    u8 pad_2d4[0x59c - 0x2d4];
    u8 unk_59c[0x28];
    u8 unk_5c4[4];
    s32 unk_5c8;
    Unk_ov003_0220e030_V3 unk_5cc;
    u8 pad_5d8[0x5fc - 0x5d8];
    u8 unk_5fc;
    u8 pad_5fd[0x7d0 - 0x5fd];
    s16 unk_7d0;
    u8 pad_7d2[0x7ec - 0x7d2];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8c0 - 0x800];
    Unk_ov003_0220e030_V3 unk_8c0;
    u8 pad_8cc[0x8ec - 0x8cc];
    u8 unk_8ec[4];
    u8 pad_8f0[0xc80 - 0x8f0];
    u16 unk_c80;
};

class Unk_ov003_0220e030_Msg {
public:
    Unk_ov003_0220e030_Msg();
    ~Unk_ov003_0220e030_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_0220e030_P2 unk_0c;
    u8 pad_14[8];
};

typedef Unk_ov003_0220e030_Obj Obj;
typedef Unk_ov003_0220e030_V3 V3;
typedef Unk_ov003_0220e030_Msg Msg;
typedef Unk_ov003_0220e030_P2 P2;
typedef Unk_ov003_0220e030_Arg Arg;

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;

s32 func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_0205fb70(void *p);
s32 func_0205fb88(void *p);
s32 func_0205fbb8(void *p);
s32 func_0205df98(void *p);
s32 func_0200ec54(Obj *o, u32 a, void *b);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_02034d70(u32 a);
s32 func_02034dd0(u32 a, u32 b, u32 c);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_020103b4(Obj *o, s32 a, u32 b, u32 c);
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_02007c08(Obj *o, s32 a);
s32 func_02035bac(void *p);
s32 func_02035ba4(void *p);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02010d98(u16 *a, s32 b);
s32 func_02010a58(Obj *o, u16 *a);
s32 func_0205fae8(void *p, V3 *v);
s32 func_0205faf8(void *p, V3 *v);
s32 func_0205f92c(void *p, u32 a);
s32 func_020b50b4();
s32 func_020b60b0(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010a34(Obj *o, s32 *a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200f504(Obj *o, s32 a);
s32 func_0203a584();
s32 func_020769dc(void *p, s32 *a, s32 *b, s32 *c, u8 *d);
s32 func_02076a04(void *p, s32 a, s32 b, s32 c, u32 d);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_ov003_0220de60(Obj *o, s32 a, s32 b);
s32 func_ov003_0220dd28(Obj *o, s32 a, s32 b);
s32 func_ov003_0220dff0(Obj *o, s32 a, s32 b, s32 c);
s32 func_ov003_022236dc();
s32 func_ov003_02220db0(void *p, s32 a);
s32 func_ov003_0220e9a4(Obj *o);

void func_ov003_0220e030(u8 *p, u32 v);
s32 func_ov003_0220e034(Obj *o);
s32 func_ov003_0220e054(Obj *o);
s32 func_ov003_0220e0d8(Obj *o, s16 a);
s32 func_ov003_0220e0e4(Obj *o);
s32 func_ov003_0220e12c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e164(Obj *o);
s32 func_ov003_0220e1c0(Obj *o);
void func_ov003_0220e260(Obj *o);
s32 func_ov003_0220e2e4(Obj *o);
void func_ov003_0220e324(Obj *o);
s32 func_ov003_0220e43c(Obj *o, s32 a);
s32 func_ov003_0220e490(Obj *o, s16 a);
s32 func_ov003_0220e4bc(Obj *o);
void func_ov003_0220e55c(void *p, V3 *v, u8 *out);
s32 func_ov003_0220e574(void *p, V3 *v, u8 c);
s32 func_ov003_0220e58c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e5c4(Obj *o);
s32 func_ov003_0220e610(Obj *o);
s32 func_ov003_0220e650(Obj *o);
s32 func_ov003_0220e67c(Obj *o, s16 a);
s32 func_ov003_0220e688(Obj *o);
s32 func_ov003_0220e6b0(Obj *o, s32 a, s16 b);
s32 func_ov003_0220e6e8(Obj *o);
s32 func_ov003_0220e784(Obj *o);
s32 func_ov003_0220e7c8(Obj *o);
s32 func_ov003_0220e7d8(Obj *o);
s32 func_ov003_0220e804(Obj *o, s16 a);
s32 func_ov003_0220e844(Obj *o, Arg *a);
s32 func_ov003_0220e8bc(void *p, s32 *a, s32 *b);
s32 func_ov003_0220e8c4(void *p, s32 a, s32 b);
s32 func_ov003_0220e8cc(Obj *o, V3 *v, s32 a, s16 b);
void func_ov003_0220e918(P2 *d, V3 *s);
s32 func_ov003_0220e924(Obj *o);
}

extern "C" void func_ov003_0220e030(u8 *p, u32 v) {
    *p = v;
}

extern "C" s32 func_ov003_0220e034(Obj *o) {
    func_02010914(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov003_0220e054(o);
}

extern "C" s32 func_ov003_0220e054(Obj *o) {
    V3 *p = &o->unk_5cc;
    volatile s32 pad;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        switch (func_0205fb70(o->unk_5c4)) {
        case 0:
            func_0200ec54(o, 0x7f6, p);
            break;
        case 1:
            func_ov003_0220de60(o, 6, -1);
            func_02034d70(0x12);
            break;
        case 2:
            func_ov003_0220dd28(o, 6, -1);
            break;
        }
    } else {
        func_0200ec54(o, 0x7f6, p);
    }
}

extern "C" s32 func_ov003_0220e0d8(Obj *o, s16 a) {
    return func_ov003_0220e12c(o, 6, a);
}

extern "C" s32 func_ov003_0220e0e4(Obj *o) {
    func_020103b4(o, 0x55, 3, 0);
    func_0205e1a0(o->unk_59c, 0x18, 3, 0);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02034dd0(0x12, 0, 0);
    }
}

extern "C" s32 func_ov003_0220e12c(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x50, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220e164(Obj *o) {
    func_02010914(o);
    func_ov003_0220e324(o);
    func_0200ef08(o);
    func_ov003_0220e2e4(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e1c0(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}

extern "C" s32 func_ov003_0220e1c0(Obj *o) {
    func_ov003_0220e260(o);
    if (func_0205df98(o->unk_59c)) {
        if (func_0200ec44(o, 0xb)) {
            if (func_0205fbb8(o->unk_5c4)) {
                func_ov003_022236dc();
            } else {
                func_ov003_02220db0(&o->unk_5cc, 0x1000);
            }
            func_ov003_0220dff0(o, 0, 6, -1);
        } else {
            if (o->unk_13c != 0 || func_020b60b0(func_020b50b4(), 0)) {
                if (func_0205fb88(o->unk_5c4)) {
                    func_ov003_0220e12c(o, 6, -1);
                } else {
                    func_ov003_0220dff0(o, 0, 6, -1);
                }
            }
        }
    }
}

extern "C" void func_ov003_0220e260(Obj *o) {
    if (func_0205df98(o->unk_59c) && o->unk_5fc) {
        func_0200ecdc(o, 0x84b);
        V3 *p = &o->unk_5cc;
        o->unk_8c0.x = p->x;
        o->unk_8c0.y = p->y;
        o->unk_8c0.z = p->z;
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02035bac(data_021c1b3c + 0x1c4);
        }
    }
}

extern "C" s32 func_ov003_0220e2e4(Obj *o) {
    u16 t;
    V3 *p = &o->unk_5cc;
    s32 a = func_020e7b98(p->x - o->unk_5c, p->z - o->unk_64);
    t = o->unk_8e;
    func_02010d98(&t, a);
    func_02010a58(o, &t);
}

extern "C" void func_ov003_0220e324(Obj *o) {
    u8 kind;
    V3 pos;
    struct { V3 cur, t2, t3; } l;
    u8 *p = o->unk_8ec;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e574(p, &o->unk_5cc, o->unk_5c8);
    } else {
        func_ov003_0220e55c(p, &pos, &kind);
        u8 k = kind;
        s32 st = o->unk_5c8;
        if (st == 4) goto case4;
        if (st == 3) goto end;
        if (k == 4) {
            func_0205f92c(o->unk_5c4, k);
            l.t2 = pos;
            func_0205fae8(o->unk_5c4, &l.t2);
        } else if (st >= 6) {
            func_0205f92c(o->unk_5c4, 0);
        }
        goto end;
    case4: {
        V3 *pc = &o->unk_5cc;
        l.cur = *pc;
        s32 dx = l.cur.x - pos.x;
        s32 dz = l.cur.z - pos.z;
        if (dx * dx + dz * dz >= 0x400000) {
            l.t3 = pos;
            func_0205fae8(o->unk_5c4, &l.t3);
        }
        if (k == 5) {
            func_0205f92c(o->unk_5c4, k);
            func_0200ecdc(o, 0x84f);
            o->unk_8c0.x = pos.x;
            o->unk_8c0.y = pos.y;
            o->unk_8c0.z = pos.z;
        }
    }
    end:;
    }
}

extern "C" s32 func_ov003_0220e43c(Obj *o, s32 a) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_02035ba4(data_021c1b3c + 0x1c4);
    } else if (a != 0x50 && a != 0x51) {
        func_0205f92c(o->unk_5c4, 1);
    }
}

extern "C" s32 func_ov003_0220e490(Obj *o, s16 a) {
    s32 st = o->unk_7ec;
    if (st != 0x4d) {
        if (st == 0x4f) {
            o->unk_c80 = a;
        } else {
            func_ov003_0220e58c(o, 6, a);
        }
    }
}

extern "C" s32 func_ov003_0220e4bc(Obj *o) {
    u8 kind;
    V3 pos;
    V3 cur;
    u8 *p = o->unk_8ec;
    func_020103b4(o, 0x54, 3, 0);
    void *g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        func_ov003_0220e55c(p, &pos, &kind);
        if (kind == 3) {
            cur.x = pos.x;
            cur.y = pos.y;
            cur.z = pos.z;
            func_0205fae8(o->unk_5c4, &cur);
        }
    }
    func_0205e1a0(o->unk_59c, 0x17, 3, 0);
    if (func_020729bc(g, o->unk_7fc)) {
        func_ov003_0220e574(p, &o->unk_5cc, o->unk_5c8);
    }
}

extern "C" void func_ov003_0220e55c(void *p, V3 *v, u8 *out) {
    func_020769dc(p, &v->x, &v->y, &v->z, out);
}

extern "C" s32 func_ov003_0220e574(void *p, V3 *v, u8 c) {
    return func_02076a04(p, v->x, v->y, v->z, c);
}

extern "C" s32 func_ov003_0220e58c(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x4f, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220e5c4(Obj *o) {
    func_ov003_0220e650(o);
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    s32 t = func_02010d5c(o->unk_98, 0, 0x171);
    func_02010a34(o, &t);
    func_ov003_0220e610(o);
}

extern "C" s32 func_ov003_0220e610(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
}

extern "C" s32 func_ov003_0220e650(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0xc)) {
        func_0200ecdc(o, 0x84a);
    }
}

extern "C" s32 func_ov003_0220e67c(Obj *o, s16 a) {
    return func_ov003_0220e6b0(o, 6, a);
}

extern "C" s32 func_ov003_0220e688(Obj *o) {
    func_02010358(o, 0x53, 3, 0);
    func_0205e1a0(o->unk_59c, 0x16, 3, 0);
}

extern "C" s32 func_ov003_0220e6b0(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x4e, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220e6e8(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        s32 t;
        func_ov003_0220e7c8(o);
        func_ov003_0220e7d8(o);
        func_020109c4(o);
        func_0201071c(o);
        t = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t);
        func_ov003_0220e784(o);
    } else {
        s32 t2;
        func_ov003_0220e7d8(o);
        if (func_0200ef08(o)) {
            func_020109c4(o);
        }
        func_0201071c(o);
        t2 = func_02010d5c(o->unk_98, 0, 0x171);
        func_02010a34(o, &t2);
        func_ov003_0220e784(o);
    }
}

extern "C" s32 func_ov003_0220e784(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_ov003_0220e58c(o, 6, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_0203a584();
        }
    }
}

extern "C" s32 func_ov003_0220e7c8(Obj *o) {
    return func_0200f504(o, o->unk_7d0);
}

extern "C" s32 func_ov003_0220e7d8(Obj *o) {
    func_02010914(o);
    if (func_020565e8(o->unk_2cc, 0x11)) {
        func_0200ecdc(o, 0x849);
    }
}

extern "C" s32 func_ov003_0220e804(Obj *o, s16 a) {
    s32 x, z;
    struct { V3 v1, v2; } l;
    func_ov003_0220e8bc(o->unk_8ec, &x, &z);
    s32 y = o->unk_60;
    l.v1.x = x;
    l.v1.y = y;
    l.v1.z = z;
    l.v2.x = x;
    l.v2.y = y;
    l.v2.z = z;
    return func_ov003_0220e8cc(o, &l.v2, 6, a);
}

extern "C" s32 func_ov003_0220e844(Obj *o, Arg *a) {
    func_02010358(o, 0x52, 3, 0);
    func_0205e1a0(o->unk_59c, 0x15, 3, 0);
    P2 &q = a->unk_0c;
    struct { V3 t1, t2; } l;
    s32 z = q.z;
    s32 x = q.x;
    l.t1.x = x; l.t1.y = 0; l.t1.z = z;
    l.t2.x = x; l.t2.y = 0; l.t2.z = z;
    func_0205faf8(o->unk_5c4, &l.t2);
    func_ov003_0220e8c4(o->unk_8ec, l.t1.x, l.t1.z);
    o->unk_7d0 = func_020e7b98(l.t1.x - o->unk_5c, l.t1.z - o->unk_64);
}

extern "C" s32 func_ov003_0220e8bc(void *p, s32 *a, s32 *b) {
    return func_02076a2c(p, a, b);
}

extern "C" s32 func_ov003_0220e8c4(void *p, s32 a, s32 b) {
    return func_02076a6c(p, a, b);
}

extern "C" s32 func_ov003_0220e8cc(Obj *o, V3 *v, s32 a, s16 b) {
    Msg m;
    V3 t;
    m.func_0200e2c0(0x4d, a, b);
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    func_ov003_0220e918(&m.unk_0c, &t);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220e918(P2 *d, V3 *s) {
    d->x = s->x;
    d->z = s->z;
}

extern "C" s32 func_ov003_0220e924(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220e9a4(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}
