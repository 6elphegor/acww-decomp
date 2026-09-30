#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov003_0220bc84_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0220bc84_T48 {
    s32 v[12];
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
    /* 0x5c */ Unk_ov003_0220bc84_V3 unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ Unk_ov003_0220bc84_V3 unk_c4;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u8 pad_d2[0xd4 - 0xd2];
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

class Unk_020e2a30 {
public:
    virtual void vfunc_00();
};

struct Unk_ov003_0220bc84_Bits {
    u32 a : 12;
    u32 f : 16;
    u32 b : 4;
};

struct Unk_ov003_0220bc84_Pair {
    u8 a, b;
};

struct Unk_ov003_0220bc84_Rec {
    u8 pad_00[0xc];
    Unk_ov003_0220bc84_Pair unk_0c;
    u8 unk_0e;
};

struct Unk_ov003_0220bc84_H {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_ov003_0220bc84_State {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ u16 unk_04;
    /* 0x6 */ u8 unk_06;
    /* 0x7 */ u8 unk_07;
    /* 0x8 */ u8 unk_08;
    /* 0x9 */ u8 unk_09;
    /* 0xa */ u8 unk_0a;
};

class Unk_ov003_0220bc84_Msg {
public:
    Unk_ov003_0220bc84_Msg();
    ~Unk_ov003_0220bc84_Msg();
    void func_0200e2c0(u32 a, u32 b, u32 c);
    u8 pad_00[0xc];
    Unk_ov003_0220bc84_Pair unk_0c;
    u8 pad_0e[0x1c - 0xe];
};

class Unk_ov003_0220bc84_Obj : public Unk_020d9670, public Unk_020e2a30 {
public:
    /* 0x0f0 */ u8 pad_f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov003_0220bc84_H *unk_128;
    /* 0x12c */ u8 pad_12c[0x294 - 0x12c];
    /* 0x294 */ Unk_ov003_0220bc84_T48 unk_294;
    /* 0x2c4 */ u8 pad_2c4[0x2d0 - 0x2c4];
    /* 0x2d0 */ Unk_ov003_0220bc84_Bits unk_2d0;
    /* 0x2d4 */ Unk_ov003_0220bc84_Bits unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x458 - 0x2d8];
    /* 0x458 */ s16 unk_458;
    /* 0x45a */ s16 unk_45a;
    /* 0x45c */ u8 pad_45c[0x59c - 0x45c];
    /* 0x59c */ u8 unk_59c[0x688 - 0x59c];
    /* 0x688 */ Unk_ov003_0220bc84_V3 unk_688;
    /* 0x694 */ Unk_ov003_0220bc84_T48 unk_694;
    /* 0x6c4 */ u8 pad_6c4[0x700 - 0x6c4];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ Unk_ov003_0220bc84_State unk_7d0;
    /* 0x7db */ u8 pad_7dc[0x7ec - 0x7dc];
    /* 0x7ec */ s32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ s32 unk_7fc;
    /* 0x800 */ u8 pad_800[0x818 - 0x800];
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u8 pad_81c[0x8ec - 0x81c];
    /* 0x8ec */ u8 unk_8ec[8];
};

typedef Unk_ov003_0220bc84_Obj Obj;
typedef Unk_ov003_0220bc84_V3 V3;
typedef Unk_ov003_0220bc84_T48 T48;
typedef Unk_ov003_0220bc84_Rec Rec;
typedef Unk_ov003_0220bc84_Msg Msg;
typedef Unk_ov003_0220bc84_State State;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230b04[];

void func_02010914(Obj *o);
s32 func_0200ef08(Obj *o);
void func_0201071c(Obj *o);
void func_0200e7f4(Obj *o);
void func_0200f4c0(Obj *o, s32 a);
s32 func_020729bc(void *g, s32 a);
s32 func_02007c08(Obj *o, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
void func_0200ec1c(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
s32 func_0200e248(Obj *o, Msg *m);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200c358(Obj *o, s32 a, s32 b, s32 c);
void func_02008e50(Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02010dbc(void *p, s32 a, s32 b, s32 c, s32 d);
void func_0203ee38(V3 *a, V3 *b);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
void func_020902d4(s32 a, V3 *v, void *p, s32 b);
void func_020902f8(s32 a);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
s32 func_02063b8c(s32 a);
s32 func_0203d820();
void func_0203e488(Obj *o, Unk_020e2a30 *b);
void func_0203e47c(Obj *o, Unk_020e2a30 *b);
void func_020a710c(void *p, void *q);
void func_0203c2d0(s16 *p);
void func_0203a598();
void func_0203a844();
void func_0203d7f8();
s32 func_0203c31c();
s32 func_02098ffc();
s32 func_020429d0(s32 a, s32 *p);
void func_02034d84(s32 a);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0208a578();
void func_0208c0f4();
void func_0207881c(void *p);
u32 func_020769ac(u8 *p);
void func_020769c4(u8 *p, u32 a);

void func_ov003_02226fac(u32 a);
void func_ov003_02212034(T48 *t, V3 *d);
void func_ov003_02227248(u32 a, u32 b);
s32 func_ov003_0222746c(u32 a, s32 b);
s32 func_ov003_02227434(u32 a);
V3 *func_ov003_02227320(u8 a);
void func_ov003_022261ec(u32 a, s16 *p, T48 *t, s32 b);
u32 func_ov003_0220c454(u8 *p);
s32 func_ov003_0220c448(u8 *p);
void func_ov003_0220c47c(u8 *p, s32 a);
void func_ov003_0220c488(u8 *p, u32 a);
void func_ov003_0220c458(u8 *p, u8 *a, u8 *b, u8 *c, u8 *d, u32 *e);
void func_ov003_0220c48c(u8 *p, u32 a, u32 b, u32 c, u32 d, s32 e);
void func_ov003_0220c4ac(Obj *o, u32 a, u32 b, u32 c, s32 d, s32 e);

void func_ov003_0220ba90(Obj *o);
s32 func_ov003_0220baa4(Obj *o, s32 a);
void func_ov003_0220badc(Obj *o, Rec *r);
u32 func_ov003_0220bb30(u8 *p);
u32 func_ov003_0220bb3c(u8 *p);
void func_ov003_0220bb40(u8 *p, u8 *a, u8 *b, u16 *c);
void func_ov003_0220bb60(u8 *p, u32 a);
void func_ov003_0220bb6c(u8 *p, u32 a);
void func_ov003_0220bb70(u8 *p, u32 a, u32 b, u32 c);
s32 func_ov003_0220bb90(Obj *o, u32 a, u32 b, s32 id, s32 e);
void func_ov003_0220bbd4(Obj *o);
namespace ovcall {
void func_ov003_0220bc84(Obj *o);
}
void func_ov003_0220bc84(Obj *o);
void func_ov003_0220c2dc(Obj *o);
void func_ov003_0220c30c(Obj *o, s32 a);
void func_ov003_0220c350(Obj *o, Rec *r);
}

extern "C" void func_ov003_0220ba90(Obj *o) {
    o->unk_458 = 0;
    o->unk_45a = 0;
}

extern "C" s32 func_ov003_0220baa4(Obj *o, s32 a) {
    u8 buf[4];
    func_ov003_0220bb40(o->unk_8ec, &buf[0], &buf[1], (u16 *)&buf[2]);
    return func_ov003_0220bb90(o, buf[0], buf[1], 6, a);
}

extern "C" void func_ov003_0220badc(Obj *o, Rec *r) {
    u8 x, y;
    Unk_ov003_0220bc84_Pair *q = &r->unk_0c;
    u8 *p = (u8 *)&o->unk_7d0;
    x = q->a;
    y = q->b;
    p[0] = x;
    p[1] = y;
    func_ov003_0220bb70(o->unk_8ec, x, y, 0);
    func_02010358(o, 0x5d, 3, 0);
    func_0205e1a0(o->unk_59c, 6, 3, 1);
    func_0200ecdc(o, 0x4f);
}

extern "C" u32 func_ov003_0220bb30(u8 *p) {
    return func_020769ac(p + 2);
}

extern "C" u32 func_ov003_0220bb3c(u8 *p) {
    return p[1];
}

extern "C" void func_ov003_0220bb40(u8 *p, u8 *a, u8 *b, u16 *c) {
    *a = p[0];
    *b = func_ov003_0220bb3c(p);
    *c = func_ov003_0220bb30(p);
}

extern "C" void func_ov003_0220bb60(u8 *p, u32 a) {
    func_020769c4(p + 2, a);
}

extern "C" void func_ov003_0220bb6c(u8 *p, u32 a) {
    p[1] = a;
}

extern "C" void func_ov003_0220bb70(u8 *p, u32 a, u32 b, u32 c) {
    p[0] = a;
    func_ov003_0220bb6c(p, b);
    func_ov003_0220bb60(p, c);
}

extern "C" s32 func_ov003_0220bb90(Obj *o, u32 a, u32 b, s32 id, s32 e) {
    Msg m;
    m.func_0200e2c0(0x58, id, *(s16 *)&e);
    Unk_ov003_0220bc84_Pair &q = m.unk_0c;
    q.a = a;
    q.b = b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_0220bbd4(Obj *o) {
    func_02010914(o);
    volatile V3 sv;
    V3 *pv = &o->unk_c4;
    sv.x = o->unk_c4.x;
    sv.y = pv->y;
    sv.z = pv->z;
    s16 d0 = o->unk_d0;
    T48 a = o->unk_294;
    T48 b = o->unk_694;
    func_0200e7f4(o);
    func_0200ef08(o);
    func_0201071c(o);
    ovcall::func_ov003_0220bc84(o);
    o->unk_c4.x = sv.x;
    o->unk_c4.y = sv.y;
    o->unk_c4.z = sv.z;
    o->unk_d0 = d0;
    o->unk_294 = a;
    o->unk_694 = b;
}

extern "C" void func_ov003_0220bc84(Obj *o) {
    struct {
        s16 v[5];
        s32 pr[2];
    } L2;
    T48 t;
    V3 vv;
    T48 t2;
    V3 d;
    V3 w;
    V3 pos;
    u8 *sub;
    u32 mode;
    u8 *p7;
    u8 b8;
    void *g;
    State *rec = &o->unk_7d0;
    sub = o->unk_8ec;
    mode = rec->unk_06;
    u8 *st = &rec->unk_09;
    p7 = &rec->unk_07;
    b8 = rec->unk_08;
    if (mode == 0) {
        func_0200f4c0(o, 0x400);
    }
    s32 r7 = o->unk_7fc;
    if (*st == 0) {
        if (func_020729bc(data_020cbb18, r7)) {
            *st = 1;
        } else {
            *st = 9;
            if (*p7 != 0xff) {
                func_ov003_02226fac(*p7);
            }
        }
        u32 bt = rec->unk_08;
        if (bt == 0x18 || bt == 0x30 || (u8)(bt + 0xce) <= 1) {
            t = o->unk_694;
            func_ov003_02212034(&t, 0);
            vv.x = ((V3 *)((u8 *)&t + 0x24))->x;
            vv.y = ((V3 *)((u8 *)&t + 0x24))->y;
            vv.z = ((V3 *)((u8 *)&t + 0x24))->z;
            func_0203ee38(&vv, &vv);
            rec->unk_00 = func_02090330(0x25, &vv, 0, 0);
        }
        func_ov003_02227248(b8, (u8)r7);
    }
    t2 = o->unk_694;
    d.x = 0x4cd;
    d.y = 0;
    d.z = 0;
    if (o->unk_700 != 0x5c) {
        d.x = d.x + 0x333;
        d.y = d.y + 0x19a;
        d.z = d.z - 0x19a;
    } else {
        s32 f = o->unk_2d4.f;
        if (f >= 0x24) {
            s32 num = (f - 0x23) * 0x19a;
            s32 den = o->unk_2d0.f - 0x24;
            s32 e = num / den;
            d.x = d.x + e * 2;
            d.y = d.y + e;
            d.z = d.z - e;
        }
    }
    func_ov003_02212034(&t2, &d);
    if (rec->unk_00 != -1) {
        w.x = ((V3 *)((u8 *)&t2 + 0x24))->x;
        w.y = ((V3 *)((u8 *)&t2 + 0x24))->y;
        w.z = ((V3 *)((u8 *)&t2 + 0x24))->z;
        func_0203ee38(&w, &w);
        func_020902d4(rec->unk_00, &w, 0, 0);
    }
    L2.v[2] = 0;
    L2.v[3] = 0;
    L2.v[4] = 0;
    u32 fr = o->unk_2d4.f;
    if (fr < 0x17 && o->unk_700 == 0x5c) {
        goto tail;
    }
    g = data_020cbb18;
    if (!func_020729bc(g, o->unk_7fc)) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        if (*st < 6 || *st == 9) {
            if (func_ov003_0220c454(sub) == 6) {
                func_ov003_0222746c((u8)r7, func_ov003_0220c448(sub));
                func_020103b4(o, 0, 3, 3);
                *st = 7;
            }
        }
    }
    L2.v[2] = 0x64;
    L2.v[3] = 0x64;
    L2.v[4] = 0x64;
    if (o->unk_700 == 0x5c) {
        u32 f2 = o->unk_2d4.f;
        if (f2 <= 0x21) {
            s16 t = (f2 - 0x17) * 10;
            if (t >= 0x64) {
                t = 0x64;
            }
            L2.v[2] = t;
            L2.v[3] = t;
            L2.v[4] = t;
        }
    }
    switch (*st) {
    case 0:
        break;
    case 1: {
        if (func_0203d820() == 0) {
            break;
        }
        *st = 2;
        Unk_020e2a30 *sec = o;
        func_0203e488(o, sec);
        func_0200ec30(o, 0x11);
        Unk_020e2a30 &sr = *o;
        func_020a710c(&sr, data_ov003_02230b04);
        o->unk_10a = b8;
        L2.v[1] = b8 + 0x12b0;
        func_0203c2d0(&L2.v[1]);
        o->unk_128->unk_08 = 1;
        func_0203a598();
        if (func_0200ec44(o, 0x1a)) {
            func_02034d84(0x3f);
            func_0200ec1c(o, 0x1a);
        }
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 0xe);
        func_02034e10(0xd, 0x39, 0x7f, 1);
        break;
    }
    case 2: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 == 0) {
            break;
        }
        if (func_0203c31c() != 0 && rec->unk_0a == 0) {
            *st = 8;
            o->unk_818 = 0xd;
            break;
        }
        *st = 3;
        o->unk_818 = 8;
        break;
    }
    case 3: {
        if (func_02098ffc() == -1) {
            L2.pr[0] = 0;
            L2.pr[1] = 0;
            if (func_020429d0(0x10, L2.pr)) {
                *st = 4;
                o->unk_818 = 0;
            } else {
                *st = 5;
                o->unk_818 = 1;
            }
            return;
        }
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_ov003_0220bb90(o, b8, 0, 6, -1);
        func_0203a844();
        break;
    }
    case 4: {
        if (o->unk_818 >= 0xf) {
            *st = 5;
            break;
        }
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_ov003_0220bb90(o, b8, 1, 6, -1);
        func_0203a844();
        break;
    }
    case 5: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        if (rec->unk_00 != -1) {
            func_020902f8(rec->unk_00);
        }
        s16 ang = func_02063b8c(0x2aaa) - 0x1555;
        func_ov003_0222746c((u8)r7, ang);
        func_ov003_0220c47c(sub, ang);
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_020103b4(o, 0, 3, 3);
        *st = 6;
        func_ov003_0220c488(sub, 6);
        func_0203a844();
        return;
    }
    case 6: {
        if (func_ov003_02227434((u8)r7) != 3) {
            if (o->unk_458 == 0 && o->unk_45a == 0) {
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                switch (mode) {
                case 2:
                    if (func_020729bc(g, o->unk_7fc)) {
                        if (func_0200ec44(o, 0x11)) {
                            func_0200ec1c(o, 0x11);
                            Unk_020e2a30 *sec = o;
                            func_0203e47c(o, sec);
                        }
                        func_0203d7f8();
                    }
                case 0:
                case 3:
                    func_0200ce98(o, 3, 1, -1);
                    return;
                case 1:
                    func_0200c358(o, 3, 5, -1);
                    return;
                }
                return;
            }
            func_02010dbc(&o->unk_458, 0, 0x400, 0x1770000, 0xc0000);
            func_02010dbc(&o->unk_45a, 0, 0x400, 0x1770000, 0xc0000);
            return;
        } else {
            V3 *q = func_ov003_02227320(r7);
            V3 *pv = &o->unk_5c;
            pos.x = o->unk_5c.x;
            pos.y = pv->y;
            pos.z = pv->z;
            pos.y = pos.y + 0x1b33;
            s32 yaw = func_020e7b98(q->x - pos.x, q->z - pos.z);
            s32 h = func_020e7b98(q->y - pos.y, func_020e9650(q, &pos));
            if (h >= 0x1800) {
                h = 0x1800;
            }
            s16 dy = yaw - o->unk_8e;
            func_02010dbc(&o->unk_458, h, 0x400, 0x1770000, 0xc0000);
            func_02010dbc(&o->unk_45a, dy, 0x400, 0x1770000, 0xc0000);
            return;
        }
    }
    case 7: {
        s32 r = func_ov003_02227434((u8)r7);
        if (r == 3 || r == 0) {
            *st = 6;
        }
        return;
    }
    case 8: {
        Unk_ov003_0220bc84_H *h = o->unk_128;
        if (h == 0) {
            break;
        }
        if (h->unk_04 != 0) {
            break;
        }
        Unk_020e2a30 *sec = o;
        func_0203e47c(o, sec);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        func_02008e50(o, 0, b8, *p7, 6, -1);
        return;
    }
    }
tail:
    func_ov003_022261ec((u8)r7, &L2.v[2], &t2, 0);
}

extern "C" void func_ov003_0220c2dc(Obj *o) {
    if (o->unk_7d0.unk_00 != -1) {
        func_020902f8(o->unk_7d0.unk_00);
    }
    o->unk_458 = 0;
    o->unk_45a = 0;
}

extern "C" void func_ov003_0220c30c(Obj *o, s32 a) {
    u8 buf[4];
    u32 e;
    func_ov003_0220c458(o->unk_8ec, &buf[0], &buf[1], &buf[2], &buf[3], &e);
    func_ov003_0220c4ac(o, buf[3], buf[1], buf[2], 6, a);
}

extern "C" void func_ov003_0220c350(Obj *o, Rec *r) {
    u8 *q = &r->unk_0c.a;
    u32 a = q[0];
    u32 b = q[1];
    u32 c = q[2];
    if (c == 0) {
        func_02010358(o, 0x5c, 3, 0);
        func_0205e1a0(o->unk_59c, 5, 3, 1);
    }
    State *rec = &o->unk_7d0;
    rec->unk_07 = a;
    rec->unk_08 = b;
    rec->unk_06 = c;
    rec->unk_04 = 0x39;
    rec->unk_0a = func_0203c31c();
    if (c != 0) {
        if (c == 3) {
            rec->unk_09 = 3;
            rec->unk_04 = 0x3b;
            o->unk_818 = 8;
        } else {
            if (o->unk_700 == 0x6c) {
                rec->unk_06 = 2;
                func_020103b4(o, 0, 3, 3);
            }
            rec->unk_09 = 7;
        }
    } else {
        if (func_020729bc(data_020cbb18, o->unk_7fc)) {
            func_02034dd0(0x12, 0, 0);
            func_0208a578();
            func_0208c0f4();
            func_0207881c(&o->unk_5c);
        }
        rec->unk_09 = 0;
    }
    rec->unk_00 = -1;
    if (func_020729bc(data_020cbb18, o->unk_7fc)) {
        func_ov003_0220c48c(o->unk_8ec, rec->unk_09, a, b, c, 0);
    }
}
