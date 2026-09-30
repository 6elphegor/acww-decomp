#include "types.h"

struct Unk_ov003_02220128_Vec3 {
    s32 x, y, z;
};

struct Unk_ov003_02220128_Pos {
    s32 a, b;
};

struct Unk_ov003_02257e9c_Rec {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[4];
    s32 unk_48;
    u8 pad_4c[8];
    Unk_ov003_02220128_Vec3 unk_54;
    Unk_ov003_02220128_Vec3 unk_60;
    Unk_ov003_02220128_Vec3 unk_6c;
    u8 pad_78[4];
    s32 unk_7c;
    u8 pad_80[0x10];
    s32 unk_90;
    u8 pad_94[0x10];
};

struct Unk_ov003_0225812c_Rec {
    u8 pad_000[0x7f];
    u8 unk_7f;
    u8 pad_080[0x208 - 0x80];
    Unk_ov003_02220128_Pos unk_208;
    u8 pad_210[0x24c - 0x210];
};

struct Unk_ov003_02220844_Obj {
    u8 pad_000[0x7e];
    u8 unk_7e;
    u8 unk_7f;
    s32 unk_80;
    u8 pad_84[0x12c - 0x84];
    s32 unk_12c;
    s32 unk_130;
    s32 unk_134;
    s16 unk_138;
    u8 pad_13a[0x1fc - 0x13a];
    u8 unk_1fc;
    u8 pad_1fd;
    u8 unk_1fe;
    u8 unk_1ff;
    u8 unk_200;
    u8 pad_201[0x208 - 0x201];
    Unk_ov003_02220128_Pos unk_208;
    u8 pad_210[0x211 - 0x210];
    u8 unk_211;
    u16 unk_212;
    u8 pad_214[0x218 - 0x214];
    Unk_ov003_02220128_Vec3 unk_218;
    u8 pad_224[0x244 - 0x224];
    s32 unk_244;
};

struct Unk_ov003_0222069c_Cell {
    u8 pad[0x28];
};

struct Unk_ov003_0222069c_Grid {
    Unk_ov003_0222069c_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

extern "C" {
extern Unk_ov003_02257e9c_Rec data_ov003_02257e9c[];
extern Unk_ov003_0225812c_Rec data_ov003_0225812c[];
extern void *data_ov003_02234778;
extern u8 data_020ca314[];
extern u32 data_021c3070;
extern Unk_ov003_02220128_Vec3 data_021c309c;
extern Unk_ov003_0222069c_Grid *data_021c47c4;

BOOL func_02054c2c(void *a, s32 b, void *c);
void func_0209c25c(s32 a, void *b);
s32 func_0209c348();
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
BOOL func_02054800(void *o, s32 t);
void func_02054720(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02054710(void *o);
u8 *func_02095204(s32 n);
s32 func_02002bdc(Unk_ov003_02220128_Vec3 *a, Unk_ov003_02220128_Vec3 *b);
void func_ov003_0222316c(void *rec, s32 a, s32 b);
BOOL func_02063b8c(s32 a);
BOOL func_020e7500(void *a);
s32 func_020b8fe8();
void func_0204edd8(void *a, void *b);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void func_0204ed8c(void *a, s32 x, s32 y);
BOOL func_0204f134(s32 *a, s32 *b, s32 c);
s32 func_020312a8(s32 x, s32 y);
s32 func_020312ec(s32 x, s32 y);
u32 func_020374e8(void *c);
s32 func_020375bc(void *c);
long long func_020e9600(void *a, s32 b);
void func_020339bc(void *o, void *p, s32 a, s32 b);
void func_02033988(void *o);
s32 func_01ffcb0c(s32 a, s32 b);

s32 func_ov003_022202ec(s32 a, u16 b);
BOOL func_ov003_02220300(s32 a, s32 b, s32 c);
BOOL func_ov003_0222034c(s32 *a, s32 *b, s32 c, s32 d, s32 e);
BOOL func_ov003_022203e0(void *self);
BOOL func_ov003_022203f8(void *self, Unk_ov003_02220844_Obj *e, s32 id);
BOOL func_ov003_02220460(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, Unk_ov003_02220844_Obj *e);
BOOL func_ov003_0222069c(void *self, u8 *out, s32 *cnt, s32 mode);

BOOL func_ov003_02220128(u8 *self, void *p, s32 q) {
    BOOL r = FALSE;
    u8 *o = self + 0x144;
    func_02054c2c(o, 0x66736477, data_ov003_02234778);
    if (p == NULL) {
        return r;
    }
    func_0209c25c(q, self + 0x7c);
    s32 t = func_0209c348();
    s32 u = func_021065f8(func_021065dc((s32)p), r);
    if (func_02054800(o, t)) {
        func_02054720(o, u, r, 0x1000, 1, r);
        func_02054710(o);
        r = TRUE;
    }
    return r;
}

void func_ov003_022201ac(u8 *self, s32 v) {
    *(s32 *)(self + 0x1f0) = (v << 12) >> 4;
}

BOOL func_ov003_022201bc(s32 idx, u16 id0, Unk_ov003_02220128_Vec3 *pos) {
    volatile u16 id = id0;
    BOOL ok = FALSE;
    u32 v0 = id;
    u32 v1 = id;
    if (v1 >= 0x12e8 && v0 <= 0x131f) {
        ok = TRUE;
    }
    if (!ok) {
        return FALSE;
    }
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02257e9c_Rec *rec = &data_ov003_02257e9c[idx];
    if (rec->unk_40 != 0) {
        return FALSE;
    }
    u8 *ob = func_02095204(idx);
    if (ob == NULL) {
        return FALSE;
    }
    Unk_ov003_02220128_Vec3 v;
    Unk_ov003_02220128_Vec3 *ps = (Unk_ov003_02220128_Vec3 *)(ob + 0x5c);
    v = *ps;
    s32 r6 = (u16)id - 0x12e8;
    rec->unk_90 = r6;
    func_ov003_0222316c(rec, func_02002bdc(&v, pos), r6);
    Unk_ov003_02220128_Vec3 *pd = &rec->unk_60;
    *pd = v;
    pd = &rec->unk_6c;
    *pd = *pos;
    pd = &rec->unk_54;
    *pd = v;
    rec->unk_7c = 0;
    rec->unk_48 = 4;
    rec->unk_40 = 1;
    return TRUE;
}

BOOL func_ov003_02220290(Unk_ov003_02220128_Vec3 *out, s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02257e9c_Rec *rec = &data_ov003_02257e9c[idx];
    if (rec->unk_48 == 1) {
        Unk_ov003_02220128_Vec3 *pv = &rec->unk_60;
        *out = *pv;
        r = TRUE;
    }
    return r;
}

s32 func_ov003_022202cc(s32 a, u16 b) {
    s32 r = func_ov003_022202ec(a, b);
    if (func_02063b8c(2) == 0) {
        r *= -1;
    }
    return r;
}

s32 func_ov003_022202ec(s32 a, u16 b) {
    return a + func_02063b8c(b - a);
}

BOOL func_ov003_02220300(s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    a = a - b;
    if (a < 0) {
        a = -a;
    }
    b = c - b;
    if (b < 0) {
        b = -b;
    }
    if (a >= b) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov003_0222031c(s32 *a, s32 *b, s32 *c) {
    if (func_ov003_02220300(a[0], b[0], c[0])) {
        if (func_ov003_02220300(a[2], b[2], c[2])) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_ov003_0222034c(s32 *a, s32 *b, s32 c, s32 d, s32 e) {
    BOOL r = FALSE;
    s32 dx = b[0] - a[0];
    if (dx < 0) {
        dx = -dx;
    }
    if (dx > c) {
        return FALSE;
    }
    s32 az = a[2];
    s32 bz = b[2];
    s32 dz = bz - az;
    if (dz >= 0) {
        if (dz <= d) {
            r = TRUE;
        }
    } else {
        if (az - bz <= e) {
            r = TRUE;
        }
    }
    return r;
}

void func_ov003_02220388(Unk_ov003_02220844_Obj *self) {
    if (func_020e7500(&self->unk_212) == 0) {
        if ((u32)self->unk_80 <= 1) {
            self->unk_80 = 0;
            u32 b = self->unk_211;
            if (b < 3) {
                self->unk_1fc = 3;
            } else if (b < 6) {
                self->unk_1fc = 4;
            }
        }
        self->unk_212 = 0x960;
    }
}

BOOL func_ov003_022203e0(void *self) {
    BOOL r = FALSE;
    u32 t = func_020b8fe8() - 1;
    if (t <= 1) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov003_022203f8_Chk(void *s, s32 v) {
    if ((u32)(v - 0x34) <= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022203f8(void *self, Unk_ov003_02220844_Obj *e, s32 id) {
    BOOL ok = Unk_ov003_022203f8_Chk(self, id);
    if (ok) {
        if (func_02095204(4) == NULL) {
            return FALSE;
        }
        s32 i;
        Unk_ov003_0225812c_Rec *p;
        p = &data_ov003_0225812c[3];
        i = 3;
        for (; i < 6; p++, i++) {
            if ((void *)e != (void *)p && p->unk_7f != 0) {
                return FALSE;
            }
        }
    } else if (id == 0x37) {
        if (func_ov003_022203e0(self) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov003_02220460(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, Unk_ov003_02220844_Obj *e) {
    s32 z = 0;
    s32 cnt = z;
    s32 sx, sz;
    u8 grid[0x20];
    Unk_ov003_02220128_Vec3 v44;
    Unk_ov003_02220128_Vec3 v50;
    Unk_ov003_02220128_Vec3 v5c;
    u8 cand[0x204];
    s32 x, y;
    if (data_021c3070 == 0) {
        return z;
    }
    v44 = data_021c309c;
    func_0204edd8(&v50, &v44);
    if (func_ov003_0222069c(self, grid, &cnt, mode) == 0) {
        return z;
    }
    s32 k = func_ov003_022202ec(z, (u16)cnt);
    s32 k2 = k * 2;
    *a3 = ((s8 *)grid)[k2];
    *a4 = ((s8 *)&grid[1])[k2];
    s32 ax = *a3;
    s32 az = *a4;
    if (flag == 0) {
        Unk_ov003_0225812c_Rec *p;
        s32 i;
        p = data_ov003_0225812c;
        for (i = z; i < 3; p++, i++) {
            if ((void *)e != (void *)p) {
                Unk_ov003_02220128_Pos *q = &p->unk_208;
                if (ax == p->unk_208.a && az == q->b) {
                    return FALSE;
                }
            }
        }
    } else if (flag == 1) {
        Unk_ov003_0225812c_Rec *p;
        s32 i;
        p = &data_ov003_0225812c[3];
        for (i = 3; i < 6; p++, i++) {
            if ((void *)e != (void *)p) {
                Unk_ov003_02220128_Pos *q = &p->unk_208;
                if (ax == p->unk_208.a && az == q->b) {
                    return FALSE;
                }
            }
        }
    }
    func_0204edf8(&sx, &sz, ax, az, 0, 0);
    s32 xlim = sx + 0x10;
    s32 zlim = sz + 0x10;
    for (x = sx; x < xlim; x++) {
        for (y = sz; y < zlim; y++) {
            switch (mode) {
            case 5:
            case 6:
                if (func_020312a8(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 0:
            case 1:
                if (func_020312a8(x, y) == 2) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 2:
                if (y < sz + 3) {
                    if (func_020312a8(x, y) == 2) {
                        cand[z * 2] = x;
                        (&cand[z * 2])[1] = y;
                        z++;
                    }
                }
                break;
            case 3:
                if (func_020312ec(x, y) != 0) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 4:
                if (func_020312a8(x, y) == 2 || func_020312a8(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            }
        }
    }
    if (z == 0) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    s32 kk = (s16)func_ov003_022202ec(0, (u16)z) * 2;
    s8 *cq = (s8 *)&cand[1];
    s32 rx, ry;
    ry = cq[kk];
    rx = ((s8 *)cand)[kk];
    func_0204ed8c(&v5c, rx, ry);
    if (func_ov003_0222034c((s32 *)&v5c, (s32 *)&v50, 0xa000, 0x10000, 0xa000)) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    *ox = rx;
    *oz = ry;
    return TRUE;
}

BOOL func_ov003_0222069c(void *self, u8 *out, s32 *cnt, s32 mode) {
    BOOL result = FALSE;
    Unk_ov003_0222069c_Grid *g = data_021c47c4;
    if (g != NULL) {
        s32 x, y;
        for (x = 1; x < (s32)g->unk_08 - 1; x++) {
            for (y = 1; y < (s32)g->unk_04 - 1; y++) {
                Unk_ov003_0222069c_Cell *c;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    c = &g->unk_00[y * g->unk_04 + x];
                } else {
                    c = (Unk_ov003_0222069c_Cell *)result;
                }
                if (c == NULL) {
                    continue;
                }
                switch (mode) {
                case 6:
                    if ((func_020374e8(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 0:
                    if ((func_020374e8(c) & 0x7f000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 1:
                    if ((func_020374e8(c) & 0x100) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 2:
                    if ((func_020374e8(c) & 0x80000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 3:
                    if (func_020375bc(c) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 4: {
                    u32 t = func_020374e8(c);
                    if ((t & 0x7f000) != 0 && (t & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
                case 5:
                    if ((func_020374e8(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
            }
        }
    }
    if (*cnt > 0) {
        result = TRUE;
    }
    return result;
}

BOOL func_ov003_02220844(void *self, Unk_ov003_02220844_Obj *e, s32 flag) {
    BOOL r = FALSE;
    s32 a = -1, b = -1;
    Unk_ov003_02220128_Pos cd;
    cd.a = -1;
    cd.b = -1;
    s32 x, y;
    Unk_ov003_02220128_Vec3 v;
    s32 fl;
    switch (flag) {
    case 0:
        fl = 0;
        break;
    default:
        fl = 1;
        break;
    }
    if (func_0204f134(&x, &y, fl)) {
        if (func_ov003_02220460(self, &a, &b, &cd.a, &cd.b, y, flag, e)) {
            if (func_ov003_022203f8(self, e, x)) {
                func_0204ed8c(&v, a, b);
                v.y = 0xffffeccd;
                s32 t = x;
                e->unk_7e = t;
                e->unk_7f = (u32)(t - 0x34) <= 2 ? 1 : 0;
                e->unk_1fe = y;
                e->unk_1ff = data_020ca314[x * 6];
                e->unk_138 = -0x8000;
                e->unk_12c = v.x;
                e->unk_130 = v.y;
                e->unk_134 = v.z;
                e->unk_1fc = flag;
                r = TRUE;
                e->unk_80 = r;
                e->unk_200 = 0;
                Unk_ov003_02220128_Vec3 *pv = &e->unk_218;
                *pv = v;
                s32 db = cd.b;
                Unk_ov003_02220128_Pos *pp = &e->unk_208;
                pp->a = cd.a;
                pp->b = db;
                e->unk_244 = -1;
            }
        } else if (flag == 0) {
            e->unk_1fc = 3;
        } else if (flag == 1) {
            e->unk_1fc = 4;
        }
    } else if (flag == 0) {
        e->unk_1fc = 5;
    } else if (flag == 1) {
        e->unk_1fc = 6;
    }
    return r;
}

BOOL func_ov003_02220994(void *self, s32 b, s32 idx) {
    u8 *o = func_02095204(idx);
    if (o == NULL) {
        return FALSE;
    }
    if (func_020e9600(o + 0x5c, b) <= 0x135c3) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022209c8(s32 idx) {
    BOOL r = FALSE;
    u8 *o = func_02095204(idx);
    if (o != NULL) {
        if (*(s32 *)(o + 0x98) > 0x548) {
            r = TRUE;
        }
    }
    return r;
}

struct Unk_ov003_022209ec_Buf {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[4];
    s32 unk_2c;
    u8 pad_30[0x14];
    Unk_ov003_022209ec_Buf() {}
    ~Unk_ov003_022209ec_Buf() {}
};

void func_ov003_022209ec(s32 *p, s32 b) {
    Unk_ov003_022209ec_Buf buf;
    func_020339bc(&buf, p, 0, 0);
    p[0] += func_01ffcb0c(b, buf.unk_24);
    p[2] += func_01ffcb0c(b, buf.unk_2c);
    func_02033988(&buf);
}
}
