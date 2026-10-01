#include "types.h"

extern "C" {
u32 func_020e7f90(void *st, u32 n);
void func_020e7fcc(void *st, u32 v);
void func_0209d498(void *p);
void *_ZN12Unk_0209865c13func_020986c8Ev(void *p);
BOOL func_0203c4cc(void *base, u16 *p);
BOOL func_0204b858(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u16 func_0204b318(u32 a, s32 b);
s32 func_0204b248(s32 a, s32 b);
s32 func_0205b4e0(void);
s32 func_0205b4ec(void);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_02063b8c(s32 a);
void *__cxa_vec_ctor(void *, u32, u32, void (*)(void *), void (*)(void *));
void __cxa_vec_cleanup(void *, u32, u32, void (*)(void *));
void _ZN12Unk_0203442cC1Ev(void *);
void _ZN12Unk_0203442cD1Ev(void *);
BOOL func_0204b300(u16 *p);
s32 func_0204b820(u16 *p);
s32 func_02061e0c(u16 *p);
s32 func_02061d84(u16 *p);
s32 func_0205327c(u16 *p);
s32 func_0204b2cc(u16 *p);
s32 func_0204a858(u16 *p);
s32 func_0204a960(u16 *p);
s32 func_0204a8b8(u16 *p);
s32 func_0204a97c(u16 *p);
s32 func_0204a8e8(u16 *p);
s32 func_0204a798(u16 *p);
s32 func_0204a7f8(u16 *p);
s32 func_0204a948(u16 *p);
s32 func_0204a888(u16 *p);
s32 func_0204a994(u16 *p);
s32 func_0204a918(u16 *p);
s32 func_0204a7b0(u16 *p);
s32 func_0204a828(u16 *p);
s32 func_0204a780(u16 *p);
s32 func_0204a7c8(u16 *p);
}

// Random source (vtable 0x020dd35c): default implementation uses the global generator.
class Unk_020dd35c {
public:
    Unk_020dd35c();
    ~Unk_020dd35c();
    virtual u8 vfunc_00();
    virtual u8 vfunc_04();
    virtual u8 vfunc_08();
    virtual u32 vfunc_0c(u32 n);
};

// Random source seeded from the RTC (vtable 0x020dd344).
class Unk_020dd344 : public Unk_020dd35c {
public:
    Unk_020dd344();
    ~Unk_020dd344();
    virtual u8 vfunc_00();
    virtual u8 vfunc_04();
    virtual u8 vfunc_08();
    virtual u32 vfunc_0c(u32 n);
    void func_020633a0(u8 a, u8 b, u8 c);
    void func_02063474();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
};

// One-byte element (value 0..5), 3-byte rows in data_020cb62c
class Unk_020635d8 {
public:
    Unk_020635d8();
    ~Unk_020635d8();
    u32 func_020635d8(u32 x);
    u32 func_020635fc();
    u32 func_02063654(s32 mode, Unk_020dd35c *rng);
    u8 *func_020637a0();
    void func_020637c8();

    /* 0x00 */ u8 unk_00;
};

class Unk_02063578 {
public:
    Unk_02063578();
    ~Unk_02063578();
    void func_02063578();
    Unk_020635d8 *func_02063570(s32 i);

    /* 0x00 */ Unk_020635d8 unk_00[9];
};

struct Unk_02063380 {
    ~Unk_02063380();
    Unk_02063380() {}
    Unk_02063380(const Unk_02063380 &o) { unk_00 = o.unk_00; unk_04 = o.unk_04; }
    s32 func_02063380();
    s32 func_02063384();
    void func_0206338c(s32 a, s32 b);

    s32 unk_00;
    s32 unk_04;
};

struct Unk_02062fd4_Row {
    u16 (*unk_00)(u32);
    s32 (*unk_04)(u16 *);
    s32 (*unk_08)(u16 *);
    u32 unk_0c;
    s32 (*unk_10)(u16 *);
};

extern Unk_02063578 data_021ed30c;
extern const u8 data_020cb62c[];
extern u8 data_021c7c88[];
extern const u32 data_020cb620[];
extern const Unk_02062fd4_Row data_020cb640[];
extern u8 data_021d7350[];

extern "C" {
BOOL func_020626a8(u16 *p);
s32 func_020626cc(u16 *p, s32 mode);
s32 func_02062744(u16 *p);
void func_02062f44(u16 *out, Unk_02063380 *o);
void func_02062ad4(u16 *out, s32 base, u32 cnt, u16 *list, u32 listLen, void *a5, s32 a6, s32 a7, Unk_020dd35c *rng, s32 a9);
BOOL func_02062e90(u16 *arr, u32 n, s32 base, u32 cnt, void *a4, s32 a5, s32 a6, Unk_020dd35c *a7, s32 a8);
void func_0206277c(u16 *out, u8 *a, Unk_020dd35c *rng);
void func_02062f70(u16 *out, s32 one, Unk_02063380 *o, u8 *a, Unk_020dd35c *b, u8 c, u32 d, s32 *e);
void func_02062f94(u16 *out, Unk_02063380 *o, u8 *a, Unk_020dd35c *b, u8 c, u32 d, s32 *e);
u32 func_02062fd4(u16 *out, u32 n, Unk_02063380 *tbl, u32 x3, u8 *a4, Unk_020dd35c *rng, u32 a6, u32 a7, s32 *outp);
BOOL func_02063258(void *p, u16 *q);
s32 func_02063274(s32 a, u32 b);
BOOL func_020632e4(s32 a, s32 b);
s32 func_020632fc(u16 *c, u16 *arr, u32 n);
s32 func_02063360(void);
u16 func_02063368(u32 a);
s32 func_02063374(s32 a);
u32 func_020633c4(u32 a, u32 b, u32 c);
u8 func_02063600(u32 idx);
}

extern const u32 data_020cb620[3] = {1, 2, 3};
extern const u8 data_020cb62c[18] = {
    0x3c, 0x1e, 0x0a, 0x3c, 0x0a, 0x1e, 0x1e, 0x3c, 0x0a,
    0x0a, 0x3c, 0x1e, 0x1e, 0x0a, 0x3c, 0x0a, 0x1e, 0x3c,
};
extern const Unk_02062fd4_Row data_020cb640[9] = {
    {(u16(*)(u32))func_02063374, (s32(*)(u16 *))func_02063360, func_0205327c, 0x6e9, func_0204b2cc},
    {func_02063368, func_02061d84, func_02061e0c, 0x40, func_0204a858},
    {(u16(*)(u32))func_0204a960, func_02061d84, func_02061e0c, 0x100, func_0204a8b8},
    {(u16(*)(u32))func_0204a97c, func_02061d84, func_02061e0c, 0x44, func_0204a8e8},
    {(u16(*)(u32))func_0204a798, func_02061d84, func_02061e0c, 0x44, func_0204a7f8},
    {(u16(*)(u32))func_0204a948, func_02061d84, func_02061e0c, 0x40, func_0204a888},
    {(u16(*)(u32))func_0204a994, func_02061d84, func_02061e0c, 0x40, func_0204a918},
    {(u16(*)(u32))func_0204a7b0, func_02061d84, func_02061e0c, 0x20, func_0204a828},
    {(u16(*)(u32))func_0204a780, func_02061d84, func_02061e0c, 0x20, func_0204a7c8},
};

static inline BOOL Unk_0206277c_Bad1(u16 *p, u16 *e) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *e = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(e)) r = TRUE;
        else r = FALSE;
    } else {
        if (*p == 0xfff1) r = TRUE;
        else r = FALSE;
    }
    return r;
}

static inline BOOL Unk_0206277c_Bad2(u16 *p, u16 *e) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *e = 0xfff1;
        s32 x = func_0204b25c(p);
        if (x == func_0204b25c(e)) r = TRUE;
        else r = FALSE;
    } else {
        if (*p == 0xfff1) r = TRUE;
        else r = FALSE;
    }
    return r;
}

Unk_020635d8::Unk_020635d8() {}

Unk_020635d8::~Unk_020635d8() {}

void Unk_020635d8::func_020637c8() { unk_00 = func_02063b8c(6); }

u8 *Unk_020635d8::func_020637a0() {
    if (unk_00 >= 6) unk_00 = unk_00 % 6;
    return (u8 *)data_020cb62c + unk_00 * 3;
}

u32 Unk_020635d8::func_02063654(s32 mode, Unk_020dd35c *rng) {
    u32 a = (u8)(60 - (u8)func_01ffc5a4(func_0205b4e0() + func_0205b4ec(), 0xa000));
    u32 b = (u8)(70 - a);
    if (mode == 0) {
        Unk_020dd35c local;
        if (rng == NULL) rng = &local;
        u32 r = rng->vfunc_0c(100);
        if (r < a) {
            return func_02063654(1, rng);
        } else if (r < a + b) {
            return func_02063654(3, rng);
        } else {
            return func_02063654(2, rng);
        }
    } else if (mode == 1) {
        if (a >= 30 && a >= b) return func_020635d8(60);
        if (a <= 30 && b <= 30) return func_020635d8(30);
        return func_020635d8(10);
    } else if (mode == 2) {
        if ((a <= 30 && a >= b) || (a >= 30 && a <= b)) return func_020635d8(60);
        if ((a >= 30 && b <= 30) || (a <= 30 && b >= 30)) return func_020635d8(30);
        return func_020635d8(10);
    } else if (mode == 3) {
        if (a <= 30 && a <= b) return func_020635d8(60);
        if (a >= 30 && b >= 30) return func_020635d8(30);
        return func_020635d8(10);
    }
    return mode;
}

extern "C" u8 func_02063600(u32 idx) {
    u32 m = (u8)func_01ffc5a4(func_0205b4e0() + func_0205b4ec(), 0xa000);
    u8 t[3] = {0, 30, 0};
    t[0] = 0x3c - m;
    t[2] = m + 10;
    if (idx < 3) return t[idx];
    return t[0];
}

u32 Unk_020635d8::func_020635fc() { return unk_00; }

u32 Unk_020635d8::func_020635d8(u32 x) {
    u8 *p = func_020637a0();
    for (u32 i = 0; i < 3; i++) {
        if (x == p[i]) return i + 1;
    }
    return 1;
}

Unk_02063578::Unk_02063578() {}

Unk_02063578::~Unk_02063578() {}

void Unk_02063578::func_02063578() {
    for (u32 i = 0; i < 9; i++) {
        unk_00[i].func_020637c8();
    }
}

Unk_020635d8 *Unk_02063578::func_02063570(s32 i) {
    Unk_020635d8 *p = unk_00;
    if (i < 9) p += i;
    return p;
}

// ---------------------------------------------------------------------------
Unk_020dd35c::Unk_020dd35c() {}

Unk_020dd35c::~Unk_020dd35c() {}

u32 Unk_020dd35c::vfunc_0c(u32 n) { return func_020e7f90(data_021c7c88, n); }

u8 Unk_020dd35c::vfunc_00() {
    u32 t[2];
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    return ((u8 *)t)[5];
}

u8 Unk_020dd35c::vfunc_04() {
    u32 t[2];
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    return ((u8 *)t)[4];
}

u8 Unk_020dd35c::vfunc_08() {
    u32 t[2];
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    return ((u8 *)t)[3];
}

Unk_020dd344::Unk_020dd344() {
    func_020e7fcc(&unk_04, 1);
    func_02063474();
}

Unk_020dd344::~Unk_020dd344() {}

void Unk_020dd344::func_02063474() {
    u32 t[2];
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    func_020633a0(((u8 *)t)[5], ((u8 *)t)[4], ((u8 *)t)[3]);
}

extern "C" u32 func_020633c4(u32 a, u32 b, u32 c) {
    u32 v0, v1, v6, v4, v3, v2;
    v0 = (u8)data_021ed30c.func_02063570(0)->func_020635fc();
    v4 = data_021ed30c.func_02063570(4)->func_020635fc() << 24;
    v1 = (u8)data_021ed30c.func_02063570(1)->func_020635fc();
    v6 = (u8)data_021ed30c.func_02063570(6)->func_020635fc();
    v3 = (u8)data_021ed30c.func_02063570(3)->func_020635fc();
    v2 = (u8)data_021ed30c.func_02063570(2)->func_020635fc();
    u32 x = a | ((c << 11) | (b << 7));
    return (c << 30) ^ ((v2 << 25) ^ ((v3 << 20) ^ ((v6 << 15) ^ ((v1 << 10) ^ ((v4 >> 19) ^ (v0 ^ (x | (x << 16))))))));
}

void Unk_020dd344::func_020633a0(u8 a, u8 b, u8 c) {
    unk_08 = a;
    unk_09 = b;
    unk_0a = c;
    func_020e7fcc(&unk_04, func_020633c4(a, b, c));
}

u32 Unk_020dd344::vfunc_0c(u32 n) { return func_020e7f90(&unk_04, n); }

void Unk_02063380::func_0206338c(s32 a, s32 b) {
    unk_00 = a;
    unk_04 = b;
}

Unk_02063380::~Unk_02063380() {}

s32 Unk_02063380::func_02063384() { return unk_00; }

s32 Unk_02063380::func_02063380() { return unk_04; }

extern "C" s32 func_02063374(s32 a) { return func_0204b248(a, 0); }

extern "C" u16 func_02063368(u32 a) { return func_0204b318(a, 4); }

extern "C" s32 func_02063360(void) { return -1; }

extern "C" s32 func_020632fc(u16 *c, u16 *arr, u32 n) {
    u32 i;
    s32 f1 = 0, f2 = 0;
    for (i = 0; i < n; arr++, i++) {
        s32 t;
        if (func_0204b2d4(arr)) {
            s32 x = func_0204b25c(arr);
            t = (x == func_0204b25c(c)) ? 1 : f1;
        } else {
            t = (*arr == *c) ? 1 : f2;
        }
        if (t) return i;
    }
    return -1;
}

extern "C" BOOL func_020632e4(s32 a, s32 b) {
    BOOL r = FALSE;
    if (a == -1 || a == 4 || a == b) r = TRUE;
    return r;
}

extern "C" s32 func_02063274(s32 a, u32 b) {
    switch (a) {
    case 1:
        return 3;
    case 2:
        if (b > 0x18) return 0;
        return 3;
    case 3:
    case 4:
        return 0;
    case 5:
        if (b > 0x1a) return 1;
        return 0;
    case 6:
    case 7:
        return 1;
    case 8:
        if (b > 0x1a) return 2;
        return 1;
    case 9:
    case 10:
        return 2;
    case 11:
        if (b > 0x1a) return 3;
        return 2;
    }
    return 3;
}

extern "C" BOOL func_02063258(void *p, u16 *q) {
    if (p != NULL) {
        return func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(p), q);
    }
    return FALSE;
}

extern "C" u32 func_02062fd4(u16 *out, u32 n, Unk_02063380 *tbl, u32 x3, u8 *a4, Unk_020dd35c *rng, u32 a6, u32 a7, s32 *outp) {
    u16 tmp[2];
    Unk_020dd35c *r;
    u32 result;
    u8 *const g = data_021d7350;
    result = 1;
    Unk_020dd35c local;
    r = rng;
    if (r == NULL) r = &local;
    s32 t1 = r->vfunc_04();
    s32 t2 = r->vfunc_08();
    s32 k = func_02063274(t1, t2);
    u32 i;
    for (i = 0; i < n; i++) out[i] = 0xfff1;
    if (outp != NULL) *outp = 1;
    u32 cnt = 0;
    while (cnt < n) {
        u32 idx = r->vfunc_0c(x3);
        Unk_02063380 *e = tbl + idx;
        s32 type = e->func_02063384();
        Unk_020635d8 *el = ((Unk_02063578 *)(g + 0x15fbc))->func_02063570(type);
        s32 kind;
        if (a7 == 1) {
            kind = el->func_02063654(e->func_02063380(), r);
        } else {
            kind = e->func_02063380();
        }
        u32 flag1 = a6;
        if (kind != 0 && kind != 1 && kind != 2 && kind != 3 && kind != 0x1d && kind != 5) flag1 = 0;
        if (outp != NULL) *outp = kind;
        const Unk_02062fd4_Row *row = data_020cb640 + type;
        u32 m = 0;
        u32 j;
        for (j = 0; j < row->unk_0c; j++) {
            tmp[0] = row->unk_00(j);
            if (kind == row->unk_08(&tmp[0])) {
                if (func_020632e4(row->unk_04(&tmp[0]), k)) {
                    if (!func_02063258(a4, &tmp[0])) {
                        if (flag1 == 0 || !func_0204b858(&tmp[0])) {
                            if (func_020632fc(&tmp[0], out, cnt) == -1) m++;
                        }
                    }
                }
            }
        }
        u32 flagB = 0;
        if (m == 0) {
            if (a4 != NULL) {
                return 0;
            }
            m = row->unk_0c;
            flagB = 1;
        }
        u32 pick = r->vfunc_0c(m);
        u32 found = 0;
        m = 0;
        for (j = 0; j < row->unk_0c; j++) {
            tmp[1] = row->unk_00(j);
            if (kind == row->unk_08(&tmp[1])) {
                if (func_020632e4(row->unk_04(&tmp[1]), k)) {
                    if (!func_02063258(a4, &tmp[1])) {
                        if (flag1 == 0 || !func_0204b858(&tmp[1])) {
                            if (flagB) {
                                if (pick == m) {
                                    out[cnt++] = tmp[1];
                                    found = 1;
                                    break;
                                } else m++;
                            } else if (func_020632fc(&tmp[1], out, cnt) == -1) {
                                if (pick == m) {
                                    out[cnt++] = tmp[1];
                                    found = 1;
                                    break;
                                } else m++;
                            }
                        }
                    }
                }
            }
        }
        if (found == 0) {
            out[cnt++] = row->unk_00(0);
            result = 0;
        }
    }
    return result;
}

extern "C" void func_02062f94(u16 *out, Unk_02063380 *o, u8 *a, Unk_020dd35c *b, u8 c, u32 d, s32 *e) {
    *out = 0xfff1;
    Unk_02063380 t = *o;
    func_02062f70(out, 1, &t, a, b, c, d, e);
}

extern "C" void func_02062f70(u16 *out, s32 one, Unk_02063380 *o, u8 *a, Unk_020dd35c *b, u8 c, u32 d, s32 *e) {
    func_02062fd4(out, one, o, 1, a, b, c, d, e);
}

extern "C" void func_02062f44(u16 *out, Unk_02063380 *o) {
    Unk_02063380 t = *o;
    func_02062f94(out, &t, 0, 0, 1, 0, 0);
}

extern "C" BOOL func_02062e90(u16 *arr, u32 n, s32 base, u32 cnt, void *a4, s32 a5, s32 a6, Unk_020dd35c *a7, s32 a8) {
    BOOL result = TRUE;
    BOOL t1 = TRUE, f1 = FALSE, t2 = TRUE, f2 = FALSE, f3 = FALSE;
    u16 tmp[2];
    for (u32 i = 0; i < n; i++) {
        func_02062ad4(&tmp[0], base, cnt, arr, i, a4, a5, a6, a7, a8);
        u16 *p = arr + i;
        *p = tmp[0];
        BOOL c;
        if (func_0204b2d4(p)) {
            tmp[1] = 0xfff1;
            c = func_0204b25c(p) == func_0204b25c(&tmp[1]) ? t1 : f1;
        } else {
            c = *p == 0xfff1 ? t2 : f2;
        }
        if (c) result = f3;
    }
    return result;
}

extern "C" void func_02062ad4(u16 *out, s32 base, u32 cnt, u16 *list, u32 listLen, void *a5, s32 a6, s32 a7, Unk_020dd35c *rng, s32 a9) {
    u16 v[4];
    s32 step;
    Unk_020dd35c dflt;
    Unk_020dd35c *obj;
    if (rng != 0) obj = rng;
    else obj = &dflt;
    v[0] = base;
    step = func_0204b2d4(&v[0]) ? 2 : 0;
    u32 count = 0;
    {
        BOOL r = FALSE;
        if (v[0] >= 0x450c && v[0] <= 0x45db) r = TRUE;
        if (r || (v[0] >= 0x45dc && v[0] <= 0x47d7) || (v[0] >= 0x1323 && v[0] <= 0x1368)) a9 = 0;
    }
    u32 i = 0;
    BOOL z40, z3c;
    BOOL z2c = FALSE, z34 = FALSE, z38 = FALSE;
    z3c = FALSE;
    z40 = FALSE;
    BOOL z44 = FALSE;
    for (; i < cnt; i++) {
        v[2] = base + (i << step);
        BOOL found = z2c;
        u32 j = z2c;
        for (; j < listLen; j++) {
            BOOL m;
            if (func_0204b2d4(&v[2])) {
                m = func_0204b25c(&v[2]) == func_0204b25c(list + j) ? TRUE : z34;
            } else {
                m = v[2] == list[j] ? TRUE : z38;
            }
            if (m) {
                found = TRUE;
                break;
            }
        }
        if (found) continue;
        BOOL r = z3c;
        if (v[2] >= 0x11a8 && v[2] <= 0x12a7) r = TRUE;
        BOOL ok;
        if (r) {
            if (a7 == 10) ok = TRUE;
            else if (a7 == func_0204b820(&v[2])) ok = TRUE; else ok = z40;
        } else {
            ok = TRUE;
        }
        if (!ok) continue;
        s32 t = z44;
        if (func_0204b300(&v[2])) t = func_02061e0c(&v[2]);
        else if (func_0204b2d4(&v[2])) t = func_0205327c(&v[2]);
        if (t == 0x19 || t == 0x18) continue;
        if (a9 && func_0204b858(&v[2])) continue;
        if (a5) {
            if (a6) {
                if (func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(a5), &v[2])) count++;
            } else {
                if (!func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(a5), &v[2])) count++;
            }
        } else {
            count++;
        }
    }
    BOOL flag = FALSE;
    if (count == 0) {
        if (a5) {
            *out = 0xfff1;
            return;
        }
        flag = TRUE;
        count = cnt;
    }
    u32 pick = obj->vfunc_0c(count);
    u32 idx = 0;
    u32 i2 = 0;
    BOOL z5c, z58;
    BOOL z48 = FALSE, z50 = FALSE, z54 = FALSE;
    z58 = FALSE;
    z5c = FALSE;
    BOOL z60 = FALSE;
    for (; i2 < cnt; i2++) {
        v[3] = base + (i2 << step);
        BOOL found = z48;
        if (!flag) {
            u32 j = z48;
            for (; j < listLen; j++) {
                BOOL m;
                if (func_0204b2d4(&v[3])) {
                    m = func_0204b25c(&v[3]) == func_0204b25c(list + j) ? TRUE : z50;
                } else {
                    m = v[3] == list[j] ? TRUE : z54;
                }
                if (m) {
                    found = TRUE;
                    break;
                }
            }
        }
        if (found) continue;
        BOOL r = z58;
        if (v[3] >= 0x11a8 && v[3] <= 0x12a7) r = TRUE;
        BOOL ok;
        if (r) {
            if (a7 == 10) ok = TRUE;
            else if (a7 == func_0204b820(&v[3])) ok = TRUE; else ok = z5c;
        } else {
            ok = TRUE;
        }
        if (!ok) continue;
        s32 t = z60;
        if (func_0204b300(&v[3])) t = func_02061e0c(&v[3]);
        else if (func_0204b2d4(&v[3])) t = func_0205327c(&v[3]);
        if (t == 0x19 || t == 0x18) continue;
        if (a9 && func_0204b858(&v[3])) continue;
        if (a5) {
            if (a6) {
                if (func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(a5), &v[3])) {
                    if (pick == idx) {
                        *out = v[3];
                        return;
                    }
                    idx++;
                }
            } else {
                if (!func_0203c4cc(_ZN12Unk_0209865c13func_020986c8Ev(a5), &v[3])) {
                    if (pick == idx) {
                        *out = v[3];
                        return;
                    }
                    idx++;
                }
            }
        } else {
            if (pick == idx) {
                *out = v[3];
                return;
            }
            idx++;
        }
    }
    *out = 0xfff1;
}

extern "C" void func_0206277c(u16 *out, u8 *a, Unk_020dd35c *rng) {
    u16 t0, t1, t2, t3, t4, t5, t6, t7, t8;
    u16 e1, e2;
    Unk_020dd35c dflt;
    Unk_020dd35c *obj;
    if (rng != 0) obj = rng;
    else obj = &dflt;
    u8 mask[3] = {1, 1, 1};
    u16 h[9];
    __cxa_vec_ctor(h, 9, 2, _ZN12Unk_0203442cC1Ev, _ZN12Unk_0203442cD1Ev);
    {
        Unk_02063380 o;
        o.func_0206338c(0, 1);
        func_02062f94(&t0, &o, a, rng, 1, 1, 0);
        h[0] = t0;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(4, 1);
        func_02062f94(&t1, &o, a, rng, 1, 1, 0);
        h[1] = t1;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(3, 1);
        func_02062f94(&t2, &o, a, rng, 1, 1, 0);
        h[2] = t2;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(0, 2);
        func_02062f94(&t3, &o, a, rng, 1, 1, 0);
        h[3] = t3;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(4, 2);
        func_02062f94(&t4, &o, a, rng, 1, 1, 0);
        h[4] = t4;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(3, 2);
        func_02062f94(&t5, &o, a, rng, 1, 1, 0);
        h[5] = t5;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(0, 3);
        func_02062f94(&t6, &o, a, rng, 1, 1, 0);
        h[6] = t6;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(4, 3);
        func_02062f94(&t7, &o, a, rng, 1, 1, 0);
        h[7] = t7;
    }
    {
        Unk_02063380 o;
        o.func_0206338c(3, 3);
        func_02062f94(&t8, &o, a, rng, 1, 1, 0);
        h[8] = t8;
    }
    u32 idx;
    u32 count;
    u32 pick;
    u32 acc;
    u32 pick2;
    u32 j;
    u32 cnt;
    u32 k;
    for (;;) {
        count = 0;
        for (k = 0; k < 3; k++) {
            if (mask[k]) count += func_02063600(k);
        }
        if (count == 0) break;
        pick = obj->vfunc_0c(count);
        acc = 0;
        for (k = 0; k < 3; k++) {
            if (mask[k]) {
                acc += func_02063600(k);
                if (pick < acc) {
                    cnt = 0;
                    j = 0;
                    for (; j < 3; j++) {
                        if (!Unk_0206277c_Bad1((u16 *)((u8 *)h + k * 6 + j * 2), &e1)) cnt++;
                    }
                    if (cnt == 0) {
                        mask[k] = 0;
                        goto next;
                    }
                    pick2 = obj->vfunc_0c(cnt);
                    idx = 0;
                    for (j = 0; j < 3; j++) {
                        u16 *p = (u16 *)((u8 *)h + k * 6 + j * 2);
                        if (!Unk_0206277c_Bad2(p, &e2)) {
                            if (idx == pick2) {
                                *out = *p;
                                __cxa_vec_cleanup(h, 9, 2, _ZN12Unk_0203442cD1Ev);
                                return;
                            }
                            idx++;
                        }
                    }
                }
            }
        }
    next:;
    }
    *out = 0xfff1;
    __cxa_vec_cleanup(h, 9, 2, _ZN12Unk_0203442cD1Ev);
}

extern "C" s32 func_02062744(u16 *p) {
    u32 i;
    for (i = 0; i < 9; i++) {
        if (data_020cb640[i].unk_10(p)) return i;
    }
    return 9;
}

extern "C" s32 func_020626cc(u16 *p, s32 mode) {
    s32 idx = func_02062744(p);
    if (idx != 9) {
        u8 *g = data_021d7350;
        const Unk_02062fd4_Row *t = data_020cb640 + idx;
        s32 v = (t->unk_08)(p);
        if (mode != 0) return v;
        {
            Unk_020635d8 *base = ((Unk_02063578 *)(g + 0x15fbc))->func_02063570(idx);
            s32 z = 0;
            for (u32 i = 0; i < 3; i++) {
                if (v == base->func_02063654(((volatile u32 *)data_020cb620)[i], (Unk_020dd35c *)z)) return ((volatile u32 *)data_020cb620)[i];
            }
        }
        return v;
    }
    return 0x18;
}

extern "C" BOOL func_020626a8(u16 *p) {
    if (func_0204b2d4(p)) {
        if (func_020626cc(p, 0) == 4) return TRUE;
    }
    return FALSE;
}

u8 Unk_020dd344::vfunc_08() { return unk_0a; }

u8 Unk_020dd344::vfunc_04() { return unk_09; }

u8 Unk_020dd344::vfunc_00() { return unk_08; }

