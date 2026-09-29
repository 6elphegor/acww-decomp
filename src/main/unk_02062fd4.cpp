#include "types.h"

extern "C" {
u32 func_020e7f90(void *st, u32 n);
void func_020e7fcc(void *st, u32 v);
void func_0209d498(void *p);
u8 *func_020986c8(void);
BOOL func_0203c4cc(u8 *base, u16 *p);
BOOL func_0204b858(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u16 func_0204b318(u32 a, s32 b);
s32 func_0204b248(s32 a, s32 b);
s32 func_0205b4e0(void);
s32 func_0205b4ec(void);
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_02063b8c(s32 a);
void func_02116048(void *, void *, u32);
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
void _ZdlPv(void *);
s32 func_02063274(s32 a, u32 b);
BOOL func_020632e4(s32 a, s32 b);
BOOL func_02063258(u8 *p, u16 *q);
s32 func_020632fc(u16 *c, u16 *arr, u32 n);
}

class Unk_020e2a78;

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ u8 unk_04[10];
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

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

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void func_020637e8(void *p, u32 n);

    /* 0x0e */ u8 unk_0e[14];
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

extern Unk_02063578 data_021ed30c;
extern u8 data_020cb62c[];
extern u8 data_021c7c88[];
extern "C" u32 func_020633c4(u32 a, u32 b, u32 c);

// ---------------------------------------------------------------------------
struct Unk_02063380 {
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
    void *unk_10;
};
extern Unk_02062fd4_Row data_020cb640[];
extern u8 data_021d7350[];

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
        Unk_02062fd4_Row *row = data_020cb640 + type;
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

extern "C" BOOL func_02063258(u8 *p, u16 *q) {
    if (p != NULL) {
        return func_0203c4cc(func_020986c8(), q);
    }
    return FALSE;
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

extern "C" BOOL func_020632e4(s32 a, s32 b) {
    BOOL r = FALSE;
    if (a == -1 || a == 4 || a == b) r = TRUE;
    return r;
}

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

extern "C" s32 func_02063360(void) { return -1; }

extern "C" u16 func_02063368(u32 a) { return func_0204b318(a, 4); }

extern "C" s32 func_02063374(s32 a) { return func_0204b248(a, 0); }

extern "C" void func_02063388(void) {}

s32 Unk_02063380::func_02063380() { return unk_04; }
s32 Unk_02063380::func_02063384() { return unk_00; }
void Unk_02063380::func_0206338c(s32 a, s32 b) {
    unk_00 = a;
    unk_04 = b;
}

u32 Unk_020dd344::vfunc_0c(u32 n) { return func_020e7f90(&unk_04, n); }

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

// ---------------------------------------------------------------------------
Unk_020dd35c::Unk_020dd35c() {}
Unk_020dd35c::~Unk_020dd35c() {}

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

void Unk_020dd344::func_020633a0(u8 a, u8 b, u8 c) {
    unk_08 = a;
    unk_09 = b;
    unk_0a = c;
    func_020e7fcc(&unk_04, func_020633c4(a, b, c));
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

Unk_020635d8::Unk_020635d8() {}
Unk_020635d8::~Unk_020635d8() {}

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

u32 Unk_020635d8::func_020635d8(u32 x) {
    u8 *p = func_020637a0();
    for (u32 i = 0; i < 3; i++) {
        if (x == p[i]) return i + 1;
    }
    return 1;
}

u32 Unk_020635d8::func_020635fc() { return unk_00; }

extern "C" u8 func_02063600(u32 idx) {
    u32 m = (u8)func_01ffc5a4(func_0205b4e0() + func_0205b4ec(), 0xa000);
    u8 t[3] = {0, 30, 0};
    t[0] = 0x3c - m;
    t[2] = m + 10;
    if (idx < 3) return t[idx];
    return t[0];
}

u8 *Unk_020635d8::func_020637a0() {
    if (unk_00 >= 6) unk_00 = unk_00 % 6;
    return data_020cb62c + unk_00 * 3;
}

void Unk_020635d8::func_020637c8() { unk_00 = func_02063b8c(6); }

u32 Unk_020dd374::vfunc_08() { return 8; }
u8 *Unk_020dd374::vfunc_0c() { return unk_0e; }
void Unk_020dd374::func_020637e8(void *p, u32 n) { func_02116048(unk_0e, p, n); }
Unk_020dd374::Unk_020dd374() {}
Unk_020dd374::~Unk_020dd374() {}

u32 Unk_020dd38c::vfunc_08() { return 9; }
u8 *Unk_020dd38c::vfunc_0c() { return (u8 *)this + 0x12; }
Unk_020dd38c::Unk_020dd38c() {}
Unk_020dd38c::~Unk_020dd38c() {}

extern "C" void func_020638a0(u8 *dst, Unk_020e2a78 *src) {
    Unk_020dd374 buf;
    buf.func_020a77f8(src);
    buf.func_020637e8(dst + 2, 8);
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
