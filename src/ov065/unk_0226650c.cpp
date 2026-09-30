// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p
#include "types.h"

// ov065_012: SSL/TLS handshake helpers (PRF, RSA, certificate ASN.1 parse), 0x0226650c..0x02266df4

struct Unk_ov065_022665d8_Rsa {
    s32 unk_00;
    u8 *unk_04;
    s32 unk_08;
    u8 *unk_0c;
    s32 unk_10;
    u8 *unk_14;
    s32 unk_18;
    u8 *unk_1c;
    s32 unk_20;
    u8 *unk_24;
    s32 unk_28;
    u8 *unk_2c;
};

struct Unk_ov065_02266c90_Key {
    u32 unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0c;
    u8 *unk_10;
};

struct Unk_ov065_0226650c_Ctx;
typedef u32 (*Unk_ov065_0226650c_Cb)(u32, Unk_ov065_0226650c_Ctx *, s32);

struct Unk_ov065_0226650c_Ctx {
    u8 *unk_00;
    u8 unk_04;
    u8 pad_05;
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[0x20];
    u8 pad_48[0x31c - 0x48];
    u8 unk_31c[0x5c];
    u8 pad_378[0x3d0 - 0x378];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 pad_42a[2];
    s32 unk_42c;
    s32 unk_430;
    u8 *unk_434;
    u8 *unk_438;
    u8 unk_43c[0x14];
    s32 unk_450;
    Unk_ov065_02266c90_Key unk_454;
    u8 unk_468[0x100];
    s32 unk_568;
    u8 unk_56c[8];
    s32 unk_574;
    u8 *unk_578;
    s32 unk_57c;
    u8 unk_580;
    u8 unk_581;
    u8 unk_582;
    u8 unk_583;
    u8 unk_584[0x100];
    u8 unk_684[0x100];
    u8 unk_784[0x50];
    char *unk_7d4;
    u8 *unk_7d8;
    s32 unk_7dc;
    u32 unk_7e0;
    Unk_ov065_0226650c_Cb unk_7e4;
};

struct Unk_ov065_02266948_Date {
    s32 year;
    s32 month;
    s32 day;
    s32 week;
};

typedef Unk_ov065_0226650c_Ctx Ctx;
typedef Unk_ov065_022665d8_Rsa Rsa;
typedef Unk_ov065_02266c90_Key Key;

extern "C" {
extern char data_ov065_0228b4a4[];
extern char data_ov065_0228b4a8[];
extern char data_ov065_0228b4ac[];
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);
extern u16 data_ov065_0228b44c[2];
extern u8 data_ov065_022903dc[];
extern u32 data_ov065_0228b440;
extern char *data_ov065_0228b47c[6];
struct Unk_ov065_02266c90_Os {
    u32 unk_00;
    u32 unk_04;
};
extern Unk_ov065_02266c90_Os data_021fcc2c;

// main module
void func_02116048(const void *, void *, u32);
void func_02115fb4(void *, s32, u32);
s32 func_02133150(s32, s32);
u32 func_0212a438(const char *);
s32 func_02128930(const void *, const void *, u32);
void func_0211d3a0(Unk_ov065_02266948_Date *);
u32 func_0211337c(u32);
void func_02113384(u32, u32);

// same overlay, out of range
void func_ov065_02267a84(void *);
void func_ov065_022679f8(void *, const void *, u32);
void func_ov065_022679a4(void *, void *);
void func_ov065_0226750c(void *);
void func_ov065_02267480(void *, const void *, u32);
void func_ov065_0226742c(void *, void *);
u8 *func_ov065_022673dc(u8 *);
u8 *func_ov065_0226733c(u8 *);
s32 func_ov065_02267250(u8 **);
void func_ov065_02267208(void *, u8 *, s32);
u32 func_ov065_022671a0(u8 *);
Key *func_ov065_022672a0(Ctx *, u8 *);
void func_ov065_02268210(u16 *, u8 *, s32, s32);
void func_ov065_0226824c(u16 *, u16 *, u16 *, s32, u16 *);
void func_ov065_02268a7c(u16 *, u16 *, u16 *, s32);
void func_ov065_02268950(u16 *, u16 *, u16 *, s32);
void func_ov065_02268b6c(u16 *, u16 *, u16 *, s32);
s32 func_ov065_02268be8(u16 *, s32);
void func_ov065_02268b00(u16 *, s32);
void func_ov065_02268658(s32, u16 *, u16 *, u16 *, s32, u16 *);
void func_ov065_022681e0(u8 *, u16 *, s32, s32);
void func_ov065_02268540(u16 *, u16 *, u16 *, s32, u16 *);

// in range
void func_ov065_0226650c(Ctx *);
void func_ov065_02266550(u8 *, char *, Ctx *);
void func_ov065_022665d8(u8 *, u8 *, Rsa *);
void func_ov065_02266744(Ctx *, u8 *);
void func_ov065_022667b0(Ctx *, u8 *);
s32 func_ov065_02266844(u32, u32);
u32 func_ov065_02266850(u8 *, s32, s32);
s32 func_ov065_02266894(u8 *, s32, s32, u32);
void func_ov065_022668cc(Ctx *, u8 *);
void func_ov065_02266948(Ctx *, u8 *);
s32 func_ov065_02266b24(char *, char *);
s32 func_ov065_02266b84(char *);
u32 func_ov065_02266b9c(Ctx *);
s32 func_ov065_02266c90(Ctx *, Key *);
s32 func_ov065_02266df4(Ctx *, u8 **, s32, s32, s32);

void func_ov065_0226650c(Ctx *c) {
    u8 buf[0x30];
    func_ov065_02266550(buf, data_ov065_0228b4a4, c);
    func_ov065_02266550(buf + 0x10, data_ov065_0228b4a8, c);
    func_ov065_02266550(buf + 0x20, data_ov065_0228b4ac, c);
    func_02116048(buf, c->unk_00 + 0x20, 0x30);
}

void func_ov065_02266550(u8 *out, char *label, Ctx *c) {
    u8 tmp[0x14];
    u8 *h = c->unk_31c;
    func_ov065_02267a84(h);
    func_ov065_022679f8(h, label, func_0212a438(label));
    func_ov065_022679f8(h, c->unk_00 + 0x20, 0x30);
    func_ov065_022679f8(h, c->unk_08, 0x20);
    func_ov065_022679f8(h, c->unk_28, 0x20);
    func_ov065_022679a4(h, tmp);
    h = c->unk_3d0;
    func_ov065_0226750c(h);
    func_ov065_02267480(h, c->unk_00 + 0x20, 0x30);
    func_ov065_02267480(h, tmp, 0x14);
    func_ov065_0226742c(h, out);
}

void func_ov065_022665d8(u8 *out, u8 *in, Rsa *k) {
    if (k != 0 && k->unk_00 != 0) {
        s32 n = (k->unk_00 * 2) / 2 + 1;
        u16 *b0 = (u16 *)data_ov065_0228ebc8(n * 20);
        if (b0 != 0) {
            u16 *b1 = b0 + n;
            u16 *b2 = b1 + n;
            u16 *b3 = b2 + n;
            u16 *b4 = b3 + n;
            u16 *b5 = b4 + n;
            u16 *b6 = b5 + n;
            u16 *b7 = b6 + n;
            func_ov065_02268210(b0, in, k->unk_00, n);
            func_ov065_02268210(b1, k->unk_1c, k->unk_18, n);
            func_ov065_02268210(b5, k->unk_0c, k->unk_08, n);
            func_ov065_0226824c(b3, b0, b1, n, b5);
            func_ov065_02268210(b1, k->unk_24, k->unk_20, n);
            func_ov065_02268210(b5, k->unk_14, k->unk_10, n);
            func_ov065_0226824c(b4, b0, b1, n, b5);
            func_ov065_02268a7c(b0, b3, b4, n);
            func_ov065_02268210(b1, k->unk_2c, k->unk_28, n);
            func_ov065_02268950(b2, b0, b1, n);
            func_ov065_02268210(b1, k->unk_14, k->unk_10, n);
            func_ov065_02268950(b0, b2, b1, n);
            func_ov065_02268b6c(b2, b0, b4, n);
            func_ov065_02268210(b1, k->unk_04, k->unk_00, n);
            if (func_ov065_02268be8(b2, n) < 0) {
                func_ov065_02268b00(b2, n);
                func_ov065_02268658(0, b2, b1, b6, n, b7);
                func_ov065_02268a7c(b6, b1, b6, n);
            } else {
                func_ov065_02268658(0, b2, b1, b6, n, b7);
            }
            func_ov065_022681e0(out, b6, 0x30, n);
            data_ov065_0228ebd0(b0);
        }
    }
}

void func_ov065_02266744(Ctx *c, u8 *p) {
    if (func_ov065_02266844(p[0], p[1])) {
        func_02116048(p + 2, c->unk_08, 0x20);
        u32 n = p[0x22];
        u8 *q = p + 0x23;
        if (n != 0x20) {
            c->unk_00 = 0;
        } else {
            c->unk_00 = func_ov065_022673dc(q);
        }
        q += n;
        u16 r = func_ov065_02266850(q + 2, ((q[0] << 8) + q[1]) / 2, 2);
        c->unk_06 = r;
        if (r != 0) {
            c->unk_429 = 1;
        }
    }
}

void func_ov065_022667b0(Ctx *c, u8 *p) {
    if (func_ov065_02266844(p[0], p[1])) {
        s32 a = (p[2] << 8) + p[3];
        u16 r = func_ov065_02266850(p + 8, a / 3, 3);
        if (r != 0) {
            c->unk_06 = r;
            s32 b = (p[4] << 8) + p[5];
            s32 n = (p[6] << 8) + p[7];
            c->unk_00 = 0;
            a += 8;
            u8 *q = p + (a + b);
            if (n >= 0x20) {
                func_02116048(q, c->unk_08, 0x20);
            } else {
                func_02115fb4(c->unk_08, 0, 0x20 - n);
                func_02116048(q, c->unk_28 - n, n);
            }
            c->unk_429 = 1;
        }
    }
}

s32 func_ov065_02266844(u32 a, u32 b) {
    if (a == 3) {
        return TRUE;
    }
    return FALSE;
}

u32 func_ov065_02266850(u8 *p, s32 cnt, s32 size) {
    u32 i;
    u16 *t;
    for (i = 0, t = data_ov065_0228b44c; i < 2; t++, i++) {
        if (func_ov065_02266894(p, cnt, size, *t)) {
            return data_ov065_0228b44c[i];
        }
    }
    return 0;
}

s32 func_ov065_02266894(u8 *p, s32 cnt, s32 size, u32 key) {
    s32 i;
    for (i = 0; i < cnt; p += size, i++) {
        u32 v = (p[0] << 8) + p[1];
        if (size == 3) {
            v = (v << 8) + p[2];
        }
        if (v == key) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_ov065_022668cc(Ctx *c, u8 *p) {
    u8 n;
    u8 *q;
    u8 *old;
    u8 *e;
    func_02116048(p + 2, c->unk_28, 0x20);
    n = p[0x22];
    q = p + 0x23;
    old = c->unk_00;
    if (old != 0 && n == 0x20 && func_02128930(old, q, 0x20) == 0) {
        c->unk_04 = 1;
    } else {
        if (old != 0) {
            old[0x5a] = 0;
        }
        if (n == 0) {
            c->unk_00 = data_ov065_022903dc;
        } else {
            c->unk_00 = func_ov065_0226733c(q);
        }
        c->unk_04 = 0;
    }
    e = q + n;
    u32 hi = e[0];
    c->unk_06 = (hi << 8) + e[1];
    c->unk_429 = 2;
}

void func_ov065_02266948(Ctx *c, u8 *p) {
    u32 len;
    u32 rl;
    u32 ty;
    u32 r4;
    s32 i;
    s32 k;
    Unk_ov065_02266948_Date d;
    len = (((p[0] << 8) + p[1]) << 8) + p[2];
    p += 3;
    c->unk_430 = -1;
    func_0211d3a0(&d);
    c->unk_7e0 = d.day + (((d.year + 0x7d0) << 16) + (d.month << 8));
    c->unk_684[0] = 0;
    c->unk_568 = c->unk_574 = 0;
    i = k = 0;
    for (;;) {
        rl = (((p[0] << 8) + p[1]) << 8) + p[2];
        p += 3;
        len -= rl + 3;
        c->unk_42c = -1;
        c->unk_581 = 0;
        c->unk_580 = 0;
        c->unk_583 = 0;
        c->unk_684[0] = 0;
        c->unk_584[0] = 0;
        c->unk_784[0] = 0;
        c->unk_7d8 = p;
        c->unk_7dc = rl;
        if (func_ov065_02266df4(c, &p, 0, 0, k) != 0 || (u32)c->unk_568 < 0x33 || c->unk_574 == 0) {
            c->unk_429 = 9;
            return;
        }
        r4 = func_ov065_02266b9c(c);
        if (i == 0 && c->unk_7d4 != 0 && func_ov065_02266b24(c->unk_7d4, (char *)c->unk_784) != 0) {
            r4 |= 0x4000;
        }
        ty = r4 & 0xff;
        if (ty == 1 && len != 0) {
            u8 *q = p + 3;
            c->unk_581 = 0;
            if (func_ov065_02266df4(c, &q, 0, 0, 2) != 0) {
                c->unk_429 = 9;
                return;
            }
            r4 = (r4 & ~0xff) | func_ov065_02266c90(c, &c->unk_454);
        }
        if (c->unk_7e4 != 0) {
            r4 = c->unk_7e4(r4, c, i);
        }
        i++;
        if (ty != 0 && r4 == 0 && len != 0) {
            k = 1;
            continue;
        }
        break;
    }
    if (r4 == 0) {
        c->unk_429 = 3;
    } else {
        c->unk_429 = 9;
    }
}

s32 func_ov065_02266b24(char *a, char *b) {
    s8 x, y;
    for (;;) {
        while (x = *(s8 *)b++, y = *(s8 *)a++, y == x) {
            if (y == 0) {
                return 0;
            }
        }
        if (x != '*') {
            return 1;
        }
        a--;
        s32 la = func_ov065_02266b84(a);
        s32 lb = func_ov065_02266b84(b);
        if (lb > la) {
            return 1;
        }
        a += la - lb;
    }
}

s32 func_ov065_02266b84(char *s) {
    char *o = s;
    while (*(s8 *)s != '.' && *(s8 *)s != 0) {
        s++;
    }
    return s - o;
}

u32 func_ov065_02266b9c(Ctx *c) {
    u32 r;
    if (c->unk_583 != 0) {
        r = 0;
    } else {
        r = 0x8000;
    }
    if (c->unk_430 == -1) {
        r |= 4;
        return r;
    }
    switch (c->unk_42c) {
    case 3: {
        u8 *h = c->unk_3d0;
        func_ov065_0226750c(h);
        u8 *s = c->unk_434;
        func_ov065_02267480(h, s, c->unk_438 - s);
        func_ov065_0226742c(h, c->unk_43c);
        c->unk_450 = 0x10;
        break;
    }
    case 4: {
        u8 *h = c->unk_31c;
        func_ov065_02267a84(h);
        u8 *s = c->unk_434;
        func_ov065_022679f8(h, s, c->unk_438 - s);
        func_ov065_022679a4(h, c->unk_43c);
        c->unk_450 = 0x14;
        break;
    }
    default:
        r |= 3;
        return r;
    }
    Key *k = func_ov065_022672a0(c, c->unk_584);
    if (k == 0) {
        r |= 1;
        return r;
    }
    r |= func_ov065_02266c90(c, k);
    return r;
}

s32 func_ov065_02266c90(Ctx *c, Key *k) {
    if (c->unk_578 == 0 || c->unk_57c == 0 || k->unk_10 == 0 || k->unk_0c == 0 || k->unk_08 == 0 || k->unk_04 == 0) {
        return 2;
    }
    s32 n = (k->unk_04 * 2) / 2;
    u16 *buf = (u16 *)data_ov065_0228ebc8(n * 8);
    if (buf == 0) {
        return 2;
    }
    u16 *b1 = buf + n;
    u16 *b2 = b1 + n;
    u16 *b3 = b2 + n;
    func_ov065_02268210(b1, c->unk_578, c->unk_57c, n);
    func_ov065_02268210(b2, k->unk_10, k->unk_0c, n);
    func_ov065_02268210(b3, k->unk_08, k->unk_04, n);
    if (data_ov065_0228b440 < 0x20) {
        u32 th = data_021fcc2c.unk_04;
        u32 pr = func_0211337c(th);
        func_02113384(th, data_ov065_0228b440);
        func_ov065_02268540(buf, b1, b2, n, b3);
        func_02113384(th, pr);
    } else {
        func_ov065_02268540(buf, b1, b2, n, b3);
    }
    func_ov065_022681e0((u8 *)b1, buf, k->unk_04, n);
    s32 r = 0;
    u8 *q = (u8 *)b1;
    if (q[0] != 0 || q[1] != 1) {
        r = 2;
    } else {
        s32 i = 2;
        s32 len = k->unk_04;
        if (len > 2) {
            do {
                if (q[i] != 0xff) {
                    break;
                }
                i++;
            } while (i < len);
        }
        s32 j = i + 1;
        if (j < len && q[i] == 0 && q[j] == 0x30 && func_02128930(c->unk_43c, q + len - c->unk_450, c->unk_450) == 0) {
        } else {
            r = 2;
        }
    }
    data_ov065_0228ebd0(buf);
    return r;
}

s32 func_ov065_02266df4(Ctx *c, u8 **pp, s32 depth, s32 idx, s32 mode) {
    u8 *p;
    u32 tag;
    s32 len;
    s32 i;
    u8 *end;
    char **tbl;
    u8 *send;
    s32 oi;
    u8 *op;
    char *oe;
    p = *pp;
    tag = *p++;
    len = func_ov065_02267250(&p);
    if (len < 0 || len > 0x7d0) {
        return 1;
    }
    switch (tag & 0x1f) {
    case 0:
    case 1:
        goto def;
    case 2:
        if (c->unk_581 != 0) {
            if (idx == 0) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 0x100) {
                        func_02116048(p, c->unk_468, len);
                        c->unk_568 = len;
                    }
                    break;
                case 2:
                    c->unk_454.unk_04 = len;
                    c->unk_454.unk_08 = p;
                    break;
                }
            } else if (idx == 1) {
                if (*p == 0) {
                    do {
                        p++;
                        len--;
                    } while (*p == 0);
                }
                switch (mode) {
                case 0:
                    if (len <= 8) {
                        func_02116048(p, c->unk_56c, len);
                        c->unk_574 = len;
                    }
                    break;
                case 2:
                    c->unk_454.unk_0c = len;
                    c->unk_454.unk_10 = p;
                    break;
                }
            }
        }
        p += len;
        break;
    case 3:
        if (depth == 1 && mode != 2) {
            c->unk_578 = p + 1;
            c->unk_57c = len - 1;
        }
        if (c->unk_581 != 0) {
            p++;
            if (func_ov065_02266df4(c, &p, depth, 0, mode) != 0) {
                return 1;
            }
            c->unk_581 = 0;
        } else {
            p += len;
        }
        break;
    case 6:
        oi = 0;
        tbl = data_ov065_0228b47c;
        op = p;
        do {
            oe = *tbl;
            if (func_02128930(op, oe, func_0212a438(oe)) == 0) {
                switch (oi) {
                case 0:
                    break;
                case 1:
                case 2:
                    if (mode == 0) {
                        c->unk_430 = oi;
                    }
                    c->unk_581 = oi;
                    break;
                case 3:
                case 4:
                    if (mode != 2) {
                        c->unk_42c = oi;
                    }
                    break;
                case 5:
                    if (mode != 2) {
                        c->unk_582 = oi;
                    }
                    break;
                }
                break;
            }
            tbl++;
            oi++;
        } while (oi < 6);
        p += len;
        break;
    case 12:
    case 19:
    case 20:
    case 22:
        if (mode != 2) {
            if (c->unk_580 != 0) {
                func_ov065_02267208(c->unk_684, p, len);
                if (c->unk_582 == 5 && len <= 0x4f) {
                    func_02116048(p, c->unk_784, len);
                    (c->unk_784)[len] = 0;
                }
            } else {
                func_ov065_02267208(c->unk_584, p, len);
            }
        }
        c->unk_582 = 0;
        p += len;
        break;
    case 23:
    case 24:
        if (mode != 2) {
            u32 t = func_ov065_022671a0(p);
            if (idx == 0) {
                if (c->unk_7e0 >= t) {
                    c->unk_583 = 1;
                }
            } else {
                if (c->unk_7e0 > t) {
                    c->unk_583 = 0;
                }
            }
        }
        p += len;
        c->unk_580 = 1;
        break;
    case 16:
        if (depth == 0 && idx == 0 && mode != 2) {
            c->unk_434 = p;
        }
        send = p + len;
        for (i = 0; p < send;) {
            s32 r = func_ov065_02266df4(c, &p, depth + 1, i, mode);
            i++;
            if (r != 0) {
                return 1;
            }
        }
        if (depth == 1 && idx == 0 && mode != 2) {
            c->unk_438 = p;
        }
        break;
    case 17:
        end = p + len;
        while (p < end) {
            if (func_ov065_02266df4(c, &p, depth + 1, 0, mode) != 0) {
                return 1;
            }
        }
        break;
    default:
    def:
        if (tag == 0xa0) {
            end = p + len;
            while (p < end) {
                if (func_ov065_02266df4(c, &p, depth + 1, 0, mode) != 0) {
                    return 1;
                }
            }
        } else {
            p += len;
        }
        break;
    }
    *pp = p;
    return 0;
}
}
