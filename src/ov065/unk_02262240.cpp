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
    Unk_ov065_02262240_Thr *unk_00;
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
    u8 pad_24[4];
    u32 unk_28;
    u16 unk_2c;
    u16 unk_2e;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u8 pad_3c[4];
    u8 *unk_40;
    u32 unk_44;
    u8 pad_48[0x5c - 0x48];
    u8 *unk_5c;
    u32 unk_60;
};

struct Unk_ov065_02262240_Os {
    u32 unk_00;
    Unk_ov065_02262240_Thr *cur;
    Unk_ov065_02262240_Thr *list;
};

struct Unk_ov065_02262a54_Rng {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

typedef Unk_ov065_02262240_Sess Sess;
typedef Unk_ov065_02262240_Thr Thr;

extern "C" {
extern Unk_ov065_02262240_Os data_021fcc2c;
extern void (*data_ov065_0228eba8)();
extern s32 (*data_ov065_0228ebac)();
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228ebd8;
extern u8 data_ov065_0228eb8c;
extern u8 data_ov065_0228eb88;
extern u16 data_ov065_0228eb94;
extern u16 data_ov065_0228eb98;
extern Unk_ov065_02262a54_Rng data_ov065_0228ec04;

// main module
u64 func_01ffa6b4();
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_021132e0(s32);
void func_02113498();
void func_02113720(void *);
void func_021289b4(void *, void *, u32);
s64 func_02133100(s64, s64);

// same overlay, out of range
s32 func_ov065_0226439c(u32);
s32 func_ov065_02264c44(u32);
s32 func_ov065_02264c20();
s32 func_ov065_02264eac(Sess *);
s32 func_ov065_02263e4c(u8 *, u32, Sess *);
s32 func_ov065_02263f24(u8 *, u32, Sess *);
s32 func_ov065_02264dd4(u8 *, u32, u8 *, u32, Sess *);
s32 func_ov065_02263c90(u8 *, u32, Sess *, u32, u32);
s32 func_ov065_0226502c(u32, Sess *);
s32 func_ov065_02265074(u32 *, Sess *);
s32 func_ov065_022636f4(Sess *, u32);
s32 func_ov065_022636e8(Sess *, u32);
s32 func_ov065_02263700(Sess *, u32, u32);
s32 func_ov065_02264d80(Sess *);
s32 func_ov065_02265130(Sess *);
s32 func_ov065_02265228(Sess *);
u8 *func_ov065_0226450c(u32 *);
s32 func_ov065_022644cc();
s32 func_ov065_02263b28(u8 *, u32);
s32 func_ov065_02264788(u32);
u32 func_ov065_022648d4(u8 *, u32);
s32 func_ov065_02264298(u8 *, u32, u32);
s32 func_ov065_02262e64(u8 *, u8 *, u32);
s32 func_ov065_02263924(u8 *, u8 *, u32);
s32 func_ov065_02262fbc(u8 *, u8 *, u32);
u8 *func_ov065_02262c5c(u8 *, s32 *);

// in range
void func_ov065_02262240();
void func_ov065_022622c0();
s32 func_ov065_022622ec();
u32 func_ov065_02262334(u32, u32);
u32 func_ov065_022623a4(u8 *, u32, u8 *, u32);
u32 func_ov065_0226242c(u8 *, u32, u8 *, u32, Sess *);
void func_ov065_02262580(u8 *, u32, u8 *, u32, Sess *, u32);
u32 func_ov065_022625ac(u8 *, u32, Sess *, u32);
void func_ov065_02262640(u32);
void func_ov065_02262670(u32, Sess *);
u8 *func_ov065_022626b8(u32 *);
u8 *func_ov065_02262708(u32 *, Sess *);
u8 *func_ov065_0226275c(u32 *, Sess *);
void func_ov065_02262788();
void func_ov065_022627d4();
void func_ov065_02262804(Sess *);
u32 func_ov065_02262840(u16 *, u32 *);
s32 func_ov065_02262874();
s32 func_ov065_022628ac(Sess *);
void func_ov065_02262924();
void func_ov065_02262954(u32);
void func_ov065_02262968(Sess *);
void func_ov065_02262984(Thr *);
void func_ov065_02262998();
void func_ov065_022629b0();
void func_ov065_022629d0(u32, u32, u32);
void func_ov065_02262a18();
void func_ov065_02262a34();
void func_ov065_02262a44(Sess *);
u32 func_ov065_02262a54();
u16 func_ov065_02262a80();
void func_ov065_02262ae4();
void func_ov065_02262b30(u8 *, u32);
}

static inline u16 Swap16(u16 v) {
    return (v >> 8) | (v << 8);
}

void func_ov065_02262240() {
    s32 start;
    data_ov065_0228eba8();
    if (data_ov065_0228ebd8 != 0) {
        func_ov065_0226439c(data_ov065_0228ebd8);
        func_021132e0(0x64);
        func_ov065_0226439c(data_ov065_0228ebd8);
        start = (s32)(func_01ffa6b4() >> 16);
        while (data_ov065_0228ebac() != 0 && (s32)(func_01ffa6b4() >> 16) - start < 0x17) {
            if (data_ov065_0228eb8c != 0) {
                func_ov065_02264c44(4);
                return;
            }
            func_021132e0(0x64);
        }
    }
}

void func_ov065_022622c0() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_60 != 0) {
            func_ov065_022623a4(s->unk_5c, s->unk_60, 0, 0);
            s->unk_60 = 0;
        }
    }
}

s32 func_ov065_022622ec() {
    Sess *s = data_021fcc2c.cur->sess;
    s32 r;
    if (s != 0) {
        if (s->unk_09 != 0) {
            r = func_ov065_02264eac(s);
        } else {
            r = s->unk_44;
        }
        if (r == 0) {
            if (s->state != 4 && (u8)(s->state + 0xf6) > 1) {
                return -1;
            }
        }
        return r;
    }
    return 0;
}

u32 func_ov065_02262334(u32 a, u32 b) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        u32 r;
        if (s->unk_60 != 0) {
            r = func_ov065_022623a4(s->unk_5c, s->unk_60, (u8 *)a, b);
            if (r < s->unk_60) {
                func_021289b4(s->unk_5c, s->unk_5c + r, s->unk_60 - r);
                s->unk_60 = s->unk_60 - r;
                return 0;
            }
            r = r - s->unk_60;
            s->unk_60 = 0;
            return r;
        }
        return func_ov065_022623a4((u8 *)a, b, 0, 0);
    }
    return 0;
}

u32 func_ov065_022623a4(u8 *a, u32 b, u8 *c, u32 d) {
    u32 r;
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        u8 st = s->state;
        if (st == 10) {
            if (b != 0) {
                func_ov065_02263e4c(a, b, s);
            }
            if (d != 0) {
                func_ov065_02263e4c(c, d, s);
            }
            r = b + d;
        } else if (st == 11) {
            if (b != 0) {
                func_ov065_02263f24(a, b, s);
            }
            if (d != 0) {
                func_ov065_02263f24(c, d, s);
            }
            r = b + d;
        } else {
            if (s->unk_09 != 0) {
                r = func_ov065_02264dd4(a, b, c, d, s);
            } else {
                r = func_ov065_0226242c(a, b, c, d, s);
            }
        }
        if (data_ov065_0228eb88 == 0) {
            return r;
        }
    }
    return 0;
}

u32 func_ov065_0226242c(u8 *a, u32 b, u8 *c, u32 d, Sess *s) {
    s32 total = 0;
    u32 prev;
    s32 now;
    s32 t1;
    u32 sent;
    u32 flag;
    s->unk_34 = 0;
    flag = 0;
    now = (s32)(func_01ffa6b4() >> 16);
    while (data_ov065_0228ebac() != 0 && b != 0 && s->state == 4 && (s32)(func_01ffa6b4() >> 16) - now < 0x9f) {
        prev = s->unk_28;
        func_ov065_02262580(a, b, c, d, s, flag);
        t1 = (s32)(func_01ffa6b4() >> 16);
        for (;;) {
            func_ov065_02264c20();
            if (data_ov065_0228ebac() == 0) break;
            if (s->state != 4) break;
            if (s->unk_28 == s->unk_30) break;
            if ((s32)(func_01ffa6b4() >> 16) - t1 >= 0xf) break;
            if (flag != 0 && s->unk_2c != 0) break;
        }
        sent = s->unk_30 - prev;
        total += sent;
        if (sent != 0) {
            now = (s32)(func_01ffa6b4() >> 16);
        }
        s->unk_28 = s->unk_30;
        if (s->state == 4 && s->unk_2c == 0 && sent == 0) {
            if (flag == 0) {
                t1 = (s32)(func_01ffa6b4() >> 16);
                while (data_ov065_0228ebac() != 0 && (s32)(func_01ffa6b4() >> 16) - t1 < 0xf) {
                    func_ov065_02264c20();
                    if (s->unk_2c != 0) break;
                }
                if (s->unk_2c == 0) {
                    flag = 1;
                }
            }
        } else {
            flag = 0;
        }
        if (sent >= b) {
            u32 x = sent - b;
            a = c + x;
            b = d - x;
            c = 0;
            d = 0;
        } else {
            a = a + sent;
            b = b - sent;
        }
    }
    return total;
}

void func_ov065_02262580(u8 *a, u32 b, u8 *c, u32 d, Sess *s, u32 flag) {
    if (func_ov065_022625ac(a, b, s, flag) != 0) {
        if (d != 0) {
            func_ov065_022625ac(c, d, s, 0);
        }
    }
}

u32 func_ov065_022625ac(u8 *a, u32 b, Sess *s, u32 flag) {
    u32 r4;
    u32 win;
    u32 cnt;
    u32 budget;
    if (flag != 0) {
        win = 1;
    } else {
        win = s->unk_2c;
    }
    cnt = s->unk_34;
    budget = cnt * 2 + 4;
    while (b != 0 && s->state == 4) {
        r4 = s->unk_2e;
        if (r4 >= win) r4 = win;
        if (data_ov065_0228eb94 < r4) r4 = data_ov065_0228eb94;
        if (flag == 0) r4 &= ~1;
        if (b < r4) r4 = b;
        {
            u32 t = budget + (s->unk_34 - cnt);
            cnt = s->unk_34;
            budget = t - 1;
            if (t == 0) r4 = 0;
        }
        if (r4 == 0) break;
        win -= r4;
        func_ov065_02263c90(a, r4, s, 0x18, 0);
        func_02113498();
        a += r4;
        b -= r4;
    }
    return r4;
}

void func_ov065_02262640(u32 a) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_0226502c(a, s);
            return;
        }
        func_ov065_02262670(a, s);
    }
}

void func_ov065_02262670(u32 a, Sess *s) {
    u32 ints = func_01ffa2ec();
    u32 n = s->unk_44;
    if (a >= n) {
        s->unk_44 = 0;
    } else {
        u8 *p = s->unk_40;
        n -= a;
        s->unk_44 = n;
        func_021289b4(p, p + a, n);
    }
    func_01ffa3d4(ints);
    if (s->state != 10 && s->state != 11 && s->unk_44 == 0) {
        func_ov065_022636f4(s, 0x1b);
    }
}

u8 *func_ov065_022626b8(u32 *out) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if ((u8)(s->state + 0xf6) <= 1) {
            return func_ov065_0226275c(out, s);
        }
        if (s->unk_09 != 0) {
            return (u8 *)func_ov065_02265074(out, s);
        }
        return func_ov065_02262708(out, s);
    }
    *out = 0;
    return 0;
}

u8 *func_ov065_02262708(u32 *out, Sess *s) {
    if (s->unk_44 == 0 && s->state == 4) {
        while (s->unk_44 == 0 && s->state == 4) {
            s->unk_04 = 2;
            func_02113720(0);
        }
    } else {
        func_02113498();
    }
    *out = s->unk_44;
    if (*out != 0) {
        return s->unk_40;
    }
    return 0;
}

u8 *func_ov065_0226275c(u32 *out, Sess *s) {
    while (s->unk_44 == 0) {
        s->unk_04 = 3;
        func_02113720(0);
    }
    *out = s->unk_44;
    return s->unk_40;
}

void func_ov065_02262788() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s32 t = (s32)(func_01ffa6b4() >> 16);
        while (data_ov065_0228ebac() != 0 && s->state != 0 && (s32)(func_01ffa6b4() >> 16) - t < 0x27) {
            func_ov065_02264c20();
        }
    }
}

void func_ov065_022627d4() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_02264d80(s);
        } else {
            func_ov065_02262804(s);
        }
    }
}

void func_ov065_02262804(Sess *s) {
    func_02113498();
    u8 st = s->state;
    if ((u8)(st + 0xfd) <= 1) {
        func_ov065_022636e8(s, 0x19);
        s->state = 7;
    } else if (st != 0) {
        func_ov065_022636f4(s, 0x1a);
    }
}

u32 func_ov065_02262840(u16 *a, u32 *b) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->state == 4 || s->state == 10) {
            if (a != 0) {
                *a = s->unk_18;
            }
            if (b != 0) {
                *b = s->unk_14;
            }
            return s->unk_1c;
        }
    }
    return 0;
}

s32 func_ov065_02262874() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            return func_ov065_02265130(s);
        }
        return func_ov065_022628ac(s);
    }
    return 1;
}

s32 func_ov065_022628ac(Sess *s) {
    u32 i;
    u32 seed = func_ov065_02262a54();
    i = 0;
    do {
        s->unk_28 = seed;
        s->state = 2;
        s->unk_10 = (u32)(func_01ffa6b4() >> 16);
        func_ov065_02263700(s, 2, 0x18);
        u32 ints = func_01ffa2ec();
        if (data_ov065_0228ebd8 != 0) {
            s->unk_04 = 1;
            func_02113720(0);
        }
        func_01ffa3d4(ints);
        if (s->state == 4) {
            return 0;
        }
        if (data_ov065_0228ebd8 == 0) break;
        i++;
    } while (i < 3);
    return 1;
}

void func_ov065_02262924() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (s->unk_09 != 0) {
            func_ov065_02265228(s);
        } else {
            func_ov065_02262968(s);
        }
    }
}

void func_ov065_02262954(u32 v) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->unk_38 = v;
    }
}

void func_ov065_02262968(Sess *s) {
    s->unk_28 = func_ov065_02262a54();
    s->state = 1;
    s->unk_04 = 1;
    func_02113720(0);
}

void func_ov065_02262984(Thr *t) {
    t->sess = data_021fcc2c.cur->sess;
}

void func_ov065_02262998() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->unk_00 = 0;
    }
}

void func_ov065_022629b0() {
    Thr *c = data_021fcc2c.cur;
    Sess *s = c->sess;
    if (s != 0) {
        s->unk_00 = c;
        s->state = 0;
        s->unk_44 = 0;
        s->unk_60 = 0;
        s->unk_38 = 0;
    }
}

void func_ov065_022629d0(u32 a, u32 b, u32 c) {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        if (c == 0x7f000001) {
            c = data_ov065_0228ebd8;
        }
        s->unk_1a = b;
        s->unk_18 = s->unk_1a;
        s->unk_20 = c;
        s->unk_1c = s->unk_20;
        if (a == 0) {
            s->unk_0a = func_ov065_02262a80();
        } else {
            s->unk_0a = a;
        }
    }
}

void func_ov065_02262a18() {
    Sess *s = data_021fcc2c.cur->sess;
    if (s != 0) {
        s->state = 10;
        s->unk_44 = 0;
    }
}

void func_ov065_02262a34() {
    data_021fcc2c.cur->sess = 0;
}

void func_ov065_02262a44(Sess *s) {
    data_021fcc2c.cur->sess = s;
}

u32 func_ov065_02262a54() {
    Unk_ov065_02262a54_Rng *g = &data_ov065_0228ec04;
    g->unk_00 = func_02133100(g->unk_08, g->unk_00) + g->unk_10;
    return (u32)((u64)g->unk_00 >> 32);
}

u16 func_ov065_02262a80() {
    s32 found;
    do {
        found = 0;
        data_ov065_0228eb98++;
        if (data_ov065_0228eb98 < 0x400 || data_ov065_0228eb98 >= 0x1388) {
            data_ov065_0228eb98 = 0x400;
        }
        Thr *t;
        for (t = data_021fcc2c.list; t != 0; t = t->next) {
            Sess *s = t->sess;
            if (s != 0 && s->unk_00 != 0 && s->unk_0a == data_ov065_0228eb98) {
                found = 1;
                break;
            }
        }
    } while (found != 0);
    return data_ov065_0228eb98;
}

void func_ov065_02262ae4() {
    u32 len;
    for (;;) {
        u8 *p = func_ov065_0226450c(&len);
        if (len > 0x22) {
            u16 t = Swap16(*(u16 *)(p + 0xc));
            switch (t) {
            case 0x800:
                func_ov065_02262b30(p + 0xe, len - 0xe);
                break;
            case 0x806:
                func_ov065_02263b28(p + 0xe, len - 0xe);
                break;
            }
        }
        func_ov065_022644cc();
    }
}

void func_ov065_02262b30(u8 *p, u32 len) {
    s32 flag;
    u32 dst;
    u32 src;
    src = (Swap16(*(u16 *)(p + 0xc)) << 16) | Swap16(*(u16 *)(p + 0xe));
    dst = (Swap16(*(u16 *)(p + 0x10)) << 16) | Swap16(*(u16 *)(p + 0x12));
    if (dst != src) {
        if (func_ov065_02264788(dst) == 0) return;
        if (len < Swap16(*(u16 *)(p + 2))) return;
        if (func_ov065_022648d4(p, (p[0] & 0xf) * 4) != 0xffff) return;
        {
            u16 c = *(u16 *)(p + 0x12);
            u16 d = *(u16 *)(p + 0x10);
            u32 x = (Swap16(d) << 16) | Swap16(c);
            if (data_ov065_0228ebd8 == x) {
                u16 a = *(u16 *)(p + 0xe);
                u16 b = *(u16 *)(p + 0xc);
                func_ov065_02264298(p - 8, (Swap16(b) << 16) | Swap16(a), 0);
            }
        }
    }
    p = func_ov065_02262c5c(p, &flag);
    if (p == 0) return;
    {
        u32 hl = (p[0] & 0xf) * 4;
        u8 *pay = p + hl;
        u32 n = Swap16(*(u16 *)(p + 2)) - hl;
        u8 proto = p[9];
        if (proto == 0x11) {
            func_ov065_02262e64(p, pay, n);
        } else if (data_ov065_0228ebd8 != 0) {
            if (proto == 1) {
                func_ov065_02263924(p, pay, n);
            } else if (proto == 6) {
                func_ov065_02262fbc(p, pay, n);
            }
        }
        if (flag != 0) {
            data_ov065_0228ebd0(p - 0xe);
        }
    }
}
