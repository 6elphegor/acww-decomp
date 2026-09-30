// mwcc-flags: -O4,p
#include "types.h"

// ov065_054: 0x022804b8..0x02280d70

struct Unk_ov065_022804b8_Src {
    char *unk_00;
    char *unk_04;
    char *unk_08;
    char *unk_0c;
    char *unk_10;
    char *unk_14;
    s32 unk_18;
    char unk_1c[0xb];
    char unk_27[3];
    s32 unk_2c;
    s32 unk_30;
    char unk_34[0x80];
    s32 unk_b4;
    s32 unk_b8;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    char *unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    s32 unk_d4;
    s32 unk_d8;
    s32 unk_dc;
    s32 unk_e0;
    s32 unk_e4;
    s32 unk_e8;
    s32 unk_ec;
};

struct Unk_ov065_022804b8_Dst {
    u8 pad_00[8];
    char unk_08[0x1f];
    char unk_27[0x15];
    char unk_3c[0x33];
    char unk_6f[0x1f];
    char unk_8e[0x1f];
    char unk_ad[0x4c];
    s32 unk_fc;
    char unk_100[0xb];
    char unk_10b[3];
    s32 unk_110;
    s32 unk_114;
    char unk_118[0x80];
    s32 unk_198;
    s32 unk_19c;
    s32 unk_1a0;
    s32 unk_1a4;
    s32 unk_1a8;
    char unk_1ac[0x33];
    u8 pad_1df[1];
    s32 unk_1e0;
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    s32 unk_1f4;
    s32 unk_1f8;
    s32 unk_1fc;
    s32 unk_200;
};

struct Unk_ov065_02280854_Node {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    Unk_ov065_02280854_Node *unk_20;
};

struct Unk_ov065_02280854_Ctx {
    u8 pad_000[0x20c];
    s32 unk_20c;
    s32 unk_210;
    u8 pad_214[0x418 - 0x214];
    s32 unk_418;
    u8 pad_41c[8];
    Unk_ov065_02280854_Node *unk_424;
};

struct Unk_ov065_02280854_H {
    Unk_ov065_02280854_Ctx *unk_00;
};

struct Unk_ov065_0228094c_Sub {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    u8 pad_0c[0xc];
    char *unk_18;
};

struct Unk_ov065_02280a2c_Ctx {
    u8 pad_000[0x1a0];
    s32 unk_1a0;
    u8 pad_1a4[0x418 - 0x1a4];
    s32 unk_418;
};

struct Unk_ov065_02280a2c_M0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
};

struct Unk_ov065_02280c08_Node {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x38 - 0x14];
    s32 unk_38;
};

struct Unk_ov065_02280a2c_Pair {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_ov065_02280a2c_Wrap {
    Unk_ov065_02280a2c_Pair p;
};

extern "C" {
void func_ov065_02283728(void *, const void *, s32);
void func_ov065_02283460(void *, const char *);
void func_ov065_02283470(void *, s32, const char *);
void func_ov065_02283720(void *, const char *, ...);
s32 func_ov065_0227e438(void *, void *, char *);
s32 func_ov065_02281974(void *, void *, char *);
s32 func_ov065_0227ff90(void *, void *, char *);
s32 func_ov065_022833b4(void *, void *, char *);
s32 func_ov065_02278da4(s32, s32);
s32 func_ov065_02278dbc(s32);
void func_ov065_02277ac8(void *);
void *func_ov065_02277af0(u32);
s32 func_ov065_0227e0e8(void *, Unk_ov065_02280a2c_Pair, void *, void *, s32);
s32 func_0212899c(void *, s32, u32);
s32 func_021277d4(const char *);
s32 func_021130d0(char *, const char *, ...);
s32 func_ov065_0227dc28(void *, void *, const char *);
s32 func_ov065_0227dc48(void *, void *, const char *, s32);
s32 func_ov065_0227dccc(void *, void *, s32);
s32 func_ov065_02278bc0(s32);
s32 func_ov065_0227de10(void *, void *, const char *);
s32 func_ov065_0227dde8(void *, void *, s32);
s32 func_ov065_0227de30(void *, void *, const char *, s32);
s32 func_ov065_0227deb4(void *, void *, s32);
void func_ov065_02278658(void *, void *);
s32 func_ov065_022818bc(void *, s32, void *);
s32 func_ov065_02278dd4(s32, s32, s32);
s32 func_ov065_0227908c(s32, s32);
void func_ov065_02281000(s32);
s32 func_ov065_02278d34(s32, void *, s32);
s32 func_ov065_02278be8(s32);
void func_ov065_0227e160(void *, s32, s32);

extern char data_ov065_0228d884[];
extern char data_ov065_0228d894[];
extern char data_ov065_0228d8dc[];
extern char data_ov065_0228d8ec[];
extern char data_ov065_0228d8f0[];
extern char data_ov065_0228d900[];
extern char data_ov065_0228d914[];
extern char data_ov065_0228d918[];
extern char data_ov065_0228d920[];
extern char data_ov065_0228d928[];
extern char data_ov065_0228d944[];
extern char data_ov065_0228d96c[];
extern char data_ov065_0228d9a0[];

void func_ov065_022804b8(Unk_ov065_022804b8_Src *s, Unk_ov065_022804b8_Dst *d) {
    if (s->unk_00) {
        func_ov065_02283728(d->unk_08, s->unk_00, 0x1f);
    } else {
        d->unk_08[0] = 0;
    }
    if (s->unk_04) {
        func_ov065_02283728(d->unk_27, s->unk_04, 0x15);
    } else {
        d->unk_27[0] = 0;
    }
    if (s->unk_08) {
        func_ov065_02283728(d->unk_3c, s->unk_08, 0x33);
    } else {
        d->unk_3c[0] = 0;
    }
    if (s->unk_0c) {
        func_ov065_02283728(d->unk_6f, s->unk_0c, 0x1f);
    } else {
        d->unk_6f[0] = 0;
    }
    if (s->unk_10) {
        func_ov065_02283728(d->unk_8e, s->unk_10, 0x1f);
    } else {
        d->unk_8e[0] = 0;
    }
    if (s->unk_14) {
        func_ov065_02283728(d->unk_ad, s->unk_14, 0x4c);
    } else {
        d->unk_ad[0] = 0;
    }
    d->unk_fc = s->unk_18;
    func_ov065_02283728(d->unk_100, s->unk_1c, 0xb);
    func_ov065_02283728(d->unk_10b, s->unk_27, 3);
    d->unk_110 = s->unk_2c;
    d->unk_114 = s->unk_30;
    if (s->unk_34) {
        func_ov065_02283728(d->unk_118, s->unk_34, 0x80);
    } else {
        d->unk_118[0] = 0;
    }
    d->unk_198 = s->unk_b4;
    d->unk_19c = s->unk_b8;
    d->unk_1a0 = s->unk_bc;
    d->unk_1a4 = s->unk_c0;
    d->unk_1a8 = s->unk_c4;
    if (s->unk_c8) {
        func_ov065_02283728(d->unk_1ac, s->unk_c8, 0x33);
    } else {
        d->unk_1ac[0] = 0;
    }
    d->unk_fc = s->unk_18;
    d->unk_110 = s->unk_2c;
    d->unk_114 = s->unk_30;
    d->unk_198 = s->unk_b4;
    d->unk_19c = s->unk_b8;
    d->unk_1a0 = s->unk_bc;
    d->unk_1a4 = s->unk_c0;
    d->unk_1a8 = s->unk_c4;
    d->unk_1e0 = s->unk_cc;
    d->unk_1e4 = s->unk_d0;
    d->unk_1e8 = s->unk_d4;
    d->unk_1ec = s->unk_d8;
    d->unk_1f0 = s->unk_dc;
    d->unk_1f4 = s->unk_e0;
    d->unk_1f8 = s->unk_e4;
    d->unk_1fc = s->unk_e8;
    d->unk_200 = s->unk_ec;
}

s32 func_ov065_02280740(s32 day, s32 mon, s32 year);

s32 func_ov065_022806e8(void *ctx, s32 packed, s32 *pa, s32 *pb, s32 *pc) {
    s32 a = (packed >> 24) & 0xff;
    s32 b = (packed >> 16) & 0xff;
    s32 c = packed & 0xffff;
    if (func_ov065_02280740(a, b, c) == 0) {
        func_ov065_02283460(ctx, data_ov065_0228d884);
        return 2;
    }
    *pa = a;
    *pb = b;
    *pc = c;
    return 0;
}

s32 func_ov065_02280740(s32 day, s32 mon, s32 year) {
    if (day == 0 && mon == 0 && year == 0) {
        return 1;
    }
    if (day < 0 || mon < 0 || year < 0) {
        return 0;
    }
    switch (mon) {
    case 0:
        if (day != 0) {
            return 0;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31) {
            return 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30) {
            return 0;
        }
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29) {
                return 0;
            }
        } else {
            if (day > 28) {
                return 0;
            }
        }
        break;
    default:
        return 0;
    }
    if (year < 0x76c) {
        return 0;
    }
    if (year > 0x81f) {
        return 0;
    }
    if (year == 0x81f) {
        if (mon > 6) {
            return 0;
        }
        if (mon == 6) {
            if (day > 6) {
                return 0;
            }
        }
    }
    return 1;
}

s32 func_ov065_02280854(void *h, Unk_ov065_02280854_Node *n, char *x) {
    s32 r = 0;
    s32 t = n->unk_00;
    switch (t) {
    case 0:
        r = func_ov065_0227e438(h, n, x);
        break;
    case 1:
        r = func_ov065_02281974(h, n, x);
        break;
    case 2:
        r = func_ov065_0227ff90(h, n, x);
        break;
    case 4:
        r = func_ov065_022833b4(h, n, x);
        break;
    default:
        func_ov065_02283720(h, data_ov065_0228d894, t);
        break;
    }
    if (r != 0) {
        n->unk_1c = r;
    }
    return r;
}

s32 func_ov065_022808b4(Unk_ov065_02280854_H *h) {
    Unk_ov065_02280854_Node *n = h->unk_00->unk_424;
    for (; n; n = n->unk_20) {
        if (n->unk_08 != 0 && n->unk_00 != 3) {
            return 1;
        }
    }
    return 0;
}

s32 func_ov065_022808dc(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node **out, s32 id) {
    Unk_ov065_02280854_Node *n = h->unk_00->unk_424;
    for (; n; n = n->unk_20) {
        if (n->unk_18 == id) {
            if (out) {
                *out = n;
            }
            return 1;
        }
    }
    if (out) {
        *out = 0;
    }
    return 0;
}

void func_ov065_0228094c(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n);

void func_ov065_0228090c(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    Unk_ov065_02280854_Node *p = c->unk_424;
    Unk_ov065_02280854_Node *prev = 0;
    for (; p; prev = p, p = p->unk_20) {
        if (p == n) {
            if (prev == 0) {
                c->unk_424 = p->unk_20;
            } else {
                prev->unk_20 = n->unk_20;
            }
            func_ov065_0228094c(h, n);
            return;
        }
    }
}

void func_ov065_0228094c(Unk_ov065_02280854_H *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    if (n->unk_00 == 3) {
        Unk_ov065_0228094c_Sub *s = (Unk_ov065_0228094c_Sub *)n->unk_04;
        c->unk_210--;
        func_ov065_02278da4(s->unk_04, 2);
        func_ov065_02278dbc(s->unk_04);
        func_ov065_02277ac8(s->unk_18);
        s->unk_18 = 0;
        func_ov065_02277ac8(s->unk_08);
        s->unk_08 = 0;
    }
    func_ov065_02277ac8((void *)n->unk_04);
    n->unk_04 = 0;
    func_ov065_02277ac8(n);
}

s32 func_ov065_022809a4(Unk_ov065_02280854_H *h, s32 a, s32 b, Unk_ov065_02280854_Node **out, s32 e, s32 f, s32 g) {
    Unk_ov065_02280854_Ctx *c = h->unk_00;
    Unk_ov065_02280854_Node *n = (Unk_ov065_02280854_Node *)func_ov065_02277af0(0x24);
    if (n == 0) {
        func_ov065_02283460(h, data_ov065_0228d8dc);
        return 1;
    }
    n->unk_00 = a;
    n->unk_04 = b;
    n->unk_08 = e;
    n->unk_14 = 0;
    if (a == 0) {
        n->unk_18 = 1;
    } else {
        s32 t = c->unk_20c++;
        n->unk_18 = t;
        if (c->unk_20c < 2) {
            c->unk_20c = 2;
        }
    }
    n->unk_1c = 0;
    n->unk_0c = f;
    n->unk_10 = g;
    n->unk_20 = c->unk_424;
    c->unk_424 = n;
    *out = n;
    return 0;
}

s32 func_ov065_02280a2c(void *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280a2c_Ctx *c = *(Unk_ov065_02280a2c_Ctx **)h;
    Unk_ov065_02280a2c_Wrap w;
    s32 r;
    w = *(Unk_ov065_02280a2c_Wrap *)&n->unk_0c;
    if (w.p.unk_00 != 0) {
        {
            switch (n->unk_00) {
            case 0: {
                Unk_ov065_02280a2c_M0 *m = (Unk_ov065_02280a2c_M0 *)func_ov065_02277af0(0x20);
                if (m == 0) {
                    func_ov065_02283460(h, data_ov065_0228d8dc);
                    return 1;
                }
                func_0212899c(m, 0, 0x20);
                m->unk_00 = n->unk_1c;
                if (c->unk_418 == 0x201) {
                    m->unk_04 = c->unk_1a0;
                    c->unk_1a0 = 0;
                }
                r = func_ov065_0227e0e8(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 1: {
                u8 *m = (u8 *)func_ov065_02277af0(8);
                if (m == 0) {
                    func_ov065_02283460(h, data_ov065_0228d8dc);
                    return 1;
                }
                m[0] = 0;
                m[1] = 0;
                m[2] = 0;
                m[3] = 0;
                m[4] = 0;
                m[5] = 0;
                m[6] = 0;
                m[7] = 0;
                *(s32 *)m = n->unk_1c;
                r = func_ov065_0227e0e8(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 2: {
                void *m = func_ov065_02277af0(0x204);
                if (m == 0) {
                    func_ov065_02283460(h, data_ov065_0228d8dc);
                    return 1;
                }
                func_0212899c(m, 0, 0x204);
                *(s32 *)m = n->unk_1c;
                r = func_ov065_0227e0e8(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 3: {
                u8 *m = (u8 *)func_ov065_02277af0(0x10);
                u8 *q;
                u8 *k;
                if (m == 0) {
                    func_ov065_02283460(h, data_ov065_0228d8dc);
                    return 1;
                }
                q = m;
                k = (u8 *)0x10;
                do {
                    *q++ = 0;
                    k--;
                } while (k != 0);
                *(s32 *)m = n->unk_1c;
                *(s32 *)(m + 0xc) = 0;
                r = func_ov065_0227e0e8(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            case 4: {
                u8 *m = (u8 *)func_ov065_02277af0(4);
                if (m == 0) {
                    func_ov065_02283460(h, data_ov065_0228d8dc);
                    return 1;
                }
                m[0] = 0;
                m[1] = 0;
                m[2] = 0;
                m[3] = 0;
                *(s32 *)m = n->unk_1c;
                r = func_ov065_0227e0e8(h, w.p, m, n, 0);
                if (r == 0) {
                    break;
                }
                return r;
            }
            }
        }
    }
    return 0;
}

s32 func_ov065_02280c08(void *h, Unk_ov065_02280c08_Node *n, char *str, s32 len) {
    char buf[0x24];
    s32 r;
    if (str == 0) {
        str = data_ov065_0228d8ec;
    }
    if (len == -1) {
        len = func_021277d4(str);
    }
    func_021130d0(buf, data_ov065_0228d8f0, len);
    r = func_ov065_0227dc28(h, n, buf);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227dc48(h, n, str, len);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227dccc(h, n, 0);
    if (r != 0) {
        return r;
    }
    n->unk_10 = func_ov065_02278bc0(0) + 0x12c;
    return 0;
}

struct Unk_ov065_02280c84_Src {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

s32 func_ov065_02280c84(void *h, Unk_ov065_02280c08_Node *n, s32 a, Unk_ov065_02280c84_Src *s) {
    char buf[0x44];
    func_021130d0(buf, data_ov065_0228d900, a, s->unk_00, s->unk_04, s->unk_08);
    return func_ov065_0227dc28(h, n, buf);
}

struct Unk_ov065_02280cb4_T {
    s32 v[6];
};

s32 func_ov065_02280cb4(void *h, Unk_ov065_02280c08_Node *n, s32 a, const char *b) {
    s32 len = func_021277d4(b);
    Unk_ov065_02280cb4_T t = {{0, 0, 0, 0, 0, 0}};
    s32 r;
    t.v[4] = a;
    r = func_ov065_0227de10(h, &t, data_ov065_0228d914);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227dde8(h, &t, a);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227de10(h, &t, data_ov065_0228d918);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227dde8(h, &t, len);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227de10(h, &t, data_ov065_0228d920);
    if (r != 0) {
        return r;
    }
    t.v[5] = t.v[2];
    r = func_ov065_0227de30(h, &t, b, len);
    if (r != 0) {
        return r;
    }
    r = func_ov065_0227deb4(h, &t, 0);
    if (r != 0) {
        return r;
    }
    func_ov065_02278658((void *)n->unk_38, &t);
    n->unk_10 = func_ov065_02278bc0(0) + 0x12c;
    return 0;
}

struct Unk_ov065_02280d70_P2 {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
};

struct Unk_ov065_02280d70_P1 {
    u8 pad_00[8];
    Unk_ov065_02280d70_P2 *unk_08;
};

struct Unk_ov065_02280d70_Sa {
    s32 unk_00;
    s32 unk_04;
};

s32 func_ov065_02280d70(void *h, Unk_ov065_02280854_Node *n) {
    Unk_ov065_02280d70_P1 *p;
    s32 e;
    if (func_ov065_022818bc(h, n->unk_0c, &p) == 0) {
        func_ov065_02283460(h, data_ov065_0228d928);
        return 3;
    }
    n->unk_08 = func_ov065_02278dd4(2, 1, 0);
    if (n->unk_08 == -1) {
        func_ov065_02283470(h, 5, data_ov065_0228d944);
        func_ov065_0227e160(h, 3, 0);
        return 3;
    }
    if (func_ov065_0227908c(n->unk_08, 0) == 0) {
        func_ov065_02283470(h, 5, data_ov065_0228d96c);
        func_ov065_0227e160(h, 3, 0);
        return 3;
    }
    func_ov065_02281000(n->unk_08);
    Unk_ov065_02280d70_Sa sa = {0, 0};
    ((u8 *)&sa)[1] = 2;
    sa.unk_04 = p->unk_08->unk_10;
    *(u16 *)((u8 *)&sa + 2) = p->unk_08->unk_14;
    if (func_ov065_02278d34(n->unk_08, &sa, 8) == -1) {
        e = func_ov065_02278be8(n->unk_08);
        if (e != -6 && e != -0x1a && e != -0x4c) {
            func_ov065_02283470(h, 5, data_ov065_0228d9a0);
            func_ov065_0227e160(h, 3, 1);
            return 3;
        }
    }
    n->unk_00 = 0x67;
    return 0;
}
}
