#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u32 data_ov133_02295148[];
extern u32 data_ov133_02295190[];
extern u8 data_ov133_0229513c[];
extern u16 data_ov133_022952a0[];
extern u8 data_021ef5f0[];

void func_0206ee80(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
void func_0200402c(s32 v);
void func_02003f2c(u32 a);
void *func_02076cf0(void *p);
BOOL func_02076e38(void *a, u8 *buf);
void *func_0209750c();
void *func_02098680(void *h);
void *func_02076c80(void *p);
void func_02076f1c(void *p);
BOOL func_02076e88(void *out, u8 *data, void *ctx);
void func_0206ecf8(u32 v);
u32 func_0206ed50();
void func_02076cf4(void *p);
void func_ov090_02291964();
void func_ov094_0229277c();
s32 func_0206e5cc();
s32 func_02072e88(void *g, s32 v);
s32 func_020eaf18();
s32 func_0206ed38();
void *func_02076e1c(void *p);
BOOL func_020e9c78(u32 a, void *b);
void *func_020ed174(void *p);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220125c(u32 v);
}

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
};
extern "C" Unk_020cbb18 *data_020cbb18;

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Element at +0xb0 (dtor = main func_0206fca8), 0x40 bytes
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    u8 unk_04[0x3c];
};

class Unk_ov133_02202658 {
public:
    Unk_ov133_02202658();
    virtual ~Unk_ov133_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202a40(s32 x, s32 y);
    u32 unk_04[0x60 / 4];
};

// Object at +0x154 (0x108 bytes); ctor func_ov002_02203968's counterpart, dtor func_ov002_02203968
class Unk_ov133_02203994 {
public:
    Unk_ov133_02203994();
    ~Unk_ov133_02203994();
    BOOL func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
    void func_ov002_022030ac(u8 v);
    u32 unk_00[0x108 / 4];
};

// Menu/message cursor buffer objects at +0x2b8 and +0x2dc (0x24 bytes each)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    u8 unk_04[0x20];
};

// Object at +0x1300 (dtor func_ov002_022043e8)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    u32 unk_00[4];
};

// Local object with empty out-of-line ctor/dtor (func_02076f74 / func_02076f70)
class Unk_ov133_02293efc_Loc {
public:
    Unk_ov133_02293efc_Loc();
    ~Unk_ov133_02293efc_Loc();
    u32 v[3];
};

// Vtable 0x022952bc
class Unk_ov133_022952bc : public Unk_ov002_022044e4 {
public:
    Unk_ov133_022952bc() {}
    virtual ~Unk_ov133_022952bc();

    // in range
    void func_ov133_02293760(u32 m);
    void func_ov133_02293770(u32 m);
    BOOL func_ov133_02293780(u32 m);
    void func_ov133_02293794(s32 idx);
    void func_ov133_022937b0(s32 idx);
    void func_ov133_022937bc(s32 idx, u32 to);
    void func_ov133_02293814();
    BOOL func_ov133_02293854();
    void func_ov133_02293884();
    BOOL func_ov133_0229388c();
    void func_ov133_022938cc();
    void func_ov133_02293988();
    void func_ov133_022939e4();
    s32 func_ov133_02293acc();
    BOOL func_ov133_02293ae8(u8 v);
    void func_ov133_02293b88();
    BOOL func_ov133_02293be0(s32 f);
    void func_ov133_02293c78();
    void func_ov133_02293ca4();
    void func_ov133_02293cdc(s32 x);
    void func_ov133_02293d18(u8 x);
    s32 func_ov133_02293d3c();
    BOOL func_ov133_02293d64(u32 key);
    BOOL func_ov133_02293dec(s32 a);
    s32 func_ov133_02293e48();
    void func_ov133_02293eac();
    void func_ov133_02293efc();

    // callees in other groups
    BOOL func_ov133_0229405c();
    BOOL func_ov133_022940b4(void *p);
    void *func_ov133_02294110();
    void func_ov133_0229454c(s32 a, s32 b);
    s32 func_ov133_02294410();
    s32 func_ov133_02294460();
    void func_ov133_02294d88(s32 a);

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u16 unk_98;
    /* 0x09a */ u16 unk_9a;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ u8 unk_a0;
    /* 0x0a1 */ u8 unk_a1;
    /* 0x0a2 */ u8 unk_a2;
    /* 0x0a3 */ u8 unk_a3;
    /* 0x0a4 */ u8 unk_a4[12];
    /* 0x0b0 */ Unk_020e0488 unk_b0[1];
    /* 0x0f0 */ Unk_ov133_02202658 unk_f0;
    /* 0x154 */ Unk_ov133_02203994 unk_154;
    /* 0x25c */ u8 unk_25c[0x5c];
    /* 0x2b8 */ Unk_020e45f8 unk_2b8;
    /* 0x2dc */ Unk_020e45f8 unk_2dc;
    /* 0x300 */ u16 unk_300[0x400];
    /* 0xb00 */ u16 unk_b00[0x400];
    /* 0x1300 */ Unk_ov002_022040ec unk_1300;
};

void Unk_ov133_022952bc::func_ov133_02293760(u32 m) { unk_98 = unk_98 & ~m; }

void Unk_ov133_022952bc::func_ov133_02293770(u32 m) { unk_98 = unk_98 | m; }

BOOL Unk_ov133_022952bc::func_ov133_02293780(u32 m) {
    if (unk_98 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov133_022952bc::func_ov133_02293794(s32 idx) {
    u32 to;
    if ((u8)(idx + 0xf6) <= 1) {
        to = 1;
    } else {
        to = 2;
    }
    func_ov133_022937bc(idx, to);
}

void Unk_ov133_022952bc::func_ov133_022937b0(s32 idx) { func_ov133_022937bc(idx, 3); }

void Unk_ov133_022952bc::func_ov133_022937bc(s32 idx, u32 to) {
    s32 m = idx % 3;
    u32 x0 = data_ov133_02295148[m];
    u32 x1;
    if (m == 0) {
        x1 = x0 + 4;
    } else {
        x1 = x0 + 3;
    }
    u32 y0 = data_ov133_02295190[idx];
    func_0206ee80(unk_300, x0, y0, x1, y0 + 1, to);
    func_ov133_02293770(2);
}

void Unk_ov133_022952bc::func_ov133_02293814() {
    func_0206ee80(unk_300, 9, 0xc, 0x15, 0x14, 2);
    func_ov133_02293794(0xb);
    func_ov133_02293794(0xa);
    func_ov133_02293770(2);
}

BOOL Unk_ov133_022952bc::func_ov133_02293854() {
    if (unk_9d != 0) {
        unk_9d = *(volatile u8 *)&unk_9d - 1;
        if (unk_9d == 0) {
            unk_9d = 2;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov133_022952bc::func_ov133_02293884() { unk_9d = 0; }

BOOL Unk_ov133_022952bc::func_ov133_0229388c() {
    func_ov133_02293814();
    unk_a0 = unk_9c;
    func_ov133_022937b0(unk_a0);
    unk_9d = 0xd;
    unk_9e = 5;
    return func_ov133_02293dec(1);
}

void Unk_ov133_022952bc::func_ov133_022938cc() {
    if (func_ov133_02293780(8)) {
        func_ov133_022939e4();
        func_ov133_02293760(8);
        func_ov133_02293770(4);
    }
    if (func_ov133_02293780(0x10)) {
        func_ov133_02293988();
        func_ov133_02293760(0x10);
        func_ov133_02293770(4);
    }
    if (func_ov133_02293780(2)) {
        if (unk_2b8.func_020b86c0((u32)unk_300, 4, 0x800, 0)) {
            func_ov133_02293760(2);
        }
    }
    if (func_ov133_02293780(4)) {
        if (unk_2dc.func_020b86c0((u32)unk_b00, 6, 0x800, 0)) {
            func_ov133_02293760(4);
        }
    }
}

void Unk_ov133_022952bc::func_ov133_02293988() {
    func_0206ee80(unk_b00, 4, 7, 0x1b, 8, 4);
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a != b) {
        s32 lo, hi;
        if (a > b) {
            lo = b;
            hi = a;
        } else {
            lo = a;
            hi = b;
        }
        s32 x0 = lo * 2 + 4;
        s32 x1 = hi * 2 + 3;
        func_0206ee80(unk_b00, x0, 7, x1, 8, 8);
    }
}

void Unk_ov133_022952bc::func_ov133_022939e4() {
    s32 i;
    u16 *p = unk_b00;
    p += 0xe4;
    for (i = 0; i < 12; p += 2, i++) {
        u32 c = unk_a4[i];
        if (c == 10) {
            p[0] = (p[0] & 0xfc00) | 0x176;
            p[1] = (p[1] & 0xfc00) | 0x176;
            p[0x20] = (p[0x20] & 0xfc00) | 0x176;
            p[0x21] = (p[0x21] & 0xfc00) | 0x176;
        } else {
            u32 v = c * 4 + 0x84;
            p[0] = (p[0] & 0xfc00) | v;
            p[1] = (p[1] & 0xfc00) | (v + 1);
            p[0x20] = (p[0x20] & 0xfc00) | (v + 2);
            p[0x21] = (p[0x21] & 0xfc00) | (v + 3);
        }
    }
    if (unk_154.func_ov002_02202fac(6)) {
        if (unk_a4[11] != 10) {
            unk_154.func_ov002_02202fc8(6);
        }
    } else if (unk_a4[11] == 10) {
        unk_154.func_ov002_02202fe4(6);
    }
}

s32 Unk_ov133_022952bc::func_ov133_02293acc() {
    s32 i;
    for (i = 0; i < 12; i++) {
        if (unk_a4[i] == 10) {
            return i;
        }
    }
    return 12;
}

BOOL Unk_ov133_022952bc::func_ov133_02293ae8(u8 v) {
    s32 i;
    if (unk_9f == 12 && unk_a2 == unk_a3) {
        func_0200402c(0x34);
        return FALSE;
    }
    u32 b = unk_a3;
    u32 a = unk_a2;
    if (a == b && unk_a4[11] != 10) {
        func_0200402c(0x34);
        return FALSE;
    }
    if (a != b) {
        func_ov133_02293b88();
    }
    for (i = 11; i > unk_9f; i--) {
        unk_a4[i] = unk_a4[i - 1];
    }
    unk_a4[unk_9f] = v;
    func_ov133_02293d18(unk_9f + 1);
    func_ov133_02293770(8);
    return TRUE;
}

void Unk_ov133_022952bc::func_ov133_02293b88() {
    u32 b = unk_a3;
    u32 a = unk_a2;
    s32 lo, hi;
    if (a < b) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    func_ov133_02293d18(lo);
    for (; hi < 12; lo++, hi++) {
        unk_a4[lo] = unk_a4[hi];
    }
    for (; lo < 12; lo++) {
        unk_a4[lo] = 10;
    }
    func_ov133_02293770(8);
}

BOOL Unk_ov133_022952bc::func_ov133_02293be0(s32 f) {
    s32 i;
    if (unk_a2 != unk_a3) {
        func_ov133_02293b88();
        func_0200402c(0x35);
        return TRUE;
    }
    if (unk_9f == 0) {
        if (unk_a4[0] != 10) {
            unk_9f = 1;
        } else {
            if (f) {
                func_0200402c(0x34);
            }
            return FALSE;
        }
    }
    for (i = unk_9f; i < 12; i++) {
        unk_a4[i - 1] = unk_a4[i];
    }
    unk_a4[11] = 10;
    func_ov133_02293770(8);
    func_ov133_02293d18(unk_9f - 1);
    func_0200402c(0x35);
    return TRUE;
}

void Unk_ov133_022952bc::func_ov133_02293c78() {
    s32 i;
    for (i = 0; i < 12; i++) {
        unk_a4[i] = 10;
    }
    func_ov133_02293d18(0);
    func_ov133_02293770(8);
}

void Unk_ov133_022952bc::func_ov133_02293ca4() {
    if (func_02076e38(func_02076cf0(func_ov133_02294110()), unk_a4)) {
        func_ov133_02293d18(0);
        func_ov133_02293770(8);
    } else {
        func_ov133_02293c78();
    }
}

void Unk_ov133_022952bc::func_ov133_02293cdc(s32 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    if (unk_a2 != x) {
        func_0200402c(0x15);
    }
    unk_a2 = x;
    func_ov133_02293770(0x10);
}

void Unk_ov133_022952bc::func_ov133_02293d18(u8 x) {
    unk_9f = x;
    unk_a1 = 0x10;
    unk_a2 = x;
    unk_a3 = x;
    func_ov133_02293770(0x10);
}

s32 Unk_ov133_022952bc::func_ov133_02293d3c() {
    s32 v = data_021ef5f0[0] - 0x18;
    if (v < 0) {
        v = 0;
    }
    s32 r = v >> 4;
    s32 n = func_ov133_02293acc();
    if (r > n) {
        r = n;
    }
    return r;
}

BOOL Unk_ov133_022952bc::func_ov133_02293d64(u32 key) {
    u32 old = unk_9f;
    if (func_ov002_0220126c(key)) {
        if (unk_9f != 0) {
            unk_9f = *(volatile u8 *)&unk_9f - 1;
        }
    } else if (func_ov002_0220125c(key)) {
        if (func_ov133_02293acc() > *(volatile u8 *)&unk_9f) {
            unk_9f = *(volatile u8 *)&unk_9f + 1;
        }
    }
    if (old != *(volatile u8 *)&unk_9f) {
        s32 x = func_ov133_02294460();
        s32 y = func_ov133_02294410();
        unk_f0.func_ov002_02202a40(x, y);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov133_022952bc::func_ov133_02293dec(s32 a) {
    u32 st = unk_9c;
    switch (st) {
    case 11:
        if (a) {
            func_ov133_02293c78();
            func_ov094_0229277c();
        }
        unk_9d = 0;
        return FALSE;
    case 10:
        func_ov133_02293be0(1);
        return TRUE;
    default:
        if (st <= 9) {
            u8 v = data_ov133_0229513c[st];
            if (func_ov133_02293ae8(v)) {
                func_02003f2c(data_ov133_022952a0[v]);
            }
        }
        return TRUE;
    }
}

s32 Unk_ov133_022952bc::func_ov133_02293e48() {
    u32 st = unk_9c;
    if (st <= 11) {
        if (func_ov133_0229388c()) {
            func_ov002_02200a58(7);
            return 1;
        }
        return 2;
    }
    switch (st) {
    case 12:
        break;
    case 13:
        if (!unk_154.func_ov002_02202fac(6)) {
            func_ov133_02293efc();
            return 1;
        }
        return 0;
    case 14:
        func_ov133_02293eac();
        return 1;
    }
    return 0;
}

void Unk_ov133_022952bc::func_ov133_02293eac() {
    func_0206ecf8(0);
    unk_154.func_ov002_022030ac(7);
    func_ov002_02200a50(3);
    func_ov002_02200a58(10);
    func_ov133_02294d88(6);
    if (func_0206ed50() == 0xe) {
        func_02076cf4(func_ov133_02294110());
    }
    func_0200402c(0x28);
}

void Unk_ov133_022952bc::func_ov133_02293efc() {
    void *h = func_0209750c();
    Unk_ov133_02293efc_Loc l;
    func_02076f1c(&l);
    if (!func_02076e88(&l, unk_a4, func_02076c80(func_02098680(h)))) {
        func_ov133_0229454c(0x19, 0);
        func_0200402c(0x73);
        return;
    }
    if (func_ov133_0229405c()) {
        func_ov133_0229454c(0x1d, 0);
        func_0200402c(0x73);
        return;
    }
    if (func_ov133_022940b4(&l)) {
        func_ov133_0229454c(0x14, 0);
        func_0200402c(0x73);
        return;
    }
    void *s = func_ov133_02294110();
    void *t = func_02076cf0(s);
    func_02076e88(t, unk_a4, func_02076c80(func_02098680(h)));
    func_0206ecf8(1);
    unk_154.func_ov002_022030ac(6);
    func_ov002_02200a50(3);
    func_ov002_02200a58(10);
    func_0200402c(0x29);
    if (func_0206ed50() == 0xe) {
        func_ov133_02294d88(0xc);
    } else {
        func_020ed174(this);
        func_ov090_02291964();
        func_ov133_02294d88(6);
        func_0206e5cc();
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            switch (func_020eaf18()) {
            case 3:
            case 4: {
                s32 pl = func_0206ed38();
                void *x = func_02076e1c(func_02076cf0(s));
                if (!func_020e9c78((u8)pl, x)) {
                    func_ov002_02200a58(0xc);
                    return;
                }
            }
            }
        }
    }
}

Unk_ov133_022952bc::~Unk_ov133_022952bc() {}
