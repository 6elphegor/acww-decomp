#include "types.h"

struct Unk_ov003_0221cb54_Col;
struct Unk_ov003_0221cb54_P2 {
    s32 x, z;
    Unk_ov003_0221cb54_P2(Unk_ov003_0221cb54_Col *c);
    Unk_ov003_0221cb54_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_0221cb54_P2(const Unk_ov003_0221cb54_P2 &o) { x = o.x; z = o.z; }
};

struct Unk_ov003_0221cb54_V3 {
    s32 x, y, z;
    Unk_ov003_0221cb54_V3() {}
    Unk_ov003_0221cb54_V3(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_0221d118_V3 {
    s32 x, y, z;
    Unk_ov003_0221d118_V3(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0221d118_V3() {}
};
typedef Unk_ov003_0221d118_V3 V3d;

struct Unk_ov003_0221d118_Raw3 {
    s32 x, y, z;
};
struct Unk_ov003_0221d118_K : Unk_ov003_0221d118_Raw3 {
    Unk_ov003_0221d118_K() {}
    Unk_ov003_0221d118_K(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0221d118_K() {}
};
typedef Unk_ov003_0221d118_K V3k;

struct Unk_ov003_0221cb54_Raw2 {
    s32 x, z;
};

struct Unk_ov003_0221cb54_Col {
    volatile u16 a, b, c;
};

struct Unk_ov003_0221d37c_Blk {
    s64 v[6];
};

struct Unk_ov003_0221d37c_O {
    u8 pad_00[0x50];
    void *unk_50[4];
};

typedef Unk_ov003_0221d37c_Blk Blk;
typedef Unk_ov003_0221d37c_O O;
typedef Unk_ov003_0221cb54_P2 P2;
typedef Unk_ov003_0221cb54_V3 V3;
typedef Unk_ov003_0221cb54_Raw2 R2;
typedef Unk_ov003_0221cb54_Col Col;
inline Unk_ov003_0221cb54_P2::Unk_ov003_0221cb54_P2(Unk_ov003_0221cb54_Col *c) { x = (s32)c->a >> 8; z = c->b & 0xff; }

struct Unk_ov003_0221cb54_Rec {
    u8 pad_00[8];
    u16 unk_08;
    u16 unk_0a;
};

extern "C" {
extern u8 *data_020cbb18;
extern u8 *data_ov003_02235930;
extern u8 data_ov003_022359a4[];
extern u8 *data_ov003_02235934;
extern u8 *data_ov003_02235938;
extern u8 data_ov003_0222f64c[];
extern u8 *data_021c47c4;
extern u8 *data_021c3070;

s32 func_02045220(u8 a, u8 b);
Unk_ov003_0221cb54_Rec *func_02045214();
void func_ov003_02219718(u32 a, u32 b, P2 p);
void func_ov003_02219578(u32 a, u32 b, P2 p, V3 v);
void func_0204ed8c(V3 *out, s32 x, s32 z);
void *func_0204da0c();
u16 *func_0204ebd8(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 func_020452c8(void *o, P2 p, s32 a);
s32 func_0204962c(u16 *c);
void func_ov003_0221c030(void *a, void *o, P2 p, s32 mode, s32 flag);
s32 func_0204b08c(u16 *c);
s32 func_0203a4c4(V3 *v, s32 a, s32 b);
void *func_02043ec0(void *o);
s32 func_0204af08(u16 *c);
void func_02045904();
void func_02045510(P2 p, void *a, s32 b);
void func_ov003_0221e4d4(void *g, void *o, V3 *a, V3 *b, s32 c, s16 d, s16 e);
void func_ov003_0221e750(void *g, void *o, V3 *a, s32 k, V3 *b, s32 c, s16 d, s16 e);
void func_ov003_0221e7b0(void *g, void *o, V3 *a, s32 k, V3 *b, s32 c, s16 d, s16 e);
s32 func_02045d98(V3 *o, s32 z);
void func_020e9960(V3 *out, V3 *a, s32 b);
void func_0204ee10(s32 *x, s32 *z, V3 *v);
s32 func_020494bc(u16 *c);
void func_02054970(void *p);
void func_ov003_0221c2d8(void *p);
void func_ov003_02219e50(void *p);
void func_ov003_02219e7c(void *p);
void func_ov003_0221c34c(void *p);
void func_020453ac();
void func_020e8c94(void *p);
s32 func_02133150(s32 a, s32 b);
void func_ov003_0221d37c(O *o, void *g);
extern V3 data_021c309c;
extern Blk data_021f47e0;
void func_0204edd8(V3 *out, V3 *in);
s32 func_0203ef38(V3 *out, V3 *in);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
u16 *func_0204eba0(void *g, V3 *pos, s32 layer);
s32 func_01ffcbd8(void *g, s32 x, s32 z);
s32 func_0204bc34(u16 *c);
void func_ov003_0221db54(O *o, void *p, Blk m);
void func_ov003_0221db98(O *o, u16 *t, Blk m);
void func_ov003_0221dbf0(O *o, u16 *t, Blk m);
void func_ov003_0221dc50(O *o, u16 *t, Blk m);
void func_ov003_0221dcac(O *o, u16 *t, Blk m);
void func_ov003_0221dd0c(O *o, u16 *t, V3 *v, Blk m);
void func_ov003_0221ddb4(O *o, u16 *t, Blk m);
void func_ov003_0221de24(O *o, u16 *t, Blk m);
void func_ov003_0221dee8(O *o, u16 *t, Blk m);
void func_ov003_0221df48(O *o, u16 *t, Blk m);
void func_ov003_0221dfb8(O *o, u16 *t, Blk m);
void func_ov003_0221e044(O *o, u16 *t, s32 a, s32 b, Blk m);
void func_ov003_0221e0c4(O *o, u16 *t, s32 a, s32 b, V3 *v, Blk m);
s32 func_ov003_0221cd80(void *o, P2 p);
s32 func_ov003_0221cf58(void *o, P2 p);
}

static inline BOOL Chk_0221cd80(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (v < 0x5d || v > 0x61) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) f3 = FALSE;
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) f4 = FALSE;
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) f9 = FALSE;
    }
    return f9;
}

static inline BOOL Chk_0221d118(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}

static inline BOOL Chk_0221d37c(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (v < 0x5d || v > 0x61) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) f3 = FALSE;
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) f4 = FALSE;
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) f9 = FALSE;
    }
    return f9;
}

extern "C" {

void func_ov003_0221cb54(P2 pos) {
    u32 t = *(u32 *)(data_020cbb18 + 0x64);
    if (func_02045220(t, 4) >= 0) {
        Unk_ov003_0221cb54_Rec *r = func_02045214();
        func_ov003_02219718(t, r->unk_0a, pos);
    }
    if (func_02045220(t, 3) >= 0) {
        Unk_ov003_0221cb54_Rec *r = func_02045214();
        V3 v;
        func_0204ed8c(&v, pos.x, pos.z);
        Col c;
        c.c = r->unk_08;
        u16 tt = c.c;
        c.b = tt;
        c.a = tt;
        func_ov003_02219578(t, r->unk_0a, P2(&c), v);
    }
}


void func_ov003_0221cbe4(void *o, P2 pos, s32 mode) {
    if (func_ov003_0221cd80(o, pos)) {
        void *g = func_0204da0c();
        s32 x = pos.x;
        s32 z = pos.z;
        s32 hx = x >> 4;
        s32 hz = z >> 4;
        func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
        switch (mode) {
        case 4:
            if (func_ov003_0221cf58(o, pos) == 0) {
                mode = 0;
            } else {
                if (func_020452c8(o, pos, 0) >= 0) {
                    s32 x2 = pos.x;
                    s32 xx = x2 - 2;
                    s32 z2 = pos.z;
                    s32 hx2 = xx >> 4;
                    s32 hz2 = z2 >> 4;
                    u16 *cell = func_0204ebd8(g, hx2, hz2, xx - (hx2 << 4), z2 - (hz2 << 4), 0);
                    if (cell != 0 && func_0204962c(cell)) {
                        mode = 6;
                    } else if (x2 - 2 < 0x10) {
                        mode = 6;
                    }
                } else {
                    mode = 0;
                }
            }
            break;
        case 5:
            if (func_ov003_0221cf58(o, pos) == 0) {
                mode = 0;
            } else {
                if (func_020452c8(o, pos, 0) >= 0) {
                    s32 x2 = pos.x;
                    s32 xx = x2 + 2;
                    s32 z2 = pos.z;
                    s32 hx2 = xx >> 4;
                    s32 hz2 = z2 >> 4;
                    u16 *cell = func_0204ebd8(g, hx2, hz2, xx - (hx2 << 4), z2 - (hz2 << 4), 0);
                    if (cell != 0 && func_0204962c(cell)) {
                        mode = 7;
                    } else if (x2 + 2 >= 0x50) {
                        mode = 7;
                    }
                } else {
                    mode = 0;
                }
            }
            break;
        }
        func_ov003_0221c030(data_ov003_02235930 + 0x4b20, o, pos, mode, 1);
    }
}

void func_ov003_0221cd34(void *o, P2 pos, s32 mode) {
    if (func_ov003_0221cd80(o, pos)) {
        func_ov003_0221c030(data_ov003_02235930 + 0x4b20, o, pos, mode, 0);
    }
}

void func_ov003_0221cfdc(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (data_ov003_02235930 != 0) {
        V3 la(a);
        V3 lb(b);
        func_ov003_0221e4d4(data_ov003_02235930, o, &la, &lb, c, d, e);
    }
}

void func_ov003_0221d028(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (data_ov003_02235930 != 0) {
        V3 la(a);
        V3 lb(b);
        func_ov003_0221e750(data_ov003_02235930, o, &la, 0x1f, &lb, c, d, e);
    }
}

void func_ov003_0221d078(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (data_ov003_02235930 != 0) {
        V3 la(a);
        V3 lb(b);
        func_ov003_0221e7b0(data_ov003_02235930, o, &la, 0x1f, &lb, c, d, e);
    }
}

s32 func_ov003_0221d0c8(V3 *out, s32 b) {
    out->x = 0;
    out->y = 0;
    out->z = 0;
    s32 r = func_02045d98(out, 0);
    if (r != 0) {
        V3k t;
        V3k tmp;
        func_020e9960((V3 *)&tmp, out, b);
        t = tmp;
        s32 sum = t.x * t.x + t.z * t.z;
        if (sum < (s32)0x90000000) {
            r = 1;
        }
    }
    return r;
}

s32 func_ov003_0221d294(u8 *self) {
    func_02054970(self + 0x4ae0);
    func_02054970(self + 0x4af0);
    func_02054970(self + 0x4b00);
    func_02054970(self + 0x4b10);
    func_ov003_0221c2d8(self + 0x4b20);
    func_ov003_02219e50(data_ov003_022359a4);
    func_020453ac();
    if (data_ov003_02235934 != 0) {
        func_020e8c94(data_ov003_02235934);
        data_ov003_02235934 = 0;
    }
    if (data_ov003_02235938 != 0) {
        func_020e8c94(data_ov003_02235938);
        data_ov003_02235938 = 0;
    }
    data_ov003_02235930 = 0;
    return 1;
}

s32 func_ov003_0221d320(u8 *self) {
    u8 *a = data_021c47c4;
    u8 *b = data_021c3070;
    if (a != 0 && b != 0) {
        s32 *cnt = (s32 *)(self + 0x6a6c);
        *cnt = (*cnt + 1) % 60;
        func_ov003_0221d37c((O *)self, a);
        func_ov003_02219e7c(data_ov003_022359a4);
        func_ov003_0221c34c(self + 0x4b20);
    }
    return 1;
}


s32 func_ov003_0221cf58(void *o, P2 pos) {
    BOOL r = FALSE;
    s32 idx = func_020452c8(o, pos, 0);
    if (idx >= 0) {
        volatile u16 v = 0xfff1;
        v = ((Unk_ov003_0221cb54_Rec *(*)(s32))func_02045214)(idx)->unk_0a;
        BOOL f1 = TRUE, f2 = TRUE, f3 = TRUE, f0 = FALSE;
        u32 t = v;
        if (v >= 0x2b && t <= 0x2e) f0 = TRUE;
        if (!f0) {
            if (t < 0xff || t > 0x102) f3 = FALSE;
        }
        if (!f3) {
            if (t < 0x62 || t > 0x65) f2 = FALSE;
        }
        if (!f2) {
            if (t < 0xd0 || t > 0xd3) f1 = FALSE;
        }
        if (f1) r = TRUE;
    }
    return r;
}


s32 func_ov003_0221cd80(void *o, P2 pos) {
    s32 result = 0;
    if (data_ov003_02235930 != 0) {
        void *g = func_0204da0c();
        if (g != 0) {
            s32 x = pos.x;
            s32 z = pos.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            u16 *cell = func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (cell != 0) {
                if (Chk_0221cd80(cell)) {
                    if (func_0204b08c(cell) == 0) {
                        V3 v;
                        func_0204ed8c(&v, pos.x, pos.z);
                        if (func_0203a4c4(&v, 0x2000, 0x2000) == 0) {
                            result = 1;
                        }
                    }
                }
            }
        }
    }
    if (result == 0) {
        void *g2 = func_0204da0c();
        if (g2 != 0) {
            s32 x = pos.x;
            s32 z = pos.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            u16 *cell = func_0204ebd8(g2, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (cell != 0) {
                void *a = func_02043ec0(o);
                BOOL k = FALSE;
                u32 t = *cell;
                if (t >= 0x2f && t <= 0x56) k = TRUE;
                if (k || (t >= 0xc8 && t <= 0xcf) || (t >= 0x57 && t <= 0x5b)) {
                    if (func_0204af08(cell) != 0) {
                        s32 i;
                        for (i = 0; i < 3; i++) {
                            if (func_02045220((u32)a, i) >= 0) {
                                func_02045214();
                                func_02045904();
                            }
                        }
                    }
                } else if ((t >= 0x66 && t <= 0x68) || (t >= 0x6a && t <= 0x6c)) {
                    if (func_02045220((u32)a, 0) >= 0) {
                        func_02045214();
                        func_02045904();
                    }
                }
            }
        }
        func_02045510(pos, func_02043ec0(o), 0);
    }
    return result;
}


s32 func_ov003_0221d118(V3 *out, V3 pos, s32 mask) {
    s32 i;
    u8 *g = data_021c47c4;
    s32 r = 0;
    if (g != 0) {
        V3k keep(pos);
        s32 xy[2];
        xy[0] = 0;
        xy[1] = 0;
        func_0204ee10(&xy[0], &xy[1], &pos);
        s32 layer = 0;
        i = 0;
        goto test;
    loop:
        {
            u32 b = data_ov003_0222f64c[i];
            s32 cx = xy[0] + (((s32)b >> 4) - 8);
            s32 cz = xy[1] + ((b & 0xf) - 8);
            s32 hx = cx >> 4;
            s32 hz = cz >> 4;
            u16 *cell = func_0204ebd8(g, hx, hz, cx - (hx << 4), cz - (hz << 4), layer);
            if (cell != 0) {
                if (Chk_0221d118(cell)) {
                    s32 bit = func_020494bc(cell);
                    if (((mask >> bit) & 1) != 0) {
                        u32 b2 = ((volatile u8 *)data_ov003_0222f64c)[i];
                        xy[0] = xy[0] + (((s32)b2 >> 4) - 8);
                        xy[1] = xy[1] + ((b2 & 0xf) - 8);
                        func_0204ed8c(out, xy[0], xy[1]);
                        r = 1;
                        goto end;
                    }
                }
            }
        }
        i++;
    test:
        if (i < 0x51) goto loop;
    }
end:
    return r;
}


void func_ov003_0221d37c(O *o, void *g) {
    struct {
        s32 x, z;
        V3 D, E, A, B, C;
        union {
            Blk m;
            s32 mw[12];
        };
        V3 F, G;
    } l;
    s32 idx, dist, i, j, cnt;
    u16 *cell;
    if (data_021c3070 != 0) {
        l.A = data_021c309c;
        func_0204edd8(&l.C, &l.A);
        func_0204ee10(&l.x, &l.z, &l.C);
        l.B.x = l.C.x + 0x12000;
        cnt = 0;
        l.B.y = 0;
        l.B.z = l.C.z + 0x8000;
        j = 4;
        goto jtest;
    jloop:
        func_0204edd8(&l.D, &l.B);
        {
            s32 r4 = func_0203ef38(&l.E, &l.D);
            func_020e8388(&data_021f47e0, l.E.x, l.E.y, l.E.z);
            func_020e8434(&data_021f47e0, r4);
        }
        l.m = data_021f47e0;
        dist = l.D.z - l.C.z;
        i = 9;
        goto itest;
    iloop:
        cell = func_0204eba0(g, &l.D, 0);
        if (cell == 0) goto step;
        if (Chk_0221d37c(cell)) {
            if (func_0204b08c(cell) == 0) {
                if (func_0203a4c4(&l.D, 0x2000, 0x2000) != 0) goto step;
            }
        }
        {
            switch (((s32)(*cell) & 0xf000) >> 12) {
            case 0:
                if (((((*cell) >= 0x26 && (*cell) <= 0x2a) || ((*cell) >= 0x5d && (*cell) <= 0x61) || ((*cell) >= 0x2f && (*cell) <= 0x56) ||
                      ((*cell) >= 0x57 && (*cell) <= 0x5b) || ((*cell) >= 0x66 && (*cell) <= 0x68) || (*cell) == 0x69 ||
                      ((*cell) >= 0x6a && (*cell) <= 0x6c) || (*cell) == 0x6d || ((*cell) >= 0xc8 && (*cell) <= 0xcf) ||
                      ((*cell) >= 0xe3 && (*cell) <= 0xe7) || ((*cell) >= 0xe8 && (*cell) <= 0xfb)) &&
                     dist > -0x1c200 && dist < 0x8200) ||
                    (dist > -0x14a00 && dist < 0x6400)) {
                    if (((*cell) >= 0x26 && (*cell) <= 0x2a) || ((*cell) >= 0x5d && (*cell) <= 0x61) || ((*cell) >= 0x2f && (*cell) <= 0x56) ||
                        ((*cell) >= 0x57 && (*cell) <= 0x5b) || ((*cell) >= 0x66 && (*cell) <= 0x68) || (*cell) == 0x69 ||
                        ((*cell) >= 0x6a && (*cell) <= 0x6c) || (*cell) == 0x6d || ((*cell) >= 0xc8 && (*cell) <= 0xcf)) {
                        l.F.x = l.D.x;
                        l.F.y = l.D.y;
                        l.F.z = l.D.z;
                        func_ov003_0221e0c4(o, cell, l.x + i, l.z + j, &l.F, l.m);
                    } else if (((*cell) >= 0x21 && (*cell) <= 0x24) || ((*cell) >= 0x1f && (*cell) <= 0x20)) {
                        func_ov003_0221ddb4(o, cell, l.m);
                    } else {
                        BOOL k = FALSE;
                        if ((*cell) <= 0x19) k = TRUE;
                        if (k || (*cell) == 0x1c) {
                            func_ov003_0221df48(o, cell, l.m);
                        } else if (((*cell) >= 0x6e && (*cell) <= 0x73) || ((*cell) >= 0x74 && (*cell) <= 0x79) || ((*cell) >= 0x7a && (*cell) <= 0x7f) ||
                                   ((*cell) >= 0x80 && (*cell) <= 0x87) || ((*cell) >= 0x8a && (*cell) <= 0x8f) || ((*cell) >= 0x90 && (*cell) <= 0x95) ||
                                   ((*cell) >= 0x96 && (*cell) <= 0x9b) || ((*cell) >= 0x9c && (*cell) <= 0xa3) || (*cell) == 0xa5) {
                            func_ov003_0221dee8(o, cell, l.m);
                        } else if (((*cell) >= 0xe3 && (*cell) <= 0xe7) || ((*cell) >= 0xe8 && (*cell) <= 0xfb)) {
                            l.G.x = l.D.x;
                            l.G.y = l.D.y;
                            l.G.z = l.D.z;
                            func_ov003_0221dd0c(o, cell, &l.G, l.m);
                        } else if ((*cell) == 0xa6 || (*cell) == 0xfe) {
                            func_ov003_0221dc50(o, cell, l.m);
                        } else if ((*cell) >= 0xfc && (*cell) <= 0xfd) {
                            func_ov003_0221dcac(o, cell, l.m);
                        } else if ((*cell) == 0x25 || (*cell) == 0x5c || (*cell) == 0xc7) {
                            func_ov003_0221e044(o, cell, l.x + i, l.z + j, l.m);
                        } else if (((*cell) >= 0x2b && (*cell) <= 0x2e) || ((*cell) >= 0xff && (*cell) <= 0x102) || ((*cell) >= 0x62 && (*cell) <= 0x65) ||
                                   ((*cell) >= 0xd0 && (*cell) <= 0xd3)) {
                            func_ov003_0221dfb8(o, cell, l.m);
                        } else {
                            BOOL k2 = FALSE;
                            {
                                u32 bx = (u16)((*cell) + 0xffe6);
                                if (bx <= 4) {
                                    if (((1 << bx) & 0x1b) != 0) k2 = TRUE;
                                }
                            }
                            if (k2 || (*cell) == 0x88 || (*cell) == 0x89 || (*cell) == 0xa4) {
                                func_ov003_0221de24(o, cell, l.m);
                            } else if (func_01ffcbd8(g, l.x + i, l.z + j)) {
                                func_ov003_0221dc50(o, cell, l.m);
                            } else {
                                BOOL k3 = FALSE;
                                if ((*cell) >= 0xa7 && (*cell) <= 0xc6) k3 = TRUE;
                                if (k3) {
                                    func_ov003_0221db98(o, cell, l.m);
                                } else if (((*cell) >= 0xd4 && (*cell) <= 0xda) || ((*cell) >= 0xdb && (*cell) <= 0xe1) || (*cell) == 0xe2) {
                                    func_ov003_0221dbf0(o, cell, l.m);
                                }
                            }
                        }
                    }
                    cnt++;
                }
                break;
            case 1:
            case 3:
            case 4:
                if (func_01ffcbd8(g, l.x + i, l.z + j)) {
                    func_ov003_0221dc50(o, cell, l.m);
                } else {
                    idx = func_0204bc34(cell);
                    func_ov003_0221db54(o, o->unk_50[idx], l.m);
                }
                cnt++;
                break;
            case 2:
                break;
            }
        }
        if (cnt >= 0xfc) goto end;
    step:
        l.mw[9] -= 0x2000;
        l.D.x -= 0x2000;
        i--;
    itest:
        if (i >= -9) goto iloop;
        l.B.z -= 0x2000;
        j--;
    jtest:
        if (j >= -14) goto jloop;
    }
end:;
}

}
