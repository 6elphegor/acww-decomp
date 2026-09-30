#include "types.h"

struct Unk_ov112_02296840 {
    u8 pad_000[0x94];
    s32 unk_094;
    s32 unk_098;
    s32 unk_09c;
    u8 pad_0a0[0xc];
    u32 unk_0ac;
    s32 unk_0b0;
    u8 pad_0b4[2];
    u8 unk_0b6;
    u8 unk_0b7;
    u8 unk_0b8;
    u8 unk_0b9;
    u8 unk_0ba;
    u8 unk_0bb;
    u8 pad_0bc;
    u8 unk_0bd;
    u8 unk_0be;
    u8 unk_0bf;
    u8 pad_0c0[2];
    u8 unk_0c2;
    u8 unk_0c3[0x244 - 0xc3];
    u8 unk_244[0x34c - 0x244];
    u8 unk_34c[0x370 - 0x34c];
    u8 unk_370[0x3f2c - 0x370];
    u8 unk_3f2c[0x40ac - 0x3f2c];
    u8 unk_40ac[0x40f4 - 0x40ac];
    u8 unk_40f4[0x4258 - 0x40f4];
    u8 unk_4258[0x4c60 - 0x4258];
    u8 unk_4c60[0x6a60 - 0x4c60];
    u32 unk_6a60[8];
};

typedef Unk_ov112_02296840 S;

extern u16 data_021f47d8;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021edb68;

extern "C" {
void func_0200402c(s32 a);
void func_020e76f8(void *p, u32 v, u32 n);
s32 func_020512e0(void *p, s32 n);
void func_020b8714(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_0206fc44(void *p);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206f904(void *p, u32 a, u32 b, u32 c, u32 d);
void func_0206f920(void *p, void *q, u32 n, u32 a, u32 b);
void func_0206fb04(void *p, void *q, u32 a, u32 b, u32 c);
void func_0206cf4c(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
void func_020a7c3c(void *p);
BOOL func_0206ef0c();
void func_02076f88(void *p);
s32 func_0209750c();
s32 func_0209865c();
s32 func_020998d8();

u32 func_ov095_02293f2c(void *a, void *b, u32 c, u32 d, u32 e, void *f);
u32 func_ov095_02293fb4(void *a, void *b, u32 c, u32 d, u32 e);
u32 func_ov095_02293da0(void *p);
void func_ov002_02200980(void *p);
void func_ov002_02200a50(void *p, u32 a);
void func_ov002_02200a58(void *p, u32 a);
void func_ov002_02200a60(void *p, u32 a);
void func_ov002_02202d00(void *p);
void func_ov002_02202e54(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
void func_ov002_02202a40(void *p, u32 a, u32 b);
u32 func_ov002_022030f4(void *p, u32 a);
u32 func_ov002_022030b8(void *p, u32 a);
void func_ov002_02204394(void *p, void *q, u32 a, u32 b);

void func_ov112_02296988(S *s);
void func_ov112_02296b80(S *s);
void func_ov112_02296d6c(S *s);
void func_ov112_02296d90(S *s);
void func_ov112_02296de8(S *s, u32 a, u32 b);
void func_ov112_02296e14(S *s);
void func_ov112_0229705c(S *s, u32 v);
}

extern "C" {
void func_ov112_02297170(S *s, s32 a, s32 b);
u32 func_ov112_022971cc(S *s, s32 i, s32 *p);
void func_ov112_0229721c(S *s);
void func_ov112_02297264(S *s);
BOOL func_ov112_02297280(S *s);
void func_ov112_022972ac(S *s);
void func_ov112_02297304(S *s);
void func_ov112_0229733c(S *s);
void func_ov112_0229735c(S *s, s32 v);
BOOL func_ov112_022973ac();
BOOL func_ov112_022973dc(S *s);
void func_ov112_02297434(S *s);
void func_ov112_02297468(S *s);
BOOL func_ov112_022974f0(S *s);
void func_ov112_022974fc(S *s, u32 v);
void func_ov112_0229750c(S *s, u32 v);
void func_ov112_02297540(S *s);
void func_ov112_02297570();
void func_ov112_02297574(S *s);
void func_ov112_02297598(S *s);
void func_ov112_022975c0(S *s, u32 a, u32 b, u32 c, u32 n);
void func_ov112_02297648(S *s);
void func_ov112_022976a8(S *s);
void func_ov112_022977f8(S *s, u32 m);
void func_ov112_02297808(S *s, u32 m);
BOOL func_ov112_02297818(S *s, u32 m);
void func_ov112_0229782c(S *s);
void func_ov112_0229788c(S *s);
void func_ov112_022978a4(S *s, u32 a, u32 b);
void func_ov112_022978e0(S *s);
void func_ov112_02297900(S *s);
void func_ov112_0229791c(S *s);
void func_ov112_02297934();
void func_ov112_02297940(S *s);
void func_ov112_02297984(S *s);
void func_ov112_022979c0(S *s);
void func_ov112_02297a0c(S *s);
void func_ov112_02297a4c(S *s);

void func_ov112_02297170(S *s, s32 a, s32 b) {
    s32 t;
    if (b < 0x38) b = 0x38;
    if (b >= 0x88) b = 0x87;
    s->unk_098 = a;
    s->unk_09c = b;
    t = (s->unk_09c - 0x28) >> 4;
    if (t > s->unk_094) t = s->unk_094;
    s->unk_09c = t * 16 + 0x28;
    func_ov112_0229705c(s, func_ov112_022971cc(s, t, &s->unk_098));
    func_ov112_02297434(s);
}

u32 func_ov112_022971cc(S *s, s32 i, s32 *p) {
    u32 off = s->unk_6a60[i];
    u8 out;
    u32 r = func_ov095_02293f2c(s->unk_370, s->unk_0c3 + off, 0xc0 - off, 0x96, (u8)(*p - 0x30), &out);
    *p = r + 0x30;
    return (u8)(out + off);
}

void func_ov112_0229721c(S *s) {
    u32 lo, hi;
    u32 b = s->unk_0bf;
    u32 a = s->unk_0be;
    if (a > b) {
        lo = b;
        hi = a;
    } else {
        lo = a;
        hi = b;
    }
    u32 v = (u8)func_ov095_02293fb4(s->unk_370, s->unk_0c3, lo, hi, 0xc0);
    func_ov112_0229705c(s, v);
    func_ov112_02297264(s);
}

void func_ov112_02297264(S *s) {
    s->unk_0be = 0;
    s->unk_0bf = 0;
    func_ov112_022977f8(s, 0x100);
}

BOOL func_ov112_02297280(S *s) {
    if (!func_ov112_02297818(s, 0x100) || s->unk_0be == s->unk_0bf) return FALSE;
    return TRUE;
}

void func_ov112_022972ac(S *s) {
    s32 r, v;
    u16 k;
    v = s->unk_0b6;
    r = v;
    k = data_021f47d8;
    if (k & 0x40) {
        r = v - 4;
    } else if (k & 0x80) {
        r = v + 4;
    }
    if (r < 0) r = 0;
    if (r > 0x3c) r = 0x3c;
    if (v != r) func_ov002_02202e54(s->unk_40ac);
    func_ov112_0229750c(s, r);
}

void func_ov112_02297304(S *s) {
    s32 t = data_021ef5ec - 0x18;
    if (t < 0) t = 0;
    if (t > 0x28) t = 0x28;
    func_020e76f8(&s->unk_0b8, (u8)t, 2);
    func_ov112_0229735c(s, s->unk_0b8);
}

void func_ov112_0229733c(S *s) {
    func_ov112_0229735c(s, s->unk_0ba + (data_021ef5ec - s->unk_0b9));
}

void func_ov112_0229735c(S *s, s32 v) {
    s32 d;
    v = (v * 3) >> 1;
    if (v < 0) v = 0;
    if (v > 0x3c) v = 0x3c;
    func_ov112_0229750c(s, v);
    d = s->unk_0bb - v;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(s->unk_40ac);
        s->unk_0bb = v;
    }
}

BOOL func_ov112_022973ac() {
    s32 a = data_021ef5f0;
    s32 t = data_021ef5ec - 8;
    if (t < 0x10 || t > 0x38) return FALSE;
    if (a < 0xdd || a > 0xed) return FALSE;
    return TRUE;
}

BOOL func_ov112_022973dc(S *s) {
    if (func_ov002_02202f18(s->unk_40ac, data_021ef5f0, data_021ef5ec)) {
        s->unk_0b9 = data_021ef5ec;
        s->unk_0ba = (s->unk_0b6 * 2) / 3;
        s->unk_0bb = s->unk_0b6;
        return TRUE;
    }
    return FALSE;
}

void func_ov112_02297434(S *s) {
    u32 a = s->unk_0b7;
    s32 d = s->unk_09c - a;
    if (d < 0x18) {
        func_ov112_022974fc(s, a - (0x18 - d));
    } else if (d > 0x40) {
        func_ov112_022974fc(s, a + (d - 0x38));
    }
}

void func_ov112_02297468(S *s) {
    u32 b7 = *(volatile u8 *)&s->unk_0b7;
    u32 b6 = *(volatile u8 *)&s->unk_0b6;
    if (b6 == b7) {
        func_ov112_022977f8(s, 0x20);
    } else if (b6 < b7) {
        s->unk_0b6 = s->unk_0b6 + 8;
        if (s->unk_0b6 > s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    } else if (b6 < 8) {
        s->unk_0b6 = b7;
    } else {
        s->unk_0b6 = s->unk_0b6 - 8;
        if (s->unk_0b6 < s->unk_0b7) s->unk_0b6 = s->unk_0b7;
    }
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

BOOL func_ov112_022974f0(S *s) {
    return func_ov112_02297818(s, 0x20);
}

void func_ov112_022974fc(S *s, u32 v) {
    s->unk_0b7 = v;
    func_ov112_02297808(s, 0x20);
}

void func_ov112_0229750c(S *s, u32 v) {
    s->unk_0b6 = v;
    s->unk_0b7 = s->unk_0b6;
    func_ov112_02297808(s, 0x20);
    s->unk_0b8 = (s->unk_0b6 * 2) / 3;
}

void func_ov112_02297540(S *s) {
    func_020b8714(s->unk_34c, s->unk_4c60, 4, 0x11, 0x11, 0x100);
}

void func_ov112_02297570() {
}

void func_ov112_02297574(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    for (; i < 6; i++) {
        func_0206fc44(p + i * 0x40);
    }
}

void func_ov112_02297598(S *s) {
    s32 i = 0;
    u8 *p = s->unk_3f2c;
    s32 z = 0;
    for (; i < 6; i++) {
        func_0206fab4(p + i * 0x40, z, z);
    }
}

void func_ov112_022975c0(S *s, u32 a, u32 b, u32 c, u32 n) {
    s32 i;
    u32 off = 0;
    i = off;
    for (; i < 6; i++) {
        u32 d = s->unk_6a60[i + 1] - s->unk_6a60[i];
        if (d == 0) return;
        if (c >= off) {
            u32 cnt, e;
            e = off + d;
            if (c < e) {
                if (e > c + n) cnt = n;
                else cnt = d - (c - off);
                func_0206f904(s->unk_3f2c + i * 0x40, a, b, c - off, cnt);
                c = (u8)e;
                n -= cnt;
                if (n == 0) return;
            }
        }
        off += d;
    }
}

void func_ov112_02297648(S *s) {
    u32 r4;
    u32 r0;
    u32 r1, r2;
    if (func_ov112_02297280(s)) {
        u32 a = s->unk_0bf;
        u32 b = s->unk_0be;
        if (b > a) {
            r4 = a;
            r0 = b - a;
        } else {
            r4 = b;
            r0 = a - b;
        }
        r1 = 0xd;
        r2 = 0xe;
    } else {
        r0 = func_ov095_02293da0(s->unk_370);
        if (r0 != 0) r4 = s->unk_0bd - r0;
        r1 = 0xb;
        r2 = 0xd;
    }
    if (r0 != 0) func_ov112_022975c0(s, r1, r2, r4, r0);
}

struct Unk_ov112_022976a8_Pad {
    s32 v[8];
    Unk_ov112_022976a8_Pad() {}
    ~Unk_ov112_022976a8_Pad() {}
};

void func_ov112_022976a8(S *s) {
    Unk_ov112_022976a8_Pad pad;
    s32 i;
    u32 r6;
    u8 zb;
    u32 z14, z18;
    func_0206cf4c(s->unk_0c3, s->unk_6a60, &s->unk_094, 0xc0, 0x28, 0x96, 6);
    if (func_ov112_02297818(s, 0x10)) {
        r6 = 0;
    } else if (func_ov112_02297818(s, 0x400)) {
        r6 = 0;
    } else {
        r6 = 1;
    }
    i = 0;
    zb = 0;
    z14 = 0;
    z18 = 0;
    for (; i < 6; i++) {
        u8 *b = (u8 *)s + i * 4;
        u32 *pp = (u32 *)(b + 0x6a60);
        u32 d = *(u32 *)((u8 *)s + (i + 1) * 4 + 0x6a60) - *pp;
        u8 *obj = s->unk_3f2c + i * 0x40;
        func_020a7c3c(obj);
        if (d != 0) {
            u32 a3 = (i == 0) ? z14 : r6;
            u32 st = (i == s->unk_094) ? 1 : z18;
            func_0206f920(obj, s->unk_0c3 + *pp, d, a3, st);
        } else if (r6 != 0) {
            if (i == s->unk_094) {
                func_0206f920(obj, &zb, 1, r6, 1);
            }
        }
    }
    for (i = 0; i < 6; i++) {
        func_0206fb04(s->unk_3f2c + i * 0x40, s->unk_4c60 + i * 0x500, 0x14, 0xe, 0xd);
    }
    func_ov112_02297648(s);
    func_ov112_02297808(s, 4);
    func_ov112_02296e14(s);
    s->unk_0b0 = (func_020512e0(s->unk_0c3, 0xc0) * 0x1f) / 0xc0;
    if (s->unk_0b0 > 0x1f) s->unk_0b0 = 0x1f;
}

void func_ov112_022977f8(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac & ~m;
}

void func_ov112_02297808(S *s, u32 m) {
    s->unk_0ac = s->unk_0ac | m;
}

BOOL func_ov112_02297818(S *s, u32 m) {
    if (s->unk_0ac & m) return TRUE;
    return FALSE;
}

typedef void (*Unk_ov112_0229782c_Fn)(void *);

void func_ov112_0229782c(S *s) {
    u32 r4;
    func_ov002_02200980(s);
    s->unk_0c2 = 1;
    func_ov002_02202d00(s->unk_4258);
    (*(Unk_ov112_0229782c_Fn **)s->unk_4258)[3](s->unk_4258);
    r4 = func_ov002_022030f4(s->unk_40f4, 4);
    func_ov002_02202a40(s->unk_4258, r4, func_ov002_022030b8(s->unk_40f4, 4));
    func_ov002_02200a58(s, 0x13);
}

void func_ov112_0229788c(S *s) {
    func_ov112_02296d6c(s);
    func_ov002_02200a58(s, 5);
}

void func_ov112_022978a4(S *s, u32 a, u32 b) {
    volatile u8 v;
    v = data_021edb68;
    v = a;
    func_ov002_02204394(s->unk_244, (void *)&v, b, 0);
    func_ov002_02200a58(s, 0x16);
    func_ov112_02296d6c(s);
}

void func_ov112_022978e0(S *s) {
    if (func_0206ef0c()) {
        func_ov112_0229791c(s);
    } else {
        func_ov112_02297900(s);
    }
}

void func_ov112_02297900(S *s) {
    func_ov002_02200980(s);
    func_ov112_02296d90(s);
    func_ov002_02200a58(s, 6);
}

void func_ov112_0229791c(S *s) {
    func_ov112_02296d6c(s);
    func_ov002_02200a58(s, 0);
}

void func_ov112_02297934() {
    func_0200402c(0x34);
}

void func_ov112_02297940(S *s) {
    func_0200402c(0x28);
    func_ov112_022977f8(s, 0x40);
    func_ov112_02296d6c(s);
    func_ov112_022974fc(s, 0);
    func_ov002_02200a50(s, 0xc);
    func_ov002_02200a60(s, 1);
    func_ov112_02297808(s, 0x2000);
}

void func_ov112_02297984(S *s) {
    if (func_ov112_02297818(s, 0x2000)) {
        func_0200402c(0x29);
    } else {
        func_0200402c(0x2a);
    }
    func_ov112_02296de8(s, 6, 4);
    func_ov112_022977f8(s, 0x400);
}

void func_ov112_022979c0(S *s) {
    func_ov112_02296de8(s, 0xa, 3);
    if (func_ov112_02297818(s, 0x2000)) {
        func_0200402c(0x28);
    } else {
        func_02076f88(s->unk_0c3);
        func_0200402c(0x27);
        func_ov112_02296988(s);
        func_0209750c();
        func_0209865c();
        func_020998d8();
    }
}

void func_ov112_02297a0c(S *s) {
    func_0200402c(0x2a);
    func_ov112_02297808(s, 0x2000);
    func_ov112_02296de8(s, 2, 8);
    func_ov112_02297808(s, 0x400);
    func_ov112_02297264(s);
    func_ov112_022976a8(s);
}

void func_ov112_02297a4c(S *s) {
    func_0200402c(0x29);
    func_ov112_022977f8(s, 0x2000);
    func_ov112_02296de8(s, 2, 9);
    func_ov112_02297808(s, 0x400);
    func_ov112_02296b80(s);
    func_ov112_02297264(s);
    func_ov112_022976a8(s);
}
}
