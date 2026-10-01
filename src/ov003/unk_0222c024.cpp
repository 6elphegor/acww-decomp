#include "types.h"

struct Unk_ov003_0222adc4_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0222adc4_V3 V3;

struct Unk_ov003_0222aff0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// One 0x25c-byte entry of the tables at data_ov003_02259354 / 0225980c / 0225a17c
struct Unk_ov003_0222adc4_Rec {
    u8 unk_00[0x50];                   // 0x00
    u8 unk_50[0xec - 0x50];            // 0x50
    u8 unk_ec[8];                      // 0xec
    Unk_ov003_0222aff0_Bits unk_f4;    // 0xf4
    u8 unk_f8[0x130 - 0xf8];           // 0xf8
    u8 unk_130[0x1c8 - 0x130];         // 0x130
    V3 unk_1c8;                        // 0x1c8
    V3 unk_1d4;                        // 0x1d4
    u8 pad_1e0[0x204 - 0x1e0];         // 0x1e0
    V3 unk_204;                        // 0x204
    V3 unk_210;                        // 0x210
    s32 unk_21c;                       // 0x21c
    u8 pad_220[0x224 - 0x220];         // 0x220
    s32 unk_224;                       // 0x224
    u8 pad_228[0x232 - 0x228];         // 0x228
    s16 unk_232;                       // 0x232
    u8 pad_234[2];                     // 0x234
    s16 unk_236;                       // 0x236
    u8 pad_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 pad_23c[2];                     // 0x23c
    s16 unk_23e;                       // 0x23e
    s16 unk_240;                       // 0x240
    s16 unk_242;                       // 0x242
    s16 unk_244;                       // 0x244
    u8 pad_246;                        // 0x246
    u8 unk_247;                        // 0x247
    u8 pad_248;                        // 0x248
    u8 unk_249;                        // 0x249
    u8 unk_24a;                        // 0x24a
    u8 unk_24b;                        // 0x24b
    u8 unk_24c;                        // 0x24c
    s8 unk_24d;                        // 0x24d
    s8 unk_24e;                        // 0x24e
    u8 pad_24f;                        // 0x24f
    u8 pad_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 pad_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 pad_256;                        // 0x256
    u8 unk_257;                        // 0x257
    u8 pad_258[0x25c - 0x258];         // 0x258
};
typedef Unk_ov003_0222adc4_Rec Rec;

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

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_02063b8c(s32 n);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_02002bdc(void *a, void *b);
void func_020547a4(void *p, s32 v);
s32 func_02030814(u32 a);
s32 func_020e7530(s16 *a, s32 b, s32 c);
s32 func_02133150(s32 a, s32 b);
s32 func_020e7d4c(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_020e7870(void *a, s32 b, s32 c, s32 d, s32 e);
s32 func_020e9650(void *a, void *b);
Unk_02095204_Obj *func_02095204(u32 n);

void func_ov003_02225ec8(Rec *o, s32 a);
void func_ov003_022297c8(Rec *o, s16 *p);
void func_ov003_02229910(Rec *e);
void func_ov003_0222a36c(Rec *o, s16 *p);
s32 func_ov003_0222af48(Rec *o, s32 a);
s32 func_ov003_0222c9e0(Rec *o, s32 a);
s32 func_ov003_0222cb3c(s32 a, void *b);
s32 func_ov003_0222d28c(Rec *o, s32 v);
s32 func_ov003_0222d674(Rec *o);
s32 func_ov003_0222d720(Rec *o);
s32 func_ov003_0222d75c(Rec *o, s32 a, s32 b, s32 c);
s32 func_ov003_0222d7d8(Rec *o, s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov003_0222da7c(Rec *o);
s32 func_ov003_0222dd54(Rec *o, s32 a, s32 b);
void func_ov003_0222de04(Rec *o);
void func_ov003_0222e1e0(Rec *o, s32 a, s32 b);
void func_ov003_0222e2e0(Rec *o, s32 a);
void *func_ov003_0222e500(Rec *o, s32 a, s32 b);
void func_ov068_02269250(Rec *o);
void func_ov068_022694c0(Rec *o);
void func_ov068_022696e4(V3 *p, s32 a);
void func_ov068_02269714(Rec *o);
void func_ov068_022697b8(Rec *o);
void func_ov068_02269840(Rec *o, V3 *p);
void func_ov068_0226a2dc(Rec *o, s16 *p);
void func_ov068_0226a320(Rec *o, s16 *p);
void func_ov068_0226a3d4(Rec *o, s16 *p);
void func_ov068_0226a6ac(Rec *o, u8 *a, s32 *out);
}

namespace Unk_ov003_0222c7fc_Ns {
extern "C" void func_ov003_0222c8f8(Rec *o, V3 *out, s32 *dist, u8 *flag, s32 a, s32 b);
}

extern "C" void func_ov003_0222c024(Rec *o) {
    switch (o->unk_251) {
    case 0:
        func_ov003_0222dd54(o, 0, 1);
        func_ov068_022694c0(o);
        break;
    case 2:
        func_ov003_0222dd54(o, 0, 1);
        func_ov068_02269714(o);
        break;
    case 3:
    case 7:
    case 8:
        func_ov068_022696e4(&o->unk_210, 0);
        func_ov068_02269250(o);
        break;
    case 0xb:
        func_ov003_0222dd54(o, 0, 1);
        func_ov003_0222d674(o);
        func_ov003_0222d28c(o, 0x1333);
        break;
    case 4:
        func_ov068_022697b8(o);
        break;
    case 1:
    case 5:
    case 6:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        break;
    }
    o->unk_249 = 1;
}

extern "C" void func_ov003_0222c0d0(Rec *o) {
    s16 t = o->unk_23a;
    s16 *p = &o->unk_242;
    if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64) || func_020a62a0()) {
        if (func_ov003_0222d720(o) == 2) {
            func_ov003_02225ec8(o, 0x1000);
            o->unk_24a = 0;
        }
    }
    func_ov003_0222d7d8(o, &t, 0x38e, 0x28, 0x50, o->unk_257 << 12);
    s32 r = func_02063b8c(4);
    r = func_01ffc5a4(0x2000, (r + 5) << 12);
    *p = *p + (s16)r;
    func_ov003_0222d75c(o, *p, 0x1000, (func_02063b8c(4) + 10) << 12);
}

extern "C" void func_ov003_0222c188(Rec *o) {
    switch (o->unk_251) {
    case 0:
        func_ov003_0222c0d0(o);
        break;
    case 9:
    case 0xb:
        if (o->unk_242 == 0) {
            func_ov003_0222dd54(o, 1, 0);
        }
        func_ov003_0222a36c(o, &o->unk_242);
        break;
    case 7:
        o->unk_251 = 0;
        o->unk_23a = o->unk_23a + o->unk_240;
        break;
    case 0x13: {
        o->unk_24a = 0;
        o->unk_251 = 0;
        s16 t = o->unk_23a;
        func_ov003_0222e1e0(o, t, func_ov003_0222da7c(o));
        V3 *s = &o->unk_204;
        V3 *d = &o->unk_1c8;
        d->x = s->x;
        d->y = s->y;
        d->z = s->z;
        break;
    }
    }
}

extern "C" void func_ov003_0222c240(Rec *o) {
    s16 *p = &o->unk_242;
    switch (o->unk_251) {
    case 0:
        func_ov068_02269840(o, (V3 *)p);
        break;
    case 0xf: {
        s16 t = o->unk_23a;
        if (func_020e7530(&t, o->unk_240, 0x5b0)) {
            o->unk_251 = 0;
        }
        func_ov003_0222dd54(o, 0, 1);
        o->unk_23a = t;
        break;
    }
    case 9:
    case 0xb:
        func_ov003_022297c8(o, p);
        *p = *p + 1;
        break;
    case 0x13:
        o->unk_251 = 0;
        break;
    }
}

extern "C" void func_ov003_0222c2e0(Rec *o) {
    s16 *p = &o->unk_242;
    u8 *st = &o->unk_251;
    switch (*st) {
    case 3:
    case 0xf:
        func_ov068_0226a320(o, p);
        break;
    case 4:
        func_ov068_0226a3d4(o, p);
        func_ov068_0226a2dc(o, p);
        break;
    case 0xb:
        func_ov003_022297c8(o, p);
        *p = *p + 1;
        break;
    case 0x13:
        if (o->unk_232 <= 0) {
            *st = 3;
        } else {
            o->unk_232 = o->unk_232 - 1;
        }
        break;
    }
}

extern "C" void func_ov003_0222c36c(Rec *o) {
    s32 t = o->unk_24d;
    switch (t) {
    case 0x1b:
    case 0x1c:
    case 0x1d:
        if (*(u8 *)((u8 *)o + 0x254) < 5) {
            func_ov003_0222dd54(o, 0, 1);
        }
        break;
    }
}

extern "C" void func_ov003_0222c3a0(Rec *o) {
    s32 t = o->unk_24d;
    switch (t) {
    case 0xc:
    case 0xd:
        func_ov003_0222dd54(o, 0, 1);
        break;
    }
}

extern "C" void *func_ov003_0222c3c4(Rec *o, s16 *p) {
    if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64) || func_020a62a0()) {
        void *r = func_ov003_0222e500(o, 0x50, 0xe38);
        if (r) {
            *p = 0;
            o->unk_251 = 0xf;
            o->unk_240 = func_ov003_0222cb3c(o->unk_23a, r);
            o->unk_21c |= 0xf00;
            o->unk_21c++;
        }
        return r;
    }
    return 0;
}

extern "C" void func_ov003_0222c444(Rec *o) {
    u32 st;
    V3 *dst = &o->unk_1d4;
    V3 *src = &o->unk_204;
    s32 q = func_02133150(0x1000, o->unk_257);
    s32 flag = 0;
    st = o->unk_251;
    if (o->unk_24a) {
        func_ov003_0222d674(o);
        func_ov003_0222c3a0(o);
    }
    if (func_ov003_0222e500(o, 0x50, 0xe38) == 0) {
        if (func_020e7d4c(src, dst, q, 0x14000, 0x333) == 0) {
            flag = 1;
        } else {
            o->unk_23a = func_02002bdc(src, dst);
        }
    } else {
        flag = 1;
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
    }
    if (o->unk_24c) {
        if (!func_020e7870((u8 *)src + 4, 0x1400, q, 0x1000, 0xcd)) {
            o->unk_24c = 0;
        }
    } else {
        Unk_0203398c g;
        s32 v;
        g.func_020339bc(src, 0, 1);
        if (g.unk_30 != 0) {
            v = g.unk_3c;
            if (o->unk_251 == 0x11) {
                func_ov003_0222de04(o);
                o->unk_242 = 0;
                func_ov003_02229910(o);
                return;
            }
        } else {
            v = g.func_02033914(1);
            if (v > 0x4000) {
                v = func_02030814(0);
            } else {
                v += func_02030814(0);
            }
        }
        if (!func_020e7870((u8 *)src + 4, v, q, 0x1000, 0x266) && flag != 0 && st != 0xb && st != 9) {
            o->unk_232 = (func_02063b8c(9) + 2) * 0x14;
            o->unk_251 = 0x13;
            func_020547a4((u8 *)o + 0x50, 0);
            if (v < 0) {
                func_ov003_0222de04(o);
                o->unk_242 = 0;
                func_ov003_02229910(o);
            } else if (o->unk_24a) {
                o->unk_254 = o->unk_255 - 10;
                o->unk_24a = 0;
            }
        }
    }
    if (st == 9 || st == 0xb) {
        if (func_ov003_0222af48(o, 1)) {
            func_ov003_02229910(o);
        }
    }
}

extern "C" s16 func_ov003_0222c620(s32 a, s32 b) {
    u8 r = func_02063b8c(a);
    if (r != 0) {
        if (b != 0 && func_02063b8c(100) > 0x32) {
            return (s16)(r * -0x38e);
        }
        return (s16)(r * 0x38e);
    }
    return 0;
}

extern "C" void func_ov003_0222c668(Rec *o, s16 *p) {
    *p = *p + 1;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) && !func_020a62a0()) {
        V3 *a = &o->unk_204;
        V3 *b = &o->unk_1d4;
        if (a->x != b->x || a->z != b->z) {
            o->unk_251 = 4;
            *p = 0;
            o->unk_24c = 1;
        }
    } else {
        if (*p >= o->unk_232) {
            s16 t = o->unk_23a;
            s32 g = func_ov003_0222c620(0xc, 1);
            o->unk_240 = g + t;
            o->unk_21c |= 0xf00;
            o->unk_251 = 3;
            *p = 0;
        }
    }
}

extern "C" void func_ov003_0222c718(Rec *o) {
    s16 *p = &o->unk_242;
    u32 st = o->unk_251;
    if (st != 0xb && st != 9 && st != 4) {
        func_ov003_0222d720(o);
    }
    func_ov003_0222e2e0(o, 4);
    switch (st) {
    case 3:
    case 0xf:
        func_ov003_0222c9e0(o, 1);
        break;
    case 7:
        o->unk_251 = 0xf;
        o->unk_21c |= 0xf00;
        func_ov003_0222c3c4(o, p);
        break;
    case 9:
    case 0xb:
        o->unk_24a = 1;
    case 4:
    case 0x11:
        func_ov003_0222c444(o);
        break;
    case 0x13:
        func_ov003_0222c36c(o);
        if (o->unk_f4.mid != 0) {
            func_020547a4((u8 *)o + 0x50, 0);
        }
        if (func_ov003_0222c3c4(o, p) == 0) {
            func_ov003_0222c668(o, p);
            o->unk_21c = 0;
        }
        break;
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 8:
    case 10:
    case 12:
    case 13:
    case 14:
    case 16:
    case 18:
        break;
    }
}

extern "C" s32 func_ov003_0222c7fc(Rec *o, s32 *out) {
    s32 r = 0;
    s32 best;
    s32 flagC;
    u32 i;
    u32 s14;
    s32 zero;
    u8 b[2];
    s32 dist;
    V3 v;
    u32 r4;
    best = 0xfffffff;
    flagC = 1;
    b[0] = 1;
    b[1] = 1;
    s14 = o->unk_254;
    r4 = o->unk_255;
    out[0] = 0;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        if (func_020a62a0() == 0) {
            flagC = r;
        }
        i = 0;
        zero = 0;
        do {
            Unk_ov003_0222c7fc_Ns::func_ov003_0222c8f8(o, &v, &dist, &b[1], i, flagC);
            b[0] = (b[0] & b[1]) ? 1 : zero;
            if (best > dist) {
                out[0] = v.x;
                out[1] = v.y;
                out[2] = v.z;
                best = dist;
            }
            i = (u8)(i + 1);
        } while (i < 4);
    } else {
        func_ov068_0226a6ac(o, b, out);
    }
    if (flagC) {
        u8 *pc = &o->unk_254;
        u32 r2 = *pc;
        if (b[0] && r2) {
            r2 = (u8)(r2 - 1);
            *pc = r2;
        }
        if (r4 <= r2) {
            if (r4 > s14) {
                r = 1;
            } else {
                r = 3;
            }
        } else if (r4 > r2) {
            if (r4 <= s14) {
                r = 2;
            }
        }
    }
    return r;
}

extern "C" void func_ov003_0222c8f8(Rec *o, V3 *out, s32 *dist, u8 *flag, u8 a, u8 b) {
    Unk_02095204_Obj *p = func_02095204(a);
    if (p) {
        s32 r5 = o->unk_254;
        s32 lim = o->unk_224;
        s32 r4 = p->unk_98;
        V3 *pv = &p->unk_5c;
        out->x = p->unk_5c.x;
        out->y = pv->y;
        out->z = pv->z;
        *dist = func_020e9650(out, &o->unk_204);
        if (b) {
            *flag = 0;
            if (*dist < 0x2000) {
                r5 = (s16)(r5 + 0x19);
            } else if (*dist > lim || r4 == 0) {
                *flag = 1;
            } else if (r4 <= 0x3e8) {
                r5 = (s16)(r5 + 1);
            } else if (r4 <= 0x44c) {
                r5 = (s16)(r5 + 3);
            } else if (r4 <= 0x490) {
                r5 = (s16)(r5 + 5);
            } else if (r4 == 0x491) {
                r5 = (s16)(r5 + 8);
            } else {
                r5 = (s16)(r5 + 0xf);
            }
            if (r5 > 0xfe) r5 = 0xfe;
            o->unk_254 = r5;
        }
    }
}
