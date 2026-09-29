#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203a148_Vec {
    s32 x, y, z;
};

struct Unk_0203a148_Mtx {
    s32 m[12];
};

struct Unk_0203a148_Mtx_Tmp : Unk_0203a148_Mtx {
    Unk_0203a148_Mtx_Tmp() {}
};

struct Unk_0203a8d4_Rot {
    s32 len;
    s16 ang;
    s16 vel;
};

struct Unk_0203a278_Cam {
    s16 a, b;
    s32 c0, c1, c2, c3, c4, c5, c6;
};

// Camera/scene helper object; the global pointer is data_021c3070.
struct Unk_021c3070 {
    /* 0x00 */ u8 unk_00[0x50];
    /* 0x50 */ Unk_0203a148_Mtx unk_50;
    /* 0x80 */ u8 unk_80[0x38];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0[8];
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ Unk_0203a148_Vec unk_cc;
    /* 0xd8 */ u8 unk_d8[0x24];
    /* 0xfc */ Unk_0203a278_Cam unk_fc;
    /* 0x11c */ u8 unk_11c[0x14];
    /* 0x130 */ u8 unk_130[0x18];
    /* 0x148 */ Unk_0203a278_Cam unk_148;
    /* 0x168 */ Unk_0203a148_Vec unk_168;
    /* 0x174 */ u8 unk_174[0x14];
    /* 0x188 */ Unk_0203a148_Vec unk_188;
    /* 0x194 */ Unk_0203a148_Vec unk_194;
    /* 0x1a0 */ u8 unk_1a0[0x2a];
    /* 0x1ca */ u8 unk_1ca;
    /* 0x1cb */ u8 unk_1cb;
    /* 0x1cc */ Unk_0203a148_Vec unk_1cc;
    /* 0x1d8 */ Unk_0203a148_Vec unk_1d8;
    /* 0x1e4 */ u8 unk_1e4[4];
    /* 0x1e8 */ s32 unk_1e8;
    /* 0x1ec */ s32 unk_1ec;
    /* 0x1f0 */ s32 unk_1f0;
    /* 0x1f4 */ u8 unk_1f4;
    /* 0x1f5 */ u8 unk_1f5;
    /* 0x1f6 */ u8 unk_1f6;
    /* 0x1f7 */ u8 unk_1f7;
    /* 0x1f8 */ s32 unk_1f8;
    /* 0x1fc */ s32 unk_1fc;
    /* 0x200 */ u8 unk_200[0x1c];
    /* 0x21c */ Unk_0203a8d4_Rot unk_21c;
};

extern Unk_021c3070 *data_021c3070;
extern Unk_0203a148_Mtx data_021f47e0;
extern Unk_0203a278_Cam data_021c30cc;
extern Unk_0203a148_Vec data_021c30c0;
extern s32 data_020d9254;
extern s16 data_02135f44[];

extern "C" {
void func_0203eeac(Unk_0203a148_Vec *out, Unk_0203a148_Vec *in);
void func_01ffb898(Unk_0203a148_Vec *in, Unk_0203a148_Mtx *m, Unk_0203a148_Vec *out);
s32 func_0203bc3c(Unk_021c3070 *o);
s32 func_0203bc48(Unk_021c3070 *o);
s32 func_0203bc68(Unk_021c3070 *o);
s32 func_0203bc7c(Unk_021c3070 *o);
s32 func_0203bbe4(Unk_021c3070 *o);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e9888(Unk_0203a148_Vec *v, s32 s);
void func_0200402c(s32 a);
void func_0203b910(Unk_021c3070 *o, Unk_0203a278_Cam *c, s32 a);
void func_01ffcbb0(void *out, Unk_021c3070 *o);
void func_0203b484(Unk_021c3070 *o, void *a, s32 b, s32 c, s32 d);
void func_0203af68(Unk_021c3070 *o);
void func_0203b094(Unk_021c3070 *o);
void func_ov068_02266624(Unk_021c3070 *o, s32 a);
s32 func_0203b7ac(Unk_021c3070 *o, s32 a);
void func_0203b56c(Unk_021c3070 *o);
void func_0203b350(Unk_021c3070 *o, void *a);
Unk_0203a148_Vec *func_020947f0(s32 a);
s32 func_020b50e8(void);
void func_020e9960(Unk_0203a148_Vec *out, Unk_0203a148_Vec *a, Unk_0203a148_Vec *b);
void func_01ffd070(Unk_0203a148_Vec *out, Unk_0203a148_Vec *a, Unk_0203a148_Vec *b);
void func_020e9790(Unk_0203a148_Vec *out, Unk_0203a148_Vec *in, s32 s);
s32 func_01ffc854(Unk_0203a148_Vec *v);
void func_01ffb4e8(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c);
void func_01ffca8c(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c);
void func_020e769c(s16 *p, s32 a, s32 b);
void func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_0203c1a4(Unk_021c3070 *o, s32 a, s32 b);
void func_0203c09c(Unk_021c3070 *o, s32 a);
BOOL func_0203a844(void);
Unk_0203a148_Mtx *func_0203a220(void);
void func_0203a458(void);
void func_0203a468(void);
s32 func_0203a7b8(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d);
s32 func_0203a6fc(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e);
BOOL func_0203a148(s32 *x, s32 *y, Unk_0203a148_Vec *p);
}

class Unk_020d9248 {
public:
    Unk_020d9248();
    virtual ~Unk_020d9248();
    void func_0203a058(s32 a, u16 b, s32 c, s32 d);

    /* 0x04 */ u8 unk_04[0x48];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u16 unk_58;
};
extern "C" void func_02039f9c(Unk_020d9248 *o);

void Unk_020d9248::func_0203a058(s32 a, u16 b, s32 c, s32 d) {
    unk_4c = a;
    unk_58 = b;
    unk_50 = c;
    unk_54 = d;
    func_02039f9c(this);
}

Unk_020d9248::Unk_020d9248() {
    func_0203a058(0x1555, 0xe38, 0x1000, 0x1388000);
}

Unk_020d9248::~Unk_020d9248() {
}

class Unk_020e4590 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e4590() {}
};

class Unk_020d93b8 : public Unk_020e4590 {
public:
    virtual ~Unk_020d93b8();
};

Unk_020d93b8::~Unk_020d93b8() {
}

extern "C" {

BOOL func_0203a124(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    Unk_0203a148_Vec v;
    func_0203eeac(&v, p);
    return func_0203a148(x, y, &v);
}

BOOL func_0203a148(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    struct {
        Unk_0203a148_Vec v;
        Unk_0203a148_Mtx m;
    } l;
    if (data_021c3070 != NULL) {
        Unk_0203a148_Mtx *src = func_0203a220();
        l.m = *src;
        data_021f47e0 = l.m;
        func_01ffb898(p, &data_021f47e0, &l.v);
        s32 t = func_01ffc5a4(0x60000, func_0203bc3c(data_021c3070));
        t = func_01ffc5a4(-t, l.v.z);
        func_020e9888(&l.v, t);
        *x = l.v.x >> 12;
        *y = -(l.v.y >> 12);
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203a1d0(s32 a, s32 b) {
    Unk_021c3070 *o = data_021c3070;
    if (o != NULL) {
        if (o->unk_1ec != b || o->unk_1f0 != a) {
            func_0203a458();
            data_021c3070->unk_1f0 = a;
            data_021c3070->unk_1ec = b;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

Unk_0203a148_Mtx *func_0203a220(void) {
    if (data_021c3070 != NULL) {
        return &data_021c3070->unk_50;
    }
    return NULL;
}

void func_0203a234(Unk_021c3070 *o, s32 a) {
    if (o->unk_1f7 == 0) {
        func_0200402c(a);
    }
}

void func_0203a250(void) {
    data_021c3070->unk_1f7 = 0;
}

void func_0203a264(void) {
    data_021c3070->unk_1f7 = 1;
}

void func_0203a278(s32 a) {
    func_0203b910(data_021c3070, &data_021c3070->unk_fc, a);
    data_021c3070->unk_148 = data_021c3070->unk_fc;
    Unk_0203a148_Vec v;
    func_01ffcbb0(&v, data_021c3070);
    s32 p = func_0203bc7c(data_021c3070);
    s32 q = func_0203bc68(data_021c3070);
    func_0203b484(data_021c3070, &v, p, q, func_0203bc48(data_021c3070));
}

void func_0203a304(void) {
    data_021c3070->unk_1f5 = 1;
}

void func_0203a318(void) {
    func_ov068_02266624(data_021c3070, 3);
}

BOOL func_0203a32c(void) {
    func_0203af68(data_021c3070);
    return TRUE;
}

BOOL func_0203a344(void) {
    func_0203b094(data_021c3070);
    return TRUE;
}

BOOL func_0203a35c(void) {
    if (data_021c3070->unk_1f4 != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_0203a378(void) {
    data_021c3070->unk_fc = data_021c30cc;
    data_021c3070->unk_168 = data_021c30c0;
}

void func_0203a3d8(void) {
    data_021c30cc = data_021c3070->unk_fc;
    data_021c30c0 = data_021c3070->unk_168;
}

u8 func_0203a430(void) {
    return (func_0203bbe4(data_021c3070) - data_021c3070->unk_c8) >> 12;
}

void func_0203a458(void) {
    data_021c3070->unk_c8 = 0;
}

void func_0203a468(void) {
    data_021c3070->unk_c8 = func_0203bbe4(data_021c3070);
}

BOOL func_0203a488(void) {
    if (data_021c3070->unk_c8 <= func_0203bbe4(data_021c3070)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_0203a4b0(void) {
    return data_021c3070->unk_1e8;
}

BOOL func_0203a4c4(Unk_0203a148_Vec *v, s32 unused, s32 h) {
    Unk_021c3070 *o = data_021c3070;
    if (o != NULL) {
        s32 t = o->unk_1f8;
        if (t != 2 && t != 4) {
            if (t == 1 && o->unk_1fc == 2) {
            } else if (o->unk_1f4 == 0) {
                return FALSE;
            }
        }
        if (v->z - (h >> 1) > o->unk_fc.c6 - 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL func_0203a528(Unk_0203a148_Vec *v) {
    if (data_021c3070->unk_1f8 == 0x13) {
        data_021c3070->unk_c8 = 0;
        data_021c3070->unk_b8 = 0;
        data_021c3070->unk_bc = 0x15000;
        return TRUE;
    }
    Unk_0203a148_Vec *d = &data_021c3070->unk_1cc;
    *d = *v;
    data_021c3070->unk_c8 = 0;
    data_021c3070->unk_1f6 = 3;
    return TRUE;
}

void func_0203a584(void) {
    func_0203b7ac(data_021c3070, 5);
}

void func_0203a598(void) {
    func_0203b7ac(data_021c3070, 4);
}

void func_0203a5ac(void) {
    func_0203b7ac(data_021c3070, data_021c3070->unk_1fc);
}

void func_0203a5c4(void) {
    func_0203b7ac(data_021c3070, 3);
}

void func_0203a5d8(void) {
    func_0203b7ac(data_021c3070, 0x13);
}

void func_0203a5ec(s32 a) {
    data_021c3070->unk_21c.len = a;
    func_0203b7ac(data_021c3070, 0x11);
}

void func_0203a608(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b) {
    s32 r = func_0203a6fc(func_020947f0(4), a, b, NULL, NULL);
    if (r >= 0xb000) {
        func_0203a844();
    } else {
        data_021c3070->unk_1ca = 1;
        data_021c3070->unk_1cc = *a;
        data_021c3070->unk_1d8 = *b;
        func_0203b7ac(data_021c3070, 2);
    }
}

BOOL func_0203a680(Unk_0203a148_Vec *a) {
    if (data_021c3070->unk_1f8 == 9) {
        return FALSE;
    }
    if (func_020b50e8() == 0xc) {
        return FALSE;
    }
    s32 r = func_0203a7b8(func_020947f0(4), a, NULL, NULL);
    if (r >= 0xb000) {
        return func_0203a844();
    }
    data_021c3070->unk_1ca = 0;
    data_021c3070->unk_1cc = *a;
    return func_0203b7ac(data_021c3070, 2);
}

s32 func_0203a6fc(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e) {
    Unk_0203a148_Vec lo, hi, diff, t1, t2;
    s32 r;
    lo.x = a->x;
    lo.y = a->y;
    lo.z = a->z;
    hi.x = a->x;
    hi.y = a->y;
    hi.z = a->z;
    if (lo.x > b->x) {
        lo.x = b->x;
    } else {
        hi.x = b->x;
    }
    if (lo.z > b->z) {
        lo.z = b->z;
    } else {
        hi.z = b->z;
    }
    if (lo.x > c->x) {
        lo.x = c->x;
    }
    if (lo.z > c->z) {
        lo.z = c->z;
    }
    if (hi.x < c->x) {
        hi.x = c->x;
    }
    if (hi.z < c->z) {
        hi.z = c->z;
    }
    func_020e9960(&diff, &hi, &lo);
    s32 z = diff.z;
    r = diff.x;
    if (r <= z) {
        r = z;
    }
    if (d != NULL) {
        func_01ffd070(&t1, &lo, &hi);
        func_020e9790(&t2, &t1, 1);
        d->x = t2.x;
        d->y = t2.y;
        d->z = t2.z;
        d->y = (a->y + b->y) >> 1;
        if (e != NULL) {
            *e = diff.z >> 1;
        }
    }
    return r;
}

s32 func_0203a7b8(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d) {
    s32 len;
    Unk_0203a148_Vec sub, v2, t1, t2;
    func_020e9960(&sub, a, b);
    v2.x = sub.x;
    v2.y = sub.y;
    v2.z = sub.z;
    v2.z = func_01ffcb0c(*(volatile s32 *)&sub.z, data_020d9254);
    len = func_01ffc854(&v2);
    if (c != NULL) {
        func_01ffd070(&t1, a, b);
        func_020e9790(&t2, &t1, 1);
        c->x = t2.x;
        c->y = t2.y;
        c->z = t2.z;
        if (d != NULL) {
            s32 t = sub.z >> 1;
            if (t < 0) {
                t = -t;
            }
            *d = t;
        }
    }
    return len;
}

void func_0203a830(void) {
    func_0203b7ac(data_021c3070, 1);
}

BOOL func_0203a844(void) {
    s32 t = data_021c3070->unk_1f8;
    if (t == 9) {
        return FALSE;
    }
    if (t == 0) {
        return TRUE;
    }
    return func_0203b7ac(data_021c3070, 0);
}

void func_0203a874(Unk_021c3070 *o) {
    Unk_0203a148_Vec v;
    func_0203b56c(o);
    func_01ffcbb0(&v, o);
    s32 p = func_0203bc7c(o);
    s32 q = func_0203bc68(o);
    func_0203b484(o, &v, p, q, func_0203bc48(o));
}

BOOL func_0203a8b4(Unk_021c3070 *o) {
    func_0203c1a4(o, 0x1f, 0);
    func_0203c09c(o, 5);
    func_0203a458();
    return TRUE;
}

void func_0203a8d4(Unk_021c3070 *o) {
    Unk_0203a148_Vec v;
    Unk_0203a148_Vec cam;
    Unk_0203a8d4_Rot *r = &o->unk_21c;
    s32 sc;
    r->ang = r->ang + r->vel;
    func_020e769c(&r->vel, 0x6000, 0x180);
    sc = func_01ffcb0c(data_02135f44[((u16)r->ang >> 4) * 2], o->unk_21c.len);
    func_0203b350(o, o->unk_130);
    func_020e7870((s32 *)r, 0, 0x400, 0x80, 0x10);
    func_0203b56c(o);
    func_01ffcbb0(&cam, o);
    s32 p = func_0203bc7c(o);
    s32 q = func_0203bc68(o);
    func_0203b484(o, &cam, p, q, func_0203bc48(o));
    v.x = 0;
    v.y = 0x1000;
    v.z = 0;
    func_01ffb4e8(&v, &o->unk_cc, &v);
    func_020e9888(&v, sc);
    func_01ffca8c(&o->unk_194, &v, &o->unk_194);
    func_01ffca8c(&o->unk_188, &v, &o->unk_188);
}

}
