#include "types.h"

struct Unk_ov003_02212a5c_V3 {
    s32 x, y, z;
    Unk_ov003_02212a5c_V3() {}
    Unk_ov003_02212a5c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov003_02212a5c_Bits {
    u16 a : 2;
    u16 b : 2;
    u16 c : 1;
    u16 d : 1;
    u16 e : 1;
    u16 f : 1;
    u16 g : 1;
    u16 h : 1;
};

class Unk_ov003_02230c6c_Base {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_ov003_02230c6c_Base();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void func_0203e42c();
    void func_0203d704(s32 a);

    u32 unk_04;
    u32 unk_08;
    u8 pad_0c[0x5c - 0xc];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    Unk_ov003_02212a5c_V3 unk_68;
    u8 pad_74[0x268 - 0x74];
};

class Unk_ov003_02230c6c : public Unk_ov003_02230c6c_Base {
public:
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);

    void func_ov003_02212af4();
    void func_ov003_02212ba8();
    BOOL func_ov003_02212b5c();
    BOOL func_ov003_02212bf4();

    void func_ov068_02268214();
    void func_ov068_02268008();
    void func_ov068_02267ec4();
    void func_ov068_02267e5c();
    void func_ov068_02267d70();
    void func_ov068_02267c58();
    void func_ov068_02267b38();
    void func_ov068_022679bc();
    void func_ov068_02267814();
    void func_ov068_0226775c();
    void func_ov068_02267668();
    void func_ov068_02267584();

    BOOL func_ov068_022685ec();
    BOOL func_ov068_022680f0();
    BOOL func_ov068_02267f8c();
    BOOL func_ov068_02267e74();
    BOOL func_ov068_02267e04();
    BOOL func_ov068_02267d08();
    BOOL func_ov068_02267bf0();
    BOOL func_ov068_02267aa0();
    BOOL func_ov068_022678c4();
    BOOL func_ov068_022677cc();
    BOOL func_ov068_022676f8();
    BOOL func_ov068_02267614();

    s32 unk_268;
    s32 unk_26c;
    u8 pad_270[0x2a0 - 0x270];
    u8 unk_2a0[0x10];
    s32 unk_2b0;
    u8 pad_2b4[4];
    s32 unk_2b8;
    u8 pad_2bc[0x2dc - 0x2bc];
    u8 unk_2dc;
    u8 pad_2dd[0x2ec - 0x2dd];
    s32 unk_2ec;
    s32 unk_2f0;
    s32 unk_2f4;
    s32 unk_2f8;
    s32 unk_2fc;
    s32 unk_300;
    u8 pad_304[0x324 - 0x304];
    u8 unk_324[0x370 - 0x324];
    s32 unk_370;
    Unk_ov003_02212a5c_Bits unk_374;
    u8 pad_376[0x390 - 0x376];
    s16 unk_390;
    u8 pad_392[0x398 - 0x392];
    s32 unk_398;
    s32 unk_39c;
};

typedef Unk_ov003_02230c6c Obj;
typedef Unk_ov003_02212a5c_V3 V3;

struct Unk_ov003_02212f04_Pos {
    s32 v[3];
};
typedef Unk_ov003_02212f04_Pos Pos;

extern "C" {
extern void *data_021c47c4;
extern s32 data_020d0584[4];
extern u8 data_021ed2e6[];
extern s16 data_ov003_0222efb8[];
extern s16 data_ov003_0222efba[];
extern s16 data_02135f44[];

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
void *func_02089098(void *p);
s32 func_ov003_022135c4(Obj *o, s32 a);
s32 func_ov003_022129d0(Obj *o, s32 a);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0204b300(u16 *p);
void func_02039e6c(u16 v);
void func_0204ee10(s32 *out1, s32 *out2, void *p);
BOOL func_0204eb30(void *self, u16 *p, s32 x, s32 y, u32 flag);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
s32 func_0204ed8c(Pos *out, s32 x, s32 z);
u16 func_0204b10c(void *p);
s32 func_02063b8c(s32 a);
void *func_02095204(u32 a);
s32 func_020307c4(s32 x, s32 y, s32 *a, s32 *b, s32 *c);
s32 func_02031284(s32 x, s32 y);
s32 func_02031218(s32 x, s32 y);
BOOL func_0204bd14(void *p);
s32 func_020af590(void *o, u32 m, s32 *a, s32 *b, s32 *c, s32 z1, s32 z2, s32 z3);
s32 func_020b5184();
s32 func_020e7754(s16 *p, s32 a, s32 b, s32 c);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9960(V3 *out, void *a, void *b);
s32 func_020e7820(void *p, s32 a, s32 b, s32 c);
s32 func_020e9688(V3 *v);
s32 func_02003e60(void *p, u32 a, u32 b, u32 c);
BOOL func_ov003_02212d28(Obj *o, s32 st);
s32 func_ov003_02213290(Obj *o);
s32 func_ov003_02213278(Obj *o);
s32 func_ov003_02213254(Obj *o);
s32 func_ov003_0221322c(Obj *o);
s32 func_ov003_02213058(Pos *p);
s32 func_ov003_02212fd4(void *a, Pos *p, u16 *out);
}

static inline void *Unk_ov003_02213058_Cell(void *g, s32 x, s32 y) {
    s32 hx = x >> 4;
    s32 hy = y >> 4;
    return func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
}

BOOL Unk_ov003_02230c6c::vfunc_48(void *a) {
    s32 lim;
    BOOL r;
    func_0203e42c();
    lim = func_01ffcb0c(0x2000, func_01ffc5a4(0x7d000, 0x64000));
    if (a) {
        if (func_020e9650((u8 *)a + 0x5c, (u8 *)this + 0x5c) < lim) {
            if (unk_398 == 11) return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov003_02230c6c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        func_ov003_022129d0(this, 1);
        break;
    case 1:
        func_ov003_022129d0(this, 1);
        unk_374.g = 0;
        break;
    case 8:
        func_ov003_022129d0(this, 0);
        break;
    }
}

void Unk_ov003_02230c6c::func_ov003_02212af4() {
    unk_26c = unk_268;
    if (unk_2dc != 0) {
        u8 *p = (u8 *)func_02089098(unk_2a0);
        if (p) {
            if (*(s32 *)(p + 0x98) > 0x666) {
                func_ov003_022135c4(this, 1);
                return;
            }
        }
    }
    if (unk_374.g) func_0203d704(0);
}

BOOL Unk_ov003_02230c6c::func_ov003_02212b5c() {
    s32 *d = data_020d0584;
    unk_374.c = 0;
    unk_374.d = 1;
    unk_2f4 = d[0];
    unk_2f8 = d[1];
    unk_2fc = d[2];
    unk_300 = d[3];
    return TRUE;
}

void Unk_ov003_02230c6c::func_ov003_02212ba8() {
    unk_26c = unk_268;
    if (unk_2dc != 0) {
        u8 *p = (u8 *)func_02089098(unk_2a0);
        if (p) {
            if (*(s32 *)(p + 0x98) > 0x666) {
                func_ov003_022135c4(this, 1);
            }
        }
    }
}

BOOL Unk_ov003_02230c6c::func_ov003_02212bf4() {
    unk_374.c = 0;
    unk_374.d = 1;
    return TRUE;
}

typedef void (Obj::*Fn0)();
typedef BOOL (Obj::*Fn1)();

extern "C" void func_ov003_02212c10(Obj *o) {
    static Fn0 tbl[14] = {
        &Obj::func_ov068_02268214, &Obj::func_ov068_02268008, &Obj::func_ov068_02267ec4, &Obj::func_ov068_02267e5c,
        &Obj::func_ov068_02267d70, &Obj::func_ov068_02267c58, &Obj::func_ov068_02267b38, &Obj::func_ov068_022679bc,
        &Obj::func_ov068_02267814, &Obj::func_ov003_02212ba8, &Obj::func_ov068_0226775c, &Obj::func_ov003_02212af4,
        &Obj::func_ov068_02267668, &Obj::func_ov068_02267584};
    if (o->unk_398 < 0xe) (o->*tbl[o->unk_398])();
}

extern "C" BOOL func_ov003_02212d28(Obj *o, s32 st) {
    static Fn1 tbl[14] = {
        &Obj::func_ov068_022685ec, &Obj::func_ov068_022680f0, &Obj::func_ov068_02267f8c, &Obj::func_ov068_02267e74,
        &Obj::func_ov068_02267e04, &Obj::func_ov068_02267d08, &Obj::func_ov068_02267bf0, &Obj::func_ov068_02267aa0,
        &Obj::func_ov068_022678c4, &Obj::func_ov003_02212bf4, &Obj::func_ov068_022677cc, &Obj::func_ov003_02212b5c,
        &Obj::func_ov068_022676f8, &Obj::func_ov068_02267614};
    if (st < 0xe) {
        if ((o->*tbl[st])()) {
            o->unk_398 = st;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212e50(u16 *p) {
    BOOL ok;
    if (func_0204b2d4(p)) {
        u16 t = 0xfff1;
        ok = func_0204b25c(p) == func_0204b25c(&t) ? TRUE : FALSE;
    } else {
        ok = *p == 0xfff1 ? TRUE : FALSE;
    }
    if (!ok) {
        if (func_0204b300(p) || func_0204b2d4(p)) {
            func_02039e6c(*p);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212ebc(void *p) {
    void *g = data_021c47c4;
    if (g) {
        s32 x, y;
        u16 t;
        func_0204ee10(&x, &y, p);
        t = 0xfff1;
        if (func_0204eb30(g, &t, x, y, 0)) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212f04(void *a, void *pos, u16 *out) {
    void *g = data_021c47c4;
    if (g) {
        volatile u16 t[1];
        s32 x, y;
        Pos p;
        Pos q;
        u8 mask;
        s32 n;
        s32 k;
        u32 A;
        s32 C;
        s32 j;
        t[0] = func_0204b10c(a);
        func_0204ee10(&x, &y, pos);
        mask = 0;
        n = 0;
        for (A = 0; A < 8; A++) {
            s16 *e = &data_ov003_0222efb8[A * 2];
            func_0204ed8c(&p, x + data_ov003_0222efb8[A * 2], y + e[1]);
            if (func_ov003_02213058(&p)) {
                mask |= 1 << A;
                n++;
            }
        }
        if (n != 0) {
            k = func_02063b8c(n);
            C = 0;
            j = 0;
            for (; (u32)j < 8; j++) {
                if ((mask >> j) & 1) {
                    if (C == k) {
                        func_0204ed8c(&q, x + data_ov003_0222efb8[j * 2], y + data_ov003_0222efba[j * 2]);
                        if (func_ov003_02212fd4(a, &q, out)) return TRUE;
                        return FALSE;
                    }
                    C++;
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02212fd4(void *a, Pos *pos, u16 *out) {
    *out = 0xfff1;
    if (func_ov003_02213058(pos)) {
        void *g = data_021c47c4;
        if (g) {
            u16 t;
            s32 x, y;
            s32 hx, hy, lx, ly;
            u16 *c;
            t = func_0204b10c(a);
            func_0204ee10(&x, &y, pos);
            lx = *(volatile s32 *)&x;
            ly = *(volatile s32 *)&y;
            hx = lx >> 4;
            hy = ly >> 4;
            c = (u16 *)func_0204ebd8(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
            if (c) *out = *c;
            if (func_0204eb30(g, &t, x, y, 0)) return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02213058(Pos *pos) {
    void *g = data_021c47c4;
    if (g) {
        s32 px0, py0;
        s32 s18, s1c, s20;
        s32 x, y;
        s32 hx, hy, lx, ly;
        s32 t, r;
        s32 i, j;
        void *a;
        void *c;
        px0 = -1;
        py0 = -1;
        a = func_02095204(4);
        if (a) func_0204ee10(&px0, &py0, (u8 *)a + 0x5c);
        func_0204ee10(&x, &y, pos);
        lx = *(volatile s32 *)&x;
        ly = *(volatile s32 *)&y;
        hx = lx >> 4;
        hy = ly >> 4;
        c = func_0204ebd8(g, hx, hy, lx - (hx << 4), ly - (hy << 4), 0);
        if (c) {
            if (func_0204bd14(c)) return FALSE;
        }
        t = func_020307c4(x, y, &s18, &s1c, &s20);
        if (x != px0 || y != py0) {
            if (func_02031284(x, y)) {
                if (t == 0 || (t != 0 && s20 == 2)) {
                    r = func_02031218(x, y);
                    switch (r) {
                    case 0:
                    case 1:
                        for (i = -1; i <= 1; i++) {
                            for (j = -1; j <= 1; j++) {
                                s32 py, px, u;
                                if (i == 0 && j == 0) continue;
                                py = y + j;
                                px = x + i;
                                u = func_020307c4(px, py, &s18, &s1c, &s20);
                                if (func_02031284(px, py) && (u == 0 || s20 == 2)) continue;
                                return FALSE;
                            }
                        }
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0221316c(Obj *o) {
    s32 s10, s14, s18;
    s32 r;
    if (func_ov003_02213290(o)) {
        func_ov003_02212d28(o, 0);
    } else {
        r = func_ov003_0221322c(o);
        o->unk_374.a = (o->unk_08 - 2) >> 1;
        if (func_020af590(data_021ed2e6, o->unk_374.a, &s10, &s14, &s18, 0, 0, 0)) {
            o->unk_374.b = (u16)s18;
            if (r) {
                o->unk_268 = s14;
                func_ov003_02212d28(o, 9);
            } else {
                o->unk_268 = s10;
                o->unk_60 = s14 * 2 - (s14 >> 3) - (s10 >> 3) - 0x400;
                func_ov003_02212d28(o, 11);
            }
        }
    }
}

extern "C" BOOL func_ov003_0221322c(Obj *o) {
    if (func_ov003_02213278(o)) {
        if (!func_ov003_02213254(o)) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_02213254(Obj *o) {
    if (func_ov003_02213278(o)) {
        if ((o->unk_08 - 2) & 1) return FALSE;
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov003_02213278_Pad {
    s32 v[1];
    Unk_ov003_02213278_Pad() {}
    ~Unk_ov003_02213278_Pad() {}
};

extern "C" BOOL func_ov003_02213278(Obj *o) {
    Unk_ov003_02213278_Pad pad;
    if (!func_ov003_02213290(o)) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov003_02213290(Obj *o) {
    if (o->unk_08 < 2) return TRUE;
    return FALSE;
}

extern "C" BOOL func_ov003_022132a0(Obj *o) {
    if (o->unk_398 < 7) return TRUE;
    return FALSE;
}

struct Unk_ov003_022132b4_Tgt {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

extern "C" BOOL func_ov003_022132b4(Obj *o, V3 *outPos, u16 *outAng, s32 *outVal, s32 speed, s32 ang) {
    Unk_ov003_022132b4_Tgt *p;
    s32 v0c, v10, v14;
    s16 h[2];
    V3 pv[3];
    s32 ox, oz;
    s32 dist;
    ang = ang;
    p = (Unk_ov003_022132b4_Tgt *)func_02095204(4);
    if (!func_020b5184()) return FALSE;
    if (!p) return FALSE;
    if (o->unk_39c != 0 || o->unk_398 != 0) return FALSE;
    if (o->unk_268 < 0xa00) return FALSE;
    if (speed > 0xc32) speed = 0xc32;
    if (o->unk_2dc != 0) {
        o->unk_5c += o->unk_2b0;
        o->unk_64 += o->unk_2b8;
        o->unk_374.h = 1;
    }
    h[0] = ang;
    if (o->unk_374.f) {
        h[0] = o->unk_390;
        func_020e7754(&h[0], ang, 5, 0x2000);
    }
    ox = o->unk_2ec;
    oz = o->unk_2f0;
    if (!o->unk_374.f) {
        o->unk_2ec = ox >> 4;
        o->unk_2f0 >>= 4;
    }
    v0c = func_01ffcb0c(func_01ffcb0c(speed, 0x1b6), o->unk_370);
    v10 = func_01ffcb0c(v0c, data_02135f44[((u16)h[0] >> 4) * 2]);
    v14 = func_01ffcb0c(v0c, data_02135f44[((u16)h[0] >> 4) * 2 + 1]);
    o->unk_2ec += v10;
    o->unk_2f0 += v14;
    o->unk_5c += o->unk_2ec;
    o->unk_64 += o->unk_2f0;
    h[1] = p->unk_8e;
    func_020e7754(&h[1], ang, 8, 0x2000);
    V3 *q = &p->unk_5c;
    pv[0].x = p->unk_5c.x;
    pv[0].y = q->y;
    pv[0].z = q->z;
    pv[1].x = pv[0].x + v10;
    pv[1].y = pv[0].y;
    pv[1].z = pv[0].z + v14;
    dist = func_020e7b98(o->unk_5c - pv[1].x, o->unk_64 - pv[1].z);
    if ((u32)func_020e9650(&o->unk_68, &pv[1]) > (u32)(o->unk_268 + 0x1000)) {
        o->unk_5c -= o->unk_2ec;
        o->unk_64 -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    s32 r0v = (s16)func_020e780c(dist, ang);
    s32 lim = o->unk_374.f ? 0x471c : 0x1000;
    if (r0v > (s16)lim) {
        o->unk_5c -= o->unk_2ec;
        o->unk_64 -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    if ((s16)func_020e780c(h[1], h[0]) > 0x471c) {
        o->unk_5c -= o->unk_2ec;
        o->unk_64 -= o->unk_2f0;
        o->unk_2ec = ox;
        o->unk_2f0 = oz;
        return FALSE;
    }
    func_020e9960(&pv[2], &o->unk_5c, &pv[1]);
    *outAng = func_020e7b98(pv[2].x, pv[2].z);
    outPos->x = pv[1].x;
    outPos->y = pv[1].y;
    outPos->z = pv[1].z;
    o->unk_374.e = 1;
    o->unk_390 = h[0];
    func_02003e60(o->unk_324, 0x820, 0x7f, 0);
    {
        s32 t = func_01ffc5a4(o->unk_268 - 0xa00, 0xa00);
        s32 r = func_01ffcb0c(0xc00, 0x1000 - t) + 0x200;
        func_020e7820(&o->unk_370, 0x1000, r, 0x1000);
    }
    V3 d(o->unk_2ec, 0, o->unk_2f0);
    *outVal = func_020e9688(&d) >> 1;
    return TRUE;
}
