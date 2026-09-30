#include "types.h"

struct Unk_ov003_02222658_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_02222658_V3 V3;

struct Unk_ov003_02222658_Ent {
    /* 0x00 */ u8 pad_00[0x40];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ u8 pad_44[4];
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ u8 pad_4c[0x14];
    /* 0x60 */ V3 unk_60;
    /* 0x6c */ u8 pad_6c[0xc];
    /* 0x78 */ u8 unk_78;
    /* 0x79 */ u8 pad_79[0x17];
    /* 0x90 */ s32 unk_90;
    /* 0x94 */ u8 pad_94[0x10];
};
typedef Unk_ov003_02222658_Ent Ent;

struct Unk_ov003_02222764_Sub {
    u8 b0, b1, b2, b3;
};
typedef Unk_ov003_02222764_Sub Sub;

struct Unk_ov003_02222658_Rec {
    u16 unk_00;
    u16 unk_02;
    u8 pad[0x10];
};

struct Unk_ov003_02222f28_Ent {
    u8 *p;
    u32 unk_04;
};

class Unk_ov003_02222658_Obj;
typedef void (Unk_ov003_02222658_Obj::*Fn)(void *);
struct Unk_ov003_02222658_Mp {
    Fn f;
};

class Unk_ov003_02222658_Obj {
public:
    /* 0x000 */ u8 pad_000[0x40];
    /* 0x040 */ s32 unk_40;
    /* 0x044 */ u8 pad_044[0x10];
    /* 0x054 */ V3 unk_54;
    /* 0x060 */ u8 pad_060[0x1e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 pad_07f[0x120 - 0x7f];
    /* 0x120 */ V3 unk_120;
    /* 0x12c */ u8 pad_12c[0xc];
    /* 0x138 */ u16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u8 pad_140[0x1fd - 0x140];
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 pad_200[0x218 - 0x200];
    /* 0x218 */ s32 unk_218, unk_21c, unk_220;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 pad_225[2];
    /* 0x227 */ s8 unk_227;
    /* 0x228 */ u8 pad_228[4];
    /* 0x22c */ void *unk_22c;
    /* 0x230 */ u8 pad_230[0xc];
    /* 0x23c */ u8 unk_23c;
    /* 0x23d */ u8 unk_23d;
    /* 0x23e */ u8 pad_23e[0x248 - 0x23e];
    /* 0x248 */ Sub unk_248;
};
typedef Unk_ov003_02222658_Obj Obj;

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern Unk_ov003_02222658_Mp data_ov003_02257af8[];
extern s32 data_020c7c1c;
extern void *data_020cbb18;
extern u8 data_ov003_022349e4[];
extern s16 data_02135f44[];
extern Ent data_ov003_02257e9c[];
extern u16 data_ov003_02257a78;
extern u8 data_020ca315[];
extern Unk_ov003_02222f28_Ent data_ov003_022348c0[];

s32 func_ov003_02224d14(void *);
V3 *func_ov003_02224ba4(void *);
s32 func_ov003_02224b6c(void *);
s32 func_ov003_022202ec(s32, s32);
s32 func_ov003_022209c8(s32);
s32 func_ov003_0222034c(void *, void *, s32, s32, s32);
void func_02003e80(void *, V3 *);
void func_02003e70(void *, s32, s32, s32);
void func_02003c40(void *, s32);
s32 func_02090330(s32, V3 *, s32, s32);
s32 func_02072e44(void *);
s32 func_020729cc(void *, void *);
void func_020728d4(void *);
void func_020728a4(void *, void *, s32);
void func_02072824(void *, s32, s32);
s32 func_0204f4f8(void *, s32, s32, s32, s32);
s32 func_020947f0(s32);
s32 func_020e9650(s32, void *);
void func_0204ee10(s32 *, s32 *, V3 *);
s32 func_020312a8(s32, s32);
void func_0205fbbc(void *, s32);
void func_02076a6c(void *, s32, s32);
s32 func_02116048(const void *src, void *dst, u32 n);
void func_02133150();
void *func_0205ffe4();
void func_020947c0(u16 *, s32);
s32 func_02002bdc(void *, void *);
s32 func_020e780c(s32, s32);

static inline BOOL R74(volatile u16 *p)
{
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= 0x1374 && a <= 0x1374) {
        r = TRUE;
    }
    return r;
}

s32 func_ov003_02222654()
{
    return 1;
}

void func_ov003_02222658(Obj *self, void *arg)
{
    V3 a, b;
    if (func_ov003_02224d14(arg)) {
        V3 *p = func_ov003_02224ba4(arg);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        b = a;
        func_02003e80(self, &a);
        if (func_ov003_02224b6c(arg) == 1) {
            func_02003e70(self, 0x7e0, 0x7f, 0);
        } else if (func_ov003_02224b6c(arg) == 2) {
            func_02003e70(self, 0x7e1, 0x7f, 0);
            b.y = data_020c7c1c;
            func_02090330(0x15, &b, 0, 0);
        }
    } else {
        a.x = self->unk_54.x;
        a.y = self->unk_54.y;
        a.z = self->unk_54.z;
        func_02003e80(self, &a);
    }
    if (data_ov003_02257af8[self->unk_40].f) {
        (self->*data_ov003_02257af8[self->unk_40].f)(arg);
    }
    {
        void *s = data_020cbb18;
        if (func_02072e44(s)) {
            if (func_020729cc(s, arg) == 0) {
                if (self->unk_40 == 4) {
                    func_0204f4f8(arg, 8, -1, 0, 0);
                }
            }
        }
    }
}

extern "C" s32 func_ov003_02222764(Sub *s);

s32 func_ov003_02222754(Obj *self)
{
    return func_ov003_02222764(&self->unk_248);
}

s32 func_ov003_02222764(Sub *s)
{
    s->b0 = 0;
    s->b1 = 0;
    s->b2 = 0;
    s->b3 = 0;
}

void func_ov003_02222770(Sub *s, Obj *o)
{
    if (s->b1 != 0) {
        s->b1 = s->b1 - 1;
        func_02003c40(&o->unk_40, 0x82f);
    } else {
        s->b2 = func_ov003_022202ec(0x14, 0x50);
        s->b3 = 1;
    }
    if (func_ov003_022209c8(0)) {
        s->b2 = func_ov003_022202ec(0x14, 0x28);
        s->b3 = 1;
        s->b1 = 0;
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else if (s->b0 != 0) {
        s->b0 = s->b0 - 1;
    }
}

void func_ov003_022227dc(Sub *s, Obj *o)
{
    s32 t;
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = func_020947f0(0);
    if (t != 0) {
        if (func_020e9650(t, &o->unk_120) >= 0x8000) {
            s->b3 = 0;
            return;
        }
    }
    if (func_ov003_022209c8(0)) {
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else {
        if (s->b0 != 0) {
            s->b0 = s->b0 - 1;
        }
        if (s->b0 <= 0x96) {
            if (s->b2 == 0) {
                s->b1 = func_ov003_022202ec(0x3c, 0x8c);
                s->b3 = 2;
            }
        }
    }
}

void func_ov003_0222285c(Sub *s, Obj *o)
{
    s32 t;
    if (s->b0 != 0) {
        s->b0 = s->b0 - 3;
        if (s->b0 < 0xa) {
            s->b0 = 0;
        }
    }
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = func_020947f0(0);
    if (t != 0) {
        if (func_020e9650(t, &o->unk_120) < 0x8000) {
            s->b3 = 1;
        }
    }
}

void func_ov003_022228b0(Sub *s, Obj *o)
{
    switch (s->b3) {
    case 0:
        func_ov003_0222285c(s, o);
        break;
    case 1:
        func_ov003_022227dc(s, o);
        break;
    case 2:
        func_ov003_02222770(s, o);
        break;
    }
}

void func_ov003_022228dc(Obj *self, s32 *o1, s32 *o2, s32 *o3)
{
    V3 v0, v1, v2;
    Unk_0203398c g0, g1, g2;
    s16 ang;
    s32 r;
    s32 z0, z1, z2;
    s32 i0, i1, i2;

    ang = self->unk_138;
    i0 = ((u16)(s16)(ang + 0x2000) >> 4) * 2;
    r = *(u16 *)(data_ov003_022349e4 + self->unk_1ff * 0x14);
    z0 = self->unk_120.z + (r * data_02135f44[i0 + 1]) / 100;
    v0.x = self->unk_120.x + (r * data_02135f44[i0]) / 100;
    v0.y = -0x1333;
    v0.z = z0;
    i1 = ((u16)(s16)(ang - 0x2000) >> 4) * 2;
    z1 = self->unk_120.z + (r * data_02135f44[i1 + 1]) / 100;
    v1.x = self->unk_120.x + (r * data_02135f44[i1]) / 100;
    v1.y = -0x1333;
    v1.z = z1;
    i2 = (self->unk_138 >> 4) * 2;
    z2 = self->unk_120.z + (r * data_02135f44[i2 + 1]) / 100;
    v2.x = self->unk_120.x + (r * data_02135f44[i2]) / 100;
    v2.y = -0x1333;
    v2.z = z2;
    g0.func_020339bc(&v0, 0, 0);
    g1.func_020339bc(&v1, 0, 0);
    g2.func_020339bc(&v2, 0, 0);
    *o1 = g0.unk_34;
    *o2 = g1.unk_34;
    *o3 = g2.unk_34;
}

BOOL func_ov003_02222a38(Obj *self)
{
    BOOL r = TRUE;
    s32 a, b, c;
    func_ov003_022228dc(self, &a, &b, &c);
    switch (self->unk_1fe) {
    case 0:
    case 1:
    case 2:
    case 3:
        if ((a >= 0xb && a <= 0x12) || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6:
        if (a == 8 || a == 0x17) {
            if (b == 8 || b == 0x17) {
                if (c == 8 || c == 0x17) {
                    r = FALSE;
                }
            }
        }
        break;
    default:
    dflt:
        if ((a >= 0xb && a <= 0x12) || a == 8 || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 8 || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 8 || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    }
    return r;
}

#define COPY() \
    do { \
        self->unk_120.x = self->unk_218; \
        self->unk_120.y = self->unk_21c; \
        self->unk_120.z = self->unk_220; \
    } while (0)

s32 func_ov003_02222d28(Obj *self);
BOOL func_ov003_02222ce0(Obj *self);

s32 func_ov003_02222b1c(Obj *self)
{
    s32 r = 0;
    s32 x, y;
    func_0204ee10(&x, &y, &self->unk_120);
    switch (self->unk_1fe) {
    case 0:
    case 1:
    case 2:
    case 3:
        if (func_ov003_02222a38(self)) {
            COPY();
            r = 1;
        } else if (func_020312a8(x, y) == 1) {
            COPY();
            r = 3;
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6: {
        s32 t = func_ov003_02222d28(self);
        if (t == 0) {
            r = 6;
        } else if (t == 1) {
            r = 7;
        } else if (func_ov003_02222a38(self)) {
            COPY();
            r = 2;
        } else if (func_020312a8(x, y) != 1) {
            COPY();
            r = 4;
        } else if (func_ov003_02222ce0(self)) {
            r = 5;
        }
        break;
    }
    default:
    dflt:
        if (func_020312a8(x, y) == 2) {
            if (func_ov003_02222a38(self)) {
                COPY();
                r = 1;
            }
        } else if (func_020312a8(x, y) == 1) {
            s32 t = func_ov003_02222d28(self);
            if (t == 0) {
                r = 6;
            } else if (t == 1) {
                r = 7;
            } else if (func_ov003_02222a38(self)) {
                COPY();
                r = 2;
            } else if (func_ov003_02222ce0(self)) {
                r = 5;
            }
        } else {
            COPY();
            r = 1;
        }
        break;
    }
    return r;
}

BOOL func_ov003_02222ce0(Obj *self)
{
    BOOL r = FALSE;
    s32 x, y;
    V3 p;
    V3 *pv = &self->unk_120;
    p.x = pv->x;
    p.y = pv->y;
    p.z = pv->z;
    p.z = p.z - 0x2000;
    func_0204ee10(&x, &y, &p);
    if (func_020312a8(x, y) == 1) {
        r = TRUE;
    }
    return r;
}

s32 func_ov003_02222d28(Obj *self)
{
    s32 r = 2;
    s32 t = self->unk_120.x >> 17;
    if (t == 0) {
        r = 0;
    } else if (t == 5) {
        r = 1;
    }
    return r;
}

BOOL func_ov003_02222d48(Obj *self)
{
    void *p = self->unk_22c;
    if (p == 0) {
        return FALSE;
    }
    self->unk_23d = 0;
    self->unk_227 = -1;
    func_0205fbbc(p, 0);
    self->unk_22c = 0;
    self->unk_23c = 0;
    self->unk_224 = 7;
    self->unk_13c = 0;
    return TRUE;
}

BOOL func_ov003_02222d9c(Obj *self, u32 k)
{
    s32 idx;
    Ent *e;
    V3 *pv;
    V3 loc;
    u8 buf[7];
    u8 tmp[5];
    void *s;
    u32 sel;
    s32 h;
    V3 *q;
    BOOL z;

    self->unk_1fd = 1;
    idx = self->unk_227;
    z = FALSE;
    if (idx == -1) {
        return z;
    }
    e = (Ent *)((u8 *)data_ov003_02257e9c + idx * 0xa4);
    e->unk_40 = 1;
    e->unk_48 = 1;
    pv = &self->unk_120;
    q = &e->unk_60;
    q->x = pv->x;
    q->y = pv->y;
    q->z = pv->z;
    e->unk_78 = k;
    h = self->unk_7e;
    e->unk_90 = h;
    sel = self->unk_1ff;
    loc.x = pv->x;
    loc.y = pv->y;
    loc.z = pv->z;
    switch (sel) {
    case 0:
        func_02090330(0x12, &loc, z, z);
        break;
    case 1:
        func_02090330(0x13, &loc, z, z);
        break;
    case 2:
        func_02090330(0x14, &loc, z, z);
        break;
    case 3:
        func_02090330(0x15, &loc, z, z);
        break;
    case 4:
        func_02090330(0x16, &loc, z, z);
        break;
    case 5:
        func_02090330(0x17, &loc, z, z);
        break;
    case 6:
        func_02090330(0x19, &loc, z, z);
        break;
    case 7:
        func_02090330(0x18, &loc, z, z);
        break;
    }
    buf[0] = 0;
    buf[1] = h;
    func_02076a6c(tmp, self->unk_120.x, self->unk_120.z);
    func_02116048(tmp, &buf[2], 5);
    s = data_020cbb18;
    func_020728d4(s);
    func_020728a4(s, buf, 7);
    func_02072824(s, 0x2a, 4);
    return TRUE;
}

void func_ov003_02222ef4()
{
    if (data_ov003_02257a78 != 0) {
        data_ov003_02257a78--;
    }
}

BOOL func_ov003_02222f08()
{
    if (data_ov003_02257a78 != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov003_02222f1c()
{
    data_ov003_02257a78 = 10;
}

BOOL func_ov003_02222f28(void *self, s32 a1, s32 a2, s32 a3)
{
    volatile BOOL result = FALSE;
    u8 *p, *p2;
    u32 vw;
    volatile u16 *pp;
    BOOL k;
    u32 a, b;
    s32 idx;
    s32 off;
    s32 val;
    Unk_ov003_02222f28_Ent *t;

    p = (u8 *)func_0205ffe4();
    if (p == 0) {
        return FALSE;
    }
    func_020947c0((u16 *)&vw, a2);
    k = FALSE;
    pp = (volatile u16 *)&vw;
    a = *pp;
    b = *pp;
    if (b >= 0x1374 && a <= 0x1374) {
        k = TRUE;
    }
    if (k) {
        idx = 0;
    } else if (a >= 0x1375 && a <= 0x1375) {
        idx = 1;
    } else {
        return FALSE;
    }
    p2 = p + 8;
    off = data_020ca315[a3 * 6] * 4;
    t = &data_ov003_022348c0[idx];
    val = (t->p[off] << 12) / 10;
    if (func_ov003_0222034c(self, p2, val, val, val)) {
        s32 lim = *(s16 *)(t->p + off + 2);
        if (func_020e780c(func_02002bdc(self, p2), a1) <= lim) {
            result = TRUE;
        }
    }
    return result;
}
}
