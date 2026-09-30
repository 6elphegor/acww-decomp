// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov065_02262240_Sess;

struct Unk_ov065_02262240_Thr {
    u8 pad_00[0x68];
    Unk_ov065_02262240_Thr *next;
    u8 pad_6c[0xa4 - 0x6c];
    Unk_ov065_02262240_Sess *sess;
};

struct Unk_ov065_02262240_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 state;
    u8 unk_09;
    u16 unk_0a;
    u8 pad_0c[4];
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
    u32 unk_24;
    u32 unk_28;
    u16 unk_2c;
    u16 unk_2e;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3c;
    u8 *unk_40;
    u32 unk_44;
    u32 unk_48;
    u8 *unk_4c;
    u8 pad_50[0x64 - 0x50];
};

struct Unk_ov065_02262240_Os {
    u32 unk_00;
    Unk_ov065_02262240_Thr *cur;
    Unk_ov065_02262240_Thr *list;
};

typedef Unk_ov065_02262240_Sess Sess;
typedef Unk_ov065_02262240_Thr Thr;

extern "C" {
extern Unk_ov065_02262240_Os data_021fcc2c;
extern Sess data_ov065_0228ed1c;
extern u8 data_ov065_0228ee40[];
extern u32 data_ov065_0228b418;
extern u32 data_ov065_0228ebd8;
extern u8 data_ov065_0228ebf4[];
extern u8 data_ov065_0228eb8c;
extern u16 data_ov065_0228eb94;
extern u8 data_ov065_0228ec3e[];

// main module
u64 func_01ffa6b4();
void func_02115fb4(void *, u32, u32);
void func_02116048(void *, void *, u32);
void func_0211366c(u32);

// same overlay, out of range
s32 func_ov065_0226439c(u32);
u32 func_ov065_0226482c(u32);
s32 func_ov065_02264440(u32);
s32 func_ov065_022647e0(u32);
u32 func_ov065_022648d4(u8 *, u32);
u32 func_ov065_022648ec(u32);
u32 func_ov065_02264900(u8 *, u32, u32);
s32 func_ov065_02264760(u8 *, u8 *);
s32 func_ov065_02264298(u8 *, u32, u32);
s32 func_ov065_02264718(u8 *, u32, u32, u32);
s32 func_ov065_02263f98(u8 *, u32, u32, u32, u32, u32);

// in range
void func_ov065_02263578(u8 *, u8 *, Sess *);
void func_ov065_02263618(u8 *, u8 *, u32, u32);
void func_ov065_022636e8(Sess *, u32);
void func_ov065_022636f4(Sess *, u32);
void func_ov065_02263700(Sess *, u32, u32);
s32 func_ov065_02263750(u32);
void func_ov065_02263770(u8 *, Sess *);
Sess *func_ov065_022637d0(u8 *, u8 *);
s32 func_ov065_0226381c(u8 *, u8 *, Sess *);
Sess *func_ov065_0226389c(u8 *, u8 *);
void func_ov065_02263924(u8 *, u8 *, u32);
s32 func_ov065_022639c4(u32, u32);
void func_ov065_022639e0(u8 *, u8 *, u32);
void func_ov065_02263a88(u8 *, u8 *, u32);
void func_ov065_02263b28(u8 *, u32);
void func_ov065_02263c14(u8 *);
void func_ov065_02263c90(u8 *, u32, Sess *, u32, u32);
void func_ov065_02263e4c(u8 *, u32, Sess *);
}

#define BS16(x) ((u16)((((s32)(x)) >> 8) | (((s32)(x)) << 8)))

static inline u32 Swap32(u8 *p) {
    u32 hi = BS16(*(u16 *)(p));
    u32 lo = BS16(*(u16 *)(p + 2));
    return (hi << 16) | lo;
}

void func_ov065_02263578(u8 *a, u8 *b, Sess *s) {
    s->state = 3;
    s->unk_10 = (u32)(func_01ffa6b4() >> 16);
    s->unk_14 = Swap32(a + 0x10);
    s->unk_18 = BS16(*(u16 *)b);
    s->unk_1c = Swap32(a + 0xc);
    s->unk_24 = Swap32(b + 4) + 1;
    func_ov065_02263770(b, s);
    func_ov065_02263700(s, 0x12, (u16)((a[5] << 8) + 1));
}

void func_ov065_02263618(u8 *a, u8 *b, u32 c, u32 d) {
    Sess *g = &data_ov065_0228ed1c;
    func_02115fb4(g, 0, 0x64);
    g->unk_0a = BS16(*(u16 *)(b + 2));
    g->unk_18 = BS16(*(u16 *)b);
    g->unk_1c = Swap32(a + 0xc);
    if ((b[0xd] & 0x10) != 0) {
        g->unk_28 = Swap32(b + 8);
        func_ov065_02263700(g, 4, d);
        return;
    }
    g->unk_28 = 0;
    g->unk_24 = c + Swap32(b + 4);
    if ((b[0xd] & 3) != 0) {
        g->unk_24 = g->unk_24 + 1;
    }
    func_ov065_02263700(g, 0x14, d);
}

void func_ov065_022636e8(Sess *s, u32 x) {
    func_ov065_02263700(s, 0x11, x);
}

void func_ov065_022636f4(Sess *s, u32 x) {
    func_ov065_02263700(s, 0x10, x);
}

void func_ov065_02263700(Sess *s, u32 a, u32 b) {
    if (func_ov065_02263750(s->unk_1c) != 0 || (u8 *)data_021fcc2c.cur != data_ov065_0228ee40) {
        func_ov065_02263c90(0, 0, s, a, b);
    } else {
        func_ov065_0226439c(func_ov065_0226482c(s->unk_1c));
    }
}

s32 func_ov065_02263750(u32 x) {
    u32 r = func_ov065_0226482c(x);
    if (r == 0) {
        return 1;
    }
    return func_ov065_02264440(r);
}

void func_ov065_02263770(u8 *a, Sess *s) {
    s32 n;
    u8 *p;
    s->unk_2e = 0x218;
    n = (s32)(a[0xc] & 0xf0) / 4 - 0x14;
    p = a + 0x14;
    while (n--) {
        u32 k = *p++;
        if (k == 0) {
            break;
        }
        if (k == 1) {
            continue;
        }
        if (k == 2) {
            s->unk_2e = (p[1] << 8) | p[2];
            p += 3;
            n -= 3;
        } else {
            s32 t = *p - 1;
            n -= t;
            p += t;
        }
    }
}

Sess *func_ov065_022637d0(u8 *a, u8 *b) {
    Sess *s;
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        s = t->sess;
        if (s != 0 && s->unk_00 != 0 && func_ov065_0226381c(a, b, s) != 0) {
            return s;
        }
    }
    return 0;
}

s32 func_ov065_0226381c(u8 *a, u8 *b, Sess *s) {
    s32 result = 0;
    BOOL c = FALSE;
    BOOL bb = FALSE;
    BOOL aa = FALSE;
    if (s->state != 10 && s->state != 11) {
        aa = TRUE;
    }
    if (aa) {
        if (s->unk_0a == BS16(*(u16 *)(b + 2))) {
            bb = TRUE;
        }
    }
    if (bb) {
        if (s->unk_18 == BS16(*(u16 *)b)) {
            c = TRUE;
        }
    }
    if (c) {
        if (s->unk_1c == Swap32(a + 0xc)) {
            result = 1;
        }
    }
    return result;
}

Sess *func_ov065_0226389c(u8 *a, u8 *b) {
    Sess *s;
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        s = t->sess;
        if (s != 0 && s->unk_00 != 0 && s->state == 1 && s->unk_0a == BS16(*(u16 *)(b + 2))
            && (s->unk_18 == 0 || s->unk_18 == BS16(*(u16 *)b))
            && (s->unk_1c == 0 || s->unk_1c == Swap32(a + 0xc))) {
            return s;
        }
    }
    return 0;
}

void func_ov065_02263924(u8 *a, u8 *b, u32 c) {
    if (func_ov065_022648d4(b, c) == 0xffff) {
        if (func_ov065_022639c4(Swap32(a + 0xc), Swap32(a + 0x10)) != 0) {
            switch (b[0]) {
            case 0:
                func_ov065_022639e0(a, b, c);
                break;
            case 8:
                if (data_ov065_0228b418 != 0) {
                    func_ov065_02263a88(a, b, c);
                }
                break;
            }
        }
    }
}

s32 func_ov065_022639c4(u32 x, u32 y) {
    if (x != 0 && x != -1 && y != 0 && y != -1) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_022639e0(u8 *a, u8 *b, u32 c) {
    Thr *t;
    for (t = data_021fcc2c.list; t != 0; t = t->next) {
        Sess *s = t->sess;
        if (s != 0 && s->unk_00 != 0 && s->state == 11 && (u16)s->unk_00 == *(u16 *)(b + 4)
            && s->unk_0a == *(u16 *)(b + 6) && s->unk_44 == 0 && s->unk_1c == Swap32(a + 0xc)) {
            u32 m = s->unk_3c;
            c -= 8;
            if (c > m) {
                s->unk_44 = m;
            } else {
                s->unk_44 = c;
            }
            func_02116048(b + 8, s->unk_40, s->unk_44);
            if (s->unk_04 == 3) {
                s->unk_04 = 0;
                func_0211366c(s->unk_00);
            }
            return;
        }
    }
}

void func_ov065_02263a88(u8 *a, u8 *b, u32 c) {
    u32 k = Swap32(a + 0xc);
    if (func_ov065_022647e0(k) == 0) {
        k = func_ov065_0226482c(k);
        if (k != 0) {
            if (func_ov065_02264440(k) == 0) {
                func_ov065_0226439c(k);
                return;
            }
            b[0] = 0;
            *(u16 *)(b + 2) = 0;
            u32 r = func_ov065_022648d4(b, c);
            *(u16 *)(b + 2) = BS16(r);
            func_ov065_02263f98(b, c, 0, 0, Swap32(a + 0xc), 1);
        }
    }
}

void func_ov065_02263b28(u8 *a, u32 len) {
    if (len >= 0x1c && func_ov065_02264760(a + 8, data_ov065_0228ebf4) != 0 && *(volatile u32 *)&data_ov065_0228ebd8 != 0
        && *(u16 *)a == 0x100 && *(u16 *)(a + 2) == 8 && *(u16 *)(a + 4) == 0x406) {
        u32 t = BS16(*(u16 *)(a + 6));
        if (t != 1) {
            if (t != 2) {
                return;
            }
        }
        {
            u32 x = Swap32(a + 0xe);
            u32 g = data_ov065_0228ebd8;
            BOOL k7;
            BOOL k4;
            if (x == g) {
                k7 = TRUE;
            } else {
                k7 = FALSE;
            }
            if (g == Swap32(a + 0x18)) {
                k4 = TRUE;
            } else {
                k4 = FALSE;
            }
            if (!k7) {
                func_ov065_02264298(a + 8, x, k4);
            }
            if (t == 1 && k4) {
                func_ov065_02263c14(a);
                return;
            }
            if (t == 2 && k4 && k7) {
                data_ov065_0228eb8c = 1;
            }
        }
    }
}

void func_ov065_02263c14(u8 *a) {
    *(u16 *)(a + 6) = 0x200;
    func_02116048(a + 8, a + 0x12, 10);
    func_02116048(data_ov065_0228ebf4, a + 8, 6);
    *(u16 *)(a + 0xe) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(a + 0x10) = BS16((u16)data_ov065_0228ebd8);
    func_02116048(a + 0x12, a - 0xe, 6);
    func_02116048(data_ov065_0228ebf4, a - 8, 6);
    func_ov065_02264718(a - 0xe, 0x2a, 0, 0);
}

void func_ov065_02263c90(u8 *x, u32 y, Sess *s, u32 flags, u32 z) {
    u8 *p;
    u32 hl;
    u32 f2;
    if (s->state != 0) {
        if ((u8 *)data_021fcc2c.cur == data_ov065_0228ee40) {
            p = data_ov065_0228ec3e;
        } else {
            p = s->unk_4c + 0x22;
        }
        f2 = flags & 2;
        if (f2 != 0) {
            hl = 0x18;
        } else {
            hl = 0x14;
        }
        *(u16 *)(p - 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
        *(u16 *)(p - 0xa) = BS16((u16)data_ov065_0228ebd8);
        *(u16 *)(p - 8) = BS16((u16)(s->unk_1c >> 16));
        *(u16 *)(p - 6) = BS16((u16)s->unk_1c);
        *(u16 *)(p - 4) = 0x600;
        *(u16 *)(p - 2) = BS16((u16)(hl + y));
        *(u16 *)(p) = BS16(s->unk_0a);
        *(u16 *)(p + 2) = BS16(s->unk_18);
        *(u16 *)(p + 4) = BS16((u16)(s->unk_28 >> 16));
        *(u16 *)(p + 6) = BS16((u16)s->unk_28);
        *(u16 *)(p + 8) = BS16((u16)(s->unk_24 >> 16));
        *(u16 *)(p + 0xa) = BS16((u16)s->unk_24);
        p[0xc] = (hl >> 2) << 4;
        p[0xd] = flags;
        *(u16 *)(p + 0xe) = BS16((u16)(s->unk_3c - s->unk_44));
        *(u16 *)(p + 0x10) = 0;
        *(u16 *)(p + 0x12) = BS16(*(u16 *)&z);
        if (f2 != 0) {
            *(u16 *)(p + 0x14) = BS16((u16)((data_ov065_0228eb94 + 0x2040000U) >> 16));
            *(u16 *)(p + 0x16) = BS16((u16)(data_ov065_0228eb94 + 0x2040000U));
        }
        u32 v = func_ov065_022648ec((u16)func_ov065_02264900(x, y, func_ov065_02264900(p - 0xc, hl + 0xc, 0)));
        *(u16 *)(p + 0x10) = BS16(v);
        func_ov065_02263f98(p, hl, (u32)x, y, s->unk_1c, 6);
        s->unk_28 = s->unk_28 + y;
        flags &= 3;
        if (flags != 0) {
            s->unk_28 = s->unk_28 + 1;
        }
    }
}

void func_ov065_02263e4c(u8 *a, u32 b, Sess *s) {
    u8 *q = s->unk_4c;
    u8 *p = q + 0x22;
    *(u16 *)(p - 0xc) = BS16((u16)(data_ov065_0228ebd8 >> 16));
    *(u16 *)(p - 0xa) = BS16((u16)data_ov065_0228ebd8);
    *(u16 *)(p - 8) = BS16((u16)(s->unk_1c >> 16));
    *(u16 *)(p - 6) = BS16((u16)s->unk_1c);
    *(u16 *)(p - 4) = 0x1100;
    *(u16 *)(p + 4) = BS16((u16)(b + 8));
    *(u16 *)(p - 2) = *(u16 *)(p + 4);
    *(u16 *)(p + 2) = BS16(s->unk_18);
    *(u16 *)(q + 0x22) = BS16(s->unk_0a);
    *(u16 *)(p + 6) = 0;
    u32 v = func_ov065_022648ec((u16)func_ov065_02264900(a, b, func_ov065_02264900(p - 0xc, 0x14, 0)));
    *(u16 *)(p + 6) = BS16(v);
    func_ov065_02263f98(p, 8, (u32)a, b, s->unk_1c, 0x11);
}
