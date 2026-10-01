#include "types.h"
#pragma opt_loop_invariants off

struct Unk_02043e94_G { u8 pad_00[0x64]; s32 unk_64; s32 unk_68; };
struct Unk_02043f04_Pos { s32 x, z; };
struct Unk_02044014_Vec3 { s32 x, y, z; };

extern Unk_02043e94_G *data_020cbb18;
extern u8 data_020e12cc[];
extern u8 data_020da2a4[];
extern u8 data_020da2a8[];

struct Unk_02044460_G {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    Unk_02044014_Vec3 unk_08;
    s16 unk_14;
};
extern Unk_02044460_G data_021c3ea8;

extern "C" {
s32 func_020494bc(u16 *a);
s32 func_02049370(u16 *a);
void func_02044460(Unk_02044460_G *g, s32 a, s32 b, s32 c, u8 d, Unk_02044014_Vec3 *v, s16 e);
void *func_02097520(void);
u16 *func_02098744(void);
s32 func_02072e44(void *g);
s32 func_020729cc(void *g, s32 a);
void *func_0204da0c(void);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02063b8c(s32 a);
s32 func_0204a9c8(void);
s32 func_020b50e8(void);
s32 func_0205f094(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0204ed8c(Unk_02044014_Vec3 *out, s32 x, s32 z);
s32 func_0208fc88(s32 id, void *v, s32 c, void *cb);
s32 func_02043f78(Unk_02043f04_Pos *p, s32 f);
s32 func_02043fc0(void *m, Unk_02043f04_Pos *p, s32 f);
void func_02044098(u16 *a, Unk_02043f04_Pos *p, s16 c, s32 d);
}

extern "C" u32 func_02043e70(void)
{
    u32 r = 0xfff1;
    if (func_02097520()) {
        u16 *p = func_02098744();
        if (p) {
            r = *p;
        }
    }
    return r;
}

extern "C" s32 func_02043e94(s32 a)
{
    Unk_02043e94_G *g = data_020cbb18;
    if (func_02072e44(g) == 0) {
        return TRUE;
    }
    return func_020729cc(g, a);
}

extern "C" s32 func_02043ec0(s32 a)
{
    if (!func_02072e44(data_020cbb18)) {
        a = 0;
    }
    return a;
}

extern "C" s32 func_02043ee0(s32 a)
{
    Unk_02043e94_G *g = data_020cbb18;
    if (!func_02072e44(g)) {
        a = g->unk_68;
    }
    return a;
}

extern "C" s32 func_02043f04(Unk_02043f04_Pos *p)
{
    Unk_02043f04_Pos t;
    t.x = p->x;
    t.z = p->z;
    return func_02043f78(&t, 1);
}

extern "C" void func_02043f20(Unk_02043f04_Pos *p)
{
    void *m = func_0204da0c();
    if (m) {
        s32 x = p->x;
        s32 z = p->z;
        s32 xh = x >> 4;
        s32 zh = z >> 4;
        void *r = func_0204ebd8(m, xh, zh, x - (xh << 4), z - (zh << 4), 0);
        if (r) {
            s32 f = func_02063b8c(0x50) < 0x46 ? 1 : 0;
            Unk_02043f04_Pos t;
            t.x = p->x;
            t.z = p->z;
            func_02043fc0(r, &t, f);
        }
    }
}

extern "C" s32 func_02043f78(Unk_02043f04_Pos *p, s32 f)
{
    void *m = func_0204da0c();
    if (m) {
        s32 x = p->x;
        s32 z = p->z;
        s32 xh = x >> 4;
        s32 zh = z >> 4;
        void *r = func_0204ebd8(m, xh, zh, x - (xh << 4), z - (zh << 4), 0);
        if (r) {
            Unk_02043f04_Pos t;
            t.x = p->x;
            t.z = p->z;
            func_02043fc0(r, &t, f);
        }
    }
}

extern "C" s32 func_02043fc0(void *m, Unk_02043f04_Pos *p, s32 f)
{
    if (func_0204a9c8()) {
        Unk_02043f04_Pos t;
        t.x = p->x;
        t.z = p->z;
        func_02044098((u16 *)m, &t, 0, f);
        if (f == 0) {
            func_0205f094((s8)p->x, (s8)p->z, func_020b50e8(), 0xfff1, 0);
        }
    }
}

extern "C" void func_02044014(Unk_02043f04_Pos *p)
{
    Unk_02044014_Vec3 v;
    func_0204ed8c(&v, p->x, p->z);
    func_0208fc88(0x94, &v, 0, data_020e12cc);
}

extern "C" void func_0204403c(u16 *a, Unk_02043f04_Pos *p)
{
    s32 id;
    switch (*a) {
    case 0x1f:
        id = 0x77;
        break;
    case 0x20:
        id = 0x78;
        break;
    default:
        id = 0x76;
        break;
    }
    Unk_02044014_Vec3 v;
    func_0204ed8c(&v, p->x, p->z);
    func_0208fc88(id, &v, 0, data_020e12cc);
}

extern "C" void func_0204407c(u16 *a, Unk_02043f04_Pos *p, s16 c, s32 d)
{
    Unk_02043f04_Pos t;
    t.x = p->x;
    t.z = p->z;
    func_02044098(a, &t, c, d);
}

static inline BOOL Unk_02044098_R(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" void func_02044098(u16 *a, Unk_02043f04_Pos *pos, s16 c, s32 d)
{
    s32 k, id1, id2;
    u8 flag;
    Unk_02044014_Vec3 v, w;
    k = (u8)func_020494bc(a);
    switch (k) {
    case 0:
        id1 = 0x44;
        id2 = 0x6a;
        break;
    case 1:
        id1 = 0x42;
        id2 = 0x68;
        break;
    case 2:
        id1 = 0x3e;
        id2 = 0x64;
        break;
    case 3:
        if (*a == 0x1c || *a == 0xa5) {
            id1 = 0x40;
            id2 = 0x66;
        } else {
            id1 = 0x43;
            id2 = 0x69;
        }
        break;
    case 4:
        id1 = 0x41;
        id2 = 0x67;
        break;
    case 5:
        id1 = 0x3f;
        id2 = 0x65;
        break;
    case 6:
        id1 = 0x63;
        id2 = 0x65;
        break;
    }
    func_0204ed8c(&v, pos->x, pos->z);
    flag = 0;
    s32 t;
    BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 x = *a;
    if (x >= 0x6e && x <= 0x73) {
        f1 = TRUE;
    }
    if (!f1 && !(x >= 0x74 && x <= 0x79)) {
        f2 = FALSE;
    }
    if (!f2 && !(x >= 0x7a && x <= 0x7f)) {
        f3 = FALSE;
    }
    if (!f3 && !(x >= 0x80 && x <= 0x87)) {
        f4 = FALSE;
    }
    if (f4 || x == 0x88 || x == 0x89 || (x >= 0x8a && x <= 0x8f) || (x >= 0x90 && x <= 0x95) ||
        (x >= 0x96 && x <= 0x9b) || (x >= 0x9c && x <= 0xa3) || x == 0xa5) {
        goto yes;
    }
    if (x == 0xa4) {
yes:
        flag = 1;
        t = 0;
    } else {
        t = (u8)func_02049370(a);
    }
    w = v;
    func_02044460(&data_021c3ea8, d, k, t, flag, &w, c);
    func_0208fc88(id1, &v, 0, data_020da2a8);
    if (d != 1) {
        func_0208fc88(id2, &v, 0, data_020da2a4);
    }
}

extern "C" void func_02044460(Unk_02044460_G *g, s32 a, s32 b, s32 c, u8 d, Unk_02044014_Vec3 *v, s16 e)
{
    g->unk_00 = a;
    g->unk_04 = b;
    g->unk_05 = c;
    g->unk_06 = d;
    g->unk_08.x = v->x;
    g->unk_08.y = v->y;
    g->unk_08.z = v->z;
    g->unk_14 = e;
}

struct Unk_020441f0_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
};
struct Unk_020441f0_P {
    u8 pad_00[0x18];
    s32 **unk_18;
    u8 pad_1c[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x3c - 0x2c];
    s16 unk_3c;
    s16 unk_3e;
    s16 unk_40;
    u8 pad_42[0x5a - 0x42];
    u16 unk_5a;
    u8 pad_5c[0x68 - 0x5c];
    u8 unk_68;
};
struct Unk_020441f0_T {
    s32 x, y, z;
};
extern u16 *data_020da2ac[];
extern u16 *data_020da2e4[];
extern u16 *data_020da2c8[];
extern "C" {
u16 func_020baa04(s32 a);
void func_020e93a0(Unk_020441f0_T *t, s32 a);
s32 func_020e94f8(Unk_020441f0_T *t);
}

extern "C" void func_020441f0(Unk_020441f0_P *p)
{
    Unk_02044460_G *const g = &data_021c3ea8;
    Unk_020441f0_Color c0, c2, c4;
    volatile u16 c6;
    Unk_020441f0_T t;
    Unk_02044014_Vec3 *gv = (Unk_02044014_Vec3 *)((u8 *)g + 8);
    p->unk_20 = g->unk_08.x + (*p->unk_18)[1];
    p->unk_24 = gv->y + (*p->unk_18)[2];
    p->unk_28 = gv->z + (*p->unk_18)[3];
    *(u16 *)&c0 = func_020baa04(3);
    c6 = *(u16 *)&c0;
    *(u16 *)&c2 = c6;
    if (g->unk_06 != 0) {
        *(u16 *)&c4 = *data_020da2ac[g->unk_04];
    } else {
        *(u16 *)&c4 = *data_020da2e4[g->unk_04];
    }
    c2.r = (c4.r * c2.r) / 31;
    c2.g = (c4.g * c2.g) / 31;
    c2.b = (c4.b * c2.b) / 31;
    p->unk_5a = *(u16 *)&c2;
    if (g->unk_00 == 2) {
        t.x = 0x400;
        t.y = 0x1000;
        t.z = 0;
        func_020e93a0(&t, g->unk_14);
        if (func_020e94f8(&t)) {
            s32 x = t.x, y = t.y, z = t.z;
            p->unk_3c = x;
            p->unk_3e = y;
            p->unk_40 = z;
        }
    }
}

extern "C" void func_0204432c(Unk_020441f0_P *p)
{
    Unk_02044460_G *const g = &data_021c3ea8;
    Unk_020441f0_Color c0, c2, c4;
    volatile u16 c6;
    Unk_020441f0_T t;
    Unk_02044014_Vec3 *gv = (Unk_02044014_Vec3 *)((u8 *)g + 8);
    p->unk_20 = g->unk_08.x + (*p->unk_18)[1];
    p->unk_24 = gv->y + (*p->unk_18)[2];
    p->unk_28 = gv->z + (*p->unk_18)[3];
    *(u16 *)&c0 = func_020baa04(3);
    c6 = *(u16 *)&c0;
    *(u16 *)&c2 = c6;
    *(u16 *)&c4 = data_020da2c8[g->unk_04][g->unk_05];
    c2.r = (c4.r * c2.r) / 31;
    c2.g = (c4.g * c2.g) / 31;
    c2.b = (c4.b * c2.b) / 31;
    p->unk_5a = *(u16 *)&c2;
    if (g->unk_00 == 1) {
        p->unk_68 = 2;
    }
    if (g->unk_00 == 2) {
        t.x = 0x400;
        t.y = 0x1000;
        t.z = 0;
        func_020e93a0(&t, g->unk_14);
        if (func_020e94f8(&t)) {
            s32 x = t.x, y = t.y, z = t.z;
            p->unk_3c = x;
            p->unk_3e = y;
            p->unk_40 = z;
        }
    }
}

struct Unk_02044490_E {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 2;
    u8 unk_00_3 : 5;
    u8 unk_01_0 : 2;
    u8 unk_01_2 : 1;
    u8 unk_01_3 : 2;
    u8 unk_01_5 : 2;
    u8 unk_01_7 : 1;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06[3];
    u16 unk_0c;
};
struct Unk_02044490_H6 { u16 a, b, c; };
struct Unk_02044490_R {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x24 - 0xc];
};
extern Unk_02044490_R data_021c4350[];
extern s32 data_021c3f88;
extern s32 *data_021c47c4;
extern "C" {
void func_02044650(Unk_02044490_E *e);
void func_020445a4(Unk_02044490_E *e);
void func_0204452c(Unk_02044490_E *e, s32 t);
void func_02042104(Unk_02044490_E *e);
s32 func_02095180(s32 a, s32 b);
void func_0204989c(s32 m, s32 x, s32 z, s32 a, s32 b);
}

extern "C" void func_02044490(Unk_02044490_E *e, s32 t)
{
    if (data_020cbb18->unk_64 == e->unk_00_1) {
        Unk_02044490_R *r = &data_021c4350[e->unk_01_0];
        if (e->unk_01_2 == 0) {
            r->unk_08 = 3;
        } else {
            r->unk_08 = 2;
            func_02044650(e);
        }
    } else if (e->unk_01_2 != 0) {
        if (t == func_020b50e8() && data_021c3f88 != 0) {
            if (func_02095180(10, 4)) {
                func_02042104(e);
                func_02044650(e);
            } else {
                func_02044650(e);
                func_020445a4(e);
            }
        } else {
            func_0204452c(e, t);
        }
    }
}

extern "C" void func_0204452c(Unk_02044490_E *e, s32 m)
{
    switch (e->unk_00_3) {
    case 12:
    case 13:
    case 15:
    case 23:
        return;
    }
    func_0204989c(m, e->unk_02 >> 8, e->unk_02 & 0xff, e->unk_04, e->unk_01_3);
    if (e->unk_00_0) {
        u16 w = e->unk_0c;
        volatile s32 z = 0;
        s32 i;
        for (i = 0; i < 3; i++) {
            u16 v = ((u16 *)((s32)e + 6))[i];
            func_0204989c(m, v >> 8, v & 0xff, w, z);
        }
    }
}

extern "C" {
void func_ov003_02219ae0(s32 a, s32 b, Unk_02043f04_Pos *p);
void func_0204558c(s32 a, Unk_02043f04_Pos *p, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
}


extern "C" void func_0204548c(Unk_02043f04_Pos *p, s32 f);

extern "C" void func_020445a4(Unk_02044490_E *e)
{
    s32 x = e->unk_02 >> 8;
    s32 z = e->unk_02 & 0xff;
    switch (e->unk_00_3) {
    case 12:
    case 13:
    case 15:
    case 23:
        return;
    }
    if (data_021c47c4 != 0) {
        s32 xh = x >> 4;
        s32 zh = z >> 4;
        func_0204ebd8(data_021c47c4, xh, zh, x - (xh << 4), z - (zh << 4), 0);
    }
    Unk_02043f04_Pos p1;
    s32 f1 = e->unk_01_7;
    p1.x = x;
    p1.z = z;
    func_0204548c(&p1, f1);
    if (e->unk_00_0) {
        s32 i;
        for (i = 0; i < 3; i++) {
            u16 v = ((u16 *)((s32)e + 6))[i];
            s32 px = v >> 8;
            s32 pz = v & 0xff;
            volatile u16 vv = e->unk_06[i];
            if (vv != 0xffff) {
                Unk_02043f04_Pos p2;
                s32 f2 = e->unk_01_7;
                p2.x = px;
                p2.z = pz;
                func_0204548c(&p2, f2);
            }
        }
    }
}

extern "C" void func_02044650(Unk_02044490_E *e)
{
    s32 x = e->unk_02 >> 8;
    s32 z = e->unk_02 & 0xff;
    switch (e->unk_00_3) {
    case 12:
    case 13:
    case 15:
    case 23:
        return;
    case 24:
    case 26: {
        Unk_02043f04_Pos p;
        p.x = x;
        p.z = z;
        func_ov003_02219ae0(e->unk_00_1, e->unk_04, &p);
        break;
    }
    }
    u32 h = 0xfff1;
    if (data_021c47c4 != 0) {
        s32 xh = x >> 4;
        s32 zh = z >> 4;
        h = *(u16 *)func_0204ebd8(data_021c47c4, xh, zh, x - (xh << 4), z - (zh << 4), 0);
    }
    Unk_02043f04_Pos p1;
    s32 f7 = e->unk_01_7;
    s32 f5 = e->unk_01_5;
    s32 f3 = e->unk_01_3;
    s32 t3 = e->unk_00_3;
    p1.x = x;
    p1.z = z;
    func_0204558c(e->unk_00_1, &p1, e->unk_04, h, t3, f3, f5, 4, f7, -1);
    if (e->unk_00_0) {
        u16 w = e->unk_0c;
        s32 zero = 0;
        s32 i;
        for (i = 0; i < 3; i++) {
            u16 v = ((u16 *)((s32)e + 6))[i];
            s32 px = v >> 8;
            s32 pz = v & 0xff;
            volatile u16 vv = e->unk_06[i];
            if (vv != 0xffff) {
                Unk_02043f04_Pos p2;
                s32 g7 = e->unk_01_7;
                p2.x = px;
                p2.z = pz;
                func_0204558c(e->unk_00_1, &p2, w, 0xfff1, zero, zero, zero, (u8)i, g7, -1);
            }
        }
    }
}

struct Unk_02044774_S {
    u8 unk_00_0 : 2;
    u8 unk_00_2 : 2;
    u8 unk_00_4 : 2;
    u8 unk_00_6 : 2;
    u8 unk_01_0 : 5;
    u8 unk_01_5 : 2;
    u8 unk_01_7 : 1;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
};
extern "C" {
s32 func_0204568c(u32 a, Unk_02043f04_Pos *p, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
s32 func_020449e8(Unk_02044490_E *e, Unk_02044774_S *s, s32 t);
void func_020728d4(void *g);
void func_020728a4(void *g, Unk_02044490_E *e, s32 mask);
s32 func_02072824(void *g, s32 a, s32 b);
}

struct Unk_02044774_PP { u16 v; };

extern "C" void func_02044774(Unk_02044774_S *src, u8 flag, s32 t)
{
    s32 mask = 6;
    Unk_02044490_E e;
    s32 i;
    e.unk_00_0 = 0;
    e.unk_00_1 = (u8)t;
    e.unk_00_3 = src->unk_01_0;
    e.unk_01_0 = src->unk_00_2;
    e.unk_01_2 = flag;
    e.unk_01_5 = src->unk_01_5;
    e.unk_01_7 = src->unk_01_7;
    e.unk_01_3 = src->unk_00_4;
    Unk_02044774_PP pp = *(Unk_02044774_PP *)&src->unk_02;
    *(Unk_02044774_PP *)&e.unk_02 = pp;
    e.unk_04 = src->unk_06;
    for (i = 0; i < 3; i++) {
        ((u16 *)&e + i)[3] = 0xffff;
    }
    s32 x = e.unk_02 >> 8;
    s32 z = e.unk_02 & 0xff;
    if (flag != 0) {
        switch (e.unk_00_3) {
        case 12:
        case 13:
        case 15:
        case 23:
            break;
        case 24: {
            Unk_02043f04_Pos p;
            p.x = x;
            p.z = z;
            func_0204568c((u8)t, &p, e.unk_04, 0xfff1, e.unk_00_3, e.unk_01_3, e.unk_01_5, 4, e.unk_01_7, -1);
            Unk_02043f04_Pos q;
            q.x = x;
            q.z = z;
            func_ov003_02219ae0(t, e.unk_04, &q);
            break;
        }
        case 26: {
            Unk_02043f04_Pos p;
            p.x = x;
            p.z = z;
            func_0204568c((u8)t, &p, e.unk_04, 0xfff1, e.unk_00_3, e.unk_01_3, e.unk_01_5, 4, e.unk_01_7, -1);
            if (!func_02043e94(t)) {
                Unk_02043f04_Pos q;
                q.x = x;
                q.z = z;
                func_ov003_02219ae0(t, e.unk_04, &q);
            }
            break;
        }
        default: {
            u32 h = src->unk_04;
            Unk_02043f04_Pos p;
            p.x = x;
            p.z = z;
            func_0204568c((u8)t, &p, e.unk_04, h, e.unk_00_3, e.unk_01_3, e.unk_01_5, 4, e.unk_01_7, -1);
            if (func_020449e8(&e, src, t)) {
                e.unk_00_0 = 1;
                mask = 14;
            }
            break;
        }
        }
        if (func_02043e94(t)) {
            Unk_02044490_R *r = &data_021c4350[src->unk_00_2];
            r->unk_08 = 2;
        } else {
            func_02042104(&e);
        }
    } else {
        if (func_02043e94(t)) {
            Unk_02044490_R *r = &data_021c4350[src->unk_00_2];
            r->unk_08 = 3;
        }
    }
    Unk_02043e94_G *g = data_020cbb18;
    func_020728d4(g);
    func_020728a4(g, &e, mask);
    func_02072824(g, 0x32, 4);
}
