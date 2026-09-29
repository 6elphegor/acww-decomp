#include "types.h"

inline void *operator new(unsigned long, void *p) {
    return p;
}

struct Unk_0204e858_Vec {
    s32 x, y, z;
};

struct Unk_0204e858_Cell {
    u8 pad_00[0x24];
    u16 *unk_24;
};

struct Unk_0204e858_Grid {
    Unk_0204e858_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0204ee94 {
    u32 unk_00;
    u32 unk_04[2];
    u32 unk_0c;
    Unk_0204ee94();
};

struct Unk_0204eeb4_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
    u32 unk_08;
};

extern Unk_0204eeb4_Ent data_021c47fc[];

static inline Unk_0204e858_Cell *Unk_0204e858_GetCell(Unk_0204e858_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04 && y < g->unk_08 && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04 + x];
    }
    return NULL;
}

static inline BOOL Unk_0204e8b0_Bit(u16 *m, u32 x, u32 y) {
    BOOL r = FALSE;
    if (x >= 16 || y >= 16) {
    } else {
        r = TRUE;
    }
    if (r) {
        if (x < 16) {
            u32 v = m[y];
            r = TRUE;
            if ((v & (r << x)) != 0) {
                return r;
            }
        }
        r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

namespace Unk_0204eba0_Ns {
extern "C" u16 *func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
}

namespace Unk_0204eee4_Ns {
extern "C" s32 func_0204efe4(Unk_0204eeb4_Ent *e);
}

extern "C" {
void func_0204ee20(s32 *a, s32 *c, Unk_0204e858_Vec *v);
void func_0204ee38(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v);
void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
void func_0204ed8c(Unk_0204e858_Vec *v, s32 x, s32 z);
BOOL func_0204f0f4(u8 v);
void *func_020e8618(void *heap, u32 size);
void func_0206d49c();
void func_0204efe4(Unk_0204eeb4_Ent *e);
void func_0204f010(Unk_0204eeb4_Ent *e, u32 id);
void func_0204f044(u32 id);
void func_0204f04c(u32 id);
void func_0204f054(void *p, u32 id);
void func_02063d00(u32 id);
void func_02063d0c(u32 id);
void *func_0211a49c(void *p, s32 v, u32 n);
void func_0211a6c0(void *a, void *b);
s32 func_02037478(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 func_02037494(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 func_020374b0(Unk_0204e858_Cell *c, s32 a);
s32 func_020374cc(Unk_0204e858_Cell *c, s32 a);
s32 func_020374e8(Unk_0204e858_Cell *c);
s32 func_020374f4(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, s32 e, s32 f);
s32 func_02037558(Unk_0204e858_Cell *c, s32 a, s32 b, u8 d);
void *func_02037590(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, u8 e);
void func_0209cfb8(void *p);
void func_0209cf18(void *p);
u8 func_0204f084(u8 r);
u32 func_0204f100(u32 r);
void func_0204f178(void *a, void *b, s32 c, u32 d, u32 e);

s32 func_0204e8b0(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 func_0204e938(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 func_0204e99c(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
void *func_0204eb5c(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);

s32 func_0204e858(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    func_0204ee20(a, c, v);
    return func_0204e8b0(g, a[0], a[1], c[0], c[1]);
}

s32 func_0204e88c(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e8b0(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

s32 func_0204e8b0(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    BOOL r = FALSE;
    if (cell != NULL && cell->unk_24 != NULL) {
        r = Unk_0204e8b0_Bit(cell->unk_24, lx, ly);
    }
    return r;
}

s32 func_0204e914(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e938(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

s32 func_0204e938(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_02037478(cell, lx, ly);
    }
    return r;
}

s32 func_0204e978(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e99c(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

s32 func_0204e99c(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_02037494(cell, lx, ly);
    }
    return r;
}

BOOL func_0204e9dc(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL) {
                if (filter == 0 || func_020374b0(cell, filter) != 0) {
                    if (func_020374f4(cell, a3, p4, p5, p6, p8) != 0) {
                        *outx = x;
                        *outz = y;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL func_0204ea88(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && func_020374cc(cell, filter) != 0) {
                if (func_020374f4(cell, a3, p4, p5, p6, p8) != 0) {
                    *outx = x;
                    *outz = y;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void *func_0204eb30(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204eb5c(g, a, hx, hz, x - (hx << 4), z - (hz << 4), d);
}

void *func_0204eb5c(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    void *r = NULL;
    if (cell != NULL) {
        r = func_02037590(cell, a, lx, ly, d);
    }
    return r;
}

u16 *func_0204eba0(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v, s32 layer) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    func_0204ee20(a, c, v);
    return Unk_0204eba0_Ns::func_0204ebd8(g, a[0], a[1], c[0], c[1], layer);
}

void func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        func_02037558(cell, lx, ly, layer);
    }
}

void *func_0204ec14(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_020374cc(cell, a);
    }
    return (void *)r;
}

s32 func_0204ec50(Unk_0204e858_Grid *g, s32 hx, s32 hy) {
    s32 r = 0;
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        r = func_020374e8(cell);
    }
    return r;
}

Unk_0204e858_Cell *func_0204ec8c(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && func_020374b0(cell, filter) != 0) {
                return cell;
            }
        }
    }
    return NULL;
}

Unk_0204e858_Cell *func_0204ecfc(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    if (filter != 0) {
        u32 *sz = &g->unk_04;
        s32 w = sz[0];
        s32 h = sz[1];
        s32 x0 = 0;
        Unk_0204e858_Cell *nullc = NULL;
        for (y = 0; y < h; y++) {
            for (x = x0; x < w; x++) {
                Unk_0204e858_Cell *cell;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    cell = &g->unk_00[y * g->unk_04 + x];
                } else {
                    cell = nullc;
                }
                if (cell != NULL && func_020374cc(cell, filter) != 0) {
                    return cell;
                }
            }
        }
    }
    return NULL;
}

void func_0204ed70(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    v->x = a << 17;
    v->z = b << 17;
    v->x = v->x + (c << 13);
    v->z = v->z + (d << 13);
}

void func_0204ed8c(Unk_0204e858_Vec *v, s32 x, s32 z) {
    v->x = (x << 13) + 0x1000;
    v->z = (z << 13) + 0x1000;
    v->y = 0;
}

void func_0204eda4(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, z = 0;
    func_0204edf8(&x, &z, a, b, c, d);
    func_0204ed8c(v, x, z);
}

void func_0204edd8(Unk_0204e858_Vec *dst, Unk_0204e858_Vec *src) {
    func_0204ed8c(dst, src->x >> 13, src->z >> 13);
    dst->y = src->y;
}

void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d) {
    *ox = (a << 4) + c;
    *oz = (b << 4) + d;
}

void func_0204ee10(s32 *ox, s32 *oz, Unk_0204e858_Vec *v) {
    *ox = v->x >> 13;
    *oz = v->z >> 13;
}

void func_0204ee20(s32 *a, s32 *c, Unk_0204e858_Vec *v) {
    func_0204ee38(a, a + 1, c, c + 1, v);
}

void func_0204ee38(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v) {
    *ax = v->x >> 17;
    *az = v->z >> 17;
    *cx = (v->x >> 13) & 15;
    *cz = (v->z >> 13) & 15;
}

Unk_0204ee94 *func_0204ee64(s32 n, void *heap) {
    Unk_0204ee94 *p = (Unk_0204ee94 *)func_020e8618(heap, n * 16);
    if (p != NULL) {
        for (s32 i = 0; i < n; i++) {
            new (&p[i]) Unk_0204ee94;
        }
    }
    return p;
}

Unk_0204ee94::Unk_0204ee94() {
    u32 *p = unk_04;
    unk_00 = 0x102a;
    for (s32 i = 0; i < 2; i++) {
        *p++ = 0;
    }
    unk_0c = 0;
}

void func_0204eeb0() {}

void func_0204eeb4() {
    for (s32 i = 0; (u32)i < 12; i++) {
        data_021c47fc[i].unk_00 = 0xff;
        data_021c47fc[i].unk_01 = 0;
        data_021c47fc[i].unk_02 = 0;
        data_021c47fc[i].unk_04 = 0;
        data_021c47fc[i].unk_08 = 0;
    }
}

void func_0204eee4(u32 id) {
    Unk_0204eeb4_Ent *e = NULL;
    for (s32 i = 0; (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *c = &data_021c47fc[i];
        if (c->unk_00 == id) {
            e = c;
            if (c->unk_01 != 0) {
                c->unk_01--;
            }
        }
    }
    if (e == NULL) {
        func_0206d49c();
    }
    if (e->unk_01 == 0) {
        Unk_0204eee4_Ns::func_0204efe4(e);
    }
}

void func_0204ef2c(u32 id) {
    Unk_0204eeb4_Ent *free = NULL;
    s32 i;
    u32 lo, hi;
    u8 buf[8];
    u32 info[11];
    for (i = 0; (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *e = &data_021c47fc[i];
        if (e->unk_00 == id) {
            e->unk_01++;
            return;
        }
        if (((volatile Unk_0204eeb4_Ent *)e)->unk_00 == 0xff && free == NULL) {
            free = e;
        }
    }
    func_0204f054(info, id);
    func_0211a6c0(buf, info);
    for (i = 0, lo = info[1], hi = lo + (info[2] + info[3]); (u32)i < 12; i++) {
        Unk_0204eeb4_Ent *e = &data_021c47fc[i];
        if (e->unk_00 != id && ((volatile Unk_0204eeb4_Ent *)e)->unk_00 != 0xff && e->unk_04 + e->unk_08 > lo && hi > e->unk_04) {
            if (e->unk_01 == 0) {
                func_0204efe4(e);
                if (free == NULL) {
                    free = e;
                }
            } else {
                func_0206d49c();
            }
        }
    }
    if (free != NULL) {
        func_0204f010(free, id);
    }
}

void func_0204efe4(Unk_0204eeb4_Ent *e) {
    u32 buf[11];
    u32 id = e->unk_00;
    func_0204f044(id);
    func_0204f054(buf, id);
    e->unk_00 = 0xff;
    e->unk_01 = 0;
    e->unk_02 = 0;
    e->unk_04 = 0;
    e->unk_08 = 0;
}

void func_0204f010(Unk_0204eeb4_Ent *e, u32 id) {
    u32 buf[11];
    func_0204f054(buf, id);
    func_0204f04c(id);
    e->unk_00 = id;
    e->unk_01 = 1;
    e->unk_02 = 0;
    e->unk_04 = buf[1];
    e->unk_08 = buf[2] + buf[3];
}

void func_0204f044(u32 id) {
    func_02063d00(id);
}

void func_0204f04c(u32 id) {
    func_02063d0c(id);
}

void func_0204f054(void *p, u32 id) {
    func_0211a49c(p, 0, id);
}

s32 func_0204f060(s32 r) {
    if (r < 0 || r >= 0x38) {
        return 0;
    }
    if (r >= 0x23) {
        return 3;
    }
    if (r >= 9 && r <= 11) {
        return 2;
    }
    return 1;
}

u8 func_0204f084(u8 x) {
    u8 t[4];
    if (x >= 1 && x <= 7) {
        return x;
    }
    if (x == 8) {
        func_0209cfb8(&t[0]);
        if (func_0204f0f4(t[0]) != 0) {
            x = x + 1;
        }
        return x;
    }
    if (x == 9) {
        func_0209cfb8(&t[2]);
        if (func_0204f0f4(t[2]) == 0) {
            return x + 1;
        }
        return x + 2;
    }
    if (x >= 10 && x <= 12) {
        return x + 2;
    }
    return 1;
}

BOOL func_0204f0f4(u8 v) {
    if (v > 15) {
        return TRUE;
    }
    return FALSE;
}

u32 func_0204f100(u32 r) {
    u32 v = 0;
    if ((r >= 4 && r < 9) || (r >= 16 && r < 21)) {
        v = 0;
    } else if (r >= 9 && r < 16) {
        v = 1;
    } else if ((r >= 21 && r <= 24) || r < 4) {
        v = 2;
    } else if (r >= 4) {
    }
    return v;
}

void func_0204f134(void *a, void *b, s32 c) {
    u8 buf[4];
    u32 e;
    u8 x, y;
    func_0209cfb8(buf);
    x = buf[1];
    func_0209cf18(&buf[2]);
    y = buf[3];
    e = func_0204f084(x);
    func_0204f178(a, b, c, e, func_0204f100(y));
}
}
