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

struct Unk_0223f44c_Mode {
    s16 v0, v2, v4, v6, v8, va, vc;
    u8 b0 : 1;
    u8 b1 : 1;
};

struct Unk_0223f44c_Tbl {
    s16 a, b;
    s32 w[7];
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
    /* 0x1f4 */ u8 unk_1f4[0x21c - 0x1f4];
    /* 0x21c */ Unk_0223f44c_Mode unk_21c;
};

extern "C" {
extern Unk_021c3070 *data_021c3070;
extern void *data_021c6210;
extern u32 data_020c8ce8[][3];
extern u32 data_020c8d3c[][4];
extern u8 data_ov004_02258910;
extern void *data_ov004_02258914;
extern Unk_0223f44c_Tbl data_ov004_0224f36c;
extern Unk_0223f44c_Tbl data_ov004_0224f34c;
extern Unk_0223f44c_Tbl data_ov004_0224f38c;
extern u32 data_ov004_0224f31c[];
extern u32 data_ov004_0224f32c[];
extern u32 data_ov004_0224f33c[];
extern Unk_0223f534_Ent data_ov004_0224f3ac[];
extern Unk_0223f44c_Vec data_ov004_02246838;
extern Unk_0223f44c_Vec data_ov004_0224682c;
extern u32 OVERLAY_93_ID[];

void func_ov093_02291f70(void *p);
void func_ov093_02291ff0(void *p);
void func_ov093_022921b8(void *p);
void func_ov093_0229212c(void *p);
void func_0204ef2c(u32 id);
void *func_020e8608(void *heap, u32 size);
s32 func_0203bc48(Unk_021c3070 *o);
s32 func_0203bc68(Unk_021c3070 *o);
s32 func_0203bc7c(Unk_021c3070 *o);
s32 func_0203b7ac(Unk_021c3070 *o, s32 a);
void func_0203b56c(Unk_021c3070 *o);
void func_0203b484(Unk_021c3070 *o, void *a, s32 b, s32 c, s32 d);
void func_01ffcbb0(void *out, Unk_021c3070 *o);
void func_01ffca58(void *a, void *b, void *c);
void func_01ffca8c(void *a, void *b, void *c);
void func_01ffd070(void *out, void *a, void *b);
void func_020e9790(void *out, void *in, s32 s);
void func_020e93a0(void *v, s32 a);
s32 func_020b50e8(void);
s32 func_02063b8c(s32 a);
Unk_0223f44c_Vec *func_020947f0(s32 a);
void func_0203c07c(Unk_021c3070 *o, u32 *src);
void func_0203c09c(Unk_021c3070 *o, s32 a);
void func_0203c1a4(Unk_021c3070 *o, s32 a, s32 b);
void func_0203a458(void);
void func_0203a468(void);
void func_0203a234(Unk_021c3070 *o, s32 a);
void func_ov004_0223fd70(Unk_021c3070 *o);
s32 func_ov004_0223fcf4(void);
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

void func_ov004_0223f3a4(void) {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291f70(data_ov004_02258914);
    }
}

void func_ov004_0223f3cc(void) {
    if (data_ov004_02258910 & 1) {
        func_ov093_02291ff0(data_ov004_02258914);
    }
}

void func_ov004_0223f3f4(void) {
    func_0204ef2c((u32)OVERLAY_93_ID);
    data_ov004_02258914 = func_020e8608(data_021c6210, 0x1fc4);
    if (data_ov004_02258914) {
        func_ov093_022921b8(data_ov004_02258914);
    }
    func_ov093_0229212c(data_ov004_02258914);
    data_ov004_02258910 = 1;
}

void func_ov004_0223f43c(void) {
    func_ov004_0223fd70(data_021c3070);
}

void func_ov004_0223f44c(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = &o->unk_21c;
    m->v0 = 0;
    m->v2 = 0;
    m->v4 = 2;
    o->unk_fc = data_ov004_0224f36c.a;
    o->unk_fe = data_ov004_0224f36c.b;
    o->unk_100 = data_ov004_0224f36c.w[0];
    o->unk_104 = data_ov004_0224f36c.w[1];
    o->unk_108 = data_ov004_0224f36c.w[2];
    o->unk_10c = data_ov004_0224f36c.w[3];
    o->unk_110 = data_ov004_0224f36c.w[4];
    o->unk_114 = data_ov004_0224f36c.w[5];
    o->unk_118 = data_ov004_0224f36c.w[6];
    o->unk_148 = data_ov004_0224f34c.a;
    o->unk_14a = data_ov004_0224f34c.b;
    o->unk_14c = data_ov004_0224f34c.w[0];
    o->unk_150 = data_ov004_0224f34c.w[1];
    o->unk_154 = data_ov004_0224f34c.w[2];
    o->unk_158 = data_ov004_0224f34c.w[3];
    o->unk_15c = data_ov004_0224f34c.w[4];
    o->unk_160 = data_ov004_0224f34c.w[5];
    o->unk_164 = data_ov004_0224f34c.w[6];
    func_0203c07c(o, data_ov004_0224f31c);
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


#define COPY_TBL(o, t)                 \
    o->unk_fc = t.a;                   \
    o->unk_fe = t.b;                   \
    o->unk_100 = t.w[0];               \
    o->unk_104 = t.w[1];               \
    o->unk_108 = t.w[2];               \
    o->unk_10c = t.w[3];               \
    o->unk_110 = t.w[4];               \
    o->unk_114 = t.w[5];               \
    o->unk_118 = t.w[6]

void func_ov004_0223f644(Unk_021c3070 *o) {
    o->unk_fc = data_ov004_0224f38c.a;
    o->unk_fe = data_ov004_0224f38c.b;
    o->unk_100 = data_ov004_0224f38c.w[0];
    o->unk_104 = data_ov004_0224f38c.w[1];
    o->unk_108 = data_ov004_0224f38c.w[2];
    o->unk_10c = data_ov004_0224f38c.w[3];
    o->unk_110 = data_ov004_0224f38c.w[4];
    o->unk_114 = data_ov004_0224f38c.w[5];
    o->unk_118 = data_ov004_0224f38c.w[6];
    func_0203c07c(o, data_ov004_0224f33c);
    func_0203a458();
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

void func_ov004_0223f850(void) {
    func_ov004_0223f44c(data_021c3070);
}

void func_ov004_0223f860(void) {
    func_ov004_0223f534(data_021c3070);
}

void func_ov004_0223f870(void) {
    func_ov004_0223f644(data_021c3070);
}

void func_ov004_0223f880(void) {
    func_0203b7ac(data_021c3070, 0x12);
}

void func_ov004_0223f894(Unk_0223f44c_Vec *v) {
    data_021c3070->unk_1cc = *v;
    func_0203b7ac(data_021c3070, 0x14);
}

void func_ov004_0223f8bc(Unk_021c3070 *o) {
    o->unk_110 = o->unk_1cc.x;
    o->unk_114 = o->unk_1cc.y;
    o->unk_118 = o->unk_1cc.z;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223f92c(Unk_021c3070 *o) {
    func_0203c1a4(o, 0x20, 0);
    func_0203a468();
    return TRUE;
}

void func_ov004_0223f944(void) {
    func_0203b7ac(data_021c3070, 0xf);
}

void func_ov004_0223f958(void) {
    func_0203b7ac(data_021c3070, 0xe);
}

void func_ov004_0223f96c(Unk_021c3070 *o) {
    o->unk_110 = data_ov004_02246838.x;
    o->unk_114 = data_ov004_02246838.y;
    o->unk_118 = data_ov004_02246838.z;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223f9d0(Unk_021c3070 *o) {
    func_0203c1a4(o, 0x1d, 0);
    func_0203c09c(o, 4);
    func_0203a458();
    return TRUE;
}

void func_ov004_0223f9f0(Unk_021c3070 *o) {
    o->unk_110 = data_ov004_0224682c.x;
    o->unk_114 = data_ov004_0224682c.y;
    o->unk_118 = data_ov004_0224682c.z;
    Unk_0223f44c_Finish(o);
}

BOOL func_ov004_0223fa54(Unk_021c3070 *o) {
    func_0203c1a4(o, data_020c8ce8[o->unk_1f0][o->unk_1ec], 0);
    func_0203c09c(o, 0);
    func_0203a458();
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

BOOL func_ov004_0223fb34(Unk_021c3070 *o) {
    func_020947f0(4);
    func_0203c1a4(o, 0x1e, 0);
    func_0203c09c(o, 0);
    func_0203a458();
    func_0203a234(o, 0x2f);
    return TRUE;
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

BOOL func_ov004_0223fc00(Unk_021c3070 *o) {
    func_0203c1a4(o, func_ov004_0223fcf4() + 0x16, 0);
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

BOOL func_ov004_0223fc8c(Unk_021c3070 *o) {
    func_0203c1a4(o, func_ov004_0223fcf4() + 0x12, 0);
    func_0203c09c(o, 0);
    func_0203a458();
    return TRUE;
}

}
