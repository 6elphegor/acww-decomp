#include "types.h"

#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

struct Unk_ov004_0223d800_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0223d800_Bounds {
    /* 0x00 */ u8 pad_00[0x58];
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
};

// Owner actor of size 0x2d8 (array data_ov004_022523f4[0x20]).
struct Unk_ov004_0223d994_Obj {
    /* 0x000 */ u8 pad_000[0x178];
    /* 0x178 */ Unk_ov004_0223d800_Vec unk_178[2];
    /* 0x190 */ u8 pad_190[2];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ u8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223d800_Vec unk_2c8;
    /* 0x2d4 */ u8 pad_2d4[4];
};

// Spawn-definition record (0x1c bytes).
struct Unk_ov004_0223df58_Rec {
    /* 0x00 */ Unk_ov004_0223d800_Vec unk_00;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 pad_1a[2];
};

struct Unk_ov004_0223df20_Def {
    /* 0x00 */ Unk_ov004_0223d800_Vec unk_00;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 pad_15[3];
};

struct Unk_ov004_0223d8e8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223d8e8_Sub {
    u8 pad_00[0xa4];
    Unk_ov004_0223d8e8_Bits unk_a4;
};

struct Unk_ov004_0223dd88_Tbl {
    u8 unk_00;
    Unk_ov004_0223df58_Rec *unk_04;
    u32 unk_08;
};

typedef Unk_ov004_0223d800_Vec V3;
typedef Unk_ov004_0223d994_Obj Obj;
typedef Unk_ov004_0223df58_Rec Rec;

struct Unk_ov004_0223d85c_V : V3 {
    Unk_ov004_0223d85c_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    s32 func_02033914(s32 f);
    ~Unk_0203398c();
};

extern "C" {
extern s16 data_02135f44[];
extern void *data_021c47c4;
extern u8 data_021c3cc0;
extern s32 data_ov004_022447dc[];
extern s32 data_ov004_022447ec[];
extern s32 data_ov004_022447f0[];
extern Unk_ov004_0223dd88_Tbl data_ov004_02244230[];

s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
void func_020e93a0(V3 *v, s32 a);
void func_021355f0(void *arr, s32 n, s32 size, void *dtor);
extern u8 data_ov004_022523f4[];
void func_ov004_02237690(void *p);
s32 func_02063b8c(s32 a);
s32 func_020547a4(void *p, u32 v);
void func_020323b0(void *p);
void func_0203239c(void *p);
void func_020309d4(void *a, V3 *b, V3 *c, s32 d, u32 e, void *f, u32 g);
s32 func_020b50e8();
void func_ov004_02213be8(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
u8 func_ov004_0223d800(Unk_ov004_0223d800_Bounds *o, V3 *v);
void func_ov004_0223d994(Obj *o);
u8 func_ov004_0223da18(Obj *o);
u8 func_ov004_0223da9c(Obj *o);

u32 func_ov004_0223defc(Rec *r);
s32 func_ov004_0223df00(Rec *r);
s16 func_ov004_0223df04(Rec *r);
u32 func_ov004_0223df0c(Rec *r);
s32 func_ov004_0223df10(Rec *r);
s16 func_ov004_0223df14(Rec *r);
void *func_ov004_0223df1c(Rec *r);
void func_ov004_0223df58(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204eb5c(void *a, u16 *t, s32 x, s32 y, s32 p4, s32 p5, s32 z);
s32 func_02053228(void *p);
void func_0200402c(s32 a);
void *func_020951ec(s32 a);
void func_0203a124(s32 *x, s32 *y, void *p);
}

class Unk_0206fe80 {
public:
    BOOL func_02070358(u16 *id);
};

extern "C" Unk_0206fe80 data_021ed0a0;

struct Unk_ov004_0223dbf4_H {
    u16 v;
    Unk_ov004_0223dbf4_H(u16 x) { v = x; }
    ~Unk_ov004_0223dbf4_H() {}
};

class Unk_ov004_0224f0ec : public Unk_020d8c7c {
public:
    Unk_ov004_0224f0ec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_18();
    virtual ~Unk_ov004_0224f0ec();
    virtual BOOL vfunc_48();

    void func_ov004_0223dd88();
};

class Unk_ov004_0224f098 : public Unk_ov004_0224f0ec {
public:
    Unk_ov004_0224f098();
    virtual ~Unk_ov004_0224f098();
    virtual BOOL vfunc_48();
};

class Unk_ov004_0224f140 : public Unk_ov004_0224f0ec {
public:
    Unk_ov004_0224f140();
    virtual ~Unk_ov004_0224f140();
    virtual BOOL vfunc_48();
};

struct Unk_ov004_0223df20_V : V3 {
    Unk_ov004_0223df20_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

class Unk_020e100c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208d60c(s32 a, s32 b);
};

class Unk_ov004_0224e2b8_Stub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void *vfunc_50();
};

struct Unk_ov004_0223e014_Zero {
    s32 x, y, z;
    Unk_ov004_0223e014_Zero() {}
    ~Unk_ov004_0223e014_Zero() {}
};

struct Unk_ov004_0223e014_Obj {
    /* 0x000 */ u8 pad_000[0x31c];
    /* 0x31c */ u8 unk_31c;
    /* 0x31d */ u8 unk_31d;
    /* 0x31e */ u8 pad_31e[2];
    /* 0x320 */ s32 unk_320;
    /* 0x324 */ u8 pad_324[0xc];
    /* 0x330 */ s32 unk_330;
    /* 0x334 */ s32 unk_334;
};

extern "C" Unk_ov004_0224e2b8_Stub *func_ov004_0222a2c0();

extern "C" u8 func_ov004_0223d800(Unk_ov004_0223d800_Bounds *o, V3 *v) {
    u8 r;
    s32 *q;
    s32 *p;
    q = &o->unk_60;
    p = &o->unk_58;
    r = 0;
    if (v->x < o->unk_58) {
        v->x = o->unk_58;
        r = 1;
    } else if (v->x > q[0]) {
        v->x = q[0];
        r |= 2;
    }
    if (v->z < p[1]) {
        v->z = p[1];
        r |= 4;
    } else if (v->z > q[1]) {
        v->z = q[1];
        r |= 8;
    }
    return r;
}

extern "C" BOOL func_ov004_0223d85c(V3 *o, V3 *v) {
    BOOL r = TRUE;
    BOOL far;
    {
        Unk_ov004_0223d85c_V a(o->x, 0, v->z);
        Unk_0203398c g;
        g.func_020339bc(&a, 0, 0);
        if (g.func_02033914(0) > 0x200) {
            far = r;
        } else {
            far = FALSE;
        }
    }
    if (far) {
        o->x = v->x;
        r = FALSE;
    }
    {
        Unk_ov004_0223d85c_V a(v->x, 0, o->z);
        Unk_0203398c g;
        g.func_020339bc(&a, 0, 0);
        if (g.func_02033914(0) > 0x200) {
            far = TRUE;
        } else {
            far = FALSE;
        }
    }
    if (far) {
        o->z = v->z;
        r = FALSE;
    }
    return r;
}

extern "C" void func_ov004_0223d8e8(u8 *o) {
    Unk_ov004_0223d8e8_Sub *p = (Unk_ov004_0223d8e8_Sub *)(o + 0xb0);
    if (p->unk_a4.mid == 1) {
        func_020547a4(p, 2);
    } else {
        func_020547a4(p, 1);
    }
}

extern "C" void func_ov004_0223d910(V3 *out, V3 *base, u32 ang, s32 rad) {
    s32 z;
    s32 i = ((u16)ang >> 4) * 2;
    z = base->z + func_01ffcb0c(rad, data_02135f44[i + 1]);
    s32 x = base->x + func_01ffcb0c(rad, data_02135f44[i]);
    out->x = x;
    out->y = 0;
    out->z = z;
}

extern "C" s16 func_ov004_0223d958() {
    u32 r = (u8)func_02063b8c(0x10);
    if (r > 8) {
        r = -(r - 8);
    }
    return (s16)(r * 0xaaa);
}

extern "C" void func_ov004_0223d980(V3 *v, s32 a) {
    v->x = 0;
    v->y = 0;
    v->z = 0x29;
    func_020e93a0(v, a);
}

extern "C" void func_ov004_0223d994(Obj *o) {
    V3 *b = &o->unk_2c8;
    s32 a = o->unk_192;
    V3 *out = o->unk_178;
    s32 i = (u16)(s16)(a + 0xe38) >> 4;
    s32 z = b->z + data_02135f44[i * 2 + 1];
    s32 y = b->y;
    s32 x = b->x + data_02135f44[i * 2];
    out[0].x = x;
    out[0].y = y;
    out[0].z = z;
    i = (u16)(s16)(a - 0xe38) >> 4;
    z = b->z + data_02135f44[i * 2 + 1];
    y = b->y;
    x = b->x + data_02135f44[i * 2];
    out[1].x = x;
    out[1].y = y;
    out[1].z = z;
}

extern "C" u8 func_ov004_0223da18(Obj *o) {
    u8 r = 0;
    V3 *p = &o->unk_178[0];
    s32 lim = o->unk_2c8.y;
    u8 buf[0x30];
    func_020323b0(buf);
    s16 ang = o->unk_192;
    func_020309d4(buf, p, p, ang, 0x266, NULL, 0xb);
    if (p->y > lim) {
        r++;
    }
    func_020309d4(buf, p + 1, p + 1, ang, 0x266, NULL, 0xb);
    if (p[1].y > lim) {
        r = r + 2;
    }
    func_0203239c(buf);
    return r;
}

extern "C" u8 func_ov004_0223da9c(Obj *o) {
    u8 b = o->unk_196;
    u8 r = 0;
    V3 *p = &o->unk_178[0];
    s32 d;
    {
        Unk_0203398c g;
        g.func_020339bc(p, 0, 1);
        d = g.func_02033914(1);
    }
    if (d <= 0 || d > p->y || (b == 0x1e && func_ov004_0223d800((Unk_ov004_0223d800_Bounds *)o, p) != 0)) {
        r++;
    }
    {
        Unk_0203398c g;
        g.func_020339bc(p + 1, 0, 1);
        d = g.func_02033914(1);
    }
    if (d <= 0 || d > p[1].y || (b == 0x1e && func_ov004_0223d800((Unk_ov004_0223d800_Bounds *)o, p + 1) != 0)) {
        r = r + 2;
    }
    return r;
}

extern "C" u8 func_ov004_0223db3c(Obj *o) {
    func_ov004_0223d994(o);
    return func_ov004_0223da18(o);
}

extern "C" u8 func_ov004_0223db50(Obj *o) {
    func_ov004_0223d994(o);
    return func_ov004_0223da9c(o);
}

extern "C" void func_ov004_0223db64() {
    func_021355f0(data_ov004_022523f4, 0x20, 0x2d8, (void *)func_ov004_02237690);
}

BOOL Unk_ov004_0224f098::vfunc_48() {
    return TRUE;
}

Unk_ov004_0224f098::~Unk_ov004_0224f098() {}

Unk_ov004_0224f098::Unk_ov004_0224f098() {}

extern "C" Unk_ov004_0224f098 *func_ov004_0223dbdc() {
    return new Unk_ov004_0224f098;
}

BOOL Unk_ov004_0224f140::vfunc_48() {
    s32 y, x;
    void *m = data_021c47c4;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u16 *p = (u16 *)func_0204ebd8(m, 0, 0, x, y, 0);
            if (p != NULL) {
                BOOL k = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    k = TRUE;
                }
                if (k) {
                    BOOL k2 = FALSE;
                    if (data_021ed0a0.func_02070358(p)) {
                        k2 = TRUE;
                    }
                    if (!k2) {
                        static Unk_ov004_0223dbf4_H sa(0x4a54);
                        static Unk_ov004_0223dbf4_H sb(0xfff1);
                        s32 w = func_02053228(p);
                        u16 v = 0xfff1;
                        if (w == 0) {
                            v = sa.v;
                        } else {
                            v = sb.v;
                        }
                        func_0204eb5c(m, &v, 0, 0, x, y, 0);
                    }
                }
            }
        }
    }
    return TRUE;
}

Unk_ov004_0224f140::~Unk_ov004_0224f140() {}

Unk_ov004_0224f140::Unk_ov004_0224f140() {}

extern "C" Unk_ov004_0224f140 *func_ov004_0223dd70() {
    return new Unk_ov004_0224f140;
}

void Unk_ov004_0224f0ec::func_ov004_0223dd88() {
    s32 k = func_020b50e8();
    u32 i;
    for (i = 0; i < 7; i++) {
        Unk_ov004_0223dd88_Tbl *e = &data_ov004_02244230[i];
        if (k == e->unk_00) {
            u32 j, n;
            j = 0;
            n = e->unk_08;
            for (; j < n; j++) {
                Rec *rec = &e->unk_04[j];
                u32 a = func_ov004_0223df0c(rec);
                void *b = func_ov004_0223df1c(rec);
                s32 c = func_ov004_0223df14(rec);
                s32 d = func_ov004_0223df10(rec);
                s32 f = func_ov004_0223df04(rec);
                s32 g = func_ov004_0223df00(rec);
                func_ov004_02213be8(a, b, c, d, f, g, func_ov004_0223defc(rec));
            }
            break;
        }
    }
}

BOOL Unk_ov004_0224f0ec::vfunc_18() {
    return TRUE;
}

BOOL Unk_ov004_0224f0ec::vfunc_48() {
    return TRUE;
}

BOOL Unk_ov004_0224f0ec::vfunc_00() {
    func_ov004_0223dd88();
    vfunc_48();
    return TRUE;
}

Unk_ov004_0224f0ec::~Unk_ov004_0224f0ec() {}

Unk_ov004_0224f0ec::Unk_ov004_0224f0ec() {}

extern "C" Unk_ov004_0224f0ec *func_ov004_0223dee4() {
    return new Unk_ov004_0224f0ec;
}

extern "C" u32 func_ov004_0223defc(Rec *r) {
    return r->unk_18;
}

extern "C" s32 func_ov004_0223df00(Rec *r) {
    return r->unk_14;
}

extern "C" s16 func_ov004_0223df04(Rec *r) {
    return r->unk_12;
}

extern "C" u32 func_ov004_0223df0c(Rec *r) {
    return r->unk_19;
}

extern "C" s32 func_ov004_0223df10(Rec *r) {
    return r->unk_0c;
}

extern "C" s16 func_ov004_0223df14(Rec *r) {
    return r->unk_10;
}

extern "C" void *func_ov004_0223df1c(Rec *r) {}

extern "C" Rec *func_ov004_0223df20(Rec *r, Unk_ov004_0223df20_Def *d) {
    Unk_ov004_0223df20_V v(d->unk_00.x, d->unk_00.y, d->unk_00.z);
    func_ov004_0223df58(r, &v, d->unk_0c, d->unk_0d, d->unk_0e, d->unk_10, d->unk_14);
    return r;
}

extern "C" void func_ov004_0223df58(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e) {
    s32 sum; u32 i; s32 last; s32 cnt;
    r->unk_00.x = pos->x;
    r->unk_00.y = pos->y;
    r->unk_00.z = pos->z;
    r->unk_19 = b;
    r->unk_12 = c;
    r->unk_14 = d;
    r->unk_18 = e;
    sum = 0;
    cnt = sum;
    last = sum;
    i = sum;
    do {
        if (((mask >> i) & 1) != 0) {
            sum += i << 14;
            last = (s16)(i << 14);
            cnt++;
        }
        i++;
    } while (i < 4);
    r->unk_10 = func_01ffc5a4(sum << 12, cnt << 12) >> 12;
    if (cnt == 2) {
        if (func_020e780c(last, r->unk_10) >= 0x4000) {
            r->unk_10 = r->unk_10 + 0x8000;
        }
    }
    last = 0;
    i = last;
    do {
        if (((mask >> i) & 1) != 0) {
            s32 t = func_020e780c((s32)(i << 30) >> 16, r->unk_10);
            if (t > last) {
                last = t;
            }
        }
        i++;
    } while (i < 4);
    r->unk_0c = last + 0x1300;
}

extern "C" void func_ov004_0223e010() {}

extern "C" void func_ov004_0223e014(Unk_ov004_0223e014_Obj *o) {
    Unk_ov004_0223e014_Zero z;
    s32 xy[2];
    void *pp;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    if (o->unk_31d != 0) {
        pp = func_ov004_0222a2c0()->vfunc_50();
    } else {
        pp = (u8 *)func_020951ec(o->unk_31c) + 0x5c;
    }
    func_0203a124(&xy[0], &xy[1], pp);
    if (o->unk_31d == 0) {
        xy[0] = xy[0] + data_ov004_022447ec[o->unk_31c * 2];
        xy[1] = xy[1] + data_ov004_022447f0[o->unk_31c * 2];
    } else {
        xy[0] = xy[0] + data_ov004_022447dc[0];
        xy[1] = xy[1] + data_ov004_022447dc[1];
    }
    BOOL t;
    if (data_021c3cc0 == 2) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) {
        if (o->unk_320 == 2) {
            if (o->unk_330 != xy[0] || o->unk_334 != xy[1]) {
                func_0200402c(0xb);
            }
        }
    }
    ((Unk_020e100c *)((u8 *)o + 0x50))->func_0208d60c(xy[0], xy[1]);
    ((Unk_020e100c *)((u8 *)o + 0x50))->vfunc_0c();
    o->unk_330 = xy[0];
    o->unk_334 = xy[1];
}
