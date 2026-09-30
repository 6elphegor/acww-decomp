// mwcc-flags: -O4,p
#include "types.h"

// ov065_027: network library glue: init/teardown, base64, connection event handlers (0x0226f7c8..0x0226ffe4)

struct Unk_ov065_0226f924_Blob {
    s32 v[3];
};

struct Unk_ov065_0226f924_Cfg {
    void *(*unk_00)(void *, u32);
    void (*unk_04)(void *, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226f7c8_Ctx {
    u8 unk_00[4];
    s32 unk_04;
    u8 unk_08[0x100];
    Unk_ov065_0226f924_Cfg unk_108;
    u32 unk_114;
    u32 unk_118;
    u8 unk_11c[0x6c];
    u32 unk_188;
    u8 unk_18c[0x50];
    u8 unk_1dc[0x1024];
};

struct Unk_ov065_0226fc54_Ctx {
    u8 unk_00[0x24];
    s32 unk_24;
    u8 unk_28[4];
    u8 unk_2c;
    u8 unk_2d;
    u8 unk_2e[2];
    u32 unk_30;
    u8 unk_34[0x38];
    u32 (*unk_6c)(s32, s32, s32);
    s32 unk_70;
    u32 (*unk_74)(s32, s32, s32, s32, s32, s32);
    s32 unk_78;
    u32 (*unk_7c)(s32, s32, s32, s32, s32, s32);
    s32 unk_80;
    u8 unk_84[0x2c5];
    u8 unk_349;
    u8 unk_34a[2];
    u32 unk_34c;
    u8 unk_350;
    u8 unk_351;
    u8 unk_352;
    u8 unk_353[0xdd];
    u32 unk_430[0x29];
    u32 unk_4d4;
    u8 unk_4d8[0x11c];
    u8 unk_5f4[0x20];
    u32 unk_614;
};

struct Unk_ov065_0226fc54_Ent {
    u8 unk_00;
    u8 unk_01;
};

extern "C" {
extern Unk_ov065_0226f7c8_Ctx *data_ov065_02290620;
extern void *data_ov065_0229061c;
extern u8 data_ov065_0228bbac[];
extern u8 data_ov065_0228bbb4[];
extern u8 data_ov065_0228bae4[];
extern u8 data_ov065_0228bb10[];
extern s8 *data_ov065_0228bbc0;
extern u32 data_ov065_02290674;
extern Unk_ov065_0226fc54_Ctx *data_ov065_02290670;
extern u32 data_ov065_02290678[];
extern u8 data_ov065_0228c808[];
extern u8 data_ov065_0228c80c[];
extern u8 data_ov065_0228c814[];

void func_ov065_0226f818();
void func_ov065_0226ea84();
void func_ov065_0226dc40();
void func_ov065_0226e4dc();
void func_ov065_0226dbfc();
void func_ov065_0226ecfc();
s32 func_ov065_022849c8();
u32 func_ov065_02278be8();
void func_ov065_02270e34(s32, s32);
void func_ov065_02277588(s32, s32);
void func_ov065_022775b8(s32, s32, s32, s32);
s32 func_ov065_02275c60();
Unk_ov065_0226fc54_Ent *func_ov065_022849bc(s32);
void func_ov065_02277434(u32);
u32 func_ov065_022702bc(u32);
void func_ov065_02275ccc();
void func_ov065_02275df4();
void func_ov065_02275fdc(u32);
s32 func_ov065_02276000(s32, s32, u32);
void func_ov065_02275e64(s32, s32);
void func_ov065_02271e00(s32, void *, s32);
void func_ov065_02288190(u32);
u32 func_ov065_02271e8c(u32);
void func_ov065_02287260();
void func_ov065_02276254();
s32 func_ov065_022702fc(s32);
s32 func_ov065_02271f58();
void func_ov065_02276324(void *, u32, void *);
s32 func_ov065_022701d0(s32);
u32 func_ov065_02270298(u8 *, s32);

void func_02113788(void *);
s32 func_02113774(void *);
void func_02113a70(void *, void (*)(), void *, void *, u32, u32);
void func_0211366c(void *);
void func_0211450c(void *);
void func_02115fb4(void *, u32, u32);
void func_02116048(void *, void *, u32);
s32 func_02133150(s32, s32);
u32 func_0213335c(u32, u32);
u32 func_021277d4(void *);
s32 func_02128930(void *, void *, u32);
char *func_0212a120(void *, s32);
void func_0212a2ec(void *, void *, u32);
s32 func_0212b854(void *, u32, u32);

void func_ov065_0226f7c8() {
    if (data_ov065_02290620 != 0) {
        if (data_ov065_0229061c != 0) {
            func_ov065_0226ea84();
        }
        func_ov065_0226dc40();
        if (data_ov065_02290620->unk_188 != 0) {
            func_02113788(data_ov065_02290620->unk_11c);
        }
        data_ov065_02290620->unk_04 = -7;
    }
}

void func_ov065_0226f878() {
    Unk_ov065_0226f7c8_Ctx *g;
    if (data_ov065_0229061c != 0) {
        func_ov065_0226e4dc();
        data_ov065_02290620->unk_108.unk_04(data_ov065_0228bbac, data_ov065_0229061c, 0);
        data_ov065_0229061c = 0;
    }
    func_ov065_0226dbfc();
    g = data_ov065_02290620;
    if (g != 0) {
        if (g->unk_114 != 0) {
            g->unk_108.unk_04(data_ov065_0228bae4, (void *)g->unk_114, 0);
            data_ov065_02290620->unk_114 = 0;
        }
        g = data_ov065_02290620;
        if (g->unk_118 != 0) {
            g->unk_108.unk_04(data_ov065_0228bb10, (void *)g->unk_118, 0);
            data_ov065_02290620->unk_118 = 0;
        }
        data_ov065_02290620->unk_108.unk_04(data_ov065_0228bbb4, data_ov065_02290620, 0);
        data_ov065_02290620 = 0;
    }
}

s32 func_ov065_0226f924(Unk_ov065_0226f924_Cfg *cfg) {
    if (data_ov065_02290620 != 0) {
        return 4;
    }
    data_ov065_02290620 = (Unk_ov065_0226f7c8_Ctx *)cfg->unk_00(data_ov065_0228bbb4, 0x1200);
    if (data_ov065_02290620 == 0) {
        return 4;
    }
    func_02115fb4(data_ov065_02290620, 0, 0x1200);
    data_ov065_02290620->unk_04 = -0x1869f;
    *(Unk_ov065_0226f924_Blob *)&data_ov065_02290620->unk_108 = *(Unk_ov065_0226f924_Blob *)cfg;
    if (data_ov065_0229061c != 0) {
        return 4;
    }
    data_ov065_0229061c = data_ov065_02290620->unk_108.unk_00(data_ov065_0228bbac, 0x1a60);
    if (data_ov065_0229061c == 0) {
        return 4;
    }
    func_0211450c(data_ov065_02290620->unk_1dc);
    func_ov065_0226f818();
    return 0;
}

void func_ov065_0226f818() {
    Unk_ov065_0226f7c8_Ctx *g = data_ov065_02290620;
    if (g->unk_188 == 0 || func_02113774(g->unk_11c) != 0) {
        g = data_ov065_02290620;
        func_02113a70(g->unk_11c, func_ov065_0226ecfc, g, (u8 *)g + 0x1200, 0x1000, 0x10);
        g = data_ov065_02290620;
        func_0211366c(g->unk_11c);
    }
}

s32 func_ov065_0226f9e0(s8 *in, u32 len, u8 *out, u32 cap) {
    s32 bits;
    u32 i;
    volatile s32 max;
    u32 mt;
    u8 *p;
    s8 tmp[4];
    s32 j;
    s8 *q;
    s8 c;

    if ((len & 3) != 0) {
        return -1;
    }
    bits = 0;
    for (i = 0; i < len; i++) {
        if (in[i] != 0x2a) {
            bits += 6;
        }
    }
    if (out == 0) {
        return bits / 8;
    }
    mt = bits / 8;
    max = mt;
    if (cap < mt) {
        return -1;
    }
    if (len == 0) {
        *out = 0;
        return 0;
    }
    p = out;
    do {
        q = tmp;
        for (j = 0; j < 4; j++) {
            c = in[j];
            if (c >= 0x41 && c <= 0x5a) {
                *q = c - 0x41;
            } else if (c >= 0x61 && c <= 0x7a) {
                *q = c - 0x47;
            } else if (c >= 0x30 && c <= 0x39) {
                *q = c + 4;
            } else if (c == 0x2e) {
                *q = 0x3e;
            } else if (c == 0x2d) {
                *q = 0x3f;
            } else {
                *q = 0;
            }
            q++;
        }
        in += 4;
        p[0] = (tmp[0] << 2) | (tmp[1] >> 4);
        if (p + 1 - out >= max) {
            break;
        }
        p[1] = (tmp[1] << 4) | (tmp[2] >> 2);
        if (p + 2 - out >= max) {
            break;
        }
        p[2] = (tmp[2] << 6) | tmp[3];
        p += 3;
    } while (p - out < max);
}

s32 func_ov065_0226fb08(u8 *in, u32 len, u8 *out, u32 cap) {
    u32 pad;
    u32 need;
    u8 *end;
    s32 n;
    u8 *o;
    s32 bits;
    s32 rem;
    s32 cnt;
    u8 t[3];

    if (len % 3 != 0) {
        pad = 4;
    } else {
        pad = 0;
    }
    need = len / 3 * 4;
    need += pad;
    if (out != 0) {
        if (cap < need) {
            return -1;
        }
        end = in + len;
        o = out;
        if (in != end) {
            do {
                n = end - in;
                bits = n * 8;
                if (bits % 6 != 0) {
                    rem = 1;
                } else {
                    rem = 0;
                }
                cnt = bits / 6 + rem;
                if (n >= 3) {
                    n = 3;
                }
                func_02115fb4(t, 0, 3);
                func_02116048(in, t, n);
                o[0] = data_ov065_0228bbc0[t[0] >> 2];
                if (cnt >= 2) {
                    o[1] = data_ov065_0228bbc0[((t[0] << 4) & 0x3f) | (t[1] >> 4)];
                } else {
                    o[1] = 0x2a;
                }
                if (cnt >= 3) {
                    o[2] = data_ov065_0228bbc0[((t[1] << 2) & 0x3f) | (t[2] >> 6)];
                } else {
                    o[2] = 0x2a;
                }
                if (cnt >= 4) {
                    o[3] = data_ov065_0228bbc0[t[2] & 0x3f];
                } else {
                    o[3] = 0x2a;
                }
                o += 4;
                in += n;
            } while (in != end);
        }
        need = o - out;
    }
    return need;
}

void func_ov065_0226fc18() {
    func_ov065_022849c8();
    data_ov065_02290674 = func_ov065_02278be8();
    func_ov065_02270e34(8, -0x17aeb);
    *(u32 *)data_ov065_02290670 = 0;
}

void func_ov065_0226fc4c(s32 a, s32 b) {
    func_ov065_02277588(a, b);
}

void func_ov065_0226fc54(s32 a0, s32 a1) {
    u32 r5;
    s32 r4;
    s32 r7;
    Unk_ov065_0226fc54_Ctx *g;
    u32 v0c = 0;
    u32 v10 = 0;
    volatile BOOL k;
    Unk_ov065_0226fc54_Ent *volatile ent;
    Unk_ov065_0226fc54_Ent *et;

    if (func_ov065_02275c60() != 0) {
        return;
    }
    switch (a1) {
    case 0:
    case 1:
        r4 = 0;
        break;
    case 2:
    case 3:
        r4 = 6;
        r7 = -0x1db0;
        break;
    case 4:
        r4 = 8;
        r7 = -0x1db1;
        break;
    }
    if (r4 == 0) {
        et = func_ov065_022849bc(a0);
        ent = et;
        if (et == 0) {
            return;
        }
        r5 = et->unk_01;
        u32 m = *(volatile u32 *)&data_ov065_02290670->unk_614;
        k = TRUE;
        if ((m & (1 << r5)) == 0) {
            k = FALSE;
        }
        func_ov065_02277434(r5);
        g = data_ov065_02290670;
        if ((g->unk_351 == 2 && a1 == 0) || (g->unk_351 == 3 && r5 == 0)) {
            v10 = 1;
        }
        v0c = func_ov065_022702bc(r5);
        data_ov065_02290678[ent->unk_00] = 0;
        data_ov065_02290670->unk_349--;
        data_ov065_02290670->unk_350--;
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0 && g->unk_24 == 6 && k == 0) {
        if (g->unk_351 == 2 && r4 == 0) {
            func_ov065_02275ccc();
            func_ov065_02275fdc(v0c);
            return;
        }
        return;
    }
    if (func_ov065_02276000(r4, r7, v0c) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov065_02270e34(r4, r7);
        return;
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0) {
        if (*(volatile u8 *)&g->unk_351 != 2 && *(volatile u8 *)&g->unk_351 != 3) {
            goto skip1;
        }
        Unk_ov065_0226fc54_Ctx *h = data_ov065_02290670;
        u32 n = h->unk_349;
        u32 i = n + 2;
        if (h->unk_430[i] != 0) {
            h->unk_5f4[n + 1] = h->unk_5f4[i];
            func_ov065_02275e64(data_ov065_02290670->unk_349 + 1, data_ov065_02290670->unk_349 + 3);
        }
    }
skip1:
    g = data_ov065_02290670;
    if (g->unk_351 == 2) {
        if (g->unk_2d == 0) {
            func_ov065_02275ccc();
        } else if (g->unk_349 == 0) {
            func_ov065_02271e00(1, data_ov065_0228c808, 0);
        }
    } else if (g->unk_349 == 0) {
        func_ov065_02271e00(1, data_ov065_0228c808, 0);
    }
    g = data_ov065_02290670;
    if (*(volatile u8 *)&g->unk_351 != 0 && *(volatile u8 *)&g->unk_351 != 1) {
    } else {
        data_ov065_02290670->unk_352 = data_ov065_02290670->unk_350;
        func_ov065_02288190(data_ov065_02290670->unk_34c);
    }
    g = data_ov065_02290670;
    if (g->unk_7c != 0 && k != 0) {
        if (a1 == 0) {
            a1 = 1;
        } else {
            a1 = 0;
        }
        data_ov065_02290670->unk_7c(r4, a1, v10, r5, func_ov065_02271e8c(v0c), g->unk_80);
    }
    g = data_ov065_02290670;
    if (g->unk_2d == 0 && g->unk_351 == 2) {
        return;
    }
    if (g->unk_349 == 0) {
        func_ov065_02287260();
        func_ov065_02276254();
        func_ov065_022702fc(3);
    }
}

void func_ov065_0226fed4(s32 a, s32 b, s32 c, s32 d) {
    func_ov065_022775b8(a, b, c, d);
}

void func_ov065_0226fee4(void *a, u32 *b) {
    u8 buf[12] = {0};
    char *s;
    char *e;
    u32 n;
    Unk_ov065_0226fc54_Ctx *g;

    s = (char *)b[2];
    if (func_ov065_02271f58() == 0) {
        if (func_02128930(s, data_ov065_0228c80c, func_021277d4(data_ov065_0228c80c)) == 0) {
            s += func_021277d4(data_ov065_0228c80c);
            e = func_0212a120(s, 0x76);
            n = e - s;
            func_0212a2ec(buf, s, n);
            if (n <= 10) {
                if (func_0212b854(buf, 0, 10) == 3) {
                    s += n + 1;
                    if (func_02128930(s, data_ov065_0228c814, func_021277d4(data_ov065_0228c814)) == 0) {
                        g = data_ov065_02290670;
                        if (g->unk_24 != 5) {
                            if (g->unk_24 != 6) {
                                goto fin;
                            }
                            if (*(volatile u8 *)&g->unk_351 != 2 && *(volatile u8 *)&g->unk_351 != 3) {
                                goto fin;
                            }
                        }
                        char *t = s + func_021277d4(data_ov065_0228c814);
                        func_ov065_02276324(a, b[0], t);
                    }
                }
            }
        }
    }
fin:;
}

void func_ov065_0226ffb4(s32 a, u32 *b) {
    u32 t = b[1];
    if (t != 0x603 && t != 0x901 && t != 0xb01) {
        func_ov065_022701d0(3);
    }
}

void func_ov065_0226ffe4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 i;
    Unk_ov065_0226fc54_Ctx *g;
    Unk_ov065_0226fc54_Ctx *h;

    if (a0 == 0 && a1 != 0) {
        if (data_ov065_02290670->unk_4d4 == 0) {
            func_ov065_02276254();
            func_ov065_022702fc(3);
        }
    } else if (a0 == 0) {
        func_ov065_022702fc(6);
        i = 0;
        g = data_ov065_02290670;
        if (i <= *(volatile u8 *)&g->unk_349) {
            h = g;
            do {
                if (h->unk_30 == g->unk_430[0]) {
                data_ov065_02290670->unk_2c = data_ov065_02290670->unk_5f4[i];
                break;
                }
                g = (Unk_ov065_0226fc54_Ctx *)((u8 *)g + 4);
                i++;
            } while (i <= *(volatile u8 *)&h->unk_349);
        }
    }
    data_ov065_02290670->unk_614 = func_ov065_02270298(data_ov065_02290670->unk_5f4, data_ov065_02290670->unk_349 + 1);
    func_ov065_02275df4();
    g = data_ov065_02290670;
    if (*(volatile u8 *)&g->unk_351 == 2 || *(volatile u8 *)&g->unk_351 == 3) {
        data_ov065_02290670->unk_74(a0, a1, a2, a3, a4, data_ov065_02290670->unk_78);
    } else {
        g->unk_6c(a0, a1, g->unk_70);
    }
    if (a0 != 0 && data_ov065_02290670 != 0 && data_ov065_02290670->unk_24 == 5) {
        func_ov065_022702fc(3);
    }
}
}
