#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_0200402c(s32 a);
BOOL func_0203a35c();
u32 func_0204be70(u16 *p);
u32 func_0204b718(u32 v, s32 a, s32 *out);
BOOL func_0204bab8(u16 *p);
BOOL func_0204bae0(u16 *p);
s32 func_0206e8f4(s32 a);
BOOL func_0206ef0c();
void *func_0209750c();
void *func_02098750(void *p);
s32 func_02097ac4(void *p, s32 a, s32 b);
s32 func_02097d1c(void *p, s32 a);
s32 func_02094b48(u16 *p);
s32 func_02094b78(u16 *p);
s32 func_02094bc0();
s32 func_02094be0(u16 *p);
s32 func_02094bec(u16 *p);
s32 func_02094bf8(u16 *p);
s32 func_02094fa8();
s32 func_02094fb4();
s32 func_020951ac();
void func_020986f0(void *o, u16 *p);
u16 *func_020986fc(void *o);
void func_02098708(void *o, u16 *p);
u16 *func_02098714(void *o);
void func_02098720(void *o, u16 *p);
u16 *func_0209872c(void *o);
u16 *func_02098744(void *o);
void func_ov094_022926c8(void *o, u32 v);
void func_ov094_0229341c(void *o, u32 id, u32 b);
}

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x2498 sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    void func_ov002_02202844();
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);

    u8 unk_4b[0x64 - 0x4b];
};

// +0x24fc sub-object (0x300 bytes; declaration in src/ov002/unk_02200fa8.cpp)
class Unk_ov002_022013ac {
public:
    u32 func_ov002_02201494();
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();

    u8 unk_00[0x300];
};

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
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

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

// Vtable 0x0229aea8 (size 0x2d80)
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    Unk_ov096_0229aea8();
    virtual ~Unk_ov096_0229aea8();

    // out of range
    BOOL func_ov096_02294dbc(u32 mask);
    void func_ov096_02294d9c(u32 mask);
    BOOL func_ov096_022965ac(u16 id);
    void func_ov096_022966e8();
    s32 func_ov096_022972ec(s32 a);
    s32 func_ov096_02297cc0(u32 a);
    s32 func_ov096_02297d50(u32 a);
    void func_ov096_02298334(s32 a, s32 b, s32 c);
    void func_ov096_022983cc(u32 a, s32 b);
    void func_ov096_0229865c();
    void func_ov096_02298a14();
    BOOL func_ov096_022982d0(u32 a);

    // in range
    s32 func_ov096_022968bc();
    s32 func_ov096_022968cc();
    void func_ov096_02296910();
    void func_ov096_02296964();
    s32 func_ov096_022969bc(u16 *a, s32 f, u16 *b, u8 g);
    u32 func_ov096_02296b68(u16 v);
    void func_ov096_02296bb8(u16 v);
    void func_ov096_02296be8(s32 v);
    s32 func_ov096_02296c18();
    BOOL func_ov096_02296c30(s32 flag);
    BOOL func_ov096_02296cac();
    void func_ov096_02296d18();
    void func_ov096_02296d5c();
    BOOL func_ov096_02296d88(s32 k);
    BOOL func_ov096_02296dbc(s32 k, u16 v);
    u16 func_ov096_02296e70(s32 k, u16 v);
    u16 func_ov096_02296f64(s32 k);
    s32 func_ov096_02296fb8();
    void func_ov096_0229713c();
    void func_ov096_02297160();
    BOOL func_ov096_02297170();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u8 unk_98[0xa4 - 0x98];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ u8 unk_ae[2];
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2[2];
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6[6];
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd[3];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1[0x358 - 0xc1];
    /* 0x358 */ u8 unk_358[0xde0 - 0x358];
    /* 0xde0 */ u8 unk_de0[0x2498 - 0xde0];
    /* 0x2498 */ Unk_ov002_02204630 unk_2498;
    /* 0x24fc */ Unk_ov002_022013ac unk_24fc;
};

static inline BOOL Unk_ov096_022968bc_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------

s32 Unk_ov096_0229aea8::func_ov096_022968bc() {
    return func_ov096_02297cc0(unk_b5);
}

s32 Unk_ov096_0229aea8::func_ov096_022968cc() {
    s32 t = func_ov096_02297d50(unk_b5);
    if (func_ov096_02294dbc(0x20)) {
        t += 0x100;
    } else if (func_ov096_02294dbc(0x10)) {
        t -= 0x100;
    }
    return t + 8;
}

void Unk_ov096_0229aea8::func_ov096_02296910() {
    unk_bc = unk_24fc.func_ov002_02201494() - 1;
    s32 a = unk_24fc.func_ov002_022014a4();
    s32 b = unk_24fc.func_ov002_02201498(unk_bc);
    unk_2498.func_ov002_02202a40(a, b);
    unk_2498.func_ov002_02202d00(7);
}

void Unk_ov096_0229aea8::func_ov096_02296964() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    unk_2498.func_ov002_02202a40(a, b);
    if (func_ov096_022982d0(unk_b5)) {
        unk_2498.func_ov002_02202d00(0xd);
    } else {
        unk_2498.func_ov002_02202d00(1);
    }
    func_ov096_022966e8();
}

s32 Unk_ov096_0229aea8::func_ov096_02296c18() {
    return func_02097d1c(func_02098750(func_0209750c()), 0);
}

void Unk_ov096_0229aea8::func_ov096_02296be8(s32 v) {
    func_02097ac4(func_02098750(func_0209750c()), v, 0);
    func_ov094_022926c8(unk_de0 + 0, 0);
}

void Unk_ov096_0229aea8::func_ov096_02296bb8(u16 v) {
    u16 t = v;
    u32 a = func_0204be70(&t);
    func_ov096_02296c18();
    u32 b = func_ov096_02296c18();
    func_ov096_02296be8(b - a);
}

u32 Unk_ov096_0229aea8::func_ov096_02296b68(u16 v) {
    u16 t = v;
    u32 e;
    u32 a = func_0204be70(&t);
    s32 x;
    a += func_ov096_02296c18();
    u32 r = 0xfff1;
    if (a > 0x1869f) {
        e = a - 0x1869f;
        r = func_0204b718(e, 1, &x);
        a -= e + x;
    }
    func_ov096_02296be8(a);
    return r;
}

void Unk_ov096_0229aea8::func_ov096_02296d5c() {
    func_ov096_0229865c();
    func_ov096_022972ec(1);
    if (unk_c0 == 0) {
        func_ov096_02298334(7, 0xff, 1);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_02296d88(s32 k) {
    switch (k) {
    case 5:
        return func_02094fa8();
    case 7:
    case 8:
        if (func_020951ac()) {
            return FALSE;
        }
        return TRUE;
    default:
        return func_02094fb4();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229713c() {
    func_ov002_02200a58(0x25);
    func_ov096_02298a14();
    func_ov096_02294d9c(0x8000);
}

void Unk_ov096_0229aea8::func_ov096_02297160() {
    unk_b1 = 0;
    func_0206e8f4(0);
}

BOOL Unk_ov096_0229aea8::func_ov096_02296c30(s32 flag) {
    if (unk_b1 != 2) {
        return FALSE;
    }
    if (unk_b0 != 0) {
        return FALSE;
    }
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        if (flag) {
            if (func_0204be70((u16 *)&t) + func_ov096_02296c18() > 0x1869f) {
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov096_0229aea8::func_ov096_02296cac() {
    u16 t = unk_ac;
    func_0204be70(&t);
    u32 r = func_ov096_02296b68(unk_ac);
    if (r == 0xfff1) {
        func_ov096_02297160();
        func_ov096_0229865c();
    } else {
        unk_ac = r;
        func_ov094_0229341c(unk_358 + 0, unk_ac, unk_b0);
        func_ov096_022983cc(unk_b4, 4);
    }
    return TRUE;
}

void Unk_ov096_0229aea8::func_ov096_02296d18() {
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        func_0206e8f4(func_0204be70((u16 *)&t));
    } else {
        func_0206e8f4(0);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_02296dbc(s32 k, u16 v) {
    u16 t = v;
    switch (k) {
    case 2:
        if (func_02094bf8(&t)) {
            return TRUE;
        }
        break;
    case 3:
        if (func_02094bec(&t)) {
            return TRUE;
        }
        break;
    case 6:
        if (func_02094bec(&t)) {
            t = 0xfff1;
            func_02094be0(&t);
            return TRUE;
        }
        break;
    case 4:
        if (func_02094be0(&t)) {
            return TRUE;
        }
        break;
    case 5:
        if (func_02094b78(&t)) {
            return TRUE;
        }
        break;
    case 7:
        if (func_02094b48(&t)) {
            if (!func_0203a35c()) {
                func_0200402c(0x40);
            }
            return TRUE;
        }
        break;
    case 8:
        if (func_02094bc0()) {
            return TRUE;
        }
        break;
    }
    return FALSE;
}

u16 Unk_ov096_0229aea8::func_ov096_02296e70(s32 k, u16 v) {
    u16 r = func_ov096_02296f64(k);
    void *o = func_0209750c();
    volatile u16 t = v;
    switch (k) {
    case 2:
        func_02098720(o, (u16 *)&t);
        t = r;
        if (!Unk_ov096_022968bc_InRange(&t, 0x11a8, 0x12a7)) {
            r = 0xfff1;
        }
        break;
    case 3:
        func_020986f0(o, (u16 *)&t);
        break;
    case 6:
        func_020986f0(o, (u16 *)&t);
        r = func_ov096_02296f64(4);
        t = 0xfff1;
        func_02098708(o, (u16 *)&t);
        break;
    case 4:
        func_02098708(o, (u16 *)&t);
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x1429, 0x1430)) {
            r = 0xfff1;
        }
        break;
    case 5:
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x13a0, 0x13a7)) {
            r = 0xfff1;
        }
        break;
    case 7:
    case 8:
        break;
    }
    return r;
}

u16 Unk_ov096_0229aea8::func_ov096_02296f64(s32 k) {
    void *o = func_0209750c();
    switch (k) {
    case 2:
        return *func_0209872c(o);
    case 3:
        return *func_020986fc(o);
    case 4:
        return *func_02098714(o);
    case 5:
        return *func_02098744(o);
    }
    return 0xfff1;
}

s32 Unk_ov096_0229aea8::func_ov096_02296fb8() {
    if (unk_b1 != 2) {
        return 1;
    }
    if (unk_b0 != 0) {
        return 1;
    }
    volatile u16 t = unk_ac;
    BOOL r = FALSE;
    u32 v = t;
    u32 w = t;
    if (w >= 0x11a8 && v <= 0x12a7) {
        r = TRUE;
    }
    if (r) {
        return 2;
    }
    if ((v >= 0x1431 && v <= 0x1470) || (v >= 0x1471 && v <= 0x1491)) {
        t = func_ov096_02296f64(4);
        u32 b = t;
        u32 a = t;
        if (a != 0xfff1 && b >= 0x13a8 && b <= 0x13c7 && !func_0204bab8((u16 *)&t)) {
            return 6;
        }
        return 3;
    }
    if (v >= 0x13a8 && v <= 0x13c7) {
        if (func_ov096_02296f64(3) != 0xfff1 && !func_0204bab8((u16 *)&t)) {
            return 0;
        }
        return 4;
    }
    if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x1408 && v <= 0x1428)) {
        return 4;
    }
    if (func_0204bae0((u16 *)&t)) {
        return 5;
    }
    BOOL q = FALSE;
    u32 x = t;
    u32 y = t;
    if (y >= 0x1518 && x <= 0x151c) {
        q = TRUE;
    }
    if (q || (x >= 0x1531 && x <= 0x153a) || (x >= 0x153b && x <= 0x1541)) {
        return 7;
    }
    if (x >= 0x155e && x <= 0x155e) {
        return 8;
    }
    return 1;
}

BOOL Unk_ov096_0229aea8::func_ov096_02297170() {
    if (unk_b1 != 2) {
        return FALSE;
    }
    if (unk_b0 != 0) {
        return FALSE;
    }
    volatile u16 t = unk_ac;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd) && unk_b4 == 0x25) {
        return FALSE;
    }
    return func_ov096_022965ac(*(volatile u16 *)&unk_ac);
}

static inline s32 Unk_ov096_022969bc_Idx(u32 v) {
    if (v >= 0x1531 && v <= 0x153a) {
        return v - 0x1531;
    }
    return -1;
}

static inline u16 Unk_ov096_022969bc_Ch(s32 n) {
    if ((u32)n < 10) {
        return n + 0x1531;
    }
    return 0x1531;
}

s32 Unk_ov096_0229aea8::func_ov096_022969bc(u16 *a, s32 f, u16 *b, u8 g) {
    u16 loc[3];
    u32 a4, b4, lim;
    BOOL ok;
    BOOL ok2;
    s32 d0;
    if (f != 0 || g != 0) {
        return 1;
    }
    loc[0] = *a;
    loc[1] = *b;
    ok = FALSE;
    u32 x0 = *(volatile u16 *)&loc[0];
    u32 y0 = *(volatile u16 *)&loc[0];
    if (y0 >= 0x1531 && x0 <= 0x153a) {
        ok = TRUE;
    }
    if (ok) {
        ok2 = FALSE;
        u32 x1 = *(volatile u16 *)&loc[1];
        u32 y1 = *(volatile u16 *)&loc[1];
        if (y1 >= 0x1531 && x1 <= 0x153a) {
            ok2 = TRUE;
        }
        if (ok2) {
            d0 = Unk_ov096_022969bc_Idx(x0) + 1;
            s32 d1 = Unk_ov096_022969bc_Idx(x1) + 1;
            d0 += d1;
            s32 rem;
            if (d0 > 10) {
                rem = d0 - 10;
                d0 = 10;
            } else {
                rem = 0;
            }
            s32 n1 = d0 - 1;
            *a = Unk_ov096_022969bc_Ch(n1);
            if (rem > 0) {
                s32 n2 = rem - 1;
                *b = Unk_ov096_022969bc_Ch(n2);
            } else {
                *b = 0xfff1;
            }
            return 0;
        }
    }
    BOOL q;
    if (x0 >= 0x1492 && x0 <= 0x14fd) {
        q = TRUE;
    } else {
        q = FALSE;
    }
    if (q) {
        BOOL q2 = FALSE;
        u32 x2 = *(volatile u16 *)&loc[1];
        u32 y2 = *(volatile u16 *)&loc[1];
        if (y2 >= 0x1492 && x2 <= 0x14fd) {
            q2 = TRUE;
        }
        if (q2) {
            goto go;
        }
    }
    return 1;
go:
    a4 = func_0204be70(&loc[0]);
    b4 = func_0204be70(&loc[1]);
    loc[2] = 0x14fd;
    lim = func_0204be70(&loc[2]);
    {
        s32 out;
        BOOL n4 = (s32)a4 < 1000 ? TRUE : FALSE;
        BOOL n6 = (s32)b4 < 1000 ? TRUE : FALSE;
        if (n4 != n6) {
            return 2;
        }
        if (a4 == lim || b4 == lim) {
            return 3;
        }
        if ((s32)a4 < 1000) {
            a4 += b4;
            if ((s32)a4 > 1000) {
                b4 = a4 - 1000;
                a4 = 1000;
            } else {
                b4 = 0;
            }
        } else {
            a4 += b4;
            if ((s32)a4 <= (s32)lim) {
                b4 = 0;
            } else {
                b4 = a4 - lim;
                a4 = lim;
            }
        }
        *a = func_0204b718(a4, 1, &out);
        if (b4 == 0) {
            *b = 0xfff1;
        } else {
            *b = func_0204b718(b4, 1, &out);
        }
    }
    return 0;
}
