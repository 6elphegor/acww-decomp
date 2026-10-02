// mwcc-flags: -nothumb -O4,p
// G015a: autoload_2 0x020fc984-0x020fe4b4 (22 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: plain func_ names, nothing defined but the functions.
// Particle manager ("SPL" style): func_020fc984 emits particles of an emitter (10 emitter shapes), 020fd6c0/020fd820 emitter axes, 020fdaa8..020fdc8c per-particle
// animation callbacks (alpha/scale/texture frame/colour over life), 020fdee8..020fe2bc the six field handlers (convergence, collision, spin, magnet, random, gravity),
// 020fe2f0/020fe35c/020fe3a0 list helpers, 020fe3ec/020fe448 random unit vectors.
#include "types.h"

struct VecFx32 { s32 x, y, z; };
struct VecFx16 { s16 x, y, z; };
struct V3Arr { s32 v[3]; };
struct MtxFx33 { s32 m[9]; };

struct P;
struct PList {
    P *head;
    s32 count;
};

struct Fl2e {
    u16 col : 5;
    u16 alpha : 5;
    u16 rest : 6;
};

struct P {
    P *next;
    P *prev;
    VecFx32 pos;
    VecFx32 vel;
    u16 rot0;
    u16 rot1;
    u16 life;
    u16 age;
    u16 h28;
    u16 h2a;
    u8 b2c;
    u8 b2d;
    Fl2e fl;
    s32 w30;
    s16 s34;
    u16 col;
    VecFx32 epos;
};

struct HF {
    u32 type : 4;
    u32 a : 2;
    u32 axis : 2;
    u32 c : 1;
    u32 f9 : 1;
    u32 b10 : 1;
    u32 f11 : 1;
    u32 f12 : 1;
    u32 f13 : 1;
    u32 b14 : 6;
    u32 f20 : 1;
    u32 rest : 11;
};

struct Hdr {
    HF f;
    u8 p4[12];
    s32 rate;
    u8 p14[14];
    u16 col;
    u8 p24[16];
    s16 s34;
    s16 s36;
    u8 p38[4];
    u8 b3c;
    u8 b3d;
    u8 b3e;
    u8 p3f[4];
    u8 b43;
    u8 b44;
};

struct Tex {
    u16 c0;
    u16 c1;
    u8 p4[4];
    u16 b0 : 1;
    u16 rest : 15;
};

struct TabBF {
    u32 n : 8;
    u32 step : 8;
    u32 f16 : 1;
    u32 rest : 15;
};
struct TabB {
    u8 n;
    u8 step;
};
union TabU {
    TabBF bf;
    TabB b;
};
struct Tab {
    u8 v[8];
    TabU x;
};

struct Res {
    Hdr *hdr;
    u8 p4[4];
    Tex *p8;
    u8 pc[4];
    Tab *p10;
};

struct E {
    u8 p0[8];
    PList list;
    u8 p10[8];
    Res *res;
    u8 p1c[4];
    VecFx32 pos;
    u8 p2c[14];
    s16 phase;
    VecFx16 dir;
    u8 p42[2];
    s32 radius;
    s32 len;
    s32 w4c;
    s32 w50;
    s32 w54;
    u16 h58;
    u8 p5a[2];
    s32 w5c;
    u8 p60[8];
    u8 b68;
    u8 b69;
    u8 p6a[2];
    VecFx16 ax1;
    VecFx16 ax2;
};

struct AnimRec {
    s16 s0, s2, s4;
    u8 t1, t2;
};

struct ColRec {
    u16 c0;
    u16 c2;
    u8 b4, b5, b6, b7;
    u16 f0 : 1;
    u16 f1 : 1;
    u16 f2 : 1;
    u16 frest : 13;
};

struct Col5 {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

struct AlphaRec {
    Col5 c;
    u8 b2;
    u8 p3;
    u8 t1, t2;
};

struct SclRec {
    u8 p0[4];
    s16 sc;
};

struct Ctx {
    Hdr *hdr;
    AnimRec *rec4;
    ColRec *rec8;
    AlphaRec *recc;
    Tab *rec10;
    SclRec *rec14;
};

struct GravF { s16 x, y, z; };
struct RandF { s16 x, y, z; u16 intv; };
struct MagF { s32 x, y, z; s16 force; };
struct SpinF { u16 angle; u16 axis; };
struct CollF { s32 y; s16 coef; u16 type : 2; u16 rest : 14; };
struct ConvF { s32 x, y, z; s16 coef; };

extern "C" {
extern u32 data_021f5c3c;
extern const s16 data_02135f44[];
extern VecFx16 data_0213bba4;
extern u16 data_021f5c40;
extern u16 data_021f5c44;
extern u32 data_021f5c48;
extern void (*data_021f5c4c)(u32, u32);

void func_01ffc8bc(const VecFx16 *a, const VecFx16 *b, VecFx16 *out);
s32 func_01ffca14(const VecFx32 *a, const VecFx32 *b);
void func_01ffc5c0(const VecFx16 *src, VecFx16 *dst);
s32 func_01ffc9c4(const VecFx16 *a, const VecFx16 *b);
void func_01ffc714(const VecFx32 *src, VecFx32 *dst);
void func_01ffb498(MtxFx33 *m, s32 s, s32 c);
void func_01ffb4b4(MtxFx33 *m, s32 s, s32 c);
void func_01ffb4d0(MtxFx33 *m, s32 s, s32 c);
void func_01ffb4e8(const VecFx32 *v, const MtxFx33 *m, VecFx32 *dst);
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 old);
void func_02115664(u32 a, u32 b);
s32 func_021156ec(u32 a, u32 b);
void func_02117dcc(void);
s32 func_02117e8c(u32 a, u32 b);
void func_02117eb4(u32 a, void *b);
s32 func_02117dd8(u32 a, u32 b, u32 c);
s32 func_021123d0(void);
void func_020fe4b0(u32 a, u32 b);
void func_020fe4b4(u32 a, u32 b);
void func_020fe448(VecFx32 *v);
void func_020fe3ec(VecFx32 *v);
void func_020fe3a0(PList *l, P *n);
P *func_020fe35c(PList *l);
void func_020fd820(E *e);
void func_020fd6c0(VecFx32 *out, const VecFx32 *in, E *e);
}

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32)(((s64)a * b + 0x800) >> 12);
}

#define SIN_IDX(i) (data_02135f44[((i) >> 4) * 2])
#define COS_IDX(i) (data_02135f44[((i) >> 4) * 2 + 1])

#define LCG() (data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173)

extern "C" void func_020fe4b0(u32 a, u32 b) {
}

extern "C" void func_020fe448(VecFx32 *v) {
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    v->x = (s32)data_021f5c3c >> 8;
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    v->y = (s32)data_021f5c3c >> 8;
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    v->z = (s32)data_021f5c3c >> 8;
    func_01ffc714(v, v);
}

extern "C" void func_020fe3ec(VecFx32 *v) {
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    v->x = (s32)data_021f5c3c >> 8;
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    v->y = (s32)data_021f5c3c >> 8;
    v->z = 0;
    func_01ffc714(v, v);
}

extern "C" void func_020fe3a0(PList *l, P *n) {
    if (l->head == 0) {
        l->head = n;
        n->next = 0;
        n->prev = n->next;
    } else {
        n->next = l->head;
        n->prev = 0;
        l->head->prev = n;
        l->head = n;
    }
    l->count++;
}

extern "C" P *func_020fe35c(PList *l) {
    P *r = 0;
    P *n = l->head;
    if (n != 0) {
        r = n;
        l->head = n->next;
        if (l->head != 0) {
            n->next->prev = 0;
        }
        l->count--;
    }
    return r;
}

extern "C" P *func_020fe2f0(PList *l, P *n) {
    if (n->next == 0) {
        if (l->head == n) {
            l->head = 0;
        } else {
            n->prev->next = 0;
        }
    } else {
        if (l->head == n) {
            l->head = n->next;
            l->head->prev = 0;
        } else {
            n->next->prev = n->prev;
            n->prev->next = n->next;
        }
    }
    l->count--;
    return n;
}

extern "C" void func_020fe2bc(GravF *f, P *p, VecFx32 *acc) {
    acc->x += f->x;
    acc->y += f->y;
    acc->z += f->z;
}

extern "C" void func_020fe1f4(RandF *f, P *p, VecFx32 *acc) {
    if (p->age % f->intv != 0) {
        return;
    }
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    acc->x += (f->x * (s32)(data_021f5c3c >> 23) - (f->x << 8)) >> 8;
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    acc->y += (f->y * (s32)(data_021f5c3c >> 23) - (f->y << 8)) >> 8;
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    acc->z += (f->z * (s32)(data_021f5c3c >> 23) - (f->z << 8)) >> 8;
}

extern "C" void func_020fe170(MagF *f, P *p, VecFx32 *acc) {
    acc->x += (f->force * (f->x - p->pos.x - p->vel.x)) >> 12;
    acc->y += (f->force * (f->y - p->pos.y - p->vel.y)) >> 12;
    acc->z += (f->force * (f->z - p->pos.z - p->vel.z)) >> 12;
}

extern "C" void func_020fe098(SpinF *f, P *p, VecFx32 *acc) {
    MtxFx33 m;
    switch (f->axis) {
    case 0:
        func_01ffb498(&m, SIN_IDX(f->angle), COS_IDX(f->angle));
        break;
    case 1:
        func_01ffb4b4(&m, SIN_IDX(f->angle), COS_IDX(f->angle));
        break;
    case 2:
        func_01ffb4d0(&m, SIN_IDX(f->angle), COS_IDX(f->angle));
        break;
    }
    func_01ffb4e8(&p->pos, &m, &p->pos);
}

extern "C" void func_020fdf7c(CollF *f, P *p, VecFx32 *acc, E *e) {
    s32 y = f->y;
    if (e->w5c != (s32)0x80000000) {
        y = e->w5c;
    }
    s32 a;
    switch (f->type) {
    case 0:
        a = p->epos.y;
        if (a < y) {
            if (a + p->pos.y > y) {
                p->pos.y = y - a;
                p->age = p->life;
                return;
            }
        }
        if (a < y) {
            return;
        }
        if (a + p->pos.y < y) {
            p->pos.y = y - a;
            p->age = p->life;
        }
        return;
    case 1:
        a = p->epos.y;
        if (a < y) {
            if (a + p->pos.y > y) {
                p->pos.y = y - a;
                p->vel.y = -FX_Mul(p->vel.y, f->coef);
                return;
            }
        }
        if (a < y) {
            return;
        }
        if (a + p->pos.y < y) {
            p->pos.y = y - a;
            p->vel.y = -FX_Mul(p->vel.y, f->coef);
        }
        return;
    }
}

extern "C" void func_020fdee8(ConvF *f, P *p, VecFx32 *acc) {
    p->pos.x += FX_Mul(f->coef, f->x - p->pos.x);
    p->pos.y += FX_Mul(f->coef, f->y - p->pos.y);
    p->pos.z += FX_Mul(f->coef, f->z - p->pos.z);
}

extern "C" void func_020fde58(P *p, Ctx *c, s32 t) {
    AnimRec *r = c->rec4;
    s32 t1 = r->t1;
    s32 t2 = r->t2;
    if (t < t1) {
        p->s34 = r->s0 + (t * (r->s2 - r->s0)) / t1;
        return;
    }
    if (t < t2) {
        p->s34 = r->s2;
        return;
    }
    p->s34 = r->s4 + ((t - 255) * (r->s4 - r->s2)) / (255 - t2);
}

extern "C" void func_020fdc8c(P *p, Ctx *c, s32 t) {
    ColRec *r = c->rec8;
    Hdr *h = c->hdr;
    s32 t1 = r->b4;
    s32 t2 = r->b5;
    s32 t3 = r->b6;
    if (t < t1) {
        p->col = r->c0;
        return;
    }
    if (t < t2) {
        u16 A = h->col;
        u16 B = r->c0;
        s32 ar = A & 31;
        s32 br = B & 31;
        s32 ag = (A >> 5) & 31;
        s32 bg = (B >> 5) & 31;
        s32 ab = (A >> 10) & 31;
        s32 bb = (B >> 10) & 31;
        if (r->f2 == 0) {
            p->col = ar | (ag << 5) | (ab << 10);
            return;
        }
        s32 d = t2 - t1;
        s32 u = t - t1;
        p->col = (br + (u * (ar - br)) / d) | ((bg + (u * (ag - bg)) / d) << 5) | ((bb + (u * (ab - bb)) / d) << 10);
        return;
    }
    if (t < t3) {
        u16 C = r->c2;
        u16 A = h->col;
        s32 ar = A & 31;
        s32 cr = C & 31;
        s32 ag = (A >> 5) & 31;
        s32 cg = (C >> 5) & 31;
        s32 ab = (A >> 10) & 31;
        s32 cb = (C >> 10) & 31;
        if (r->f2 == 0) {
            p->col = cr | (cg << 5) | (cb << 10);
            return;
        }
        s32 d = t3 - t2;
        s32 u = t - t2;
        p->col = (ar + (u * (cr - ar)) / d) | ((ag + (u * (cg - ag)) / d) << 5) | ((ab + (u * (cb - ab)) / d) << 10);
        return;
    }
    p->col = r->c2;
}

extern "C" void func_020fdbb0(P *p, Ctx *c, s32 t) {
    AlphaRec *r = c->recc;
    s32 t1 = r->t1;
    s32 t2 = r->t2;
    s32 v;
    if (t < t1) {
        v = (t * (r->c.g - r->c.r)) / t1 + r->c.r;
    } else if (t < t2) {
        v = r->c.g;
    } else {
        v = ((t - 255) * (r->c.b - r->c.g)) / (255 - t2) + r->c.b;
    }
    data_021f5c3c = data_021f5c3c * 0x5eedf715 + 0x1b0cb173;
    p->fl.alpha = (u16)((v * (255 - ((r->b2 * (s32)(data_021f5c3c >> 24)) >> 8))) >> 8);
}

extern "C" void func_020fdb4c(P *p, Ctx *c, s32 t) {
    Tab *a = c->rec10;
    s32 i;
    for (i = 0; i < a->x.b.n; i++) {
        if (t < (i + 1) * a->x.b.step) {
            p->b2c = a->v[i];
            return;
        }
    }
}

extern "C" void func_020fdb00(P *p, Ctx *c, s32 t) {
    s32 s = c->rec14->sc;
    p->s34 = s + ((s - 0x1000) * (t - 255)) / 255;
}

extern "C" void func_020fdaa8(P *p, void *x, s32 t) {
    p->fl.alpha = (u16)(((255 - t) * 31) / 255);
}

extern "C" void func_020fd820(E *e) {
    VecFx16 a = data_0213bba4;
    VecFx16 b;
    switch (e->res->hdr->f.axis) {
    case 2:
        b.x = 0x1000;
        b.y = 0;
        b.z = 0;
        break;
    case 1:
        b.x = 0;
        b.y = 0x1000;
        b.z = 0;
        break;
    case 0:
        b.x = 0;
        b.y = 0;
        b.z = 0x1000;
        break;
    default:
        func_01ffc5c0(&e->dir, &b);
        break;
    }
    s32 d = func_01ffc9c4(&a, &b);
    if (d == 0x1000 || d == -0x1000) {
        a.x = 0x1000;
        a.y = 0;
        a.z = 0;
    }
    e->ax1.x = FX_Mul(b.y, a.z) - FX_Mul(b.z, a.y);
    e->ax1.y = FX_Mul(b.z, a.x) - FX_Mul(b.x, a.z);
    e->ax1.z = FX_Mul(b.x, a.y) - FX_Mul(b.y, a.x);
    e->ax2.x = FX_Mul(b.y, e->ax1.z) - FX_Mul(b.z, e->ax1.y);
    e->ax2.y = FX_Mul(b.z, e->ax1.x) - FX_Mul(b.x, e->ax1.z);
    e->ax2.z = FX_Mul(b.x, e->ax1.y) - FX_Mul(b.y, e->ax1.x);
    func_01ffc5c0(&e->ax1, &e->ax1);
    func_01ffc5c0(&e->ax2, &e->ax2);
}

extern "C" void func_020fd6c0(VecFx32 *out, const VecFx32 *in, E *e) {
    VecFx16 c;
    func_01ffc8bc(&e->ax1, &e->ax2, &c);
    func_01ffc5c0(&c, &c);
    out->x = FX_Mul(in->z, c.x) + (FX_Mul(in->x, e->ax1.x) + FX_Mul(in->y, e->ax2.x));
    out->y = FX_Mul(in->z, c.y) + (FX_Mul(in->x, e->ax1.y) + FX_Mul(in->y, e->ax2.y));
    out->z = FX_Mul(in->z, c.z) + (FX_Mul(in->x, e->ax1.z) + FX_Mul(in->y, e->ax2.z));
}

extern "C" void func_020fc984(E *e, PList *freeList) {
    Res *res = e->res;
    Hdr *h = res->hdr;
    s32 i;
    s32 sum = h->rate + e->phase;
    e->phase = sum & 0xfff;
    s32 count = sum >> 12;
    u32 t = h->f.type;
    if (t == 2 || t == 3 || (u32)(t - 5) <= 4) {
        func_020fd820(e);
    }
    i = 0;
    if (count <= 0) {
        return;
    }
    s32 sa, sb;
    s32 ang = 0;
    do {
        P *p = func_020fe35c(freeList);
        if (p == 0) {
            return;
        }
        func_020fe3a0(&e->list, p);
        switch (h->f.type) {
        case 0:
            p->pos.x = p->pos.y = p->pos.z = 0;
            break;
        case 1:
            func_020fe448(&p->pos);
            p->pos.x = FX_Mul(p->pos.x, e->radius);
            p->pos.y = FX_Mul(p->pos.y, e->radius);
            p->pos.z = FX_Mul(p->pos.z, e->radius);
            break;
        case 2: {
            VecFx32 v;
            func_020fe3ec(&v);
            v.x = FX_Mul(v.x, e->radius);
            v.y = FX_Mul(v.y, e->radius);
            v.z = 0;
            func_020fd6c0(&p->pos, &v, e);
            break;
        }
        case 3: {
            VecFx32 v;
            s32 q = ang / count;
            ang += 0x10000;
            v.x = FX_Mul(SIN_IDX(q), e->radius);
            v.y = FX_Mul(COS_IDX(q), e->radius);
            v.z = 0;
            func_020fd6c0(&p->pos, &v, e);
            break;
        }
        case 4: {
            func_020fe448(&p->pos);
            LCG();
            p->pos.x = FX_Mul(FX_Mul(p->pos.x, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            LCG();
            p->pos.y = FX_Mul(FX_Mul(p->pos.y, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            LCG();
            p->pos.z = FX_Mul(FX_Mul(p->pos.z, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            break;
        }
        case 5: {
            VecFx32 v;
            func_020fe3ec(&v);
            LCG();
            v.x = FX_Mul(FX_Mul(v.x, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            LCG();
            v.y = FX_Mul(FX_Mul(v.y, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            func_020fd6c0(&p->pos, &v, e);
            break;
        }
        case 8: {
            VecFx16 c;
            VecFx32 w;
            func_020fe448(&p->pos);
            func_01ffc8bc(&e->ax1, &e->ax2, &c);
            w.x = c.x;
            w.y = c.y;
            w.z = c.z;
            if (func_01ffca14(&w, &p->pos) <= 0) {
                p->pos.x = -p->pos.x;
                p->pos.y = -p->pos.y;
                p->pos.z = -p->pos.z;
            }
            p->pos.x = FX_Mul(p->pos.x, e->radius);
            p->pos.y = FX_Mul(p->pos.y, e->radius);
            p->pos.z = FX_Mul(p->pos.z, e->radius);
            break;
        }
        case 9: {
            VecFx16 c;
            VecFx32 w;
            func_020fe448(&p->pos);
            func_01ffc8bc(&e->ax1, &e->ax2, &c);
            w.x = c.x;
            w.y = c.y;
            w.z = c.z;
            if (func_01ffca14(&w, &p->pos) < 0) {
                p->pos.x = -p->pos.x;
                p->pos.y = -p->pos.y;
                p->pos.z = -p->pos.z;
            }
            LCG();
            p->pos.x = FX_Mul(FX_Mul(p->pos.x, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 9) + 0x800);
            LCG();
            p->pos.y = FX_Mul(FX_Mul(p->pos.y, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 9) + 0x800);
            LCG();
            p->pos.z = FX_Mul(FX_Mul(p->pos.z, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 9) + 0x800);
            break;
        }
        case 6: {
            VecFx32 v;
            func_020fe3ec(&p->vel);
            v.x = FX_Mul(p->vel.x, e->radius);
            v.y = FX_Mul(p->vel.y, e->radius);
            LCG();
            v.z = (e->len * (s32)(data_021f5c3c >> 23) - (e->len << 8)) >> 8;
            func_020fd6c0(&p->pos, &v, e);
            break;
        }
        case 7: {
            VecFx32 v;
            func_020fe3ec(&p->vel);
            LCG();
            v.x = FX_Mul(FX_Mul(p->vel.x, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            LCG();
            v.y = FX_Mul(FX_Mul(p->vel.y, e->radius), ((((s32)(data_021f5c3c >> 23) << 12) - 0x100000) >> 8));
            LCG();
            v.z = (e->len * (s32)(data_021f5c3c >> 23) - (e->len << 8)) >> 8;
            func_020fd6c0(&p->pos, &v, e);
            break;
        }
        }
        LCG();
        sa = (e->w4c * (h->b3e + 255 - ((h->b3e * (s32)(data_021f5c3c >> 24)) >> 7))) >> 8;
        LCG();
        sb = (e->w50 * (h->b3e + 255 - ((h->b3e * (s32)(data_021f5c3c >> 24)) >> 7))) >> 8;
        VecFx32 dir;
        if (h->f.type == 6) {
            VecFx32 w;
            w.x = FX_Mul(p->vel.x, e->ax1.x) + FX_Mul(p->vel.y, e->ax2.x);
            w.y = FX_Mul(p->vel.x, e->ax1.y) + FX_Mul(p->vel.y, e->ax2.y);
            w.z = FX_Mul(p->vel.x, e->ax1.z) + FX_Mul(p->vel.y, e->ax2.z);
            func_01ffc714(&w, &dir);
        } else if (p->pos.x == 0 && p->pos.y == 0 && p->pos.z == 0) {
            func_020fe448(&dir);
        } else {
            func_01ffc714(&p->pos, &dir);
        }
        V3Arr *src = (V3Arr *)&e->pos;
        V3Arr *dst = (V3Arr *)&p->epos;
        p->vel.x = FX_Mul(dir.x, sa) + FX_Mul(e->dir.x, sb);
        p->vel.y = FX_Mul(dir.y, sa) + FX_Mul(e->dir.y, sb);
        p->vel.z = FX_Mul(dir.z, sa) + FX_Mul(e->dir.z, sb);
        *dst = *src;
        LCG();
        p->w30 = (e->w54 * (h->b3c + 255 - ((h->b3c * (s32)(data_021f5c3c >> 24)) >> 7))) >> 8;
        p->s34 = 0x1000;
        if (h->f.f9 && res->p8->b0) {
            LCG();
            u32 r = data_021f5c3c >> 20;
            u16 cols[3];
            Tex *tx = res->p8;
            cols[0] = tx->c0;
            cols[1] = h->col;
            cols[2] = tx->c1;
            p->col = cols[r % 3];
        } else {
            p->col = h->col;
        }
        p->fl.col = e->b69;
        p->fl.alpha = 31;
        if (h->f.f13) {
            LCG();
            p->rot0 = data_021f5c3c;
        } else {
            p->rot0 = 0;
        }
        if (!h->f.f12) {
            p->rot1 = 0;
        } else {
            LCG();
            s32 d = h->s36 - h->s34;
            s32 r = data_021f5c3c >> 20;
            p->rot1 = (u32)(d * r + (h->s34 << 12)) >> 12;
        }
        LCG();
        p->life = ((e->h58 * (255 - ((h->b3d * (s32)(data_021f5c3c >> 24)) >> 8))) >> 8) + 1;
        p->age = 0;
        if (h->f.f11 && res->p10->x.bf.f16) {
            LCG();
            Tab *tb = res->p10;
            p->b2c = tb->v[(data_021f5c3c >> 20) % tb->x.b.n];
        } else if (h->f.f11 && !res->p10->x.bf.f16) {
            p->b2c = res->p10->v[0];
        } else {
            p->b2c = h->b43;
        }
        p->h28 = 0xffff / res->hdr->b44;
        p->h2a = 0xffff / p->life;
        p->b2d = 0;
        if (h->f.f20) {
            LCG();
            p->b2d = data_021f5c3c >> 24;
        }
        i++;
    } while (i < count);
}
