// mwcc-version: 1.2/base
#include "types.h"

// TU17 of ov003: ground helper free functions 0x02217908..0x02217b10 and the six colour constants of its header

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

class Unk_020dbe34 {
public:
    Unk_020dbe34();
    virtual ~Unk_020dbe34();
    void func_0205553c(s32 *p);
    void func_020555dc();

    u8 pad_04[0x64 - 4];
    Unk_ov003_02215c7c_Blk unk_64;
    u8 pad_94[4];
    u32 unk_98;
};

struct Unk_02003a6c_Vec {
    s32 x, y, z;
};

typedef Unk_02003a6c_Vec Unk_ov003_02217910_V3;

struct Unk_ov003_02217910_V3D {
    s32 x, y, z;
    Unk_ov003_02217910_V3D() {}
    ~Unk_ov003_02217910_V3D() {}
};

struct Unk_02003c30 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    void func_02003c30();
    void func_02003cbc();
};

struct Unk_02003c40 {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08(void *a);
    virtual void vfunc_0c(void *a);
    virtual void vfunc_10(void *a);
    void func_02003c40(void *a);
    void func_02003c70(Unk_ov003_02217910_V3 *v);
};

struct Unk_ov003_02217970_Rec {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov003_022179b8_Ent {
    s32 kind;
    s32 x;
    s32 z;
};

struct Unk_ov003_02217a9c_Cell {
    u8 pad_00[0x20];
    void *unk_20;
    u8 pad_24[4];
};

struct Unk_ov003_02217a9c_Grid {
    Unk_ov003_02217a9c_Cell *cells;
    u32 w;
    u32 h;
};

struct Unk_ov003_02217a84_Sub {
    u8 pad_00[0x10];
    void *unk_10;
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_02235460_Col {
    u8 r, g, b, a;
    Unk_ov003_02235460_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

extern "C" {
extern void *data_021c47c4;
extern void *data_021c3070;
extern s32 data_020c8cbc;
extern u8 data_0213b91c[];
extern u8 data_0213b938[];

s32 func_020e9650(Unk_ov003_02217910_V3 *a, Unk_ov003_02217910_V3 *b);
s32 func_02036c90();
}
Unk_ov003_022179b8_Ent func_02036c60(u8 *obj, s32 i);
extern "C" {
}

extern "C" {
Unk_ov003_02235460_Col data_ov003_02235460(31, 20, 20, 31);
Unk_ov003_02235460_Col data_ov003_02235474(20, 20, 31, 31);
Unk_ov003_02235460_Col data_ov003_02235470(31, 31, 20, 31);
Unk_ov003_02235460_Col data_ov003_0223546c(20, 31, 20, 31);
Unk_ov003_02235460_Col data_ov003_02235468(20, 31, 31, 31);
Unk_ov003_02235460_Col data_ov003_02235464(20, 24, 24, 31);
// Data order: this unit is placed object by object (see object_order.txt).
}

// ---- functions ----
extern "C" {
void func_ov003_02217970(Unk_ov003_02217970_Rec *r);
s32 func_ov003_02217990(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k);
void *func_ov003_02217a84(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
void *func_ov003_02217a9c(Unk_ov003_02217970_Rec *r, u32 x, u32 y);
}

extern "C" BOOL func_ov003_02217aec(Unk_020dbe34 *p) {
    if (data_021c3070 != 0) {
        p->func_0205553c(0);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02217adc(Unk_020dbe34 *p) {
    p->func_020555dc();
    return TRUE;
}

extern "C" void *func_ov003_02217a9c(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a9c_Grid *g = (Unk_ov003_02217a9c_Grid *)data_021c47c4;
    if (g != 0) {
        Unk_ov003_02217a9c_Cell *c;
        if (x < g->w && y < g->h && g->cells != 0) {
            c = &g->cells[y * g->w + x];
        } else {
            c = 0;
        }
        if (c != 0) {
            return c->unk_20;
        }
    }
    return 0;
}

extern "C" void *func_ov003_02217a84(Unk_ov003_02217970_Rec *r, u32 x, u32 y) {
    Unk_ov003_02217a84_Sub *s = (Unk_ov003_02217a84_Sub *)func_ov003_02217a9c(r, x, y);
    if (s != 0) {
        return s->unk_10;
    }
    return 0;
}

extern "C" Unk_ov003_02217970_Rec *func_ov003_022179b8(Unk_ov003_02217970_Rec *out, Unk_ov003_02217910_V3 *pos) {
    u8 *obj;
    u32 n;
    func_ov003_02217970(out);
    s32 cx = pos->x >> 17;
    s32 cz = pos->z >> 17;
    s32 dy, dx;
    for (dy = -1; dy <= 1; dy++) {
        for (dx = -1; dx <= 1; dx++) {
            Unk_ov003_02217910_V3D base;
            s32 xx = cx + dx;
            base.x = xx << 17;
            base.z = (cz + dy) << 17;
            obj = (u8 *)func_ov003_02217a84(out, xx, cz + dy);
            if (obj != 0) {
                u32 i;
                n = func_02036c90();
                for (i = 0; i < n; i++) {
                    Unk_ov003_022179b8_Ent e = func_02036c60(obj, i);
                    switch (e.kind) {
                    case 5:
                    case 15:
                    case 17:
                    case 18: {
                        Unk_ov003_02217910_V3 p;
                        p.x = base.x + e.x;
                        p.y = 0;
                        p.z = base.z + e.z;
                        func_ov003_02217990(out, func_020e9650(&p, pos), &p, e.kind);
                    }
                    }
                }
            }
        }
    }
    return out;
}

extern "C" BOOL func_ov003_02217990(Unk_ov003_02217970_Rec *r, s32 d, Unk_ov003_02217910_V3 *p, s32 k) {
    if (d < r->unk_10) {
        r->unk_04 = p->x;
        r->unk_08 = p->y;
        r->unk_0c = p->z;
        r->unk_10 = d;
        r->unk_14 = k;
        r->unk_00 = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_0221798c() {
}

extern "C" void func_ov003_02217970(Unk_ov003_02217970_Rec *r) {
    r->unk_00 = 0;
    r->unk_04 = 0;
    r->unk_08 = 0;
    r->unk_0c = 0;
    r->unk_14 = 0x11;
    r->unk_10 = data_020c8cbc << 3;
}

extern "C" s32 *func_ov003_02217960(Unk_ov003_02217970_Rec *r) {
    if (r->unk_00 != 0) {
        return &r->unk_04;
    }
    return 0;
}

extern "C" s32 func_ov003_0221795c(Unk_ov003_02217970_Rec *r) {
    return r->unk_14;
}

extern "C" void func_ov003_02217948(void *volatile *p) {
    *p = data_0213b91c;
    *p = data_0213b938;
}

extern "C" void func_ov003_02217944() {
}

extern "C" void func_ov003_0221793c(Unk_02003c30 *p) {
    p->func_02003cbc();
}

extern "C" void func_ov003_02217910(Unk_02003c40 *p, Unk_ov003_02217910_V3 *v, void *a) {
    Unk_ov003_02217910_V3 t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    p->func_02003c70(&t);
    p->func_02003c40(a);
}

extern "C" void func_ov003_02217908(Unk_02003c30 *p) {
    p->func_02003c30();
}
