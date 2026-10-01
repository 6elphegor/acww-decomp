#include "types.h"

struct Unk_ov003_0222dd54_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0222dd54_V3 V3;

struct Unk_ov003_0222dd54_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_0222dd54_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[4];                      // 0xec
    Unk_ov003_0222dd54_Bits unk_f0;    // 0xf0
    Unk_ov003_0222dd54_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x174 - 0xf8];           // 0xf8
    u8 unk_174[0x1d4 - 0x174];         // 0x174
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x1ec - 0x1e0];         // 0x1e0
    V3 unk_1ec[2];                     // 0x1ec
    V3 unk_204;                        // 0x204
    u8 pad_210[0x21c - 0x210];         // 0x210
    s32 unk_21c;                       // 0x21c
    s32 unk_220;                       // 0x220
    u8 pad_224[0x228 - 0x224];         // 0x224
    s32 unk_228;                       // 0x228
    u8 pad_22c[0x23a - 0x22c];         // 0x22c
    s16 unk_23a;                       // 0x23a
    s16 unk_23c;                       // 0x23c
    u8 pad_23e[0x244 - 0x23e];         // 0x23e
    s16 unk_244;                       // 0x244
    u8 pad_246[0x24d - 0x246];         // 0x246
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f[2];                     // 0x24f
    u8 unk_251;                        // 0x251
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 pad_255[0x25c - 0x255];         // 0x255
};
typedef Unk_ov003_0222dd54_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

struct Unk_02095204_Obj {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

class Unk_0203389c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    BOOL func_020338d0(s32 a);
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(V3 *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern s16 data_02135f44[];
extern u8 data_ov003_0225980c[];
extern u8 data_ov003_02259354[];
extern u8 data_ov003_0225a17c[];
extern u8 data_ov003_0225b468[];
extern u8 data_ov003_0225b470[];
extern u8 data_ov003_0225b474[];
extern u8 data_ov003_0225b475[];

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_02063b8c(s32 n);
void func_020547a4(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
Unk_02095204_Obj *func_02095204(u32 n);
s32 func_02003c40(void *p, s32 v);
s32 func_02003c50(void *p, s32 v);
s32 func_02090330(s32 a, V3 *v, void *p, s32 b);
s32 func_02049370(s32 a);
s32 func_020494bc(s32 a);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_0204ee10(s32 *a, s32 *b, s32 c);
s32 func_020312a8(s32 x, s32 y);
void func_020e93a0(V3 *o, s32 a);
BOOL func_02072e44(void *g);
u8 *func_02072970(void *g, s32 a);
void func_02076a2c(void *p, s32 *a, s32 *b);
void func_02076a6c(void *p, s32 a, s32 b);
s32 func_020766e0(s32 a);
void func_02116048(void *, void *, s32);
void *__cxa_vec_cleanup(void *, s32, s32, void *(*)(void *));

s32 func_ov003_0222dbdc(s32 a);
s32 func_ov003_02212758(s32 a, s32 b);
void func_ov003_0222d720(Rec *o);
s32 func_ov003_0222d334(Rec *o);
void func_ov003_02229ab4(Rec *o);
s32 func_ov003_02229dcc(V3 *p);
void func_ov003_0222db34(Rec *o);
void *func_ov003_02225ed0(void *p);
}

extern "C" s32 func_ov003_0222dd54(Rec *o, s32 a, s32 b) {
    s32 r = func_ov003_0222dbdc(o->unk_24d);
    if (r >= 0) {
        if (b != 0) {
            func_02003c40(o->unk_174, r);
        } else {
            func_02003c50(o->unk_174, r);
        }
    }
}

extern "C" BOOL func_ov003_0222dd90(Rec *o, s32 a) {
    s8 i;
    s8 *p = &o->unk_24e;
    if (*p <= 0) {
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            for (i = 0; i < 4; i++) {
                *p = func_ov003_02212758(a, i);
                if (*p > 0) break;
            }
        } else {
            *p = func_ov003_02212758(a, 4);
        }
    }
    if (*p > 0) {
        *p = *p - 1;
        if (*p == 0) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0222de04(Rec *o) {
    V3 v;
    Unk_0203398c g;
    V3 *pv = &o->unk_204;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    g.func_020339bc(&v, 0, 1);
    if (g.unk_30 != 0) {
        v.y = g.unk_3c + 0x100;
        func_02003c50(o->unk_174, 0x7e5);
        switch (o->unk_24d) {
        case 0xc:
        case 0xd:
        case 0x1e:
        case 0x1f:
            func_02090330(0x13, &v, 0, 0);
            break;
        case 0x36:
        case 0x37:
            func_02090330(0x14, &v, 0, 0);
            break;
        default:
            func_02090330(0x12, &v, 0, 0);
            break;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0222dec8(s32 a, s32 b) {
    u32 t = func_02049370(b);
    u32 c = func_020494bc(b);
    if (a == 0xf) {
        if (c == 0 || c == 3) {
            if (t == 2) return TRUE;
        } else if (c == 4 || t == 1) {
            return TRUE;
        }
    } else if (a == 3) {
        if (c == 0) {
            if (t - 5 <= 1) return TRUE;
        } else if (c == 1) {
            if (t == 4 || t == 6) return TRUE;
        } else if (c == 2) {
            if (t == 6) return TRUE;
        } else if (c == 3) {
            if (t - 6 <= 2) return TRUE;
        }
    } else if (a == 2) {
        if (c == 0) {
            if (t == 1 || t == 4) return TRUE;
        } else if (c == 1) {
            if (t == 3) return TRUE;
        } else if (c == 2) {
            if (t == 2 || t == 4) return TRUE;
        } else if (c == 3) {
            if (t == 1 || t == 4) return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222df80(Rec *o) {
    func_ov003_0222d720(o);
    if (func_ov003_0222d334(o) == 0) {
        s32 st = o->unk_24d;
        if (st == 0xa || st == 0x33) {
            if (o->unk_f4.mid != 0) func_020547a4(o->unk_50, 0);
            func_ov003_02229ab4(o);
        } else if (st == 0x33) {
        } else {
            if (func_ov003_02229dcc(&o->unk_204) == 0) o->unk_254 = 0xfe;
            if (o->unk_f0.mid < 0xc) {
                func_0205668c(o->unk_ec, 0x11, 1, 0x1000, 9);
            } else if (o->unk_f4.mid == 0x10) {
                if (func_02063b8c(100) > 0x5f) {
                    func_0205668c(o->unk_ec, 0x11, 1, 0x1000, 9);
                }
            }
        }
    } else {
        o->unk_251 = 0x13;
        o->unk_220 = o->unk_228;
        o->unk_244 = (func_02063b8c(6) + 7) * 20;
        s32 st = o->unk_24d;
        if (st != 0xa && st != 0x33) {
            func_0205668c(o->unk_ec, 9, 0, o->unk_21c, 0);
        } else {
            func_020547a4(o->unk_50, 1);
        }
    }
}

extern "C" Unk_02095204_Obj *func_ov003_0222e098(V3 *pos) {
    Unk_02095204_Obj *best = 0;
    s32 bestd = 0xfffffff;
    u8 i;
    for (i = 0; i < 4; i++) {
        s32 dx, dz, d;
        Unk_02095204_Obj *p;
        V3 *q;
        p = func_02095204(i);
        if (p != 0) {
            q = &p->unk_5c;
            dx = pos->x - p->unk_5c.x;
            if (dx < 0) dx = -dx;
            dz = pos->z - q->z;
            if (dz < 0) dz = -dz;
            d = dx + dz;
            if (d < bestd) {
                bestd = d;
                best = p;
            }
        }
    }
    return best;
}

extern "C" BOOL func_ov003_0222e0f0(Rec *o, u32 ang, s32 n) {
    s32 lim;
    u8 i;
    s32 sx;
    s32 sz;
    V3 *dst;
    s32 n1;
    V3 *src;
    BOOL bad;
    s32 idx = ((u16)ang >> 4) * 2;
    sx = data_02135f44[idx];
    sz = data_02135f44[idx + 1];
    dst = &o->unk_1d4;
    src = &o->unk_204;
    lim = src->y;
    if (lim < func_02030814(0)) lim = func_02030814(0);
    i = 1;
    n1 = n + 1;
    for (; i < n1; i++) {
        V3 t;
        s32 off = i << 12;
        t.x = src->x + func_01ffcb0c(off, sx);
        t.z = src->z + func_01ffcb0c(off, sz);
        {
            Unk_0203398c g;
            g.func_020339bc(&t, 0, 0);
            if (g.func_02033914(1) > lim) {
                bad = 1;
            } else {
                bad = 0;
            }
        }
        if (bad != 0) break;
    }
    u8 c = i - 1;
    if (c != 0) {
        s32 f = c << 12;
        dst->x = src->x + func_01ffcb0c(f, sx);
        dst->z = src->z + func_01ffcb0c(f, sz);
        func_ov003_0222db34(o);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov003_0222e1e0(Rec *o, u32 ang, s32 d) {
    V3 *dst;
    V3 *src;
    switch (o->unk_24d) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 0x25:
        return func_ov003_0222e0f0(o, ang, (u8)(d >> 12));
    case 0x1e:
    case 0x31:
        return func_ov003_0222e0f0(o, ang, (u8)(d >> 12));
    case 0xc: case 0xd:
    case 0x1b: case 0x1c: case 0x1d:
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            return func_ov003_0222e0f0(o, ang, (u8)(d >> 12));
        }
    default:
        break;
    }
    dst = &o->unk_1d4;
    src = &o->unk_204;
    s32 idx = ((u16)ang >> 4) * 2;
    dst->x = src->x + func_01ffcb0c(d, data_02135f44[idx]);
    dst->z = src->z + func_01ffcb0c(d, data_02135f44[idx + 1]);
    return TRUE;
}

extern "C" void func_ov003_0222e2e0(Rec *o, s32 n) {
    s32 t = o->unk_21c & 0xf;
    if (t > n) o->unk_251 = 9;
}

extern "C" BOOL func_ov003_0222e2fc(s32 v) {
    s32 x = 0;
    s32 y = 0;
    func_0204ee10(&x, &y, v);
    if (func_020312a8(x, y)) return TRUE;
    return FALSE;
}

extern "C" void func_ov003_0222e328(V3 *o, s32 a) {
    o->x = 0;
    o->y = 0;
    o->z = 0x29;
    func_020e93a0(o, a);
}

extern "C" BOOL func_ov003_0222e33c(Rec *o, s32 a, s32 b) {
    V3 *out;
    V3 *pos = &o->unk_204;
    s32 h;
    if (o->unk_24d == 0x35) {
        h = o->unk_23c;
    } else {
        h = o->unk_23a;
    }
    out = &o->unk_1ec[0];
    *out = *pos;
    s32 i = ((u16)(s16)(h + b) >> 4) * 2;
    out->x += func_02133150(a * data_02135f44[i], 100);
    out->z += func_02133150(a * data_02135f44[i + 1], 100);
    out[1] = *pos;
    s32 j = ((u16)(s16)(h - b) >> 4) * 2;
    out[1].x += func_02133150(a * data_02135f44[j], 100);
    out[1].z += func_02133150(a * data_02135f44[j + 1], 100);
    return TRUE;
}

extern "C" u32 func_ov003_0222e420(Rec *o) {
    u8 r = 0;
    V3 *p = &o->unk_1ec[0];
    s32 y = o->unk_204.y;
    Unk_0203398c g0;
    Unk_0203398c g1;
    s32 v;
    g0.func_020339bc(p, 0, 0);
    v = g0.func_02033914(1);
    if (v < 0 || v > y) r++;
    g1.func_020339bc(p + 1, 0, 0);
    v = g1.func_02033914(1);
    if (v < 0 || v > y) r += 2;
    return r;
}

extern "C" u32 func_ov003_0222e494(Rec *o) {
    u8 r = 0;
    V3 *p = &o->unk_1ec[0];
    s32 y = o->unk_204.y;
    Unk_0203398c g0;
    Unk_0203398c g1;
    g0.func_020339bc(p, 0, 0);
    if (g0.func_02033914(1) > y) r++;
    g1.func_020339bc(p + 1, 0, 0);
    if (g1.func_02033914(1) > y) r += 2;
    return r;
}

extern "C" s32 func_ov003_0222e500(Rec *o, s32 a, s32 b) {
    if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64) || func_020a62a0() || o->unk_251 == 9 || o->unk_251 == 0xb) {
        func_ov003_0222e33c(o, a, b);
        if ((u8)(s8)(o->unk_24d - 0x36) <= 1 && o->unk_251 == 4) {
            return func_ov003_0222e420(o);
        }
        return func_ov003_0222e494(o);
    }
    return 0;
}

extern "C" void func_ov003_0222e574() {
    __cxa_vec_cleanup(data_ov003_0225980c, 4, 0x25c, func_ov003_02225ed0);
}

extern "C" void func_ov003_0222e598() {
    __cxa_vec_cleanup(data_ov003_02259354, 2, 0x25c, func_ov003_02225ed0);
}

extern "C" void func_ov003_0222e5bc() {
    __cxa_vec_cleanup(data_ov003_0225a17c, 8, 0x25c, func_ov003_02225ed0);
}

extern "C" BOOL func_ov003_0222e5e0(s32 a, s32 b, s8 *c, s32 *d, s32 *e, u8 *f) {
    if (!func_020a62a0()) {
        Unk_020cbb18_Ptr *g = data_020cbb18;
        if (func_02072e44(g)) {
            s8 *r = (s8 *)func_02072970(g, b + 0x18);
            if (r != 0) {
                func_02076a2c(r, d, e);
                if (*e > 0) {
                    *c = r[5];
                    *f = ((u8 *)r)[6];
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_ov003_0222e640(void *dst, s32 idx) {
    u32 off = (idx - 0x18) << 4;
    u8 rec[8];
    func_02076a6c(rec, *(s32 *)(data_ov003_0225b468 + off), *(s32 *)(data_ov003_0225b470 + off));
    rec[5] = *(s8 *)(data_ov003_0225b474 + off);
    rec[6] = data_ov003_0225b475[off];
    func_02116048(rec, dst, func_020766e0(idx));
}
