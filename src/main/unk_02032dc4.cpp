#include "types.h"

struct Unk_0202f2ac_V3 {
    s32 x, y, z;
    Unk_0202f2ac_V3() {}
    Unk_0202f2ac_V3(s32 c, s32 a) : x(a), y(0), z(c) {}
    Unk_0202f2ac_V3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
};

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
void func_020e93a0(Unk_0202f2ac_V3 *v, s32 ang);
s32 func_01ffcb2c(s32 x, s32 z);
s32 func_020314f4(Unk_0202f2ac_V3 *p);
s32 func_020313f4(s32 x, s32 z, s32 k);
s32 func_02031474(s32 x, s32 z, s32 k);
BOOL func_02031360(s32 id, s32 a);
extern u8 data_020c7c57[];
extern u8 data_020c7c60[];
extern u8 data_020c7c68[];
extern s32 data_021bf988[];
extern s32 data_021bfa4c[];
}

class Unk_0202f048 {
public:
    s32 x, y;
    void func_0202f048(s32 a, s32 b);
    Unk_0202f048 *func_0202f030(Unk_0202f048 *p);
    s64 func_0202ef84(Unk_0202f048 *p);
};

class Unk_020323f8 {
public:
    u8 unk_00[4];
    BOOL func_020323f8(s32 a, s32 b, u32 c);
};

struct Unk_02032dc4_Out {
    s32 unk_00, unk_04, unk_08;
    Unk_020323f8 unk_0c;
};

static inline void Unk_02032dc4_Set(Unk_0202f2ac_V3 *p, s32 y, s32 x, s32 z) {
    p->x = x;
    p->y = y;
    p->z = z;
}

struct Unk_02032dc4_V3 : Unk_0202f2ac_V3 {
    Unk_02032dc4_V3() {}
    Unk_02032dc4_V3(s32 b, s32 a, s32 c, s32 dummy) : Unk_0202f2ac_V3(a, b, c) {}
};

class Unk_020d8d50;
class Unk_02032dc4_Cb {
public:
    virtual void vfunc_00(Unk_020d8d50 *e, s32 arg, s32 r);
};

class Unk_020339d8 {
public:
    u8 unk_00;
    Unk_02032dc4_Cb *f_04;
    Unk_020339d8();
    ~Unk_020339d8();
    void func_020339d8(u32 a, u32 b);
    void func_020339cc(Unk_020339d8 &o);
};

class Unk_020d8ce4 {
public:
    virtual BOOL vfunc_00();
    Unk_020d8ce4() {
        unk_04.func_0202f048(0, 0);
        unk_0c.func_0202f048(0, 0);
        unk_14.func_0202f048(0, 0);
    }
    ~Unk_020d8ce4();
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    void func_0202edf8(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c);
    BOOL func_0202e9d4(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
    BOOL func_0202ea40(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
    BOOL func_0202eb30(Unk_0202f048 *a, Unk_0202f048 *b, s32 r);
};

class Unk_020d8d50 : public Unk_020d8ce4, public Unk_020339d8 {
public:
    Unk_020d8d50();
    Unk_020d8d50(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7);
    ~Unk_020d8d50();
    virtual BOOL vfunc_00();
    s32 unk_28, unk_2c;
    BOOL func_02033010(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7);
    BOOL func_02033044(Unk_020d8d50 *o);
};

BOOL Unk_020d8d50::func_02033010(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7) {
    func_020339d8(p6, p7);
    func_0202edf8(a, b, c);
    unk_28 = p5;
    unk_2c = p4;
    return TRUE;
}

BOOL Unk_020d8d50::func_02033044(Unk_020d8d50 *o) {
    func_020339cc(*o);
    func_0202edf8(&o->unk_04, &o->unk_0c, &o->unk_14);
    unk_28 = o->unk_28;
    unk_2c = o->unk_2c;
    return TRUE;
}

extern "C" void func_02033078(Unk_0202f048 *out, Unk_020d8d50 *e) {
    out->func_0202f048((e->unk_04.x + e->unk_0c.x) >> 1, (e->unk_04.y + e->unk_0c.y) >> 1);
}

Unk_020d8d50::Unk_020d8d50(Unk_0202f048 *a, Unk_0202f048 *b, Unk_0202f048 *c, s32 p4, s32 p5, u32 p6, u32 p7) {
    func_02033010(a, b, c, p4, p5, p6, p7);
}

Unk_020d8d50::~Unk_020d8d50() {}

Unk_020d8d50::Unk_020d8d50() {}

class Unk_020d8ccc {
public:
    Unk_020d8ccc();
    Unk_020d8ccc(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
    ~Unk_020d8ccc();
    virtual BOOL vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    Unk_0202f2ac_V3 unk_04, unk_10, unk_1c, unk_28;
    s32 unk_34;
    BOOL func_0202f2d8(Unk_0202f2ac_V3 *p);
    BOOL func_0202f364(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
};

class Unk_020d8d5c : public Unk_020d8ccc, public Unk_020339d8 {
public:
    Unk_020d8d5c();
    ~Unk_020d8d5c();
    BOOL func_020333c4(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f);
};

BOOL Unk_020d8d5c::func_020333c4(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f) {
    func_020339d8(e, f);
    func_0202f364(a, b, c, d);
    return TRUE;
}

Unk_020d8d5c::Unk_020d8d5c() {}
Unk_020d8d5c::~Unk_020d8d5c() {}

class Unk_02032dc4 {
public:
    Unk_020d8d50 unk_00[24];
    u32 unk_480;
    Unk_02032dc4();
    ~Unk_02032dc4();
    BOOL func_02032dc4(Unk_0202f2ac_V3 *pos, Unk_0202f2ac_V3 *q, s32 r, Unk_02032dc4_Out *out, s32 arg);
};

Unk_02032dc4::Unk_02032dc4() : unk_480(0) {}
Unk_02032dc4::~Unk_02032dc4() {}

class Unk_02033170 {
public:
    Unk_020d8d5c unk_00[40];
    volatile u32 unk_a00;
    Unk_02033170();
    ~Unk_02033170();
    void func_020331a8(class Unk_02033a0c *grid, s32 x0, s32 x1, s32 y0, s32 y1);
    BOOL func_02033170(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f);
};

Unk_02033170::Unk_02033170() : unk_a00(0) {}
Unk_02033170::~Unk_02033170() {}

BOOL Unk_02033170::func_02033170(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d, u32 e, u32 f) {
    if (unk_a00 < 40) {
        u32 i = unk_a00;
        unk_a00 = i + 1;
        return unk_00[i].func_020333c4(a, b, c, d, e, f);
    }
    return FALSE;
}

struct Unk_020331a8_Ent {
    u8 pad_00[0x15];
    u8 unk_15;
    u8 pad_16[8];
};
extern Unk_020331a8_Ent data_020c7c4c[];

struct Unk_020331a8_Cell {
    s32 unk_00, unk_04, unk_08, unk_0c;
    u8 unk_10, unk_11, unk_12, unk_13, unk_14;
};

class Unk_02033a0c {
public:
    Unk_020331a8_Cell *func_02033a0c(s32 x, s32 y);
};

static inline void Unk_020331a8_SetU(u32 *v, s32 a, s32 b, s32 c) { v[0] = a; v[1] = b; v[2] = c; }
void Unk_02033170::func_020331a8(Unk_02033a0c *grid, s32 x0, s32 x1, s32 y0, s32 y1) {
    s32 y, x;
    for (y = y0; y <= y1; y++) {
        for (x = x0; x <= x1; x++) {
            Unk_020331a8_Cell *cell = grid->func_02033a0c(x, y);
            if (cell == NULL) {
                continue;
            }
            s32 xc = (x << 13) + 0x1000;
            s32 yc = (y << 13) + 0x1000;
            Unk_0202f2ac_V3 ctr;
            Unk_020331a8_SetU((u32 *)&ctr, xc, 0, yc);
            s32 xr = xc + 0x1000;
            s32 xl = xc - 0x1000;
            s32 zr = yc + 0x1000;
            s32 zl = yc - 0x1000;
            u32 t = (s32)cell->unk_14 < 0x7c ? data_020c7c4c[cell->unk_14].unk_15 : 0;
            if (t != 0) {
                Unk_0202f2ac_V3 a(xl, cell->unk_00, zl);
                Unk_0202f2ac_V3 b(xl, cell->unk_00, zr);
                Unk_0202f2ac_V3 c(xr, cell->unk_00, zr);
                Unk_0202f2ac_V3 d(xr, cell->unk_00, zl);
                func_02033170(&a, &b, &c, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_10, 0);
                func_02033170(&a, &c, &d, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_10, 0);
            } else {
                Unk_0202f2ac_V3 a0(xc, cell->unk_00, yc);
                Unk_0202f2ac_V3 a1(xr, cell->unk_00, zl);
                Unk_0202f2ac_V3 a2(xl, cell->unk_00, zl);
                func_02033170(&a0, &a1, &a2, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_10, 0);
                Unk_0202f2ac_V3 b0(ctr.x, cell->unk_04, ctr.z);
                Unk_0202f2ac_V3 b1(xl, cell->unk_04, zl);
                Unk_0202f2ac_V3 b2(xl, cell->unk_04, zr);
                func_02033170(&b0, &b1, &b2, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_11, 0);
                Unk_0202f2ac_V3 c0(ctr.x, cell->unk_08, ctr.z);
                Unk_0202f2ac_V3 c1(xl, cell->unk_08, zr);
                Unk_0202f2ac_V3 c2(xr, cell->unk_08, zr);
                func_02033170(&c0, &c1, &c2, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_12, 0);
                Unk_0202f2ac_V3 d0(ctr.x, cell->unk_0c, ctr.z);
                Unk_0202f2ac_V3 d1(xr, cell->unk_0c, zr);
                Unk_0202f2ac_V3 d2(xr, cell->unk_0c, zl);
                func_02033170(&d0, &d1, &d2, (Unk_0202f2ac_V3 *)data_021bfa4c, cell->unk_13, 0);
            }
        }
    }
}

BOOL Unk_02032dc4::func_02032dc4(Unk_0202f2ac_V3 *pos, Unk_0202f2ac_V3 *q, s32 r, Unk_02032dc4_Out *out, s32 arg) {
    Unk_020d8d50 *e;
    s32 py;
    BOOL result = FALSE;
    Unk_0202f048 a, b, d;
    a.func_0202f048(pos->x, pos->z);
    b.func_0202f048(q->x, q->z);
    d.func_0202f048(pos->x - q->x, pos->z - q->z);
    s64 dist = d.func_0202ef84((Unk_0202f048 *)data_021bf988);
    if (dist >= (s64)func_01ffcb0c(r, r)) {
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t1a;
        t1a.x = pos->x;
        t1a.y = pos->y;
        t1a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202e9d4(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t1b;
                py = *(volatile s32 *)&pos->y;
                t1b.x = a.x;
                t1b.y = py;
                t1b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    }
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t2a;
        t2a.x = pos->x;
        t2a.y = pos->y;
        t2a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202eb30(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t2b;
                py = *(volatile s32 *)&pos->y;
                t2b.x = a.x;
                t2b.y = py;
                t2b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    for (e = unk_00; e < unk_00 + unk_480; e++) {
        volatile Unk_0202f2ac_V3 t3a;
        t3a.x = pos->x;
        t3a.y = pos->y;
        t3a.z = pos->z;
        if (e->unk_2c - 0x700 > pos->y) {
            if (e->func_0202ea40(&a, &b, r)) {
                volatile Unk_0202f2ac_V3 t3b;
                py = *(volatile s32 *)&pos->y;
                t3b.x = a.x;
                t3b.y = py;
                t3b.z = a.y;
                s32 k = e->unk_28;
                if (k != 3) {
                    out->unk_0c.func_020323f8(func_020e7b98(e->unk_14.x, e->unk_14.y), k, e->unk_00);
                    if (e->f_04) {
                        e->f_04->vfunc_00(e, arg, r);
                    }
                }
                result = TRUE;
            }
        }
    }
    pos->x = a.x;
    pos->z = a.y;
    return result;
}

struct Unk_02033438_G {
    u8 pad_00[0x132];
    s16 unk_132;
    s16 unk_134;
};
extern "C" Unk_02033438_G *data_020d8ce8;

static inline void Unk_02033438_Set(Unk_0202f2ac_V3 *p, s32 x, s32 y, s32 z) {
    p->x = x;
    p->y = y;
    p->z = z;
}

class Unk_02033438 {
public:
    u8 unk_00;
    Unk_0202f2ac_V3 unk_04;
    Unk_0202f2ac_V3 unk_10;
    s32 unk_1c, unk_20;
    Unk_0202f2ac_V3 unk_24;
    s32 unk_30, unk_34, unk_38, unk_3c;
    void func_02033438(Unk_0202f2ac_V3 *pos, s32 flag, s32 arg);
    void func_0203389c(s32 a, s32 b, s32 c);
};

void Unk_02033438::func_02033438(Unk_0202f2ac_V3 *pos, s32 flag, s32 arg) {
    Unk_02033438_G *g = data_020d8ce8;
    s32 gc = g->unk_132;
    s32 sl = g->unk_134;
    volatile Unk_0202f2ac_V3 ctr;
    s32 cx, cz;
    s32 r;
    unk_00 = 0;
    unk_10.x = pos->x;
    unk_10.y = pos->y;
    unk_10.z = pos->z;
    unk_1c = pos->x >> 13;
    unk_20 = pos->z >> 13;
    r = func_01ffcb2c(unk_1c, unk_20);
    s32 k = func_020314f4(pos);
    if (flag != 0) {
        unk_34 = func_020313f4(unk_1c, unk_20, k);
    } else {
        unk_34 = func_02031474(unk_1c, unk_20, k);
    }
    unk_38 = unk_34 < 0x7c ? (*(s16 *)(data_020c7c68 + unk_34 * 0x1e) << 8) : 0;
    unk_3c = 0xfffee000;
    unk_30 = unk_34 < 0x7c ? data_020c7c60[unk_34 * 0x1e] : 0;
    unk_24.x = 0;
    unk_24.y = 0;
    unk_24.z = 0x1000;
    if (func_02031360(unk_34, arg)) {
        if (r == 0x52) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx - 0x1000, 0, cz + 0x1000);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z - func_01ffcb0c(sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x + func_01ffcb0c(sl, 0x1666), a.y, a.z);
            Unk_020d8ccc tri(&b, &a, &c, (Unk_0202f2ac_V3 *)data_021bfa4c);
            if (tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                func_0203389c(gc, sl, 0x6000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x55) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx + 0xb33, 0, cz - 0xb33);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z + func_01ffcb0c(0x1000 - sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x - func_01ffcb0c(0x1000 - sl, 0x1666), a.y, a.z);
            Unk_020d8ccc tri(&a, &c, &b, (Unk_0202f2ac_V3 *)data_021bfa4c);
            if (!tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                func_0203389c(gc, sl, 0x6000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x51) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx + 0x1000, 0, cz + 0x1000);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z - func_01ffcb0c(sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x - func_01ffcb0c(sl, 0x1666), a.y, a.z);
            Unk_020d8ccc tri(&b, &c, &a, (Unk_0202f2ac_V3 *)data_021bfa4c);
            if (tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                func_0203389c(gc, sl, 0xffffa000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x54) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            Unk_0202f2ac_V3 a(cx - 0xb33, 0, cz - 0xb33);
            Unk_0202f2ac_V3 b(a.x, a.y, a.z + func_01ffcb0c(0x1000 - sl, 0x1666));
            Unk_0202f2ac_V3 c(a.x + func_01ffcb0c(0x1000 - sl, 0x1666), a.y, a.z);
            Unk_020d8ccc tri(&a, &b, &c, (Unk_0202f2ac_V3 *)data_021bfa4c);
            if (!tri.func_0202f2d8(pos)) {
                unk_34 = 0x16;
                func_0203389c(gc, sl, 0xffffa000);
            } else {
                unk_30 = 0;
                unk_34 = 0x13;
            }
            unk_00 = 1;
            Unk_02033438_Set(&unk_04, (b.x + c.x) >> 1, (b.y + c.y) >> 1, (b.z + c.z) >> 1);
        } else if (r == 0x53) {
            cx = (pos->x & 0xffffe000) + 0x1000;
            ctr.x = cx;
            ctr.y = 0;
            cz = (pos->z & 0xffffe000) + 0x1000;
            ctr.z = cz;
            s32 e = cz + 0x1000;
            e = e - func_01ffcb0c(sl, 0x1666);
            if (e > pos->z) {
                unk_30 = 0;
                unk_34 = 0x13;
            } else {
                unk_34 = 0x16;
                func_0203389c(gc, sl, 0xffff8000);
            }
            unk_00 = 1;
            unk_04.x = ctr.x;
            unk_04.y = 0;
            unk_04.z = e;
        } else {
            u32 t = unk_34 < 0x7c ? data_020c7c57[unk_34 * 0x1e] : 0;
            if (t != 0) {
                s32 ang = 0;
                s32 i;
                for (i = 0; i < 8; i++) {
                    if (t & (1 << i)) {
                        ang = (i << 29) >> 16;
                        break;
                    }
                }
                func_020e93a0(&unk_24, ang);
            }
        }
        if (unk_30 != 0) {
            unk_3c = 0xfffff000;
        }
    } else {
        unk_30 = 0;
    }
}
