#include "types.h"

struct Unk_ov101_0229556c {
    u8 pad_000[0x9c];
    s32 unk_09c;
    s32 unk_0a0;
    s32 unk_0a4;
    s32 unk_0a8;
    u8 pad_0ac[0xaf - 0xac];
    u8 unk_0af;
    u8 unk_0b0;
    u8 unk_0b1;
    u8 unk_0b2;
    u8 unk_0b3;
    u8 unk_0b4;
    u8 unk_0b5;
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 unk_0b9;
    u8 pad_0ba[0xbc - 0xba];
    u8 unk_0bc[0xf4 - 0xbc];
    u8 unk_0f4[0xb54 - 0xf4];
    u8 unk_b54[0x215c - 0xb54];
    u8 unk_215c[0x221c - 0x215c];
    u8 unk_221c[0x2234 - 0x221c];
    u8 unk_2234[0x2298 - 0x2234];
    u8 unk_2298[0x2591 - 0x2298];
    u8 unk_2591[7];
    u8 unk_2598[0x26a0 - 0x2598];
    u8 unk_26a0[8];
};

typedef Unk_ov101_0229556c S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u16 data_021f47d8[];

extern "C" {
BOOL func_0206ef00();
BOOL func_0206ef0c();
u32 func_0206ea78();
void func_02089ad8(void *p, s32 x, s32 y);
s32 func_0208d644(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
void func_020b87d0(void *p);
void func_0200402c(u32 v);

void func_ov094_0229238c();
void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
u32 func_ov094_02293504(void *p, u32 v);
u32 func_ov094_0229352c(void *p, u32 v);
BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
void func_ov094_02293638(void *p, void *q, u32 a);
void func_ov094_02293308(void *p, u32 a);
u32 func_ov094_02293968(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943f8(void *p);

void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_02200980(void *self);
void func_ov002_02200a58(void *self, s32 s);
u32 func_ov002_022009c8(void *p);
BOOL func_ov002_022009d4(void *p);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02201aa0(void *p, u32 a, u32 b);
BOOL func_ov002_022019d0(void *p, u32 a, void *b, u32 c);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, s32 x);
s32 func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02202718(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202b68(void *p);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_022028fc(void *p);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);

void func_ov101_02294d4c(S *s, u32 v);
void func_ov101_02294d5c(S *s, u32 v);
void func_ov101_02294f6c(S *s);
void func_ov101_02294fdc(S *s);
void func_ov101_02295078(S *s);
void func_ov101_02295140(S *s);
void func_ov101_02295160(S *s);
void func_ov101_02295194(S *s);
void func_ov101_022951e0(S *s);
void func_ov101_02295240(S *s);
void func_ov101_02295304(S *s);
void func_ov101_0229537c(S *s);
void func_ov101_022953cc(S *s, u32 a);
void func_ov101_02295404(S *s, u32 a);
void func_ov101_02295430(S *s, u32 a);
void func_ov101_02295498(S *s);
void func_ov101_022954c0(S *s);
void func_ov101_02295518(S *s);
void func_ov101_02296670(S *s);

void func_ov101_02295660(S *s);
void func_ov101_02295620(S *s, u32 a);
s32 func_ov101_022957c8(S *s, u32 a);
s32 func_ov101_02295790(S *s, u32 a);
BOOL func_ov101_022956e0(S *s, u32 a);
BOOL func_ov101_02295710(S *s, u32 a);
u32 func_ov101_0229567c(S *s, u32 a);
u32 func_ov101_022956ac(S *s, u32 a);
void func_ov101_02295800(S *s, u32 a, u32 b, u32 c);
u32 func_ov101_022958cc(S *s, u32 a);
u32 func_ov101_022958dc(S *s, u32 a);
BOOL func_ov101_022958f8(S *s, u32 a);
void func_ov101_02295910(S *s, u32 a, u32 b);
void func_ov101_02295974(S *s, u32 a);
void func_ov101_02295a94(S *s);
void func_ov101_02295a60(S *s);

void func_ov101_0229556c(S *s) {
    s32 r6 = func_ov101_022957c8(s, s->unk_0b1) - 0x6d;
    s32 r4 = func_ov101_02295790(s, s->unk_0b1) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    func_02089ad8(s->unk_215c, r6, r4);
    if (func_ov101_022958f8(s, s->unk_0b1)) {
        func_ov094_02293638(s->unk_0f4, s->unk_215c, func_ov101_022958dc(s, s->unk_0b1));
    }
}

void func_ov101_022955d8(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        func_ov094_0229357c(s->unk_0f4, func_ov101_022958dc(s, a));
    }
}

void func_ov101_02295604(S *s) {
    func_ov094_0229358c(s->unk_0f4);
    func_ov094_022943b0(s->unk_b54);
}

void func_ov101_02295620(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        func_ov094_0229359c(s->unk_0f4, func_ov101_022958dc(s, a));
        func_ov094_022943f8(s->unk_b54);
    } else {
        func_ov101_02295660(s);
    }
}

void func_ov101_02295660(S *s) {
    func_ov094_022935dc(s->unk_0f4);
    func_ov094_022943f8(s->unk_b54);
}

u32 func_ov101_0229567c(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_02293504(s->unk_0f4, func_ov101_022958dc(s, a));
    }
    return 0xf1;
}

u32 func_ov101_022956ac(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_0229352c(s->unk_0f4, func_ov101_022958dc(s, a));
    }
    return 0xfff1;
}

BOOL func_ov101_022956e0(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_0229311c(s->unk_0f4, func_ov101_022958dc(s, a));
    }
    return TRUE;
}

BOOL func_ov101_02295710(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_0229333c(s->unk_0f4, func_ov101_022958dc(s, a));
    }
    return FALSE;
}

void func_ov101_02295740(S *s) {
    u32 m = func_0206ea78();
    u8 i = 0;
    s32 j = 0;
    do {
        if (!func_ov101_022956e0(s, i) && (m & (1 << j)) == 0) {
            func_ov094_02293308(s->unk_0f4, func_ov101_022958dc(s, i));
        }
        i++;
        j++;
    } while (i <= 0xe);
}

s32 func_ov101_02295790(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_02293610(s->unk_0f4, func_ov101_022958dc(s, a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

s32 func_ov101_022957c8(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        return func_ov094_02293624(s->unk_0f4, func_ov101_022958dc(s, a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

void func_ov101_02295800(S *s, u32 a, u32 b, u32 c) {
    if (func_ov101_022958f8(s, a)) {
        u32 t = func_ov101_022958dc(s, a);
        func_ov094_02293494(s->unk_0f4, t, b, c);
        func_ov094_02293434(s->unk_0f4, t);
    }
}

BOOL func_ov101_02295840(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) {
        u32 t = func_ov101_022956ac(s, a);
        if (t != 0xfff1) {
            func_ov101_02295800(s, s->unk_0b2, t, func_ov101_0229567c(s, a));
        }
        func_ov101_02295404(s, a);
        return TRUE;
    }
    return FALSE;
}

u32 func_ov101_02295890(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_0f4);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0f4, t)) return 0x10;
        }
        return func_ov101_022958cc(s, t);
    }
    return 0x10;
}

u32 func_ov101_022958cc(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 func_ov101_022958dc(S *s, u32 a) {
    if (func_ov101_022958f8(s, a)) return (u8)a;
    return 0;
}

BOOL func_ov101_022958f8(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

void func_ov101_02295904(S *s) {
    func_020b87d0(s->unk_0bc);
}

void func_ov101_02295910(S *s, u32 a, u32 b) {
    s->unk_0b2 = a;
    func_ov002_022026f4(s->unk_221c, s->unk_0a4, s->unk_0a8);
    s32 x = func_ov101_022957c8(s, a);
    func_ov002_022026c4(s->unk_221c, x, func_ov101_02295790(s, a), b);
    func_ov002_02202718(s->unk_221c);
    func_ov101_02295498(s);
    func_ov002_02200a58(s, 0x12);
}

void func_ov101_02295974(S *s, u32 a) {
    s->unk_0b2 = a;
    func_ov002_022006e4(s->unk_215c, 1);
    func_ov101_02295430(s, a);
    if (s->unk_0af == 1) s->unk_0b6 = 7;
    func_ov101_022954c0(s);
}

void func_ov101_022959b8(S *s, u32 a) {
    u32 r6, r7;
    s->unk_0b0 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_09c = func_ov101_022957c8(s, s->unk_0b0) - r6;
    s->unk_0a0 = func_ov101_02295790(s, s->unk_0b0) - r7;
    s->unk_0b1 = a;
    func_ov002_022006b8(s->unk_215c);
    func_ov002_022006c0(s->unk_215c);
    s->unk_0b9 = 2;
    if (!func_ov101_02295710(s, a)) {
        func_ov094_0229238c();
    }
}

void func_ov101_02295a40(S *s) {
    if (func_0206ef0c()) {
        func_ov101_02295a94(s);
    } else {
        func_ov101_02295a60(s);
    }
}

void func_ov101_02295a60(S *s) {
    s->unk_0b1 = 0x10;
    func_ov101_0229537c(s);
    func_ov002_02200980(s);
    func_ov101_02295518(s);
    func_ov002_02200a58(s, 6);
    func_ov101_02295620(s, s->unk_0b3);
}

void func_ov101_02295a94(S *s) {
    func_ov101_02295304(s);
    func_ov101_02295660(s);
    func_ov002_02200a58(s, 0);
}

void func_ov101_02295ab0(S *s) {
    if (func_ov002_0220308c(s->unk_26a0)) {
        if (func_0208d534(s->unk_2234)) {
            s32 r4 = func_ov002_0220306c(s->unk_26a0);
            s32 r6 = func_ov002_022030f4(s->unk_26a0, -1);
            s32 r2 = func_ov002_022030b8(s->unk_26a0, -1);
            func_ov002_02202a40(s->unk_2234, r4 + r6, r4 + r2);
        }
    } else {
        func_ov101_02294f6c(s);
    }
}

void func_ov101_02295b14(S *s) {
    if (func_ov002_02204234(s->unk_2598, 0)) {
        func_ov002_02200a58(s, s->unk_0b6);
        func_0208d644(s->unk_2234);
    }
}

void func_ov101_02295b48(S *s) {
    if (func_ov002_022017a4(s->unk_2298)) {
        func_ov101_02295078(s);
    }
}

void func_ov101_02295b68(S *s) {
    if (func_ov002_02201a28(s->unk_2298)) {
        func_ov002_02202064(s->unk_2298, 0);
        func_ov002_022006e4(s->unk_215c, 1);
        if (func_0208d534(s->unk_2234)) {
            func_ov101_02295160(s);
        }
        func_ov002_02200a58(s, 0x15);
    }
}

void func_ov101_02295bb8(S *s) {
    if (func_ov002_022017b4(s->unk_2298)) {
        if (func_0206ef00()) {
            func_ov101_02295194(s);
            func_ov002_02200a58(s, 8);
        } else {
            func_ov002_02200a58(s, 4);
        }
    }
}

void func_ov101_02295bf4(S *s) {
    if (func_ov002_02202718(s->unk_221c)) {
        func_ov101_02295404(s, s->unk_0b2);
        func_ov101_02295a40(s);
    } else {
        func_ov101_02295498(s);
    }
}

void func_ov101_02295c28(S *s) {
    if (func_0208d4fc(s->unk_2234)) {
        func_ov002_02200a58(s, s->unk_0b6);
    }
    if (func_ov002_02202928(s->unk_2234)) {
        func_ov101_02294d4c(s, 0x20);
        func_ov101_022954c0(s);
    }
}

void func_ov101_02295c68(S *s) {
    if (!func_ov002_022028fc(s->unk_2234)) {
        func_ov101_022953cc(s, s->unk_0b5);
        func_ov101_02294d5c(s, 0x20);
        func_ov002_02200a58(s, 0x11);
        func_ov101_02295518(s);
    } else {
        func_ov002_02200a58(s, 6);
    }
}

void func_ov101_02295cb0(S *s) {
    if (!func_ov002_02202928(s->unk_2234)) {
        u32 a = s->unk_0b5;
        if (s->unk_0b3 == a) {
            func_ov101_02295840(s, a);
            func_ov101_02295518(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov101_02295910(s, a, 4);
        }
    } else {
        func_ov101_022954c0(s);
    }
}

void func_ov101_02295d00(S *s) {
    if (func_0208d4fc(s->unk_2234)) {
        func_ov002_02200a58(s, s->unk_0b6);
    }
    func_ov101_022954c0(s);
}

void func_ov101_02295d2c(S *s) {
    if (func_ov002_02202928(s->unk_2234)) {
        func_ov101_02295974(s, s->unk_0b3);
        func_ov002_02200a58(s, 0xe);
    }
}

void func_ov101_02295d5c(S *s) {
    if (func_0208d4fc(s->unk_2234)) {
        func_ov101_02295140(s);
        func_ov002_02200a58(s, 6);
    }
}

void func_ov101_02295d84(S *s) {
    if (func_0208d4fc(s->unk_2234)) {
        func_ov002_022030ac(s->unk_26a0, 9);
        func_ov002_02200a58(s, 0x17);
        func_0200402c(0x28);
    }
}

void func_ov101_02295dbc(S *s) {
    if (!func_ov002_022028f0(s->unk_2234)) {
        func_ov002_02200a58(s, s->unk_0b6);
        if ((u8)(s->unk_0b6 + 0xfa) <= 1) {
            func_ov101_02295620(s, s->unk_0b3);
        }
        func_ov101_02296670(s);
    }
    func_ov101_022954c0(s);
}

void func_ov101_02295e0c(S *s) {
    if (func_0208d4fc(s->unk_2234)) {
        func_ov002_02201aa0(s->unk_2298, s->unk_0b8, 1);
        s->unk_0b7 = s->unk_2591[s->unk_0b8];
        func_ov002_02200a58(s, 0x14);
    }
}

void func_ov101_02295e58(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov101_02294fdc(s);
    } else {
        if (func_ov002_022019d0(s->unk_2298, func_ov002_022009c8(s), &s->unk_0b8, 0)) {
            func_ov101_02295240(s);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(s->unk_2234);
                func_ov002_02200a58(s, 9);
            } else if (k & 2) {
                func_ov101_022951e0(s);
            }
        }
    }
}
}
