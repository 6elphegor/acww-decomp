#include "types.h"

struct Unk_ov004_02231bb8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02231d54_V3 {
    s32 x, y, z;
    Unk_ov004_02231d54_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

class Unk_ov004_02231bb8 {
public:
    typedef void (Unk_ov004_02231bb8::*Fn)();

    /* 0x00 */ u8 pad_00[0x50];
    /* 0x50 */ Unk_ov004_02231bb8 *unk_50;
    /* 0x54 */ u8 pad_54[0x100 - 0x54];
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 pad_104[0x110 - 0x104];
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x1a8 - 0x160];
    /* 0x1a8 */ Unk_ov004_02231bb8_V3 unk_1a8;
    /* 0x1b4 */ u8 pad_1b4[4];
    /* 0x1b8 */ s32 unk_1b8;
    /* 0x1bc */ u8 pad_1bc[4];
    /* 0x1c0 */ s16 unk_1c0;
    /* 0x1c2 */ u8 pad_1c2[2];
    /* 0x1c4 */ s16 unk_1c4;
    /* 0x1c6 */ u8 pad_1c6[2];
    /* 0x1c8 */ u8 unk_1c8;
    /* 0x1c9 */ u8 pad_1c9;
    /* 0x1ca */ s8 unk_1ca;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 unk_1cc;
    /* 0x1d0 */ u8 pad_1d0[0x1e8 - 0x1d0];
    /* 0x1e8 */ u8 unk_1e8;
    /* 0x1e9 */ u8 unk_1e9;
    /* 0x1ea */ u8 pad_1ea[2];
    /* 0x1ec */ s16 unk_1ec;
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 pad_1ef[0x1fc - 0x1ef];
    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ u8 pad_1fe[0x204 - 0x1fe];
    /* 0x204 */ u8 unk_204;
    /* 0x205 */ u8 unk_205;
    /* 0x206 */ u8 unk_206;
    /* 0x207 */ u8 unk_207;
    /* 0x208 */ u8 pad_208[4];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ s32 unk_214;
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u8 pad_220[4];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[2];
    /* 0x22e */ u8 unk_22e;
    /* 0x22f */ u8 pad_22f;
    /* 0x230 */ u16 unk_230;
    /* 0x232 */ u8 pad_232[0x23c - 0x232];
    /* 0x23c */ s32 unk_23c;
    /* 0x240 */ u8 pad_240[0x24e - 0x240];
    /* 0x24e */ u8 unk_24e;
    /* 0x24f */ u8 pad_24f[3];
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253[2];
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 pad_256[0x26c - 0x256];
    /* 0x26c */ u8 unk_26c[12];
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ u8 pad_27c[4];
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 unk_281;
    /* 0x282 */ u16 unk_282;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ s32 unk_288;
};

extern "C" {
extern Unk_ov004_02231bb8::Fn data_ov004_02251e5c[];
extern Unk_ov004_02231bb8 *data_ov004_02251e94[];
extern Unk_ov004_02231bb8 *data_ov004_02251d74;
extern u8 data_ov004_022402ef[];
extern u8 data_ov004_022402f4[];
extern u8 data_ov004_022402f5[];
extern u8 data_ov004_022402f6[];
extern u8 data_ov004_022402f7[];
extern s32 data_ov004_02251d9c[];
extern s32 data_ov004_02251d84[];
extern u8 data_021c7c88[];

s32 func_020e769c(void *p, s32 a, s32 b);
s32 func_020e7754(void *p, s32 a, s32 b, s32 c);
s32 func_020e759c(void *p, s32 a, s32 b);
s32 func_020e96a4(s32 a, s32 b);
s32 func_020e7fa8(void *p);
s32 func_02002bdc(s32 a, s32 b);
s32 func_02063b8c(s32 n);
s32 func_020565e8(void *p, u32 b);
s32 func_020308b4(s32 *p, s32 a, s32 *c, s32 w, s32 h);
void *func_020339bc(void *o, void *v, s32 a, s32 b);
s32 func_02033914(void *o, s32 f);
void func_02033988(void *o);
void func_ov004_0223257c(void *v, s32 a, s32 b);
void func_ov004_02231600(Unk_ov004_02231bb8 *o, void *p);
void func_ov004_02231838(Unk_ov004_02231bb8 *o);
void func_ov004_02231878(Unk_ov004_02231bb8 *o);
void func_ov004_0222e2f4(Unk_ov004_02231bb8 *o);
void func_ov004_022321e8(Unk_ov004_02231bb8 *o, s32 a);

void func_ov004_02232158(Unk_ov004_02231bb8 *o, s32 a, s32 b, s32 c);
void func_ov004_022321cc(Unk_ov004_02231bb8 *o);
s32 func_ov004_02231e28(s32 a, s32 b);
void func_ov004_02231e8c(Unk_ov004_02231bb8 *o, s32 m, s32 lim, u32 mode);
void func_ov004_02231938(Unk_ov004_02231bb8 *o);
void func_ov004_022318dc(Unk_ov004_02231bb8 *o);
void func_ov004_0223197c(Unk_ov004_02231bb8 *o);
void func_ov004_022319ac(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul);
void func_ov004_022319ec(Unk_ov004_02231bb8 *o);
void func_ov004_02231bb8(Unk_ov004_02231bb8 *o);
BOOL func_ov004_02231c68(Unk_ov004_02231bb8 *o);
BOOL func_ov004_02231d1c(Unk_ov004_02231bb8_V3 *pos);

void func_ov004_022318dc(Unk_ov004_02231bb8 *o)
{
    s32 t = o->unk_158 * 2;
    if (t > 0x7b) {
        t = 0x7b;
        o->unk_281 = 3;
        o->unk_158 = 0;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    func_ov004_0223257c(&o->unk_1a8, t, o->unk_1c0);
}

void func_ov004_02231938(Unk_ov004_02231bb8 *o)
{
    Unk_ov004_02231bb8 *p = data_ov004_02251e94[o->unk_1e8];
    if (p != NULL) {
        o->unk_282 = p->unk_1c0 + 0x4000;
    }
    o->unk_281 = 2;
    o->unk_158 = 0;
}

void func_ov004_0223197c(Unk_ov004_02231bb8 *o)
{
    switch (o->unk_281) {
    case 1:
        func_ov004_02231938(o);
        break;
    case 2:
        func_ov004_022318dc(o);
        break;
    case 3:
        func_ov004_02231878(o);
        break;
    }
}

void func_ov004_022319ac(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul)
{
    s32 t;
    if (*flag != 0) {
        *cnt = *cnt + 1;
    } else {
        *cnt = *cnt - 1;
    }
    t = (s16)(*cnt * mul);
    if (t >= max) {
        t = max;
        *flag = 0;
    } else if (t <= 0) {
        t = 0;
        *flag = 1;
    }
    *out = t;
}

void func_ov004_022319ec(Unk_ov004_02231bb8 *o)
{
    u8 a = o->unk_1e8;
    u8 *p = &o->unk_252;
    if (*p != a && a != o->unk_15c) {
        *p = a;
        o->unk_280 = 4;
        o->unk_278 = 0xcd;
        o->unk_281 = 1;
    }
    if (o->unk_281 == 0) {
        (o->*data_ov004_02251e5c[o->unk_1ee])();
    } else {
        func_ov004_0223197c(o);
    }
    func_ov004_022319ac(&o->unk_1c4, &o->unk_284, (s32 *)&o->unk_288, 0x2aac, 0x12c);
    switch (o->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 250);
        s32 v;
        if (r <= 1 || (v = o->unk_1a8.y) >= 0x2b33) {
            if (func_020565e8(o->unk_100, 1) != 0) {
                o->unk_21c = 0;
                o->unk_255 = 2;
            }
        } else {
            if (v == o->unk_1b8) {
                o->unk_21c = 0;
                o->unk_255 = 0;
            }
        }
        o->unk_110 = 0x666;
        break;
    }
    case 0:
        if (func_ov004_02231e28(0, 100) <= 10) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x800;
        break;
    case 2: {
        s32 r = func_ov004_02231e28(0, 250);
        if (r <= 1 || o->unk_1a8.y <= 0x800) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x4cd;
        break;
    }
    }
    if (o->unk_1ee != 2) {
        func_ov004_0222e2f4(o);
    }
    func_ov004_02231e8c(o, 8, 0x28, o->unk_255);
    o->unk_21c++;
    o->unk_158++;
    func_ov004_02231838(o);
    func_ov004_02231600(o, o->unk_26c);
}

void func_ov004_02231bb8(Unk_ov004_02231bb8 *o)
{
    s32 *p = &o->unk_15c;
    o->unk_50 = o;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    o->unk_1c8 = 0;
    o->unk_210 = 0x5e;
    o->unk_214 = 1;
    o->unk_218 = 1;
    o->unk_230 = 0x96;
    o->unk_204 = data_ov004_022402f4[*p * 17];
    o->unk_205 = data_ov004_022402f5[*p * 17];
    o->unk_206 = data_ov004_022402f6[*p * 17];
    o->unk_207 = data_ov004_022402f7[*p * 17];
    data_ov004_02251d74 = o;
}

BOOL func_ov004_02231c68(Unk_ov004_02231bb8 *o)
{
    BOOL r = FALSE;
    Unk_ov004_02231bb8_V3 v;
    s32 x;
    v.x = o->unk_1a8.x;
    v.y = o->unk_1a8.y;
    v.z = o->unk_1a8.z;
    func_ov004_0223257c(&v, (data_ov004_022402ef[o->unk_15c * 17] << 12) >> 7, o->unk_1c0);
    x = 0x400;
    if (o->unk_1fc != 0) {
        x = 0x1000;
    }
    if (o->unk_15c == 0x19 || o->unk_15c < 0x11) {
        if (func_020308b4(&v.x, x, data_ov004_02251d9c, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    } else {
        if (func_020308b4(&v.x, x, data_ov004_02251d84, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    }
    return r;
}

BOOL func_ov004_02231d1c(Unk_ov004_02231bb8_V3 *pos)
{
    u32 buf[16];
    BOOL r = FALSE;
    func_020339bc(buf, pos, r, r);
    if (func_02033914(buf, r) == 0x800) {
        r = TRUE;
    }
    func_02033988(buf);
    return r;
}

BOOL func_ov004_02231d54(s32 *p, s32 v)
{
    BOOL r = FALSE;
    s32 sgn = 2;
    s32 k[1];
    volatile s32 b, a;
    Unk_ov004_02231bb8_V3 q;
    s32 i;
    k[0] = sgn;
    if (v < 0) {
        sgn *= -1;
    }
    if (v < 0) {
        v = -v;
    }
    if (v > 0x4000) {
        k[0] *= -1;
    }
    for (i = 0; i < 0x32; i++) {
        a = p[2];
        b = p[1];
        q.x = p[0] + ((sgn * i) << 12) / 10;
        q.y = b;
        q.z = a;
        if (func_ov004_02231d1c(&q) == 0) {
            r = TRUE;
            break;
        }
        s32 z = p[2] + ((k[0] * i) << 12) / 10;
        s32 y = p[1];
        s32 x = p[0];
        q.x = x;
        q.y = y;
        q.z = z;
        if (func_ov004_02231d1c(&q) == 0) {
            break;
        }
    }
    return r;
}

BOOL func_ov004_02231dec(void *obj, s32 a, s32 b, s32 max)
{
    BOOL r = TRUE;
    if (func_020e96a4(a, b) > max) {
        func_020e769c(obj, func_02002bdc(a, b), 0x38e);
        r = FALSE;
    }
    return r;
}

s32 func_ov004_02231e28(s32 a, s32 b)
{
    return a + func_02063b8c(b - a);
}

s16 func_ov004_02231e3c(s32 a, s32 b)
{
    s32 sign;
    s32 r;
    if (func_020e7fa8(data_021c7c88) > 0) {
        sign = 1;
    } else {
        sign = -1;
    }
    r = func_ov004_02231e28(b, a);
    return (s8)sign * r * 0xb6;
}

s32 func_ov004_02231e74(s32 a, s32 b)
{
    s32 r = func_ov004_02231e28(a, b);
    if (r == 0) {
        r = 1;
    }
    return r << 12;
}

void func_ov004_02231e8c(Unk_ov004_02231bb8 *o, s32 m, s32 lim, u32 mode)
{
    s32 *p = &o->unk_1a8.y;
    if (mode == 0 || mode == 2) {
        m = m * o->unk_21c;
        if (m >= lim) {
            m = lim;
        }
    } else if (mode == 1 || mode == 3) {
        m = lim - m * o->unk_21c;
        if (m <= 0) {
            m = 0;
        }
    }
    if (mode <= 1) {
        *p = *p + m;
    } else if ((u8)(mode + 0xfe) <= 1) {
        *p = *p - m;
    }
}

void func_ov004_02231eec(Unk_ov004_02231bb8 *o, s32 a)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                func_020e7754(&o->unk_1c4, 0, 3, 0x186);
            }
        } else {
            s32 d;
            func_020e7754(&o->unk_1c4, (s16)(-a * o->unk_1ca), 4, 0x186);
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                d = o->unk_1ca;
                if (d == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (d == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

void func_ov004_02231f98(Unk_ov004_02231bb8 *o, s32 lim, s32 b)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        s32 t = -o->unk_23c * o->unk_1ca;
        s32 s = (o->unk_20c * b) >> 12;
        s32 n, c;
        t = t * s;
        o->unk_1c4 = t;
        n = -lim;
        c = o->unk_1c4;
        if (c <= n) {
            o->unk_1c4 = n;
        } else if (c >= lim) {
            o->unk_1c4 = lim;
        }
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                o->unk_23c--;
            }
        } else {
            o->unk_23c++;
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                t = o->unk_1ca;
                if (t == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (t == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

void func_ov004_02232068(Unk_ov004_02231bb8 *o)
{
    u32 t = o->unk_1ee;
    if ((u8)(t + 0xff) > 1) {
        if (t == 3) {
            func_020e7754(&o->unk_1c4, (s16)(o->unk_1ca * -6825), 3, 0x222);
        } else if (t == 5) {
            func_020e7754(&o->unk_1c4, 0, 3, 0x222);
        }
    }
}

void func_ov004_022320c8(Unk_ov004_02231bb8 *o)
{
    s32 k = o->unk_15c;
    if (k == 0x2d || k == 0x2e) {
        func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else if (o->unk_1e8 == k) {
        func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else {
        func_ov004_02232158(o, 0x7b, 0x5000, o->unk_228);
    }
}

void func_ov004_02232130(Unk_ov004_02231bb8 *o)
{
    func_ov004_02232158(o, o->unk_224, o->unk_1cc, o->unk_228);
}

void func_ov004_02232158(Unk_ov004_02231bb8 *o, s32 a, s32 b, s32 c)
{
    s32 *p = &o->unk_1a8.y;
    s32 t = *p;
    s32 m = a * o->unk_1ca;
    *p = t + m;
    if (*p > b) {
        func_020e759c(p, o->unk_1cc, a);
    } else if (*p < c) {
        func_020e759c(p, o->unk_228, a);
    }
}

void func_ov004_022321b4(Unk_ov004_02231bb8 *o)
{
    func_ov004_022321cc(o);
    o->unk_1fd = 2;
}

void func_ov004_022321cc(Unk_ov004_02231bb8 *o)
{
    func_ov004_022321e8(o, 0);
    o->unk_22e = 0;
}
}
