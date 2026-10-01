#include "types.h"

struct Unk_ov004_022215a8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_022215a8_Tgt {
    s32 x, z;
    s16 h;
};

struct Unk_ov004_022215a8_Rec {
    s32 x;
    union {
        s32 z;
        u8 flag;
    } u;
    s16 h;
};

struct Unk_ov004_022215a8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_022215a8_Msg {
public:
    Unk_ov004_022215a8_Msg();
    ~Unk_ov004_022215a8_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    union {
        Unk_ov004_022215a8_Tgt t;
        u16 h;
    } unk_0c;
    u8 pad_18[4];
};

struct Unk_ov004_022215a8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[8];
    Unk_ov004_022215a8_Bits unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[8];
    u8 unk_b8[0x300 - 0x230 - 0xb8];
};

struct Unk_ov004_022215a8_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_022215a8_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    s32 unk_b0;
    u8 pad_b4[0x230 - 0xb4];
    Unk_ov004_022215a8_Sub unk_230;
    u8 pad_300[0x700 - 0x300];
    s32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_ov004_022215a8_Rec unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[0x10];
};

typedef Unk_ov004_022215a8_Obj Obj;
typedef Unk_ov004_022215a8_V3 V3;
struct Unk_ov004_022215a8_V3c {
    volatile s32 x, y, z;
    Unk_ov004_022215a8_V3c(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov004_022215a8_V3c V3c;
typedef Unk_ov004_022215a8_Tgt Tgt;
typedef Unk_ov004_022215a8_Msg Msg;
typedef Unk_ov004_022215a8_Rec Rec;
typedef Unk_ov004_022215a8_Sub Sub;

extern "C" {
extern u8 data_020e416c;
extern void *data_020cbb18;
extern u8 data_ov004_02240148[];

s32 func_0200e248(Obj *o, Msg *m);
s32 func_02034d2c(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *func_02003bbc(void);
void func_02056520(void *p, s32 n);
void func_02053f20(void *p);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 n);
s32 func_02010914(Obj *o);
void func_0201065c(Obj *o);
void func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
void func_0200ecdc(Obj *o, u32 a);
void func_02010358(Obj *o, s32 a, s32 b, s32 c);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010a58(Obj *o, s16 *a);
s32 func_020729bc(void *g, u32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200d640(Obj *o);
s32 func_0200d5fc(Obj *o);
s32 func_02063c18(s16 a);
void func_02076a2c(void *a, s32 *b, s32 *c);
void func_02076a6c(void *a, s32 b, s32 c);
s32 func_020769ac(void *a);
void func_020769c4(void *a, s32 b);
s32 func_0200f3ec(V3 *out, Obj *o, void *pos, void *ang, u32 arg);

void func_ov004_022330a0(void *p);
void func_ov004_022330cc(V3 *v);
s32 func_ov004_02234dd4(void *p, s32 a);
s32 func_ov004_02234d80(void *p, s32 a);
s32 func_ov004_02234d2c(void *p, s32 a);
s32 func_ov004_02221404(Obj *o, s32 a, s32 b, s32 c);

s32 func_ov004_022215a8(Obj *o, u32 a, u32 b);
void func_ov004_022215e0(Obj *o);
void func_ov004_0222164c(Obj *o);
void func_ov004_022216dc(Obj *o);
void func_ov004_02221768(Obj *o);
s32 func_ov004_02221778(Obj *o, s32 a);
void func_ov004_0222178c(Obj *o, Obj *arg);
s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c);
void func_ov004_02221800(Obj *o);
void func_ov004_02221820(Obj *o);
void func_ov004_02221848(Obj *o);
void func_ov004_0222189c(Obj *o);
void func_ov004_022218bc(Obj *o, s32 a);
void func_ov004_022218f0(Obj *o, Obj *arg);
void func_ov004_0222194c(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221968(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221984(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_0222198c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_022219d8(Obj *o, u32 a, u32 b);
void func_ov004_02221a40(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02221a48(Obj *o);
void func_ov004_02221a68(Obj *o);
void func_ov004_02221a90(Obj *o);
void func_ov004_02221ae4(Obj *o);
void func_ov004_02221b04(Obj *o, s32 a);
void func_ov004_02221b38(Obj *o, Obj *arg);
void func_ov004_02221b94(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221bb0(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221bcc(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_02221bd4(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_02221c20(Obj *o, u32 a, u32 b);
void func_ov004_02221c88(Tgt *t, s32 x, s32 z, s16 h);
void func_ov004_02221c90(Obj *o);
void func_ov004_02221cb0(Obj *o);
void func_ov004_02221cd8(Obj *o);
void func_ov004_02221d2c(Obj *o);
void func_ov004_02221d4c(Obj *o, s32 a);
void func_ov004_02221d80(Obj *o, Obj *arg);
void func_ov004_02221ddc(void *p, s32 *x, s32 *z, s16 *h);
void func_ov004_02221df8(void *p, s32 x, s32 z, s16 h);
void func_ov004_02221e14(Tgt *t, s32 x, s32 z, s16 h);
s32 func_ov004_02221e1c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b);
s32 func_ov004_02221e68(Obj *o, u32 a, u32 b);
void func_ov004_02221ed0(Tgt *t, s32 x, s32 z, s16 h);
}

static inline BOOL Unk_ov004_022215a8_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" s32 func_ov004_022215a8(Obj *o, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x29, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_022215e0(Obj *o) {
    if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
        func_ov004_022330a0(&o->unk_5c);
    }
    func_ov004_022216dc(o);
    func_0201065c(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov004_0222164c(o);
    } else {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
    }
}

extern "C" void func_ov004_0222164c(Obj *o) {
    if (func_0200d640(o) > 0) {
        s32 t = func_0200d5fc(o);
        switch (func_02063c18((s16)(o->unk_8e - t))) {
        case 0:
            if (func_ov004_02234dd4(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 0, 6, -1);
            }
            break;
        case 3:
            if (func_ov004_02234d80(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 1, 6, -1);
            }
            break;
        case 1:
            if (func_ov004_02234d2c(&o->unk_5c, o->unk_8e)) {
                func_ov004_02221404(o, 2, 6, -1);
            }
            break;
        }
    }
}

extern "C" void func_ov004_022216dc(Obj *o) {
    u8 *p;
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab) != 0 && (p = func_02003bbc()) != 0 && (s8)p[3] != 1) {
        Sub *sb = &o->unk_230;
        Rec *r = &o->unk_7d0;
        if (r->u.flag == 0) {
            r->u.flag = 1;
            if (sb->unk_a4.mid != 0) {
                func_02056520(sb->unk_b8, 0xa);
            }
        }
        *(u32 *)&sb->unk_a4 = 0;
        sb->unk_ac = *(s32 *)(p + 0xc);
        func_02053f20(sb);
        sb->unk_ac = 0x1000;
        o->unk_b0 = 0;
    } else {
        func_02010914(o);
    }
}

extern "C" void func_ov004_02221768(Obj *o) {
    o->unk_b0 = o->unk_7d0.x;
}

extern "C" s32 func_ov004_02221778(Obj *o, s32 a) {
    return func_ov004_022217c4(o, 0, 6, a);
}

extern "C" void func_ov004_0222178c(Obj *o, Obj *arg) {
    u16 *r2 = (u16 *)((u8 *)arg + 0xc);
    if (o->unk_700 != 0x24) {
        func_020103b4(o, 0x24, *r2, 0);
    }
    Rec *r = &o->unk_7d0;
    r->x = o->unk_b0;
    r->u.flag = 0;
}

extern "C" s32 func_ov004_022217c4(Obj *o, u32 a, u32 b, u32 c) {
    Msg m;
    m.func_0200e2c0(0x28, b, c);
    m.unk_0c.h = a;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02221800(Obj *o) {
    func_ov004_02221848(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov004_02221820(o);
}

extern "C" void func_ov004_02221820(Obj *o) {
    if (func_02056654(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221848(Obj *o) {
    V3 v;
    func_02010914(o);
    if (func_020565e8(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_0222189c(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    func_02010a58(o, &r->h);
}

extern "C" void func_ov004_022218bc(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_0222194c(o->unk_8ec, &x, &z, &h);
    func_ov004_0222198c(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_022218f0(Obj *o, Obj *arg) {
    s16 h;
    func_02010358(o, 0x23, 0, 0);
    func_0200ecdc(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221984((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221968(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_0222194c(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02221968(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" s32 func_ov004_0222198c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x27, a, *(s16 *)&b);
    func_ov004_02221a40(&m.unk_0c.t, *x, *z, *h);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov004_022219d8(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x27, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
    func_ov004_02221a40(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e - 0x4000));
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02221a48(Obj *o) {
    func_ov004_02221a90(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov004_02221a68(o);
}

extern "C" void func_ov004_02221a68(Obj *o) {
    if (func_02056654(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221a90(Obj *o) {
    V3 v;
    func_02010914(o);
    if (func_020565e8(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02221ae4(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    func_02010a58(o, &r->h);
}

extern "C" void func_ov004_02221b04(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_02221b94(o->unk_8ec, &x, &z, &h);
    func_ov004_02221bd4(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_02221b38(Obj *o, Obj *arg) {
    s16 h;
    func_02010358(o, 0x22, 0, 0);
    func_0200ecdc(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221bcc((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221bb0(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_02221b94(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02221bb0(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" s32 func_ov004_02221bd4(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x26, a, *(s16 *)&b);
    func_ov004_02221c88(&m.unk_0c.t, *x, *z, *h);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov004_02221c20(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x26, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
    func_ov004_02221c88(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e + 0x4000));
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02221c90(Obj *o) {
    func_ov004_02221cd8(o);
    func_0200ef08(o);
    func_0201071c(o);
    func_ov004_02221cb0(o);
}

extern "C" void func_ov004_02221cb0(Obj *o) {
    if (func_02056654(o->unk_230.unk_9c)) {
        func_ov004_022217c4(o, 0, 6, -1);
    }
}

extern "C" void func_ov004_02221cd8(Obj *o) {
    V3 v;
    func_02010914(o);
    if (func_020565e8(o->unk_230.unk_9c, 0xc)) {
        if (Unk_ov004_022215a8_IsOne(data_020e416c)) {
            Rec *r = &o->unk_7d0;
            s32 z = r->u.z;
            s32 y = o->unk_5c.y;
            s32 x = r->x;
            v.x = x;
            v.y = y;
            v.z = z;
            func_ov004_022330cc(&v);
        }
    }
}

extern "C" void func_ov004_02221d2c(Obj *o) {
    Rec *r = &o->unk_7d0;
    V3 *p = &o->unk_5c;
    p->x = r->x;
    p->z = r->u.z;
    func_02010a58(o, &r->h);
}

extern "C" void func_ov004_02221d4c(Obj *o, s32 a) {
    s32 x, z;
    s16 h;
    func_ov004_02221ddc(o->unk_8ec, &x, &z, &h);
    func_ov004_02221e1c(o, &x, &z, &h, 6, a);
}

extern "C" void func_ov004_02221d80(Obj *o, Obj *arg) {
    s16 h;
    func_02010358(o, 0x21, 3, 0);
    func_0200ecdc(o, 0x4c5);
    V3 *p = (V3 *)((u8 *)arg + 0xc);
    h = *(s16 *)((u8 *)p + 8);
    s32 z = p->y;
    s32 y = *(volatile s32 *)&o->unk_5c.y;
    s32 x = *(s32 *)((u8 *)arg + 0xc);
    V3c v(x, y, z);
    func_ov004_02221e14((Tgt *)&o->unk_7d0, x, z, h);
    func_ov004_02221df8(o->unk_8ec, v.x, v.z, h);
}

extern "C" void func_ov004_02221ddc(void *p, s32 *x, s32 *z, s16 *h) {
    func_02076a2c(p, x, z);
    *h = func_020769ac((u8 *)p + 5);
}

extern "C" void func_ov004_02221df8(void *p, s32 x, s32 z, s16 h) {
    func_02076a6c(p, x, z);
    func_020769c4((u8 *)p + 5, h);
}

extern "C" s32 func_ov004_02221e1c(Obj *o, s32 *x, s32 *z, s16 *h, u32 a, u32 b) {
    Msg m;
    m.func_0200e2c0(0x25, a, *(s16 *)&b);
    func_ov004_02221ed0(&m.unk_0c.t, *x, *z, *h);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov004_02221e68(Obj *o, u32 a, u32 b) {
    Msg m;
    V3 v;
    m.func_0200e2c0(0x25, a, b);
    func_0200f3ec(&v, o, &o->unk_5c, &o->unk_8e, (u32)data_ov004_02240148);
    func_ov004_02221ed0(&m.unk_0c.t, v.x, v.z, (s16)(o->unk_8e + 0x8000));
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov004_02221a40(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}


extern "C" void func_ov004_02221984(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221c88(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}


extern "C" void func_ov004_02221bcc(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}

extern "C" void func_ov004_02221e14(Tgt *t, s32 x, s32 z, s16 h) {
    t->x = x;
    t->z = z;
    t->h = h;
}
