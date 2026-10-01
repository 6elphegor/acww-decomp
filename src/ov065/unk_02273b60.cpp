// mwcc-flags: -O4,p
#include "types.h"

// ov065_034: DWC connection state machine (0x02273b60..0x022745bc)

typedef s32 (*Unk_ov065_02273b60_Fn)(s32, s32, s32, s32, s32, s32);

struct Unk_ov065_02273b60_Ctx {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
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
    u8 unk_174[0x20];
    u32 unk_194;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[6];
    u16 unk_1a8;
    u8 unk_1aa[6];
    u32 unk_1b0;
    u8 unk_1b4[8];
    u32 unk_1bc;
    u32 unk_1c0;
    u32 unk_1c4;
    u32 unk_1c8;
    u32 unk_1cc;
    u8 unk_1d0[0x18];
    u32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x2c];
    u8 *unk_2e4;
    u8 unk_2e8[4];
    u8 unk_2ec[0x40];
    s32 unk_32c;
    u32 unk_330;
    u8 unk_334[0x80];
    u8 unk_3b4;
    u8 unk_3b5;
    u8 unk_3b6[0x96];
    Unk_ov065_02273b60_Fn unk_44c;
    u32 unk_450;
};

struct Unk_ov065_022743e0_Rec {
    u32 unk_00;
    u32 unk_04;
};

extern Unk_ov065_02273b60_Ctx *data_ov065_02290814;
extern u8 data_ov065_02290810[];
extern char data_ov065_0228c8b8[];
extern char data_ov065_0228c8bc[];
extern char data_ov065_0228c8c0[];
extern char data_ov065_0228c8c4[];

#define g data_ov065_02290814

extern "C" {
s32 func_ov065_02273a40(void);
s32 func_ov065_02273a70(s32);
s32 func_ov065_022736fc(s32, s32);
s32 func_ov065_022738b4(s32, s32);
s32 func_ov065_02275984(void);
s32 func_ov065_02271e8c(...);
s32 func_ov065_02275764(s32);
s32 func_ov065_02272f0c(void);
s32 func_ov065_02272f80(void);
s32 func_ov065_02275890(void);
s32 func_ov065_02275ccc(void);
s32 func_ov065_02271e00(s32, void *, s32);
s32 func_ov065_0227bfb4(u32, u32);
s32 func_ov065_0227532c(s32, u32, u32, u32, void *, s32);
s32 func_ov065_022746e4(void);
s32 func_ov065_0227627c(s32, s32);
s32 func_ov065_02288190(u32);
s32 func_ov065_02289444(u32);
s32 func_ov065_02289280(u32);
s32 func_ov065_02287260(void);
s32 func_ov065_022849f8(u32);
s32 func_ov065_02286da0(u32);
s32 func_ov065_02271474(void);
s32 func_ov065_0227c000(u32, s32, void *);
s32 func_ov065_0227c05c(u32, u32, void *);
s32 func_ov065_02277998(const char *, void *, void *, s32);
s32 func_ov065_022745bc(s32, s32);
u64 func_01ffa6b4(void);
s32 func_020ffc60(s32, u8 *);
s32 func_020ffdd8(u8 *);
s32 func_0212b854(void *, s32, s32);

void func_ov065_02273b60(void);
void func_ov065_02273b88(s32 a);
void func_ov065_02273c30(void);
s32 func_ov065_02273cb8(u32 *a, u32 n);
void func_ov065_02273d38(s32 a);
s32 func_ov065_022740a4(void);
s32 func_ov065_0227412c(void);
s32 func_ov065_022741b0(s32 a);
s32 func_ov065_02274308(s32 a);
s32 func_ov065_0227433c(void);
s32 func_ov065_022743e0(s32 a, s32 b);

void func_ov065_02273b60(void) {
    if (g->unk_15 == 2) return;
    if (g->unk_15 == 3) return;
    func_ov065_02273a40();
    func_ov065_02273b88(1);
}

void func_ov065_02273b88(s32 a) {
    Unk_ov065_02273b60_Ctx *c;
    BOOL r;
    if (a == 0) {
        func_ov065_02273c30();
    } else {
        func_ov065_02275984();
        c = g;
        if (c->unk_15 == 2 || c->unk_15 == 3) {
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 1, r, 0, func_ov065_02271e8c(), c->unk_450);
        } else if (c->unk_15 == 0) {
            if (a == 1) {
                func_ov065_02275764(0);
                if (func_ov065_02272f0c() != 0) return;
            }
        } else if (c->unk_15 == 1) {
            if (a == 1) {
                func_ov065_022743e0(0, 0);
            }
        }
    }
}

void func_ov065_02273c30(void) {
    s32 v;
    Unk_ov065_02273b60_Ctx *c;
    BOOL r6, r5;
    func_ov065_02271e00(1, data_ov065_0228c8b8, 0);
    if (func_ov065_02272f80() == 0) {
        func_ov065_02275890();
        c = g;
        v = c->unk_1f4;
        if (v != 0) r5 = TRUE;
        else if (c->unk_15 == 2) r5 = TRUE;
        else r5 = FALSE;
        if (v == 0) r6 = TRUE;
        else r6 = FALSE;
        g->unk_44c(0, 1, r6, r5, func_ov065_02271e8c(v), c->unk_450);
        g->unk_1a1 = 0;
    }
}

s32 func_ov065_02273cb8(u32 *a, u32 n) {
    u32 i;
    if (g->unk_19e != 0 && g->unk_198 == 4) return TRUE;
    for (i = 0; i < n; a++, i++) {
        if (func_ov065_0227bfb4(g->unk_00, *a) == 0) return FALSE;
        if (g->unk_19e != 0 && g->unk_198 == 1) return TRUE;
    }
    return TRUE;
}

void func_ov065_02273d38(s32 a) {
    s32 kind = 3;
    u32 args[6];
    BOOL done = FALSE;
    s32 i;
    switch (a) {
    case 0:
        if (g->unk_19c < g->unk_0d - 1) {
            g->unk_198 = 13;
            args[0] = g->unk_f4[g->unk_19c + 1];
            args[1] = g->unk_19c + 1;
            args[2] = g->unk_2b8[g->unk_19c + 1];
            args[3] = g->unk_24[g->unk_19c + 1];
            args[4] = g->unk_a4[g->unk_19c + 1];
            kind = 5;
        } else {
            g->unk_17 = 0;
            g->unk_20 = 0;
            func_ov065_02288190(g->unk_10);
            if (g->unk_15 == 0) g->unk_198 = 3;
            else if (g->unk_15 == 1) g->unk_198 = 4;
            else g->unk_198 = 10;
            g->unk_19c = 0;
            if (g->unk_15 == 2 || g->unk_0d == g->unk_16) {
                if (g->unk_15 == 2) {
                    g->unk_1f4 = g->unk_f4[g->unk_0d];
                } else {
                    g->unk_1f4 = 0;
                    g->unk_f4[0] = g->unk_1e8;
                }
                g->unk_198 = 0x10;
                g->unk_1c8 = 0;
                for (i = 1; i <= g->unk_0d; i++) {
                    func_ov065_022738b4(g->unk_2b8[i], 2);
                }
            } else {
                args[0] = 0;
                args[1] = g->unk_0d;
                args[2] = g->unk_2b8[g->unk_0d];
                if (g->unk_15 == 0) {
                    g->unk_e8 = 2;
                    u64 t = func_01ffa6b4();
                    Unk_ov065_02273b60_Ctx *c = g;
                    c->unk_ec = (u32)t;
                    c->unk_f0 = (u32)(t >> 32);
                } else if (g->unk_15 == 1) {
                    func_ov065_022743e0(1, 0);
                }
            }
            if (g->unk_15 != 2) done = TRUE;
        }
        if (g->unk_198 != 0x10) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 n = c->unk_0d;
            if (func_ov065_0227532c(8, c->unk_f4[n], c->unk_24[n], c->unk_a4[n], args, kind), func_ov065_022746e4() != 0) return;
            g->unk_3b5 = 0;
        }
        break;
    case 1:
        g->unk_198 = 1;
        if (g->unk_15 == 3) g->unk_1f4 = g->unk_f4[g->unk_0d];
        done = TRUE;
        break;
    case 2:
        g->unk_198 = 1;
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            g->unk_17 = 1;
            g->unk_20 = g->unk_1e8;
        }
        if (g->unk_0d > 1) {
            Unk_ov065_02273b60_Ctx *c = g;
            u32 args2 = (u32)&c->unk_f4[c->unk_0d - 1];
            func_ov065_0227532c(9, c->unk_f4[0], c->unk_24[0], c->unk_a4[0], (void *)args2, 1);
            if (func_ov065_022746e4() != 0) return;
        }
        break;
    case 3:
        g->unk_198 = 1;
        g->unk_1f4 = done;
        done = TRUE;
        break;
    case 4:
        if (g->unk_15 != 2) func_ov065_02271e00(2, data_ov065_0228c8b8, done);
        {
            Unk_ov065_02273b60_Ctx *c = g;
            BOOL r;
            if (c->unk_1f4 == 0) r = TRUE;
            else r = FALSE;
            g->unk_44c(0, 0, r, 0, func_ov065_02271e8c(), c->unk_450);
        }
        if (g->unk_15 == 0 || g->unk_15 == 1) {
            func_ov065_02275890();
        } else {
            if (g->unk_e4 != 0) {
                func_ov065_02289444(g->unk_e4);
                g->unk_e4 = 0;
            }
            func_ov065_02287260();
            if (g->unk_15 == 2) {
                func_ov065_02275ccc();
                if (func_ov065_02272f80() != 0) return;
                if (data_ov065_02290810[0] == 1) data_ov065_02290810[1] = 1;
                g->unk_198 = 10;
            } else {
                g->unk_198 = 1;
            }
            g->unk_1f4 = 0;
        }
        g->unk_1a1 = 0;
        break;
    }
    if (done != 0 && g->unk_15 != 3) {
        func_ov065_02289280(g->unk_e4);
    }
}

s32 func_ov065_022740a4(void) {
    s32 i, r;
    for (i = 1; i <= g->unk_0d; i++) {
        Unk_ov065_02273b60_Ctx *c = g;
        r = func_ov065_0227532c(10, c->unk_f4[i], c->unk_24[i], c->unk_a4[i], &c->unk_330, c->unk_330 + 1);
        if (r != 0) return r;
    }
    g->unk_17 = 0;
    g->unk_20 = 0;
    g->unk_1a0 = 1;
    func_ov065_022849f8(*(u32 *)g->unk_04);
    g->unk_1a0 = 0;
    return 0;
}

s32 func_ov065_0227412c(void) {
    BOOL r = TRUE;
    Unk_ov065_02273b60_Ctx *c = g;
    if (c->unk_15 == 3) {
        if (c->unk_0d != 0) func_ov065_02273a40();
        func_ov065_0227627c(6, -0x13a2e);
        return FALSE;
    }
    c->unk_14 = c->unk_0d;
    g->unk_1f0 = 0;
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    c = g;
    if (c->unk_0d != 0) {
        func_ov065_02273b60();
    } else {
        c->unk_198 = 4;
        r = func_ov065_0227433c();
    }
    return r;
}

s32 func_ov065_022741b0(s32 a) {
    Unk_ov065_02273b60_Ctx *c = g;
    BOOL b;
    if (c->unk_17 != 0 && c->unk_20 == c->unk_1e8) b = FALSE;
    else b = TRUE;
    if (b) {
        c->unk_17 = 0;
        g->unk_20 = 0;
        func_ov065_02288190(g->unk_10);
    }
    if (g->unk_0d < 0x1f) g->unk_f4[g->unk_0d + 1] = 0;
    g->unk_3b4 = 0xff;
    if (g->unk_194 != 0) {
        func_ov065_02286da0(g->unk_194);
        g->unk_194 = 0;
    }
    g->unk_14 = g->unk_0d;
    g->unk_1ec = 0;
    if (!b) {
        if (g->unk_15 != 3) func_ov065_02273b60();
    } else if (g->unk_15 == 0) {
        g->unk_198 = 3;
        g->unk_e8 = 2;
        u64 t = func_01ffa6b4();
        Unk_ov065_02273b60_Ctx *d = g;
        d->unk_ec = (u32)t;
        d->unk_f0 = (u32)(t >> 32);
    } else if (g->unk_15 == 1) {
        g->unk_198 = 4;
        func_ov065_022743e0(1, 0);
    } else if (g->unk_15 == 2) {
        s32 i;
        g->unk_198 = 14;
        g->unk_1cc = 0;
        g->unk_1a8 = 0;
        func_ov065_02273a70(a);
        for (i = 1; i <= g->unk_0d; i++) {
            if (func_ov065_022736fc(g->unk_f4[i], 13) == 0) return FALSE;
        }
        if (g->unk_0d == 0) func_ov065_02273b88(2);
    }
    return TRUE;
}

s32 func_ov065_02274308(s32 a) {
    Unk_ov065_02273b60_Ctx *c = g;
    s32 r = func_ov065_0227532c(5, a, c->unk_24[0], c->unk_a4[0], 0, 0);
    g->unk_1ec = 0;
    return r;
}

s32 func_ov065_0227433c(void) {
    Unk_ov065_02273b60_Ctx *c;
    u64 t;
    g->unk_1f0 = 0;
    g->unk_1ec = 0;
    g->unk_19f = 0;
    c = g;
    t = func_01ffa6b4();
    c->unk_1c0 = (u32)t;
    c->unk_1c4 = (u32)(t >> 32);
    if (c->unk_15 == 0) {
        c->unk_198 = 3;
        func_ov065_02275764(0);
        if (func_ov065_02272f0c() != 0) return FALSE;
    } else if (c->unk_15 == 1) {
        func_ov065_022743e0(0, 0);
        if (func_ov065_022746e4() != 0) return FALSE;
    } else if (c->unk_15 == 3) {
        func_ov065_0227627c(6, -0x13a1a);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_022743e0(s32 a, s32 b) {
    s32 x;
    volatile s32 av = a;
    volatile s32 first;
    volatile s32 next;
    volatile s32 started;
    struct {
        volatile s32 n2;
        u8 buf14[8];
        u32 h;
        char buf20[12];
        Unk_ov065_022743e0_Rec rec;
        char buf34[0x208];
    } l;
    if (b != 0) {
        next = g->unk_19d;
    } else {
        u8 cur = g->unk_19d;
        if (cur < g->unk_32c - 1) next = cur + 1;
        else next = 0;
    }
    started = 0;
    if (b == 0) first = 1;
    else first = 0;
    Unk_ov065_02273b60_Ctx **const gp = &g;
    for (;;) {
        Unk_ov065_02273b60_Ctx *c;
        s32 i;
        s32 n;
        s32 e0, e1;
        s32 n1, n3;
        if (first != 0 || started != 0) {
            (*gp)->unk_19d++;
            if ((*gp)->unk_19d >= (*gp)->unk_32c) (*gp)->unk_19d = 0;
        }
        if (started != 0 && (*gp)->unk_19d == next) {
            (*gp)->unk_1bc = 3000;
            c = *gp;
            u64 t = func_01ffa6b4();
            c->unk_1c0 = (u32)t;
            c->unk_1c4 = (u32)(t >> 32);
            c->unk_1b0 = 0;
            return 0;
        }
        started = 1;
        c = *gp;
        x = func_020ffc60(func_ov065_02271474(), c->unk_2e4 + c->unk_2ec[c->unk_19d] * 12);
        if (x == 0) continue;
        if (x == -1) continue;
        if (func_020ffdd8((*gp)->unk_2e4 + (*gp)->unk_2ec[(*gp)->unk_19d] * 12) == 0) continue;
        i = 1;
        c = *gp;
        n = c->unk_0d;
        if (n >= 1) {
            u32 *p = (u32 *)((u8 *)c + 4);
            do {
                if (x == *(u32 *)((u8 *)p + 0xf4)) break;
                p++;
                i++;
            } while (i <= *(volatile u8 *)&c->unk_0d);
        }
        if (i <= n) continue;
        e0 = func_ov065_0227c000((*gp)->unk_00, x, &l.h);
        e1 = func_ov065_0227c05c((*gp)->unk_00, l.h, &l.rec);
        if ((e0 | e1) != 0) continue;
        if (l.rec.unk_04 != 4) continue;
        n1 = func_ov065_02277998(data_ov065_0228c8bc, l.buf20, l.buf34, 0x2f);
        l.n2 = func_ov065_02277998(data_ov065_0228c8c0, l.buf14 + 2, l.buf34, 0x2f);
        n3 = func_ov065_02277998(data_ov065_0228c8c4, l.buf14, l.buf34, 0x2f);
        if (n1 <= 0) continue;
        if (l.n2 <= 0) continue;
        if (n3 <= 0) continue;
        if (func_0212b854(l.buf20, 0, 10) != 3) continue;
        if ((*gp)->unk_16 != func_0212b854(l.buf14 + 2, 0, 10)) continue;
        return func_ov065_022745bc(x, av);
    }
}
}
