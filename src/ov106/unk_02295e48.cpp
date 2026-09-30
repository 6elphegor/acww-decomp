#include "types.h"

// Scene object for ov106 (vtable 0x02298180, size 0x3f80, Unk_ov106_02298180 : Unk_ov002_022044e4).
// Functions here are plain extern "C" state handlers on the scene struct.
struct Unk_ov106_02298180_Elem {
    u8 b[0xf4];
};

struct Unk_ov106_02298180 {
    /* 0x0000 */ u8 pad_00[0x8c];
    /* 0x008c */ u8 unk_08c;
    /* 0x008d */ u8 pad_08d[0xa0 - 0x8d];
    /* 0x00a0 */ s32 unk_0a0;
    /* 0x00a4 */ s32 unk_0a4;
    /* 0x00a8 */ s32 unk_0a8;
    /* 0x00ac */ s32 unk_0ac;
    /* 0x00b0 */ s32 unk_0b0;
    /* 0x00b4 */ u8 unk_0b4;
    /* 0x00b5 */ u8 unk_0b5;
    /* 0x00b6 */ u8 unk_0b6;
    /* 0x00b7 */ u8 unk_0b7;
    /* 0x00b8 */ u8 unk_0b8;
    /* 0x00b9 */ u8 pad_0b9[2];
    /* 0x00bb */ u8 unk_0bb;
    /* 0x00bc */ u8 pad_0bc[2];
    /* 0x00be */ u8 unk_0be;
    /* 0x00bf */ u8 unk_0bf;
    /* 0x00c0 */ u8 unk_0c0[0xb58 - 0xc0];
    /* 0x0b58 */ u8 unk_b58[0x2160 - 0xb58];
    /* 0x2160 */ u8 unk_2160[0x2220 - 0x2160];
    /* 0x2220 */ u8 unk_2220[0x2238 - 0x2220];
    /* 0x2238 */ u8 unk_2238[0x259c - 0x2238];
    /* 0x259c */ u8 unk_259c[0x28b4 - 0x259c];
    /* 0x28b4 */ u8 unk_28b4[0x2924 - 0x28b4];
    /* 0x2924 */ Unk_ov106_02298180_Elem unk_2924[10];
    /* 0x32ac */ u8 unk_32ac[0x3c34 - 0x32ac];
    /* 0x3c34 */ u8 unk_3c34[0x3f80 - 0x3c34];
};

typedef Unk_ov106_02298180 S;

class Unk_ov106_02295e74_Sub {
public:
    virtual ~Unk_ov106_02295e74_Sub();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

extern "C" {
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021edb68;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;

void func_0200402c(s32 a);
s32 func_020991fc();
BOOL func_0206e61c();
BOOL func_0206ef0c();
void func_020b87d0(void *p);
s32 func_02065578(void *p);
s32 func_0208d4fc(void *p);
s32 func_0208d534(void *p);

void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006e4(void *p, s32 a);
void func_ov002_0220085c(void *p, s32 a, s32 b);
void func_ov002_02200874(void *p, s32 a, s32 b);
BOOL func_ov002_02200908(void *p, s32 a);
BOOL func_ov002_022008fc(void *p, s32 a);
s32 func_ov002_02200920(void *p);
void func_ov002_02200980(void *p);
u32 func_ov002_022009c8(void *p);
BOOL func_ov002_022009d4(void *p);
BOOL func_ov002_02200a14(void *p, s32 a);
void func_ov002_02200a50(void *p, s32 a);
void func_ov002_02200a58(void *p, s32 a);
void func_ov002_02200a60(void *p, s32 a);
BOOL func_ov002_0220125c(s32 a);
BOOL func_ov002_0220126c(s32 a);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
void func_ov002_022026f4(void *p, s32 a, s32 b);
s32 func_ov002_02202718(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202b68(void *p);
void func_ov002_02202d00(void *p);
void func_ov002_0220301c(void *p);
s32 func_ov002_0220306c(void *p);
BOOL func_ov002_0220308c(void *p);
void func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02203510(void *p, s32 a);
void func_ov002_02203698(void *p);
BOOL func_ov002_02203f08(void *p);
s32 func_ov002_02203f28(void *p, s32 a);
s32 func_ov002_02203f78(void *p, s32 a);
s32 func_ov002_02204140(void *p);
void func_ov002_02204174(void *p);
void func_ov002_022041b8(void *p, void *q, s32 a);

s32 func_ov094_02292380();
s32 func_ov094_0229238c();
s32 func_ov094_02292398();
BOOL func_ov094_02293c1c(void *p);

// out-of-range callees (other groups)
void func_ov106_02294dfc(S *s, u32 a);
void func_ov106_02294e0c(S *s, u32 a);
void func_ov106_02295660(S *s, s32 a, s32 b);
void func_ov106_02295708(S *s);
void func_ov106_02295780(S *s);
void func_ov106_02295818(S *s, u32 a);
void func_ov106_02295840(S *s, u32 a);
void func_ov106_0229589c(S *s);
void func_ov106_022958c4(S *s);
void func_ov106_022958f0(S *s);
void func_ov106_02295960(S *s);
void func_ov106_02295ae0(S *s, u32 a);
void func_ov106_02295b2c(S *s);
BOOL func_ov106_02295b88(S *s, u32 a);
s32 func_ov106_02295be0(S *s, u32 a);
s32 func_ov106_02295c28(S *s, u32 a);

// in-range forward declarations
BOOL func_ov106_02295e48(S *s, u32 v);
BOOL func_ov106_02295e58(S *s, u32 v);
void func_ov106_02295e68(S *s);
void func_ov106_02295e74(S *s);
void func_ov106_02295ea0(S *s);
void func_ov106_02295ecc(S *s, u32 v);
u32 func_ov106_02295f0c(S *s);
u32 func_ov106_02295f40(S *s);
void func_ov106_02295f60(S *s, u32 a, u32 b);
void func_ov106_02295f98(S *s, u32 a, s32 c);
void func_ov106_02295fcc(S *s, u32 a, u32 b);
void func_ov106_02296030(S *s, u32 a);
void func_ov106_02296078(S *s, u32 a);
void func_ov106_022960c0(S *s, u32 a);
void func_ov106_02296158(S *s);
void func_ov106_02296178(S *s);
void func_ov106_022961d8(S *s);
void func_ov106_022961f0(S *s);
void func_ov106_02296210(S *s);
void func_ov106_02296244(S *s);
void func_ov106_02296260(S *s);
void func_ov106_02296288(S *s);
void func_ov106_022962c4(S *s);
void func_ov106_02296314(S *s);
void func_ov106_02296394(S *s);
void func_ov106_022963fc(S *s);
void func_ov106_0229642c(S *s);
void func_ov106_022964b0(S *s);
void func_ov106_02296534(S *s);
void func_ov106_02296588(S *s);
void func_ov106_022966b8(S *s);
void func_ov106_02296734(S *s);
}

static inline BOOL Unk_ov106_022966b8_Both()
{
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {

BOOL func_ov106_02295e48(S *s, u32 v) {
    if (v >= 0x15 && v <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov106_02295e58(S *s, u32 v) {
    if (v >= 0xb && v <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

void func_ov106_02295e68(S *s) {
    func_020b87d0(s->unk_0c0);
}

void func_ov106_02295e74(S *s) {
    func_0200402c(0x28);
    func_ov002_022030ac(s->unk_3c34, 4);
    func_ov002_02200a58(s, 0x1f);
    s->unk_0be = 1;
}

void func_ov106_02295ea0(S *s) {
    func_0200402c(0x27);
    func_ov002_022030ac(s->unk_3c34, 3);
    func_ov002_02200a58(s, 0x1f);
    s->unk_0be = 0;
}

void func_ov106_02295ecc(S *s, u32 v) {
    volatile u8 buf[2];
    buf[0] = data_021edb68;
    buf[0] = v;
    func_ov002_022041b8(s->unk_259c, (void *)buf, 1);
    func_ov002_02200a58(s, 0x1a);
    func_ov002_0220085c(s, 0, 0);
}

u32 func_ov106_02295f0c(S *s) {
    Unk_ov106_02298180_Elem *p = s->unk_2924;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (func_02065578(p)) {
            return (u8)(i + 0x15);
        }
    }
    return 0x20;
}

u32 func_ov106_02295f40(S *s) {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x20;
    }
    return (u8)(r + 0xb);
}

void func_ov106_02295f60(S *s, u32 a, u32 b) {
    func_ov106_02295840(s, a);
    s->unk_0ac = func_ov106_02295c28(s, a);
    s->unk_0b0 = func_ov106_02295be0(s, a);
    func_ov106_02295fcc(s, b, 4);
}

void func_ov106_02295f98(S *s, u32 a, s32 c) {
    u32 r = 0x20;
    if (c >= 0xc0) {
        if (func_ov106_02295e48(s, a)) {
            r = func_ov106_02295f40(s);
        }
    }
    if (r != 0x20) {
        a = r;
    }
    func_ov106_02295fcc(s, a, 4);
}

void func_ov106_02295fcc(S *s, u32 a, u32 b) {
    s->unk_0b7 = a;
    func_ov002_022026f4(s->unk_2220, s->unk_0ac, s->unk_0b0);
    s32 x = func_ov106_02295c28(s, a);
    s32 y = func_ov106_02295be0(s, a);
    func_ov002_022026c4(s->unk_2220, x, y, b);
    func_ov002_02202718(s->unk_2220);
    func_ov106_0229589c(s);
    func_ov002_02200a58(s, 0x15);
}

void func_ov106_02296030(S *s, u32 a) {
    s->unk_0b7 = a;
    func_ov002_022006e4(s->unk_2160, 1);
    func_ov106_02295840(s, a);
    if (s->unk_0b4 == 1) {
        s->unk_0bb = 8;
    }
    func_ov106_022958c4(s);
    func_ov094_02292380();
}

void func_ov106_02296078(S *s, u32 a) {
    s->unk_0b7 = a;
    func_ov002_022006e4(s->unk_2160, 1);
    func_ov106_02295840(s, a);
    if (s->unk_0b4 == 1) {
        func_ov002_02200a58(s, 4);
    }
    func_ov106_022958f0(s);
    func_ov094_02292380();
}

void func_ov106_022960c0(S *s, u32 a) {
    s->unk_0b5 = a;
    func_ov002_02200a58(s, 1);
    u32 r6 = data_021ef5f0;
    u32 r7 = data_021ef5ec;
    s->unk_0a4 = func_ov106_02295c28(s, s->unk_0b5) - r6;
    s->unk_0a8 = func_ov106_02295be0(s, s->unk_0b5) - r7;
    s->unk_0b6 = a;
    func_ov002_022006b8(s->unk_2160);
    func_ov002_022006c0(s->unk_2160);
    s->unk_0bf = 2;
    if (func_ov106_02295b88(s, a)) {
        func_ov106_02294dfc(s, 4);
    } else {
        func_ov106_02294e0c(s, 4);
        func_ov094_0229238c();
    }
}

void func_ov106_02296158(S *s) {
    if (func_0206ef0c()) {
        func_ov106_022961d8(s);
    } else {
        func_ov106_02296178(s);
    }
}

void func_ov106_02296178(S *s) {
    func_ov002_02200980(s);
    s->unk_0be = 1;
    func_ov002_02202d00(s->unk_2238);
    ((Unk_ov106_02295e74_Sub *)s->unk_2238)->vfunc_0c();
    s32 t = func_ov002_022030f4(s->unk_3c34, 4);
    s32 u = func_ov002_022030b8(s->unk_3c34, 4);
    func_ov002_02202a40(s->unk_2238, t, u);
    func_ov002_02200a58(s, 0x1d);
}

void func_ov106_022961d8(S *s) {
    func_ov106_02295708(s);
    func_ov002_02200a58(s, 0x1c);
}

void func_ov106_022961f0(S *s) {
    if (func_0206ef0c()) {
        func_ov106_02296244(s);
    } else {
        func_ov106_02296210(s);
    }
}

void func_ov106_02296210(S *s) {
    s->unk_0b6 = 0x20;
    func_ov106_02295780(s);
    func_ov002_02200980(s);
    func_ov106_02295960(s);
    func_ov002_02200a58(s, 7);
    func_ov106_02295ae0(s, s->unk_0b8);
}

void func_ov106_02296244(S *s) {
    func_ov106_02295708(s);
    func_ov106_02295b2c(s);
    func_ov002_02200a58(s, 0);
}

void func_ov106_02296260(S *s) {
    if (func_ov094_02293c1c(s->unk_b58)) {
        s->unk_0b4 = 0;
        func_ov106_022961f0(s);
    }
}

void func_ov106_02296288(S *s) {
    if (func_ov002_02202718(s->unk_2220)) {
        func_ov106_02295818(s, s->unk_0b7);
        func_ov002_02200a58(s, 0x24);
        func_ov094_02292398();
    } else {
        func_ov106_0229589c(s);
    }
}

void func_ov106_022962c4(S *s) {
    u32 r5 = func_ov106_02295f0c(s);
    if (r5 == 0x20) {
        s->unk_0b8 = 0x1f;
        func_ov106_022961f0(s);
    } else {
        u32 r2 = func_ov106_02295f40(s);
        if (r2 == 0x20) {
            func_ov106_02295ecc(s, 6);
        } else {
            func_ov106_02295f60(s, r5, r2);
            func_ov002_02200a58(s, 0x25);
        }
    }
}

void func_ov106_02296314(S *s) {
    if (func_ov002_0220308c(s->unk_3c34)) {
        if (func_0208d534(s->unk_2238)) {
            s32 r4 = func_ov002_0220306c(s->unk_3c34);
            s32 r6 = func_ov002_022030f4(s->unk_3c34, -1);
            s32 r2 = func_ov002_022030b8(s->unk_3c34, -1);
            func_ov002_02202a40(s->unk_2238, r4 + r6, r4 + r2);
        }
    } else {
        func_ov106_02295708(s);
        s->unk_08c = 4;
        func_ov106_02294dfc(s, 0x100);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov106_02296394(S *s) {
    if (func_ov002_02203f08(s->unk_28b4)) {
        if (func_0208d534(s->unk_2238)) {
            s32 r4 = func_ov002_02203f78(s->unk_28b4, 1);
            s32 r2 = func_ov002_02203f28(s->unk_28b4, 1);
            func_ov002_02202a40(s->unk_2238, r4, r2);
        }
    } else {
        func_ov106_02295708(s);
        func_ov002_02200a50(s, 9);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov106_022963fc(S *s) {
    BOOL r4 = func_ov002_02200908(s, -1);
    s->unk_0a0 = func_ov002_02200920(s);
    if (r4) {
        func_ov106_022961f0(s);
    }
}

void func_ov106_0229642c(S *s) {
    BOOL r4 = func_ov002_02204140(s->unk_259c);
    r4 &= func_ov002_022008fc(s, -1);
    s->unk_0a0 = func_ov002_02200920(s);
    if (r4) {
        func_ov002_0220301c(s->unk_3c34);
        if (s->unk_0be == 0) {
            func_ov002_02200874(s, 0, 0);
            func_ov002_02203510(s->unk_3c34, 0x88);
            func_ov002_02200a58(s, 0x21);
        } else {
            func_ov002_02203698(s->unk_3c34);
            func_ov002_02200a50(s, 4);
            func_ov002_02200a60(s, 1);
        }
    }
}

void func_ov106_022964b0(S *s) {
    if (func_ov002_0220308c(s->unk_3c34)) {
        if (func_0208d534(s->unk_2238)) {
            s32 r4 = func_ov002_0220306c(s->unk_3c34);
            s32 r6 = func_ov002_022030f4(s->unk_3c34, -1);
            s32 r2 = func_ov002_022030b8(s->unk_3c34, -1);
            func_ov002_02202a40(s->unk_2238, r4 + r6, r4 + r2);
        }
    } else {
        func_ov106_02295708(s);
        func_ov002_02200a58(s, 0x20);
        func_ov002_0220085c(s, 0, 0);
        func_ov002_02204174(s->unk_259c);
    }
}

void func_ov106_02296534(S *s) {
    if (func_0208d4fc(s->unk_2238)) {
        func_ov002_02200a58(s, 0x1f);
        if (s->unk_0be != 0) {
            func_ov002_022030ac(s->unk_3c34, 4);
            func_0200402c(0x28);
        } else {
            func_ov002_022030ac(s->unk_3c34, 3);
            func_0200402c(0x27);
        }
    }
}

void func_ov106_02296588(S *s) {
    if (func_0206e61c()) {
        func_ov106_02295708(s);
        func_ov106_02295e74(s);
    } else if (func_ov002_022009d4(s)) {
        func_ov106_022961d8(s);
    } else {
        u32 t = data_021f47d8[1];
        if (t & 1) {
            func_ov002_02202b68(s->unk_2238);
            func_ov002_02200a58(s, 0x1e);
        } else if (t & 2) {
            func_ov106_02295708(s);
            func_ov106_02295e74(s);
        } else if (t & 8) {
            func_ov106_02295708(s);
            func_ov106_02295ea0(s);
        } else {
            u32 r4 = s->unk_0be;
            u32 r6 = func_ov002_022009c8(s);
            if (func_ov002_0220126c(r6)) {
                if (s->unk_0be != 0) {
                    s->unk_0be = ((volatile S *)s)->unk_0be - 1;
                }
            } else if (func_ov002_0220125c(r6)) {
                if (s->unk_0be < 1) {
                    s->unk_0be = ((volatile S *)s)->unk_0be + 1;
                }
            }
            if (r4 != s->unk_0be) {
                if (s->unk_0be != 0) {
                    s32 a = func_ov002_022030f4(s->unk_3c34, 4);
                    s32 b = func_ov002_022030b8(s->unk_3c34, 4);
                    func_ov106_02295660(s, a, b);
                } else {
                    s32 a = func_ov002_022030f4(s->unk_3c34, 3);
                    s32 b = func_ov002_022030b8(s->unk_3c34, 3);
                    func_ov106_02295660(s, a, b);
                }
            }
        }
    }
}

void func_ov106_022966b8(S *s) {
    if (func_0206e61c()) {
        func_ov106_02295e74(s);
    }
    if (func_ov002_02200a14(s, 1)) {
        func_ov106_02296178(s);
    } else if (Unk_ov106_022966b8_Both()) {
        if (func_ov002_02203110(s->unk_3c34, 3)) {
            func_ov106_02295ea0(s);
        } else if (func_ov002_02203110(s->unk_3c34, 4)) {
            func_ov106_02295e74(s);
        }
    }
}

void func_ov106_02296734(S *s) {
    BOOL r4 = func_ov002_02200908(s, -1);
    s->unk_0a0 = func_ov002_02200920(s);
    if (r4) {
        func_ov106_02296158(s);
    }
}

}
