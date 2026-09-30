// mwcc-flags: -O4,p
#include "types.h"

// ov065_037: DWC connection helpers (0x02275c60..0x02276500)

typedef s32 (*Unk_ov065_0227627c_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u32 unk_10;
    volatile u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u32 unk_24[32];
    u16 unk_a4[32];
    u32 unk_e4;
    s32 unk_e8;
    u32 unk_ec;
    u32 unk_f0;
    u32 unk_f4[32];
    u32 unk_174[4];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[8];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c[4];
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[4];
    u16 unk_1a6;
    u8 unk_1a8[0x20];
    u32 unk_1c8;
    u8 unk_1cc[0x14];
    u32 unk_1e0;
    u32 unk_1e4;
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u32 unk_1f8[32];
    u16 unk_278[32];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
    u8 unk_2dc[0xd8];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_0227627c_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_02270344_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
};

extern Unk_ov065_02290814 *data_ov065_02290814;
extern u8 data_ov065_02290810[];
extern u32 data_ov065_0229081c;
extern u32 data_ov065_02290818;
extern u8 data_ov065_02290820[];
extern char data_ov065_0228c85c[];
extern char data_ov065_0228c94c[];
extern char data_ov065_0228c950[];
extern char data_ov065_0228c8bc[];
extern char data_ov065_0228c8b8[];
extern char data_ov065_0228c954[];
extern char data_ov065_0228c960[];
extern char data_ov065_0228c96c[];

#define g data_ov065_02290814

extern "C" {
void func_02113088(char *, s32, const char *, ...);
void func_02115fb4(void *, s32, s32);
u32 func_0212b854(const char *, char **, s32);

void func_ov065_02277b64(s32, u32, s32);
void func_ov065_02273400(void);
s32 func_ov065_02277a9c(const char *, char *, char *, s32);
s32 func_ov065_02277a6c(const char *, char *, char *, s32);
s32 func_ov065_02271e00(s32, void *, s32);
s32 func_ov065_02271e8c(void);
s32 func_ov065_022741b0(...);
s32 func_ov065_02270508(void);
s32 func_ov065_02286da0(u32);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02273ad0(void);
s32 func_ov065_02273b88(u32);
u64 func_ov065_02277974(void);
s32 func_ov065_022738b4(u32, s32);
s32 func_ov065_02273274(u32);
s32 func_ov065_02273d38(u32);
s32 func_ov065_02288190(u32);
s32 func_ov065_02273a40(void);
s32 func_ov065_02270e34(s32, s32);
s32 func_ov065_02275890(void);
s32 func_ov065_022751b0(char *, const char *, s32);
s32 func_ov065_022749f8(u32, u32, u32, u32, void *, s32);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_02284a80(u32, s32, s32, char *, s32, s32, s32, s32);
s32 func_ov065_02272d5c(void);
s32 func_ov065_022703ec(void);
u32 *func_ov065_022703ac(s32);
Unk_ov065_02270344_Rec *func_ov065_02270344(s32);
s32 func_ov065_022849c0(u32);
s32 func_ov065_02284b8c(u32, const char *, s32);
s32 func_ov065_02284b94(u32, u32);

void func_ov065_02275df4(void);
u32 func_ov065_02275e64(s32, s32);
void func_ov065_0227627c(s32, s32);
void func_ov065_02276304(void);

BOOL func_ov065_02275c60(void) {
    if (g == NULL) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_02275c74(void) {
    s32 z = 0;
    data_ov065_02290814 = (Unk_ov065_02290814 *)z;
    if (data_ov065_0229081c != 0) {
        func_ov065_02277b64(4, data_ov065_0229081c, z);
        data_ov065_0229081c = 0;
    }
    func_ov065_02273400();
    if (data_ov065_02290818 != 0) {
        func_ov065_02277b64(4, data_ov065_02290818, 0);
        data_ov065_02290818 = 0;
    }
    data_ov065_02290810[0] = 0;
    data_ov065_02290810[1] = 0;
}

s32 func_ov065_02275ccc(void) {
    char buf[12];
    char buf2[32];
    if (g->unk_15 != 2) {
        return 0;
    }
    func_02113088(buf, 12, data_ov065_0228c85c, g->unk_16 + 1);
    func_ov065_02277a9c(data_ov065_0228c94c, buf, buf2, 0x2f);
    func_02113088(buf, 12, data_ov065_0228c85c, g->unk_0d + 1);
    func_ov065_02277a6c(data_ov065_0228c950, buf, buf2, 0x2f);
    func_02113088(buf, 12, data_ov065_0228c85c, 3);
    func_ov065_02277a6c(data_ov065_0228c8bc, buf, buf2, 0x2f);
    return func_ov065_02271e00(6, buf2, 0);
}

s32 func_ov065_02275d58(u8 **out) {
    s32 i;
    u32 b;
    if (g == NULL) {
        return 0;
    }
    func_02115fb4(data_ov065_02290820, 0, 0x20);
    i = 0;
    for (; i <= g->unk_0e; i++) {
        b = g->unk_2b8[i];
        if ((g->unk_2d8 & (1 << b)) == 0) {
            break;
        }
        data_ov065_02290820[i] = b;
    }
    *out = data_ov065_02290820;
    return g->unk_0e + 1;
}

s32 func_ov065_02275dd0(u32 *out) {
    if (g == NULL) {
        return 0;
    }
    *out = (u32)&g->unk_2b8;
    return g->unk_0d + 1;
}

void func_ov065_02275df4(void) {
    s32 n, i;
    n = -1;
    i = 0;
    Unk_ov065_02290814 *c = g;
    u32 v = c->unk_2d8;
    for (; i < 32; i++) {
        if ((v & (1 << i)) != 0) {
            n++;
        }
    }
    s32 z = 0;
    s32 m1 = ~z;
    if (n == m1) {
        c->unk_0e = z;
    } else {
        c->unk_0e = n;
    }
}

u32 func_ov065_02275e3c(void) {
    if (g != NULL) {
        return g->unk_0e;
    }
    return 0;
}

u32 func_ov065_02275e50(void) {
    if (g != NULL) {
        return g->unk_0d;
    }
    return 0;
}

u32 func_ov065_02275e64(s32 idx, s32 n) {
    u32 saved;
    if (g == NULL) {
        return 0;
    }
    saved = g->unk_f4[idx];
    g->unk_2d8 &= ~(1 << g->unk_2b8[idx]);
    func_ov065_02275df4();
    if (idx < n - 1) {
        s32 i;
        for (i = 0; i < n - idx; i++) {
            s32 j = idx + i;
            s32 k = j + 1;
            g->unk_24[j] = g->unk_24[k];
            g->unk_a4[j] = g->unk_a4[k];
            g->unk_f4[j] = g->unk_f4[k];
            g->unk_1f8[j] = g->unk_1f8[k];
            g->unk_278[j] = g->unk_278[k];
            g->unk_2b8[j] = g->unk_2b8[k];
        }
    }
    if (n > 0) {
        s32 l = n - 1;
        g->unk_24[l] = 0;
        g->unk_a4[l] = 0;
        g->unk_f4[l] = 0;
        g->unk_1f8[l] = 0;
        g->unk_278[l] = 0;
        g->unk_2b8[l] = 0;
    }
    return saved;
}

BOOL func_ov065_02275f98(u32 v, s32 n) {
    s32 i;
    u8 *q;
    if (g == NULL) {
        return FALSE;
    }
    q = (u8 *)g;
    for (i = 0; i < n; i++) {
        if (v == *(u32 *)(q + 0xf4)) {
            func_ov065_02275e64(i, n);
            return TRUE;
        }
        q += 4;
    }
    return FALSE;
}

void func_ov065_02275fdc(u32 a) {
    if (g->unk_1a0 != 2) {
        func_ov065_022741b0(a);
    }
}

BOOL func_ov065_02276000(s32 a, u32 b) {
    if (func_ov065_02270508() != 5) {
        return FALSE;
    }
    if (g->unk_15 == 2) {
        return TRUE;
    }
    if (a != 0) {
        func_ov065_0227627c(a, b - 0x13880);
        return TRUE;
    }
    g->unk_2b8[0] = 0;
    if (g->unk_1a1 == 1 || (u8)(g->unk_1a0 + 0xff) <= 1) {
        return TRUE;
    }
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    if (g->unk_0d != 0) {
        if (g->unk_1a0 == 0) {
            g->unk_1a0 = 3;
            func_ov065_022849f8(g->unk_04->unk_00);
        }
    } else if (g->unk_15 == 3) {
        func_ov065_0227627c(6, -0x13a2e);
    } else if (g->unk_1f0 != 0) {
        func_ov065_02273ad0();
    } else if (g->unk_198 == 1) {
        g->unk_198 = 0x12;
        u64 t = func_ov065_02277974();
        Unk_ov065_02290814 *c = g;
        c->unk_1e0 = (u32)t;
        c->unk_1e4 = (u32)(t >> 32);
    } else {
        func_ov065_02273b88(1);
    }
    return TRUE;
}

void func_ov065_02276124(u32 a, s32 b, u8 *c) {
    switch (b) {
    case 2:
        if (g->unk_198 == 1) {
            if (c[0] == 1) {
                g->unk_1f4 = 0;
            }
            u32 x = c[1];
            u8 y = c[2];
            g->unk_2b8[x] = y;
            g->unk_f4[x] = g->unk_1e8;
            if (g->unk_15 == 0 || g->unk_15 == 1) {
                g->unk_16 = g->unk_0d;
            }
            g->unk_198 = 9;
        }
        func_ov065_022738b4(a, 3);
        break;
    case 3:
        if (g->unk_198 == 0x10) {
            g->unk_1c8 |= 1 << a;
            s32 v = c[0] | (c[1] << 8);
            if (v > g->unk_1a6) {
                g->unk_1a6 = v;
            }
            s32 r = func_ov065_02273274(0);
            if (g->unk_1c8 == r) {
                s32 i;
                for (i = 1; i <= g->unk_0d; i++) {
                    func_ov065_022738b4(g->unk_2b8[i], 4);
                }
                g->unk_198 = 0x11;
            }
        } else {
            func_ov065_022738b4(a, 4);
        }
        break;
    case 4:
        if (g->unk_198 == 9) {
            func_ov065_02273d38(4);
        }
        break;
    }
}

void func_ov065_02276254(void) {
    if (g->unk_15 != 2) {
        g->unk_14 = 0;
        g->unk_16 = 0;
        func_ov065_02288190(g->unk_10);
    }
}

void func_ov065_0227627c(s32 a, s32 b) {
    if (g != NULL && a != 0) {
        func_ov065_02273a40();
        func_ov065_02270e34(a, b);
        func_ov065_02271e00(1, data_ov065_0228c8b8, 0);
        Unk_ov065_02290814 *c = g;
        BOOL x;
        BOOL y;
        if (c->unk_15 == 2) {
            x = TRUE;
        } else {
            x = FALSE;
        }
        if (c->unk_1f4 == 0) {
            y = TRUE;
        } else {
            y = FALSE;
        }
        s32 t = func_ov065_02271e8c();
        g->unk_44c(a, 0, y, x, t, c->unk_450);
        func_ov065_02275890();
    }
}

void func_ov065_02276304(void) {
    g->unk_3b4 = 0xff;
    g->unk_3b5 = 0;
}

void func_ov065_02276324(u32 a, u32 b, const char *s) {
    char tmp[16];
    u32 arr[128];
    s32 i = 0;
    s32 z = 0;
    for (; i < 0x80; i++) {
        s32 r = func_ov065_022751b0(tmp, s + 1, i);
        if (r == ~z) {
            break;
        }
        arr[i] = func_0212b854(tmp, NULL, 10);
    }
    func_ov065_022749f8(*(u8 *)s, b, 0, 0, arr, i);
}

void func_ov065_02276374(u32 a, u32 b) {
    char buf[12];
    if (g == NULL) {
        return;
    }
    if (g->unk_198 != 7 && g->unk_198 != 0xc) {
        return;
    }
    switch (b) {
    case 5:
        return;
    case 6: {
        g->unk_0c++;
        if (g->unk_0c > 5) {
            g->unk_0c = 0;
            func_ov065_022741b0(g->unk_f4[g->unk_14]);
            return;
        }
        func_02113088(buf, 12, data_ov065_0228c85c, g->unk_1e8);
        Unk_ov065_02290814 *c = g;
        s32 r0 = func_ov065_022868b0(c->unk_1f8[c->unk_14], c->unk_278[c->unk_14], 0);
        s32 r = func_ov065_02284a80(g->unk_04->unk_00, 0, r0, buf, -1, 0x1388, c->unk_08, 0);
        if (r == 1) {
            func_ov065_02272d5c();
            return;
        } else if (r != 0) {
            if (func_ov065_022741b0(g->unk_f4[g->unk_14]) == 0) {
                return;
            }
        }
        break;
    }
    default:
        if (func_ov065_022741b0(g->unk_f4[g->unk_0d + 1]) == 0) {
            return;
        }
        break;
    case 0: {
        s32 id = func_ov065_022703ec();
        if (id == -1) {
            func_ov065_0227627c(6, -0x1543c);
        }
        u32 *p = func_ov065_022703ac(id);
        Unk_ov065_02270344_Rec *q = func_ov065_02270344(id);
        *p = a;
        g->unk_0d++;
        q->unk_00 = id;
        q->unk_02 = 0;
        q->unk_04 = 0;
        q->unk_01 = g->unk_2b8[g->unk_0d];
        func_ov065_022849c0(a);
        if (g->unk_198 == 0xc) {
            func_ov065_02273d38(0);
            return;
        }
        func_ov065_02273d38(1);
        break;
    }
    }
}

void func_ov065_02276500(u32 a0, u32 b, u32 c, u32 d, s32 s0, u8 *e) {
    s32 id;
    if (g != NULL && g->unk_198 == 7 && g->unk_1a1 == 0) {
    } else {
        func_ov065_02284b8c(b, data_ov065_0228c954, -1);
        return;
    }
    id = func_ov065_022703ec();
    if (id == -1) {
        func_ov065_02284b8c(b, data_ov065_0228c960, -1);
        func_ov065_0227627c(6, -0x1543c);
        return;
    }
    if (c != g->unk_1f8[g->unk_0d] || d != g->unk_278[g->unk_0d]) {
        if (*e != 0) {
            if (g->unk_f4[g->unk_0d] == func_0212b854((char *)e, NULL, 10)) {
                g->unk_1f8[g->unk_0d] = c;
                g->unk_278[g->unk_0d] = d;
                goto ok;
            }
        }
        func_ov065_02284b8c(b, data_ov065_0228c96c, -1);
        return;
    }
ok:
    Unk_ov065_02290814 *gs = g;
    gs->unk_184 = 0;
    gs->unk_188 = 0;
    if (func_ov065_02284b94(b, gs->unk_08) == 0) {
        func_ov065_0227627c(6, -0x13a1a);
        return;
    }
    func_ov065_02276304();
    if (g->unk_0d == 0) {
        s32 t = s0 >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        g->unk_1a6 = t;
    }
    u32 *p = func_ov065_022703ac(id);
    Unk_ov065_02270344_Rec *q = func_ov065_02270344(id);
    *p = b;
    g->unk_0d++;
    q->unk_00 = id;
    q->unk_01 = g->unk_2b8[g->unk_0d - 1];
    q->unk_02 = 0;
    q->unk_04 = 0;
    func_ov065_022849c0(b);
    func_ov065_02273d38(2);
}
}
