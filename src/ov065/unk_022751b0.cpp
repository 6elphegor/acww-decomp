// mwcc-flags: -O4,p
#include "types.h"

// ov065_036: DWC matchmaking / SB (server browser) request code (0x022751b0..0x02275c60)

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02275474_Arg {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov065_02290814 {
    u32 unk_00;
    Unk_ov065_02290814_Sub *unk_04;
    u8 unk_08[4];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f[5];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u8 unk_24[0x80];
    u8 unk_a4[0x40];
    u32 unk_e4;
    u32 unk_e8;
    u8 unk_ec[8];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u16 unk_176;
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    Unk_ov065_02275474_Arg unk_18c;
    s32 unk_198;
    u8 unk_19c;
    u8 unk_19d;
    u8 unk_19e;
    u8 unk_19f;
    u8 unk_1a0;
    u8 unk_1a1;
    u8 unk_1a2;
    u8 unk_1a3;
    u8 unk_1a4;
    u8 unk_1a5;
    u16 unk_1a6;
    u16 unk_1a8;
    u16 unk_1aa;
    u32 unk_1ac;
    u32 unk_1b0;
    u32 unk_1b4;
    u32 unk_1b8;
    u32 unk_1bc;
    u32 unk_1c0;
    u32 unk_1c4;
    u32 unk_1c8;
    u32 unk_1cc;
    u32 unk_1d0;
    u32 unk_1d4;
    u32 unk_1d8;
    u32 unk_1dc;
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
    u8 unk_2dc[0x54];
    u8 unk_330[0x84];
    u8 unk_3b4;
    u8 unk_3b5;
    u16 unk_3b6;
    u32 unk_3b8;
    u32 unk_3bc[32];
    u32 unk_43c;
    u32 unk_440;
    u32 unk_444;
    u32 unk_448;
    u32 unk_44c;
    u32 unk_450;
    u32 unk_454;
    u32 unk_458;
};

struct Unk_ov065_02275298_Hdr {
    char unk_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14[32];
};

struct Unk_ov065_02290840_Ent {
    u8 unk_00;
    u8 unk_01[11];
};

extern Unk_ov065_02290814 *data_ov065_02290814;
extern u32 data_ov065_0229081c;
extern Unk_ov065_02290840_Ent data_ov065_02290840[];
extern char data_ov065_0228c85c[];
extern char data_ov065_0228c860[];
extern char data_ov065_0228c868[];
extern char data_ov065_0228c870[];
extern char data_ov065_0228c894[];
extern char data_ov065_0228c8a0[];
extern char data_ov065_0228c8ac[];
extern char data_ov065_0228c8c8[];
extern char data_ov065_0228c8d0[];
extern char data_ov065_0228c8d8[];
extern char data_ov065_0228c8dc[];
extern char data_ov065_0228c8e0[];
extern char data_ov065_0228c938[];
extern char data_ov065_0228c944[];

extern "C" {

char *func_0212a120(const char *, s32);
s32 func_021277d4(const char *);
void func_02127838(char *, const char *);
void func_02116048(const void *, void *, u32);
void func_02115e78(const void *, void *, u32);
void func_02115e64(u32, void *, u32);
void func_02115e30(u32, void *, u32);
void func_02115fb4(void *, s32, u32);
s32 func_02113088(char *, s32, const char *, ...);

s32 func_ov065_0227bd20(u32, u32, char *);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_02289324(u32, s32, u32, void *, s32);
s32 func_ov065_022892ec(u32, s32, u32, u32);
s32 func_ov065_02272f0c(void);
s32 func_ov065_022849c8(u32);
s32 func_ov065_022849d4(u32);
s32 func_ov065_02286dcc(s32, u32, u32, void *, void *, void *);
void func_ov065_02272428(u32, u32, u32, void *);
s32 func_ov065_0227269c(void);
u64 func_ov065_02277974(void);
s32 func_ov065_02289064(u32);
u32 func_ov065_02289098(u32);
u32 func_ov065_0228907c(u32);
u32 func_ov065_02289060(u32);
u32 func_ov065_02289044(u32);
s32 func_ov065_0228924c(u32);
s32 func_ov065_02261358(void);
u32 func_ov065_022778b0(u32);
s32 func_ov065_02289280(u32);
s32 func_ov065_02289364(u32, u32, u32, void *, u32, void *, u32);
s32 func_ov065_02289444(u32);
s32 func_ov065_02287260(void);
void func_ov065_02277b64(u32, u32);
void func_ov065_02273400(void);
void func_ov065_022884fc(u32, char *);

#define G data_ov065_02290814

s32 func_ov065_022751b0(char *out, const char *s, s32 n);
s32 func_ov065_02275228(u32 a, u32 b, u32 c, char *d);
s32 func_ov065_02275298(u32 a, u32 b, u32 c, u32 *d, s32 e);
s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f);
s32 func_ov065_02275474(Unk_ov065_02275474_Arg *p);
s32 func_ov065_022754f0(u32 a, u32 b, u32 c);
void func_ov065_0227571c(char *buf, u32 x, u32 y, u32 z);
void func_ov065_02275764(u32 a);
void func_ov065_02275890(void);
void func_ov065_022758f4(u32 a, u32 b, u32 c, u32 d);
void func_ov065_02275984(u32 a);

static inline void Unk_ov065_02275984_Clear32(void *d, u32 n) {
    volatile u32 t = 0;
    func_02115e64(t, d, n);
}

static inline void Unk_ov065_02275984_Clear16(void *d, u32 n) {
    volatile u16 t = 0;
    func_02115e30(t, d, n);
}

s32 func_ov065_022751b0(char *out, const char *s, s32 n) {
    char *end = func_0212a120(s, 0);
    s32 i;
    char *p;
    s32 len;
    for (i = 0; i < n; i++) {
        p = func_0212a120(s, '/');
        if (p == NULL) {
            return -1;
        }
        s = p + 1;
    }
    p = func_0212a120(s, '/');
    if (p == NULL) {
        p = end;
    }
    if (s == p) {
        return -1;
    }
    len = p - s;
    func_02116048(s, out, len);
    out[len] = 0;
    return len;
}

s32 func_ov065_02275228(u32 a, u32 b, u32 c, char *d) {
    char buf[0x200];
    s32 n = func_02113088(buf, 0x200, data_ov065_0228c8c8, data_ov065_0228c8d0, 3, data_ov065_0228c8d8);
    char *q = &buf[1];
    char *p;
    buf[n] = b;
    p = q + n;
    q[n] = 0;
    if (d != NULL) {
        s32 len = func_021277d4(d);
        func_02116048(d, p, len);
        p[len] = 0;
    }
    return func_ov065_0227bd20(a, c, buf);
}

s32 func_ov065_02275298(u32 a, u32 b, u32 c, u32 *d, s32 e) {
    Unk_ov065_02275298_Hdr h;
    s32 i;
    s32 r;
    if (d != NULL && e != 0) {
        func_02115e78(d, h.unk_14, e * 4);
    } else {
        e = 0;
    }
    func_02127838(h.unk_00, data_ov065_0228c860);
    h.unk_04 = 3;
    h.unk_08 = a;
    h.unk_09 = e * 4;
    h.unk_0a = G->unk_1a;
    h.unk_0c = G->unk_1c;
    h.unk_10 = G->unk_1e8;
    i = 0;
    do {
        r = func_ov065_02289324(G->unk_e4, func_ov065_022868b0(b, 0, 0), c, &h, h.unk_09 + 0x14);
        if (r == 0) break;
        if (r != 2) break;
        i++;
    } while (i < 5);
    return r;
}

s32 func_ov065_0227532c(u32 a, u32 b, u32 c, u32 d, u32 *e, s32 f) {
    s32 r;
    char buf[0x200];
    char tmp[0x10];
    s32 i;
    u32 *p;
    r = 0;
    if (G->unk_15 == 0 || ((G->unk_15 == 3 || G->unk_19e != 0) && a == 6)) {
        r = func_ov065_02275298(a, c, d, e, f);
    } else {
        if (e != NULL && f != 0) {
            r = func_02113088(buf, 0x200, data_ov065_0228c85c, e[0]);
            i = 1;
            if (i < f) {
                p = e + 1;
                do {
                    s32 m = func_02113088(tmp, 0x10, data_ov065_0228c8dc, *p);
                    func_02116048(tmp, buf + r, m);
                    r += m;
                    p++;
                    i++;
                } while (i < f);
            }
        }
        buf[r] = 0;
        r = func_ov065_02275228(G->unk_00, a, b, buf);
    }
    if (a == 2 || a == 6 || (u8)(a + 0xf8) <= 1) {
        G->unk_3b4 = a;
        G->unk_3b6 = d;
        G->unk_3b8 = c;
        G->unk_43c = b;
        G->unk_440 = f;
        {
            Unk_ov065_02290814 *g = G;
            u64 t = func_ov065_02277974();
            g->unk_444 = (u32)t;
            g->unk_448 = (u32)(t >> 32);
            if (e != NULL && f != 0) {
                func_02115e78(e, g->unk_3bc, f * 4);
            }
        }
    }
    return r;
}

s32 func_ov065_02275474(Unk_ov065_02275474_Arg *p) {
    s32 i;
    s32 r;
    if (p->unk_00 == 0) {
        func_ov065_022892ec(G->unk_e4, func_ov065_022868b0(p->unk_04, 0, 0), p->unk_02, p->unk_08);
        if (func_ov065_02272f0c() != 0) {
            return 2;
        }
    }
    for (i = 0; i < 5; i++) {
        r = func_ov065_02286dcc(func_ov065_022849c8(G->unk_04->unk_00), p->unk_08, p->unk_00, (void *)func_ov065_0227269c, (void *)func_ov065_02272428, p);
        if (r == 0) break;
        if (r != 3) break;
    }
    return r;
}

enum Unk_ov065_022754f0_Z { Unk_ov065_022754f0_Z_0 = 0 };

s32 func_ov065_022754f0(u32 a, u32 b, u32 c) {
    s32 flag;
    u8 idx = G->unk_14;
    s32 ret = 0;
    if (a == 0) {
        b = (G->unk_1e8 & 0xffff) | (G->unk_176 << 16);
        if (func_ov065_02289064(c) != 0) {
            s32 t = func_ov065_02289098(c);
            if (t == func_ov065_0228924c(G->unk_e4)) {
                G->unk_1f8[idx] = func_ov065_02289060(c);
                G->unk_278[idx] = func_ov065_02289044(c);
                flag = 0;
            } else {
                flag = 1;
            }
        } else {
            u16 t = func_ov065_02261358();
            u32 lo;
            u32 m;
            if ((t & 0xffff) == 0xa8c0) goto yes;
            lo = t & 0xff;
            if (lo == 0xac) {
                m = t & 0xff00;
                if (m >= 0x1000 && m <= 0x1f00) goto yes;
            }
            if (lo == 0x10) {
            yes:
                flag = 1;
            } else {
                G->unk_1f8[idx] = func_ov065_02289098(c);
                G->unk_278[idx] = func_ov065_0228907c(c);
                flag = 0;
            }
        }
        if (flag != 0) {
            G->unk_176 = func_ov065_022778b0(0x10000);
            G->unk_18c.unk_08 = b;
        } else {
            u32 loc[2];
            s32 x;
            loc[0] = func_ov065_02261358();
            loc[1] = func_ov065_022849d4(G->unk_04->unk_00);
            x = func_ov065_02289098(c);
            b = func_ov065_0228907c(c);
            x = func_ov065_0227532c(6, G->unk_f4[idx], x, b, loc, 2);
            G->unk_3b5 = 0;
            if (x != 0) {
                return 2;
            }
            G->unk_18c.unk_08 = 0;
        }
        G->unk_18c.unk_00 = 0;
        G->unk_18c.unk_01 = 0;
        G->unk_18c.unk_02 = func_ov065_0228907c(c);
        G->unk_18c.unk_04 = func_ov065_02289098(c);
    } else {
        flag = 1;
        G->unk_18c.unk_00 = 1;
        G->unk_18c.unk_01 = ret;
        G->unk_18c.unk_02 = ret;
        G->unk_18c.unk_04 = ret;
        G->unk_18c.unk_08 = b;
    }
    if (flag != 0) {
        ret = func_ov065_02275474(&G->unk_18c);
    } else {
        Unk_ov065_02290814 *g = G;
        func_ov065_02272428(0, func_ov065_022849c8(g->unk_04->unk_00), 0, &g->unk_18c);
        Unk_ov065_022754f0_Z z = Unk_ov065_022754f0_Z_0;
        g = G;
        g->unk_184 = z;
        g->unk_188 = z;
    }
    return ret;
}

void func_ov065_0227571c(char *buf, u32 x, u32 y, u32 z) {
    func_02113088(buf, 0x100, data_ov065_0228c8e0, data_ov065_0228c8ac, 3, data_ov065_0228c868, x, y, y, data_ov065_0228c894, z, data_ov065_0228c8a0, data_ov065_0228c868);
}

void func_ov065_02275764(u32 a) {
    char buf[0x100];
    u8 list[0xa8];
    s32 n = 7;
    s32 i;
    Unk_ov065_02290840_Ent *e;
    u8 *q;
    s32 k;
    list[0] = 8;
    list[1] = 10;
    list[2] = 0x32;
    list[3] = 0x33;
    list[4] = 0x34;
    list[5] = 0x35;
    list[6] = 0x36;
    if (G->unk_15 == 0 || G->unk_15 == 1) {
        i = 0;
        e = data_ov065_02290840;
        q = &list[7];
        for (; i < 0x9a; e++, i++) {
            if (e->unk_00 != 0) {
                *q = e->unk_00;
                q++;
                n++;
            }
        }
    }
    switch (G->unk_198) {
    case 0:
    case 1:
        break;
    case 3:
        a = G->unk_1f0;
        if (a == 0) {
            func_ov065_0227571c(buf, G->unk_1e8, G->unk_16, G->unk_15);
            if (data_ov065_0229081c != 0) {
                func_02113088(buf, 0x100, data_ov065_0228c938, buf, data_ov065_0229081c);
            }
            break;
        }
        // fallthrough
    case 2:
    case 4:
    case 5:
        func_02113088(buf, 0x100, data_ov065_0228c944, data_ov065_0228c868, a);
        G->unk_1ec = a;
        break;
    }
    func_ov065_02289280(G->unk_e4);
    for (k = 0; k < 5; k++) {
        s32 r = func_ov065_02289364(G->unk_e4, 1, 0, list, n, buf, 0x10);
        if (r == 0) break;
        if (r != 2) break;
    }
}

void func_ov065_02275890(void) {
    if (G != NULL) {
        if (G->unk_e4 != 0) {
            func_ov065_02289444(G->unk_e4);
            G->unk_e4 = 0;
        }
        func_ov065_02287260();
        G->unk_198 = 0;
        if (data_ov065_0229081c != 0) {
            func_ov065_02277b64(4, data_ov065_0229081c);
            data_ov065_0229081c = 0;
        }
        func_ov065_02273400();
        G->unk_18 = 1;
    }
}

void func_ov065_022758f4(u32 a, u32 b, u32 c, u32 d) {
    func_ov065_02275984(0);
    G->unk_15 = a;
    G->unk_16 = b;
    G->unk_44c = c;
    G->unk_450 = d;
    G->unk_175 = 0;
    G->unk_2b8[0] = 0;
    func_ov065_022884fc(0x32, data_ov065_0228c868);
    func_ov065_022884fc(0x33, data_ov065_0228c894);
    func_ov065_022884fc(0x34, data_ov065_0228c8a0);
    func_ov065_022884fc(0x35, data_ov065_0228c8ac);
    func_ov065_022884fc(0x36, data_ov065_0228c870);
}

void func_ov065_02275984(u32 a) {
    G->unk_0c = 0;
    G->unk_174 = 0;
    G->unk_176 = func_ov065_022778b0(0x10000);
    G->unk_178 = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_17c = 0;
        g->unk_180 = 0;
        g->unk_184 = 0;
        g->unk_188 = 0;
        g->unk_19c = 0;
    }
    G->unk_1a1 = 0;
    G->unk_1a2 = 0;
    G->unk_1a3 = 0;
    G->unk_1a4 = 0;
    G->unk_19f = 0;
    G->unk_1a0 = 0;
    G->unk_1a8 = 0;
    G->unk_1aa = 0;
    G->unk_1ac = 0;
    {
        Unk_ov065_02290814 *g = G;
        g->unk_1d0 = 0;
        g->unk_1d4 = 0;
        g->unk_1e0 = 0;
        g->unk_1e4 = 0;
        Unk_ov065_02275984_Clear32(&g->unk_3b4, 0x98);
    }
    if (a == 2) {
        G->unk_14 = G->unk_0d;
        if (G->unk_15 == 3) {
            G->unk_198 = 1;
        } else if (G->unk_15 == 2) {
            G->unk_198 = 10;
        }
    } else {
        G->unk_0d = 0;
        G->unk_0e = 0;
        G->unk_14 = 0;
        G->unk_17 = 0;
        G->unk_20 = 0;
        G->unk_e8 = 0;
        G->unk_19d = 0;
        G->unk_1a6 = 0;
        G->unk_1b0 = 0;
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1b4 = 0;
            g->unk_1b8 = 0;
            g->unk_1bc = 0;
        }
        {
            Unk_ov065_02290814 *g = G;
            g->unk_1c0 = 0;
            g->unk_1c4 = 0;
            g->unk_1c8 = 0;
        }
        G->unk_1ec = 0;
        G->unk_1f0 = 0;
        G->unk_2d8 = 0;
        Unk_ov065_02275984_Clear32(G->unk_24, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_a4, 0x40);
        Unk_ov065_02275984_Clear32(G->unk_f4, 0x80);
        Unk_ov065_02275984_Clear32(&G->unk_18c, 0xc);
        Unk_ov065_02275984_Clear32(G->unk_1f8, 0x80);
        Unk_ov065_02275984_Clear16(G->unk_278, 0x40);
        func_02115fb4(G->unk_2b8, 0, 0x20);
        Unk_ov065_02275984_Clear32(G->unk_330, 0x84);
        if (a == 1) {
            if (G->unk_15 == 0) {
                G->unk_198 = 3;
            } else if (G->unk_15 == 1) {
                G->unk_198 = 4;
            }
        } else {
            G->unk_15 = 0;
            G->unk_16 = 0;
            G->unk_18 = 0;
            G->unk_1f4 = 0;
            G->unk_19e = 0;
            G->unk_454 = 0;
            G->unk_458 = 0;
        }
    }
}

}
