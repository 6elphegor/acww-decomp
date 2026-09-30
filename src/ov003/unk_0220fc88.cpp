// mwcc-version: 1.2/sp2 not needed here (no thunks)
#include "types.h"

struct Unk_ov003_0220fc88_V3 {
    s32 x, y, z;
    Unk_ov003_0220fc88_V3() {}
    Unk_ov003_0220fc88_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_0220fc88_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_0220fc88_Bf {
    u8 a : 2;
    u8 b : 2;
    u8 c : 4;
};

struct Unk_ov003_0220fc88_RecA {
    s32 st;
    s32 a;
    s32 b;
    s16 h;
    u8 bits;
    u8 pad_0f;
};

struct Unk_ov003_0220fc88_RecB {
    s32 st;
    s32 a;
    s32 b;
    s32 timer;
    s16 h;
    u8 bits;
    u8 pad_13;
};

struct Unk_ov003_0220fc88_Arg {
    u8 pad_00[0xc];
    Unk_ov003_0220fc88_RecA unk_0c;
    Unk_ov003_0220fc88_Arg(const Unk_ov003_0220fc88_Arg &o) {}
};

struct Unk_ov003_0220fc88_H {
    u16 a;
    u16 b;
};

class Unk_ov003_0220fc88_Msg {
public:
    Unk_ov003_0220fc88_Msg();
    ~Unk_ov003_0220fc88_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_0220fc88_RecA unk_0c;
    u8 pad_1c[4];
};

struct Unk_ov003_0220fc88_Sec {
    virtual void vfunc_00();
};

struct Unk_ov003_0220fc88_P0 {
    virtual void vfunc_00();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0xec - 0x90];
};

struct Unk_ov003_0220fc88_Obj : Unk_ov003_0220fc88_P0, Unk_ov003_0220fc88_Sec {
    u8 pad_f0[0x2cc - 0xf0];
    u8 unk_2cc[4];
    Unk_ov003_0220fc88_Bits unk_2d0;
    Unk_ov003_0220fc88_Bits unk_2d4;
    u8 pad_2d8[0x59c - 0x2d8];
    u8 unk_59c[4];
    s32 unk_5a0;
    u8 pad_5a4[0x628 - 0x5a4];
    Unk_ov003_0220fc88_V3 unk_628;
    u8 pad_634[0x7d0 - 0x634];
    Unk_ov003_0220fc88_RecB unk_7d0;
    u8 pad_7e4[0x7ec - 0x7e4];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    s32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x8ec - 0x800];
    u8 unk_8ec[4];
};

struct Unk_ov003_0220fc88_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    Unk_ov003_0220fc88_Bits unk_a0;
};

typedef Unk_ov003_0220fc88_Obj Obj;
typedef Unk_ov003_0220fc88_V3 V3;
typedef Unk_ov003_0220fc88_RecA RecA;
typedef Unk_ov003_0220fc88_RecB RecB;
typedef Unk_ov003_0220fc88_Msg Msg;
typedef Unk_ov003_0220fc88_Arg Arg;
typedef Unk_ov003_0220fc88_H H;
typedef Unk_ov003_0220fc88_Sub Sub;

extern "C" {
extern void *data_020cbb18;

s32 func_02010914(Obj *o);
s32 func_020109c4(Obj *o);
s32 func_0200ef08(Obj *o);
s32 func_0201071c(Obj *o);
s32 func_0201065c(Obj *o);
s32 func_020729bc(void *g, u32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, u32 a);
s32 func_02007c08(Obj *o, s32 a);
s32 func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
s32 func_0200bd60(Obj *o, s32 a, s32 b, s32 c);
s32 func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(u32 id, V3 *v, s16 *h, u32 z);
s32 func_020902d4(s32 h, V3 *v, s16 *p);
s32 func_020902f8(s32 h);
s32 func_02010358(Obj *o, s32 a, u32 b, u32 c);
s32 func_0200ecdc(Obj *o, u32 a);
s32 func_0200ec30(Obj *o, u32 a);
s32 func_0200ec1c(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
s32 func_0203d76c();
s32 func_0205e1a0(void *p, u32 a, u32 b, u32 c);
s32 func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
Sub *func_0205dfa4(void *p);
s32 func_02010a7c(H *h, Obj *o);
s32 func_02010d20(Obj *o);
s32 func_02098738(s32 r, void *p);
s32 func_02010284(Obj *o, s32 a, s32 b);
s32 func_02076a2c(void *p, s32 *a, s32 *b);
s32 func_020769ac(void *p);
s32 func_02076a6c(void *p, s32 a, s32 b);
s32 func_020769c4(void *p, s32 a);
s32 func_ov003_02205c28(Obj *o);
s32 func_ov003_0221129c(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov003_02211098(Obj *o, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_ov003_022105bc(void *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 func_ov003_02210628(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 func_ov003_02210608(void *p, s32 st, u32 bits, s32 x, s32 y, s32 h, s32 v);
s32 func_ov003_022105e0(void *p, u32 bits, s32 x, s32 y, s32 h);

void func_ov003_0220fc88(s32 *p, s32 a, s32 b, u32 c);
s32 func_ov003_0220fc90(Obj *o);
void func_ov003_0220fcd8(Obj *o);
s32 func_ov003_0220fd44(Obj *o);
void func_ov003_0220fdac(Obj *o);
s32 func_ov003_0220fdcc(Obj *o, s16 b);
s32 func_ov003_0220fdd8(Obj *o);
void func_ov003_0220fe0c(u8 *p);
s32 func_ov003_0220fe1c(Obj *o, s32 a, s16 b);
s32 func_ov003_0220fe54(Obj *o);
void func_ov003_0220fe70(Obj *o);
void func_ov003_0220ff5c(Obj *o);
s32 func_ov003_0220ffd4(Obj *o, s32 a);
s32 func_ov003_02210044(Obj *o, Arg a);
s32 func_ov003_0221019c(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d);
s32 func_ov003_022101c0(u8 *p, u32 id, s32 x, s32 y, s32 h);
s32 func_ov003_022101e8(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 func_ov003_02210204(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b);
s32 func_ov003_02210260(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h);
s32 func_ov003_0221027c(Obj *o);
void func_ov003_02210298(Obj *o);
s32 func_ov003_02210404(Obj *o);
s32 func_ov003_02210438(Obj *o, s32 a);
s32 func_ov003_022104a8(Obj *o, Arg a);
}

extern "C" void func_ov003_0220fc88(s32 *p, s32 a, s32 b, u32 c) {
    p[0] = a;
    p[1] = b;
    *(u8 *)&p[2] = c;
}

extern "C" s32 func_ov003_0220fc90(Obj *o) {
    func_ov003_0220fd44(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_020109c4(o);
    } else {
        func_0200ef08(o);
    }
    func_0201071c(o);
    func_0201065c(o);
    func_ov003_0220fcd8(o);
}

extern "C" void func_ov003_0220fcd8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    u32 m = o->unk_2d4.mid;
    if (m >= 0xe) {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_ov003_02205c28(o);
        }
    }
}

extern "C" s32 func_ov003_0220fd44(Obj *o) {
    func_02010914(o);
    s32 *p = &o->unk_7d0.a;
    V3 v(o->unk_628.x, o->unk_628.y, o->unk_628.z);
    func_0203ee38(&v, &v);
    if (o->unk_7d0.a == -1) {
        *p = func_02090330(0x33, &v, &o->unk_8e, 0);
    } else {
        func_020902d4(o->unk_7d0.a, &v, &o->unk_8e);
    }
}

extern "C" void func_ov003_0220fdac(Obj *o) {
    s32 h = o->unk_7d0.a;
    if (h != -1) {
        func_020902f8(h);
    }
}

extern "C" s32 func_ov003_0220fdcc(Obj *o, s16 b) {
    return func_ov003_0220fe1c(o, 6, b);
}

extern "C" s32 func_ov003_0220fdd8(Obj *o) {
    func_02010358(o, 0x63, 3, 0);
    func_ov003_0220fe0c((u8 *)&o->unk_7d0);
    func_0200ecdc(o, 0x856);
    func_0200ec30(o, 9);
}

extern "C" void func_ov003_0220fe0c(u8 *p) {
    *(u16 *)p = 0;
    *(u16 *)(p + 2) = 0x20;
    *(s32 *)(p + 4) = -1;
}

extern "C" s32 func_ov003_0220fe1c(Obj *o, s32 a, s16 b) {
    Msg m;
    m.func_0200e2c0(0x45, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_0220fe54(Obj *o) {
    func_ov003_0220ff5c(o);
    func_0201071c(o);
    func_ov003_0220fe70(o);
}

extern "C" void func_ov003_0220fe70(Obj *o) {
    RecA *r = (RecA *)&o->unk_7d0;
    if (func_02056654(o->unk_2cc)) {
        func_0200ec30(o, 1);
        switch (r->st) {
        case 0x38:
            func_0200ec1c(o, 0);
            func_ov003_0221129c(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            func_0200ec1c(o, 0);
            func_ov003_02211098(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            func_0200ec1c(o, 0);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200bd60(o, 3, 5, -1);
            break;
        case 2:
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}

extern "C" void func_ov003_0220ff5c(Obj *o) {
    func_02010914(o);
    RecA *r = (RecA *)&o->unk_7d0;
    if ((r->bits & 3) != 2) {
        if (o->unk_2d4.mid < 6) {
            if (func_020565e8(o->unk_2cc, 5)) {
                func_0200ec1c(o, 0);
            }
        }
    } else {
        if (o->unk_2d4.mid < 8) {
            if (func_020565e8(o->unk_2cc, 7)) {
                func_0200ec30(o, 0);
                func_0200ecdc(o, 0x857);
            }
        }
    }
}

extern "C" s32 func_ov003_0220ffd4(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    func_ov003_0221019c(o->unk_8ec, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    func_ov003_02210204(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}

extern "C" s32 func_ov003_02210044(Obj *o, Arg a) {
    RecA *r = &a.unk_0c;
    u8 bits = r->bits;
    RecA *p7d0 = (RecA *)&o->unk_7d0;
    func_0205e1a0(o->unk_59c, 0x24, 3, 1);
    s32 x, y, st;
    s16 h;
    if ((bits & 3) != 2) {
        func_02010358(o, 0x62, 3, 0);
        u32 mid = o->unk_2d0.mid;
        func_0205668c(o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
        Sub *s = func_0205dfa4(o->unk_59c);
        u32 mid2 = s->unk_a0.mid;
        func_0205668c(s->unk_9c, mid2, 3, 0x1000, (u16)(mid2 - 1));
        func_0200ecdc(o, 0x858);
    } else {
        H hh;
        func_02010a7c(&hh, o);
        s32 q = func_02010d20(o);
        hh.b = 0xfff1;
        func_02098738(q, &hh.b);
        func_02010358(o, 0x62, 3, 0);
        func_02098738(q, &hh);
        func_0200ec1c(o, 0);
    }
    st = r->st;
    x = r->a;
    y = r->b;
    h = r->h;
    func_ov003_022101e8(p7d0, st, bits, x, y, h);
    u8 *p8 = o->unk_8ec;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    func_ov003_022101c0(p8, bits, x, y, h);
    func_0200ecdc(o, 0x4f);
}

extern "C" s32 func_ov003_0221019c(u8 *p, u8 *a, s32 *b, s32 *c, s16 *d) {
    *a = p[7];
    func_02076a2c(p, b, c);
    *d = func_020769ac(p + 5);
}

extern "C" s32 func_ov003_022101c0(u8 *p, u32 id, s32 x, s32 y, s32 h) {
    p[7] = id;
    func_02076a6c(p, x, y);
    func_020769c4(p + 5, *(s16 *)&h);
}

extern "C" s32 func_ov003_022101e8(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}

extern "C" s32 func_ov003_02210204(Obj *o, s32 id, u8 low, s32 x, s32 y, s16 h, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x3e, a, *(s16 *)&b);
    func_ov003_02210260(&m.unk_0c, id, low, x, y, h);
    func_0200ec1c(o, 1);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" s32 func_ov003_02210260(RecA *p, s32 st, u32 bits, s32 x, s32 y, s32 h) {
    p->st = st;
    p->bits = bits;
    p->a = x;
    p->b = y;
    p->h = *(s16 *)&h;
}

extern "C" s32 func_ov003_0221027c(Obj *o) {
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02210298(o);
}

extern "C" void func_ov003_02210298(Obj *o) {
    RecB *r = &o->unk_7d0;
    s32 *t = &r->timer;
    s32 target;
    if ((r->bits & 3) == 2) {
        target = 0x1000;
        if (o->unk_2d4.mid < 8) {
            if (func_020565e8(o->unk_2cc, 7)) {
                func_02010284(o, 0, 7);
            }
            if (*t != 0x1000) {
                *t += 0x249;
                if (*t > 0x1000) *t = 0x1000;
            }
        }
    } else {
        target = 0;
        if (*t != 0) {
            *t -= 0x249;
            if (*t < 0) *t = target;
        }
    }
    o->unk_5a0 = r->timer;
    if (func_02056654(o->unk_2cc) && target == *t) {
        func_0200ec30(o, 1);
        switch (r->st) {
        case 0x38:
            func_0200ec1c(o, 0);
            func_ov003_0221129c(o, r->a, r->b, r->h, 6, -1);
            break;
        case 0x39:
            func_0200ec1c(o, 0);
            func_ov003_02211098(o, (u8)((r->bits & 0xc) >> 2), r->a, r->b, r->h, 6, -1);
            break;
        case 0x10:
            func_0200ec1c(o, 0);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200bd60(o, 3, 5, -1);
            break;
        case 2:
            func_0203d76c();
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ce98(o, 3, 1, -1);
            break;
        }
    }
}

extern "C" s32 func_ov003_02210404(Obj *o) {
    if ((o->unk_7d0.bits & 3) == 2) {
        o->unk_5a0 = 0x1000;
    } else {
        o->unk_5a0 = 0;
        func_0200ec1c(o, 0);
    }
}

extern "C" s32 func_ov003_02210438(Obj *o, s32 a) {
    u8 b;
    s16 h;
    s32 x, y;
    func_ov003_022105bc(o->unk_8ec, &b, &x, &y, &h);
    s32 id;
    switch (b & 0xf0) {
    case 0:
        id = 0x38;
        break;
    case 0x10:
        id = 0x39;
        break;
    case 0x20:
        id = 0x10;
        break;
    default:
        id = 2;
        break;
    }
    func_ov003_02210628(o, id, (u8)(b & 0xf), x, y, h, 6, a);
}

extern "C" s32 func_ov003_022104a8(Obj *o, Arg a) {
    RecA *r = &a.unk_0c;
    H hh;
    RecA *p7d0 = (RecA *)&o->unk_7d0;
    func_02010a7c(&hh, o);
    s32 q = func_02010d20(o);
    hh.b = 0xfff1;
    func_02098738(q, &hh.b);
    func_02010358(o, 0x6b, 3, 0);
    func_02098738(q, &hh);
    s32 v;
    if ((r->bits & 3) == 2) {
        func_0200ec30(o, 0);
        v = 0;
        u32 mid = o->unk_2d0.mid;
        func_0205668c(o->unk_2cc, mid, 3, 0x1000, (u16)(mid - 1));
    } else {
        v = 0x1000;
    }
    s32 st = r->st;
    u8 bits = r->bits;
    s32 x = r->a;
    s32 y = r->b;
    s32 h2 = r->h;
    func_ov003_02210608(p7d0, st, bits, x, y, h2, v);
    u8 *p8 = o->unk_8ec;
    switch (st) {
    case 0x38:
        break;
    case 0x39:
        bits |= 0x10;
        break;
    case 0x10:
        bits |= 0x20;
        break;
    case 2:
        bits |= 0x30;
        break;
    }
    func_ov003_022105e0(p8, bits, x, y, h2);
    func_0200ecdc(o, 0x4f);
}
