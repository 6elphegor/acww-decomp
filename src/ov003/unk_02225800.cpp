#include "types.h"

// ---- main-module classes (declarations only)
class Unk_020dbe7c {
public:
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~Unk_020dbe7c();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();

    u32 unk_18;
    u32 unk_1c;
};

// ---- ov009 actor (only the methods used here)
class Unk_ov009_0225e29c {
public:
    s32 func_ov009_0225b964();
    u32 func_ov009_0225b974();
    u32 func_ov009_0225b980();
};

// ---- record used by func_ov003_02225cb0
struct Unk_ov003_02225cb0_Ent {
    /* 0x000 */ u8 pad_000[0x234];
    /* 0x234 */ s16 unk_234;
    /* 0x236 */ u8 pad_236[0x248 - 0x236];
    /* 0x248 */ u8 unk_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 pad_24a[3];
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e[2];
    /* 0x250 */ u8 unk_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 pad_252[0x25c - 0x252];
};

struct Unk_ov003_02225d38_Pair {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov003_02225d38_Ent {
    Unk_ov003_02225d38_Pair *unk_00;
    u8 unk_04;
    u8 pad_05[3];
};

struct Unk_ov003_02225dbc_Data {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov003_02226058_Buf {
    u8 unk_00;
    u8 unk_01;
};

extern "C" {
extern u8 data_ov003_02258ef8;
extern u8 data_ov003_02258f00;
extern u8 data_ov003_02258f04;
extern u8 data_ov003_02258f08;
extern s8 data_ov003_02258f0c;
extern u16 data_ov003_02258f10;
extern u16 data_ov003_02258f14;
extern u32 data_ov003_02258f18[];
extern u8 data_ov003_02258f54[];
extern u8 data_ov003_02259154[];
extern u8 data_ov003_022595b0[];
extern Unk_ov003_02225cb0_Ent data_ov003_0225a17c[];
extern Unk_ov003_02225d38_Ent *data_020dcbd0[];
extern Unk_ov003_02225dbc_Data *data_020cbb18;
extern u8 data_0213b91c[];
extern u8 data_0213b954[];

typedef void *(*Unk_ov003_02225ed0_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov003_02225ed0_Fn, Unk_ov003_02225ed0_Fn);
void *__cxa_vec_cleanup(void *, s32, s32, Unk_ov003_02225ed0_Fn);
void *func_02000c98(void *);
void *func_02000c8c(void *);

u32 func_0204b1cc(u32 a);
void *func_020b27a4(u16 *p);
u32 func_020b2b98(void *p);
BOOL func_020b2ae0(void *p, s32 *x, s32 *y, u32 i);
Unk_ov009_0225e29c *func_ov003_02218b40(u32 id);
void func_02133150();
void *func_0204da0c();
s32 func_02063b8c(s32 n);
BOOL func_ov003_02225238(void *a, s32 code, s32 *x, s32 *y, void *obj, u8 flag);
void *func_02095204(s32 n);
s32 func_020e9650(void *a, s32 *v);
void *func_02116048(void *dst, void *src, s32 n);
s32 func_020b8fe8();
BOOL func_02045d98(void *buf);
BOOL func_02072e88(void *p, u32 v);
void func_0209cf18(void *p);
void func_0209cfb8(void *p);
void func_0204ee10(s32 *a, s32 *b, void *c);

void func_0209c364(void *p);
void func_0209c370(void *p);
void func_0209c128(void *p);
void func_0209c140(void *p);
void func_0209c0c8(void *p);
void func_02088b6c(void *p);
void func_02088b7c(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
}

// ---- class with vtable 0x02234aac (derived from Unk_020dbe4c)
class Unk_ov003_02234aac : public Unk_020dbe4c {
public:
    Unk_ov003_02234aac();
    virtual ~Unk_ov003_02234aac();
    static void *operator new(unsigned long, void *p) { return p; }
};

extern "C" {
s32 func_ov003_02225bf8(s32 a, s32 b);
BOOL func_ov003_02225d38(u32 a, u32 b, u8 *out);
BOOL func_ov003_02225dbc(s32 a);
s32 func_ov003_02226058();
void func_ov003_02225800(u16 (*arr)[4][16]);
}

extern "C" {

void func_ov003_02225800(u16 (*arr)[4][16])
{
    u32 i;
    for (i = 0; i < 0x22; i++) {
        u16 id;
        void *p;
        u32 n;
        Unk_ov009_0225e29c *o;
        id = func_0204b1cc(i);
        p = func_020b27a4(&id);
        if (p != 0) {
            n = func_020b2b98(p);
            if (n != 0) {
                o = func_ov003_02218b40(id);
                if (o != 0) {
                    u32 j;
                    for (j = 0; j < n; j++) {
                        s32 xy[2];
                        if (func_020b2ae0(p, &xy[0], &xy[1], j)) {
                            if (o->func_ov009_0225b964() == 1) {
                                s32 px = xy[0] + o->func_ov009_0225b980();
                                s32 py = xy[1] + o->func_ov009_0225b974();
                                s32 bx = (px - 16) / 16;
                                s32 by = (py - 16) / 16;
                                u16 *c = (u16 *)((u8 *)arr + bx * 32 + by * 128);
                                c[py % 16] &= 0xffff - (1 << (px % 16));
                            }
                        }
                    }
                }
            }
        }
    }
}

void func_ov003_022258cc(u16 (*arr)[4][16])
{
    s32 i, j, k;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 16; j++) {
            for (k = 0; k < 4; k++) {
                arr[i][k][j] = 0xffff;
            }
        }
    }
    func_ov003_02225800(arr);
}

s32 func_ov003_02225910(u8 *self, void *a, s32 code, u32 flag)
{
    u32 mask = 0;
    s32 x = 0;
    s32 y = 0;
    BOOL found;
    s32 rndD;
    s32 rnd33;
    s32 *q;
    void *obj = func_0204da0c();
    if (obj == 0) {
        return 0;
    }
    if (code == 0x3b) {
        u32 n;
        s32 rnd;
        s32 k;
        rnd = func_02063b8c(16 - data_ov003_02258f08);
        void *b;
        n = 0;
        k = n;
        mask = data_ov003_02258f10;
        for (; k < 16; n++, k++) {
            if ((((s32)mask >> k) & 1) == 0) {
                if (rnd-- == 0) {
                    data_ov003_02258f10 |= 1 << k;
                    break;
                }
            }
        }
        x = n >> 2;
        y = n & 3;
        data_ov003_02258f08++;
        if (func_ov003_02225238(a, code, &x, &y, obj, (u8)flag)) {
            b = func_02095204(4);
            data_ov003_02258f04 = 1;
            if (b) {
                s32 v[3];
                v[0] = x;
                v[1] = 0;
                v[2] = y;
                if (func_020e9650((u8 *)b + 0x5c, v) > 0x10000) {
                    q = (s32 *)(self + 0x204);
                    q[0] = x;
                    q[2] = y;
                    data_ov003_02258f10 = 0;
                    data_ov003_02258f08 = 0;
                    data_ov003_02258f04 = 0;
                    return 1;
                }
            }
        }
        if (data_ov003_02258f08 >= 0x10) {
            data_ov003_02258f10 = 0;
            data_ov003_02258f08 = 0;
            if (data_ov003_02258f04 != 0) {
                data_ov003_02258f04 = 0;
            } else {
                data_ov003_02258ef8 = 0;
            }
        }
    } else if (code == 0x33) {
        found = FALSE;
        s32 i;
        u32 zero = 0;
        for (i = 0; i < 16; i++) {
            rnd33 = func_02063b8c(16 - i);
            s32 k;
            u32 n = 0;
            for (k = n; k < 16; n++, k++) {
                if (((mask >> k) & 1) == 0) {
                    if (rnd33-- == 0) {
                        mask |= 1 << k;
                        break;
                    }
                }
            }
            x = n >> 2;
            y = n & 3;
            if (func_ov003_02225238(a, code, &x, &y, obj, (u8)flag)) {
                void *b = func_02095204(4);
                if (b) {
                    s32 v[3];
                    v[0] = x;
                    v[1] = zero;
                    v[2] = y;
                    if (func_020e9650((u8 *)b + 0x5c, v) > 0x10000) {
                        q = (s32 *)(self + 0x204);
                    q[0] = x;
                        q[2] = y;
                        return 1;
                    }
                }
                found = TRUE;
            }
        }
        if (!found) {
            data_ov003_02258f0c = 0;
        }
    } else {
        s32 i;
        for (i = 0; i < 16; i++) {
            rndD = func_02063b8c(16 - i);
            s32 k;
            u32 n = 0;
            for (k = n; k < 16; n++, k++) {
                if (((mask >> k) & 1) == 0) {
                    if (rndD-- == 0) {
                        mask |= 1 << k;
                        break;
                    }
                }
            }
            x = n >> 2;
            y = n & 3;
            if (func_ov003_02225238(a, code, &x, &y, obj, (u8)flag)) {
                q = (s32 *)(self + 0x204);
                    q[0] = x;
                q[2] = y;
                return 1;
            }
        }
    }
    return 0;
}

s32 func_ov003_02225b6c(void *p, s32 t)
{
    switch (t) {
    case 0:
    case 5:
    case 6:
        func_02116048(data_ov003_02259154, p, 0x200);
        break;
    default:
        func_02116048(data_ov003_02258f54, p, 0x200);
        break;
    }
}

}

// ---- library sub-objects (declarations only; ctors/dtors live in main)
class Unk_02032238 {
public:
    Unk_02032238();
    ~Unk_02032238();
    u32 pad[0x30 / 4];
};

class Unk_020dbd54 {
public:
    Unk_020dbd54();
    ~Unk_020dbd54();
    u32 pad[0xb8 / 4];
};

class Unk_02088b20 {
public:
    Unk_02088b20();
    ~Unk_02088b20();
    u32 pad[0x28 / 4];
};

class Unk_0209c0ac {
public:
    Unk_0209c0ac();
    ~Unk_0209c0ac();
    void func_0209c0c8();
    u32 pad[0x40 / 4];
};

class Unk_0209c364 {
public:
    Unk_0209c364();
    ~Unk_0209c364();
    u32 pad[2];
};

class Unk_02000c8c {
public:
    Unk_02000c8c();
    ~Unk_02000c8c();
    u32 pad[3];
};

class Unk_0213b91c {
public:
    Unk_0213b91c() {}
    virtual void vfunc_00();
    u8 unk_04[0xc];
};

class Unk_0213b954 : public Unk_0213b91c {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();
};

// ---- static object holding a Unk_ov003_02234aac plus library sub-objects (no vtable)
class Unk_ov003_02225ed0 {
public:
    Unk_ov003_02225ed0();
    ~Unk_ov003_02225ed0();

    /* 0x000 */ Unk_ov003_02234aac unk_00;
    /* 0x020 */ Unk_02032238 unk_20;
    /* 0x050 */ Unk_020dbd54 unk_50;
    /* 0x108 */ Unk_02088b20 unk_108;
    /* 0x130 */ Unk_0209c0ac unk_130;
    /* 0x170 */ u32 unk_170;
    /* 0x174 */ Unk_0213b954 unk_174;
    /* 0x184 */ u8 pad_184[0x1ec - 0x184];
    /* 0x1ec */ Unk_02000c8c unk_1ec[2];
    /* 0x204 */ u8 pad_204[0x22c - 0x204];
    /* 0x22c */ s32 unk_22c;
    /* 0x230 */ Unk_0209c364 unk_230;
    /* 0x238 */ u16 unk_238;
    /* 0x23a */ u16 unk_23a;
    /* 0x23c */ u16 unk_23c;
    /* 0x23e */ u8 pad_23e[4];
    /* 0x242 */ u16 unk_242;
    /* 0x244 */ u8 pad_244[4];
    /* 0x248 */ u8 unk_248;
    /* 0x249 */ u8 unk_249;
    /* 0x24a */ u8 unk_24a;
    /* 0x24b */ u8 unk_24b;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ s8 unk_24d;
    /* 0x24e */ u8 pad_24e;
    /* 0x24f */ u8 unk_24f;
    /* 0x250 */ u8 unk_250;
    /* 0x251 */ u8 unk_251;
    /* 0x252 */ u8 unk_252;
};

Unk_ov003_02225ed0::~Unk_ov003_02225ed0() {}

Unk_ov003_02225ed0::Unk_ov003_02225ed0()
{
    unk_130.func_0209c0c8();
    unk_251 = 0x13;
    unk_24f = 0;
    unk_23a = 0;
    unk_23c = 0;
    unk_238 = 0;
    unk_24d = -1;
    unk_250 = 0;
    unk_170 = 0;
    unk_24c = 1;
    unk_242 = 0;
    unk_24b = 1;
    unk_24a = 0;
    unk_248 = 0;
    unk_249 = 0;
    unk_252 = 0;
    unk_22c = -1;
}

Unk_ov003_02234aac::~Unk_ov003_02234aac() {}

Unk_ov003_02234aac::Unk_ov003_02234aac() {}

extern "C" {

s32 func_ov003_02225bf8(s32 a, s32 b)
{
    switch (a) {
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        if ((u32)(b - 1) <= 1) {
            return 5;
        }
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
    case 10:
    case 12: case 13: case 14: case 15:
    case 21: case 22: case 23:
    case 25:
    case 27: case 28: case 29:
    case 32:
    case 37:
    case 50: case 51:
    case 54: case 55:
        if ((u32)(b - 1) <= 1) {
            return 4;
        }
        break;
    case 59:
        if (b == 1) {
            return 4;
        }
        break;
    case 26:
        if (b != 1) {
            return 4;
        }
        break;
    case 9: case 11: case 24: case 30: case 31: case 33: case 34: case 35: case 36:
    case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46:
    case 47: case 48: case 49: case 52: case 53: case 56: case 57: case 58:
    default:
        return 3;
    }
    return 3;
}

void func_ov003_02225cb0()
{
    Unk_ov003_02225cb0_Ent *e;
    s32 i;
    data_ov003_02258f14++;
    if (data_ov003_02258f14 > 0x78) {
        e = data_ov003_0225a17c;
        data_ov003_02258f14 = 0;
        for (i = 0; i < 8; e++, i++) {
            if (e->unk_24d == -10) {
                e->unk_24d = -1;
                e->unk_248 = 0;
            } else if (e->unk_249 == 0 && e->unk_234 == 0 && e->unk_250 == 3) {
                e->unk_250 = 4;
                e->unk_251 = 10;
            }
        }
    }
}

BOOL func_ov003_02225d38(u32 a, u32 b, u8 *out)
{
    u8 r;
    Unk_ov003_02225d38_Ent *t;
    u32 cnt;
    s32 v;
    u8 i;
    Unk_ov003_02225d38_Ent *ent;
    r = func_02063b8c(100);
    t = data_020dcbd0[a];
    if (t == 0) {
        return FALSE;
    }
    cnt = t[b].unk_04;
    v = func_020b8fe8();
    i = 0;
    ent = &t[b];
    for (; i < cnt; i++) {
        Unk_ov003_02225d38_Pair *pp = ent->unk_00;
        u8 first = pp[i].unk_00;
        u8 second = pp[i].unk_01;
        if (second > r) {
            if (first != 0x30 && func_ov003_02225dbc(first) && func_ov003_02225bf8((s8)first, v) != 4) {
                *out = first;
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

BOOL func_ov003_02225dbc(s32 a)
{
    Unk_ov003_02225dbc_Data *p = data_020cbb18;
    if (!func_02072e88(p, p->unk_64)) {
        return TRUE;
    }
    switch (a) {
    case 8:
    case 10:
    case 25:
    case 35:
    case 48:
    case 50:
    case 51:
    case 53:
    case 54:
    case 55:
    case 58:
    case 59:
        return FALSE;
    }
    return TRUE;
}

BOOL func_ov003_02225e34(u8 *a, u8 *b, s32 c)
{
    s32 r = func_020b8fe8();
    u8 buf[16];
    if (c != 0) {
        if (r == 0) {
            if (func_02045d98(buf)) {
                *a = 0x33;
                *b = 8;
                return TRUE;
            }
            if (data_ov003_02258f0c > 0) {
                if (func_02063b8c(100) < 20) {
                    *a = 0x33;
                    *b = 7;
                    return TRUE;
                }
            }
        }
    } else {
        if (r != 1) {
            u8 *const g = data_ov003_022595b0;
            if (data_ov003_02258ef8 != 0) {
                if (g[0x250] == 3 && g[0x251] == 0x13) {
                    *a = 0x3b;
                    *b = 7;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void func_ov003_02225ec8(u8 *self, u32 v)
{
    *(u32 *)(self + 0xfc) = v;
}

void func_ov003_0222603c(u8 *self)
{
    self += 0x24f;
    (*self)++;
    if (*self > 0x50) {
        *self = 0;
    }
}

s32 func_ov003_02226058()
{
    Unk_ov003_02226058_Buf l;
    u32 b;
    func_0209cf18(&l);
    b = l.unk_01;
    if (b >= 4 && b <= 7) {
        return 1;
    }
    if (b >= 8 && b <= 15) {
        return 2;
    }
    if (b == 16) {
        return 3;
    }
    if ((u8)(b + 0xef) <= 1) {
        return 4;
    }
    if (b >= 19 && b <= 22) {
        return 5;
    }
    return 0;
}

BOOL func_ov003_022260ac(u8 *out)
{
    Unk_ov003_02226058_Buf l;
    u8 v;
    func_0209cfb8(&l);
    v = l.unk_01 - 1;
    if (v > 11) {
        v = 0;
    }
    if (func_ov003_02225d38(v, func_ov003_02226058(), out)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_022260e8(void *p)
{
    s32 c, d;
    s32 a, b;
    if (data_ov003_02258f00 != 0) {
        func_0204ee10(&a, &b, p);
        func_0204ee10(&c, &d, data_ov003_02258f18);
        if (c == a && d == b) {
            return TRUE;
        }
    }
    return FALSE;
}

}
