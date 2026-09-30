// mwcc-flags: -O4,p
#include "types.h"

// ov065_031: DWC-like connection/http glue (0x02271da0..0x022726a0)

struct Unk_ov065_0229080c_Big {
    u8 unk_00[0x214];
    s32 unk_214;
    u8 unk_218[0x100];
    u8 unk_318[0x100];
};

struct Unk_ov065_0229080c_Sub {
    Unk_ov065_0229080c_Big *unk_00;
};

struct Unk_ov065_0229080c_Ent {
    u8 unk_00[0xc];
};

struct Unk_ov065_0229080c {
    s32 unk_00;
    Unk_ov065_0229080c_Sub *unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    s32 unk_14;
    Unk_ov065_0229080c_Ent *unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    void (*unk_2c)(s32, u32, s32);
    s32 unk_30;
    void (*unk_34)(s32, s32, char *, s32);
    s32 unk_38;
    void (*unk_3c)(void);
    void (*unk_40)(void);
    void (*unk_44)(s32, s32);
    s32 unk_48;
    u32 unk_4c;
    u32 unk_50;
};

struct Unk_ov065_0227194c_Out {
    u32 unk_00;
    u32 unk_04;
    char unk_08[0x100];
    char unk_108[0x108];
};

struct Unk_ov065_02272428_Sub {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u32 unk_04;
    s32 unk_08;
};

struct Unk_ov065_02272428_Rec {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov065_02290814_Sub {
    u32 unk_00;
};

struct Unk_ov065_02290814 {
    u8 unk_00[4];
    Unk_ov065_02290814_Sub *unk_04;
    s32 unk_08;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e[6];
    u8 unk_14;
    volatile u8 unk_15;
    u8 unk_16[0xde];
    u32 unk_f4[32];
    u8 unk_174;
    u8 unk_175;
    u8 unk_176[2];
    u32 unk_178;
    u32 unk_17c;
    u32 unk_180;
    u32 unk_184;
    u32 unk_188;
    u8 unk_18c[0xc];
    s32 unk_198;
    u8 unk_19c[0x4c];
    u32 unk_1e8;
    u8 unk_1ec[0xc];
    u32 unk_1f8[32];
    u16 unk_278[32];
};

struct Unk_ov065_022726a0_Hdr {
    u8 unk_00[4];
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
};

extern "C" {

extern Unk_ov065_0229080c *data_ov065_0229080c;
extern Unk_ov065_02290814 *data_ov065_02290814;
extern char data_ov065_0228c81c[];
extern char data_ov065_0228c854[];
extern char data_ov065_0228c858[];
extern char data_ov065_0228c85c[];
extern char data_ov065_0228c860[];

u64 func_01ffa6b4();
s32 func_020ffc60(s32, void *);
s32 func_020ffdd8(void *);
s32 func_0212a190(const char *, const char *);
s32 func_021277d4(const char *);
void func_02127838(char *, const char *);
s32 func_0212b854(const char *, char **, s32);
void func_02115fb4(void *, s32, u32);
void func_02116048(const void *, void *, u32);
s32 func_0212a15c(const void *, const void *, u32);
void func_02113088(char *, s32, const char *, u32);

s32 func_ov065_02270e34(s32, s32);
s32 func_ov065_02270e4c();
s32 func_ov065_02270e94();
s32 func_ov065_02270508();
s32 func_ov065_02271474();
void func_ov065_02271b7c();
void func_ov065_02271ba0(void *, s32);
s32 func_ov065_022715a4();
void func_ov065_022715b0();
void func_ov065_02271698();
void func_ov065_02271d20();
void func_ov065_02271d44();
s32 func_ov065_022718ec();
s32 func_ov065_0227194c(void *, Unk_ov065_0227194c_Out *);
s32 func_ov065_0226f9e0(const char *, s32, char *, u32);
s32 func_ov065_0226fb08(void *, s32, void *, u32);
s32 func_ov065_02272d5c();
s32 func_ov065_02272dd4(s32, s32);
s32 func_ov065_02272e18();
s32 func_ov065_02275474(void *);
s32 func_ov065_0227627c(s32, s32);
u64 func_ov065_02277974();
s32 func_ov065_02277998(const char *, char *, char *, s32);
s32 func_ov065_02283d14();
s32 func_ov065_02284a80(u32, s32, s32, char *, s32, s32, s32, s32);
s32 func_ov065_022868b0(u32, u32, s32);
s32 func_ov065_022741b0(u32);
s32 func_ov065_0227412c(u32);
s32 func_ov065_022749f8(u32, u32, u32, u32, void *, s32);
s32 func_ov065_0227bd8c(Unk_ov065_0229080c_Sub *, s32, char *, char *);
s32 func_ov065_0227bf5c(void *, s32);
s32 func_ov065_0227bfb4(void *, s32);
s32 func_ov065_0227c05c(void *, s32, Unk_ov065_0227194c_Out *);
s32 func_ov065_0227c400(void *, s32, s32, s32, void (*)(), s32);
s32 func_ov065_022722fc(void *, u8 *, u8 *, char *);
s32 func_ov065_022723b8(void *, char *);
s32 func_ov065_02271ed8(s32);
s32 func_ov065_02271e8c(s32);
s32 func_ov065_02271e00(s32, char *, char *);
void func_ov065_02271fc8(s32, s32);
s32 func_ov065_022723cc(s32);

void func_ov065_02271da0() {
    data_ov065_0229080c = NULL;
}

void func_ov065_02271dac(s32 idx) {
    Unk_ov065_0227194c_Out o;
    if (data_ov065_0229080c->unk_44 != NULL && data_ov065_0229080c->unk_00 != 1) {
        data_ov065_0229080c->unk_44(idx, data_ov065_0229080c->unk_48);
    }
    if (data_ov065_0229080c->unk_34 != NULL) {
        s32 r = func_ov065_022723b8(&data_ov065_0229080c->unk_18[idx], o.unk_108);
        data_ov065_0229080c->unk_34(idx, r, o.unk_108, data_ov065_0229080c->unk_38);
    }
}

s32 func_ov065_02271e00(s32 a, char *b, char *c) {
    Unk_ov065_0229080c_Sub *s;
    if (data_ov065_0229080c == NULL || data_ov065_0229080c->unk_04 == NULL) {
        return 0;
    }
    s = data_ov065_0229080c->unk_04;
    if (a == -1) {
        a = s->unk_00->unk_214;
    }
    if (b == NULL) {
        b = (char *)s->unk_00->unk_218;
    }
    if (c == NULL) {
        c = (char *)s->unk_00->unk_318;
    }
    return func_ov065_0227bd8c(s, a, b, c);
}

void func_ov065_02271e64() {
    if (data_ov065_0229080c != NULL) {
        data_ov065_0229080c->unk_08 = 0;
        u64 t = func_01ffa6b4();
        Unk_ov065_0229080c *g = data_ov065_0229080c;
        g->unk_0c = (u32)t;
        g->unk_10 = (u32)(t >> 32);
    }
}

s32 func_ov065_02271e8c(s32 v) {
    s32 i;
    if (data_ov065_0229080c == NULL || v == 0) {
        return -1;
    }
    for (i = 0; i < data_ov065_0229080c->unk_14; i++) {
        if (v == func_ov065_02271ed8(i)) {
            return i;
        }
    }
    return -1;
}

s32 func_ov065_02271ed8(s32 i) {
    s32 r = func_020ffc60(func_ov065_02271474(), &data_ov065_0229080c->unk_18[i]);
    s32 m = -1;
    if (r == 0 || r == m) {
        r = 0;
    }
    return r;
}

void func_ov065_02271f08(void *a, u32 *b) {
    Unk_ov065_0227194c_Out o;
    if (data_ov065_0229080c->unk_34 != NULL) {
        s32 i = func_ov065_02271e8c(b[0]);
        if (i != -1) {
            func_ov065_0227c05c(a, b[2], &o);
            data_ov065_0229080c->unk_34(i, (u8)o.unk_04, o.unk_108, data_ov065_0229080c->unk_38);
        }
    }
}

s32 func_ov065_02271f58(void *a, u32 *b) {
    if (func_0212a190((const char *)b[2], data_ov065_0228c81c) == 0) {
        func_ov065_0227c400(a, b[0], 0, 0, func_ov065_022715b0, 0);
        return 1;
    }
    return 0;
}

void func_ov065_02271f9c(void *a, u32 *b) {
    if (data_ov065_0229080c->unk_18 != NULL) {
        func_ov065_0227c400(a, b[0], 0, 0, func_ov065_02271698, 0);
    }
}

void func_ov065_02271fc8(s32 a, s32 b) {
    if (data_ov065_0229080c != NULL && a != 0) {
        func_ov065_02270e34(a, b);
        if (data_ov065_0229080c->unk_00 != 0 && data_ov065_0229080c->unk_00 != 2) {
            data_ov065_0229080c->unk_2c(a, data_ov065_0229080c->unk_1d, data_ov065_0229080c->unk_30);
        }
        func_ov065_02271d20();
    }
}

void func_ov065_02272004(s32 a, s32 b, void (*c)(s32, u32, s32), s32 d, void (*e)(s32, s32, char *, s32), s32 f,
                         void (*g)(void), void (*h)(void)) {
    data_ov065_0229080c->unk_2c = c;
    data_ov065_0229080c->unk_30 = d;
    data_ov065_0229080c->unk_34 = e;
    data_ov065_0229080c->unk_38 = f;
    data_ov065_0229080c->unk_3c = g;
    data_ov065_0229080c->unk_40 = h;
    data_ov065_0229080c->unk_1d = 0;
    data_ov065_0229080c->unk_1e = 0;
    data_ov065_0229080c->unk_1f = 0;
    data_ov065_0229080c->unk_1c = 0;
    data_ov065_0229080c->unk_00 = 1;
    data_ov065_0229080c->unk_1f++;
}

void func_ov065_0227204c() {
    if (data_ov065_0229080c == NULL) {
        return;
    }
    if (data_ov065_0229080c->unk_18 == NULL) {
        return;
    }
    if (func_ov065_02270e4c() != 0) {
        return;
    }
    if (func_ov065_022715a4() != 0 && func_ov065_02283d14() == 0) {
        func_ov065_02271fc8(6, -0x1194a);
        return;
    }
    if (data_ov065_0229080c->unk_04 != NULL && data_ov065_0229080c->unk_04->unk_00 != NULL) {
        func_ov065_02271d44();
        if (func_ov065_022718ec() != 0) {
            return;
        }
        if (data_ov065_0229080c->unk_18 != NULL && data_ov065_0229080c->unk_1e != 3 && data_ov065_0229080c->unk_08 > 7) {
            if (data_ov065_0229080c->unk_1e <= 1) {
                func_ov065_02271ba0(data_ov065_0229080c->unk_18, data_ov065_0229080c->unk_14);
            }
            if (data_ov065_0229080c->unk_1c >= data_ov065_0229080c->unk_14) {
                data_ov065_0229080c->unk_1e = 3;
                data_ov065_0229080c->unk_1f++;
            }
        }
    }
    if (data_ov065_0229080c->unk_1f >= 2) {
        data_ov065_0229080c->unk_1f = 0;
        func_ov065_02271b7c();
    }
}

void func_ov065_022720f8(Unk_ov065_0229080c *a, Unk_ov065_0229080c_Sub *b, s32 c, Unk_ov065_0229080c_Ent *d, s32 e) {
    data_ov065_0229080c = a;
    a->unk_00 = 0;
    data_ov065_0229080c->unk_04 = b;
    data_ov065_0229080c->unk_08 = 0;
    {
        Unk_ov065_0229080c *g = data_ov065_0229080c;
        g->unk_0c = 0;
        g->unk_10 = 0;
        g->unk_14 = e;
    }
    data_ov065_0229080c->unk_18 = d;
    data_ov065_0229080c->unk_1c = 0;
    data_ov065_0229080c->unk_1d = 0;
    data_ov065_0229080c->unk_1e = 0;
    data_ov065_0229080c->unk_1f = 0;
    data_ov065_0229080c->unk_20 = 0;
    data_ov065_0229080c->unk_24 = 0;
    data_ov065_0229080c->unk_28 = c;
    data_ov065_0229080c->unk_2c = NULL;
    data_ov065_0229080c->unk_30 = 0;
    data_ov065_0229080c->unk_34 = NULL;
    data_ov065_0229080c->unk_38 = 0;
    data_ov065_0229080c->unk_3c = NULL;
    data_ov065_0229080c->unk_40 = NULL;
    data_ov065_0229080c->unk_44 = NULL;
    data_ov065_0229080c->unk_48 = 0;
    data_ov065_0229080c->unk_4c = 0;
    data_ov065_0229080c->unk_50 = 0;
}

void func_ov065_02272164(void *p) {
    if (data_ov065_0229080c != NULL && func_ov065_02270e94() != 0 && func_ov065_02271474() != 0) {
        s32 t = func_020ffc60(func_ov065_02271474(), p);
        if (t != 0 && t != -1 && func_ov065_0227bfb4(data_ov065_0229080c->unk_04, t) != 0) {
            func_ov065_0227bf5c(data_ov065_0229080c->unk_04, t);
        }
    }
    func_02115fb4(p, 0, 12);
}

BOOL func_ov065_022721cc() {
    if (data_ov065_0229080c != NULL) {
        if ((u8)(data_ov065_0229080c->unk_1e + 0xff) <= 1) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov065_022721ec(void *a, s32 b) {
    char buf[0x100];
    s32 n;
    if (data_ov065_0229080c == NULL || func_ov065_02270e94() == 0) {
        return FALSE;
    }
    n = func_ov065_0226fb08(a, b, buf, 0xff);
    if (n == -1) {
        return FALSE;
    }
    buf[n] = 0;
    if (func_ov065_02271e00(-1, NULL, buf) == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov065_02272254(u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i;
    if (p == NULL) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (func_020ffdd8(p) != 0) {
            cnt++;
        }
        p += 12;
    }
    return cnt;
}

s32 func_ov065_02272290(void *a, u8 *b, u8 *c, char *d, s32 *out) {
    char buf[0x100];
    s32 r = func_ov065_022722fc(a, b, c, buf);
    s32 t;
    if (r == 0) {
        *out = -1;
        return r;
    }
    *out = func_ov065_0226f9e0(buf, func_021277d4(buf), NULL, 0);
    if (d == NULL || (t = *out) == -1) {
        return r;
    }
    func_ov065_0226f9e0(buf, func_021277d4(buf), d, t);
    return r;
}

s32 func_ov065_022722fc(void *a, u8 *p1, u8 *p2, char *dst) {
    char tmp[4];
    Unk_ov065_0227194c_Out o;
    if (func_ov065_0227194c(a, &o) != 0) {
        if (o.unk_04 == 6) {
            if (p1 != NULL) {
                if (func_ov065_02277998(data_ov065_0228c854, tmp, o.unk_08, 0x2f) > 0) {
                    *p1 = func_0212b854(tmp, NULL, 10);
                } else {
                    *p1 = 0;
                }
            }
            if (p2 != NULL) {
                if (func_ov065_02277998(data_ov065_0228c858, tmp, o.unk_08, 0x2f) > 0) {
                    *p2 = func_0212b854(tmp, NULL, 10);
                } else {
                    *p2 = 0;
                }
            }
        } else {
            if (p1 != NULL) {
                *p1 = 0;
            }
            if (p2 != NULL) {
                *p2 = 0;
            }
        }
        if (dst != NULL) {
            func_02127838(dst, o.unk_108);
        }
        return (u8)o.unk_04;
    }
    if (p1 != NULL) {
        *p1 = 0;
    }
    if (p2 != NULL) {
        *p2 = 0;
    }
    return 0;
}

s32 func_ov065_022723b8(void *a, char *b) {
    return func_ov065_022722fc(a, NULL, NULL, b);
}

s32 func_ov065_022723cc(s32 a) {
    if (a != 0) {
        return 1;
    }
    if (data_ov065_02290814->unk_15 != 3) {
        data_ov065_02290814->unk_175++;
    }
    if (data_ov065_02290814->unk_15 == 3 || data_ov065_02290814->unk_175 >= 5) {
        func_ov065_0227627c(6, -0x15194);
        return 0;
    }
    return 1;
}

void func_ov065_02272428(s32 a, s32 b, Unk_ov065_02272428_Sub *c, Unk_ov065_02272428_Sub *d) {
    Unk_ov065_02290814 *g;
    if (data_ov065_02290814->unk_198 != 6 && data_ov065_02290814->unk_198 != 0xb) {
        return;
    }
    if (d == NULL) {
        return;
    }
    if (a == 0) {
        s32 idx;
        char buf[12];
        d->unk_08 = 0;
        data_ov065_02290814->unk_14++;
        idx = data_ov065_02290814->unk_14;
        if (d->unk_00 != 0) {
            data_ov065_02290814->unk_1f8[idx] = c->unk_04;
            data_ov065_02290814->unk_278[idx] = ((c->unk_02 >> 8) & 0xff) | ((c->unk_02 << 8) & 0xff00);
            data_ov065_02290814->unk_174 = 0;
            data_ov065_02290814->unk_178 = 0;
            *(u64 *)&data_ov065_02290814->unk_17c = 0;
            if (data_ov065_02290814->unk_198 == 0xb) {
                data_ov065_02290814->unk_198 = 0xc;
            } else {
                data_ov065_02290814->unk_198 = 7;
            }
            data_ov065_02290814->unk_0c = 0;
            func_02113088(buf, 12, data_ov065_0228c85c, data_ov065_02290814->unk_1e8);
            s32 r = func_ov065_02284a80(data_ov065_02290814->unk_04->unk_00, 0,
                                        func_ov065_022868b0(data_ov065_02290814->unk_1f8[idx], data_ov065_02290814->unk_278[idx], 0),
                                        buf, -1, 0x1388, data_ov065_02290814->unk_08, 0);
            if (r == 1) {
                func_ov065_02272d5c();
                return;
            }
            if (r == 0) {
                return;
            }
            if (func_ov065_022741b0(data_ov065_02290814->unk_f4[idx]) != 0) {
                return;
            }
            return;
        }
        if (c != NULL) {
            s32 i = idx - 1;
            data_ov065_02290814->unk_1f8[i] = c->unk_04;
            data_ov065_02290814->unk_278[i] = ((c->unk_02 >> 8) & 0xff) | ((c->unk_02 << 8) & 0xff00);
        }
        g = data_ov065_02290814;
        {
            u64 t = func_ov065_02277974();
            *(u64 *)&g->unk_184 = t;
        }
        g->unk_198 = 7;
        return;
    }
    if (d->unk_08 == 0) {
        return;
    }
    {
        s32 r4 = func_ov065_02272dd4(a, d->unk_08);
        if (r4 != 2 && r4 != 1) {
            return;
        }
        if (d->unk_00 == 0) {
            if (r4 == 1 || (r4 == 2 && d->unk_01 >= 1)) {
                d->unk_08 = 0;
                if (func_ov065_022723cc(0) == 0) {
                    return;
                }
                if (func_ov065_0227412c(data_ov065_02290814->unk_f4[data_ov065_02290814->unk_0d]) != 0) {
                    return;
                }
                return;
            }
            d->unk_01++;
            func_ov065_02275474(d);
            if (func_ov065_02272e18() != 0) {
                return;
            }
            return;
        }
        g = data_ov065_02290814;
        {
            u64 t = func_ov065_02277974();
            *(u64 *)&g->unk_17c = t;
        }
        if (r4 == 1 || (r4 == 2 && g->unk_174 >= 1)) {
            d->unk_08 = 0;
            if (data_ov065_02290814->unk_15 == 3 || data_ov065_02290814->unk_15 == 2) {
                if (func_ov065_022723cc(1) == 0) {
                    return;
                }
            } else {
                if (func_ov065_022723cc(0) == 0) {
                    return;
                }
            }
            data_ov065_02290814->unk_174 = 0;
            data_ov065_02290814->unk_178 = 0;
            *(u64 *)&data_ov065_02290814->unk_17c = 0;
            if (func_ov065_022741b0(data_ov065_02290814->unk_f4[data_ov065_02290814->unk_0d + 1]) != 0) {
                return;
            }
        }
    }
}

void func_ov065_0227269c() {
}

void func_ov065_022726a0(u8 *buf, u32 n) {
    u32 off = 0;
    Unk_ov065_022726a0_Hdr hdr;
    u8 body[0x80];
    if (func_ov065_02270508() == 5 ||
        (func_ov065_02270508() == 6 &&
         (data_ov065_02290814->unk_15 == 2 || data_ov065_02290814->unk_15 == 3))) {
        while (off + 0x14 <= n) {
            func_02116048(buf, &hdr, 0x14);
            if (func_0212a15c(&hdr, data_ov065_0228c860, 4) != 0) {
                break;
            }
            if (hdr.unk_04 != 3) {
                break;
            }
            func_02116048(buf + 0x14, body, hdr.unk_09);
            if (func_ov065_022749f8(hdr.unk_08, hdr.unk_10, hdr.unk_0c, hdr.unk_0a, body, hdr.unk_09 >> 2) == 0) {
                break;
            }
            off += hdr.unk_09 + 0x14;
        }
    }
}

}
