#include "types.h"

struct Unk_ov106_02295548_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov106_02295548 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xa4 - 0x8e];
    s32 unk_0a4;
    s32 unk_0a8;
    s32 unk_0ac;
    s32 unk_0b0;
    u8 unk_0b4;
    u8 pad_0b5;
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 pad_0b9[2];
    u8 unk_0bb;
    u8 unk_0bc;
    u8 unk_0bd;
    u8 pad_0be[0xf8 - 0xbe];
    u8 unk_0f8[0xb58 - 0xf8];
    u8 unk_b58[0x2160 - 0xb58];
    u8 unk_2160[0x2220 - 0x2160];
    u8 unk_2220[0x2238 - 0x2220];
    u8 unk_2238[0x229c - 0x2238];
    u8 unk_229c[0x3d98 - 0x229c];
    u8 unk_3d98[0x3e8c - 0x3d98];
    u8 unk_3e8c[0x100];
};

typedef Unk_ov106_02295548 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;

extern "C" {
BOOL func_0206ef00();
void func_02089ad8(void *p, s32 x, s32 y);
s32 func_0208d538(void *p, s32 v);
void func_02065e70(void *p, void *q);
s32 func_02065578(void *p);
void *func_0209750c();
void *func_020986c8(void *s);
void *func_02065c8c(void *p);
u16 func_0204b318(void *p, s32 a);
void func_0203c42c(void *a, u16 *p, s32 skip, s32 set);

void func_ov094_022943a4(void *p, u32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 a);
void func_ov094_022935dc(void *p);
void *func_ov094_0229433c(void *p, u32 a);
void func_ov094_022942f4(void *p, u32 a);
void func_ov094_02294420(void *p, void *q, u32 a);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *c);
BOOL func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
BOOL func_ov094_022941ec(void *p, u32 a);
void func_ov094_022941f8(void *p, s32 a);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_022943f8(void *p);
void func_ov094_02294318(void *p, u32 a, void *q);
s32 func_ov094_02294610(void *p);
s32 func_ov094_022945c8(void *p, s32 a, s32 b);
void func_ov094_022935dc(void *p);

void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_02200a58(void *p, s32 s);
u32 func_ov002_02201a70(void *p, s32 a);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 a);
void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202d00(void *p, s32 a);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);

void func_ov106_02294dfc(S *s, u32 a);
BOOL func_ov106_02294e1c(S *s, u32 a);
BOOL func_ov106_02295e48(S *s, u32 a);
BOOL func_ov106_02295e58(S *s, u32 a);
void func_ov106_022954f4(S *s);

void func_ov106_02295548(S *s);
void func_ov106_022955ac(S *s);
void func_ov106_02295610(S *s);
void func_ov106_02295660(S *s, s32 a, s32 b);
void func_ov106_02295694(S *s);
void func_ov106_02295708(S *s);
s32 func_ov106_0229572c(S *s);
s32 func_ov106_0229573c(S *s);
void func_ov106_02295780(S *s);
void func_ov106_022957d8(S *s, u32 a);
void func_ov106_02295818(S *s, u32 a);
void func_ov106_02295840(S *s, u32 a);
void func_ov106_0229589c(S *s);
void func_ov106_022958c4(S *s);
void func_ov106_022958f0(S *s);
void func_ov106_0229591c(S *s);
void func_ov106_02295960(S *s);
void func_ov106_022959c4(S *s);
BOOL func_ov106_02295a44();
void func_ov106_02295a88(S *s, u32 a);
void func_ov106_02295ac4(S *s);
void func_ov106_02295ae0(S *s, u32 a);
void func_ov106_02295b2c(S *s);
BOOL func_ov106_02295b48(S *s, u32 a);
BOOL func_ov106_02295b88(S *s, u32 a);
void func_ov106_02295bbc(S *s);
s32 func_ov106_02295be0(S *s, u32 a);
s32 func_ov106_02295c28(S *s, u32 a);
void func_ov106_02295c70(S *s, void *p);
void *func_ov106_02295cc4(S *s, u32 a);
void func_ov106_02295d04(S *s, u32 a, void *p);
BOOL func_ov106_02295d54(S *s, u32 a);
u32 func_ov106_02295d9c(S *s, u32 a, s32 b, s32 c);
u8 func_ov106_02295df8(S *s, u32 a);
u8 func_ov106_02295e18(S *s, u32 a);
BOOL func_ov106_02295e3c(S *s, u32 a);

void func_ov106_02295548(S *s) {
    s32 r4;
    if (func_ov106_02294e1c(s, 0x10000)) {
        s->unk_0bd = 1;
    } else {
        s->unk_0bd = 0;
    }
    r4 = func_ov002_022014a4(s->unk_229c);
    func_ov002_02202a40(s->unk_2238, r4, func_ov002_02201498(s->unk_229c, s->unk_0bd));
    func_ov002_02202d00(s->unk_2238, 7);
}

void func_ov106_022955ac(S *s) {
    s32 r4;
    s->unk_0bc = 4;
    s->unk_0bd = func_ov002_02201a70(s->unk_229c, 1);
    r4 = func_ov002_022014a4(s->unk_229c);
    func_ov002_02202a40(s->unk_2238, r4, func_ov002_02201498(s->unk_229c, s->unk_0bd));
    func_0208d538(s->unk_2238, 8);
    func_ov002_02200a58(s, 0x17);
}

void func_ov106_02295610(S *s) {
    s32 r4 = func_ov002_022014a4(s->unk_229c);
    func_ov002_02202a18(s->unk_2238, r4, func_ov002_02201498(s->unk_229c, s->unk_0bd), 2);
    s->unk_0bb = s->unk_08d;
    func_ov002_02200a58(s, 0xd);
}

void func_ov106_02295660(S *s, s32 a, s32 b) {
    func_ov002_022029e8(s->unk_2238, a, b, 3, 1);
    s->unk_0bb = s->unk_08d;
    func_ov002_02200a58(s, 0xd);
}

void func_ov106_02295694(S *s) {
    s32 r5;
    if (func_ov106_02294e1c(s, 8)) {
        r5 = func_ov106_0229573c(s);
        func_ov002_02202a40(s->unk_2238, r5, func_ov106_0229572c(s));
        func_ov106_02294dfc(s, 8);
    } else {
        r5 = func_ov106_0229573c(s);
        func_ov002_022029e8(s->unk_2238, r5, func_ov106_0229572c(s), 3, 1);
        s->unk_0bb = s->unk_08d;
        func_ov002_02200a58(s, 0xd);
    }
}

void func_ov106_02295708(S *s) {
    func_ov002_02202d00(s->unk_2238, 0);
    ((Unk_ov106_02295548_Vt *)s->unk_2238)->vfunc_0c();
}

s32 func_ov106_0229572c(S *s) {
    return func_ov106_02295be0(s, s->unk_0b8);
}

s32 func_ov106_0229573c(S *s) {
    s32 r4 = func_ov106_02295c28(s, s->unk_0b8);
    if (func_ov106_02294e1c(s, 0x20)) {
        r4 += 0x100;
    } else if (func_ov106_02294e1c(s, 0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

void func_ov106_02295780(S *s) {
    s32 r4 = func_ov106_0229573c(s);
    func_ov002_02202a40(s->unk_2238, r4, func_ov106_0229572c(s));
    if (func_ov106_02295e3c(s, s->unk_0b8)) {
        func_ov002_02202d00(s->unk_2238, 7);
    } else {
        func_ov002_02202d00(s->unk_2238, 1);
    }
    func_ov106_022954f4(s);
}

void func_ov106_022957d8(S *s, u32 a) {
    if (s->unk_0b4 == 1) {
        func_02065e70(s->unk_3e8c, s->unk_3d98);
        func_ov106_02295840(s, a);
        func_ov106_02295d04(s, a, s->unk_3e8c);
    }
}

void func_ov106_02295818(S *s, u32 a) {
    if (s->unk_0b4 == 1) {
        func_ov106_02295d04(s, a, s->unk_3d98);
    }
    s->unk_0b4 = 0;
}

void func_ov106_02295840(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        u32 r4 = func_ov106_02295e18(s, a);
        s->unk_0b4 = 1;
        func_02065e70(s->unk_3d98, func_ov094_0229433c(s->unk_b58, r4));
        func_ov094_022942f4(s->unk_b58, r4);
    }
}

void func_ov106_0229589c(S *s) {
    s->unk_0ac = func_ov002_02202710(s->unk_2220);
    s->unk_0b0 = func_ov002_02202708(s->unk_2220);
}

void func_ov106_022958c4(S *s) {
    s->unk_0ac = func_ov002_022028c8(s->unk_2238) - 2;
    s->unk_0b0 = func_ov002_022028a0(s->unk_2238) - 4;
}

void func_ov106_022958f0(S *s) {
    s->unk_0ac = s->unk_0a4 + data_021ef5f0;
    s->unk_0b0 = s->unk_0a8 + data_021ef5ec;
}

void func_ov106_0229591c(S *s) {
    if (func_ov106_02294e1c(s, 0x40) == 0) {
        if (s->unk_0b4 != 0) {
            if (s->unk_0b4 == 1) {
                func_ov094_0229405c(s->unk_b58, s->unk_0ac, s->unk_0b0, s->unk_3d98);
            }
        }
    }
}

void func_ov106_02295960(S *s) {
    if (func_ov106_02295e58(s, s->unk_0b8) || func_ov106_02295e48(s, s->unk_0b8)) {
        if (func_ov106_02295b48(s, s->unk_0b8)) {
            func_ov002_022006b0(s->unk_2160);
        } else {
            s->unk_0b6 = s->unk_0b8;
            func_ov002_022006b8(s->unk_2160);
        }
    } else {
        func_ov002_022006b0(s->unk_2160);
    }
}

void func_ov106_022959c4(S *s) {
    s32 r6 = func_ov106_02295c28(s, s->unk_0b6) - 0x6d;
    s32 r4 = func_ov106_02295be0(s, s->unk_0b6) - 0x78;
    if (func_0206ef00()) {
        r4 -= 8;
    }
    func_02089ad8(s->unk_2160, r6, r4);
    if (func_ov106_02295e58(s, s->unk_0b6) || func_ov106_02295e48(s, s->unk_0b6)) {
        func_ov094_02294420(s->unk_b58, s->unk_2160, func_ov106_02295e18(s, s->unk_0b6));
    }
}

BOOL func_ov106_02295a44() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov106_02295a88(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        func_ov094_022943a4(s->unk_b58, func_ov106_02295e18(s, a));
    }
}

void func_ov106_02295ac4(S *s) {
    func_ov094_0229358c(s->unk_0f8);
    func_ov094_022943b0(s->unk_b58);
}

void func_ov106_02295ae0(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        func_ov094_022943bc(s->unk_b58, func_ov106_02295e18(s, a));
        func_ov094_022935dc(s->unk_0f8);
    } else {
        func_ov106_02295b2c(s);
    }
}

void func_ov106_02295b2c(S *s) {
    func_ov094_022935dc(s->unk_0f8);
    func_ov094_022943f8(s->unk_b58);
}

BOOL func_ov106_02295b48(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        return func_ov094_02293d80(s->unk_b58, func_ov106_02295e18(s, a));
    }
    return TRUE;
}

BOOL func_ov106_02295b88(S *s, u32 a) {
    if (func_ov106_02295e58(s, a)) {
        return func_ov094_022941ec(s->unk_b58, func_ov106_02295e18(s, a));
    }
    return FALSE;
}

void func_ov106_02295bbc(S *s) {
    func_ov094_02293318(s->unk_0f8, 0, 0xe);
    func_ov094_022941f8(s->unk_b58, 4);
}

s32 func_ov106_02295be0(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        return func_ov094_02293d9c(s->unk_b58, func_ov106_02295e18(s, a)) - 0x10;
    }
    if (a == 0x1f) return 0xb6;
    return 0;
}

s32 func_ov106_02295c28(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        return func_ov094_02293df8(s->unk_b58, func_ov106_02295e18(s, a));
    }
    if (a == 0x1f) return 0xbc;
    return 0;
}

void func_ov106_02295c70(S *s, void *p) {
    if (func_02065578(p) == 2 || func_02065578(p) == 3) {
        void *r4 = func_0209750c();
        u16 v = 0xfff1;
        v = func_0204b318(func_02065c8c(p), 4);
        func_0203c42c(func_020986c8(r4), &v, 0, 1);
    }
}

void *func_ov106_02295cc4(S *s, u32 a) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        return func_ov094_0229433c(s->unk_b58, func_ov106_02295e18(s, a));
    }
    return 0;
}

void func_ov106_02295d04(S *s, u32 a, void *p) {
    if (func_ov106_02295e58(s, a) || func_ov106_02295e48(s, a)) {
        func_ov094_02294318(s->unk_b58, func_ov106_02295e18(s, a), p);
        if (func_ov106_02295e58(s, a)) {
            func_ov106_02295c70(s, p);
        }
    }
}

BOOL func_ov106_02295d54(S *s, u32 a) {
    if (func_ov106_02295b48(s, a) == 0) {
        func_02065e70(s->unk_3e8c, func_ov106_02295cc4(s, a));
        func_ov106_02295d04(s, s->unk_0b7, s->unk_3e8c);
    }
    func_ov106_02295818(s, a);
    return TRUE;
}

u32 func_ov106_02295d9c(S *s, u32 a, s32 b, s32 c) {
    s32 r4 = func_ov094_02294610(s->unk_b58);
    if (r4 == 0x37) {
        r4 = func_ov094_022945c8(s->unk_b58, a, b);
    }
    if (r4 != 0x37) {
        if (c != 0 && func_ov094_02293d80(s->unk_b58, r4)) return 0x20;
        return func_ov106_02295df8(s, r4);
    }
    return 0x20;
}

u8 func_ov106_02295df8(S *s, u32 a) {
    if (a <= 9) return a + 0xb;
    if (a >= 0x23 && a <= 0x2c) return a - 0xe;
    return 0x20;
}

u8 func_ov106_02295e18(S *s, u32 a) {
    if (a >= 0xb && a <= 0x14) return a - 0xb;
    if (a >= 0x15 && a <= 0x1e) return a + 0xe;
    return 0;
}

BOOL func_ov106_02295e3c(S *s, u32 a) {
    if (a == 0x1f) return TRUE;
    return FALSE;
}

}
