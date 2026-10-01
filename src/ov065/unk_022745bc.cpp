// mwcc-flags: -O4,p
#include "types.h"

// ov065_035: DWC-like connection message handling (0x022745bc..0x022749f8)

struct Unk_ov065_022745bc_Ctx {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[5];
    u8 unk_0d;
    u8 unk_0e[2];
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18[2];
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24[8];
    u8 unk_44[0x60];
    u16 unk_a4[8];
    u8 unk_b4[0x30];
    u32 unk_e4;
    u32 unk_e8;
    u64 unk_ec;
    u32 unk_f4[0x20];
    u8 unk_174[0x10];
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c;
    u8 unk_18d[0xb];
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d[2];
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2[8];
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u64 unk_1b4;
    u32 unk_1bc;
    u64 unk_1c0;
    u8 unk_1c8[0x20];
    s32 unk_1e8;
    u32 unk_1ec;
    u32 unk_1f0;
    u32 unk_1f4;
    u8 unk_1f8[0xc0];
    u8 unk_2b8[0x78];
    u32 unk_330;
    u32 unk_334;
    u32 unk_338[0x1f];
    u8 unk_3b4;
    u8 unk_3b5[0x9f];
    s32 (*unk_454)(s32, u32);
    u32 unk_458;
};

struct Unk_ov065_022749f8_H {
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

struct Unk_ov065_022749f8_Sa {
    u16 unk_0;
    u16 unk_2;
    u32 unk_4;
};

extern Unk_ov065_022745bc_Ctx *data_ov065_02290814;
extern Unk_ov065_022749f8_H *data_ov065_02290818;
extern u8 data_ov065_02290810[];
extern char data_ov065_0228c868[];

extern "C" {
u64 func_01ffa6b4(void);
void func_02115e78(void *, void *, u32);
u32 func_ov065_02289274(u32, s32);
s32 func_ov065_022890b8(...);
u32 func_ov065_02289098(u32);
u32 func_ov065_0228907c(u32);
s32 func_ov065_0227532c(u32, s32, u32, u32, void *, u32);
s32 func_ov065_02272f0c(s32);
s32 func_ov065_02272f80(s32);
void func_ov065_02288190(u32);
u32 func_ov065_022733c0(void);
void func_ov065_02273230(u32);
s32 func_ov065_0227bfb4(u32, s32);
s32 func_ov065_02274308(u32);
s32 func_ov065_02271e8c(s32);
s32 func_ov065_022743e0(...);
s32 func_ov065_02273cb8(void *, u32);
s32 func_ov065_022754f0(s32, u32, u32);
s32 func_ov065_02272e18(void);
s32 func_ov065_02275764(u32);
s32 func_ov065_0227433c(void);
s32 func_ov065_022849f8(u32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_022849c8(u32);
void func_ov065_02272428(u32, u32, void *, void *);
s32 func_ov065_02273d38(u32);
s32 func_ov065_02273ad0(void);
s32 func_ov065_0227412c(u32);
s32 func_ov065_02273a40(void);
s32 func_ov065_02273a70(u32);
s32 func_ov065_02273b88(u32);
s32 func_ov065_02273590(u32, u32, u32);
u32 func_ov065_022732c0(u32, s32);
s32 func_ov065_0227062c(u32);
u64 func_ov065_02277974(void);
s32 func_ov065_0227627c(u32, s32);
s32 func_ov065_022740a4(void);
s32 func_ov065_022746e4(s32);
u32 func_ov065_02274864(s32, u32, u32, u32, u32);
void func_ov065_0227470c(u32, u32 *);
s32 func_ov065_02274754(u32, u32, u16);

s32 func_ov065_022745bc(u32 a, s32 b) {
    u32 args[3];
    s32 n;
    if (b != 0 || (data_ov065_02290814->unk_1c == 0 && data_ov065_02290814->unk_1a == 0)) {
        data_ov065_02290814->unk_1b0 = 1;
        Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
        h->unk_1b4 = func_01ffa6b4();
        h->unk_f4[0] = a;
        return 0;
    }
    if (data_ov065_02290814->unk_15 == 0) {
        u32 l = func_ov065_02289274(data_ov065_02290814->unk_e4, 0);
        data_ov065_02290814->unk_f4[0] = func_ov065_022890b8(l, data_ov065_0228c868, 0);
        data_ov065_02290814->unk_24[0] = func_ov065_02289098(l);
        data_ov065_02290814->unk_a4[0] = func_ov065_0228907c(l);
        data_ov065_02290814->unk_1ec = data_ov065_02290814->unk_f4[0];
        n = 1;
    } else {
        if (((volatile Unk_ov065_022745bc_Ctx *)data_ov065_02290814)->unk_15 == 1) {
            data_ov065_02290814->unk_f4[0] = a;
        }
        data_ov065_02290814->unk_1ec = a;
        args[1] = data_ov065_02290814->unk_1c;
        args[2] = data_ov065_02290814->unk_1a;
        n = 3;
    }
    data_ov065_02290814->unk_1bc = 0x1770;
    {
        Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
        h->unk_1c0 = func_01ffa6b4();
        h->unk_1b0 = 0;
    }
    u32 k = data_ov065_02290814->unk_1f0 != 0 ? 0xb : 1;
    Unk_ov065_022745bc_Ctx *j = data_ov065_02290814;
    args[0] = j->unk_15;
    return func_ov065_0227532c(k, a, j->unk_24[0], j->unk_a4[0], args, n);
}

enum Unk_ov065_022749f8_Z { Unk_ov065_022749f8_Z_0 = 0 };

s32 func_ov065_022749f8(u32 ev, s32 h, u32 p2, u16 p3, u32 *args, s32 n) {
    volatile u32 ub;
    s32 *volatile ps;
    s32 *p198;
    u32 buf[0x41];
    u32 loc1c;
    Unk_ov065_022749f8_Sa sa;
    s32 z = 0;
    s32 i;
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    s32 st;
    if (g == 0 || (p198 = &g->unk_198, ps = p198, st = *p198) == 0) {
        return 1;
    }
    switch (ev) {
    case 1:
    case 11: {
        u32 r;
        if (g->unk_15 != 0) {
            p2 = args[1];
            p3 = (u16)args[2];
        }
        r = func_ov065_02274864(h, p2, p3, args[0], ev == 0xb ? 1 : 0);
        if (r == 2) {
            Unk_ov065_022745bc_Ctx *q;
            if (func_ov065_022746e4(func_ov065_02274754(h, p2, p3)) != 0) {
                return 0;
            }
            q = data_ov065_02290814;
            if (q->unk_15 == 2 && q->unk_454 != 0) {
                data_ov065_02290814->unk_454(func_ov065_02271e8c(h), q->unk_458);
            }
            buf[0] = data_ov065_02290814->unk_14;
            for (z = 1; z <= data_ov065_02290814->unk_14; z++) {
                buf[z] = data_ov065_02290814->unk_f4[z];
            }
            buf[z++] = data_ov065_02290814->unk_1c;
            buf[z++] = data_ov065_02290814->unk_1a;
            data_ov065_02290814->unk_198 = 0xb;
        }
        if (r == 0xff) {
            break;
        }
        if (func_ov065_022746e4(func_ov065_0227532c(r, h, p2, p3, buf, z)) != 0) {
            return 0;
        }
        break;
    }
    case 2:
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1f0 = z;
        data_ov065_02290814->unk_19f = z;
        data_ov065_02290814->unk_1bc = z;
        data_ov065_02290814->unk_1b0 = z;
        data_ov065_02290814->unk_24[0] = (args + 1)[args[0]];
        data_ov065_02290814->unk_a4[0] = (args + 2)[args[0]];
        data_ov065_02290814->unk_1ac = (args + 1)[args[0]];
        data_ov065_02290814->unk_1aa = (args + 2)[args[0]];
        if (data_ov065_02290814->unk_15 == 1) {
            if (func_ov065_02273cb8(args + 1, args[0]) != 0) {
                if (data_ov065_02290814->unk_0d != 0) {
                    func_ov065_0227470c(h, args);
                }
            } else {
                if (func_ov065_022746e4(func_ov065_02274308(h)) != 0) {
                    return z;
                }
                if (func_ov065_022746e4(func_ov065_022743e0(z, z)) == 0) {
                    break;
                }
                return z;
            }
        }
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_15 == 0) {
                if (q->unk_0d != 0) {
                    func_ov065_0227470c(h, args);
                    if (func_ov065_022746e4(func_ov065_022740a4()) != 0) {
                        return 0;
                    }
                }
                data_ov065_02290814->unk_198 = 6;
                func_ov065_022754f0(0, 0, func_ov065_02289274(data_ov065_02290814->unk_e4, 0));
                if (func_ov065_02272e18() == 0) {
                    break;
                }
                return 0;
            } else {
                q->unk_198 = 5;
                if (func_ov065_02272f0c(func_ov065_02275764(h)) == 0) {
                    break;
                }
                return 0;
            }
        }
    case 3:
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        return func_ov065_0227433c();
    case 4: {
        if (st != 4) {
            break;
        }
        if (h != g->unk_1ec) {
            break;
        }
        g->unk_1c0 = func_01ffa6b4();
        if ((g->unk_1f0 != 0 && g->unk_19f < 0x10) || g->unk_15 == 3) {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1b0 = 1;
            q = data_ov065_02290814;
            q->unk_1b4 = func_01ffa6b4();
            if (q->unk_15 != 3) {
                q->unk_19f++;
            }
        } else {
            Unk_ov065_022745bc_Ctx *q;
            g->unk_1f0 = 0;
            data_ov065_02290814->unk_19f = 0;
            q = data_ov065_02290814;
            if (q->unk_15 == 0) {
                q->unk_198 = 3;
                data_ov065_02290814->unk_e8 = 1;
                u64 t = func_01ffa6b4();
                Unk_ov065_022745bc_Ctx *q2 = data_ov065_02290814;
                q2->unk_ec = t;
            } else if (((volatile Unk_ov065_022745bc_Ctx *)q)->unk_15 == 1) {
                func_ov065_022743e0(1, 0);
            }
        }
        break;
    }
    case 5:
        if (g->unk_17 == 0) {
            break;
        }
        if (h != g->unk_20) {
            break;
        }
        if (g->unk_15 == 2 && g->unk_0d == 1 && g->unk_f4[1] == h) {
            func_ov065_022849f8(*g->unk_04);
        }
        if (func_ov065_022741b0(h) == 0) {
            return 0;
        }
        break;
    case 6: {
        s32 y, x;
        x = args[0];
        y = (u16)args[1];
        if (st == 1) {
            *ps = 6;
        } else if (st == 6 || st == 0xb) {
            if (h != g->unk_20) {
                break;
            }
        } else {
            break;
        }
        data_ov065_02290814->unk_3b4 = 0xff;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            u32 *b0 = q->unk_f4;
            s32 k = q->unk_0d + 1;
            u32 *pe = b0 + k;
            if (h != b0[k]) {
                *pe = h;
            }
        }
        sa.unk_4 = x;
        sa.unk_2 = ((y >> 8) & 0xff) | ((y << 8) & 0xff00);
        data_ov065_02290814->unk_18c = 1;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            func_ov065_02272428(0, func_ov065_022849c8(*q->unk_04), &sa, &q->unk_18c);
        }
        Unk_ov065_022749f8_Z z6 = Unk_ov065_022749f8_Z_0;
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            q->unk_184 = z6;
            q->unk_188 = z6;
        }
        break;
    }
    case 7:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        loc1c = args[0];
        {
            u32 a1 = args[1];
            g->unk_f4[g->unk_14 + 1] = loc1c;
            data_ov065_02290814->unk_2b8[data_ov065_02290814->unk_14 + 1] = a1;
        }
        func_ov065_02288190(data_ov065_02290814->unk_10);
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_454 != 0) {
                data_ov065_02290814->unk_454(func_ov065_02271e8c(loc1c), q->unk_458);
            }
        }
        break;
    case 8:
        if (st != 1) {
            break;
        }
        if (h != g->unk_f4[0]) {
            break;
        }
        {
        u32 v = args[0];
        loc1c = v;
        if (v == 0) {
            u32 a1 = args[1];
            u32 a2 = args[2];
            g->unk_2b8[a1] = a2;
            data_ov065_02290814->unk_f4[a1] = data_ov065_02290814->unk_1e8;
            func_ov065_02273d38(3);
            break;
        } else {
            u32 a1 = args[1];
            ub = (u8)args[2];
            u32 *b0 = g->unk_f4;
            u32 *pp = b0 + a1;
            if (v == b0[a1] && a1 == g->unk_0d - 1) {
                if (func_ov065_022746e4(func_ov065_0227532c(9, h, g->unk_24[0], g->unk_a4[0], &loc1c, 1)) == 0) {
                    break;
                }
                return 0;
            }
            *pp = v;
            data_ov065_02290814->unk_2b8[a1] = ub;
            data_ov065_02290814->unk_24[a1] = args[3];
            data_ov065_02290814->unk_a4[a1] = args[4];
            data_ov065_02290814->unk_1ac = args[3];
            data_ov065_02290814->unk_1aa = args[4];
            data_ov065_02290814->unk_198 = 5;
            if (func_ov065_02272f0c(func_ov065_02275764(loc1c)) != 0) {
                return 0;
            }
            data_ov065_02290814->unk_1bc = 0;
            data_ov065_02290814->unk_1b0 = 0;
            break;
        }
        }
    case 9: {
        s32 t;
        u32 a0;
        if (st != 0xd) {
            break;
        }
        a0 = *(volatile u32 *)args;
        t = g->unk_19c;
        t++;
        if (a0 != g->unk_f4[t]) {
            break;
        }
        g->unk_19c = t;
        func_ov065_02273d38(z);
        break;
    }
    case 10:
        if (st != 1 && st != 0x12) {
            break;
        }
        if (g->unk_15 == 0 || func_ov065_02273cb8(args + 1, args[0]) != 0) {
            data_ov065_02290814->unk_1f0 = args[1];
            data_ov065_02290814->unk_19f = 0;
        } else {
            data_ov065_02290814->unk_1f0 = 0;
        }
        {
            Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
            if (q->unk_0d != 0) {
                func_ov065_022849f8(*q->unk_04);
            } else {
                if (func_ov065_02273ad0() != 0) {
                    return 0;
                }
            }
        }
        break;
    case 12:
        if (h != g->unk_f4[0]) {
            break;
        }
        if (g->unk_15 == 0 || ((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 == 1) {
            if (func_ov065_0227412c(h) == 0) {
                return 0;
            }
            break;
        }
        if (((volatile Unk_ov065_022745bc_Ctx *)g)->unk_15 != 3) {
            break;
        }
        if (args[0] == 0) {
            g->unk_1f4 = h;
            func_ov065_02273a40();
            func_ov065_02273b88(z);
        } else {
            func_ov065_02273a70(args[0]);
        }
        break;
    case 13:
    case 14:
    case 15:
        if (func_ov065_02273590(h, ev, args[0]) == 0) {
            return z;
        }
        break;
    case 16:
        if (h != g->unk_f4[0]) {
            return 1;
        }
        if (n > 0) {
            do {
                u32 t = func_ov065_022732c0(args[0], 0);
                if (t != 0xff) {
                    func_ov065_0227062c(t);
                }
                args++;
                z++;
            } while (z < n);
        }
        break;
    case 17: {
        Unk_ov065_022749f8_H *m = data_ov065_02290818;
        if (m != 0 && m->unk_00 != 0) {
            u64 d = func_ov065_02277974() - m->unk_10;
            if (d >= m->unk_04) {
                buf[0] = 1;
                goto sent;
            }
        }
        buf[0] = 0;
    sent:
        if (func_ov065_022746e4(func_ov065_0227532c(0x12, h, p2, p3, buf, 1)) != 0) {
            return 0;
        }
        break;
    }
    case 18: {
        u32 t;
        u32 m;
        if (st != 0x13) {
            break;
        }
        t = func_ov065_022732c0(h, z);
        if (t == 0xff) {
            break;
        }
        m = 1 << t;
        data_ov065_02290818->unk_08 |= m;
        if (args[0] != 0) {
            data_ov065_02290818->unk_0c |= m;
        }
        break;
    }
    case 19:
        func_ov065_0227627c(0xb, z);
        return z;
    }
    return 1;
}

u32 func_ov065_02274864(s32 a, u32 b, u32 c, u32 d, u32 e) {
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    u32 r;
    switch (g->unk_15) {
    case 1:
        if (func_ov065_0227bfb4(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
    case 0:
        g = data_ov065_02290814;
        if (d != g->unk_15 || g->unk_1a1 != 0 || g->unk_14 == g->unk_16 ||
            (g->unk_17 != 0 && g->unk_20 == g->unk_1e8)) {
            r = 3;
            if (g->unk_15 == 0) {
                u32 obj = g->unk_10;
                if (*(u32 *)(obj + 0xb4) == 0) {
                    if (g->unk_17 != 0) {
                        if (data_ov065_02290814->unk_20 == data_ov065_02290814->unk_1e8) {
                            func_ov065_02288190(obj);
                        }
                    }
                }
            }
            goto end;
        }
        {
            s32 t = g->unk_198;
            u32 p;
            if (t != 3 && t != 4) {
                goto r4;
            }
            if (g->unk_1c == 0 && g->unk_1a == 0) {
                goto r4;
            }
            if (b == 0 && c == 0) {
            r4:
                r = 4;
                goto end;
            }
            p = g->unk_1ec;
            if (p == 0) {
                goto r2b;
            }
            if (p != (u32)a) {
                goto other;
            }
            if (e == 0) {
                if (g->unk_1e8 >= a) {
                    goto rff;
                }
                if (a == g->unk_1f0) {
                    goto rff;
                }
            }
            r = 2;
            goto end;
        rff:
            r = 0xff;
            goto end;
        other:
            if (e == 0) {
                if (g->unk_1e8 >= a) {
                    goto r3;
                }
                if (g->unk_1f0 != 0) {
                    goto r3;
                }
            }
            if (func_ov065_022746e4(func_ov065_02274308(p)) != 0) {
                return 0xff;
            }
            r = 2;
            goto end;
        r3:
            r = 3;
            goto end;
        r2b:
            r = 2;
            goto end;
        }
    case 2:
        if (func_ov065_0227bfb4(g->unk_00, a) == 0) {
            r = 0xff;
            goto end;
        }
        if (d != 3 || (g = data_ov065_02290814, g->unk_14 == g->unk_16)) {
            r = 3;
            goto end;
        }
        if (data_ov065_02290810[0] == 1 && data_ov065_02290810[1] == 1) {
            r = 0x13;
            goto end;
        }
        if (g->unk_198 != 0xa) {
            goto r4b;
        }
        if (g->unk_1c == 0 && g->unk_1a == 0) {
            goto r4b;
        }
        if (b != 0 || c != 0) {
            goto r2c;
        }
    r4b:
        r = 4;
        goto end;
    r2c:
        r = 2;
        break;
    }
end:
    return r;
}
s32 func_ov065_02274754(u32 a, u32 b, u16 c) {
    u32 args[2];
    s32 i;
    Unk_ov065_022745bc_Ctx *g = data_ov065_02290814;
    if (g->unk_17 != 0 && g->unk_20 == a) {
        return 0;
    }
    g->unk_17 = 1;
    data_ov065_02290814->unk_20 = a;
    data_ov065_02290814->unk_1b0 = 0;
    data_ov065_02290814->unk_1bc = 0;
    func_ov065_02288190(data_ov065_02290814->unk_10);
    data_ov065_02290814->unk_1ec = 0;
    data_ov065_02290814->unk_f4[data_ov065_02290814->unk_14 + 1] = a;
    data_ov065_02290814->unk_24[data_ov065_02290814->unk_14 + 1] = b;
    data_ov065_02290814->unk_a4[data_ov065_02290814->unk_14 + 1] = c;
    data_ov065_02290814->unk_1ac = b;
    data_ov065_02290814->unk_1aa = c;
    Unk_ov065_022745bc_Ctx *h = data_ov065_02290814;
    h->unk_2b8[h->unk_14 + 1] = func_ov065_022733c0();
    args[0] = a;
    args[1] = data_ov065_02290814->unk_2b8[data_ov065_02290814->unk_14 + 1];
    for (i = 1; i <= data_ov065_02290814->unk_14; i++) {
        Unk_ov065_022745bc_Ctx *q = data_ov065_02290814;
        s32 r = func_ov065_0227532c(7, q->unk_f4[i], q->unk_24[i], q->unk_a4[i], args, 2);
        if (r != 0) {
            return r;
        }
    }
    func_ov065_02273230(1);
    return 0;
}

void func_ov065_0227470c(u32 a, u32 *p) {
    u32 n = p[0] + 2;
    if (n > 2) {
        func_02115e78(&p[1], data_ov065_02290814->unk_338, (n - 2) * 4);
    }
    data_ov065_02290814->unk_330 = n - 1;
    data_ov065_02290814->unk_334 = a;
}

s32 func_ov065_022746e4(s32 a) {
    if (data_ov065_02290814->unk_15 == 0) {
        return func_ov065_02272f0c(a);
    }
    return func_ov065_02272f80(a);
}
}
