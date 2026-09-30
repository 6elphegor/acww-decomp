#include "types.h"

struct Unk_ov003_022093bc_V3 {
    s32 x, y, z;
};

struct Unk_ov003_022093bc_Pair {
    s32 a, b;
};

struct Unk_ov003_022093bc_Pay {
    u16 h;
    u8 b2;
    u8 b3;
    u8 b4;
    u8 pad_05[7];
};

class Unk_ov003_022093bc_Msg {
public:
    Unk_ov003_022093bc_Msg();
    ~Unk_ov003_022093bc_Msg();
    void func_0200e2c0(s32 a, s32 b, s16 c);
    u8 pad_00[0xc];
    Unk_ov003_022093bc_Pay unk_0c;
    u8 pad_18[4];
};

// view A of the 0x7d0 record
struct Unk_ov003_022093bc_RecA {
    u16 unk_00;
    s16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};

// view B
struct Unk_ov003_022093bc_RecB {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

// view C
struct Unk_ov003_022093bc_RecC {
    Unk_ov003_022093bc_V3 unk_00;
    u8 unk_0c;
};

struct Unk_ov003_022093bc_Sub {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
};

struct Unk_ov003_022093bc_Ptr {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
};

class Unk_ov003_022093bc_Prim {
public:
    virtual void vfunc_00();
    u8 pad_04[0x58];
    /* 0x5c */ Unk_ov003_022093bc_V3 unk_5c;
    u8 pad_68[0xec - 0x68];
};

struct Unk_ov003_022093bc_Msg3 {
    u8 pad_00[0xc];
    u8 b0;
    u8 b1;
    u8 b2;
};

typedef Unk_ov003_022093bc_V3 V3;
typedef Unk_ov003_022093bc_Pair Pair;
typedef Unk_ov003_022093bc_Msg Msg;
typedef Unk_ov003_022093bc_Pay Pay;
typedef Unk_ov003_022093bc_Sub Sub;
typedef Unk_ov003_022093bc_Ptr Ptr;

struct Unk_ov003_022093bc_Obj : public Unk_ov003_022093bc_Prim, public Unk_020e2a30 {
    /* 0x0f0 */ u8 pad_f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Ptr *unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    /* 0x2cc */ u32 unk_2cc[2];
    /* 0x2d4 */ s32 unk_2d4;
    /* 0x2d8 */ u8 pad_2d8[0x700 - 0x2d8];
    /* 0x700 */ s32 unk_700;
    /* 0x704 */ u8 pad_704[0x7d0 - 0x704];
    /* 0x7d0 */ union {
        Unk_ov003_022093bc_RecA a;
        Unk_ov003_022093bc_RecB b;
        Unk_ov003_022093bc_RecC c;
    } unk_7d0;
    u8 pad_7e0[0x7ec - 0x7e0];
    /* 0x7ec */ s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ s32 unk_7f8;
    /* 0x7fc */ u32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    /* 0x808 */ s32 unk_808;
    u8 pad_80c[0x814 - 0x80c];
    /* 0x814 */ s32 unk_814;
    /* 0x818 */ s32 unk_818;
    /* 0x81c */ u16 unk_81c;
    u8 pad_81e[0x82c - 0x81e];
    /* 0x82c */ s32 unk_82c;
    /* 0x830 */ s32 unk_830;
    /* 0x834 */ s32 unk_834;
    u8 pad_838[0x8ec - 0x838];
    /* 0x8ec */ Sub unk_8ec;
};
typedef Unk_ov003_022093bc_Obj Obj;

extern "C" {
extern void *data_020cbb18;
extern u8 data_ov003_02230af4[];

s32 func_0200e248(Obj *o, Msg *m);
s32 func_020729bc(void *g, u32 a);
void func_02007c08_dummy();
s32 func_02007c08(Obj *o, s32 a);
s32 func_02056654(void *p);
s32 func_020565e8(void *p, s32 a);
void func_020103b4(Obj *o, s32 a, u32 b, u32 c);
void func_02010358(Obj *o, s32 a, u32 b, u32 c);
void func_02010914(Obj *o);
void func_0201071c(Obj *o);
void func_020109c4(Obj *o);
void func_0200ec1c(Obj *o, u32 a);
void func_0200ec30(Obj *o, u32 a);
s32 func_0200ec44(Obj *o, u32 a);
void func_0200ecdc(Obj *o, u32 a);
void func_0200ce98(Obj *o, s32 a, s32 b, s32 c);
void func_0200f504(Obj *o, s32 a);
void func_0200f004(Obj *o, s32 a);
s32 func_0200f4c0(Obj *o, s32 a);
void func_0200ede8(Obj *o, V3 *v);
void func_0204ed8c(V3 *out, u32 a, u32 b);
void func_0204ee10(s32 *a, s32 *b, V3 *v);
s32 func_020e7b98(s32 a, s32 b);
void func_02076964(void *p, u32 v);
void func_02099124(void *p);
s32 func_0206e75c(u32 v);
s32 func_0206ec6c();
s32 func_0206ed18();
void func_0203d7f8();
s32 func_0203d820();
void func_0203a598();
void func_0203a844();
void func_0203e47c(Obj *o, Unk_020e2a30 *s);
void func_0203e488(Obj *o, Unk_020e2a30 *s);
void *func_0209750c();
void func_020a710c(void *p, void *s);
s32 func_02098044(void *p, s32 a);
void func_0209801c(void *p, s32 a);
void func_02062650(void *b, void *s);
void func_0206260c(void *b);
void func_020679ec(void *a, s32 b, void *c, s32 d);
void func_02034d70(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
s32 func_02098ffc();
s32 func_02043380(u32 a, s32 b, s32 c, u32 d);

void func_ov003_02209d50(Obj *o);
s32 func_ov003_022093bc(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void func_ov003_02209408(Obj *o);
void func_ov003_02209428(Obj *o);
void func_ov003_022094ec(Obj *o);
void func_ov003_022094fc();
void func_ov003_02209500(Obj *o, Msg *m);
void func_ov003_022095cc(Sub *s, u32 v, u8 a, u8 b, u8 c);
s32 func_ov003_022095e8(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b);
void func_ov003_02209634(Obj *o);
void func_ov003_02209650(Obj *o);
void func_ov003_02209810(Obj *o);
void func_ov003_0220987c(Obj *o, s32 a);
void func_ov003_022098bc(Obj *o, Unk_ov003_022093bc_Msg3 *m);
void func_ov003_02209900(Sub *s, u8 *a, u8 *b, u8 *c);
void func_ov003_02209914(Sub *s, u8 a, u8 b, u8 c);
s32 func_ov003_0220991c(Obj *o, Pair *p, u32 c, u32 d, s32 e);
void func_ov003_02209964(Obj *o);
void func_ov003_022099d0(Obj *o);
}

extern "C" s32 func_ov003_022093bc(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = &m.unk_0c;
    m.func_0200e2c0(0x62, a, b);
    pl->b4 = k;
    pl->b2 = p->a;
    pl->b3 = p->b;
    pl->h = v;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02209408(Obj *o) {
    func_ov003_022094ec(o);
    func_02010914(o);
    func_0201071c(o);
    func_ov003_02209428(o);
}

extern "C" void func_ov003_02209428(Obj *o) {
    Unk_ov003_022093bc_RecA *r = &o->unk_7d0.a;
    if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) {
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return;
    }
    if (o->unk_814 == 1) r->unk_07 = 1;
    if (func_02056654(o->unk_2cc) != 0 || o->unk_700 == 0x4a) {
        if (func_02056654(o->unk_2cc) != 0) func_020103b4(o, 0x4a, 3, 0);
        if (r->unk_04 == 2 && r->unk_07 == 0) return;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        Pair p;
        u32 pb = r->unk_06;
        u32 pa = r->unk_05;
        p.a = pa;
        p.b = pb;
        func_ov003_022093bc(o, r->unk_04, &p, r->unk_00, 6, -1);
    }
}

extern "C" void func_ov003_022094ec(Obj *o) {
    func_0200f504(o, o->unk_7d0.a.unk_02);
}

extern "C" void func_ov003_022094fc() {
}

extern "C" void func_ov003_02209500(Obj *o, Msg *m) {
    u32 h;
    Pay *pl = &m->unk_0c;
    Unk_ov003_022093bc_RecA *r = &o->unk_7d0.a;
    u8 k = pl->b4;
    u32 x = pl->b2;
    u32 z = pl->b3;
    V3 v;
    func_0204ed8c(&v, x, z);
    h = m->unk_0c.h;
    if (k == 2) {
        if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
            o->unk_808 = func_02043380(o->unk_7fc, 2, 0, o->unk_81c);
        }
    } else if (o->unk_700 == 0x6c) {
        k = 3;
    }
    r->unk_00 = h;
    r->unk_05 = x;
    r->unk_06 = z;
    r->unk_04 = k;
    r->unk_07 = 0;
    r->unk_02 = func_020e7b98(v.x - o->unk_5c.x, v.z - o->unk_5c.z);
    func_ov003_022095cc(&o->unk_8ec, h, (u8)x, (u8)z, k);
    func_02010358(o, 0x49, 7, 0);
    func_0200ec1c(o, 0xd);
}

extern "C" void func_ov003_022095cc(Sub *s, u32 v, u8 a, u8 b, u8 c) {
    func_02076964(s, v);
    s->unk_02 = a;
    s->unk_03 = b;
    s->unk_04 = c;
}

extern "C" s32 func_ov003_022095e8(Obj *o, u32 k, Pair *p, u32 v, s32 a, s16 b) {
    Msg m;
    Pay *pl = &m.unk_0c;
    m.func_0200e2c0(0x61, a, b);
    pl->h = v;
    pl->b4 = k;
    pl->b2 = p->a;
    pl->b3 = p->b;
    s32 r = func_0200e248(o, &m);
    return r;
}

extern "C" void func_ov003_02209634(Obj *o) {
    func_ov003_02209810(o);
    func_0201071c(o);
    func_ov003_02209650(o);
}

extern "C" void func_ov003_02209650(Obj *o) {
    Unk_ov003_022093bc_RecB *g = &o->unk_7d0.b;
    u8 *st = &g->unk_02;
    switch (g->unk_02) {
    case 0:
        if (func_02056654(o->unk_2cc) == 0) break;
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        func_0200ce98(o, 3, 1, -1);
        if (func_020729bc(data_020cbb18, o->unk_7fc) == 0) break;
        func_02099124(&o->unk_81c);
        break;
    case 1:
        if (o->unk_700 == 0x50) {
            if (func_02056654(o->unk_2cc) == 0) break;
            func_020103b4(o, 0x6c, 3, 3);
        }
        if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
            s32 s = o->unk_818;
            if (s == 5) {
                if (func_0206e75c(o->unk_81c) != 0) o->unk_818 = 6;
            } else if (s == 6) {
                if (func_0206ec6c() == 0) break;
                o->unk_818 = 0xf;
                if (func_0206ed18() == 0) goto l76c;
                func_0200ec1c(o, 0xd);
                if (func_0200ec44(o, 0x11) != 0) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
                o->unk_7f8 = func_02007c08(o, o->unk_7ec);
                func_0200ce98(o, 3, 1, -1);
            } else if (s >= 0xf) {
            l76c:
                if (func_0200ec44(o, 0x11) != 0) {
                    func_0200ec1c(o, 0x11);
                    func_0203e47c(o, o);
                }
                func_0203d7f8();
                *st = *st + 1;
            }
        } else {
            o->unk_7f8 = func_02007c08(o, o->unk_7ec);
            func_0200ec1c(o, 0xd);
        }
        break;
    case 2:
        if (o->unk_808 != -1) break;
        Pair p;
        u32 pb = g->unk_01;
        u32 v = o->unk_81c;
        u32 pa = g->unk_00;
        p.a = pa;
        p.b = pb;
        func_ov003_022095e8(o, 2, &p, v, 6, -1);
        func_0200ec1c(o, 0xd);
        break;
    }
}

extern "C" void func_ov003_02209810(Obj *o) {
    s32 r4;
    func_02010914(o);
    if (o->unk_700 == 0x50) {
        s32 t = (s32)(((u32)(o->unk_2d4 >> 12) << 16) >> 4);
        r4 = 0x1000 - t / 6;
        if (r4 < 0) {
            r4 = 0;
            func_0200ec1c(o, 0xd);
        }
    } else {
        r4 = 0;
    }
    o->unk_82c = r4;
    o->unk_830 = r4;
    o->unk_834 = r4;
    func_0200f004(o, r4);
}

extern "C" void func_ov003_0220987c(Obj *o, s32 a) {
    u8 b[3];
    func_ov003_02209900(&o->unk_8ec, &b[0], &b[1], &b[2]);
    Pair p;
    p.a = b[0];
    p.b = b[1];
    func_ov003_0220991c(o, &p, b[2], 6, a);
}

extern "C" void func_ov003_022098bc(Obj *o, Unk_ov003_022093bc_Msg3 *m) {
    u8 *q = &m->b0;
    Unk_ov003_022093bc_RecB *r = &o->unk_7d0.b;
    u8 t2 = q[2];
    u8 t0 = m->b0;
    u8 t1 = q[1];
    r->unk_02 = t2;
    r->unk_00 = t0;
    r->unk_01 = t1;
    func_ov003_02209914(&o->unk_8ec, t0, t1, t2);
    func_02010358(o, 0x50, 3, 0);
    func_0200ecdc(o, 0x4f);
}

extern "C" void func_ov003_02209900(Sub *s, u8 *a, u8 *b, u8 *c) {
    *a = s->unk_00;
    *b = s->unk_01;
    *c = s->unk_02;
}

extern "C" void func_ov003_02209914(Sub *s, u8 a, u8 b, u8 c) {
    s->unk_00 = a;
    s->unk_01 = b;
    s->unk_02 = c;
}

extern "C" s32 func_ov003_0220991c(Obj *o, Pair *p, u32 c, u32 d, s32 e) {
    Msg m;
    u8 *pl = (u8 *)&m.unk_0c;
    m.func_0200e2c0(0x60, d, *(s16 *)&e);
    pl[0] = p->a;
    pl[1] = p->b;
    pl[2] = c;
    s32 r = func_0200e248(o, &m);
    return r;
}

static inline BOOL Unk_ov003_022099d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_ov003_02209964(Obj *o) {
    func_ov003_02209d50(o);
    if (func_020729bc(data_020cbb18, o->unk_7fc) != 0) {
        if ((u32)(o->unk_2d4 << 4) >> 16 >= 0x19) func_020109c4(o);
    } else {
        V3 v;
        V3 *pv = &o->unk_7d0.c.unk_00;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        func_0200ede8(o, &v);
    }
    func_0201071c(o);
    func_ov003_022099d0(o);
}

extern "C" void func_ov003_022099d0(Obj *o) {
    void *l;
    struct {
        u32 pad;
        s32 a0, b0, a1, b1, a2, b2;
        Pair p0, p1, p2;
    } ab;
    u8 buf[0x24];
    V3 v0, v1, v2;
    if (o->unk_700 == 0x49) {
        if (func_02056654(o->unk_2cc) != 0) func_020103b4(o, 0x4f, 3, 0);
        return;
    }
    Unk_ov003_022093bc_RecC *r5 = &o->unk_7d0.c;
    u8 *r6 = &r5->unk_0c;
    s32 lvl = (u32)(o->unk_2d4 << 4) >> 16;
    l = data_020cbb18;
    if (func_020729bc(l, o->unk_7fc) != 0) {
        if (func_020565e8(o->unk_2cc, 0x13) != 0) func_0203a598();
    }
    if (lvl < 0x19) return;
    if (func_0200f4c0(o, 0x400) == 0) return;
    if (func_02056654(o->unk_2cc) == 0) return;
    if (func_020729bc(l, o->unk_7fc) == 0) {
        func_0200ec1c(o, 0x12);
        o->unk_7f8 = func_02007c08(o, o->unk_7ec);
        return;
    }
    switch (*r6) {
    case 0: {
        if (func_0203d820() == 0) break;
        *r6 = 1;
        func_0203e488(o, o);
        func_0200ec30(o, 0x11);
        void *q = func_0209750c();
        Unk_020e2a30 &s = *o;
        func_020a710c(&s, data_ov003_02230af4);
        if (Unk_ov003_022099d0_R(&o->unk_81c, 0x136a, 0x136a)) {
            if (func_02098044(q, 0x27) == 0) {
                o->unk_10a = 0x21;
                func_0209801c(q, 0x27);
                goto l54;
            }
        }
        if (Unk_ov003_022099d0_R(&o->unk_81c, 0x137b, 0x137b)) {
            if (func_02098044(q, 0x28) == 0) {
                o->unk_10a = 0x23;
                func_0209801c(q, 0x28);
                goto l54;
            }
        }
        o->unk_10a = 1;
        func_02062650(buf, &o->unk_81c);
        func_020679ec(o->unk_128, 0, buf, 7);
        func_0206260c(buf);
    l54:
        o->unk_128->unk_08 = 1;
        func_02034d70(0x12);
        func_02034dd0(0xc, 0, 1);
        func_02034e10(0xd, 0x39, 0x7f, 1);
        o->unk_818 = 0xa;
        break;
    }
    case 1:
        if (o->unk_128 != 0) {
            if (o->unk_128->unk_04 != 0) *r6 = 2;
        }
        break;
    case 2:
        if (func_02098ffc() == -1) {
            *r6 = 3;
            o->unk_818 = 2;
            break;
        }
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        ab.a0 = 0;
        ab.b0 = 0;
        v0.x = r5->unk_00.x;
        v0.y = r5->unk_00.y;
        v0.z = r5->unk_00.z;
        func_0204ee10(&ab.a0, &ab.b0, &v0);
        ab.p0.a = ab.a0;
        ab.p0.b = ab.b0;
        func_ov003_0220991c(o, &ab.p0, 0, 6, -1);
        func_0203a844();
        break;
    case 3:
        if (o->unk_818 >= 0xf) {
            *r6 = 4;
            break;
        }
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        ab.a1 = 0;
        ab.b1 = 0;
        v1.x = r5->unk_00.x;
        v1.y = r5->unk_00.y;
        v1.z = r5->unk_00.z;
        func_0204ee10(&ab.a1, &ab.b1, &v1);
        ab.p1.a = ab.a1;
        ab.p1.b = ab.b1;
        func_ov003_0220991c(o, &ab.p1, 1, 6, -1);
        func_0203a844();
        break;
    case 4:
        if (o->unk_128 == 0) break;
        if (o->unk_128->unk_04 != 0) break;
        if (func_0206ec6c() == 0) break;
        func_0203e47c(o, o);
        func_0200ec1c(o, 0x11);
        func_0203d7f8();
        *r6 = 5;
        break;
    case 5:
        if (o->unk_808 != -1) break;
        ab.a2 = 0;
        ab.b2 = 0;
        v2.x = r5->unk_00.x;
        v2.y = r5->unk_00.y;
        v2.z = r5->unk_00.z;
        func_0204ee10(&ab.a2, &ab.b2, &v2);
        u32 hh = o->unk_81c;
        ab.p2.a = ab.a2;
        ab.p2.b = ab.b2;
        func_ov003_022095e8(o, 2, &ab.p2, hh, 6, -1);
        func_0203a844();
        break;
    }
}
