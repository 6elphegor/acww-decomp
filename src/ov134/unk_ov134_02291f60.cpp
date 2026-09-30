#include "types.h"

extern "C" {
extern u16 data_021f47d8;
void func_02115e48(void *dst, void *src, u32 n);
void func_02116048(void *dst, void *src, u32 n);
s32 func_02133150(s32 a, s32 b);
void func_020b8670(void *a, void *b, u32 c, u32 d);
s32 func_0200402c(s32 a);
BOOL func_0208d9a8(void *p);
void func_0208dae8(void *p, s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
s32 func_0209ce48(u32 a, u32 b);
void func_0209d164(void *p, s32 a);
void func_0209d2c0(void *p, s32 a);
s32 func_0209d3d0(void *a, void *b, s32 c);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
}

// Sub-object at +0x18 (real class Unk_ov002_022046b0, size 0x48)
class Unk_ov134_02291f60_Sub {
public:
    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);

    u8 pad[0x48];
};

class Unk_ov134_02291f60 {
public:
    void func_ov134_02291f60(u32 m);
    void func_ov134_02291f70(u32 m);
    BOOL func_ov134_02291f80(u32 m);
    void func_ov134_02291f94(s32 t);
    void func_ov134_02292074();
    s32 func_ov134_022920d0(s32 y);
    BOOL func_ov134_022920f4();
    BOOL func_ov134_02292134();
    BOOL func_ov134_02292170();
    s32 func_ov134_0229219c(u32 pad);
    void func_ov134_02292340(s32 y);
    s32 func_ov134_0229236c();
    s32 func_ov134_022923a0();
    void func_ov134_022923c0();
    void func_ov134_022923d4();
    void func_ov134_022923fc();
    BOOL func_ov134_02292420();
    void func_ov134_02292444();
    void func_ov134_02292450();
    void func_ov134_022924b0(s32 x);
    void func_ov134_022924d8(s32 x);
    void func_ov134_022924fc();
    BOOL func_ov134_02292530();
    BOOL func_ov134_02292558(s32 x, s32 y);
    BOOL func_ov134_0229258c(s32 v);
    BOOL func_ov134_02292620(s32 v, u8 n);
    BOOL func_ov134_02292678(s32 v, u8 n);
    BOOL func_ov134_022926d0();

    // other groups
    void func_ov134_02292c3c(s32 v);
    void func_ov134_022933a4(s32 a, s32 b);
    s32 func_ov134_022945b0(u32 i, u32 v);
    s32 func_ov134_022945f0(u32 i, void *p);
    u32 func_ov134_0229462c(u32 i);
    void func_ov134_02294638(u32 i);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x10];
    /* 0x18 */ Unk_ov134_02291f60_Sub unk_18;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ u8 unk_70[0x18];
    /* 0x88 */ s32 unk_88;
    /* 0x8c */ s32 unk_8c;
    /* 0x90 */ u16 unk_90;
    /* 0x92 */ u8 unk_92[0xe];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[3];
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6[5];
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae[2];
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4[3];
    /* 0xb7 */ s8 unk_b7;
    /* 0xb8 */ u8 unk_b8[3];
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be[10];
    /* 0xc8 */ u8 unk_c8[8];
    /* 0xd0 */ u8 unk_d0[8];
};

void Unk_ov134_02291f60::func_ov134_02291f94(s32 t) {
    u8 *p = (u8 *)this;
    func_02115e48(p + 0x2584, p + 0x25a4, 0x20);
    s32 c1 = *(u16 *)(p + 0x25a0);
    u8 r1 = c1 & 0x1f;
    u8 g1 = (c1 & 0x3e0) >> 5;
    u8 b1 = (c1 & 0x7c00) >> 10;
    s32 w = 3 - t;
    s32 c2 = *(u16 *)(p + 0x25a2);
    u8 r = ((u8)(c2 & 0x1f) * t + r1 * w) / 3;
    u8 g = ((u8)((c2 & 0x3e0) >> 5) * t + g1 * w) / 3;
    u8 b = ((u8)((c2 & 0x7c00) >> 10) * t + b1 * w) / 3;
    *(u16 *)(p + 0x25c2) = r | (g << 5) | (b << 10);
    func_020b8670(p + 0x560, p + 0x25a4, unk_a4, 9);
}

void Unk_ov134_02291f60::func_ov134_02292074() {
    if (func_ov134_02291f80(1)) {
        return;
    }
    s32 a = unk_00;
    s32 b = unk_04;
    if (b > 0) {
        if (b < 8) {
            a += b;
            unk_04 = 0;
        } else {
            a += 8;
            unk_04 = b - 8;
        }
    } else if (b < 0) {
        if (b > -8) {
            a += b;
            unk_04 = 0;
        } else {
            a -= 8;
            unk_04 = b + 8;
        }
    }
    if (a != unk_00) {
        func_ov134_02292c3c(a);
        func_ov134_022923fc();
    }
}

s32 Unk_ov134_02291f60::func_ov134_022920d0(s32 y) {
    s32 d = unk_ab;
    d -= unk_00;
    s32 v = y - d;
    if (v < 0) {
        v = 0;
    }
    v >>= 4;
    s32 lim = unk_ac;
    if (v >= lim) {
        v = lim - 1;
    }
    return v;
}

BOOL Unk_ov134_02291f60::func_ov134_022920f4() {
    if ((s32)*(volatile u8 *)&unk_b0 < (s32)*(volatile u8 *)&unk_ac) {
        unk_b0 = *(volatile u8 *)&unk_b0 + 1;
        s32 t = func_ov134_0229236c();
        if (t > 0xa0) {
            unk_04 = unk_04 + (t - 0xa0);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292134() {
    if (*(volatile u8 *)&unk_b0 > 1) {
        unk_b0 = *(volatile u8 *)&unk_b0 - 1;
        s32 t = func_ov134_0229236c();
        if (t < 0x30) {
            unk_04 = unk_04 - (0x30 - t);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292170() {
    s32 t = unk_b0 - 1;
    if (func_ov134_0229258c(t)) {
        return FALSE;
    }
    unk_ad = t;
    return TRUE;
}

s32 Unk_ov134_02291f60::func_ov134_0229219c(u32 pad) {
    if (unk_b0 == 0) {
        unk_b7 = 0;
        if (func_ov002_0220126c(pad)) {
            unk_b0 = 1;
            func_ov134_02292340(unk_18.func_ov002_02202e60());
            return 1;
        }
    } else {
        if (func_ov002_0220125c(pad)) {
            unk_b0 = 0;
            unk_b7 = 0;
            return 1;
        }
        s32 v = unk_b7;
        if (v >= 6) {
            if (data_021f47d8 & 0x40) {
                if (func_ov134_02292134()) {
                    if (unk_04 != 0) {
                        func_ov134_02292c3c(unk_00 + unk_04);
                        unk_04 = 0;
                        func_ov134_022923fc();
                    }
                    if (func_ov134_02291f80(0x100)) {
                        func_ov134_02291f60(0x100);
                        func_0200402c(0xb);
                    } else {
                        func_ov134_02291f70(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        } else if (v <= -6) {
            if (data_021f47d8 & 0x80) {
                if (func_ov134_022920f4()) {
                    if (unk_04 != 0) {
                        func_ov134_02292c3c(unk_00 + unk_04);
                        unk_04 = 0;
                        func_ov134_022923fc();
                    }
                    if (func_ov134_02291f80(0x100)) {
                        func_ov134_02291f60(0x100);
                        func_0200402c(0xb);
                    } else {
                        func_ov134_02291f70(0x100);
                    }
                    return 3;
                }
            } else {
                unk_b7 = 0;
            }
        }
        if (func_ov002_0220128c(pad)) {
            s32 t = unk_b7;
            if (t < 0) {
                unk_b7 = 1;
            } else {
                unk_b7 = t + 1;
            }
            if (func_ov134_02292134()) {
                return 2;
            }
        } else if (func_ov002_0220127c(pad)) {
            s32 t = unk_b7;
            if (t > 0) {
                unk_b7 = -1;
            } else {
                unk_b7 = t - 1;
            }
            if (func_ov134_022920f4()) {
                return 2;
            }
        }
    }
    return 0;
}

void Unk_ov134_02291f60::func_ov134_02292340(s32 y) {
    if (unk_b0 != 0) {
        if (y < 0x28) {
            y = 0x28;
        } else if (y > 0xa8) {
            y = 0xa8;
        }
        unk_b0 = func_ov134_022920d0(y) + 1;
    }
}

s32 Unk_ov134_02291f60::func_ov134_0229236c() {
    if (unk_b0 == 0) {
        return unk_18.func_ov002_02202e60();
    }
    return unk_ab + ((unk_b0 - 1) << 4) - unk_00 + 8 - unk_04;
}

s32 Unk_ov134_02291f60::func_ov134_022923a0() {
    if (unk_b0 == 0) {
        return unk_18.func_ov002_02202e84();
    }
    return unk_60;
}

void Unk_ov134_02291f60::func_ov134_022923c0() {
    func_0208dae8(&unk_18, unk_60 - 0x78, unk_64 - 0x60);
}

void Unk_ov134_02291f60::func_ov134_022923d4() {
    func_ov134_02292c3c(func_02133150(unk_8c * (unk_64 - 0x20), 0x80));
    unk_04 = 0;
}

void Unk_ov134_02291f60::func_ov134_022923fc() {
    unk_64 = func_02133150(unk_00 << 7, unk_8c) + 0x20;
    func_ov134_022923c0();
}

BOOL Unk_ov134_02291f60::func_ov134_02292420() {
    if (func_0208d9a8(&unk_18)) {
        unk_18.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov134_02291f60::func_ov134_02292444() {
    unk_18.func_ov002_02202ef4();
}

void Unk_ov134_02291f60::func_ov134_02292450() {
    s32 old = unk_64;
    u32 k = data_021f47d8;
    if (k & 0x40) {
        unk_64 = old - 4;
        if (unk_64 < 0x20) {
            unk_64 = 0x20;
        }
    } else if (k & 0x80) {
        unk_64 = old + 4;
        if (unk_64 > 0xa0) {
            unk_64 = 0xa0;
        }
    }
    if (old != unk_64) {
        func_ov134_022923d4();
        func_ov134_022923c0();
        func_ov002_02202e54(&unk_18);
    }
}

void Unk_ov134_02291f60::func_ov134_022924b0(s32 x) {
    x -= 8;
    if (x < 0x20) {
        x = 0x20;
    }
    if (x > 0xa0) {
        x = 0xa0;
    }
    func_020e761c(&unk_64, x, 8);
    func_ov134_022924fc();
}

void Unk_ov134_02291f60::func_ov134_022924d8(s32 x) {
    unk_64 = x + unk_68;
    if (unk_64 < 0x20) {
        unk_64 = 0x20;
    }
    if (unk_64 > 0xa0) {
        unk_64 = 0xa0;
    }
    func_ov134_022924fc();
}

void Unk_ov134_02291f60::func_ov134_022924fc() {
    func_ov134_022923d4();
    func_ov134_022923c0();
    s32 t = unk_6c - unk_64;
    if (t >= 4 || t <= -4) {
        func_ov002_02202e54(&unk_18);
        unk_6c = unk_64;
    }
}

BOOL Unk_ov134_02291f60::func_ov134_02292530() {
    if (unk_b0 == 0) {
        unk_18.func_ov002_02202f00();
        func_ov002_02202e48(&unk_18);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292558(s32 x, s32 y) {
    if (unk_18.func_ov002_02202f18(x, y)) {
        unk_68 = unk_64 - y;
        unk_18.func_ov002_02202f00();
        unk_6c = unk_64;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_0229258c(s32 v) {
    u32 t = unk_a5;
    if (t == 1) goto inc;
    if (t == 2) {
inc:
        v++;
    }
    if (unk_a0 == 1 && t == 3) {
        u8 hi = unk_b3;
        u8 lo = unk_b2;
        if (lo < hi) {
            if (v < lo || v > hi) {
                return TRUE;
            }
        } else {
            if (v < lo && v > hi) {
                return TRUE;
            }
        }
        return FALSE;
    }
    if (func_ov134_02291f80(0x80)) {
        if (func_ov134_02292620(v, unk_a5)) {
            return TRUE;
        }
    }
    if (func_ov134_02291f80(0x40)) {
        return func_ov134_02292678(v, unk_a5);
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292620(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = func_ov134_0229462c(i);
        if (a != func_ov134_022945f0(i, unk_c8)) {
            return FALSE;
        }
    }
    if (v < func_ov134_022945f0(n, unk_c8)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_02292678(s32 v, u8 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        u32 a = func_ov134_0229462c(i);
        if (a != func_ov134_022945f0(i, unk_d0)) {
            return FALSE;
        }
    }
    if (v > func_ov134_022945f0(n, unk_d0)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov134_02291f60::func_ov134_022926d0() {
    u16 m = 0;
    u32 cur = func_ov134_0229462c(unk_a5);
    func_ov134_022945b0(unk_a5, unk_ad);
    m |= 1 << unk_a5;
    s32 r = func_0209ce48(unk_bd, unk_bc);
    if (r < unk_bb) {
        unk_bb = r;
        m |= 4;
    }
    if (unk_a5 <= 2) {
        func_ov134_022933a4(5, 3);
        m |= 0x20;
    }
    s32 dir = 0;
    if (unk_a5 == 3 && unk_a0 == 1) {
        u8 lo = unk_b2;
        if (cur < lo) {
            if (unk_ad >= lo) {
                func_0209d164(unk_b8, 1);
                dir = -1;
            }
        } else {
            if (unk_ad < lo) {
                func_0209d2c0(unk_b8, 1);
                dir = 1;
            }
        }
        if (dir != 0) {
            m |= 0x27;
        }
    }
    if (func_ov134_02291f80(0x80)) {
        if (func_0209d3d0(unk_c8, unk_b8, 0x3f) == 1) {
            func_02116048(unk_c8, unk_b8, 8);
            m = 0xffff;
        }
    }
    if (func_ov134_02291f80(0x40)) {
        if (func_0209d3d0(unk_d0, unk_b8, 0x3f) == -1) {
            func_02116048(unk_d0, unk_b8, 8);
            m = 0xffff;
        }
    }
    u8 i;
    for (i = 0; i <= 5; i++) {
        if (m & (1 << i)) {
            func_ov134_02294638(i);
        }
    }
    if ((u8)(unk_a5 + 0xfd) <= 1) {
        if (cur == unk_ad) {
            return FALSE;
        }
        u32 a = func_ov134_0229462c(4);
        u32 b = func_ov134_0229462c(3);
        unk_88 = a + b * 0x3c;
        unk_88 = unk_88 + dir * 0x5a0;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov134_02291f60::func_ov134_02291f60(u32 m) {
    unk_90 &= ~m;
}

void Unk_ov134_02291f60::func_ov134_02291f70(u32 m) {
    unk_90 |= m;
}

BOOL Unk_ov134_02291f60::func_ov134_02291f80(u32 m) {
    if (unk_90 & m) {
        return TRUE;
    }
    return FALSE;
}
