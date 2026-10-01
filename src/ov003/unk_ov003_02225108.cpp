#pragma opt_common_subs off
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

Unk_ov003_02224bc4_Actor *func_020951ec();
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
    s32 xs;
    s32 m;
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
            if (func_0204b1e4() != 0 || (xs = xo + tx, func_020312a8(xs, wy) == 1)) {
                m = 1 << tx;
                *rowa |= m;
                *rowb |= m;
            } else if (func_020312a8(xs, wy) == 2) {
                m = 1 << tx;
                *rowb |= m;
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
