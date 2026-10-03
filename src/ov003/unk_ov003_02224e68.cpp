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
class Unk_ov003_02224bc4_Actor : public GameProc {
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
s32 Item_IsBuildingOrOccupied();
s32 func_020312a8(s32 x, s32 y);
void *MI_CpuFill8(void *p, s32 v, u32 n);
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

BOOL func_ov003_022250cc(u16 *p)
{
    u32 v = *p;
    if (v == 0x2a || v == 0x61 || (v >= 0x33 && v <= 0x36) || (v >= 0x3b && v <= 0x3e) || (v >= 0x43 && v <= 0x46) ||
        (v >= 0x4b && v <= 0x4e) || (v >= 0x53 && v <= 0x56)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022250b4(u16 *p)
{
    u32 v = *p;
    if (v == 0x5b || (v >= 0x66 && v <= 0x6d)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022250a0(u16 *p)
{
    BOOL r = FALSE;
    if (*p >= 0xcc && *p <= 0xcf) {
        r = TRUE;
    }
    return r;
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
