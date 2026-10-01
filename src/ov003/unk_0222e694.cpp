#include "types.h"
#include "Unk_020d8c7c.h"

// ---- types ----
struct Unk_ov003_0222e734_Chunk {
    u16 bits[16];
    u16 cnt;
};

struct Unk_ov003_0222e734_Pool {
    Unk_ov003_0222e734_Chunk c[4][4];
};

struct Unk_ov003_0222e694_Rec {
    u32 a, b, c;
    u8 d;
    u8 e;
};

struct Unk_ov003_0222e734_Cell {
    u8 pad_00[0x24];
    u16 *unk_24;
};

struct Unk_ov003_0222e734_Grid {
    Unk_ov003_0222e734_Cell *cells;
    u32 w, h;
};

struct Unk_ov003_0222eb10_Fl {
    u16 a : 2;
    u16 b : 2;
    u16 c : 1;
    u16 d : 1;
    u16 e : 1;
    u16 f : 1;
    u16 g : 1;
    u16 h : 1;
    u16 i : 1;
};

struct Unk_ov003_0222eb10_Obj {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[0x2e4 - 0xc];
    u8 unk_2e4;
    u8 pad_2e5[0x374 - 0x2e5];
    Unk_ov003_0222eb10_Fl unk_374;
    u8 pad_376[0x398 - 0x376];
    s32 unk_398;
    s32 unk_39c;
};

struct Unk_ov003_0222ed20_V3 {
    s32 x, y, z;
};

struct Unk_ov003_0222ed20_Sess {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_0222ed20_St {
    Unk_ov003_0222ed20_V3 a;
    u32 pad_0c;
    Unk_ov003_0222ed20_V3 b;
};

struct Unk_ov003_0222ed20_Loc {
    u8 k[3];
    u8 pad;
    u32 w[2];
};

struct Unk_ov003_0222ef10_Cam {
    u8 pad_00[0x110];
    u8 unk_110[8];
    u32 unk_118;
    u8 pad_11c[0x1ca - 0x11c];
    u8 unk_1ca;
    u8 pad_1cb;
    u8 unk_1cc[0xc];
    u8 unk_1d8[0xc];
    s32 unk_1e4;
};

class Unk_ov003_02234f10 : public Unk_020d8c7c {
public:
    Unk_ov003_02234f10();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov003_02234f10();
};

// ---- externs ----
typedef void *(*Unk_ov003_0222e734_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov003_0222e734_Fn, Unk_ov003_0222e734_Fn);
void *__cxa_vec_cleanup(void *, s32, s32, Unk_ov003_0222e734_Fn);
void __register_global_object(void *, Unk_ov003_0222e734_Fn, void *);

extern "C" {
extern u32 data_ov003_0225b468[];
extern u32 data_ov003_0225b46c[];
extern u32 data_ov003_0225b470[];
extern u8 data_ov003_0225b474[];
extern u8 data_ov003_0225b475[];
extern u32 data_ov003_0225b4e8;
extern u8 data_ov003_0225b4ec[];
extern Unk_ov003_0222eb10_Obj *data_ov003_0225b4f8[];
extern Unk_ov003_0222e734_Pool data_ov003_0225b518;
extern Unk_ov003_0222e734_Grid *data_021c47c4;
extern Unk_ov003_0222ed20_Sess *data_020cbb18;
extern u8 data_021ed2e6[];

BOOL func_020a62a0();
BOOL func_02072e44(void *);
BOOL func_02072e88(void *, u32);
s32 func_02076280(s32 a, s32 b, s32 c, s32 d);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void func_0204ee10(s32 *a, s32 *b, void *c);
void func_0204ed8c(void *out, s32 x, s32 z);
void func_0204eda4(Unk_ov003_0222ed20_V3 *out, s32 a, s32 b, s32 c, s32 d);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_02031130(s32 a, s32 b);
BOOL func_020310f8(s32 a, s32 b);
s32 func_02063b8c(s32 n);
void *func_02037558(void *c, u32 i, u32 j, s32 k);
void func_02037590(void *c, u16 *p, u32 a, u32 b, u32 d);
BOOL func_0204b14c(u16 *p);
s32 func_0204b124(u16 *p);
s32 func_020af590(void *o, s32 i, void *a, void *b, void *c, void *d, void *e, void *f);
s32 func_02002cf8(u32 a, u32 b, void *c, u32 d, void *e);
Unk_ov003_0222ed20_St *func_020af3f4();
void func_020af514();
s32 func_020b50bc();
s32 func_020b5184();
BOOL func_020af564(void *o);
void func_0209d498(void *);
void func_0209d164(void *, s32);
void *func_020947f0(u32);
s32 func_0203a6fc(void *a, void *b, void *c, void *d, s32 *e);
s32 func_0203a7b8(void *a, void *b, void *c, s32 *d);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_0203c0b0(void *self, s32 a, s32 b, s32 c);
BOOL func_ov003_022132a0(void *p);
BOOL func_ov003_022132b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);

void func_ov003_0222e964(Unk_ov003_0222e734_Pool *pool, s32 x, s32 y);
s32 func_ov003_0222e998(Unk_ov003_0222e734_Pool *pool);
void func_ov003_0222e9d4(Unk_ov003_0222e734_Pool *pool);
BOOL func_ov003_0222e8e0(Unk_ov003_0222e734_Pool *pool, s32 *ox, s32 *oy);
void *func_ov003_0222e8bc(void *p);
void *func_ov003_0222e8d8(void *p);
void *func_ov003_0222e8dc(void *p);
void func_ov003_0222ea84(Unk_ov003_0222e734_Chunk *c, s32 x, s32 y);
BOOL func_ov003_0222ea64(Unk_ov003_0222e734_Chunk *c, s32 x, s32 y);
BOOL func_ov003_0222ea08(Unk_ov003_0222e734_Chunk *c, s32 *ox, s32 *oy);
void func_ov003_0222eabc(Unk_ov003_0222e734_Chunk *c);
void *func_ov003_0222e72c(void *p);
Unk_ov003_0222eb10_Obj *func_ov003_0222ebb0(u32 id);
void func_ov003_0222ec20(void *self);
void func_ov003_0222ed20(void *self);
BOOL func_ov003_0222e734(void *a, void *b, s32 c, s32 d);
}

// ---- functions ----

extern "C" BOOL func_ov003_0222e694(s32 unused, s32 idx, s32 v, s32 *p, u8 e, s32 f) {
    if (func_020a62a0()) {
        if (func_02072e44(data_020cbb18)) {
            func_02076280(idx + 0x18, (s32)&f, 0, 0);
            s32 off = idx << 4;
            data_ov003_0225b474[off] = v;
            *(u32 *)((u8 *)data_ov003_0225b468 + off) = p[0];
            *(u32 *)((u8 *)data_ov003_0225b46c + off) = p[1];
            *(u32 *)((u8 *)data_ov003_0225b470 + off) = p[2];
            data_ov003_0225b475[off] = e;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222e704() {}
extern "C" void func_ov003_0222e708() {}

extern "C" void func_ov003_0222e70c() {
    __cxa_vec_cleanup(data_ov003_0225b468, 8, 0x10, (Unk_ov003_0222e734_Fn)func_ov003_0222e72c);
}

extern "C" void *func_ov003_0222e72c(void *p) { return p; }
extern "C" void *func_ov003_0222e730(void *p) { return p; }

extern "C" BOOL func_ov003_0222e734(void *a, void *b, s32 c, s32 d) {
    Unk_ov003_0222e734_Grid *g = data_021c47c4;
    if ((data_ov003_0225b4e8 & 1) == 0) {
        __cxa_vec_ctor(&data_ov003_0225b518, 16, 0x22, func_ov003_0222e8dc, func_ov003_0222e8d8);
        __register_global_object(&data_ov003_0225b518, func_ov003_0222e8bc, data_ov003_0225b4ec);
        data_ov003_0225b4e8 |= 1;
    }
    func_ov003_0222e9d4(&data_ov003_0225b518);
    u32 by, bx, ly, lx, k;
    for (by = 1; by < 6; by++) {
        for (bx = 1; bx < 6; bx++) {
            for (ly = 0; ly < 16; ly++) {
                for (lx = 0; lx < 16; lx++) {
                    s32 x, y;
                    func_0204edf8(&x, &y, bx, by, lx, ly);
                    if (!func_02031130(x, y) || !func_020310f8(x, y + 1) || !func_020310f8(x, y + 2)) {
                        func_ov003_0222e964(&data_ov003_0225b518, x, y);
                    } else if (d != 0) {
                        s32 ex = *(volatile s32 *)&x;
                        s32 ey = *(volatile s32 *)&y;
                        s32 hx = ex >> 4;
                        s32 hy = ey >> 4;
                        u16 *cell = func_0204ebd8(g, hx, hy, ex - (hx << 4), ey - (hy << 4), 0);
                        if (cell != 0 && *cell != 0xfff1) {
                            func_ov003_0222e964(&data_ov003_0225b518, x, y);
                        }
                    }
                }
            }
        }
    }
    if (c != 0) {
        s32 px, py;
        func_0204ee10(&px, &py, (void *)c);
        s32 yy, xx;
        for (yy = py - 7; yy <= py + 7; yy++) {
            for (xx = px - 7; xx <= px + 7; xx++) {
                func_ov003_0222e964(&data_ov003_0225b518, xx, yy);
            }
        }
    }
    s32 ox, oy;
    if (func_ov003_0222e8e0(&data_ov003_0225b518, &ox, &oy)) {
        func_0204ed8c(b, ox, oy);
        return TRUE;
    } else if (d != 0) {
        return func_ov003_0222e734(a, b, c, 0);
    }
    return FALSE;
}

extern "C" void *func_ov003_0222e8bc(void *p) {
    __cxa_vec_cleanup(p, 16, 0x22, func_ov003_0222e8d8);
    return p;
}

extern "C" void *func_ov003_0222e8d8(void *p) { return p; }
extern "C" void *func_ov003_0222e8dc(void *p) { return p; }

extern "C" BOOL func_ov003_0222e8e0(Unk_ov003_0222e734_Pool *pool, s32 *ox, s32 *oy) {
    s32 cnt = func_ov003_0222e998(pool);
    if (cnt != 0) {
        s32 r = func_02063b8c(cnt);
        s32 n = 0;
        u32 i, j;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                Unk_ov003_0222e734_Chunk *c = &pool->c[i][j];
                if (c->cnt != 0) {
                    if (r == n) {
                        s32 px, py;
                        if (func_ov003_0222ea08(c, &px, &py)) {
                            *ox = ((j + 1) << 4) + px;
                            *oy = ((i + 1) << 4) + py;
                            return TRUE;
                        }
                        return FALSE;
                    }
                    n++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222e964(Unk_ov003_0222e734_Pool *pool, s32 x, s32 y) {
    func_ov003_0222ea84(&pool->c[((y - 16) >> 4) & 3][((x - 16) >> 4) & 3], x & 15, y & 15);
}

extern "C" s32 func_ov003_0222e998(Unk_ov003_0222e734_Pool *pool) {
    s32 n = 0;
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (pool->c[i][j].cnt != 0) {
                n++;
            }
        }
    }
    return n;
}

extern "C" void func_ov003_0222e9d4(Unk_ov003_0222e734_Pool *pool) {
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            func_ov003_0222eabc(&pool->c[i][j]);
        }
    }
}

extern "C" BOOL func_ov003_0222ea08(Unk_ov003_0222e734_Chunk *c, s32 *ox, s32 *oy) {
    if (c->cnt != 0) {
        s32 r = func_02063b8c(c->cnt);
        s32 n = 0;
        u32 i, j;
        for (i = 0; i < 16; i++) {
            for (j = 0; j < 16; j++) {
                if (!func_ov003_0222ea64(c, j, i)) {
                    if (r == n) {
                        *ox = j;
                        *oy = i;
                        return TRUE;
                    }
                    n++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222ea84(Unk_ov003_0222e734_Chunk *c, s32 x, s32 y) {
    u8 ux = x & 15;
    u8 uy = y & 15;
    if (!func_ov003_0222ea64(c, x, y)) {
        c->bits[uy] |= 1 << ux;
        c->cnt--;
    }
}

extern "C" BOOL func_ov003_0222ea64(Unk_ov003_0222e734_Chunk *c, s32 x, s32 y) {
    s32 v = c->bits[(u8)(y & 15)];
    if ((v >> (u8)(x & 15)) & 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_ov003_0222eabc(Unk_ov003_0222e734_Chunk *c) {
    u32 i;
    for (i = 0; i < 16; i++) {
        c->bits[i] = 0;
    }
    c->cnt = 0x100;
}

extern "C" void *func_ov003_0222ead4(void *self) {
    u32 i;
    for (i = 0; i < 8; i++) {
        Unk_ov003_0222eb10_Obj *p = data_ov003_0225b4f8[i];
        if (p != 0 && p != self && func_ov003_022132a0(p)) {
            return p;
        }
    }
    return 0;
}

extern "C" void *func_ov003_0222eb10(u32 id) {
    Unk_ov003_0222eb10_Obj *o = func_ov003_0222ebb0(id & 1);
    if (o != 0) {
        if (o->unk_39c == 0) {
            if (o->unk_398 == 0) {
                BOOL bit;
                if (o->unk_374.e) {
                    bit = TRUE;
                } else {
                    bit = FALSE;
                }
                if (bit == 0) {
                    if (o->unk_2e4 == 0) {
                        return o;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_ov003_0222eb68(void *self, s32 a, s32 b, s32 c, s32 d) {
    u32 i;
    for (i = 0; i < 8; i++) {
        if (data_ov003_0225b4f8[i] != 0) {
            if (func_ov003_022132b4(data_ov003_0225b4f8[i], (s32)self, a, b, c, d)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" Unk_ov003_0222eb10_Obj *func_ov003_0222ebb0(u32 id) {
    u32 i;
    for (i = 0; i < 8; i++) {
        Unk_ov003_0222eb10_Obj *p = data_ov003_0225b4f8[i];
        if (p != 0 && id == p->unk_08) {
            return p;
        }
    }
    return 0;
}

extern "C" BOOL func_ov003_0222ebdc(Unk_ov003_0222eb10_Obj *p) {
    Unk_ov003_0222eb10_Obj **s = &data_ov003_0225b4f8[p->unk_08 & 7];
    if (*s == p) {
        *s = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0222ec00(Unk_ov003_0222eb10_Obj *p) {
    Unk_ov003_0222eb10_Obj **s = &data_ov003_0225b4f8[p->unk_08 & 7];
    if (*s != 0) {
        return FALSE;
    }
    *s = p;
    return TRUE;
}

extern "C" void func_ov003_0222ec20(void *self) {
    Unk_ov003_0222e734_Grid *g = data_021c47c4;
    u32 by, bx;
    s32 lx, n;
    Unk_ov003_0222e734_Cell *cell;
    for (by = 1; by <= 4; by++) {
        for (bx = 1; bx <= 4; bx++) {
            if (bx < g->w && by < g->h && g->cells != 0) {
                cell = &g->cells[by * g->w + bx];
            } else {
                cell = 0;
            }
            if (cell != 0) {
                s32 ly;
                for (ly = 0; ly < 16; ly++) {
                    for (lx = 0; lx < 16; lx++) {
                        u16 *t = (u16 *)func_02037558(cell, lx, ly, 0);
                        if (t != 0) {
                            if (func_0204b14c(t)) {
                                s32 v = func_0204b124(t);
                                if (func_020af590(data_021ed2e6, v, 0, 0, 0, 0, 0, 0) == 0) {
                                    u16 tmp[1];
                                    tmp[0] = 0xfff1;
                                    func_02037590(cell, tmp, lx, ly, 0);
                                } else {
                                    n = v * 2 + 2;
                                    Unk_ov003_0222ed20_V3 loc;
                                    func_0204eda4(&loc, bx, by, lx, ly);
                                    func_02002cf8(0xbd, n, &loc, 0, self);
                                    func_02002cf8(0xbd, n + 1, &loc, 0, self);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" void func_ov003_0222ed20(void *self) {
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0 || func_020b50bc() == 0) {
        func_020af3f4();
        func_020af514();
        return;
    }
    struct {
        Unk_ov003_0222ed20_Loc l;
        s32 p[3];
        Unk_ov003_0222ed20_V3 A, B;
    } f;
    u32 i;
    for (i = 0; i < 3; i++) {
        f.l.w[0] = 0;
        f.l.w[1] = 0;
        func_0209d498(f.l.w);
        if (((u8 *)&f.l)[6] < 6) {
            func_0209d164(f.l.w, 1);
        }
        if (func_020af590(data_021ed2e6, i, &f.p[0], &f.p[1], &f.p[2], &f.l.k[0], &f.l.k[1], &f.l.k[2]) != 0) {
            if (f.l.k[0] == ((u8 *)&f.l)[9] && f.l.k[1] == ((u8 *)&f.l)[8] && f.l.k[2] == ((u8 *)&f.l)[7]) {
                func_020af3f4();
                func_020af514();
                return;
            }
        }
    }
    if (func_020b5184() != 0) {
        if (func_020af564(data_021ed2e6) == 0) {
            if (func_020af3f4()->a.x != 0) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                f.A.x = s->a.x;
                f.A.y = s->a.y;
                f.A.z = s->a.z;
            } else {
                func_ov003_0222e734(self, &f.A, 0, 1);
            }
            if (func_020af3f4()->b.x != 0) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                Unk_ov003_0222ed20_V3 *pv = &s->b;
                f.B.x = pv->x;
                f.B.y = pv->y;
                f.B.z = pv->z;
            } else {
                func_ov003_0222e734(self, &f.B, (s32)&f.A, 1);
            }
            if (func_02002cf8(0xbd, 0, &f.A, 0, self)) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                s->a.x = f.A.x;
                s->a.y = f.A.y;
                s->a.z = f.A.z;
            }
            if (func_02002cf8(0xbd, 1, &f.B, 0, self)) {
                Unk_ov003_0222ed20_St *s = func_020af3f4();
                s->b.x = f.B.x;
                s->b.y = f.B.y;
                s->b.z = f.B.z;
            }
        }
    }
}

extern "C" void func_ov003_0222ef10(Unk_ov003_0222ef10_Cam *cam) {
    void *c = func_020947f0(4);
    s32 t;
    s32 v;
    if (cam->unk_1ca != 0) {
        v = func_0203a6fc(c, cam->unk_1cc, cam->unk_1d8, cam->unk_110, &t);
    } else {
        v = func_0203a7b8(c, cam->unk_1cc, cam->unk_110, &t);
    }
    cam->unk_118 = cam->unk_118 + t;
    if (v < 0x4800) {
        v = 0x4800;
    } else if (v > 0xb000) {
        v = 0xb000;
    }
    u32 q = func_01ffc5a4(v - 0x4800, 0x6800);
    cam->unk_1e4 = 0x1000 - q;
    func_0203c0b0(cam, 0xa, 0, q);
}

// ---- class Unk_ov003_02234f10 ----
BOOL Unk_ov003_02234f10::vfunc_0c() { return TRUE; }
BOOL Unk_ov003_02234f10::vfunc_24() { return TRUE; }
BOOL Unk_ov003_02234f10::vfunc_18() { return TRUE; }

BOOL Unk_ov003_02234f10::vfunc_00() {
    func_ov003_0222ec20(this);
    func_ov003_0222ed20(this);
    return TRUE;
}

Unk_ov003_02234f10::~Unk_ov003_02234f10() {}

extern "C" Unk_ov003_02234f10 *func_ov003_0222eef8() {
    return new Unk_ov003_02234f10;
}

Unk_ov003_02234f10::Unk_ov003_02234f10() {}
