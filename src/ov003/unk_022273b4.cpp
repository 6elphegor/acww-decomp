#include "types.h"

struct Unk_ov003_0225980c_V3 {
    s32 x, y, z;
    Unk_ov003_0225980c_V3() {}
    Unk_ov003_0225980c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};
typedef Unk_ov003_0225980c_V3 V3;

// One 0x25c-byte entry of the tables at data_ov003_02259354 (2), 0225980c (4), 0225a17c (8)
struct Unk_ov003_0225980c_Rec {
    u8 pad_000[0x20];
    u8 unk_20[0x174 - 0x20];
    u8 unk_174[0x1c8 - 0x174];
    V3 unk_1c8;
    V3 unk_1d4;
    u8 pad_1e0[0x204 - 0x1e0];
    V3 unk_204;
    u8 pad_210[0x220 - 0x210];
    s32 unk_220;
    s32 unk_224;
    s32 unk_228;
    s32 unk_22c;
    u8 pad_230[0x238 - 0x230];
    u16 unk_238;
    s16 unk_23a;
    u16 unk_23c;
    u8 pad_23e[0x242 - 0x23e];
    s16 unk_242;
    u8 pad_244[0x246 - 0x244];
    u8 unk_246;
    u8 unk_247;
    u8 unk_248;
    u8 unk_249;
    u8 pad_24a[3];
    s8 unk_24d;
    u8 pad_24e[2];
    u8 unk_250;
    u8 unk_251;
    u8 pad_252[2];
    u8 unk_254;
    u8 pad_255[0x25c - 0x255];
};
typedef Unk_ov003_0225980c_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02234c6c_Ent {
    void (*fn)(Rec *);
    s32 unk_04;
};

struct Unk_ov003_02234b04_Ent {
    u16 a, b, c;
};

struct Unk_ov003_02227970_Loc {
    s8 a;
    u8 i;
    u8 c;
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern Rec data_ov003_0225a17c[];
extern Rec data_ov003_02259354[];
extern Rec data_ov003_0225980c[];
extern Unk_ov003_02234c6c_Ent data_ov003_02234c6c[];
extern Unk_ov003_02234b04_Ent data_ov003_02234b04[];

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
s32 func_020a62a0(void);
s32 func_020b8fe8(void);
s32 func_02095134(s32 v);
void func_020902f8(s32 h);
BOOL func_0203a4c4(void *p, s32 a, s32 b);
void func_020309d4(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_020e9650(void *a, void *b);
void func_02003c70(void *obj, V3 *v);
void func_020728d4(Unk_020cbb18_Ptr *g);
void func_020728a4(Unk_020cbb18_Ptr *g, void *buf, s32 n);
void func_020728c4(Unk_020cbb18_Ptr *g, s32 a, s32 b);
void func_02072824(Unk_020cbb18_Ptr *g, s32 a, s32 b);
void *func_0204da0c(void);
void func_0204ee10(s32 *x, s32 *y, void *p);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);

BOOL func_ov003_0222733c(void *a, s32 t);
void func_ov003_02226c88(void *a, Rec *o);
void func_ov003_02226d08(Rec *o, s32 v);
void func_ov003_02227074(s32 id, s32 flag);
void func_ov003_0222c9e0(Rec *o, s32 v);
s32 func_ov003_022287c8(void *a, Rec *o, s32 v);
s32 func_ov003_0222898c(void *a, Rec *o);
s32 func_ov003_022283d0(void *a, Rec *o, s32 v);
s32 func_ov003_02228060(void *a, Rec *o, s32 i, s32 v);
s32 func_ov003_0222e694(void *a, s32 i, s32 t, void *p, s32 b, s32 c);
s32 func_ov003_0222e5e0(void *a, s32 i, s8 *p, s32 *q, s32 *r, u8 *s);
s32 func_ov003_02225bf8(s32 a, s32 b);
}

extern "C" s32 func_ov003_022273b4(void *a, Rec *o, s32 n) {
    s32 i = 0;
    goto test0;
loop0:
    if (o->unk_250 == 3 && o->unk_249 != 0) {
        if (n == 8) {
            if (func_ov003_0222733c(a, *(u8 *)&o->unk_24d) == 0 || func_0203a4c4(&o->unk_204, 0x2000, 0x2000) == 0) {
                func_ov003_02226c88(a, o);
            }
        } else {
            func_ov003_02226c88(a, o);
        }
    }
    o++;
    i++;
test0:
    if (i < n) goto loop0;
    return TRUE;
}

extern "C" u32 func_ov003_02227434(s32 idx) {
    Rec *o = &data_ov003_0225980c[idx];
    if (o->unk_24d < 0) {
        o->unk_251 = 10;
        o->unk_250 = 0;
    }
    return o->unk_250;
}

extern "C" void func_ov003_0222746c(s32 idx, s32 v) {
    Rec *o = &data_ov003_0225980c[idx];
    o->unk_251 = 0xb;
    o->unk_238 = 0;
    o->unk_23c = 0;
    func_ov003_02226d08(o, 100);
    o->unk_23a = v;
    s32 st = o->unk_24d;
    if (st >= 0 && st < 0x3c) {
        data_ov003_02234c6c[st].fn(o);
        switch (o->unk_24d) {
        case 0xc:
        case 0xd:
        case 0x1b:
        case 0x1c:
        case 0x1d:
            func_ov003_0222c9e0(o, 1);
            break;
        case 0x39:
            if (o->unk_22c != -1) {
                func_020902f8(o->unk_22c);
                o->unk_22c = -1;
            }
            break;
        }
    } else {
        func_ov003_02227074(idx, 0);
        o->unk_250 = 4;
    }
}

extern "C" BOOL func_ov003_02227544(void *a, Rec *o) {
    s32 t;
    u32 st;
    st = o->unk_251;
    t = o->unk_24d;
    if (st == 9 || st == 0xb) goto yes;
    if (t != 0x3a && t != 0x3b) {
        Unk_020cbb18_Ptr *g = data_020cbb18;
        if (func_02072e88(g, g->unk_64) == 0) goto cont;
        if (func_020a62a0() != 0) goto cont;
    }
    return FALSE;
cont:
    if (st == 7) goto yes;
    switch (t) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x1f: case 0x21: case 0x22: case 0x24: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x32: case 0x34: case 0x35:
        return FALSE;
    case 0x33:
        if (o->unk_220 == o->unk_228) goto yes;
        return FALSE;
    case 0x31:
        if (st != 6) goto yes;
        return FALSE;
    default:
        break;
    }
yes:
    return TRUE;
}

extern "C" void func_ov003_02227624(void *a) {
    Unk_020cbb18_Ptr *g = data_020cbb18;
    u32 cur = g->unk_64;
    if (cur == 4) cur = 0;
    Rec *o = data_ov003_0225980c;
    u8 i = 0;
    s32 neg = -1;
    s32 zero = 0;
    do {
        s32 r = func_02095134(i);
        if (cur != i && o->unk_251 != 0xb && r != 0x57 && r != 0x58 && r != 0x76 && r != 6) {
            if (o->unk_24d == 0x39) {
                func_020902f8(o->unk_22c);
                o->unk_22c = neg;
            }
            func_ov003_022287c8(a, o, 3);
        } else {
            switch (o->unk_250) {
            case 0:
                break;
            case 1:
                func_ov003_0222898c(a, o);
                break;
            case 2:
                func_ov003_022283d0(a, o, 2);
                func_020309d4(&o->unk_20, &o->unk_204, &o->unk_204, o->unk_23a, data_ov003_02234b04[o->unk_24d].b, zero, 10);
                break;
            case 3:
                func_ov003_02228060(a, o, i, 3);
                break;
            case 4:
                o->unk_251 = 10;
                func_ov003_022287c8(a, o, 3);
                break;
            }
        }
        o++;
        i++;
    } while (i < 4);
}

extern "C" void func_ov003_02227740(void *a) {
    Rec *o = data_ov003_02259354;
    u8 i = 0;
    do {
        switch (o->unk_250) {
        case 2:
            func_ov003_022283d0(a, o, 1);
            break;
        case 3:
            if (o->unk_204.x > 0x1000) func_ov003_02228060(a, o, i, 2);
            break;
        case 4:
            o->unk_251 = 10;
            func_ov003_022287c8(a, o, 2);
            break;
        }
        o++;
        i++;
    } while (i < 2);
}

static inline BOOL Unk_ov003_022277c0_Chk(u16 *p) {
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

extern "C" BOOL func_ov003_022277c0(void *a, Rec *o) {
    if (o->unk_24d < 0) return FALSE;
    switch (o->unk_24d) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x34:
    {
        s32 x = 0, y = 0;
        func_0204ee10(&x, &y, &o->unk_204);
        void *grid = func_0204da0c();
        if (grid == 0) goto yes;
        s32 px = *(volatile s32 *)&x, py = *(volatile s32 *)&y;
        s32 hx = px >> 4;
        s32 hy = py >> 4;
        u16 *p = func_0204ebd8(grid, hx, hy, px - (hx << 4), py - (hy << 4), 0);
        if (p == 0) return FALSE;
        if (Unk_ov003_022277c0_Chk(p)) goto yes;
        return FALSE;
    }
    default:
        break;
    }
yes:
    return TRUE;
}

extern "C" BOOL func_ov003_02227930(void *a, Rec *o, s32 c, s32 d, s32 e) {
    s32 t = o->unk_24d;
    if (d == 0) return FALSE;
    if (t < 0 || t != c) return TRUE;
    V3 v(d, 0, e);
    func_020e9650(&o->unk_204, &v);
    return FALSE;
}

extern "C" void func_ov003_02227970(void *a) {
    u32 k;
    Unk_020cbb18_Ptr *g;
    Unk_ov003_02227970_Loc l;
    s32 v18, v1c;
    V3 t1, t2;
    Rec *o = data_ov003_0225a17c;
    v18 = 0;
    v1c = 0;
    l.i = 0;
    g = data_020cbb18;
    s32 neg = -1;
    goto test0;
loop0:
    {
        k = o->unk_250;
        V3 *p204;
        V3 *p1d4;
        if (func_02072e88(g, g->unk_64)) {
            p204 = &o->unk_204;
            p1d4 = &o->unk_1d4;
            l.a = neg;
            if (func_ov003_0222e694(a, l.i, o->unk_24d, p1d4, o->unk_254, 1) == 0) {
                l.c = 0;
                if (func_ov003_0222e5e0(a, l.i, &l.a, &v18, &v1c, &l.c)) {
                    if (k == 0) {
                        if (v18 > 1) {
                            s32 t = l.a;
                            if (t >= 0) {
                                p204->x = v18;
                                p204->z = v1c;
                                p1d4->x = p204->x;
                                p1d4->y = p204->y;
                                p1d4->z = p204->z;
                                o->unk_24d = t;
                                o->unk_248 = 1;
                                o->unk_249 = 0;
                                { V3 *q = &o->unk_1c8;
                                o->unk_1c8.x = p204->x;
                                q->y = p204->y;
                                q->z = p204->z; }
                                o->unk_250 = 2;
                            }
                        }
                    } else {
                        u32 c = l.c;
                        if (c == 0xff || v18 == 1) {
                            if (l.a == 0x1e) {
                                u32 st = o->unk_251;
                                if (st == 9 || st == 0x11) goto sw0;
                            }
                            func_ov003_022287c8(a, o, 1);
                        } else {
                            if (p1d4->x == v18 && p1d4->z == v1c) {
                            } else {
                                p1d4->x = v18;
                                p1d4->z = v1c;
                                { V3 *q = &o->unk_1c8;
                                o->unk_1c8.x = p204->x;
                                q->y = p204->y;
                                q->z = p204->z; }
                            }
                            o->unk_254 = c;
                        }
                    }
                }
            }
        }
    sw0:
        switch (k) {
        case 2:
            if (func_020a62a0() == 0 && func_02072e88(g, g->unk_64)) {
                if (l.a != o->unk_24d && v18 > 0) {
                    func_ov003_022287c8(a, o, 1);
                } else {
                    if (func_ov003_022277c0(a, o)) func_ov003_022283d0(a, o, 0);
                }
            } else {
                func_ov003_022283d0(a, o, 0);
            }
            break;
        case 3:
            if (func_02072e88(g, g->unk_64)) {
                if (func_020a62a0() == 0) {
                    if (func_ov003_02227930(a, o, l.a, v18, v1c)) {
                        o->unk_251 = 10;
                        func_ov003_022287c8(a, o, 1);
                    }
                }
                s32 kind = o->unk_24d;
                if (func_ov003_02225bf8(kind, func_020b8fe8()) == 5) {
                    o->unk_246 = 0;
                } else {
                    o->unk_246 = 1;
                }
            }
            func_ov003_02228060(a, o, l.i, 1);
            break;
        case 4:
            if (func_02072e88(g, g->unk_64) == 0) {
                o->unk_251 = 10;
                func_ov003_022287c8(a, o, 1);
            } else if (func_020a62a0()) {
                s16 *cnt = &o->unk_242;
                V3 *pv = &o->unk_204;
                t1.x = pv->x;
                t1.y = pv->y;
                t1.z = pv->z;
                func_02003c70(o->unk_174, &t1);
                if (o->unk_254 != 0xff) {
                    o->unk_254 = 0xff;
                    l.i |= 0x10;
                    V3 *q1 = &o->unk_1d4;
                    o->unk_1d4.x = 1;
                    q1->y = 1;
                    q1->z = 1;
                    V3 *q2 = &o->unk_204;
                    o->unk_204.x = 1;
                    q2->y = 1;
                    q2->z = 1;
                    func_020728d4(g);
                    func_020728a4(g, &l.i, 1);
                    func_02072824(g, 0x30, 7);
                }
                *cnt = *cnt + 1;
                if (*cnt > 0xc8) {
                    o->unk_251 = 10;
                    func_ov003_022287c8(a, o, 1);
                }
            } else {
                V3 *pw = &o->unk_204;
                t2.x = pw->x;
                t2.y = pw->y;
                t2.z = pw->z;
                func_02003c70(o->unk_174, &t2);
                if (o->unk_254 == 0xff) o->unk_251 = 10;
                if (o->unk_251 == 10) func_ov003_022287c8(a, o, 1);
            }
            break;
        }
    }
    o++;
    l.i++;
test0:
    if (l.i < 8) goto loop0;
}
