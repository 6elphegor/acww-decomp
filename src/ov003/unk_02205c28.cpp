#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_02205c28_V3 {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ Unk_ov003_02205c28_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(void *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov003_02206120_V3 {
    s32 x, y, z;
    Unk_ov003_02206120_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_02205c90_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

struct Unk_ov003_02205e58_Pair {
    u8 a, b;
};

struct Unk_ov003_02205e04_Rec {
    u8 pad_00[0xc];
    Unk_ov003_02205e58_Pair unk_0c;
};

static inline void Unk_ov003_02205e58_Set(Unk_ov003_02205e58_Pair *q, u32 a, u32 b) {
    q->a = a;
    q->b = b;
}

class Unk_ov003_02205e58_Msg {
public:
    Unk_ov003_02205e58_Msg();
    ~Unk_ov003_02205e58_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_02205e58_Pair unk_0c;
    u8 pad_0e[0x1c - 0xe];
};

class Unk_ov003_02205c28_Obj : public Unk_020d9670 {
public:
    /* 0x0ec */ u8 pad_ec[0x2cc - 0xec];
    /* 0x2cc */ u8 unk_2cc[8];
    /* 0x2d4 */ Unk_ov003_02205c90_Bits unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x458 - 0x2d8];
    /* 0x458 */ u16 unk_458;
    /* 0x45a */ u16 unk_45a;
    /* 0x45c */ u8 pad_45c[0x59c - 0x45c];
    /* 0x59c */ u8 unk_59c[0x628 - 0x59c];
    /* 0x628 */ Unk_ov003_02205c28_V3 unk_628;
    /* 0x634 */ u8 pad_634[0x688 - 0x634];
    /* 0x688 */ Unk_ov003_02205c28_V3 unk_688;
    /* 0x694 */ u8 pad_694[0x700 - 0x694];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ s32 unk_7d0;
    /* 0x7d4 */ u8 unk_7d4;
    /* 0x7d5 */ u8 unk_7d5;
    /* 0x7d6 */ u8 pad_7d6[0x7ec - 0x7d6];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x81e - 0x800];
    /* 0x81e */ u16 unk_81e;
    /* 0x820 */ u8 unk_820[0x82c - 0x820];
    /* 0x82c */ s32 unk_82c;
    /* 0x830 */ s32 unk_830;
    /* 0x834 */ s32 unk_834;
    /* 0x838 */ u8 pad_838[0x8ec - 0x838];
    /* 0x8ec */ u8 unk_8ec[2];
};

typedef Unk_ov003_02205c28_Obj Obj;
typedef Unk_ov003_02205c28_V3 V3;
typedef Unk_ov003_02205e04_Rec Rec;
typedef Unk_ov003_02205e58_Msg Msg;

extern "C" {
extern void *data_020cbb18;
extern u8 *data_021c1b3c;
extern u8 data_ov003_02258f00;
extern V3 data_ov003_02258f18;

s32 func_020100d0(Obj *o);
s32 func_02007c08(Obj *o, s32 a);
void func_0200cb50(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200ff08(Obj *o);
void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_020109c4(Obj *o);
void func_0201071c(Obj *o);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200eb58(Obj *o, u32 a, u32 b);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
void func_02010d98(void *a, s32 b);
void func_02010a58(Obj *o, s16 *a);
void func_02010a7c(u16 *out, Obj *o);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02094574(s32 a, s32 b, s32 c);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, V3 *v, void *p, s32 b);
void func_020902f8(s32 a);
s32 func_02097520(s32 a);
void func_02098738(s32 a, u16 *p);
u16 *func_02098744(s32 a);
void func_0205e24c(void *p, u16 *a, s32 b);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
u8 *func_0205dfa4(void *p);
void func_0200f43c(V3 *out, Obj *o);
void func_0203a844();
void func_0203a598();
void func_02035b94(void *p);
void func_02035b9c(void *p);
s32 func_0200e248(Obj *o, Msg *m);

V3 *func_ov003_022232c8(s32 a);
s32 func_ov003_022232e8(s32 a);
s32 func_ov003_02224d14(s32 a);
V3 *func_ov003_02224ba4(s32 a);
void func_ov003_02224bc4(s32 a);

s32 func_ov003_02205c28(Obj *o);
namespace ovcall {
s32 func_ov003_02205c90(Obj *o);
s32 func_ov003_02205f98(Obj *o);
s32 func_ov003_02205eb8(Obj *o);
s32 func_ov003_02206120(Obj *o);
s32 func_ov003_022060b4(Obj *o);
s32 func_ov003_022062d4(Obj *o);
s32 func_ov003_02206378(Obj *o);
}
void func_ov003_02205c90(Obj *o);
void func_ov003_02205e44(u8 *src, u8 *a, u8 *b);
void func_ov003_02205e50(u8 *p, u32 a, u32 b);
s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e);
void func_ov003_02205f98(Obj *o);
void func_ov003_02205eb8(Obj *o);
s32 func_ov003_0220605c(Obj *o, s32 a, s32 b);
void func_ov003_02206120(Obj *o);
void func_ov003_022060b4(Obj *o);
s32 func_ov003_0220627c(Obj *o, s32 a, s32 b);
void func_ov003_02206378(Obj *o);
void func_ov003_022062d4(Obj *o);
s32 func_ov003_02206574(Obj *o, s32 a, s32 b);
}

extern "C" s32 func_ov003_02205c28(Obj *o) {
    if (func_020100d0(o) > 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200cb50(o, 0, 1, -1);
    } else {
        func_0200ff08(o);
    }
}

extern "C" void func_ov003_02205c64(Obj *o) {
    func_02010914(o);
    if (func_0200ef08(o)) {
        func_020109c4(o);
    }
    func_0201071c(o);
    ovcall::func_ov003_02205c90(o);
}

extern "C" void func_ov003_02205c90(Obj *o) {
    u8 *p = (u8 *)&o->unk_7d0;
    if (p[0] != 0) {
        s32 t = o->unk_7fc;
        if (func_ov003_022232e8(t)) {
            V3 a, b;
            V3 *q = func_ov003_022232c8(t);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = &o->unk_5c;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            b.y = b.y + 0x1b33;
            s32 yaw = func_020e7b98(a.x - b.x, a.z - b.z);
            s32 h = func_020e7b98(a.y - b.y, func_020e9650(&a, &b));
            if (h >= 0x1800) {
                h = 0x1800;
            } else if (h <= -0x1000) {
                h = -0x1000;
            }
            s32 d = (s16)(yaw - o->unk_8e);
            if ((u16)(d + 0x2aaa) >= 0x5554) {
                func_02094574(0, 0, o->unk_7fc);
            } else {
                func_02010dbc(&o->unk_458, h, 0x400, 0x1770000, 0xc0000);
                func_02010dbc(&o->unk_45a, d, 0x400, 0x1770000, 0xc0000);
            }
        } else {
            func_02094574(0, 0, o->unk_7fc);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            if (p[1] != 0) {
                func_0200c358(o, 3, 5, -1);
            } else {
                func_0200ce98(o, 3, 1, -1);
            }
        }
    }
}

extern "C" s32 func_ov003_02205dd0(Obj *o, s32 a) {
    u8 buf[2];
    func_ov003_02205e44(o->unk_8ec, &buf[0], &buf[1]);
    return func_ov003_02205e58(o, &buf[0], buf[1], 6, a);
}

extern "C" void func_ov003_02205e04(Obj *o, Rec *r) {
    u8 x, y;
    u8 *p;
    Unk_ov003_02205e58_Pair *q = &r->unk_0c;
    p = (u8 *)&o->unk_7d0;
    x = q->a;
    y = q->b;
    if (y == 0) {
        func_020103b4(o, 0, 3, 3);
    }
    p[0] = x;
    p[1] = y;
    func_ov003_02205e50(o->unk_8ec, x, y);
}

extern "C" void func_ov003_02205e44(u8 *src, u8 *a, u8 *b) {
    *a = src[0];
    *b = src[1];
}

extern "C" void func_ov003_02205e50(u8 *p, u32 a, u32 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" s32 func_ov003_02205e58(Obj *o, u8 *p, u32 c, s32 id, s32 e) {
    Msg m;
    m.func_0200e2c0(0x8f, id, *(s16 *)&e);
    Unk_ov003_02205e58_Pair &q = m.unk_0c;
    u8 v0 = p[0];
    q.a = v0;
    q.b = c;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02205e9c(Obj *o) {
    ovcall::func_ov003_02205f98(o);
    func_0201071c(o);
    ovcall::func_ov003_02205eb8(o);
}

extern "C" void func_ov003_02205eb8(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        func_020103b4(o, 0, 3, 3);
    } else if (o->unk_700 == 0) {
        if (func_ov003_02224d14(o->unk_7fc) == 0) {
            func_02094574(0, 0, 4);
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200c358(o, 3, 5, -1);
        } else {
            V3 a, b;
            V3 *q = func_ov003_02224ba4(o->unk_7fc);
            a.x = q->x;
            a.y = q->y;
            a.z = q->z;
            V3 *pv = &o->unk_5c;
            b.x = pv->x;
            b.y = pv->y;
            b.z = pv->z;
            s32 yaw = func_020e7b98(a.x - b.x, a.z - b.z);
            s32 h = func_020e7b98(a.y - b.y, func_020e9650(&a, &b));
            if (h > 0) {
                h = 0;
            }
            func_02094574(h, 0, 4);
            s16 tmp = o->unk_8e;
            func_02010d98(&tmp, yaw);
            func_02010a58(o, &tmp);
        }
    }
}

extern "C" void func_ov003_02205f98(Obj *o) {
    func_02010914(o);
    if (o->unk_700 == 0x8f) {
        s32 f = o->unk_2d4.f;
        if (f >= 6 && f <= 0x19) {
            func_0200ec30(o, 0xd);
            o->vfunc_5c(o->unk_820);
            o->unk_81e = 0x1520;
            s32 v = (f - 6) * 0x333;
            if (f >= 0xb) {
                v = 0x1000;
            }
            o->unk_82c = v;
            o->unk_830 = v;
            o->unk_834 = v;
            if (f == 0x19) {
                func_0200ec1c(o, 0xd);
                func_ov003_02224bc4(o->unk_7fc);
            }
        }
    }
}

extern "C" s32 func_ov003_02206034(Obj *o, s32 a) {
    return func_ov003_0220605c(o, 6, a);
}

extern "C" void func_ov003_02206040(Obj *o) {
    func_02010358(o, 0x8f, 0, 0);
    func_0200ecdc(o, 0x4f);
}

extern "C" s32 func_ov003_0220605c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x89, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02206094(Obj *o) {
    ovcall::func_ov003_02206120(o);
    func_020109c4(o);
    func_0201071c(o);
    ovcall::func_ov003_022060b4(o);
}

extern "C" void func_ov003_022060b4(Obj *o) {
    if (func_02056654(o->unk_2cc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
    }
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u32 f = o->unk_2d4.f;
        if (f >= 0x18) {
            func_ov003_02205c28(o);
        }
    }
}

extern "C" void func_ov003_02206120(Obj *o) {
    func_02010914(o);
    s32 f = o->unk_2d4.f;
    if (f >= 0xe && f <= 0x18) {
        s32 *r4 = &o->unk_7d0;
        Unk_ov003_02206120_V3 v(o->unk_688.x, o->unk_688.y, o->unk_688.z);
        func_0203ee38((V3 *)&v, (V3 *)&v);
        if (o->unk_7d0 == -1) {
            *r4 = func_02090330(0x31, (V3 *)&v, &o->unk_8e, 0);
        } else {
            func_020902d4(o->unk_7d0, (V3 *)&v, &o->unk_8e, 0);
        }
    }
    if (func_020565e8(o->unk_2cc, 0x18)) {
        u16 t[2];
        s32 r = func_02097520(o->unk_7fc);
        t[0] = 0xfff1;
        func_02098738(r, &t[0]);
        t[1] = 0xfff1;
        func_0205e24c(o->unk_59c, &t[1], 0);
    }
}

extern "C" void func_ov003_022061e0(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
    }
    if (o->unk_7d0 != -1) {
        func_020902f8(o->unk_7d0);
    }
}

extern "C" s32 func_ov003_02206234(Obj *o, s32 a) {
    return func_ov003_0220627c(o, 6, a);
}

extern "C" void func_ov003_02206240(Obj *o) {
    o->unk_7d0 = -1;
    func_02010358(o, 0x7d, 3, 0);
    func_0205e1a0(o->unk_59c, 0x2a, 0, 0);
    func_0200ecdc(o, 0x85d);
}

extern "C" s32 func_ov003_0220627c(Obj *o, s32 a, s32 b) {
    Msg m;
    m.func_0200e2c0(0x82, a, b);
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_022062b4(Obj *o) {
    ovcall::func_ov003_02206378(o);
    func_020109c4(o);
    func_0201071c(o);
    ovcall::func_ov003_022062d4(o);
}

extern "C" void func_ov003_022062d4(Obj *o) {
    if (func_02056654(func_0205dfa4(o->unk_59c) + 0x9c)) {
        u8 *q = (u8 *)&o->unk_7d0;
        u8 *r1 = q + 4;
        if (*r1 != 0) {
            *r1 = *r1 - 1;
        }
        if (*r1 == 0) {
            u8 *r2 = q + 5;
            if (*r2 != 0) {
                *r2 = *r2 - 1;
            }
            if (*r2 == 0) {
                u16 t[2];
                s32 r = func_02097520(o->unk_7fc);
                t[0] = 0xfff1;
                func_02098738(r, &t[0]);
                t[1] = 0xfff1;
                func_0205e24c(o->unk_59c, &t[1], 0);
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 9, 1, -1);
            }
        }
    }
}

extern "C" void func_ov003_02206378(Obj *o) {
    func_02010914(o);
    s32 *r6 = &o->unk_7d0;
    u8 *r4 = (u8 *)r6 + 4;
    Unk_ov003_02206120_V3 v(o->unk_628.x, o->unk_628.y, o->unk_628.z);
    func_0203ee38((V3 *)&v, (V3 *)&v);
    s32 z = 0;
    s32 m1 = ~z;
    if (o->unk_7d0 == m1) {
        u16 t[2];
        (*r4)++;
        s32 cnt = *r4;
        if (cnt > 9) {
            if (cnt == 10) {
                V3 w;
                func_02010a7c(&t[0], o);
                if (t[0] == 0x137f) {
                    func_0200ecdc(o, 0x85a);
                } else {
                    func_0200ecdc(o, 0x859);
                }
                func_0200f43c(&w, o);
                data_ov003_02258f00 = 1;
                data_ov003_02258f18.x = w.x;
                data_ov003_02258f18.y = w.y;
                data_ov003_02258f18.z = w.z;
            }
            func_02010a7c(&t[1], o);
            if (t[1] == 0x137f) {
                *r6 = func_02090330(0x35, (V3 *)&v, &o->unk_8e, z);
            } else {
                *r6 = func_02090330(0x36, (V3 *)&v, &o->unk_8e, z);
            }
        }
    } else {
        func_020902d4(o->unk_7d0, (V3 *)&v, &o->unk_8e, 0);
    }
}

extern "C" void func_ov003_0220646c(Obj *o) {
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        u16 *r = func_02098744(func_02097520(o->unk_7fc));
        if (r) {
            func_0200eb58(o, 3, *r);
        }
        func_0203a844();
        func_02035b94(data_021c1b3c + 0x1c4);
    }
    if (o->unk_7d0 != -1) {
        func_020902f8(o->unk_7d0);
    }
    V3 v;
    func_0200f43c(&v, o);
    data_ov003_02258f00 = 0;
    data_ov003_02258f18.x = v.x;
    data_ov003_02258f18.y = v.y;
    data_ov003_02258f18.z = v.z;
}

extern "C" s32 func_ov003_02206500(Obj *o, s32 a) {
    return func_ov003_02206574(o, 6, a);
}

extern "C" void func_ov003_0220650c(Obj *o) {
    s32 *r2 = &o->unk_7d0;
    *r2 = -1;
    ((u8 *)r2)[4] = 0;
    ((u8 *)r2)[5] = 0x14;
    func_020103b4(o, 0x7c, 9, 0);
    func_0205e1a0(o->unk_59c, 0x28, 0, 1);
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_0203a598();
        func_02035b9c(data_021c1b3c + 0x1c4);
    }
}
