#include "types.h"

struct Unk_ov123_02293b0c {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xa0 - 0x8e];
    u8 unk_0a0;
    u8 unk_0a1;
    u8 unk_0a2;
    u8 unk_0a3;
    u8 unk_0a4;
    u8 unk_0a5;
    u8 pad_0a6[2];
    u8 unk_0a8;
    u8 unk_0a9;
    u8 unk_0aa;
    u8 pad_0ab;
    u8 unk_0ac;
    u8 pad_0ad[2];
    u8 unk_0af;
    u8 unk_0b0;
    u8 pad_0b1[2];
    u8 unk_0b3;
    u8 pad_0b4[0xf8 - 0xb4];
    u8 unk_0f8[0x130 - 0xf8];
    u8 unk_130[0x1a0 - 0x130];
    u8 unk_1a0[0xa04 - 0x1a0];
    u8 unk_a04[0xc04 - 0xa04];
    u8 unk_c04[0xe04 - 0xc04];
    u8 unk_e04[0x2e04 - 0xe04];
    u8 unk_2e04[0x3004 - 0x2e04];
    u8 unk_3004[0x5004 - 0x3004];
    u8 unk_5004[0x100];
};

typedef Unk_ov123_02293b0c S;

extern u8 data_021eca50;
extern u16 data_021f47d8[];

extern "C" {
void *func_020716cc();
void *func_020716d4(void *p, s32 a);
void func_020b8670(void *p, void *q, s32 a, s32 b);
void func_020b8714(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
void func_02002438(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02001f0c(void *p, void *q, s32 a, s32 b);
void *func_02087298(void *p);
void func_02071e3c(void *p, void *q);
void *func_02071e04(void *p);
void func_02071ff0(void *p);
void func_0207200c(void *p, s32 a);
void *func_02071e58(void *p);
void func_02115e78(void *dst, void *src, u32 n);
s32 func_0207202c(void *p);
void *func_0209750c();
void *func_020986d4(void *p);
void *func_0206ed38();
void *func_02071c68(void *p, void *q);
void *func_02071c5c(void *p);
s32 func_02071c1c(void *p, void *q);
u16 *func_0209872c(void *p);
u16 *func_02098714(void *p);
void func_02002438(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_0200402c(s32 a);
void func_02003ff4(s32 a, s32 b);
void func_02004008(s32 a);
void func_02003b6c(u32 a);
BOOL func_0206ef0c();
BOOL func_0208d534(void *p);
BOOL func_0208d4fc(void *p);

void *func_ov123_0229275c(S *s);
BOOL func_ov123_02292010(S *s, u32 m);
void func_ov123_02291ff0(S *s, u32 m);
void func_ov123_02292000(S *s, u32 m);
void func_ov123_02293a98(S *s, s32 a);
void func_ov123_022926c0(S *s);
void func_ov123_02292704(S *s);
void func_ov123_022926a0(S *s);
void func_ov123_02292660(S *s);
void func_ov123_02292680(S *s);
void func_ov123_022925c4(S *s);
void func_ov123_02292340(S *s);
void func_ov123_02292864(S *s);
void func_ov123_02292880(S *s);
BOOL func_ov123_02292370(S *s, s32 a, s32 b);
void func_ov123_02292cfc(S *s);
void func_ov123_02294ef0(S *s);
void func_ov123_02293840(S *s);
u32 func_ov123_02293838(S *s, u32 a);
void func_ov123_0229363c(S *s, u32 a, u32 b, u32 c, u32 d, u32 e);

void func_ov002_02200a50(void *p);
void func_ov002_02200a58(void *p, s32 a);
void func_ov002_02200a60(void *p, s32 a);
void func_ov002_02200980(void *p);
void func_ov002_02200970(void *p, s32 a, s32 b, s32 c);
s32 func_ov002_022009d4(void *p);
s32 func_ov002_022009c8(void *p);
s32 func_ov002_022009a4(void *p);
s32 func_ov002_02200998(void *p);
void func_ov002_022030ac(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_022028f0(void *p);

void func_ov123_02293b0c(S *s, u32 v)
{
    s->unk_0a2 = v;
    s->unk_0a3 = (v - 1) * 12;
}

void func_ov123_02293b20(S *s)
{
    void *a = func_020716cc();
    void *b = func_020716d4(a, s->unk_0a1);
    func_020b8670(s->unk_0f8, b, 6, 0xe);
}

void func_ov123_02293d08(S *s);
void func_ov123_02293bd0(S *s);
void func_ov123_02293cb0(S *s);
void func_ov123_02293b7c(S *s);

void func_ov123_02293b48(S *s)
{
    if (func_ov123_02292010(s, 0x40)) {
        func_ov123_02293d08(s);
        func_ov123_02293bd0(s);
        func_ov123_02293cb0(s);
        func_ov123_02293b7c(s);
        func_ov123_02291ff0(s, 0x40);
    }
}

void func_ov123_02293b7c(S *s)
{
    func_020b8714(s->unk_130, s->unk_3004, 6, 0x20, 0x20, 0x11f);
}

void func_ov123_02293bac(S *s)
{
    func_02002438(s->unk_3004, 6, 0x20, 0x20, 0x11f);
}

void func_ov123_02293bd0(S *s)
{
    u32 *src = (u32 *)func_ov123_0229275c(s);
    u32 *dst = (u32 *)s->unk_e04;
    s32 i, j, k, m;
    for (i = 0; i < 0x20; i++) {
        u32 *d2 = dst;
        for (j = 0; j < 4; j++) {
            u32 *d3 = d2;
            u32 sh = 0;
            for (k = 0; k < 4; k++) {
                u32 w = *src;
                u32 lo = (u8)((w >> sh) & 0xf);
                u32 hi = (u8)((w >> (sh + 4)) & 0xf);
                sh += 8;
                u32 v = lo | ((lo << 4) | ((lo << 8) | ((lo << 12) | ((hi << 16) | ((hi << 20) | ((hi << 28) | (hi << 24)))))));
                u32 *p = d3;
                for (m = 0; m < 4; m++) {
                    *p = v;
                    p += 0x10;
                }
                d3++;
            }
            src++;
            d2 += 4;
        }
        dst += 0x40;
    }
    func_02001f0c(s->unk_e04, s->unk_3004, 0x10, 0x10);
}

void func_ov123_02293cb0(S *s)
{
    func_020b8714(s->unk_0f8, s->unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void func_ov123_02293ce0(S *s)
{
    func_02002438(s->unk_2e04, 6, 0x120, 0x120, 0x12f);
}

void func_ov123_02293d08(S *s)
{
    func_02001f0c(func_ov123_0229275c(s), s->unk_2e04, 4, 4);
}

void func_ov123_02293d28(S *s)
{
    void *o = func_02087298(&data_021eca50);
    func_02071e3c(o, func_ov123_0229275c(s));
    func_02071ff0(func_02071e04(o));
    func_0207200c(func_02071e04(o), s->unk_0a1);
}

void func_ov123_02293d68(S *s)
{
    void *o = func_02087298(&data_021eca50);
    func_02115e78(func_02071e58(o), s->unk_a04, 0x200);
    func_02115e78(func_02071e58(o), s->unk_c04, 0x200);
    s32 r = func_0207202c(func_02071e04(o));
    func_ov123_02293a98(s, r);
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

void func_ov123_02293dc0(S *s)
{
    void *a = func_0209750c();
    void *b = func_020986d4(a);
    void *c = func_0206ed38();
    void *d = func_02071c68(b, c);
    func_02071e3c(d, func_ov123_0229275c(s));
    func_02071ff0(func_02071e04(d));
    func_0207200c(func_02071e04(d), s->unk_0a1);
    s32 e = func_02071c1c(func_02071c5c(b), c);
    u16 *p = func_0209872c(a);
    s32 r;
    if (R1(p, 0x12a8, 0x12af)) {
        r = *p - 0x12a8;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        func_ov123_02292000(s, 0x8000);
    }
    p = func_02098714(a);
    if (R1(p, 0x1429, 0x1430)) {
        r = *p - 0x1429;
    } else {
        r = -1;
    }
    if (r != -1 && r == e) {
        func_ov123_02292000(s, 0x10000);
    }
}

void func_ov123_02293eac(S *s)
{
    void *b = func_020986d4(func_0209750c());
    void *d = func_02071c68(b, func_0206ed38());
    func_02115e78(func_02071e58(d), s->unk_a04, 0x200);
    func_02115e78(func_02071e58(d), s->unk_c04, 0x200);
    s32 r = func_0207202c(func_02071e04(d));
    func_ov123_02293a98(s, r);
}

void func_ov123_02293f10(S *s, s32 a, s32 b)
{
    func_ov002_02200a50(s);
    func_ov002_022030ac(s->unk_5004, b);
    func_ov002_02200a58(s, 0xc);
}

void func_ov123_02293f3c(S *s)
{
    func_0200402c(0x2a);
    func_ov123_02292000(s, 8);
    if (s->unk_0ac == 2) {
        s->unk_0ac = 0;
    }
    func_ov123_02293f10(s, 6, 8);
}

void func_ov123_02293f70(S *s)
{
    func_0200402c(0x29);
    func_ov123_02291ff0(s, 8);
    if (s->unk_0ac == 2) {
        s->unk_0ac = 0;
    }
    func_ov123_02293f10(s, 6, 9);
}

void func_ov123_02293fa4(S *s);
void func_ov123_02293fc4(S *s);
void func_ov123_02293fe8(S *s);

void func_ov123_02293fa4(S *s)
{
    if (func_0206ef0c()) {
        func_ov123_02293fe8(s);
    } else {
        func_ov123_02293fc4(s);
    }
}

void func_ov123_02293fc4(S *s)
{
    func_ov002_02200980(s);
    s->unk_0aa = 0x20;
    func_ov123_02292704(s);
    func_ov002_02200a58(s, 8);
}

void func_ov123_02293fe8(S *s)
{
    func_ov123_022926c0(s);
    func_ov002_02200a58(s, 1);
}

void func_ov123_02294074(S *s);
void func_ov123_02294020(S *s);

void func_ov123_02294000(S *s)
{
    if (func_0206ef0c()) {
        func_ov123_02294074(s);
    } else {
        func_ov123_02294020(s);
    }
}

void func_ov123_02294020(S *s)
{
    if (s->unk_0ac == 2) {
        func_ov123_022926c0(s);
        func_ov002_02200970(s, 5, 0, 5);
        func_ov002_02200a58(s, 4);
        func_02003b6c((u8)func_ov123_02293838(s, s->unk_0af));
    } else {
        func_ov123_02292704(s);
        func_ov002_02200980(s);
        func_ov002_02200a58(s, 3);
    }
}

void func_ov123_02294074(S *s)
{
    func_ov002_02200a58(s, 0);
    func_ov123_022926c0(s);
}

void func_ov123_0229408c(S *s)
{
    if (func_ov002_0220308c(s->unk_5004)) {
        if (func_0208d534(s->unk_1a0)) {
            s32 a = func_ov002_0220306c(s->unk_5004);
            s32 b = func_ov002_022030f4(s->unk_5004, -1);
            s32 c = func_ov002_022030b8(s->unk_5004, -1);
            func_ov002_02202a40(s->unk_1a0, a + b, a + c);
        }
    } else {
        func_ov123_022926c0(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov123_022940f8(S *s)
{
    if (func_0208d4fc(s->unk_1a0)) {
        func_ov123_022926a0(s);
        func_ov002_02200a58(s, 3);
    }
}

void func_ov123_02294120(S *s)
{
    if (func_0208d4fc(s->unk_1a0)) {
        s->unk_0a5 = s->unk_0aa;
        func_ov123_02293840(s);
        if (s->unk_08d == 0xa) {
            func_ov123_02292660(s);
        }
    }
}

void func_ov123_0229415c(S *s)
{
    if (func_ov002_022028f0(s->unk_1a0) == 0) {
        func_ov002_02200a58(s, s->unk_0a0);
        func_ov123_02294ef0(s);
    }
}

void func_ov123_02294188(S *s)
{
    if (func_ov002_022009d4(s)) {
        func_ov123_02293fe8(s);
        return;
    }
    u32 old = s->unk_0aa;
    func_ov002_022009c8(s);
    if (func_ov002_022009a4(s)) {
        s->unk_0aa = 0x1f;
    } else if (func_ov002_02200998(s)) {
        s->unk_0aa = 0x20;
    }
    if (old != s->unk_0aa) {
        func_ov123_022925c4(s);
        return;
    }
    u32 k = data_021f47d8[1];
    if (k & 1) {
        func_ov123_02292680(s);
    } else if (k & 2) {
        func_ov123_022926c0(s);
        s->unk_0a5 = 0x20;
        func_ov123_02293840(s);
    } else if (k & 8) {
        func_ov123_022926c0(s);
        s->unk_0a5 = 0x1f;
        func_ov123_02293840(s);
    }
}

void func_ov123_02294240(S *s)
{
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov123_02291ff0(s, 0x800);
        func_ov123_02294000(s);
        func_0200402c(0x86d);
    } else {
        s32 r = func_ov002_022009c8(s);
        if (func_ov123_02292370(s, r, 0)) {
            func_ov123_02292cfc(s);
        }
    }
}

void func_ov123_02294290(S *s)
{
    if (func_ov002_022009d4(s)) {
        func_0200402c(0x86e);
        func_ov123_02292880(s);
        func_ov123_02294074(s);
        return;
    }
    s32 r = func_ov002_022009c8(s);
    if (func_ov123_02292370(s, r, 0)) {
        s->unk_0a8 = s->unk_0af;
        s->unk_0a9 = s->unk_0b0;
        return;
    }
    u32 k = data_021f47d8[1];
    if (k & 1) {
        func_ov123_02292864(s);
    } else if (k & 2) {
        func_0200402c(0x86e);
        func_ov123_02292880(s);
        func_ov123_02294000(s);
    } else if (k & 0x800) {
        func_0200402c(0x864);
        func_ov123_02292880(s);
        s->unk_0ac = 0;
        func_ov123_02294000(s);
    } else if (k & 0x400) {
        func_ov123_02292340(s);
    }
}

void func_ov123_02294360(S *s)
{
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov123_02294000(s);
        if (func_ov123_02292010(s, 0x40000)) {
            func_ov123_02291ff0(s, 0x40000);
            func_02003ff4(0x863, 1);
        }
    } else {
        s32 r = func_ov002_022009c8(s);
        s32 flag = 0;
        if (func_ov123_02292370(s, r, 1)) {
            func_ov123_0229363c(s, s->unk_0af, s->unk_0b0, s->unk_0a2, s->unk_0a4, 1);
            func_ov123_02292000(s, 0x40);
            func_0200402c(0x861);
            if (s->unk_0b3 == 0) {
                flag = 1;
            } else {
                func_0200402c(0x860);
            }
        }
        if (flag) {
            if (func_ov123_02292010(s, 0x40000) == 0) {
                func_ov123_02292000(s, 0x40000);
                func_02004008(0x863);
            }
        } else {
            if (func_ov123_02292010(s, 0x40000)) {
                func_ov123_02291ff0(s, 0x40000);
                func_02003ff4(0x863, 1);
            }
        }
    }
}
}
