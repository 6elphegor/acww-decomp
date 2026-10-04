// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "gfx/SplRes.h"
#include "gfx/V3.h"

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

static inline u32 vtx(s16 x, s16 y, s16 z) {
    return ((x >> 6) & 0x3ff) | (((y >> 6) & 0x3ff) << 10) | (((z >> 6) & 0x3ff) << 20);
}

static inline u32 vtxb(s16 y, s16 x) {
    return ((x >> 6) & 0x3ff) | (((y >> 6) & 0x3ff) << 10);
}

struct ChildRes {
    u16 b0 : 3;
    u16 mode : 2;
    u16 b5 : 1;
    u16 own : 1;
    u16 b7 : 9;
    s16 spread;
    u8 p4[2];
    u16 h6;
    u8 c8;
    u8 c9;
    u16 h10;
    u8 count;
    u8 p13[2];
    u8 c15;
};

struct Bits46 {
    u16 lo : 5;
    u16 mid : 5;
    u16 hi : 6;
};

struct Part {
    u8 p0[8];
    V3Arr pos;
    V3Arr vel;
    u16 h32;
    s16 h34;
    u16 h36;
    u16 h38;
    u16 h40;
    u16 h42;
    u8 c44;
    u8 c45;
    Bits46 b46;
    s32 w48;
    s16 h52;
    u16 h54;
    V3Arr v56;
};


struct Res {
    Rh *p0;
    u8 p4[16];
    ChildRes *child;
};

struct Emit {
    u8 p0[16];
    u8 list[8];
    Res *res;
    u8 p28[62];
    u16 h90;
    u8 p92[4];
    s16 h96;
    s16 h98;
    s16 h100;
    s16 h102;
};

struct Mg {
    u8 p0[48];
    u32 w48;
    Emit *cur;
    s32 *mtx;
};

typedef u32 (*DrawCb)(V3Arr *, V3Arr);
extern u32 data_021f5c3c;
extern s16 data_02135f44[];
extern "C" {
void VEC_CrossProduct(V3Arr *a, V3Arr *b, V3Arr *c);
void VEC_Normalize(V3Arr *a, V3Arr *b);
void MI_Copy36B(s32 *src, s32 *dst);
void MTX_MultVec33(V3Arr *v, V3Arr *m, V3Arr *out);
void MTX_MultVec43(V3Arr *v, s32 *m, V3Arr *out);
void MTX_RotX43_(s32 *m, s32 s, s32 c);
void G3_MultMtx43(s32 *m);
void *spl_pop_front(void *list);
void spl_push_front(void *list, void *node);
s32 FX_Div(s32 a, s32 b);
}

static inline u16 mulRGB(u16 a, u16 b) {
    return (u16)((((a & 31) * (b & 31)) >> 5) | (((((a & 0x3e0) * (b & 0x3e0)) >> 15)) << 5) | ((((a & 0x7c00) * (b & 0x7c00)) >> 25) << 10));
}

static inline void Trans(s32 x, s32 y, s32 z) {
    *(vu32 *)0x04000470 = x;
    *(vu32 *)0x04000470 = y;
    *(vu32 *)0x04000470 = z;
}

static inline u32 rnd() {
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    return data_021f5c3c >> 23;
}

// Spawns the child particles of particle a (resource child block: count at +12): takes nodes from the free list, copies the
// position, scales the velocity by the child ratio plus a random spread (LCG data_021f5c3c, 0x5eedf715 / 0x1b0cb173).
extern "C" void func_020fc6bc(Part *a, Emit *b, void *list) {
    Part *p;
    s32 m;
    s32 r;
    s32 k;
    ChildRes *ch = b->res->child;
    s32 i = 0;
    if ((s32)ch->count <= 0) return;
    do {
        p = (Part *)spl_pop_front(list);
        if (p == 0) return;
        spl_push_front(b->list, p);
        p->pos = a->pos;
        s32 ratio = FX_Div(ch->c8 << 12, 0xff000);
        m = FX_Mul(a->vel.v[0], ratio);
        p->vel.v[0] = m + ((ch->spread * (s32)rnd() - (ch->spread << 8)) >> 8);
        m = FX_Mul(a->vel.v[1], ratio);
        p->vel.v[1] = m + ((ch->spread * (s32)rnd() - (ch->spread << 8)) >> 8);
        m = FX_Mul(a->vel.v[2], ratio);
        p->vel.v[2] = m + ((ch->spread * (s32)rnd() - (ch->spread << 8)) >> 8);
        p->v56 = a->v56;
        k = (a->w48 * a->h52) >> 12;
        p->w48 = (k * (ch->c9 + 1)) >> 6;
        p->h52 = 0x1000;
        if (ch->own) {
            p->h54 = ch->h10;
        } else {
            p->h54 = a->h54;
        }
        p->b46.lo = (a->b46.lo * (a->b46.mid + 1)) >> 5;
        p->b46.mid = 31;
        switch (ch->mode) {
        case 0:
            p->h32 = 0;
            p->h34 = 0;
            break;
        case 1:
            p->h32 = a->h32;
            p->h34 = 0;
            break;
        case 2:
            p->h32 = a->h32;
            p->h34 = a->h34;
            break;
        }
        p->h36 = ch->h6;
        p->h38 = 0;
        p->c44 = ch->c15;
        p->h40 = 0xffff / (s32)((u32)a->h36 >> 1);
        p->h42 = 0xffff / a->h36;
        p->c45 = 0;
        i++;
    } while (i < (s32)ch->count);
}

// Same quad in the XY plane.
extern "C" void drawXYPlane(s32 a, s32 b, s32 c, s32 d) {
    *(vu32 *)0x04000500 = 1;
    *(vu32 *)0x04000488 = 0;
    *(vu32 *)0x04000490 = vtxb(d + 0x1000, c - 0x1000);
    *(vu32 *)0x04000488 = (u16)(a >> 8);
    *(vu32 *)0x04000490 = vtxb(d + 0x1000, c + 0x1000);
    *(vu32 *)0x04000488 = (u16)(a >> 8) | ((u16)(b >> 8) << 16);
    *(vu32 *)0x04000490 = vtxb(d - 0x1000, c + 0x1000);
    *(vu32 *)0x04000488 = (u16)(b >> 8) << 16;
    *(vu32 *)0x04000490 = vtxb(d - 0x1000, c - 0x1000);
    *(vu32 *)0x04000504 = 0;
}

// Emits one textured quad in the XZ plane: BEGIN_VTXS 1 (0x04000500), TEXCOORD (0x04000488), VTX_10 (0x04000490), END_VTXS (0x04000504).
// (a, b) = texture size in 8.8, (c, d) = centre.
extern "C" void drawXZPlane(s32 a, s32 b, s32 c, s32 d) {
    *(vu32 *)0x04000500 = 1;
    *(vu32 *)0x04000488 = 0;
    *(vu32 *)0x04000490 = vtx(c - 0x1000, 0, d + 0x1000);
    *(vu32 *)0x04000488 = (u16)(a >> 8);
    *(vu32 *)0x04000490 = vtx(c + 0x1000, 0, d + 0x1000);
    *(vu32 *)0x04000488 = (u16)(a >> 8) | ((u16)(b >> 8) << 16);
    *(vu32 *)0x04000490 = vtx(c + 0x1000, 0, d - 0x1000);
    *(vu32 *)0x04000488 = (u16)(b >> 8) << 16;
    *(vu32 *)0x04000490 = vtx(c - 0x1000, 0, d - 0x1000);
    *(vu32 *)0x04000504 = 0;
}

// Builds a 3x4 hue-rotation colour matrix from (sin, 1 - cos style) factors: 1/3 and 1/sqrt(3) (0x555, 0x93d) terms.
extern "C" void rotTypeXYZ(s32 a, s32 b, s32 *m) {
    s32 t = FX_Mul(0x1000 - b, 0x555);
    s32 p = FX_Mul(a, 0x93d);
    s32 q = t + p;
    s32 r = t - p;
    s32 k = t + b;
    m[0] = k;
    m[3] = q;
    m[6] = r;
    m[9] = 0;
    m[1] = r;
    m[4] = k;
    m[7] = q;
    m[10] = 0;
    m[2] = q;
    m[5] = r;
    m[8] = k;
    m[11] = 0;
}

// Builds a 3x4 matrix: rotation about Y from (sin, cos), translation zero.
extern "C" void rotTypeY(s32 a, s32 b, s32 *m) {
    m[0] = b;
    m[3] = 0;
    m[6] = a;
    m[9] = 0;
    m[1] = 0;
    m[4] = 0x1000;
    m[7] = 0;
    m[10] = 0;
    m[2] = -a;
    m[5] = 0;
    m[8] = b;
    m[11] = 0;
}

// Same as func_020fbad0; only the final quad differs (as func_020fb378 differs from func_020fac28).
extern "C" void func_020fbf94(Mg *self, Part *p, DrawCb fp) {
    s32 sx;
    s32 sy;
    u8 mode = self->cur->res->p0->mode;
    s32 *mtx = self->mtx;
    s32 sc = self->cur->res->p0->s48;
    s32 h52 = p->h52;
    u16 c1 = p->h54;
    u16 c2 = self->cur->h90;
    V3Arr v;
    s32 m[12];
    s32 rot[12];
    s32 ang;
    s32 alpha;
    s32 sn;
    s32 cs;
    alpha = (p->b46.lo * (p->b46.mid + 1)) >> 5;
    *(vu32 *)0x040004a4 = (p->b46.hi << 24) | (self->w48 | 0xc0) | (alpha << 16);
    (void)*(vu32 *)0x040004a4;
    if (alpha == 0) return;
    sy = p->w48;
    sx = FX_Mul(sy, sc);
    if (mode == 0) {
        sx = FX_Mul(sx, h52);
        sy = FX_Mul(sy, h52);
    } else if (mode == 1) {
        sx = FX_Mul(sx, h52);
    } else {
        sy = FX_Mul(sy, h52);
    }
    if (!self->cur->res->p0->b23) {
        v.v[0] = p->pos.v[0] + p->v56.v[0];
        v.v[1] = p->pos.v[1] + p->v56.v[1];
        v.v[2] = p->pos.v[2] + p->v56.v[2];
        ang = fp(&v, v);
        MTX_MultVec43(&v, mtx, &v);
        sn = data_02135f44[(p->h32 >> 4) * 2];
        cs = data_02135f44[(p->h32 >> 4) * 2 + 1];
        m[0] = FX_Mul(cs, sx);
        m[1] = FX_Mul(sn, sx);
        m[2] = 0;
        m[3] = FX_Mul(-sn, sy);
        m[4] = FX_Mul(cs, sy);
        m[5] = 0;
        m[6] = 0;
        m[7] = 0;
        m[8] = 0x1000;
        m[9] = 0;
        m[10] = 0;
        m[11] = 0;
        *(vu32 *)0x04000454 = 0;
    } else {
        v.v[0] = p->pos.v[0] + p->v56.v[0] - self->cur->res->p0->w4;
        v.v[1] = p->pos.v[1] + p->v56.v[1] - self->cur->res->p0->w8;
        v.v[2] = p->pos.v[2] + p->v56.v[2] - self->cur->res->p0->w12;
        ang = fp(&v, v);
        MTX_MultVec43(&v, mtx, &v);
        sn = data_02135f44[(p->h32 >> 4) * 2];
        cs = data_02135f44[(p->h32 >> 4) * 2 + 1];
        m[0] = FX_Mul(cs, sx);
        m[1] = FX_Mul(sn, sx);
        m[2] = 0;
        m[3] = FX_Mul(-sn, sy);
        m[4] = FX_Mul(cs, sy);
        m[5] = 0;
        m[6] = 0;
        m[7] = 0;
        m[8] = 0x1000;
        m[9] = 0;
        m[10] = 0;
        m[11] = 0;
        *(vu32 *)0x04000454 = 0;
        Trans(self->cur->res->p0->w4, self->cur->res->p0->w8, self->cur->res->p0->w12);
    }
    Trans(v.v[0], v.v[1], v.v[2]);
    if (self->cur->res->p0->c80 & 0x10) {
        MTX_RotX43_(rot, data_02135f44[(ang >> 4) * 2], data_02135f44[(ang >> 4) * 2 + 1]);
        G3_MultMtx43(rot);
    }
    G3_MultMtx43(m);
    {
        *(vu32 *)0x04000480 = (u16)((((c1 & 31) * (c2 & 31)) >> 5) | (((((c1 & 0x3e0) * (c2 & 0x3e0)) >> 15)) << 5) | ((((c1 & 0x7c00) * (c2 & 0x7c00)) >> 25) << 10));
    }
    drawXYPlane(self->cur->h96, self->cur->h98, self->cur->res->p0->s76, self->cur->res->p0->s78);
}

// Particle draw: plain screen-facing billboard (rotation about the view axis by the particle angle h32, scaled).
extern "C" void func_020fbad0(Mg *self, Part *p, DrawCb fp) {
    s32 *mtx = self->mtx;
    s32 sc = self->cur->res->p0->s48;
    V3Arr v;
    s32 m[12];
    s32 rot[12];
    s32 ang;
    s32 sx;
    s32 sy;
    s32 alpha;
    s32 sn;
    s32 cs;
    alpha = (p->b46.lo * (p->b46.mid + 1)) >> 5;
    *(vu32 *)0x040004a4 = (p->b46.hi << 24) | (self->w48 | 0xc0) | (alpha << 16);
    (void)*(vu32 *)0x040004a4;
    if (alpha == 0) return;
    sy = p->w48;
    sx = FX_Mul(sy, sc);
    switch (self->cur->res->p0->mode) {
    case 0:
        sx = FX_Mul(sx, p->h52);
        sy = FX_Mul(sy, p->h52);
        break;
    case 1:
        sx = FX_Mul(sx, p->h52);
        break;
    case 2:
        sy = FX_Mul(sy, p->h52);
        break;
    }
    if (!self->cur->res->p0->b23) {
        v.v[0] = p->pos.v[0] + p->v56.v[0];
        v.v[1] = p->pos.v[1] + p->v56.v[1];
        v.v[2] = p->pos.v[2] + p->v56.v[2];
        ang = fp(&v, v);
        MTX_MultVec43(&v, mtx, &v);
        sn = data_02135f44[(p->h32 >> 4) * 2];
        cs = data_02135f44[(p->h32 >> 4) * 2 + 1];
        m[0] = FX_Mul(cs, sx);
        m[1] = FX_Mul(sn, sx);
        m[2] = 0;
        m[3] = FX_Mul(-sn, sy);
        m[4] = FX_Mul(cs, sy);
        m[5] = 0;
        m[6] = 0;
        m[7] = 0;
        m[8] = 0x1000;
        m[9] = 0;
        m[10] = 0;
        m[11] = 0;
        *(vu32 *)0x04000454 = 0;
    } else {
        v.v[0] = p->pos.v[0] + p->v56.v[0] - self->cur->res->p0->w4;
        v.v[1] = p->pos.v[1] + p->v56.v[1] - self->cur->res->p0->w8;
        v.v[2] = p->pos.v[2] + p->v56.v[2] - self->cur->res->p0->w12;
        ang = fp(&v, v);
        MTX_MultVec43(&v, mtx, &v);
        sn = data_02135f44[(p->h32 >> 4) * 2];
        cs = data_02135f44[(p->h32 >> 4) * 2 + 1];
        m[0] = FX_Mul(cs, sx);
        m[1] = FX_Mul(sn, sx);
        m[2] = 0;
        m[3] = FX_Mul(-sn, sy);
        m[4] = FX_Mul(cs, sy);
        m[5] = 0;
        m[6] = 0;
        m[7] = 0;
        m[8] = 0x1000;
        m[9] = 0;
        m[10] = 0;
        m[11] = 0;
        *(vu32 *)0x04000454 = 0;
        Trans(self->cur->res->p0->w4, self->cur->res->p0->w8, self->cur->res->p0->w12);
    }
    Trans(v.v[0], v.v[1], v.v[2]);
    if (self->cur->res->p0->c80 & 0x10) {
        MTX_RotX43_(rot, data_02135f44[(ang >> 4) * 2], data_02135f44[(ang >> 4) * 2 + 1]);
        G3_MultMtx43(rot);
    }
    G3_MultMtx43(m);
    {
        u16 c1 = p->h54;
        u16 c2 = self->cur->h90;
        *(vu32 *)0x04000480 = (u16)((((c1 & 31) * (c2 & 31)) >> 5) | (((((c1 & 0x3e0) * (c2 & 0x3e0)) >> 15)) << 5) | ((((c1 & 0x7c00) * (c2 & 0x7c00)) >> 25) << 10));
    }
    drawXYPlane(self->cur->h100, self->cur->h102, 0, 0);
}

// Same as func_020fac28; only the final quad differs (texture coordinates / size taken from the emitter and the resource).
extern "C" void func_020fb378(Mg *self, Part *p, DrawCb fp) {
    s32 *mtx = self->mtx;
    s32 sc = self->cur->res->p0->s48;
    V3Arr e;
    V3Arr v;
    V3Arr d;
    V3Arr cam;
    s32 mc[9];
    s32 m[12];
    s32 ang;
    s32 sx;
    s32 sy;
    s32 alpha;
    s32 dot;
    s32 t;
    alpha = (p->b46.lo * (p->b46.mid + 1)) >> 5;
    *(vu32 *)0x040004a4 = (p->b46.hi << 24) | (self->w48 | 0xc0) | (alpha << 16);
    (void)*(vu32 *)0x040004a4;
    if (alpha == 0) return;
    sy = p->w48;
    sx = FX_Mul(sy, sc);
    switch (self->cur->res->p0->mode) {
    case 0:
        sx = FX_Mul(sx, p->h52);
        sy = FX_Mul(sy, p->h52);
        break;
    case 1:
        sx = FX_Mul(sx, p->h52);
        break;
    case 2:
        sy = FX_Mul(sy, p->h52);
        break;
    }
    if (!self->cur->res->p0->b23) {
        v.v[0] = p->pos.v[0] + p->v56.v[0];
        v.v[1] = p->pos.v[1] + p->v56.v[1];
        v.v[2] = p->pos.v[2] + p->v56.v[2];
        ang = fp(&v, v);
        d = p->vel;
        cam.v[0] = mtx[2];
        cam.v[1] = mtx[5];
        cam.v[2] = mtx[8];
        VEC_CrossProduct(&d, &cam, &d);
        if (d.v[0] == 0 && d.v[1] == 0 && d.v[2] == 0) return;
        VEC_Normalize(&d, &d);
        MI_Copy36B(mtx, mc);
        MTX_MultVec33(&d, (V3Arr *)mc, &d);
        MTX_MultVec43(&v, mtx, &v);
        e = p->vel;
        VEC_Normalize(&e, &e);
        dot = FX_Mul(e.v[2], -mtx[8]) + (FX_Mul(e.v[0], -mtx[2]) + FX_Mul(e.v[1], -mtx[5]));
        if (dot < 0) dot = -dot;
        t = FX_Mul(0x1000 - dot, self->cur->res->p0->k) + 0x1000;
        sy = FX_Mul(sy, t);
        m[0] = FX_Mul(d.v[0], sx);
        m[3] = FX_Mul(-d.v[1], sy);
        m[6] = 0;
        m[9] = v.v[0];
        m[7] = 0;
        m[2] = 0;
        m[1] = FX_Mul(d.v[1], sx);
        m[4] = FX_Mul(d.v[0], sy);
        m[10] = v.v[1];
        m[5] = 0;
        m[8] = 0x1000;
        m[11] = v.v[2];
        *(vu32 *)0x04000454 = 0;
        G3_MultMtx43(m);
    } else {
        v.v[0] = p->pos.v[0] + p->v56.v[0] - self->cur->res->p0->w4;
        v.v[1] = p->pos.v[1] + p->v56.v[1] - self->cur->res->p0->w8;
        v.v[2] = p->pos.v[2] + p->v56.v[2] - self->cur->res->p0->w12;
        ang = fp(&v, v);
        d = p->vel;
        cam.v[0] = mtx[2];
        cam.v[1] = mtx[5];
        cam.v[2] = mtx[8];
        VEC_CrossProduct(&d, &cam, &d);
        if (d.v[0] == 0 && d.v[1] == 0 && d.v[2] == 0) return;
        VEC_Normalize(&d, &d);
        MI_Copy36B(mtx, mc);
        MTX_MultVec33(&d, (V3Arr *)mc, &d);
        MTX_MultVec43(&v, mtx, &v);
        e = p->vel;
        VEC_Normalize(&e, &e);
        dot = FX_Mul(e.v[2], -mtx[8]) + (FX_Mul(e.v[0], -mtx[2]) + FX_Mul(e.v[1], -mtx[5]));
        if (dot < 0) dot = -dot;
        t = FX_Mul(0x1000 - dot, self->cur->res->p0->k) + 0x1000;
        sy = FX_Mul(sy, t);
        m[0] = FX_Mul(d.v[0], sx);
        m[3] = FX_Mul(-d.v[1], sy);
        m[6] = 0;
        m[9] = v.v[0];
        m[7] = 0;
        m[2] = 0;
        m[1] = FX_Mul(d.v[1], sx);
        m[4] = FX_Mul(d.v[0], sy);
        m[10] = v.v[1];
        m[5] = 0;
        m[8] = 0x1000;
        m[11] = v.v[2];
        *(vu32 *)0x04000454 = 0;
        Trans(self->cur->res->p0->w4, self->cur->res->p0->w8, self->cur->res->p0->w12);
        G3_MultMtx43(m);
    }
    if (self->cur->res->p0->c80 & 0x10) {
        MTX_RotX43_(m, data_02135f44[(ang >> 4) * 2], data_02135f44[(ang >> 4) * 2 + 1]);
        G3_MultMtx43(m);
    }
    {
        u16 c1 = p->h54;
        u16 c2 = self->cur->h90;
        *(vu32 *)0x04000480 = (u16)((((c1 & 31) * (c2 & 31)) >> 5) | (((((c1 & 0x3e0) * (c2 & 0x3e0)) >> 15)) << 5) | ((((c1 & 0x7c00) * (c2 & 0x7c00)) >> 25) << 10));
    }
    drawXYPlane(self->cur->h96, self->cur->h98, self->cur->res->p0->s76, self->cur->res->p0->s78);
}

// Particle draw (SPL-style): camera-facing billboard whose long axis follows the particle velocity (cross product with the
// camera forward vector, scaled by how edge-on it is). self = particle manager (+0x30 polygon attribute base, +0x34 current
// emitter, +0x38 camera matrix), p = particle, fp = per-resource callback (pos, pos) returning the roll angle.
// Writes POLYGON_ATTR (0x040004a4), MTX_IDENTITY (0x04000454), MTX_TRANS (0x04000470), COLOR (0x04000480).
extern "C" void func_020fac28(Mg *self, Part *p, DrawCb fp) {
    s32 *mtx = self->mtx;
    s32 sc = self->cur->res->p0->s48;
    V3Arr e;
    V3Arr v;
    V3Arr d;
    V3Arr cam;
    s32 mc[9];
    s32 m[12];
    s32 ang;
    s32 sx;
    s32 sy;
    s32 alpha;
    s32 dot;
    s32 t;
    alpha = (p->b46.lo * (p->b46.mid + 1)) >> 5;
    *(vu32 *)0x040004a4 = (p->b46.hi << 24) | (self->w48 | 0xc0) | (alpha << 16);
    (void)*(vu32 *)0x040004a4;
    if (alpha == 0) return;
    sy = p->w48;
    sx = FX_Mul(sy, sc);
    switch (self->cur->res->p0->mode) {
    case 0:
        sx = FX_Mul(sx, p->h52);
        sy = FX_Mul(sy, p->h52);
        break;
    case 1:
        sx = FX_Mul(sx, p->h52);
        break;
    case 2:
        sy = FX_Mul(sy, p->h52);
        break;
    }
    if (!self->cur->res->p0->b23) {
        v.v[0] = p->pos.v[0] + p->v56.v[0];
        v.v[1] = p->pos.v[1] + p->v56.v[1];
        v.v[2] = p->pos.v[2] + p->v56.v[2];
        ang = fp(&v, v);
        d = p->vel;
        cam.v[0] = mtx[2];
        cam.v[1] = mtx[5];
        cam.v[2] = mtx[8];
        VEC_CrossProduct(&d, &cam, &d);
        if (d.v[0] == 0 && d.v[1] == 0 && d.v[2] == 0) return;
        VEC_Normalize(&d, &d);
        MI_Copy36B(mtx, mc);
        MTX_MultVec33(&d, (V3Arr *)mc, &d);
        MTX_MultVec43(&v, mtx, &v);
        e = p->vel;
        VEC_Normalize(&e, &e);
        dot = FX_Mul(e.v[2], -mtx[8]) + (FX_Mul(e.v[0], -mtx[2]) + FX_Mul(e.v[1], -mtx[5]));
        if (dot < 0) dot = -dot;
        t = FX_Mul(0x1000 - dot, self->cur->res->p0->k) + 0x1000;
        sy = FX_Mul(sy, t);
        m[0] = FX_Mul(d.v[0], sx);
        m[3] = FX_Mul(-d.v[1], sy);
        m[6] = 0;
        m[9] = v.v[0];
        m[7] = 0;
        m[2] = 0;
        m[1] = FX_Mul(d.v[1], sx);
        m[4] = FX_Mul(d.v[0], sy);
        m[10] = v.v[1];
        m[5] = 0;
        m[8] = 0x1000;
        m[11] = v.v[2];
        *(vu32 *)0x04000454 = 0;
        G3_MultMtx43(m);
    } else {
        v.v[0] = p->pos.v[0] + p->v56.v[0] - self->cur->res->p0->w4;
        v.v[1] = p->pos.v[1] + p->v56.v[1] - self->cur->res->p0->w8;
        v.v[2] = p->pos.v[2] + p->v56.v[2] - self->cur->res->p0->w12;
        ang = fp(&v, v);
        d = p->vel;
        cam.v[0] = mtx[2];
        cam.v[1] = mtx[5];
        cam.v[2] = mtx[8];
        VEC_CrossProduct(&d, &cam, &d);
        if (d.v[0] == 0 && d.v[1] == 0 && d.v[2] == 0) return;
        VEC_Normalize(&d, &d);
        MI_Copy36B(mtx, mc);
        MTX_MultVec33(&d, (V3Arr *)mc, &d);
        MTX_MultVec43(&v, mtx, &v);
        e = p->vel;
        VEC_Normalize(&e, &e);
        dot = FX_Mul(e.v[2], -mtx[8]) + (FX_Mul(e.v[0], -mtx[2]) + FX_Mul(e.v[1], -mtx[5]));
        if (dot < 0) dot = -dot;
        t = FX_Mul(0x1000 - dot, self->cur->res->p0->k) + 0x1000;
        sy = FX_Mul(sy, t);
        m[0] = FX_Mul(d.v[0], sx);
        m[3] = FX_Mul(-d.v[1], sy);
        m[6] = 0;
        m[9] = v.v[0];
        m[7] = 0;
        m[2] = 0;
        m[1] = FX_Mul(d.v[1], sx);
        m[4] = FX_Mul(d.v[0], sy);
        m[10] = v.v[1];
        m[5] = 0;
        m[8] = 0x1000;
        m[11] = v.v[2];
        *(vu32 *)0x04000454 = 0;
        Trans(self->cur->res->p0->w4, self->cur->res->p0->w8, self->cur->res->p0->w12);
        G3_MultMtx43(m);
    }
    if (self->cur->res->p0->c80 & 0x10) {
        MTX_RotX43_(m, data_02135f44[(ang >> 4) * 2], data_02135f44[(ang >> 4) * 2 + 1]);
        G3_MultMtx43(m);
    }
    {
        u16 c1 = p->h54;
        u16 c2 = self->cur->h90;
        *(vu32 *)0x04000480 = (u16)((((c1 & 31) * (c2 & 31)) >> 5) | (((((c1 & 0x3e0) * (c2 & 0x3e0)) >> 15)) << 5) | ((((c1 & 0x7c00) * (c2 & 0x7c00)) >> 25) << 10));
    }
    drawXYPlane(self->cur->h100, self->cur->h102, 0, 0);
}

