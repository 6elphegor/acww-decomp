// mwcc-version: 1.2/base
#include "types.h"

struct Unk_0223f44c_Vec {
    s32 x, y, z;
};

struct Unk_0223f6bc_V3 {
    s32 x, y, z;
    Unk_0223f6bc_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

// Vector member of the static camera tables. It has a (empty) destructor, which makes the compiler keep a stack
// temporary for every initialiser (the original __sinit has a 0x4c byte frame).
struct Unk_ov004_0223f44c_V3D {
    s32 x, y, z;
    Unk_ov004_0223f44c_V3D(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov004_0223f44c_V3D() {}
};

// 0x20-byte static table; the destructor is main's func_020b... (see notes: needs main 0x0203c230 renamed)
struct Unk_0203c230 {
    s16 a, b;
    s32 w0;
    Unk_ov004_0223f44c_V3D p;
    Unk_ov004_0223f44c_V3D q;
    ~Unk_0203c230();
};
typedef Unk_0203c230 Unk_0223f44c_Tbl;

// 4-byte static object (four bytes set by __sinit)
struct Unk_ov004_0223f43c_B4 {
    u8 a, b, c, d;
    Unk_ov004_0223f43c_B4(u8 pa, u8 pb, u8 pc, u8 pd) {
        a = pa;
        b = pb;
        c = pc;
        d = pd;
    }
};

struct Unk_0223f44c_Mode {
    s16 v0, v2, v4, v6, v8, va, vc;
    u8 b0 : 1;
    u8 b1 : 1;
};

struct Unk_0223f534_Ent {
    s32 w0, w1, w2, w3, w4, w5, w6;
    s16 h1c, h1e, h20;
    s16 pad;
};

// Camera object (data_021c3070); see src/main/unk_0203a058.cpp.
struct Unk_021c3070 {
    /* 0x00 */ u8 unk_00[0xfc];
    /* 0xfc */ s16 unk_fc, unk_fe;
    /* 0x100 */ s32 unk_100, unk_104, unk_108, unk_10c, unk_110, unk_114, unk_118;
    /* 0x11c */ u8 unk_11c[0x148 - 0x11c];
    /* 0x148 */ s16 unk_148, unk_14a;
    /* 0x14c */ s32 unk_14c, unk_150, unk_154, unk_158, unk_15c, unk_160, unk_164;
    /* 0x168 */ u8 unk_168[0x1cc - 0x168];
    /* 0x1cc */ Unk_0223f44c_Vec unk_1cc;
    /* 0x1d8 */ s32 unk_1d8, unk_1dc, unk_1e0, unk_1e4, unk_1e8;
    /* 0x1ec */ s32 unk_1ec, unk_1f0;
    /* 0x1f4 */ u8 unk_1f4, unk_1f5, unk_1f6;
    /* 0x1f7 */ u8 unk_1f7[0x21c - 0x1f7];
    /* 0x21c */ Unk_0223f44c_Mode unk_21c;
};

struct Unk_ov004_0223fe00_Sub {
    s16 unk_00;
    u8 pad_02[0x12];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
};

extern "C" {
extern Unk_021c3070 *data_021c3070;
extern Unk_0223f44c_Vec data_021f4880;
extern s16 data_02135f44[];
extern u32 data_020c8ce8[][3];
extern Unk_0223f44c_Tbl data_ov004_0224f36c;
extern Unk_0223f44c_Tbl data_ov004_0224f34c;
extern Unk_0223f44c_Tbl data_ov004_0224f38c;
extern u32 data_ov004_0224f31c[];
extern u32 data_ov004_0224f32c[];
extern u32 data_ov004_0224f33c[];
extern Unk_0223f534_Ent data_ov004_0224f3ac[];
extern const Unk_0223f44c_Vec data_ov004_02246838;
extern const Unk_0223f44c_Vec data_ov004_0224682c;
// linker-provided absolute symbol (overlay id 2 == the value 2): the original loads this constant from the literal pool

Unk_0223f44c_Vec *func_020947f0(s32 a);
s32 func_020b50e8(void);
s32 func_02063b8c(s32 a);
s32 func_02002bdc(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffcbb0(void *out, Unk_021c3070 *o);
void func_01ffca58(void *a, void *b, void *c);
void func_01ffca8c(void *a, void *b, void *c);
void func_01ffd070(void *out, void *a, void *b);
void func_020e9790(void *out, void *in, s32 s);
void func_020e93a0(void *v, s32 a);
void func_0203a458(void);
void func_0203a468(void);
void func_0203a234(Unk_021c3070 *o, s32 a);
s32 func_0203a7b8(void *p, void *a, s32 *b, s32 *out);

// methods of Unk_0203b350 / Unk_020d93b8 (main), called through their real symbols with the object first
s32 _ZN12Unk_0203b35013func_0203bc48Ev(Unk_021c3070 *o);
s16 _ZN12Unk_020d93b813func_0203bc68Ev(Unk_021c3070 *o);
s16 _ZN12Unk_020d93b813func_0203bc7cEv(Unk_021c3070 *o);
s32 _ZN12Unk_0203b35013func_0203b7acEi(Unk_021c3070 *o, s32 a);
void _ZN12Unk_0203b35013func_0203b56cEv(Unk_021c3070 *o);
void _ZN12Unk_0203b35013func_0203b484EP14Unk_0203b350_Viii(Unk_021c3070 *o, void *a, s32 b, s32 c, s32 d);
void _ZN12Unk_020d93b813func_0203c07cEPj(Unk_021c3070 *o, u32 *src);
void _ZN12Unk_020d93b813func_0203c09cEi(Unk_021c3070 *o, s32 a);
void _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(Unk_021c3070 *o, s32 a, s32 b);
void _ZN12Unk_020d93b813func_0203c0b0Eiii(Unk_021c3070 *o, s32 a, s32 b, s32 c);
s32 _ZN12Unk_0203b35013func_0203b8e0EPi(Unk_021c3070 *o, s32 *p);
#define func_0203bc48 _ZN12Unk_0203b35013func_0203bc48Ev
#define func_0203bc68 _ZN12Unk_020d93b813func_0203bc68Ev
#define func_0203bc7c _ZN12Unk_020d93b813func_0203bc7cEv
#define func_0203b7ac _ZN12Unk_0203b35013func_0203b7acEi
#define func_0203b56c _ZN12Unk_0203b35013func_0203b56cEv
#define func_0203b484 _ZN12Unk_0203b35013func_0203b484EP14Unk_0203b350_Viii
#define func_0203c07c _ZN12Unk_020d93b813func_0203c07cEPj
#define func_0203c09c _ZN12Unk_020d93b813func_0203c09cEi
#define func_0203c1a4 _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos
#define func_0203c0b0 _ZN12Unk_020d93b813func_0203c0b0Eiii
#define func_0203b8e0 _ZN12Unk_0203b35013func_0203b8e0EPi

void func_ov004_0223f44c(Unk_021c3070 *o);
void func_ov004_0223f534(Unk_021c3070 *o);
void func_ov004_0223f644(Unk_021c3070 *o);
}

#define Unk_0223f44c_Finish(o)                                          \
    do {                                                                \
        Unk_0223f44c_Vec cam;                                           \
        s32 p, q;                                                       \
        func_0203b56c(o);                                               \
        func_01ffcbb0(&cam, o);                                         \
        p = func_0203bc7c(o);                                           \
        q = func_0203bc68(o);                                           \
        func_0203b484(o, &cam, p, q, func_0203bc48(o));                 \
    } while (0)

extern "C" {

void func_ov004_0223fe00(Unk_021c3070 *self, Unk_ov004_0223fe00_Sub *a) {
    Unk_0223f44c_Vec *p;
    s32 lim;
    s32 sp4;
    s32 sp8;
    s32 inv;
    s32 sc;
    s32 dy;
    Unk_0223f44c_Vec d;
    s32 ang, r7;
    s32 t;
    if (a == 0) {
        a = (Unk_ov004_0223fe00_Sub *)&self->unk_fc;
    }
    p = func_020947f0(4);
    t = func_0203a7b8(p, &self->unk_1cc, &self->unk_110, &dy);
    if (t < 0x4800) {
        t = 0x4800;
    } else if (t > 0xb000) {
        t = 0xb000;
    }
    sc = func_01ffc5a4(t - 0x4800, 0x6800);
    inv = 0x1000 - sc;
    self->unk_1e4 = inv;
    func_0203c0b0(self, 0xb, data_020c8ce8[self->unk_1f0][self->unk_1ec], sc);
    d = data_021f4880;
    if (p->z > self->unk_1cc.z) {
        d = *p;
    } else {
        d.x = self->unk_1cc.x;
        d.y = self->unk_1cc.y;
        d.z = self->unk_1cc.z;
    }
    sp4 = func_0203b8e0(self, &a->unk_14);
    sp8 = 0;
    ang = func_02002bdc(&a->unk_14, &d);
    s32 av = ang < 0 ? (s16)-ang : ang;
    t = 0x2000 - av;
    if (t < 0) t = 0;
    s32 q = func_01ffcb0c(t >> 1, 0x2000);
    lim = (s16)func_01ffcb0c(q, 0xe02);
    if (lim > 0xe02) lim = 0xe02;
    if (lim > 0 && self->unk_1f5 == 0) {
        if (self->unk_1f6 == 3) {
            if (ang > 0) r7 = 1; else r7 = 2;
            if (sp4 == 1 && r7 == 1) {
                s32 b = ang < 0 ? (s16)-ang : ang;
                if (b > 0x701) r7 = 0; else r7 = 2;
            }
            if (sp4 == 2 && r7 == 2) {
                if (ang < 0) ang = (s16)-ang;
                if (ang > 0x701) r7 = 0; else r7 = 1;
            }
            if (func_020b50e8() == 0x10) r7 = 1;
            self->unk_1f6 = r7;
        }
        u32 m = self->unk_1f6;
        if (m == 1) lim = (s16)-lim;
        if (m != 0) {
            a->unk_00 = func_01ffcb0c(lim, inv);
            sp8 = func_01ffcb0c(dy, data_02135f44[((u16)a->unk_00 >> 4) * 2]);
        }
    }
    a->unk_1c += dy;
    a->unk_14 += sp8;
}

BOOL func_ov004_0223fdbc(Unk_021c3070 *self) {
    func_0203c1a4(self, 0x11, 0);
    func_0203c09c(self, 0);
    self->unk_110 = data_021f4880.x;
    self->unk_114 = data_021f4880.y;
    self->unk_118 = data_021f4880.z;
    func_0203a468();
    return TRUE;
}

BOOL func_ov004_0223fd70(Unk_021c3070 *self) {
    func_0203c1a4(self, data_020c8ce8[1][1], 0);
    func_0203c09c(self, 0);
    Unk_0223f44c_Vec *p = func_020947f0(4);
    self->unk_110 = p->x;
    self->unk_114 = p->y;
    self->unk_118 = p->z;
    func_0203a458();
    return TRUE;
}

void func_ov004_0223fd30(Unk_021c3070 *self) {
    Unk_0223f44c_Vec v;
    func_0203b56c(self);
    func_01ffcbb0(&v, self);
    s32 a = func_0203bc7c(self);
    s32 b = func_0203bc68(self);
    func_0203b484(self, &v, a, b, func_0203bc48(self));
}

s32 func_ov004_0223fcf4() {
    s32 r = 0;
    switch (func_020b50e8()) {
    case 0x1a:
        r = 0;
        break;
    case 0x1b:
        r = 1;
        break;
    case 0x1c:
        r = 2;
        break;
    case 0x1d:
    case 0x1e:
        r = 3;
        break;
    }
    return r;
}

BOOL func_ov004_0223fcd4() {
    if (data_021c3070) {
        return func_0203b7ac(data_021c3070, 11);
    }
    return FALSE;
}

BOOL func_ov004_0223fcb4() {
    if (data_021c3070) {
        return func_0203b7ac(data_021c3070, 12);
    }
    return FALSE;
}

BOOL func_ov004_0223fc8c(Unk_021c3070 *o) {
    func_0203c1a4(o, func_ov004_0223fcf4() + 0x12, 0);
    func_0203c09c(o, 0);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223fc28(Unk_021c3070 *o) {
    volatile s32 a, b, c;
    a = 0;
    b = 0;
    c = 0;
    o->unk_110 = 0;
    o->unk_114 = b;
    o->unk_118 = c;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223fc00(Unk_021c3070 *o) {
    func_0203c1a4(o, func_ov004_0223fcf4() + 0x16, 0);
    func_0203c09c(o, 0);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223fb9c(Unk_021c3070 *o) {
    volatile s32 a, b, c;
    a = 0;
    b = 0;
    c = 0;
    o->unk_110 = 0;
    o->unk_114 = b;
    o->unk_118 = c;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223fb64(Unk_0223f44c_Vec *v) {
    Unk_021c3070 *c = data_021c3070;
    if (c) {
        Unk_0223f44c_Vec *d = &c->unk_1cc;
        *d = *v;
        return func_0203b7ac(data_021c3070, 0x10);
    }
    return FALSE;
}

BOOL func_ov004_0223fb34(Unk_021c3070 *o) {
    func_020947f0(4);
    func_0203c1a4(o, 0x1e, 0);
    func_0203c09c(o, 0);
    func_0203a458();
    func_0203a234(o, 0x2f);
    return TRUE;
}

void func_ov004_0223fa94(Unk_021c3070 *o) {
    Unk_0223f44c_Vec *p = func_020947f0(4);
    Unk_0223f44c_Vec a, b;
    s32 d;
    func_01ffd070(&a, p, &o->unk_1cc);
    func_020e9790(&b, &a, 1);
    o->unk_110 = b.x;
    o->unk_114 = b.y;
    o->unk_118 = b.z;
    d = p->z - o->unk_1cc.z;
    if (d < 0) {
        d = -d;
    }
    o->unk_118 = o->unk_118 + (d >> 1);
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223fa54(Unk_021c3070 *o) {
    func_0203c1a4(o, data_020c8ce8[o->unk_1f0][o->unk_1ec], 0);
    func_0203c09c(o, 0);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223f9f0(Unk_021c3070 *o) {
    o->unk_110 = data_ov004_0224682c.x;
    o->unk_114 = data_ov004_0224682c.y;
    o->unk_118 = data_ov004_0224682c.z;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223f9d0(Unk_021c3070 *o) {
    func_0203c1a4(o, 0x1d, 0);
    func_0203c09c(o, 4);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223f96c(Unk_021c3070 *o) {
    o->unk_110 = data_ov004_02246838.x;
    o->unk_114 = data_ov004_02246838.y;
    o->unk_118 = data_ov004_02246838.z;
    Unk_0223f44c_Finish(o);
}

void func_ov004_0223f958(void) {
    func_0203b7ac(data_021c3070, 0xe);
}

void func_ov004_0223f944(void) {
    func_0203b7ac(data_021c3070, 0xf);
}

BOOL func_ov004_0223f92c(Unk_021c3070 *o) {
    func_0203c1a4(o, 0x20, 0);
    func_0203a468();
    return TRUE;
}

void func_ov004_0223f8bc(Unk_021c3070 *o) {
    o->unk_110 = o->unk_1cc.x;
    o->unk_114 = o->unk_1cc.y;
    o->unk_118 = o->unk_1cc.z;
    Unk_0223f44c_Finish(o);
}

void func_ov004_0223f894(Unk_0223f44c_Vec *v) {
    data_021c3070->unk_1cc = *v;
    func_0203b7ac(data_021c3070, 0x14);
}

void func_ov004_0223f880(void) {
    func_0203b7ac(data_021c3070, 0x12);
}

void func_ov004_0223f870(void) {
    func_ov004_0223f644(data_021c3070);
}

void func_ov004_0223f860(void) {
    func_ov004_0223f534(data_021c3070);
}

void func_ov004_0223f850(void) {
    func_ov004_0223f44c(data_021c3070);
}

#define COPY_TBL(o, t)                 \
    o->unk_fc = t.a;                   \
    o->unk_fe = t.b;                   \
    o->unk_100 = t.w0;                 \
    o->unk_104 = t.p.x;                \
    o->unk_108 = t.p.y;                \
    o->unk_10c = t.p.z;                \
    o->unk_110 = t.q.x;                \
    o->unk_114 = t.q.y;                \
    o->unk_118 = t.q.z

BOOL func_ov004_0223f7b0(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = &o->unk_21c;
    m->v0 = 0;
    m->v2 = -1;
    m->v4 = 0;
    m->v6 = -1;
    m->v8 = -1;
    m->va = 0;
    m->vc = 0xe;
    m->b0 = 0;
    m->b1 = 0;
    COPY_TBL(o, data_ov004_0224f36c);
    func_0203c07c(o, data_ov004_0224f32c);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223f6bc(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = &o->unk_21c;
    Unk_0223f534_Ent *e;
    if (m->v4 == 1) {
        e = &data_ov004_0224f3ac[m->v2];
        o->unk_110 = e->w0;
        o->unk_114 = e->w1;
        o->unk_118 = e->w2;
        func_01ffca58(&o->unk_110, &o->unk_104, &o->unk_110);
        if (func_0203bc48(o) > 0x1400) {
            o->unk_100 = o->unk_100 + e->w6;
        }
        o->unk_fc = o->unk_fc + e->h20;
        m->v0 = m->v0 + e->h20;
        {
            Unk_0223f6bc_V3 t(e->w3, 0, e->w4);
            func_01ffca8c(&o->unk_110, &t, &o->unk_110);
            func_020e93a0(&t, m->v0);
            func_01ffca58(&o->unk_110, &t, &o->unk_110);
        }
    }
    Unk_0223f44c_Finish(o);
}

void func_ov004_0223f644(Unk_021c3070 *o) {
    COPY_TBL(o, data_ov004_0224f38c);
    func_0203c07c(o, data_ov004_0224f33c);
    func_0203a458();
}

void func_ov004_0223f534(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = &o->unk_21c;
    Unk_0223f534_Ent *e;
    s32 lim[2];
    s32 i;
    m->v0 = 0;
    if (func_02063b8c(2) == 1) {
        m->v2 = func_02063b8c(m->vc - 2);
    } else {
        m->v2 = func_02063b8c(m->vc);
    }
    {
        s32 b = m->v8;
        s32 a = m->v6;
        if (a > b) {
            lim[0] = b;
            lim[1] = a;
        } else {
            lim[0] = a;
            lim[1] = b;
        }
    }
    for (i = 0; i < 2; i++) {
        s32 l = lim[i];
        if (l != -1 && m->v2 >> 1 >= l >> 1) {
            m->v2 += 2;
        }
    }
    if ((&m->v6)[m->va] == -1) {
        m->vc = m->vc - 2;
    }
    (&m->v6)[m->va] = m->v2;
    m->va = m->va ^ 1;
    m->v4 = 1;
    e = &data_ov004_0224f3ac[m->v2];
    o->unk_110 = e->w0;
    o->unk_114 = e->w1;
    o->unk_118 = e->w2;
    {
        void *p = &o->unk_110;
        func_01ffca58(p, &o->unk_104, p);
    }
    o->unk_fe = e->h1e;
    o->unk_fc = e->h1c;
    o->unk_100 = e->w5;
    func_0203a468();
}

void func_ov004_0223f44c(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = &o->unk_21c;
    m->v0 = 0;
    m->v2 = 0;
    m->v4 = 2;
    COPY_TBL(o, data_ov004_0224f36c);
    o->unk_148 = data_ov004_0224f34c.a;
    o->unk_14a = data_ov004_0224f34c.b;
    o->unk_14c = data_ov004_0224f34c.w0;
    o->unk_150 = data_ov004_0224f34c.p.x;
    o->unk_154 = data_ov004_0224f34c.p.y;
    o->unk_158 = data_ov004_0224f34c.p.z;
    o->unk_15c = data_ov004_0224f34c.q.x;
    o->unk_160 = data_ov004_0224f34c.q.y;
    o->unk_164 = data_ov004_0224f34c.q.z;
    func_0203c07c(o, data_ov004_0224f31c);
    func_0203a458();
}

void func_ov004_0223f43c(void) {
    func_ov004_0223fd70(data_021c3070);
}

}

// ---- data ----
Unk_ov004_0223f43c_B4 data_ov004_022589a4(31, 20, 20, 31);
Unk_ov004_0223f43c_B4 data_ov004_02258994(20, 20, 31, 31);
Unk_ov004_0223f43c_B4 data_ov004_02258990(31, 31, 20, 31);
const Unk_0223f44c_Vec data_ov004_02246838 = {0x10000, 0, 0x11000};
Unk_ov004_0223f43c_B4 data_ov004_022589a0(20, 31, 20, 31);
const Unk_0223f44c_Vec data_ov004_0224682c = {0x10000, 0, 0x11000};
u32 data_ov004_0224f32c[4] = {0, 0x3c000, 0x5000, 0x5000};
Unk_ov004_0223f43c_B4 data_ov004_02258998(20, 31, 31, 31);
u32 ov004_order_pad_0223f43c[9] = {0};
Unk_ov004_0223f43c_B4 data_ov004_0225899c(20, 24, 24, 31);
Unk_0223f44c_Tbl data_ov004_0224f36c = {0, 0x1100, 0x14100, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0x13600, 0x200, 0x17600)};
u32 data_ov004_0224f31c[4] = {0, 0x438000, 0, 0x384000};
u32 data_ov004_0224f33c[4] = {0, 0x7d0000, 0x7d0000, 0};
Unk_0223f44c_Tbl data_ov004_0224f38c = {0, -0x200, 0x6a00, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0x10400, 0x200, 0x12b00)};
Unk_0223f534_Ent data_ov004_0224f3ac[14] = {
    {0xf9fc, 0x2000, 0x157c2, -2009, -8523, 0xe700, 0x0, -12544, 3328, 40, 0},
    {0xf623, 0x1b00, 0x11405, -1571, 0x1bfb, 0xb000, 0x20, 15104, 1280, -48, 0},
    {0x10fba, 0x2000, 0x14874, -9072, -4623, 0x8d00, 0x0, -17408, -256, 48, 0},
    {0x1291d, 0x2500, 0x14105, -14621, -4357, 0x3d00, 0x0, 10496, 768, -48, 0},
    {0x122ac, 0x2000, 0x12de6, -12972, 0x21a, 0x13c00, -32, -6144, 512, 32, 0},
    {0xf895, 0x1b00, 0xf717, -1621, 0x3df2, 0x14600, 0x0, 7680, 1536, -32, 0},
    {0x13600, 0x2000, 0x16200, 0x0, 0x0, 0x12300, 0x80, 0, 15616, -96, 0},
    {0x13179, 0x1b00, 0x15f6e, 0x3ae, 0xf2, 0x15f00, -48, 15872, 11008, 96, 0},
    {0x10400, 0x2000, 0x13000, -5120, 0x0, 0x8800, 0x70, 0, 2816, 16, 0},
    {0x12070, 0x2a00, 0x13425, -12400, -1061, 0x3800, 0xa0, 12032, 2304, -16, 0},
    {0xf826, 0x2000, 0x199af, 0x39ee, 0xdd8, 0x11e00, 0x0, 22784, 2304, 24, 0},
    {0x12f28, 0x2000, 0x1b890, -261, -5145, 0x8300, 0x0, -26112, 0, -40, 0},
    {0x18412, 0x1100, 0x15882, 0x124b, -2178, 0x7900, 0x0, 29952, 5120, 24, 0},
    {0x1a6f6, 0x2000, 0x15892, -5483, -2535, 0xe700, -48, -13568, 2560, -24, 0},
};

Unk_0223f44c_Tbl data_ov004_0224f34c = {0x1b00, 0x1000, 0x9700, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0xf5ad, 0x200, 0x12757)};
