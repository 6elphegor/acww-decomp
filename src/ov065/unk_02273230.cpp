// mwcc-flags: -O4,p
#include "types.h"

// ov065_033: DWC-like connection state machine (0x02273230..0x02273ad0)

struct Unk_ov065_02273230_H {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_02273274_G {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[5];
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10[4];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[8];
    u32 unk_20;
    u8 unk_24[0xd0];
    u32 unk_f4[0x29];
    s32 unk_198;
    u8 unk_19c[4];
    u8 unk_1a0;
    u8 unk_1a1[2];
    u8 unk_1a3;
    u8 unk_1a4;
    u8 unk_1a5;
    u16 unk_1a6;
    u16 unk_1a8;
    u8 unk_1aa[0x1e];
    u32 unk_1c8;
    u32 unk_1cc;
    u64 unk_1d0;
    u64 unk_1d8;
    u8 unk_1e0[0x10];
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x20];
    u32 unk_2d8;
};

extern Unk_ov065_02273230_H *data_ov065_02290818;
extern Unk_ov065_02273274_G *data_ov065_02290814;
extern u8 data_ov065_02290840[];
extern char data_ov065_0228c87c[];
extern char data_ov065_0228c888[];
extern char data_ov065_0228c894[];
extern char data_ov065_0228c8a0[];
extern char data_ov065_0228c8ac[];
extern char data_ov065_0228c868[];

extern "C" {
u64 func_ov065_02277974(void);
s32 func_ov065_022890b8(...);
void func_ov065_02277b64(u32, u32, u32);
void func_02115e64(u32, void *, u32);
s32 func_ov065_02270508(u32);
s32 func_ov065_02273b88(u32);
s32 func_ov065_02273d38(u32);
s32 func_ov065_0227532c(u32, u32, u32, u32, void *, u32);
s32 func_ov065_022746e4(s32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_02277750(u32, u32, void *, u32);
s32 func_ov065_0227062c(u32);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02284a18(u32);
u32 *func_ov065_02270350(u32, u32);
s32 func_ov065_02275f98(u32, u32);
u32 func_ov065_02275764(u32);
s32 func_ov065_02272f0c(u32);
u32 func_ov065_022745bc(u32);

u32 func_ov065_022736fc(u32 a, u32 b);
u32 func_ov065_02273958(u32 mask);
void func_ov065_022738b4(u32 a, u32 b);
void func_ov065_02273a40(void);
s32 func_ov065_02273a70(u32 a);

#define G data_ov065_02290814

void func_ov065_02273230(u32 a) {
    Unk_ov065_02273230_H *h = data_ov065_02290818;
    if (h != NULL && h->unk_00 != 0) {
        h->unk_08 = 0;
        data_ov065_02290818->unk_0c = 0;
        data_ov065_02290818->unk_02 = 0;
        data_ov065_02290818->unk_18 = func_ov065_02277974();
        if (a == 0) {
            data_ov065_02290818->unk_10 = func_ov065_02277974();
        }
    }
}

u32 func_ov065_02273274(u32 a) {
    u32 r = 0;
    if (a != 0) {
        return G->unk_2d8 & ~1;
    }
    {
        u32 i = 1;
        u32 n = G->unk_0d;
        for (; (s32)i <= (s32)n; i++) {
            r |= 1 << G->unk_2b8[i];
        }
    }
    return r;
}

u32 func_ov065_022732c0(u32 v, s32 k) {
    Unk_ov065_02273274_G *g;
    s32 i;
    if (k == 0) {
        k = 1;
    } else {
        k = 0;
    }
    for (; k <= *(volatile u8 *)&G->unk_0d; k++) {
        g = G;
        if (v == g->unk_f4[k]) {
            return g->unk_2b8[k];
        }
    }
    return 0xff;
}

u32 func_ov065_0227330c(char *s) {
    if (func_ov065_022890b8(s, data_ov065_0228c87c, -1) == -1) return 0;
    if (func_ov065_022890b8(s, data_ov065_0228c888) == -1) return 0;
    if (func_ov065_022890b8(s, data_ov065_0228c894) == -1) return 0;
    if (func_ov065_022890b8(s, data_ov065_0228c8a0) == -1 && func_ov065_022890b8(s, data_ov065_0228c8a0) == 0) return 0;
    if (func_ov065_022890b8(s, data_ov065_0228c8ac, -1) == -1) return 0;
    return func_ov065_022890b8(s, data_ov065_0228c868);
}

u32 func_ov065_022733c0(void) {
    s32 j;
    Unk_ov065_02273274_G *g;
    u8 i = 0;
    g = G;
    for (; i < 0x20; i++) {
        for (j = 0; j <= *(volatile u8 *)&g->unk_14; j++) {
            if (i == g->unk_2b8[j]) break;
        }
        if (j > *(volatile u8 *)&g->unk_14) break;
    }
    return i;
}

void func_ov065_02273400(void) {
    s32 i = 0;
    u32 *p;
    p = (u32 *)data_ov065_02290840;
    for (; i < 0x9a; i++) {
        if (p[1] != 0) {
            func_ov065_02277b64(4, p[1], 0);
        }
        p += 3;
    }
    {
        volatile u32 z = 0;
        func_02115e64(z, data_ov065_02290840, 0x738);
    }
}

u32 func_ov065_02273440(void) {
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->unk_198;
    if (st == 8 || st == 14 || st == 15) {
        d = func_ov065_02277974() - g->unk_1d8;
    } else {
        return 1;
    }
    switch (g->unk_198) {
    case 8:
        if (d > 0x1770) {
            if (!func_ov065_022736fc(g->unk_f4[0], 0xe)) return 0;
        }
        break;
    case 14:
        if (d > 0x1770) {
            g->unk_1a4++;
            if (G->unk_1a4 > 5) {
                if (!func_ov065_02273958(G->unk_1cc)) return 0;
                if (G->unk_0d != 0) {
                    G->unk_1a4 = 0;
                    G->unk_1d8 = func_ov065_02277974();
                } else {
                    func_ov065_02273b88(2);
                }
            } else {
                s32 i;
                for (i = 1; i <= G->unk_0d; i++) {
                    if ((G->unk_1cc & (1 << G->unk_2b8[i])) == 0) {
                        if (!func_ov065_022736fc(G->unk_f4[i], 0xd)) return 0;
                    }
                }
            }
        }
        break;
    case 15:
        if (g->unk_1a8 < d) {
            func_ov065_02273b88(2);
        }
        break;
    }
    return 1;
}

u32 func_ov065_02273590(u32 a, u32 b, u32 c) {
    if (func_ov065_02270508(a) != 6) return 1;
    switch (b) {
    case 0xd:
        if (G->unk_198 != 8) {
            G->unk_198 = 8;
            func_ov065_02273a70(c);
        }
        if (!func_ov065_022736fc(a, 0xe)) return 0;
        break;
    case 0xe:
        if (G->unk_198 == 0xe) {
            u64 now = func_ov065_02277974();
            Unk_ov065_02273274_G *g = G;
            u64 t0 = g->unk_1d8;
            u64 lim = t0 + 0x258;
            if (lim < now) {
                u64 x = ((now - t0) >> 1) + (u64)-300;
                if (g->unk_1a8 < x) {
                    g->unk_1a8 = (u16)x;
                }
            }
            {
                u32 idx = func_ov065_022732c0(a, 0);
                if (idx != 0xff) {
                    G->unk_1cc |= 1 << idx;
                }
            }
            {
                u32 m = func_ov065_02273274(1);
                if (G->unk_1cc == m) {
                    s32 i;
                    for (i = 1; i <= G->unk_0d; i++) {
                        if (!func_ov065_022736fc(G->unk_f4[i], 0xf)) return 0;
                    }
                    G->unk_198 = 0xf;
                }
            }
        } else {
            if (!func_ov065_022736fc(a, 0xf)) return 0;
        }
        break;
    case 0xf:
        if (G->unk_198 == 8) {
            func_ov065_02273b88(2);
        }
        break;
    }
    return 1;
}

u32 func_ov065_022736fc(u32 a, u32 b) {
    u32 tmp;
    u32 flag;
    if (b == 0xd) {
        tmp = G->unk_1f4;
        flag = 1;
    } else {
        flag = 0;
    }
    if (func_ov065_022746e4(func_ov065_0227532c(b, a, 0, 0, &tmp, flag))) return 0;
    G->unk_1d8 = func_ov065_02277974();
    return 1;
}

u32 func_ov065_02273760(void) {
    Unk_ov065_02273274_G *g = G;
    u64 d;
    s32 st = g->unk_198;
    if (st == 9 || st == 16 || st == 17) {
        d = func_ov065_02277974() - g->unk_1d0;
    } else {
        return 1;
    }
    switch (g->unk_198) {
    case 9:
        if (d > 0x1770) {
            func_ov065_022738b4(g->unk_2b8[0], 3);
        }
        break;
    case 16:
        if (d > 0x1770) {
            g->unk_1a3++;
            Unk_ov065_02273274_G *h = G;
            if (h->unk_1a3 > 5) {
                if (*(volatile u8 *)&h->unk_15 == 0) goto yes;
                if (*(volatile u8 *)&h->unk_15 == 1) {
                yes:
                    func_ov065_02273a40();
                    func_ov065_02273b88(1);
                } else {
                    if (!func_ov065_02273958(h->unk_1c8)) return 0;
                    if (G->unk_0d != 0) {
                        G->unk_1a3 = 0;
                        G->unk_1d0 = func_ov065_02277974();
                    } else {
                        if (!func_ov065_022741b0(G->unk_1f4)) return 0;
                    }
                }
            } else {
                s32 i;
                for (i = 1; i <= G->unk_0d; i++) {
                    if ((G->unk_1c8 & (1 << G->unk_2b8[i])) == 0) {
                        func_ov065_022738b4(G->unk_2b8[i], 2);
                    }
                }
            }
        }
        break;
    case 17:
        if (g->unk_1a6 < d) {
            func_ov065_02273d38(4);
        }
        break;
    }
    return 1;
}

void func_ov065_022738b4(u32 a, u32 b) {
    u8 buf[4];
    switch (b) {
    case 2: {
        u8 i;
        Unk_ov065_02273274_G *g;
        g = G;
        if (a == g->unk_2b8[g->unk_0d]) {
            buf[0] = 1;
        } else {
            buf[0] = 0;
        }
        for (i = 1; i <= *(volatile u8 *)&g->unk_0d; i++) {
            if (a == g->unk_2b8[i]) {
                buf[1] = i;
                buf[2] = a;
                break;
            }
        }
        break;
    }
    case 3:
        buf[0] = G->unk_1a6;
        buf[1] = G->unk_1a6 >> 8;
        break;
    }
    func_ov065_02277750(b, a, buf, 4);
    G->unk_1d0 = func_ov065_02277974();
}

u32 func_ov065_02273958(u32 mask) {
    u32 a[32];
    u32 b[32];
    Unk_ov065_02273274_G *g;
    s32 i, j, n1, n2;
    u8 *q;
    u8 *r;
    n2 = 0;
    n1 = 0;
    i = 1;
    g = G;
    if (i <= g->unk_0d) {
        q = (u8 *)g + 1;
        r = (u8 *)g + 4;
        do {
            if (mask & (1 << q[0x2b8])) {
                b[n1] = *(u32 *)(r + 0xf4);
                n1++;
            } else {
                a[n2] = *(u32 *)(r + 0xf4);
                n2++;
            }
            q++;
            r += 4;
            i++;
        } while (i <= g->unk_0d);
    }
    for (j = 0; j < n1; j++) {
        if (func_ov065_022746e4(func_ov065_0227532c(0x10, b[j], 0, 0, a, n2))) return 0;
    }
    G->unk_1a0 = 2;
    for (j = 0; j < n2; j++) {
        u32 idx = func_ov065_022732c0(a[j], 0);
        if (idx != 0xff) {
            func_ov065_0227062c(idx);
        }
    }
    G->unk_1a0 = 0;
    return 1;
}

void func_ov065_02273a40(void) {
    G->unk_1a0 = 2;
    func_ov065_022849f8(*G->unk_04);
    *(volatile u8 *)&G->unk_1a0 = 0;
}

s32 func_ov065_02273a70(u32 a) {
    u32 *r;
    G->unk_1f4 = a;
    r = func_ov065_02270350(a, G->unk_0d + 1);
    if (r != NULL) {
        G->unk_1a0 = 2;
        func_ov065_02284a18(*r);
        G->unk_1a0 = 0;
        return 1;
    }
    func_ov065_02275f98(a, G->unk_0d + 1);
    return 0;
}

u32 func_ov065_02273ad0(void) {
    u32 r = 0;
    G->unk_17 = r;
    G->unk_20 = r;
    G->unk_1a0 = r;
    if (G->unk_1f0 != 0) {
        if (*(volatile u8 *)&G->unk_15 == 0) {
            G->unk_198 = 3;
            r = func_ov065_02275764(r);
            if (func_ov065_02272f0c(r)) return r;
        } else if (*(volatile u8 *)&G->unk_15 == 1) {
            G->unk_198 = 4;
            r = func_ov065_022745bc(G->unk_1f0);
            if (func_ov065_022746e4(r)) return r;
        }
    } else {
        func_ov065_02273b88(1);
    }
    return r;
}
}
