#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_0222c570_Vec {
    s32 x, y, z;
    Unk_ov004_0222c570_Vec() {}
    Unk_ov004_0222c570_Vec(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov004_0222c570_Vec(const Unk_ov004_0222c570_Vec &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

struct Unk_ov004_0222c570_Mtx {
    s64 v[6];
};

struct Unk_ov004_0222c570_Global {
    u8 pad_00[0x5c];
    Unk_ov004_0222c570_Vec unk_5c;
};

struct Unk_ov004_0222c570_Comm {
    u8 pad_00[0x64];
    s32 unk_64;
};

class Unk_02054b04 {
public:
    Unk_02054b04();
    u32 pad[4];
};

extern "C" {
extern void *data_021c47c4;
extern void *data_021c3070;
extern Unk_ov004_0222c570_Comm *data_020cbb18;
extern u8 data_ov004_022514b4[];
extern u8 data_ov004_022514a4[];
extern u8 data_ov004_0224e5dc[];
extern u8 data_021f47e0[];

void *func_02095204(u32 a);
s32 func_02072e44(void *g);
void func_02054970(void *p);
s32 func_020549e4(void *p, void *a, s32 b);
void *func_020549ac(void *p, u32 a);
u32 func_02061888(s32 a, s32 b);
void func_02045df4();
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_021355f0(void *a, u32 n, u32 sz, void *d);
void func_ov004_0222c08c(void *p);
void func_ov004_0222c0b8(void *p);
void func_ov004_0222c174(void *p);
void func_ov004_0222c1d4(void *p);
void func_ov004_0222c9ec(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_02088c64(void *self, void *pos, s32 w, s32 h, u32 a, u32 b, u32 c, u8 t, s32 d);
void func_02089040(void *p);
BOOL func_020308b4(void *p, s32 a, void *c, s32 w, s32 h);
s32 func_01ffcb0c(s32 a, s32 b);
BOOL func_02070358(void *self, u16 *p);
s32 func_ov004_02231e74(s32 a, s32 b);
void func_ov004_0222de34(void *self, s32 idx);
extern u8 data_ov004_02251d60;
extern u8 data_ov004_02251d64;
extern u8 data_ov004_0224e5f0;
extern void *data_ov004_02251d74;
extern void *data_ov004_02251d78;
extern u8 data_ov004_02251d9c[];
extern u8 data_ov004_02251d84[];
extern u8 data_ov004_022402ec[];
extern u8 data_ov004_022402ee[];
extern u8 data_ov004_022402ef[];
extern u8 data_ov004_022402fc[];
extern s16 data_02135f44[];
extern u8 data_021ed0a0[];
extern void *data_ov004_02251e94[];
void func_0204edd8(void *a, void *b);
u16 *func_0204eba0(void *g, void *v, s32 z);
s32 func_ov004_02234f6c(void *p);
extern u8 data_021c309c[];
BOOL func_ov004_0222bf34(s32 a, u32 id, const Unk_ov004_0222c570_Vec &p, const Unk_ov004_0222c570_Vec &q, u8 f);
s32 func_0204bc34(u16 *p);
u32 func_0203ef38(void *a, void *b);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
void func_020e8464(void *m, s32 x, s32 y, s32 z);
void func_020e84f8(void *m, s32 x, s32 y, s32 z);
void func_02055550(void *p, s32 a);
u16 func_02064cc4();
void func_0210612c(void *p, s32 a, u32 b);
void *func_ov004_0222c9bc(void *p);
void __cxa_vec_cleanup(void *a, u32 n, u32 sz, void *d);
}

struct Unk_020f440c {
    Unk_020f440c();
    ~Unk_020f440c();
    u32 pad[0x48 / 4];
};

class Unk_ov004_0222c9d0 {
public:
    Unk_ov004_0222c9d0();
    ~Unk_ov004_0222c9d0();

    /* 0x00 */ u32 pad_00[4];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 pad_18[(0x4c - 0x18) / 4];
    /* 0x4c */ Unk_020f440c unk_4c;
};

struct Unk_ov004_0222ca24_Obj {
    /* 0x000 */ u8 pad_000[4];
    /* 0x004 */ u8 unk_04[0x160];
    /* 0x164 */ u8 unk_164;
    /* 0x165 */ u8 pad_165[0x1a8 - 0x165];
    /* 0x1a8 */ Unk_ov004_0222c570_Vec unk_1a8;
    /* 0x1b4 */ Unk_ov004_0222c570_Vec unk_1b4;
    /* 0x1c0 */ u16 unk_1c0;
    /* 0x1c2 */ u8 pad_1c2[5];
    /* 0x1c7 */ u8 unk_1c7;
    /* 0x1c8 */ u8 unk_1c8;
    /* 0x1c9 */ u8 pad_1c9[7];
    /* 0x1d0 */ Unk_ov004_0222c570_Vec unk_1d0[2];
    /* 0x1e8 */ u8 pad_1e8[8];
    /* 0x1f0 */ u8 unk_1f0;
};

struct Unk_ov004_0222ca24_Ctx {
    Unk_ov004_0222ca24_Obj *unk_00;
};

struct Unk_ov004_0222c880_Model {
    u8 pad_00[0x5c];
    void *unk_5c;
    u8 pad_60[4];
    Unk_ov004_0222c570_Mtx unk_64;
};

class Unk_ov004_0224e594 : public Unk_020d8c7c {
public:
    Unk_ov004_0224e594() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    BOOL func_ov004_0222c914();
    void func_ov004_0222c640(void *grid);
    Unk_ov004_0222c880_Model *func_ov004_0222c7e0(u32 idx, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz);
    void func_ov004_0222c880(Unk_ov004_0222c880_Model *model, Unk_ov004_0222c570_Mtx m);
    void func_ov004_0222c788(u16 id, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz);

    /* 0x50 */ void *unk_50[0x49];
    /* 0x174 */ Unk_02054b04 unk_174;
};

BOOL Unk_ov004_0224e594::vfunc_0c() {
    func_02054970(&unk_174);
    func_ov004_0222c08c(data_ov004_022514b4);
    return TRUE;
}

BOOL Unk_ov004_0224e594::vfunc_18() {
    func_ov004_0222c174(data_ov004_022514b4);
    return TRUE;
}

BOOL Unk_ov004_0224e594::vfunc_00() {
    BOOL r = FALSE;
    if (func_ov004_0222c914()) {
        func_02045df4();
        *(Unk_ov004_0224e594 **)data_ov004_022514a4 = this;
        func_ov004_0222c1d4(data_ov004_022514b4);
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_0224e594::func_ov004_0222c914() {
    BOOL r = FALSE;
    void *d = data_ov004_0224e5dc;
    if (func_020549e4(&unk_174, d ? d : d, r)) {
        s32 i;
        for (i = 0; i < 0x49; i++) {
            unk_50[i] = func_020549ac(&unk_174, func_02061888(i, r));
        }
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov004_0224e594::vfunc_24() {
    void *a = data_021c47c4;
    void *b = data_021c3070;
    if (a != NULL && b != NULL) {
        func_ov004_0222c640(a);
        func_ov004_0222c0b8(data_ov004_022514b4);
    }
    return TRUE;
}

extern "C" Unk_ov004_0224e594 *func_ov004_0222c964() {
    return new Unk_ov004_0224e594;
}

Unk_ov004_0222c9d0::Unk_ov004_0222c9d0() : unk_10(0), unk_14(0) {
}

Unk_ov004_0222c9d0::~Unk_ov004_0222c9d0() {
}

extern "C" void *func_ov004_0222c9a0(void *arr) {
    __cxa_vec_cleanup(arr, 15, 0x94, (void *)func_ov004_0222c9bc);
    return arr;
}


void Unk_ov004_0224e594::func_ov004_0222c880(Unk_ov004_0222c880_Model *model, Unk_ov004_0222c570_Mtx m) {
    if (model != NULL) {
        volatile u16 tmp[2];
        model->unk_64 = m;
        func_02055550(model, 0);
        tmp[0] = func_02064cc4();
        tmp[1] = tmp[0];
        func_0210612c(model->unk_5c, 0, tmp[1]);
    }
}

Unk_ov004_0222c880_Model *Unk_ov004_0224e594::func_ov004_0222c7e0(u32 idx, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz) {
    Unk_ov004_0222c880_Model *model = (Unk_ov004_0222c880_Model *)unk_50[idx];
    Unk_ov004_0222c570_Mtx m;
    s32 t[3];
    u32 r = func_0203ef38(t, (void *)&pos);
    func_020e8388(data_021f47e0, t[0], t[1], t[2]);
    func_020e8434(data_021f47e0, r);
    func_020e8464(data_021f47e0, rx, ry, rz);
    func_020e84f8(data_021f47e0, scale.x, scale.y, scale.z);
    m = *(Unk_ov004_0222c570_Mtx *)data_021f47e0;
    func_ov004_0222c880(model, m);
    return model;
}

void Unk_ov004_0224e594::func_ov004_0222c788(u16 id, const Unk_ov004_0222c570_Vec &pos, const Unk_ov004_0222c570_Vec &scale, s16 rx, s16 ry, s16 rz) {
    volatile u16 v = 0xfff1;
    v = id;
    Unk_ov004_0222c570_Vec p = pos;
    Unk_ov004_0222c570_Vec q = scale;
    func_ov004_0222c7e0(func_0204bc34((u16 *)&v), p, q, rx, ry, rz);
}

extern "C" BOOL func_ov004_0222c570(u16 *p, Unk_ov004_0222c570_Vec *v) {
    void *g = data_021c47c4;
    Unk_ov004_0222c570_Global *o = (Unk_ov004_0222c570_Global *)func_02095204(4);
    BOOL r = FALSE;
    if (g != NULL && o != NULL) {
        Unk_ov004_0222c570_Comm *c = data_020cbb18;
        s32 a;
        if (func_02072e44(c)) {
            a = c->unk_64;
        } else {
            a = 0;
        }
        Unk_ov004_0222c570_Vec *pv = &o->unk_5c;
        Unk_ov004_0222c570_Vec pos;
        pos.x = o->unk_5c.x;
        pos.y = pv->y;
        pos.z = pv->z;
        Unk_ov004_0222c570_Vec q;
        q.x = v->x;
        q.y = v->y;
        q.z = v->z;
        if (func_ov004_0222bf34(a, *p, pos, q, 0)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_ov004_0224e594::func_ov004_0222c640(void *grid) {
    if (data_021c3070 == NULL) {
        return;
    }
    Unk_ov004_0222c570_Vec c;
    Unk_ov004_0222c570_Vec d;
    Unk_ov004_0222c570_Vec a;
    Unk_ov004_0222c570_Vec b;
    Unk_ov004_0222c570_Vec out;
    Unk_ov004_0222c570_Vec e1;
    Unk_ov004_0222c570_Vec sc;
    Unk_ov004_0222c570_Vec e2;
    s32 hi = 8;
    s32 j, i;
    a.x = ((Unk_ov004_0222c570_Vec *)data_021c309c)->x;
    a.y = ((Unk_ov004_0222c570_Vec *)data_021c309c)->y;
    a.z = ((Unk_ov004_0222c570_Vec *)data_021c309c)->z;
    func_0204edd8(&out, &a);
    b.x = out.x + 0x10000;
    b.y = 0;
    b.z = out.z + 0x10000;
    for (i = hi; i >= -8; i--) {
        func_0204edd8(&c, &b);
        u32 r = func_0203ef38(&d, &c);
        func_020e8388(data_021f47e0, d.x, d.y, d.z);
        func_020e8434(data_021f47e0, r);
        for (j = hi; j >= -8; j--) {
            u16 *p = func_0204eba0(grid, &c, 0);
            if (p != NULL && (s32)(*p & 0xf000) >> 12 == 1) {
                s32 z = c.z;
                s32 y = c.y + func_ov004_02234f6c(&c);
                e1.x = c.x;
                e1.y = y;
                e1.z = z;
                sc.z = sc.y = sc.x = 0x1000;
                func_ov004_0222c788(*p, e1, sc, 0, 0, 0);
            }
            p = func_0204eba0(grid, &c, 1);
            if (p != NULL && (s32)(*p & 0xf000) >> 12 == 1) {
                s32 z = c.z;
                s32 y = c.y + func_ov004_02234f6c(&c);
                e2.x = c.x;
                e2.y = y;
                e2.z = z;
                sc.z = sc.y = sc.x = 0x1000;
                func_ov004_0222c788(*p, e2, sc, 0, 0, 0);
            }
            c.x -= 0x2000;
        }
        b.z -= 0x2000;
    }
}

extern "C" void func_ov004_0222ca24(void *self, Unk_ov004_0222ca24_Ctx *ctx, s32 type) {
    Unk_ov004_0222ca24_Obj *o;
    Unk_ov004_0222ca24_Obj *o1;
    Unk_ov004_0222ca24_Obj *o2;
    Unk_ov004_0222ca24_Obj *o3;
    s32 w, len, base;
    Unk_ov004_0222c570_Vec *v;
    Unk_ov004_0222c570_Vec *e;
    s32 bx0, bz0, bx1, bz1, ax0, az0, ax1, az1;
    o1 = ctx->unk_00;
    v = &o1->unk_1a8;
    Unk_ov004_0222c570_Vec *q;
    Unk_ov004_0222c570_Vec *ep;
    s32 off;
    s32 c164 = o1->unk_164;
    s32 idx = type;
    idx = idx * 17;
    w = (data_ov004_022402ef[idx] << 12) >> 7;
    if (o1->unk_1c7 == 0) {
        return;
    }
    s32 h = (data_ov004_022402ee[idx] << 12) >> 7;
    if (data_ov004_02251d60 == 0) {
        func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
    } else if (data_ov004_02251d60 == 1) {
        if (type == 0x24) {
            u8 *g = (u8 *)data_ov004_02251d74;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x26c, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x23) {
            u8 *g = (u8 *)data_ov004_02251d78;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x264, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x26) {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
        } else {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
        }
    }
    func_02089040(&ctx->unk_00->unk_04);
    len = (data_ov004_022402fc[idx] << 12) >> 7;
    base = w - (len >> 1);
    s32 k;
    k = 0;
loop0:
    {
        o2 = ctx->unk_00;
        q = &o2->unk_1a8;
        off = k * 12;
        Unk_ov004_0222c570_Vec *arr = o2->unk_1d0;
        ep = (Unk_ov004_0222c570_Vec *)((u8 *)arr + off);
        *(s32 *)((u8 *)arr + off) = o2->unk_1a8.x;
        ep->y = q->y;
        ep->z = q->z;
        if (k == 0) {
            o1 = ctx->unk_00;
            *(s32 *)((u8 *)o1->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[(o1->unk_1c0 >> 4) * 2]);
            o2 = ctx->unk_00;
            ((Unk_ov004_0222c570_Vec *)((u8 *)o2->unk_1d0 + off))->z += func_01ffcb0c(base, data_02135f44[(o2->unk_1c0 >> 4) * 2 + 1]);
            o3 = ctx->unk_00;
            ep = (Unk_ov004_0222c570_Vec *)((u8 *)o3->unk_1d0 + off);
            bx0 = *(s32 *)((u8 *)o3->unk_1d0 + off);
            bz0 = ep->z;
            o = o3;
        } else {
            s32 t;
            o3 = ctx->unk_00;
            t = (u16)(s16)((s16)o3->unk_1c0 + 0x8000);
            t = (t >> 4) * 2;
            *(s32 *)((u8 *)o3->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[t]);
            e = (Unk_ov004_0222c570_Vec *)((u8 *)ctx->unk_00->unk_1d0 + off);
            e->z += func_01ffcb0c(base, data_02135f44[t + 1]);
            o = ctx->unk_00;
            ep = (Unk_ov004_0222c570_Vec *)((u8 *)o->unk_1d0 + off);
            bx1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            bz1 = ep->z;
        }
        if (data_ov004_02251d60 == 0) {
            if (type < 0x11) {
                func_020308b4(ep, len, data_ov004_02251d9c, 0x11c00, 0x5c00);
            } else if (type != 0x19) {
                func_020308b4(ep, len, data_ov004_02251d84, 0x11c00, 0x5c00);
            } else {
                func_020308b4(ep, len, data_ov004_02251d9c, 0x11c00, 0x5c00);
            }
        } else {
            switch (o->unk_1c8) {
            case 0:
                if (func_020308b4(ep, len, data_ov004_02251d9c, 0x1a000, 0x4dc3)) {
                    ctx->unk_00->unk_1f0 = 1;
                }
                break;
            case 1:
                if (func_020308b4(ep, len, data_ov004_02251d9c, 0x26000, 0x4dc3)) {
                    ctx->unk_00->unk_1f0 = 1;
                }
                break;
            case 2:
                if (func_020308b4(ep, len, data_ov004_02251d9c, 0x2a000, 0x4dc3)) {
                    ctx->unk_00->unk_1f0 = 1;
                }
                break;
            }
        }
        if (k == 0) {
            o = ctx->unk_00;
            ep = (Unk_ov004_0222c570_Vec *)((u8 *)o->unk_1d0 + off);
            ax0 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az0 = ep->z;
        } else {
            o = ctx->unk_00;
            ep = (Unk_ov004_0222c570_Vec *)((u8 *)o->unk_1d0 + off);
            ax1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az1 = ep->z;
        }
    }
    k++;
    if (k < 2) goto loop0;
    func_ov004_0222c9ec(self, &o->unk_1a8.x, bx0, ax0, bx1, ax1);
    func_ov004_0222c9ec(self, &ctx->unk_00->unk_1a8.z, bz0, az0, bz1, az1);
    Unk_ov004_0222c570_Vec *dst = &ctx->unk_00->unk_1b4;
    dst->x = v->x;
    dst->y = v->y;
    dst->z = v->z;
}

extern "C" void func_ov004_0222c9ec(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d) {
    s32 dx = b - a;
    s32 dy = d - c;
    s32 ax = dx < 0 ? -dx : dx;
    s32 ay = dy < 0 ? -dy : dy;
    if (ax >= ay) {
        *p += dx;
    } else {
        *p += dy;
    }
}

extern "C" void func_ov004_0222cde0(void *self) {
    s32 i = data_ov004_02251d64;
    void **pp = &data_ov004_02251e94[i];
    volatile u16 v = 0xfff1;
    for (; i < data_ov004_0224e5f0; pp++, i++) {
        u16 w;
        if ((u32)i < 0x38) {
            w = (u16)(i + 0x12e8);
        } else {
            w = 0x12e8;
        }
        v = w;
        if (func_02070358(data_021ed0a0, (u16 *)&v)) {
            s32 *e = (s32 *)((u8 *)*pp + 0x1a8);
            switch (i) {
            case 0x34:
            case 0x35:
            case 0x36:
                e[2] = 0x12000;
                if ((u32)(i - 0x35) <= 1) {
                    e[0] = func_ov004_02231e74(5, 0x1e);
                } else if (i == 0x34) {
                    e[0] = func_ov004_02231e74(5, 0x1e);
                }
                break;
            case 0x26:
                e[2] = 0x14700;
                e[0] = 0x9e00;
                break;
            case 0x23:
                e[2] = 0x14a00;
                e[0] = 0x6000;
                break;
            case 0x25:
                e[2] = 0x14a00;
                e[0] = 0x7000;
                break;
            default:
                e[2] = func_ov004_02231e74(0x12, 0x16);
                e[0] = func_ov004_02231e74(5, 0x1e);
                break;
            }
            s32 idx = i * 17;
            u8 *q = data_ov004_022402ec + idx;
            e[1] = ((q[4] << 12) >> 6) - 0x1000;
            s32 *d = (s32 *)((u8 *)*pp + 0x1b4);
            d[0] = e[0];
            d[1] = e[1];
            d[2] = e[2];
            *((u8 *)*pp + 0x164) = data_ov004_022402ec[idx];
            func_ov004_0222de34(self, i);
        }
    }
}
