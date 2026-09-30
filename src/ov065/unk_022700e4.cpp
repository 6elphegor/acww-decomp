// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov065_022700e4_Cb)(s32, s32, s32);
typedef void (*Unk_ov065_02270710_Cb)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290670 {
    u32 unk_00;
    u8 pad_04[0x14];
    u32 unk_18_pad;
    u8 unk_1c[0x8];
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c;
    u8 unk_2d;
    u8 pad_2e[2];
    u32 unk_30;
    u8 unk_34[0x20];
    u8 pad_54[0x8];
    Unk_ov065_022700e4_Cb unk_5c;
    s32 unk_60;
    Unk_ov065_022700e4_Cb unk_64;
    s32 unk_68;
    u8 pad_6c[8];
    Unk_ov065_02270710_Cb unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 pad_84[8];
    s32 unk_8c;
    u8 pad_90[4];
    s32 unk_94;
    s32 unk_98;
    u8 pad_9c[0x34];
    u8 unk_d0[0x100];
    u8 unk_1d0[0x179];
};

struct Unk_ov065_02270710_Buf {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x208];
};

struct Unk_ov065_022906f8 {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
extern Unk_ov065_02290670 *data_ov065_02290670;
extern u32 data_ov065_02290678[32];
extern Unk_ov065_022906f8 data_ov065_022906f8[32];
extern u8 data_ov065_0228c808[];

void func_ov065_0226fc18();
void func_ov065_0226ffe4();
void func_ov065_0226ffb4();
void func_ov065_0226fee4();
void func_ov065_02271f9c();
void func_ov065_02271f08();
void func_ov065_02276500();
void func_ov065_02276698();
void func_ov065_022700e4(s32 a, s32 b);

u8 *func_ov065_022849bc(u32 v);
void func_ov065_02271440(s32 a, s32 b);
void func_ov065_02271e64();
void func_ov065_02271e00(s32 a, void *b, s32 c);
void func_ov065_02287260();
void func_ov065_022849f8(u32 a);
void func_ov065_02271fc8(s32 a, s32 b);
void func_ov065_0227627c(s32 a, s32 b);
u32 func_ov065_02271ed8(s32 a);
s32 func_ov065_0227bfb4(void *a, u32 b);
void func_ov065_0227c000(void *a, u32 b, s32 *c);
void func_ov065_0227c05c(void *a, s32 b, void *c);
void func_ov065_02276cc0(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void func_ov065_02276db4(u32 a, void (*b)(), s32 c, s32 d, s32 e);
void func_ov065_02272004(void *a, void *b, void (*c)(s32, s32), s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_ov065_02277c68();
void func_ov065_02278250(u32 a);
s32 func_ov065_022780e0();
u32 func_ov065_0227c6c0(void *a, u32 b, s32 c);
s32 func_ov065_0227c624(void *a, s32 b, void (*c)(), s32 d);
void func_ov065_02271534();
void func_ov065_02271488();
void func_ov065_0227204c();
void func_ov065_0227674c(s32 a);
void func_ov065_0227746c();
void func_ov065_02288124();
void func_ov065_02284a18(u32 a);
u32 func_ov065_022778b0(u32 a);
u32 func_ov065_022868b0(s32 a, u32 b, s32 c);
s32 func_ov065_02284bdc(void *a, u32 b, u32 c, u32 d, void (*e)());
void func_ov065_02284b9c(u32 a, void (*b)());
void func_ov065_022849c4(u32 a, void (*b)());
s32 func_ov065_02275dd0(u8 **out);
s32 func_ov065_02275d58(u8 **out);
s32 func_ov065_02275e64(s32 a);
s32 func_ov065_02275e3c();
s32 func_ov065_02275e50();
s32 func_ov065_02270e4c();
void func_ov065_02270e34(s32 a, s32 b);
s32 func_ov065_02270b78();
void func_ov065_02270b74();
void func_02115e64(u32 v, void *dst, u32 size);
s32 func_021277d4(char *s);
void func_02116048(char *src, void *dst, s32 n);

void func_ov065_022702fc(s32 s);
s32 func_ov065_02270158(s32 x);
s32 func_ov065_022701d0(s32 x);
u32 func_ov065_02270298(u8 *p, s32 n);
u32 func_ov065_02270310(u32 v);
u32 func_ov065_02270408(u32 v);
u32 func_ov065_02270428(u32 v);
u32 *func_ov065_022703ac(u32 idx);
s32 func_ov065_02270584(u8 **out);
void func_ov065_022703b8();

#define G data_ov065_02290670

void func_ov065_022700e4(s32 a, s32 b) {
    s32 t = G->unk_28;
    if (t != 4) {
        func_ov065_022702fc(t);
    }
    G->unk_64(a, b, G->unk_68);
}

void func_ov065_02270114(s32 a, s32 b) {
    if (a == 0) {
        G->unk_30 = b;
        func_ov065_022702fc(3);
        func_ov065_02271e64();
    } else {
        func_ov065_022702fc(0);
    }
    if (G->unk_5c != 0) {
        G->unk_5c(a, b, G->unk_60);
    }
}

s32 func_ov065_02270158(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
    case 5:
        a = 0;
        b = 0;
        x = 0;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -30;
        break;
    case 6:
        a = 6;
        b = -70;
        break;
    case 7:
        a = 6;
        b = -80;
        break;
    }
    if (a != 0) {
        func_ov065_02271440(a, b - 0x105b8);
    }
    return x;
}

s32 func_ov065_022701d0(s32 x) {
    s32 a, b;
    if (x == 0) {
        return 0;
    }
    switch (x) {
    case 0:
        break;
    case 1:
        a = 8;
        b = -1;
        break;
    case 2:
        a = 8;
        b = -2;
        break;
    case 3:
        a = 6;
        b = -10;
        break;
    case 4:
        a = 6;
        b = -20;
        break;
    }
    switch (G->unk_24) {
    case 1:
        b = b - 0xee48;
        func_ov065_02271440(a, b);
        break;
    case 2:
        b = b - 0xee48;
        func_ov065_02271440(a, b);
        break;
    case 5:
        b = b - 0x13c68;
        func_ov065_0227627c(a, b);
        break;
    case 4:
        b = b - 0x11558;
        break;
    default:
        b = b - 0x16378;
        break;
    }
    func_ov065_02271fc8(a, b);
    return x;
}

u32 func_ov065_02270298(u8 *p, s32 n) {
    u32 r = 0;
    s32 i = 0;
    for (; i < n; i++) {
        r |= 1 << p[i];
    }
    return r;
}

u32 func_ov065_022702bc(u32 c) {
    u8 *p;
    s32 i;
    s32 n;
    u8 *q;
    n = func_ov065_02275dd0(&p);
    for (i = 0, q = p; i < n; q++, i++) {
        if (c == *q) {
            break;
        }
    }
    if (i == n) {
        return 0;
    }
    return func_ov065_02275e64(i);
}

void func_ov065_022702fc(s32 s) {
    G->unk_28 = G->unk_24;
    G->unk_24 = s;
}

u32 func_ov065_02270310(u32 v) {
    s32 i;
    u32 *p;
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = func_ov065_022849bc(*p);
            if (v == r[1]) {
                return 1;
            }
        }
    }
    return 0;
}

Unk_ov065_022906f8 *func_ov065_02270344(u32 idx) {
    return &data_ov065_022906f8[idx];
}

u32 *func_ov065_02270350(u32 key, s32 n) {
    u8 i;
    for (i = 0; i < n; i++) {
        if (key == *(u32 *)((u8 *)G + i * 4 + 0x430)) {
            break;
        }
    }
    if (i >= n) {
        return 0;
    }
    return func_ov065_022703ac(func_ov065_02270408(func_ov065_02270428(*((u8 *)G + i + 0x5f4))));
}

u32 *func_ov065_022703ac(u32 idx) {
    return &data_ov065_02290678[idx];
}

void func_ov065_022703b8() {
    volatile u32 a = 0;
    func_02115e64(a, data_ov065_02290678, 0x80);
    volatile u32 b = 0;
    func_02115e64(b, data_ov065_022906f8, 0x100);
}

s32 func_ov065_022703ec() {
    s32 i;
    u32 *p;
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p == 0) {
            return i;
        }
    }
    return -1;
}

u32 func_ov065_02270408(u32 v) {
    return func_ov065_022849bc(v)[0];
}

u32 func_ov065_02270418(u32 v) {
    return func_ov065_022849bc(v)[1];
}

u32 func_ov065_02270428(u32 v) {
    s32 i;
    u32 *p;
    if (G == 0) {
        return 0;
    }
    for (i = 0, p = data_ov065_02290678; i < 0x20; p++, i++) {
        if (*p != 0) {
            u8 *r = func_ov065_022849bc(*p);
            if (v == r[1]) {
                return data_ov065_02290678[i];
            }
        }
    }
    return 0;
}

s32 func_ov065_02270474() {
    Unk_ov065_02290670 *s;
    u32 h;
    s32 r;
    if (G->unk_00 != 0) {
        return 0;
    }
    h = (u16)(func_ov065_022778b0(0x4000) + 0xc000);
    s = G;
    r = func_ov065_02284bdc(G, func_ov065_022868b0(0, h, 0), *(u32 *)((u8 *)s + 0x14), *(u32 *)((u8 *)s + 0x18), func_ov065_0226fc18);
    if (func_ov065_02270158(r) != 0) {
        return r;
    }
    func_ov065_02284b9c(G->unk_00, func_ov065_02276500);
    func_ov065_022849c4(G->unk_00, func_ov065_02276698);
    return r;
}

s32 func_ov065_02270508() {
    if (G != 0) {
        return G->unk_24;
    }
    return 0;
}

u32 func_ov065_0227051c(u32 bit) {
    if (G == 0) {
        return 0;
    }
    if (*(u32 *)((u8 *)G + 0x614) & (1 << bit)) {
        return func_ov065_02270310(bit);
    }
    return 0;
}

u32 func_ov065_02270558() {
    u8 *p;
    if (G == 0) {
        return 0;
    }
    s32 n = func_ov065_02270584(&p);
    return func_ov065_02270298(p, n);
}

s32 func_ov065_02270584(u8 **out) {
    if (G == 0) {
        return 0;
    }
    *out = (u8 *)G + 0x5f4;
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return func_ov065_02275d58(out);
    }
    return func_ov065_02275dd0(out);
}

u32 func_ov065_022705d0() {
    if (G != 0) {
        return G->unk_2c;
    }
    return 0;
}

s32 func_ov065_022705e8() {
    if (G == 0) {
        return 0;
    }
    if (*(volatile u8 *)((u8 *)G + 0x351) == 2 || *(volatile u8 *)((u8 *)G + 0x351) == 3) {
        return func_ov065_02275e3c() + 1;
    }
    return func_ov065_02275e50() + 1;
}

s32 func_ov065_0227062c(u32 a) {
    u32 r;
    if (G == 0 || func_ov065_02270e4c() != 0 || (G->unk_24 != 5 && G->unk_24 != 6)) {
        return -1;
    }
    r = func_ov065_02270428(a);
    if (r == 0) {
        return -2;
    }
    func_ov065_02284a18(r);
    return 0;
}

s32 func_ov065_0227067c() {
    Unk_ov065_02290670 *s;
    if (G == 0 || func_ov065_02270e4c() != 0 || (s = G, s->unk_24 != 5 && s->unk_24 != 6)) {
        return -1;
    }
    if (*((u8 *)s + 0x349) == 0) {
        func_ov065_02271e00(1, data_ov065_0228c808, 0);
        func_ov065_02287260();
        func_ov065_022702fc(3);
        return 1;
    }
    s->unk_2d = 1;
    func_ov065_022849f8(G->unk_00);
    G->unk_2d = 0;
    return 0;
}

void func_ov065_022706f8(s32 a, s32 b) {
    if (G != 0) {
        G->unk_7c = a;
        G->unk_80 = b;
    }
}

#define FAIL710()                                                              \
    {                                                                          \
        func_ov065_02270e34(10, 0);                                            \
        Unk_ov065_02290670 *s = G;                                             \
        s->unk_74(10, 0, 1, 0, 0, s->unk_78);                                  \
        if (G != 0 && G->unk_24 == 5) {                                        \
            func_ov065_022702fc(3);                                            \
            func_ov065_02271e00(1, data_ov065_0228c808, 0);                    \
            return;                                                            \
        }                                                                      \
    }

void func_ov065_02270710(s32 a, Unk_ov065_02270710_Cb cb, s32 arg, s32 d, s32 e) {
    s32 v = -1;
    Unk_ov065_02270710_Buf buf;
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 3) {
        u32 t;
        func_ov065_022703b8();
        G->unk_74 = cb;
        G->unk_78 = arg;
        func_ov065_022702fc(5);
        t = func_ov065_02271ed8(a);
        if (t == 0 || func_ov065_0227bfb4(G->unk_1c, t) == 0) {
            FAIL710()
        } else {
            func_ov065_0227c000(G->unk_1c, t, &v);
            func_ov065_0227c05c(G->unk_1c, v, &buf);
            if (buf.unk_04 != 6) {
                FAIL710()
            } else {
                func_ov065_02276cc0(t, func_ov065_0226ffe4, 0, d, e);
            }
        }
    }
}

void func_ov065_0227083c(s32 a, Unk_ov065_02270710_Cb b, s32 c, s32 d, s32 e) {
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 3) {
        func_ov065_022703b8();
        G->unk_74 = b;
        G->unk_78 = c;
        G->unk_2c = 0;
        func_ov065_022702fc(5);
        func_ov065_02276db4((u8)(a - 1), func_ov065_0226ffe4, 0, d, e);
    }
}

s32 func_ov065_0227089c(char *s, Unk_ov065_022700e4_Cb f1, s32 f2, s32 f3, s32 p5, s32 p6, s32 p7) {
    s32 n;
    if (G == 0 || func_ov065_02270e4c() != 0 || G->unk_24 < 3 || G->unk_24 == 4) {
        return 0;
    }
    if (s == 0 || *s == 0) {
        n = 0;
    } else {
        if (func_021277d4(s) < 0x20) {
            n = func_021277d4(s);
        } else {
            n = 0x1f;
        }
        func_02116048(s, G->unk_34, n);
    }
    G->unk_34[n] = 0;
    G->unk_64 = f1;
    G->unk_68 = f2;
    func_ov065_022702fc(4);
    func_ov065_02272004(G->unk_d0, G->unk_d0 + 0x100, func_ov065_022700e4, 0, f3, p5, p6, p7);
    return 1;
}

void func_ov065_02270958(s32 a, s32 b, Unk_ov065_022700e4_Cb c, s32 d) {
    if (func_ov065_02270e4c() == 0 && G->unk_24 == 0) {
        G->unk_5c = c;
        G->unk_60 = d;
        G->unk_94 = a;
        G->unk_98 = b;
        if (func_ov065_02277c68() != 4) {
            func_ov065_02271440(2, -0xea6a);
            return;
        }
        func_ov065_022702fc(1);
        func_ov065_02278250(*(u32 *)((u8 *)G + 0x54));
    }
}

void func_ov065_022709c0() {
    if (func_ov065_02270b78() != 0) {
        func_ov065_02270b74();
    }
    if (G == 0 || G->unk_24 == 0 || func_ov065_02270e4c() != 0) {
        return;
    }
    switch (G->unk_24) {
    case 0:
        break;
    case 1:
        switch (func_ov065_022780e0()) {
        case 1:
            if (func_ov065_022701d0(func_ov065_0227c6c0(G->unk_1c, G->unk_8c, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 0, func_ov065_0226ffb4, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 3, func_ov065_0226fee4, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 1, func_ov065_02271f9c, 0)) != 0) {
                return;
            }
            if (func_ov065_022701d0(func_ov065_0227c624(G->unk_1c, 2, func_ov065_02271f08, 0)) != 0) {
                return;
            }
            func_ov065_022702fc(2);
            func_ov065_02271534();
            break;
        case 2:
            func_ov065_02271440(3, -0x4e8e);
            return;
        case 3:
            func_ov065_02271440(4, -0x4e85);
            return;
        }
        break;
    case 2:
        func_ov065_02271488();
        break;
    case 3:
    case 4:
        func_ov065_0227204c();
        func_ov065_0227674c(0);
        break;
    case 5:
        func_ov065_0227674c(1);
        func_ov065_0227204c();
        break;
    case 6: {
        Unk_ov065_02290670 *s;
        func_ov065_0227746c();
        func_ov065_0227204c();
        s = G;
        if (*(volatile u8 *)((u8 *)s + 0x351) == 2 || *(volatile u8 *)((u8 *)s + 0x351) == 3) {
            func_ov065_0227674c(1);
        } else if (s->unk_00 != 0) {
            func_ov065_0227674c(0);
        }
        break;
    }
    }
    if (*((u8 *)G + 0x354) == 1) {
        if (*(u32 *)((u8 *)G + 0x34c) != 0) {
            func_ov065_02288124();
            *(u32 *)((u8 *)G + 0x34c) = 0;
        }
        *((u8 *)G + 0x354) = 0;
    }
}
}
