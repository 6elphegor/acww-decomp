#include "types.h"

struct Unk_0204b9c0_Elem {
    u16 v;
    Unk_0204b9c0_Elem(u32 x);
    Unk_0204b9c0_Elem(u16 *src);
    ~Unk_0204b9c0_Elem();
};

struct Unk_0204c0f4_Date {
    u8 a, b, c, d;
};

struct Unk_0204c1fc_Entry {
    u16 unk_00;
    u8 unk_02;
    s32 unk_04;
    s32 unk_08;
};

struct Unk_0204c084_Data {
    u8 pad[0x15];
    s8 unk_15;
    u8 pad16;
    u8 unk_17;
};

struct Unk_0204c0b8_S {
    u8 pad[0x21];
    s8 unk_21;
};

struct Unk_0204c20c_S {
    u8 pad[0x16];
    u8 unk_16[11];
};

struct Unk_0204c21c_S {
    u8 pad[0xc];
    u8 unk_0c[10];
};

struct Unk_0204c290_W {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

extern "C" {
BOOL func_0204a7d0(u16 *p);
s32 func_0204aa24(u16 *p);
void func_0204b950_dummy();
BOOL func_0204b950(u16 *p);
BOOL func_0204b2d4(u16 *p);
BOOL func_0204b300(u16 *p);
s32 func_0204b2f0(u16 *p);
s32 func_0204b25c(u16 *p);
u32 func_0204f060(s32 x);
void func_0204bab0(u16 *dst, u16 *src);
s32 func_02061cbc(u16 *p);
s32 func_02061ec0(u16 *p);
s32 func_02061dd0(u16 *p);
s32 func_020620a4(u16 *p);
s32 func_02061efc(const Unk_0204b9c0_Elem &p);
s32 func_020aeb80(void *p);
s32 func_020acde8(u32 x);
u16 *func_020acf54(u16 *p);
u16 *func_020986bc(void *p);
void *func_0209750c();
s32 func_020534d8(s32 x);
s32 func_020974f8();
s32 func_0209cf88(Unk_0204c0f4_Date *d);
s32 func_0209cd00(Unk_0204c0f4_Date *a, Unk_0204c0f4_Date *b);
s32 func_0209cf0c();
void func_0203f1e8(s32 *a, s32 *b, u32 c);
s32 func_02072e44(void *p);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_0209d2c0(void *p, s32 n);
s32 func_02063b8c(s32 n);
Unk_0204c290_W *func_0204da0c();
u16 *func_0204ebd8(Unk_0204c290_W *w, s32 cx, s32 cy, s32 ix, s32 iy, u32 z);
void func_0204eb30(Unk_0204c290_W *w, u16 *item, s32 x, s32 y, u32 z);

extern void *data_020cbb18;
extern u8 data_021d7350[];
extern Unk_0204c084_Data data_021ed1b0;
extern Unk_0204c1fc_Entry data_021ed1c8[];

BOOL func_0204b9c0(u16 *p);
s32 func_0204b998(u16 *p);
BOOL func_0204bbe4(u16 *p);
BOOL func_0204bc0c(u16 *p);
BOOL func_0204bbbc(u16 *p);
BOOL func_0204bdc0(u16 *p);
s32 func_0204bde8(u16 *p);
s32 func_0204be70(u16 *p);
s32 func_0204bc34(u16 *p);
BOOL func_0204bd6c(u16 *p);
u8 *func_0204bdb8();
BOOL func_0204c05c(u16 *p);
s32 func_0204c058(u8 *p);
u16 func_0204c040(s32 n);
BOOL func_0204c000(u16 *a, u16 *b);
s32 func_0204be64(u16 *p);
s32 func_0204c188(s32 x, u32 id);
Unk_0204c1fc_Entry *func_0204c1fc(s32 i);
Unk_0204c0f4_Date *func_0204c140(u8 *p, s32 i);

static inline BOOL Unk_0204b9c0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

BOOL func_0204b9c0(u16 *p) { if (Unk_0204b9c0_R(p, 0x12e8, 0x131f)) return TRUE; return FALSE; }

s32 func_0204b9e8(u16 *p) {
    if (func_0204b9c0(p)) {
        switch (func_0204f060(func_0204b998(p))) {
        case 1: return 0;
        case 3: return 1;
        case 2: return 2;
        case 0: return 3;
        }
    }
    return 4;
}

BOOL func_0204ba30(u16 *a, u16 *out) {
    Unk_0204b9c0_Elem e1(0xfff1);
    BOOL r = FALSE;
    Unk_0204b9c0_Elem e2(a);
    if ((func_0204b300(&e2.v) || func_0204b2d4(&e2.v)) && !func_0204b950(&e2.v) && !func_0204b9c0(&e2.v)) {
        func_0204bab0(&e1.v, &e2.v);
        r = TRUE;
    }
    if (out) func_0204bab0(out, &e1.v);
    return r;
}

void func_0204bab0(u16 *dst, u16 *src) { *dst = *src; }

BOOL func_0204bab8(u16 *p) {
    if (func_0204a7d0(p)) {
        if (func_0204bc34(p) == 8) return TRUE;
        return FALSE;
    }
    return FALSE;
}

s32 func_0204bae0(u16 *p) {
    if (func_0204b2f0(p) == 1) {
        Unk_0204b9c0_Elem e(func_0204aa24(p));
        return func_02061cbc(&e.v);
    }
    return 0;
}

s32 func_0204bb18(u16 *p) {
    Unk_0204b9c0_Elem a(p);
    if (func_0204b2f0(&a.v) == 1) {
        Unk_0204b9c0_Elem b(func_0204aa24(p));
        return func_02061ec0(&b.v);
    } else if (func_0204b2d4(&a.v)) {
        if (func_0204bc0c(&a.v)) return 0x39;
        if (func_0204bbe4(&a.v)) return 0x3a;
        if (func_0204bbbc(&a.v)) return 0x3a;
        return 0x3b;
    }
    return 0;
}

BOOL func_0204bbbc(u16 *p) { if (Unk_0204b9c0_R(p, 0x3894, 0x38e3)) return TRUE; return FALSE; }
BOOL func_0204bbe4(u16 *p) { if (Unk_0204b9c0_R(p, 0x45dc, 0x47d7)) return TRUE; return FALSE; }
BOOL func_0204bc0c(u16 *p) { if (Unk_0204b9c0_R(p, 0x450c, 0x45db)) return TRUE; return FALSE; }

s32 func_0204bc34(u16 *p) {
    Unk_0204b9c0_Elem a(p);
    switch (func_0204b2f0(&a.v)) {
    case 1: {
        Unk_0204b9c0_Elem b(func_0204aa24(&a.v));
        return func_02061dd0(&b.v);
    }
    case 3:
    case 4:
        if (func_0204bbe4(&a.v)) return 1;
        return 0;
    default:
        return 0;
    }
}

s32 func_0204bcb0(u16 *p) {
    switch (func_0204b2f0(p)) {
    case 1: {
        Unk_0204b9c0_Elem e(func_0204aa24(p));
        return func_020620a4(&e.v);
    }
    case 3:
    case 4:
        if (func_0204bc0c(p)) return 0xa7;
        if (func_0204bbe4(p)) return 1;
        return 0;
    default:
        return 0;
    }
}

static inline BOOL Unk_0204bd14_A(u16 *p) {
    BOOL r = TRUE;
    if (!(*p == 0xf030 || *p == 0xf031)) r = FALSE;
    return r;
}
static inline BOOL Unk_0204bd14_B(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_A(p) || *p == 0xfffd)) r = FALSE;
    return r;
}
static inline BOOL Unk_0204bd14_C(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_B(p) || *p == 0xfffe)) r = FALSE;
    return r;
}
BOOL func_0204bd14(u16 *p) {
    BOOL r = TRUE;
    if (!(Unk_0204bd14_C(p) || func_0204bd6c(p))) r = FALSE;
    return r;
}

BOOL func_0204bd6c(u16 *p) { if (*p == 0xffff) return TRUE; return FALSE; }

s32 func_0204bd80(u16 *p) {
    s32 a = func_0204bde8(p);
    if (func_0204bdc0(p)) return a;
    a >>= func_020aeb80(func_0204bdb8() + 0x15db4);
    return a;
}

BOOL func_0204bdc0(u16 *p) { if (Unk_0204b9c0_R(p, 0x1492, 0x14fd)) return TRUE; return FALSE; }

s32 func_0204bde8(u16 *p) {
    s32 a = func_0204be70(p);
    if (func_0204bdc0(p)) return a;
    void *g = func_0209750c();
    if (g) {
        s32 c = func_0204be64(func_020acf54(func_020986bc(g)));
        s32 k = 0;
        switch (c) {
        case 2: k = 5; break;
        case 3: k = 10; break;
        case 4: k = 20; break;
        }
        if (k == 0) return a;
        a = a * (100 - k);
        if (a >= 100) return func_02133150(a, 100);
        return func_01ffc5a4(a << 12, 0x64000) >> 12;
    }
    return a;
}

#pragma dont_inline on
s32 func_0204be64(u16 *p) { return func_020acde8(*p); }
#pragma dont_inline reset

s32 func_0204be70(u16 *p) {
    Unk_0204b9c0_Elem a(p);
    switch (func_0204b2f0(&a.v)) {
    case 1:
        if (func_0204bdc0(&a.v)) {
            return func_02061efc(Unk_0204b9c0_Elem(func_0204aa24(&a.v))) * 10;
        } else if (func_0204c05c(&a.v)) {
            Unk_0204b9c0_Elem c(func_0204c040(func_0204c058(func_0204bdb8() + 0x15e54)));
            if (func_0204c000(&a.v, &c.v)) {
                return func_02061efc(Unk_0204b9c0_Elem(func_0204aa24(&a.v))) / 5;
            }
        } else if (func_0204aa24(p) == 0x1406 || func_0204aa24(p) == 0x1407) {
            return func_02061efc(Unk_0204b9c0_Elem(func_0204aa24(&a.v))) * 100;
        }
        return func_02061efc(Unk_0204b9c0_Elem(func_0204aa24(&a.v)));
    case 3:
    case 4: {
        s32 x = func_0204b25c(&a.v);
        if (x == 0x208) return func_020534d8(x) * 100;
        return func_020534d8(x);
    }
    default:
        return 0;
    }
}

BOOL func_0204c000(u16 *a, u16 *b) {
    if (func_0204b2d4(a)) {
        if (func_0204b25c(a) == func_0204b25c(b)) return TRUE;
        return FALSE;
    }
    if (*a == *b) return TRUE;
    return FALSE;
}

u16 func_0204c040(s32 n) { if ((u32)n < 5) return n + 0x1518; return 0x1518; }
s32 func_0204c058(u8 *p) { return *(s32 *)(p + 4); }
BOOL func_0204c05c(u16 *p) { if (Unk_0204b9c0_R(p, 0x1518, 0x151c)) return TRUE; return FALSE; }

void func_0204c084(u32 n) {
    if (!func_02072e44(data_020cbb18)) {
        if (n >= 0x17) n = 0x16;
        data_021ed1b0.unk_17 = n;
    }
}
u32 func_0204c0ac() { return data_021ed1b0.unk_17; }

void func_0204c0b8(Unk_0204c0b8_S *p, s32 k, s32 add) {
    if (k == 4) {
        s32 v = p->unk_21;
        if (v < 0) p->unk_21 = 1;
        else p->unk_21 = v + add;
    } else {
        p->unk_21 = -1;
    }
}

BOOL func_0204c0e0() {
    BOOL r = FALSE;
    if (data_021ed1b0.unk_15 >= 0xf) r = TRUE;
    return r;
}

BOOL func_0204c0f4(u8 *p) {
    BOOL r = FALSE;
    s32 i = func_020974f8();
    Unk_0204c0f4_Date t;
    func_0209cf88(&t);
    p += 0x58;
    if (func_0209cd00(&t, (Unk_0204c0f4_Date *)p + i)) r = TRUE;
    return r;
}

void func_0204c124(u8 *p) { func_0209cf88(func_0204c140(p, func_020974f8())); }
Unk_0204c0f4_Date *func_0204c140(u8 *p, s32 i) { return (Unk_0204c0f4_Date *)(p + 0x58) + i; }

s32 func_0204c148(s32 x, u32 id) {
    s32 i = func_0204c188(x, id);
    if (i < 0) {
        i = func_0204c188(x, 0x63);
        if (i >= 0) {
            Unk_0204c1fc_Entry *e = func_0204c1fc(i);
            e->unk_00 = id;
            func_0203f1e8(&e->unk_04, &e->unk_08, id);
            e->unk_02 = func_0209cf0c();
        }
    }
    return i;
}

s32 func_0204c188(s32 x, u32 id) {
    s32 r = -1;
    Unk_0204c1fc_Entry *e = func_0204c1fc(0);
    for (s32 i = 0; i < 4; e++, i++) {
        if (id == e->unk_00) { r = i; break; }
    }
    return r;
}

void func_0204c1b8(s32 x, u32 id) {
    s32 i = func_0204c188(x, id);
    if (i >= 0) {
        Unk_0204c1fc_Entry *e = func_0204c1fc(i);
        e->unk_00 = 0x63;
        e->unk_04 = 1;
        e->unk_08 = 1;
    }
}

void func_0204c1d8() {
    Unk_0204c1fc_Entry *e = func_0204c1fc(0);
    for (s32 i = 0; i < 4; e++, i++) {
        e->unk_00 = 0x63;
        e->unk_04 = 1;
        e->unk_08 = 1;
    }
}

Unk_0204c1fc_Entry *func_0204c1fc(s32 i) { return &data_021ed1c8[i]; }

void func_0204c20c(Unk_0204c20c_S *p) { for (s32 i = 0; i < 11; i++) p->unk_16[i] = 0; }
void func_0204c21c(Unk_0204c21c_S *p) { for (s32 i = 0; i < 10; i++) p->unk_0c[i] = 0; }

void func_0204c22c(u8 *dst, u8 *src) {
    u32 l[2];
    l[0] = 0;
    l[1] = 0;
    s32 d = func_0209ceac(src[2], src[1], src[0]);
    s32 r;
    do {
        r = func_02063b8c(7);
    } while (r == 1 || r == 2);
    l[0] = 0;
    l[1] = 0;
    ((u8 *)l)[5] = src[2];
    ((u8 *)l)[4] = src[1];
    ((u8 *)l)[3] = src[0];
    func_0209d2c0(l, (7 - d) + r);
    dst[10] = ((u8 *)l)[5];
    dst[9] = ((u8 *)l)[4];
    dst[8] = ((u8 *)l)[3];
}

struct Unk_0204c290_V {
    u16 v;
    u16 pad;
};

void func_0204c290() {
    Unk_0204c290_W *w;
    s32 wd, ht, x, y;
    volatile s32 cy;
    Unk_0204c290_V vs;
    w = func_0204da0c();
    if (w) {
        s32 *q = &w->unk_04;
        wd = w->unk_04 << 4;
        ht = q[1] << 4;
        for (y = 0x30; y < ht; y++) {
            x = 0;
            if (wd > 0) {
                cy = y >> 4;
                for (; x < wd; x++) {
                    s32 cx = x >> 4;
                    u16 *it = func_0204ebd8(w, cx, cy, x - (cx << 4), y - (cy << 4), 0);
                    if (it) {
                        if (Unk_0204b9c0_R(it, 0x5d, 0x61)) {
                            vs.v = 0x2a;
                            func_0204eb30(w, &vs.v, x, y, 0);
                        }
                    }
                }
            }
        }
    }
}
#pragma dont_inline on
u8 *func_0204bdb8() { return data_021d7350; }
#pragma dont_inline reset
}
