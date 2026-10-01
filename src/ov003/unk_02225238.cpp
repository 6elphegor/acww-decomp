#pragma opt_loop_invariants off
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_02224ba4_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_02224ba4_V3 V3;

struct Unk_ov003_02224e68_V3 {
    s32 x, y, z;
    Unk_ov003_02224e68_V3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
};

// polymorphic actor returned by func_020951ec (only the slots used here)
class Unk_ov003_02224bc4_Actor : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(V3 *out);

    /* 0x50 */ u8 pad_50[0xc];
    /* 0x5c */ V3 unk_5c;
    /* 0x68 */ u8 pad_68[0xb0 - 0x68];
    /* 0xb0 */ u32 unk_b0;
};

static inline BOOL Unk_ov003_02224bc4_Bit(u32 f, u32 m)
{
    if ((f & m) != 0) return TRUE;
    return FALSE;
}

class Unk_020cbb18 {
public:
    BOOL func_02072e44();
    BOOL func_020729cc(s32 i);
};

// 0x60-byte entry, table at data_ov003_02257d1c
struct Unk_ov003_02257d1c {
    u32 unk_00[0x30 / 4];
    u8 unk_30;
    u8 pad_31[3];
    V3 unk_34;
    V3 unk_40;
    V3 unk_4c;
    s32 unk_58;
    u8 unk_5c;
    u8 pad_5d[3];
};

struct Unk_ov003_02225238_Grid {
    u8 *cells;
    u32 w;
    u32 h;
};

extern "C" {
extern Unk_ov003_02257d1c data_ov003_02257d1c[4];
extern V3 data_ov003_02257d50;
extern Unk_020cbb18 *data_020cbb18;

Unk_ov003_02224bc4_Actor *func_020951ec(s32 n);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
s32 func_ov003_02224b1c(Unk_ov003_02257d1c *e);
void func_ov003_02221874(void *p);
void func_ov003_02221998(void *p);
void func_0204eda4(V3 *out, s32 a, s32 b, s32 c, s32 d);
void *func_0204da0c();
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 func_0204b1e4();
s32 func_020312a8(s32 x, s32 y);
void *func_02115fb4(void *p, s32 v, u32 n);
extern u16 data_ov003_02259154[];
extern u16 data_ov003_02258f54[];
void func_ov003_02225108();
BOOL func_ov003_02225238(u16 *buf, s32 kind, s32 *px, s32 *py, Unk_ov003_02225238_Grid *grid, s32 mode);
u32 func_020374e8();
s32 func_0204e88c(void *g, s32 x, s32 y);
s32 func_020312d0(s32 x, s32 y);
s32 func_020312ec(s32 x, s32 y);
s32 func_02031218(s32 x, s32 y);
s32 func_ov003_0222dec8(s32 kind, u16 *c);
u32 func_02063b8c(u32 n);
void func_0204ee10(s32 *a, s32 *b, void *c);
void func_ov003_02224e68(u16 *buf, s32 x, s32 y, s32 rad, u8 a, u8 b);
extern u8 data_ov003_02257e9c[];
extern u8 data_ov003_0225812c[];

V3 *func_ov003_02224ba4(s32 i);
s32 func_ov003_02224bc4(s32 i);
BOOL func_ov003_02224d14(s32 i);
void func_ov003_02224d58(V3 *v, s32 i);
void *func_ov003_02224d80(void *p);
void func_ov003_02224dc4();
void func_ov003_02224dc8();
void func_ov003_02224dcc();
void func_ov003_02224e04();
void func_ov003_02224e24();
void func_ov003_02224e44();
void func_ov003_0222503c(u32 n0, u16 *tbl, s32 *px, s32 *py);
BOOL func_ov003_022250a0(u16 *p);
BOOL func_ov003_022250b4(u16 *p);
BOOL func_ov003_022250cc(u16 *p);
Unk_ov003_02257d1c *func_ov003_02224d90(Unk_ov003_02257d1c *p);
}

V3 *func_ov003_02224ba4(s32 i)
{
    if (i < 0 || i >= 4) {
        return &data_ov003_02257d50;
    }
    return &data_ov003_02257d1c[i].unk_34;
}

s32 func_ov003_02224bc4(s32 i)
{
    Unk_ov003_02257d1c *e;
    Unk_ov003_02224bc4_Actor *p;
    Unk_020cbb18 *s;
    V3 t;
    if (i < 0 || i >= 4) {
        return 0;
    }
    e = &data_ov003_02257d1c[i];
    if (e->unk_30 != 0) {
        return 1;
    }
    p = func_020951ec(i);
    if (p == 0) {
        return 0;
    }
    s = data_020cbb18;
    if (s->func_02072e44()) {
        if (s->func_020729cc(i)) {
            e->unk_5c = 1;
        } else {
            e->unk_5c = 0;
        }
        u32 f = p->unk_b0;
        if (Unk_ov003_02224bc4_Bit(f, 4) && Unk_ov003_02224bc4_Bit(f, 2)) {
            { V3 *ps = &p->unk_5c; V3 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        } else if (p->vfunc_5c(&t)) {
            { V3 *pd = &e->unk_40; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3 *ps = &p->unk_5c; V3 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    } else {
        e->unk_5c = 1;
        if (p->vfunc_5c(&t)) {
            { V3 *pd = &e->unk_40; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3 *ps = &p->unk_5c; V3 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    }
    e->unk_30 = 1;
    { V3 *pd = &e->unk_34; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
    e->unk_58 = 0;
    e->unk_4c.y = -0x3800;
    return 2;
}

BOOL func_ov003_02224d14(s32 i)
{
    if (i < 0 || i >= 4) {
        return FALSE;
    }
    Unk_ov003_02257d1c *e = &data_ov003_02257d1c[i];
    u32 st = e->unk_30;
    if (st == 0) goto zero;
    if (st == 2) {
        if (e->unk_58 > 0x64) goto zero;
    }
    if (func_ov003_02224b1c(e) == 0) goto one;
zero:
    return FALSE;
one:
    return TRUE;
}

void func_ov003_02224d58(V3 *v, s32 i)
{
    if (i >= 0 && i < 4) {
        Unk_ov003_02257d1c *e = &data_ov003_02257d1c[i];
        V3 *pv = &e->unk_4c;
        pv->x = v->x;
        pv->y = v->y;
        pv->z = v->z;
    }
}

class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
};

class Unk_ov003_02234a94 : public Unk_020dbe4c {
public:
    virtual ~Unk_ov003_02234a94();
};

class Unk_ov003_0223498c : public Unk_020d8c7c {
public:
    Unk_ov003_0223498c();
    u8 pad_50[0x88 - 0x50];
};

void *func_ov003_02224d80(void *p)
{
    func_0203239c(p);
    return p;
}

Unk_ov003_02257d1c *func_ov003_02224d90(Unk_ov003_02257d1c *p)
{
    func_020323b0(p);
    p->unk_30 = 0;
    p->unk_34.x = 0x1000;
    p->unk_34.y = 0x1000;
    p->unk_34.z = 0x1000;
    p->unk_40.x = 0x1000;
    p->unk_40.y = 0x1000;
    p->unk_40.z = 0x1000;
    p->unk_4c.x = 0x1000;
    p->unk_4c.y = 0x1000;
    p->unk_4c.z = 0x1000;
    p->unk_58 = 0;
    return p;
}

void func_ov003_02224dc4() {}

void func_ov003_02224dc8() {}

void func_ov003_02224dcc()
{
    new Unk_ov003_0223498c;
}

Unk_ov003_02234a94::~Unk_ov003_02234a94() {}

void func_ov003_02224e04()
{
    func_021355f0(data_ov003_02257d1c, 4, 0x60, (void *)func_ov003_02224d80);
}

void func_ov003_02224e24()
{
    func_021355f0(data_ov003_02257e9c, 4, 0xa4, (void *)func_ov003_02221874);
}

void func_ov003_02224e44()
{
    func_021355f0(data_ov003_0225812c, 6, 0x24c, (void *)func_ov003_02221998);
}

BOOL func_ov003_022250a0(u16 *p)
{
    BOOL r = FALSE;
    if (*p >= 0xcc && *p <= 0xcf) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_022250b4(u16 *p)
{
    u32 v = *p;
    if (v == 0x5b || (v >= 0x66 && v <= 0x6d)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022250cc(u16 *p)
{
    u32 v = *p;
    if (v == 0x2a || v == 0x61 || (v >= 0x33 && v <= 0x36) || (v >= 0x3b && v <= 0x3e) || (v >= 0x43 && v <= 0x46) ||
        (v >= 0x4b && v <= 0x4e) || (v >= 0x53 && v <= 0x56)) {
        return TRUE;
    }
    return FALSE;
}

void func_ov003_0222503c(u32 n0, u16 *tbl, s32 *px, s32 *py)
{
    u32 n = func_02063b8c(n0);
    s32 y = 0;
    s32 x0 = 0;
    for (; y < 16; y++) {
        s32 x = x0;
        u16 *row = tbl + y;
        for (; x < 16; x++) {
            if (((*row >> x) & 1) == 0) {
                if (n-- == 0) {
                    V3 t;
                    func_0204eda4(&t, *px + 1, *py + 1, x, y);
                    *px = t.x;
                    *py = t.z;
                    return;
                }
            }
        }
    }
}

void func_ov003_02224e68(u16 *buf, s32 x, s32 y, s32 rad, u8 a, u8 b)
{
    s32 ox = 0;
    s32 oy = 0;
    Unk_ov003_02224e68_V3 pos(x, 0, y);
    s32 bo;
    s32 t;
    s32 l;
    s32 r;
    s32 x0;
    s32 y0;
    s32 by;
    s32 bb;
    s32 bx;
    s32 lx;
    s32 aa;
    s32 ly;
    s32 e1;
    s32 w1;
    s32 e2;
    s32 h1;
    s32 i;
    s32 lo;
    s32 bx32;
    u16 m0;
    u16 *p2;
    u16 *pp;
    s32 n;
    u16 *p1;
    u16 m2;
    u16 m3;
    u16 *p0;
    s32 q;
    func_0204ee10(&ox, &oy, &pos);
    x0 = ox;
    l = x0 - rad;
    aa = a;
    y0 = oy;
    t = y0 - aa;
    r = x0 + rad;
    bb = b;
    bo = y0 + bb;
    if (l < 0x10) l = 0x10;
    if (t < 0x10) t = 0x10;
    if (r > 0x50) r = 0x50;
    if (bo > 0x50) bo = 0x50;
    if (l >= 0x10 && l < r && r <= 0x50 && t >= 0x10 && t < bo && bo <= 0x50) {
        bx = l >> 4;
        by = t >> 4;
        lx = l - (bx << 4);
        ly = t - (by << 4);
        e1 = lx + rad * 2;
        w1 = e1 > 0x10 ? 0x10 : e1;
        e2 = ly + aa + bb;
        h1 = e2 > 0x10 ? 0x10 : e2;
        if (bx == 1) {
            x0 -= 0x10;
            q = x0 - rad;
            if (q < 0) w1 += q;
        }
        if (by == 1) {
            y0 -= 0x10;
            q = y0 - aa;
            if (q < 0) h1 += q;
        }
        lo = lx > 0 ? (2 << lx) - 1 : 0;
        m0 = (2 << w1) - 1 - lo;
        bx32 = bx << 5;
        p0 = (u16 *)((u8 *)buf + ((by - 1) << 7) + bx32);
        pp = p0 - 0x10;
        for (i = ly; i < h1; i++) {
            pp[i] |= m0;
        }
        if (e2 > 0x10 && by < 4) {
            n = e2 - 0x10;
            p1 = (u16 *)((u8 *)buf + (by << 7) + bx32) - 0x10;
            for (i = 0; i < n; i++) {
                p1[i] |= m0;
            }
        }
        if (e1 > 0x10 && bx < 4) {
            m2 = (2 << (e1 - 0x10)) - 1;
            for (; ly < h1; ly++) {
                p0[ly] |= m2;
            }
        }
        if (e2 > 0x10 && e1 > 0x10 && bx < 4 && by < 4) {
            e1 -= 0x10;
            m3 = (2 << e1) - 1;
            n = e2 - 0x10;
            p2 = (u16 *)((u8 *)buf + (by << 7) + bx32);
            for (i = 0; i < n; i++) {
                p2[i] |= m3;
            }
        }
    }
}

void func_ov003_02225108()
{
    u8 ty;
    void *g;
    s32 wy;
    u32 xo;
    u8 *pa;
    u8 *pb;
    u32 yo;
    u8 *qa;
    u8 *qb;
    s32 hy;
    u16 *rowa;
    u16 *rowb;
    s32 wx;
    s32 hx;
    u16 *c;
    u8 o1;
    u8 o2;
    u8 tx;
    g = func_0204da0c();
    if (g != 0) {
        func_02115fb4(data_ov003_02259154, 0, 0x200);
        func_02115fb4(data_ov003_02258f54, 0, 0x200);
        o1 = 0;
    l1:
        xo = (u8)((o1 + 1) << 4);
        o2 = 0;
        pa = (u8 *)data_ov003_02259154 + (o1 << 5);
        pb = (u8 *)data_ov003_02258f54 + (o1 << 5);
    l2:
        yo = (u8)((o2 + 1) << 4);
        ty = 0;
        qa = pa + (o2 << 7);
        qb = pb + (o2 << 7);
    l3:
        tx = 0;
        wy = yo + ty;
        hy = wy >> 4;
        rowa = (u16 *)qa + ty;
        rowb = (u16 *)qb + ty;
    l4:
        wx = xo + tx;
        hx = wx >> 4;
        c = func_0204ebd8(g, hx, hy, wx - (hx << 4), wy - (hy << 4), 0);
        if (c != 0) {
            if (func_0204b1e4() != 0 || func_020312a8(xo + tx, wy) == 1) {
                *rowa |= 1 << tx;
                *rowb |= 1 << tx;
            } else if (func_020312a8(xo + tx, wy) == 2) {
                *rowb |= 1 << tx;
            }
        }
        tx++;
        if (tx < 16) goto l4;
        ty++;
        if (ty < 16) goto l3;
        o2++;
        if (o2 < 4) goto l2;
        o1++;
        if (o1 < 4) goto l1;
    }
}

static inline u8 *Unk_ov003_02225238_Cell(Unk_ov003_02225238_Grid *g, u32 x, u32 y)
{
    if (x < g->w && y < g->h && g->cells != 0) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return 0;
}

static inline BOOL Unk_ov003_02225238_ChkA(u16 *p)
{
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (!(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    }
    if (!f3) {
        if (!(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    }
    if (!f4) {
        if (!(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (!(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (!(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    }
    return f9;
}

static inline BOOL Unk_ov003_02225238_ChkB(u16 *p)
{
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (!(v >= 6 && v <= 0xb)) f2 = FALSE;
    }
    if (!f2) {
        if (!(v >= 0xc && v <= 0x11)) f3 = FALSE;
    }
    if (!f3) {
        if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) f4 = FALSE;
    }
    if (!f4) {
        if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) ||
              (v >= 0x9c && v <= 0xa3) || v == 0xa5))
            f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}

#define CHK_A(p, a1, a2, a3, a4, a5, a6, a7, a8, a9, res) { \
    a9 = TRUE; a8 = TRUE; a7 = TRUE; a6 = TRUE; a5 = TRUE; a4 = TRUE; a3 = TRUE; a2 = TRUE; a1 = FALSE; \
    u32 v = *(p); \
    if (v >= 0x26 && v <= 0x2a) a1 = TRUE; \
    if (!a1) { if (!(v >= 0x5d && v <= 0x61)) a2 = FALSE; } \
    if (!a2) { if (!(v >= 0x2f && v <= 0x56)) a3 = FALSE; } \
    if (!a3) { if (!(v >= 0x57 && v <= 0x5b)) a4 = FALSE; } \
    if (!a4) { if (!(v >= 0x66 && v <= 0x68)) a5 = FALSE; } \
    if (!a5) { if (v != 0x69) a6 = FALSE; } \
    if (!a6) { if (!(v >= 0x6a && v <= 0x6c)) a7 = FALSE; } \
    if (!a7) { if (v != 0x6d) a8 = FALSE; } \
    if (!a8) { if (!(v >= 0xc8 && v <= 0xcf)) a9 = FALSE; } \
    res = a9; }
#define CHK_B(p, a1, a2, a3, a4, a5, a6, a7, a8, res) { \
    a8 = TRUE; a7 = TRUE; a6 = TRUE; a5 = TRUE; a4 = TRUE; a3 = TRUE; a2 = TRUE; a1 = FALSE; \
    u32 v = *(p); \
    if (v <= 5) a1 = TRUE; \
    if (!a1) { if (!(v >= 6 && v <= 0xb)) a2 = FALSE; } \
    if (!a2) { if (!(v >= 0xc && v <= 0x11)) a3 = FALSE; } \
    if (!a3) { if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) a4 = FALSE; } \
    if (!a4) { if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5)) a5 = FALSE; } \
    if (!a5) { if (v != 0x1a) a6 = FALSE; } \
    if (!a6) { if (v != 0xa4) a7 = FALSE; } \
    if (!a7) { if (v != 0x1d) a8 = FALSE; } \
    res = a8; }
BOOL func_ov003_02225238(u16 *buf, s32 kind, s32 *px, s32 *py, Unk_ov003_02225238_Grid *grid, s32 mode)
{
    u16 *blk = buf + (*px + *py * 4) * 0x10;
    s32 cnt0 = 0;
    s32 cnt = 0;
    s32 found = 0;
    s32 f20 = 0;
    s32 z = 0;
    if (mode == 6) {
        u8 *cell = Unk_ov003_02225238_Cell(grid, *px + 1, *py + 1);
        if (cell == 0) {
            return FALSE;
        }
        if ((func_020374e8() & 0x100) != 0) f20 = 1;
    }
    s32 xo = (*px + 1) << 4;
    s32 yo = (*py + 1) << 4;
    s32 ty = 0;
    BOOL A9,A8,A7,A6,A5,A4,A3,A2,A1,B8,B7,B6,B5,B4,B3,B2,B1,C8,C7,C6,C5,C4,C3,C2,C1, ra, rb, rc;
    u8 k = (s8)(kind - 2);
    for (; ty < 16; ty++) {
        s32 tx = z;
        u16 *row = blk + ty;
        s32 wy = yo + ty;
        {
        loop0:
            if (((*row >> tx) & 1) == 0) {
                s32 wx = xo + tx;
                cnt0 = cnt;
                s32 hx = wx >> 4;
                s32 hy = wy >> 4;
                u16 *c = func_0204ebd8(grid, hx, hy, wx - (hx << 4), wy - (hy << 4), 0);
                if (c == 0) goto next0;
                switch (mode) {
                case 7:
                    if (kind == 0x33) {
                        BOOL fa = FALSE;
                        u32 v = *c;
                        if (v >= 0x154a && v <= 0x1553) fa = TRUE;
                        if (fa != 0 || (v >= 0x1320 && v <= 0x1322)) {
                            if (func_0204e88c(grid, wx, wy) == 0) {
                                found = 1;
                                cnt++;
                                break;
                            }
                        }
                        if (*c == 0xfff1) cnt++;
                    } else {
                        BOOL fb = FALSE;
                        u32 v = *c;
                        if (v >= 0x154a && v <= 0x1553) fb = TRUE;
                        if (fb != 0) {
                            if (func_0204e88c(grid, wx, wy) == 0) cnt++;
                        }
                    }
                    break;
                case 4:
                    if (func_020312d0(wx, wy) != 0) {
                        if (*c == 0xfff1) cnt++;
                    }
                    break;
                case 6:
                    if (func_020312ec(wx, wy) != 0) {
                        cnt++;
                    } else if (f20 != 0 && tx > 3 && ty > 3 && tx < 13 && ty < 13) {
                        if (func_020312a8(wx, wy) == 2) cnt++;
                    }
                    break;
                case 1:
                    CHK_A(c, A1,A2,A3,A4,A5,A6,A7,A8,A9, ra)
                    if (!ra) {
                        if (found == 0) {
                            CHK_B(c, B1,B2,B3,B4,B5,B6,B7,B8, rb)
                            if (rb) {
                                if (k <= 1) {
                                    if (func_ov003_0222dec8(kind, c) != 0) found = 1;
                                } else {
                                    found = 1;
                                }
                            }
                        }
                        cnt++;
                    }
                    break;
                case 2:
                    CHK_B(c, C1,C2,C3,C4,C5,C6,C7,C8, rc)
                    if (rc) {
                        if (kind == 0xf) {
                            if (func_ov003_0222dec8(kind, c) != 0) cnt++;
                        } else {
                            cnt++;
                        }
                    }
                    break;
                case 9:
                    if (func_02031218(wx, wy) == 0) {
                        if (*c == 0xfff1) cnt++;
                    }
                    break;
                case 8:
                    if (*c == 0x1b) {
                        found = 1;
                        cnt++;
                    } else if (*c == 0xfff1) {
                        cnt++;
                    }
                    break;
                case 0:
                    if (*c == 0xfff1) cnt++;
                    break;
                case 11:
                    if (((*row << tx) & 1) == 0) cnt++;
                    break;
                case 10: {
                    BOOL fc = FALSE;
                    u32 v = *c;
                    if (v >= 0xe3 && v <= 0xe7) fc = TRUE;
                    if (fc) cnt++;
                    break;
                }
                case 12:
                    if (func_ov003_022250cc(c)) cnt++;
                    break;
                case 14:
                    if (func_ov003_022250cc(c) || func_ov003_022250b4(c)) cnt++;
                    break;
                case 15:
                    if (func_ov003_022250cc(c) || func_ov003_022250b4(c) || func_ov003_022250a0(c)) cnt++;
                    break;
                case 13:
                    if (func_ov003_022250a0(c)) cnt++;
                    break;
                case 5:
                    if (func_020312a8(wx, wy) == 2) cnt++;
                    break;
                case 3:
                    break;
                }
            }
            if (cnt == cnt0) {
                *row |= 1 << tx;
            }
        next0:
            tx++;
            if (tx < 16) goto loop0;
        }
    }
    if (mode == 1 || mode == 8 || (mode == 7 && kind == 0x33)) {
        if (cnt > 0 && found != 0) {
            func_ov003_0222503c(cnt, blk, px, py);
            return TRUE;
        }
    } else {
        if (cnt > 0) {
            func_ov003_0222503c(cnt, blk, px, py);
            return TRUE;
        }
    }
    return FALSE;
}
