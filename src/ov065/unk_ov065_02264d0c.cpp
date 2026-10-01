// mwcc-version: 1.2/sp2p3
// mwcc-flags: -O4,p -str reuse
#include "types.h"

namespace Unk_ov065_0226650c_Ns {


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
s32 _s32_div_f(s32, s32);
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

s32 func_ov065_02266b84(char *s) {
    char *o = s;
    while (*(s8 *)s != '.' && *(s8 *)s != 0) {
        s++;
    }
    return s - o;
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

void func_ov065_022668cc(Ctx *c, u8 *p) {
    u8 n;
    u8 *old;
    func_02116048(p + 2, c->unk_28, 0x20);
    p += 0x22;
    n = *p++;
    old = c->unk_00;
    if (old != 0 && n == 0x20 && func_02128930(old, p, 0x20) == 0) {
        c->unk_04 = 1;
    } else {
        if (old != 0) {
            old[0x5a] = 0;
        }
        if (n == 0) {
            c->unk_00 = data_ov065_022903dc;
        } else {
            c->unk_00 = func_ov065_0226733c(p);
        }
        c->unk_04 = 0;
    }
    p += n;
    c->unk_06 = (p[0] << 8) + p[1];
    c->unk_429 = 2;
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

s32 func_ov065_02266844(u32 a, u32 b) {
    if (a == 3) {
        return TRUE;
    }
    return FALSE;
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

void func_ov065_0226650c(Ctx *c) {
    u8 buf[0x30];
    func_ov065_02266550(buf, "A", c);
    func_ov065_02266550(buf + 0x10, "BB", c);
    func_ov065_02266550(buf + 0x20, "CCC", c);
    func_02116048(buf, c->unk_00 + 0x20, 0x30);
}
}

}

namespace Unk_ov065_02265a5c_Ns {


// SSL 3.0 record layer (MD5/SHA-1 MAC, key block derivation, Finished checks)

struct Unk_ov065_02265a5c_St {
    u8 *unk_00;
    u8 unk_04[2];
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[0x20];
    u8 unk_48[0x48];
    u8 *unk_90;
    u8 *unk_94;
    u8 *unk_98;
    u8 unk_9c[0x104];
    u8 unk_1a0[8];
    u8 *unk_1a8;
    u8 *unk_1ac;
    u8 *unk_1b0;
    u8 unk_1b4[0x104];
    u8 unk_2b8[8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x7f0 - 0x42b];
    u32 unk_7f0;
    u32 unk_7f4;
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02265a5c_Sess {
    u8 unk_00[0xc];
    Unk_ov065_02265a5c_St *unk_0c;
};

typedef Unk_ov065_02265a5c_St St;
typedef Unk_ov065_02265a5c_Sess Sess;

extern "C" {
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);

// main module
void *func_02115fb4(void *, s32, u32);
void *func_02116048(const void *, void *, u32);
s32 func_02128930(const void *, const void *, u32);

// same overlay, out of range
u8 *func_ov065_02262708(u32 *, Sess *);
void func_ov065_02262670(u32, Sess *);
void func_ov065_022667b0(St *, u8 *);
void func_ov065_022679f8(void *, const void *, u32);
void func_ov065_022679a4(void *, void *);
void func_ov065_02267a84(void *);
void func_ov065_02267480(void *, const void *, u32);
void func_ov065_0226742c(void *, void *);
void func_ov065_0226750c(void *);
void func_ov065_0226813c(void *, void *, u32);
void func_ov065_0226818c(void *, void *, u32);
void func_ov065_02266744(St *, u8 *);
void func_ov065_022668cc(St *, u8 *);
void func_ov065_02266948(St *, u8 *);
void func_ov065_022665d8(u8 *, u8 *, u32);
void func_ov065_0226650c(St *);

// in range
u8 func_ov065_02265a5c(Sess *);
void func_ov065_02265b9c(St *, u8 *);
s32 func_ov065_02265d5c(u8 *, s32, Sess *);
s32 func_ov065_02265dac(St *, u8 *);
s32 func_ov065_02265f38(St *, u8 *);
s32 func_ov065_022660dc(St *, u8 *, s32);
void func_ov065_022660f4(u8 *);
void func_ov065_02266110(St *, u8 *);
void func_ov065_022661c0(St *, u8 *, u32);
void func_ov065_02266264(St *, u8 *, u32);
void func_ov065_02266308(St *, u8 *);
void func_ov065_02266338(St *);

void func_ov065_02266338(St *st) {
    s32 a, b, c;
    s32 total;
    s32 i;
    s32 off;
    u8 tmp[0x1c];

    switch (st->unk_06) {
    case 4:
        a = 0x10;
        b = 0x10;
        c = 0;
        break;
    case 5:
        a = 0x14;
        b = 0x10;
        c = 0;
        break;
    }
    total = (a + b + c) * 2;
    i = 0;
    if (total > 0) {
        s32 off = 0;
        do {
            s32 j;
            void *ctx = st->unk_31c;
            func_ov065_02267a84(ctx);
            tmp[0] = 0x41 + i;
            j = 0;
            while (j < i + 1) {
                func_ov065_022679f8(ctx, tmp, 1);
                j++;
            }
            func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
            func_ov065_022679f8(ctx, st->unk_28, 0x20);
            func_ov065_022679f8(ctx, st->unk_08, 0x20);
            func_ov065_022679a4(ctx, tmp + 1);
            ctx = st->unk_3d0;
            func_ov065_0226750c(ctx);
            func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
            func_ov065_02267480(ctx, tmp + 1, 0x14);
            func_ov065_0226742c(ctx, st->unk_48 + off);
            off += 0x10;
            i++;
        } while (off < total);
    }
    if (st->unk_428 != 0) {
        st->unk_1a8 = st->unk_48;
        st->unk_1ac = st->unk_1a8 + a * 2;
        st->unk_1b0 = st->unk_1ac + b * 2;
        st->unk_90 = st->unk_48 + a;
        st->unk_94 = st->unk_90 + a + b;
        st->unk_98 = st->unk_94 + b + c;
    } else {
        st->unk_90 = st->unk_48;
        st->unk_94 = st->unk_90 + a * 2;
        st->unk_98 = st->unk_94 + b * 2;
        st->unk_1a8 = st->unk_48 + a;
        st->unk_1ac = st->unk_1a8 + a + b;
        st->unk_1b0 = st->unk_1ac + b + c;
    }
    func_ov065_0226818c(st->unk_1b4, st->unk_1ac, 0x10);
    func_ov065_0226818c(st->unk_9c, st->unk_94, 0x10);
}

void func_ov065_02266308(St *st, u8 *p) {
    func_ov065_022665d8(st->unk_00 + 0x20, p, st->unk_7f0);
    func_ov065_0226650c(st);
    func_ov065_02266338(st);
    st->unk_429 = 5;
}

void func_ov065_02266264(St *st, u8 *out, u32 who) {
    u8 pad[0x30];
    u8 *ctx = st->unk_378;

    if ((st->unk_428 ^ who) != 0) {
        func_ov065_02267480(ctx, "SRVR", 4);
    } else {
        func_ov065_02267480(ctx, "CLNT", 4);
    }
    func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x36, 0x30);
    func_ov065_02267480(ctx, pad, 0x30);
    func_ov065_0226742c(ctx, out);
    func_ov065_0226750c(ctx);
    func_ov065_02267480(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x5c, 0x30);
    func_ov065_02267480(ctx, pad, 0x30);
    func_ov065_02267480(ctx, out, 0x10);
    func_ov065_0226742c(ctx, out);
}

void func_ov065_022661c0(St *st, u8 *out, u32 who) {
    u8 pad[0x28];
    u8 *ctx = st->unk_2c0;

    if ((st->unk_428 ^ who) != 0) {
        func_ov065_022679f8(ctx, "SRVR", 4);
    } else {
        func_ov065_022679f8(ctx, "CLNT", 4);
    }
    func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x36, 0x28);
    func_ov065_022679f8(ctx, pad, 0x28);
    func_ov065_022679a4(ctx, out);
    func_ov065_02267a84(ctx);
    func_ov065_022679f8(ctx, st->unk_00 + 0x20, 0x30);
    func_02115fb4(pad, 0x5c, 0x28);
    func_ov065_022679f8(ctx, pad, 0x28);
    func_ov065_022679f8(ctx, out, 0x14);
    func_ov065_022679a4(ctx, out);
}

void func_ov065_02266110(St *st, u8 *in) {
    u8 out[0x14];

    func_02116048(st->unk_378, st->unk_3d0, 0x58);
    func_ov065_02266264(st, out, 1);
    func_02116048(st->unk_3d0, st->unk_378, 0x58);
    if (func_02128930(in, out, 0x10) != 0) {
        st->unk_429 = 9;
        return;
    }
    func_02116048(st->unk_2c0, st->unk_31c, 0x5c);
    func_ov065_022661c0(st, out, 1);
    func_02116048(st->unk_31c, st->unk_2c0, 0x5c);
    if (func_02128930(in + 0x10, out, 0x14) != 0) {
        st->unk_429 = 9;
        return;
    }
    st->unk_429 = 6;
}

void func_ov065_022660f4(u8 *p) {
    s32 i = 8;
    do {
        u32 v;
        p--;
        v = (u8)(*p + 1);
        *p = v;
        if (v != 0) {
            return;
        }
        i--;
    } while (i != 0);
}

s32 func_ov065_022660dc(St *st, u8 *buf, s32 len) {
    func_ov065_0226813c(st->unk_1b4, buf, len);
    return len;
}

s32 func_ov065_02265f38(St *st, u8 *buf) {
    u8 digest[0x14];
    u8 pad[0x30];
    s32 len;
    s32 n;
    void *ctx;

    len = func_ov065_022660dc(st, buf + 5, (buf[3] << 8) + buf[4]);
    switch (st->unk_06) {
    case 4:
        len -= 0x10;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_3d0;
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_1a8, 0x10);
        func_02115fb4(pad, 0x36, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, st->unk_2b8, 8);
        func_ov065_02267480(ctx, buf, 1);
        func_ov065_02267480(ctx, buf + 3, 2);
        func_ov065_02267480(ctx, buf + 5, len);
        func_ov065_0226742c(ctx, digest);
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_1a8, 0x10);
        func_02115fb4(pad, 0x5c, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, digest, 0x10);
        func_ov065_0226742c(ctx, digest);
        n = 0x10;
        break;
    case 5:
        len -= 0x14;
        buf[3] = len >> 8;
        buf[4] = len;
        ctx = st->unk_31c;
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_1a8, 0x14);
        func_02115fb4(pad, 0x36, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, st->unk_2b8, 8);
        func_ov065_022679f8(ctx, buf, 1);
        func_ov065_022679f8(ctx, buf + 3, 2);
        func_ov065_022679f8(ctx, buf + 5, len);
        func_ov065_022679a4(ctx, digest);
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_1a8, 0x14);
        func_02115fb4(pad, 0x5c, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, digest, 0x14);
        func_ov065_022679a4(ctx, digest);
        n = 0x14;
        break;
    }
    if (func_02128930(buf + 5 + len, digest, n) != 0) {
        st->unk_429 = 9;
    }
    func_ov065_022660f4(st->unk_2b8 + 8);
    return len + 5;
}

s32 func_ov065_02265dac(St *st, u8 *buf) {
    u8 *mac = 0;
    u8 pad[0x30];
    s32 len;
    void *ctx;

    len = (buf[3] << 8) + buf[4];
    mac = buf + 5 + len;
    switch (st->unk_06) {
    case 4:
        ctx = st->unk_3d0;
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_90, 0x10);
        func_02115fb4(pad, 0x36, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, st->unk_1a0, 8);
        func_ov065_02267480(ctx, buf, 1);
        func_ov065_02267480(ctx, buf + 3, 2);
        func_ov065_02267480(ctx, buf + 5, len);
        func_ov065_0226742c(ctx, mac);
        func_ov065_0226750c(ctx);
        func_ov065_02267480(ctx, st->unk_90, 0x10);
        func_02115fb4(pad, 0x5c, 0x30);
        func_ov065_02267480(ctx, pad, 0x30);
        func_ov065_02267480(ctx, mac, 0x10);
        func_ov065_0226742c(ctx, mac);
        len += 0x10;
        break;
    case 5:
        ctx = st->unk_31c;
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_90, 0x14);
        func_02115fb4(pad, 0x36, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, st->unk_1a0, 8);
        func_ov065_022679f8(ctx, buf, 1);
        func_ov065_022679f8(ctx, buf + 3, 2);
        func_ov065_022679f8(ctx, buf + 5, len);
        func_ov065_022679a4(ctx, mac);
        func_ov065_02267a84(ctx);
        func_ov065_022679f8(ctx, st->unk_90, 0x14);
        func_02115fb4(pad, 0x5c, 0x28);
        func_ov065_022679f8(ctx, pad, 0x28);
        func_ov065_022679f8(ctx, mac, 0x14);
        func_ov065_022679a4(ctx, mac);
        len += 0x14;
        break;
    }
    buf[3] = len >> 8;
    buf[4] = len;
    func_ov065_0226813c(st->unk_9c, buf + 5, len);
    func_ov065_022660f4(st->unk_1a0 + 8);
    return len + 5;
}

s32 func_ov065_02265d5c(u8 *dst, s32 n, Sess *s) {
    u32 len;
    u8 *p;
    do {
        p = func_ov065_02262708(&len, s);
        if (len == 0) {
            return -1;
        }
        if (len > (u32)n) {
            len = n;
        }
        func_02116048(p, dst, len);
        func_ov065_02262670(len, s);
        dst += len;
        n -= len;
    } while (n > 0);
    return 0;
}

void func_ov065_02265b9c(St *st, u8 *buf) {
    u32 len;
    u32 type;
    u8 *p;
    s32 h;
    u32 n;
    u32 n4;

    if (st->unk_429 == 9) {
        data_ov065_0228ebd0(buf);
        return;
    }
    type = buf[0];
    len = (buf[3] << 8) + buf[4] + 5;
    if ((((u8)(st->unk_429 + 0xf9) <= 1) && type != 0x15) || (type == 0x15 && len > 7)) {
        len = func_ov065_02265f38(st, buf);
    }
    p = buf + 5;
    len -= 5;
    switch (type - 0x14) {
    case 0:
        func_02115fb4(st->unk_2b8, 0, 8);
        st->unk_429 = 7;
        break;
    case 1:
        if (p[0] == 2) {
            st->unk_429 = 9;
        }
        break;
    case 2:
        do {
            h = p[0];
            n = p[3] + ((p[1] << 16) + (p[2] << 8));
            p += 4;
            if (h > 0xb) goto hi;
            if (h >= 0xb) goto c11;
            if (h > 2) goto dflt;
            if (h < 1) goto dflt;
            if (h == 1) goto c1;
            switch (h) { case 2: goto c2; }
            goto dflt;
        hi:
            if (h > 0x14) goto dflt;
            if (h < 0xe) goto dflt;
            if (h == 0xe) goto c14;
            if (h == 0x10) goto c16;
            switch (h) { case 0x14: goto c20; }
            goto dflt;
        c1:
            if (st->unk_428 != 0 && st->unk_429 == 0) {
                func_ov065_02266744(st, p);
            }
            goto join;
        c16:
            func_ov065_02266308(st, p);
            goto join;
        c2:
            func_ov065_022668cc(st, p);
            goto join;
        c11:
            func_ov065_02266948(st, p);
            goto join;
        c14:
            st->unk_429 = 4;
            goto join;
        c20:
            func_ov065_02266110(st, p);
            goto join;
        dflt:
            st->unk_429 = 9;
        join:
            n4 = n + 4;
            func_ov065_022679f8(st->unk_2c0, p - 4, n4);
            func_ov065_02267480(st->unk_378, p - 4, n4);
            p += n;
            len -= n + 4;
            if (len == 0) {
                break;
            }
        } while (st->unk_429 != 9);
        break;
    case 3:
        st->unk_7f8 = buf;
        st->unk_800 = 5;
        st->unk_7fc = len + 5;
        st->unk_42a = 1;
        return;
    default:
        st->unk_429 = 9;
        break;
    }
    data_ov065_0228ebd0(buf);
}

u8 func_ov065_02265a5c(Sess *s) {
    St *st = s->unk_0c;
    u32 len;
    u8 *p;
    u8 *buf;

    do {
        p = func_ov065_02262708(&len, s);
        if (len == 0) {
            st->unk_429 = 9;
            return 9;
        }
    } while (len < 5);

    if (p[0] == 0x80) {
        if (st->unk_428 != 0 && st->unk_429 == 0) {
            len = p[1];
            func_ov065_02262670(2, s);
            buf = (u8 *)data_ov065_0228ebc8(len);
            if (buf == 0) {
                st->unk_429 = 9;
                return 9;
            }
            if (func_ov065_02265d5c(buf, len, s) == 0 && buf[0] == 1) {
                func_ov065_022667b0(st, buf + 1);
            } else {
                st->unk_429 = 9;
            }
            func_ov065_022679f8(st->unk_2c0, buf, len);
            func_ov065_02267480(st->unk_378, buf, len);
            data_ov065_0228ebd0(buf);
        } else {
            st->unk_429 = 9;
        }
    } else {
        len = ((p[3] << 8) + p[4]) + 5;
        if (len > 0x4805) {
            st->unk_429 = 9;
            return 9;
        }
        buf = (u8 *)data_ov065_0228ebc8(len);
        if (buf == 0) {
            st->unk_429 = 9;
            return 9;
        }
        if (func_ov065_02265d5c(buf, len, s) != 0) {
            data_ov065_0228ebd0(buf);
            st->unk_429 = 9;
            return 9;
        }
        func_ov065_02265b9c(st, buf);
    }
    return st->unk_429;
}
}

}

namespace Unk_ov065_02265130_Ns {


// SSL 3.0 client/server handshake helpers (overlay 065)

struct Unk_ov065_02265130_Hash {
    u8 unk_00[0x5c];
};

struct Unk_ov065_02265130_Pms {
    u8 unk_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22[0x2e];
    u8 unk_50[4];
    u32 unk_54;
    u16 unk_58;
};

struct Unk_ov065_02265130_Cert {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov065_02265130_Ctx {
    Unk_ov065_02265130_Pms *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[4];
    u8 unk_2c[0x1c];
    u8 pad_48[0x1a0 - 0x48];
    u8 unk_1a0[8];
    u8 pad_1a8[0x2c0 - 0x1a8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 pad_42a[0x468 - 0x42a];
    u8 unk_468[0x100];
    s32 unk_568;
    u8 unk_56c[8];
    s32 unk_574;
    u8 pad_578[0x7f4 - 0x578];
    Unk_ov065_02265130_Cert *unk_7f4;
};

struct Unk_ov065_02265130_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    Unk_ov065_02265130_Ctx *unk_0c;
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov065_0226599c_Rng {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

struct Unk_ov065_02265334_Os {
    u32 unk_00;
    u32 unk_04;
};

typedef Unk_ov065_02265130_Sess Sess;
typedef Unk_ov065_02265130_Ctx Ctx;

extern "C" {
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228b440;
extern u16 data_ov065_0228b44c[2];
extern Unk_ov065_0226599c_Rng data_ov065_0228ec04;
extern u32 data_ov065_022903c4;
extern u8 data_ov065_022903c8[20];
extern u8 data_ov065_022903c0;
extern Unk_ov065_02265334_Os data_021fcc2c;

// main module
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);
s32 _s32_div_f(s32, s32);
s64 _ll_mul(s64, s64);
u32 func_0211337c(u32);
void func_02113384(u32, u32);

// same overlay, out of range
s32 func_ov065_022628ac(Sess *);
void func_ov065_02262968(Sess *);
void func_ov065_02262804(Sess *);
u32 func_ov065_0226242c(u8 *, u32, u8 *, u32, Sess *);
void func_ov065_02267a84(void *);
void func_ov065_0226750c(void *);
void func_ov065_02267480(void *, u8 *, u32);
void func_ov065_022679f8(void *, u8 *, u32);
void func_ov065_022679a4(void *, void *);
void func_ov065_0226797c(void *, void *);
u32 func_ov065_02267314();
u32 func_ov065_02267394(u32, u32);
u32 func_ov065_0226733c(u8 *);
void func_ov065_02266338(Ctx *);
void func_ov065_0226650c(Ctx *);
void func_ov065_02266264(Ctx *, u8 *, u32);
void func_ov065_022661c0(Ctx *, u8 *, u32);
void func_ov065_02268210(u16 *, void *, s32, s32);
void func_ov065_02268540(u16 *, u16 *, u16 *, s32, u16 *);
s32 func_ov065_02265a5c(Sess *);
s32 func_ov065_02265dac(Ctx *, u8 *);

// in range
s32 func_ov065_02265130(Sess *);
s32 func_ov065_02265188(Sess *);
void func_ov065_02265228(Sess *);
s32 func_ov065_02265294(Sess *);
s32 func_ov065_02265304(Sess *);
void func_ov065_02265334(Sess *);
void func_ov065_0226555c(Sess *);
void func_ov065_02265680(Sess *);
s32 func_ov065_02265794(Sess *);
void func_ov065_02265950(u8 *, u32);
void func_ov065_0226599c(u8 *, s32);

void func_ov065_0226599c(u8 *out, s32 n) {
    u32 seed;
    u8 buf[20];
    Unk_ov065_02265130_Hash h;
    s32 i;
    s32 j;
    u32 z;
    if (data_ov065_022903c0 == 0) {
        data_ov065_0228ec04.unk_00 = data_ov065_0228ec04.unk_10 + _ll_mul(data_ov065_0228ec04.unk_08, data_ov065_0228ec04.unk_00);
        seed = (u32)(data_ov065_0228ec04.unk_00 >> 32);
        func_ov065_02265950((u8 *)&seed, 4);
    }
    j = 0x14;
    i = 0;
    for (; i < n;) {
        if (j == 0x14) {
            u32 th;
            s32 k;
            u32 c;
            u8 *b;
            u8 *a;
            u32 v;
            func_ov065_02267a84(&h);
            th = func_01ffa2ec();
            func_ov065_022679f8(&h, data_ov065_022903c8, 0x14);
            func_ov065_0226797c(&h, buf);
            c = 1;
            k = 0x13;
            b = buf + 0x13;
            a = data_ov065_022903c8 + 0x13;
            for (; k >= 0; k--) {
                v = *a + *b + c;
                *a = v;
                c = v >> 8;
                b--;
                a--;
            }
            seed = v;
            func_01ffa3d4(th);
            j = 0;
        }
        if (buf[j] != 0) {
            out[i] = buf[j];
            i++;
        }
        j++;
    }
}

void func_ov065_02265950(u8 *p, u32 n) {
    Unk_ov065_02265130_Hash h;
    u32 th;
    func_ov065_02267a84(&h);
    th = func_01ffa2ec();
    func_ov065_022679f8(&h, data_ov065_022903c8, 0x14);
    func_ov065_022679f8(&h, p, n);
    func_ov065_022679a4(&h, data_ov065_022903c8);
    func_01ffa3d4(th);
    data_ov065_022903c0 = 1;
}

s32 func_ov065_02265794(Sess *s) {
    Ctx *ctx = s->unk_0c;
    Unk_ov065_02265130_Cert *cert = ctx->unk_7f4;
    s32 cl;
    u32 t;
    u8 *buf;
    u8 *q;
    s32 len;
    if (cert) {
        cl = cert->unk_00;
    } else {
        cl = 0;
    }
    t = func_ov065_02267314();
    ctx->unk_28[0] = t >> 24;
    ctx->unk_28[1] = t >> 16;
    ctx->unk_28[2] = t >> 8;
    ctx->unk_28[3] = t;
    func_ov065_0226599c(ctx->unk_2c, 0x1c);
    buf = (u8 *)data_ov065_0228ebc8(cl + 0x9d);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return 1;
    }
    q = buf + 5;
    q[0] = 2;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x46;
    q[4] = 3;
    q[5] = 0;
    func_02116048(ctx->unk_28, q + 6, 0x20);
    q[0x26] = 0x20;
    if (ctx->unk_00) {
        func_02116048(ctx->unk_00, q + 0x27, 0x20);
        q += 0x47;
        ctx->unk_04 = 1;
    } else {
        func_ov065_0226599c(q + 0x27, 0x1c);
        t = data_ov065_022903c4;
        q[0x43] = t >> 24;
        q[0x44] = t >> 16;
        q[0x45] = t >> 8;
        q += 0x46;
        *q++ = t;
        ctx->unk_00 = (Unk_ov065_02265130_Pms *)func_ov065_0226733c(q - 0x20);
        data_ov065_022903c4++;
        ctx->unk_04 = 0;
    }
    q[0] = ctx->unk_06 >> 8;
    q[1] = ctx->unk_06;
    q += 2;
    *q++ = 0;
    if (ctx->unk_04 == 0) {
        if (cl != 0) {
            q[0] = 0xb;
            q[1] = (cl + 6) >> 16;
            q[2] = (cl + 6) >> 8;
            q[3] = cl + 6;
            q[4] = (cl + 3) >> 16;
            q[5] = (cl + 3) >> 8;
            q[6] = cl + 3;
            q[7] = cl >> 16;
            q[8] = cl >> 8;
            q += 9;
            *q++ = cl;
            func_02116048(cert->unk_04, q, cl);
            q += cl;
        }
        q[0] = 0xe;
        q[1] = 0;
        q[2] = 0;
        q += 3;
        *q++ = 0;
    }
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    func_ov065_022679f8(ctx->unk_2c0, buf + 5, len);
    func_ov065_02267480(ctx->unk_378, buf + 5, len);
    func_ov065_0226242c(buf, len + 5, 0, 0, s);
    data_ov065_0228ebd0(buf);
    return ctx->unk_04;
}

void func_ov065_02265680(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *b;
    b = (u8 *)data_ov065_0228ebc8(0x83);
    if (b == 0) {
        ctx->unk_429 = 9;
        return;
    }
    b[0] = 0x14;
    b[1] = 3;
    b[2] = 0;
    b[3] = 0;
    b[4] = 1;
    b[5] = 1;
    func_02115fb4(ctx->unk_1a0, 0, 8);
    b[6] = 0x16;
    b[7] = 3;
    b[8] = 0;
    b[9] = 0;
    b[10] = 0x28;
    b[11] = 0x14;
    b[12] = 0;
    b[13] = 0;
    b[14] = 0x24;
    func_02116048(ctx->unk_378, ctx->unk_3d0, 0x58);
    func_ov065_02266264(ctx, b + 0xf, 0);
    func_02116048(ctx->unk_3d0, ctx->unk_378, 0x58);
    func_02116048(ctx->unk_2c0, ctx->unk_31c, 0x5c);
    func_ov065_022661c0(ctx, b + 0x1f, 0);
    func_02116048(ctx->unk_31c, ctx->unk_2c0, 0x5c);
    func_ov065_022679f8(ctx->unk_2c0, b + 0xb, 0x28);
    func_ov065_02267480(ctx->unk_378, b + 0xb, 0x28);
    func_ov065_0226242c(b, func_ov065_02265dac(ctx, b + 6) + 6, 0, 0, s);
    data_ov065_0228ebd0(b);
}

void func_ov065_0226555c(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *buf;
    u8 *q;
    u32 t;
    s32 len;
    u32 i;
    u16 *tp;
    buf = (u8 *)data_ov065_0228ebc8(0x98);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return;
    }
    q = buf + 9;
    buf[9] = 3;
    q[1] = 0;
    t = func_ov065_02267314();
    ctx->unk_08[0] = t >> 24;
    ctx->unk_08[1] = t >> 16;
    ctx->unk_08[2] = t >> 8;
    ctx->unk_08[3] = t;
    func_ov065_0226599c(&ctx->unk_08[4], 0x1c);
    func_02116048(ctx->unk_08, q + 2, 0x20);
    ctx->unk_00 = (Unk_ov065_02265130_Pms *)func_ov065_02267394(s->unk_1c, s->unk_18);
    if (ctx->unk_00) {
        q[0x22] = 0x20;
        func_02116048(ctx->unk_00, q + 0x23, 0x20);
        q += 0x43;
    } else {
        q += 0x22;
        *q++ = 0;
    }
    i = 0;
    *q++ = 0;
    *q++ = 4;
    tp = data_ov065_0228b44c;
    for (; i < 2; i++) {
        *q++ = *tp >> 8;
        *q++ = *tp;
        tp++;
    }
    q[0] = 1;
    q[1] = 0;
    q += 2;
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    buf[5] = 1;
    buf[6] = (len - 4) >> 16;
    buf[7] = (len - 4) >> 8;
    buf[8] = len - 4;
    func_ov065_0226242c(buf, len + 5, 0, 0, s);
    func_ov065_02267480(ctx->unk_378, buf + 5, len);
    func_ov065_022679f8(ctx->unk_2c0, buf + 5, len);
    data_ov065_0228ebd0(buf);
}

void func_ov065_02265334(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 n;
    s32 cnt;
    u16 *p0;
    u16 *p1;
    u16 *p2;
    u8 *buf1;
    u16 *p3;
    u8 *buf2;
    u8 *q;
    ctx->unk_00->unk_20 = 3;
    ctx->unk_00->unk_21 = 0;
    func_ov065_0226599c(ctx->unk_00->unk_22, 0x2e);
    n = ctx->unk_568;
    cnt = _s32_div_f(n * 2, 2);
    buf1 = (u8 *)data_ov065_0228ebc8(n);
    if (buf1 == 0) {
        ctx->unk_429 = 9;
        return;
    }
    buf1[0] = 0;
    buf1[1] = 2;
    func_ov065_0226599c(buf1 + 2, n - 0x33);
    buf1[n - 0x31] = 0;
    func_02116048(&ctx->unk_00->unk_20, buf1 + n - 0x30, 0x30);
    p0 = (u16 *)data_ov065_0228ebc8(cnt * 8);
    if (p0 == 0) {
        data_ov065_0228ebd0(buf1);
        ctx->unk_429 = 9;
        return;
    }
    p1 = p0 + cnt;
    p2 = p1 + cnt;
    p3 = p2 + cnt;
    func_ov065_02268210(p1, buf1, n, cnt);
    func_ov065_02268210(p2, ctx->unk_56c, ctx->unk_574, cnt);
    func_ov065_02268210(p3, ctx->unk_468, n, cnt);
    if (data_ov065_0228b440 < 0x20) {
        u32 th = data_021fcc2c.unk_04;
        u32 pr = func_0211337c(th);
        func_02113384(th, data_ov065_0228b440);
        func_ov065_02268540(p0, p1, p2, cnt, p3);
        func_02113384(th, pr);
    } else {
        func_ov065_02268540(p0, p1, p2, cnt, p3);
    }
    buf2 = (u8 *)data_ov065_0228ebc8(n + 0x49);
    if (buf2 == 0) {
        data_ov065_0228ebd0(buf1);
        data_ov065_0228ebd0(p0);
        ctx->unk_429 = 9;
        return;
    }
    buf2[0] = 0x16;
    buf2[1] = 3;
    buf2[2] = 0;
    buf2[3] = (n + 4) >> 8;
    buf2[4] = n + 4;
    buf2[5] = 0x10;
    buf2[6] = n >> 16;
    buf2[7] = n >> 8;
    q = buf2 + 9;
    buf2[8] = n;
    if ((n & 1) != 0) {
        *q = p0[_s32_div_f(n, 2)];
        q++;
    }
    {
        s32 i;
        u16 *pp;
        i = _s32_div_f(n, 2) - 1;
        if (i >= 0) {
            pp = p0 + i;
            do {
                *q++ = *pp >> 8;
                *q++ = *pp;
                pp--;
                i--;
            } while (i >= 0);
        }
    }
    func_ov065_0226242c(buf2, n + 9, 0, 0, s);
    func_ov065_02267480(ctx->unk_378, buf2 + 5, (u32)n + 4);
    func_ov065_022679f8(ctx->unk_2c0, buf2 + 5, n + 4);
    data_ov065_0228ebd0(buf2);
    data_ov065_0228ebd0(p0);
    data_ov065_0228ebd0(buf1);
}

s32 func_ov065_02265304(Sess *s) {
    if (func_ov065_02265a5c(s) != 7) {
        return 1;
    }
    if (func_ov065_02265a5c(s) != 6) {
        return 1;
    }
    return 0;
}

s32 func_ov065_02265294(Sess *s) {
    if (func_ov065_02265a5c(s) != 1) {
        return 1;
    }
    if (func_ov065_02265794(s)) {
        func_ov065_02266338(s->unk_0c);
        func_ov065_02265680(s);
        if (func_ov065_02265304(s)) {
            return 1;
        }
    } else {
        if (func_ov065_02265a5c(s) != 5) {
            return 1;
        }
        if (func_ov065_02265304(s)) {
            return 1;
        }
        func_ov065_02265680(s);
    }
    return 0;
}

void func_ov065_02265228(Sess *s) {
    Ctx *ctx = s->unk_0c;
    for (;;) {
        func_ov065_02262968(s);
        ctx->unk_429 = 0;
        ctx->unk_428 = 1;
        func_ov065_02267a84(ctx->unk_2c0);
        func_ov065_0226750c(ctx->unk_378);
        if (func_ov065_02265294(s) == 0) {
            ctx->unk_429 = 8;
            return;
        }
        func_ov065_02262804(s);
        s->unk_18 = s->unk_1a;
        s->unk_1c = s->unk_20;
    }
}

s32 func_ov065_02265188(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 r;
    func_ov065_0226555c(s);
    do {
        r = func_ov065_02265a5c(s);
        if (r == 9) {
            return 1;
        }
    } while (r != 4 && ctx->unk_04 == 0);
    if (ctx->unk_04 != 0) {
        func_ov065_02266338(ctx);
        if (func_ov065_02265304(s)) {
            return 1;
        }
        func_ov065_02265680(s);
    } else {
        ctx->unk_00->unk_54 = s->unk_1c;
        ctx->unk_00->unk_58 = s->unk_18;
        func_ov065_02265334(s);
        func_ov065_0226650c(ctx);
        func_ov065_02266338(ctx);
        func_ov065_02265680(s);
        if (func_ov065_02265304(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 8;
    return 0;
}

s32 func_ov065_02265130(Sess *s) {
    Ctx *ctx = s->unk_0c;
    if (s->unk_08 != 4) {
        if (func_ov065_022628ac(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 0;
    ctx->unk_428 = 0;
    func_ov065_02267a84(ctx->unk_2c0);
    func_ov065_0226750c(ctx->unk_378);
    return func_ov065_02265188(s);
}
}

}

namespace Unk_ov065_0226482c_Ns {


// ov065_009: socket/SSL library: checksum, init, record send/receive buffering (0x0226482c..0x02265074)

struct Unk_ov065_02264a48_Cfg {
    u32 unk_00;
    void *(*unk_04)(u32);
    void (*unk_08)(void *);
    s32 (*unk_0c)(void);
    s32 (*unk_10)(void);
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02264a48_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_02264c44_Ent {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06[0x2e];
    void *unk_34;
};

struct Unk_ov065_02264c44_Sub {
    void *unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov065_02264c44_Thr {
    u8 unk_00[0x68];
    Unk_ov065_02264c44_Thr *unk_68;
    u8 unk_6c[0x38];
    Unk_ov065_02264c44_Sub *unk_a4;
};

struct Unk_ov065_02264c44_Info {
    u32 unk_00;
    Unk_ov065_02264c44_Thr *unk_04;
    Unk_ov065_02264c44_Thr *unk_08;
};

struct Unk_ov065_02264d24_Ent {
    u8 unk_00[0x50];
    s32 unk_50;
    u8 unk_54[6];
    u8 unk_5a;
    u8 unk_5b;
};

struct Unk_ov065_02264d80_Conn {
    u8 unk_000[0x2c0];
    u8 unk_2c0[0xb8];
    u8 unk_378[0xb0];
    u8 unk_428;
    u8 unk_429;
    u8 unk_42a;
    u8 unk_42b[0x3cd];
    u8 *unk_7f8;
    u32 unk_7fc;
    u32 unk_800;
};

struct Unk_ov065_02264d80_Obj {
    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09[3];
    Unk_ov065_02264d80_Conn *unk_0c;
    u8 unk_10[0x34];
    u32 unk_44;
};

extern "C" {
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228b41c;
extern u8 data_ov065_0228ee40[];
extern u8 data_ov065_0228ed80[];
extern u32 data_ov065_0228ebe4;
extern u32 data_ov065_0228ebe8;
extern u32 data_ov065_0228ebec;
extern void (*data_ov065_0228ebcc)(void);
extern u32 data_ov065_0228ebd4;
extern u32 data_ov065_0228eba0;
extern u32 data_ov065_0228ebfc[2];
extern u32 data_ov065_0228ebb0;
extern u8 data_ov065_0228ec58[];
extern Unk_ov065_02264c44_Info data_021fcc2c;
extern Unk_ov065_02264c44_Ent data_ov065_0228f200[8];
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228ebb4;
extern Unk_ov065_02264d24_Ent data_ov065_02290438[4];
extern void *(*data_ov065_0228ebc8)(u32);
extern void *(*data_ov065_0228eba8)(void);
extern s32 (*data_ov065_0228ebac)(void);
extern u32 data_ov065_0228ebbc;
extern u16 data_ov065_0228eb94;
extern u32 data_ov065_0228ebe0;
extern u32 data_ov065_0228ebf0;
extern u32 data_ov065_0228ebb8;
extern u16 data_ov065_0228eb98;
extern u8 data_ov065_0228ebf4[];
extern u8 data_ov065_0228eb8c;
extern Unk_ov065_02264a48_Rng data_ov065_0228ec04;
extern u8 data_ov065_022903c0[];
extern u8 data_ov065_0228fbc0[];

void func_ov065_02262ae4(void);
void func_ov065_02261fd8(void);
u32 func_ov065_02265dac(void *, void *);
u32 func_ov065_0226242c(void *, u32, u32, u32, Unk_ov065_02264d80_Obj *);
u8 *func_ov065_02262708(u32 *, Unk_ov065_02264d80_Obj *);
void func_ov065_02262670(u32, Unk_ov065_02264d80_Obj *);
void func_ov065_02265b9c(void *, void *);
s32 func_ov065_02265d5c(void *, u32, Unk_ov065_02264d80_Obj *);
s32 func_ov065_02265a5c(Unk_ov065_02264d80_Obj *);

u64 func_01ffa6b4(void);
u32 func_01ffa2ec(void);
void func_01ffa3d4(u32);
void func_02000b44(u32);
void func_02113384(void *, u32);
void func_02113788(void *);
void func_021138d0(void *);
s32 func_02113774(void *);
void func_0211366c(void *);
void func_02113498(void);
void func_021132e0(void);
void func_02113a70(void *, void *, u32, void *, u32, u32);
void func_02115640(void *);
void *func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);

u32 func_ov065_02264900(u8 *p, u32 len, u32 sum);
s32 func_ov065_02264848(u32 a);
void func_ov065_02264c44(u32 a);
s32 func_ov065_02264a08(void);
void func_ov065_02264d0c(void);
void func_ov065_02264f28(Unk_ov065_02264d80_Obj *o);
s32 func_ov065_02264c18(void);
void func_ov065_02264c1c(void);
}

extern "C" {

u8 *func_ov065_02265074(u32 *out, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u8 **pb;
    if (c->unk_7f8 != 0 && c->unk_42a == 0) {
        if (func_ov065_02265d5c(c->unk_7f8 + c->unk_800, c->unk_7fc - c->unk_800, o) != 0) {
            data_ov065_0228ebd0(c->unk_7f8);
            c->unk_7f8 = 0;
            *out = 0;
            return 0;
        }
        func_ov065_02265b9c(c, c->unk_7f8);
        if (c->unk_42a == 0) {
            c->unk_7f8 = 0;
        }
    }
    pb = &c->unk_7f8;
    if (*pb == 0) {
        do {
            if (func_ov065_02265a5c(o) == 9) {
                *out = 0;
                return 0;
            }
        } while (*pb == 0);
    }
    *out = c->unk_7fc - c->unk_800;
    return c->unk_7f8 + c->unk_800;
}

void func_ov065_0226502c(u32 n, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (n >= c->unk_7fc - c->unk_800) {
        if (c->unk_7f8 != 0) {
            data_ov065_0228ebd0(c->unk_7f8);
        }
        c->unk_7f8 = 0;
    } else {
        c->unk_800 += n;
    }
}

void func_ov065_02264f28(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    u32 len;
    u8 *src;
    BOOL flag;
    if (c->unk_7f8 == 0) {
        if (o->unk_44 < 5) {
            return;
        }
        src = func_ov065_02262708(&len, o);
        len = (src[3] << 8) + src[4] + 5;
        if (len > 0x4805) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7f8 = (u8 *)data_ov065_0228ebc8(len);
        if (c->unk_7f8 == 0) {
            c->unk_429 = 9;
            return;
        }
        c->unk_7fc = len;
        c->unk_800 = 0;
        c->unk_42a = 0;
    } else {
        if (o->unk_44 == 0) {
            return;
        }
    }
    src = func_ov065_02262708(&len, o);
    {
        u32 avail = c->unk_7fc - c->unk_800;
        if (len >= avail) {
            len = avail;
            flag = TRUE;
        } else {
            flag = FALSE;
        }
    }
    func_02116048(src, c->unk_7f8 + c->unk_800, len);
    func_ov065_02262670(len, o);
    if (flag) {
        func_ov065_02265b9c(c, c->unk_7f8);
        if (c->unk_42a != 0) {
            return;
        }
        c->unk_7f8 = 0;
        return;
    }
    c->unk_800 += len;
    return;
}

s32 func_ov065_02264eac(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_7f8 == 0 || c->unk_42a == 0) {
        func_ov065_02264f28(o);
    }
    if (c->unk_7f8 != 0 && c->unk_42a != 0) {
        return c->unk_7fc - c->unk_800;
    }
    if (c->unk_7f8 == 0) {
        if (o->unk_08 != 4 || c->unk_429 == 9) {
            return -1;
        }
    }
    return 0;
}

u32 func_ov065_02264dd4(u8 *p1, u32 n1, u8 *p2, u32 n2, Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    s32 total = n1 + n2;
    u32 c2;
    u32 sent = 0;
    u32 z1 = 0, z2 = 0, z3 = 0;
    u8 *rec;
    s32 chunk;
    for (;;) {
        u32 c1, len;
        if (total > 0xb4f) {
            chunk = 0xb4f;
        } else {
            chunk = total;
        }
        rec = (u8 *)data_ov065_0228ebc8(chunk + 0x19);
        if (rec == 0) {
            break;
        }
        c1 = n1 >= chunk ? chunk : n1;
        c2 = chunk - c1;
        func_02116048(p1, rec + 5, c1);
        p1 += c1;
        n1 -= c1;
        func_02116048(p2, rec + 5 + c1, c2);
        p2 += c2;
        rec[0] = 0x17;
        rec[1] = 3;
        rec[2] = z1;
        rec[3] = chunk >> 8;
        rec[4] = chunk;
        len = func_ov065_02265dac(c, rec);
        if (func_ov065_0226242c(rec, len, z2, z2, o) < len) {
            chunk = z3;
        }
        data_ov065_0228ebd0(rec);
        total -= chunk;
        sent += chunk;
        if (total == 0) {
            break;
        }
        if (chunk == 0) {
            break;
        }
    }
    return sent;
}

void func_ov065_02264d80(Unk_ov065_02264d80_Obj *o) {
    Unk_ov065_02264d80_Conn *c = o->unk_0c;
    if (c->unk_429 == 8) {
        u8 b[32];
        u32 n;
        b[0] = 0x15;
        b[1] = 3;
        b[2] = 0;
        b[3] = 0;
        b[4] = 2;
        b[5] = 1;
        b[6] = 0;
        n = func_ov065_02265dac(c, b);
        func_ov065_0226242c(b, n, 0, 0, o);
    }
    c->unk_429 = 0;
}

void func_ov065_02264d58(u32 v) {
    func_02000b44(0x2000c14);
    Unk_ov065_02264c44_Sub *s = ((Unk_ov065_02264c44_Thr *)data_021fcc2c.unk_04)->unk_a4;
    if (s != 0) {
        s->unk_09 = v;
    }
}

void func_ov065_02264d24(s32 now) {
    s32 i;
    Unk_ov065_02264d24_Ent *e;
    for (i = 0, e = data_ov065_02290438; i < 4; e++, i++) {
        if (e->unk_5a != 0) {
            if (now - e->unk_50 > 0xef) {
                e->unk_5a = 0;
            }
        }
    }
}

void func_ov065_02264d0c(void) {
    func_02115fb4(data_ov065_02290438, 0, 0x170);
}
}

}

extern "C" u8 data_ov065_022903dc[0x5c] = {0};
extern "C" u8 data_ov065_022903c8[0x14] = {0};
extern "C" u32 data_ov065_022903c4 = 0;
extern "C" u8 data_ov065_0228b444[4] = {0xff, 0xff, 0xff, 0};
extern "C" u8 data_ov065_0228b448[4] = {0x55, 4, 3, 0};
extern "C" u32 data_ov065_0228b440 = 0xffffffff;
extern "C" u16 data_ov065_0228b44c[2] = {4, 5};
extern "C" u8 data_ov065_0228b450[8] = {0x55, 8, 1, 1, 0, 0, 0, 0};
extern "C" u8 data_ov065_0228b458[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 1, 0, 0, 0};
extern "C" u8 data_ov065_0228b464[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 4, 0, 0, 0};
extern "C" u8 data_ov065_022903c0 = 0;
extern "C" u8 data_ov065_0228b470[12] = {0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 1, 1, 5, 0, 0, 0};
extern "C" char *data_ov065_0228b47c[6] = {(char *)data_ov065_0228b444, (char *)data_ov065_0228b458, (char *)data_ov065_0228b450, (char *)data_ov065_0228b464, (char *)data_ov065_0228b470, (char *)data_ov065_0228b448};
