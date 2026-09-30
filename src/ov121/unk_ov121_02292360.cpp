#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
struct Unk_ov121_Comm {
    u32 unk_00[0x64 / 4];
    s32 unk_64;
};
extern Unk_ov121_Comm *data_020cbb18;
extern u8 data_ov121_02294bd0[];
BOOL func_02072e44(void *p);
u32 func_020b0f54();
s32 func_0209750c();
u16 *func_0209872c(s32 p);
u16 *func_02098714(s32 p);
u16 *func_02098744(s32 p);
void func_02098720(s32 p, u16 *v);
void func_02098708(s32 p, u16 *v);
BOOL func_02094fa8();
BOOL func_02094fb4();
BOOL func_02094bf8(u16 *v);
BOOL func_02094be0(u16 *v);
BOOL func_02094b78(u16 *v);
void func_0208d538(void *p, s32 v);
s32 func_ov090_02291944(s32 v);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_0220288c(void *p);
s32 func_ov002_022028a0(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, s32 v);
u8 func_ov002_02201a70(void *p, s32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

// sub-object at +0x2d8 (dtor func_ov002_022007e8)
class Unk_ov121_sub_022007e8 {
public:
    ~Unk_ov121_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};

// sub-object at +0x398 (virtual dtor func_ov002_02202640)
class Unk_ov121_sub_02202640 {
public:
    virtual ~Unk_ov121_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// sub-object at +0x3fc (dtor func_ov002_022043e8)
class Unk_ov121_sub_022043e8 {
public:
    ~Unk_ov121_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

// sub-object at +0x504 (dtor func_ov002_02202454)
class Unk_ov121_sub_02202454 {
public:
    ~Unk_ov121_sub_02202454();
    u8 unk_00[0x300];
};

// Vtable 0x022044e4 (declaration copied from ov120_000; sub-objects opaque)
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

// Vtable 0x02294d68
class Unk_ov121_02294d68 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov121_02294d68();

    void func_ov121_022923fc(u32 mask);
    void func_ov121_0229240c(u32 mask);
    BOOL func_ov121_0229241c(u32 mask);
    BOOL func_ov121_0229246c(s32 k);
    BOOL func_ov121_02292498(s32 k, u32 v);
    u32 func_ov121_022924e0(s32 k, u32 v);
    u32 func_ov121_02292594(s32 k);
    void func_ov121_022925d0();
    void func_ov121_02292648(u32 v);
    BOOL func_ov121_0229268c(void *pad, u32 f);
    void func_ov121_022926d0(void *pad, u32 f);
    void func_ov121_022927f4(u32 idx);
    void func_ov121_02292814();
    BOOL func_ov121_02292840(void *pad, u32 f);
    s32 func_ov121_02292988();
    BOOL func_ov121_022929a0(u32 lo, u32 hi, u32 v);
    BOOL func_ov121_022929cc(u32 lo, u32 hi, u32 v);
    BOOL func_ov121_022929f8(u32 lo, u32 hi);
    BOOL func_ov121_02292a34(u32 lo, u32 hi);
    void func_ov121_02292a74();
    void func_ov121_02292aa0();
    void func_ov121_02292ac8();
    void func_ov121_02292af0();
    void func_ov121_02292b10();
    void func_ov121_02292b30();
    void func_ov121_02292b50();
    void func_ov121_02292b70();
    void func_ov121_02292ba4();
    void func_ov121_02292bf0();
    void func_ov121_02292c54();

    // out-of-range callees (declarations only)
    void func_ov121_022938c0(u32 a, s32 b);
    s32 func_ov121_02292d68();
    s32 func_ov121_02292d3c();

    /* 0x91 */ u8 unk_91[0x11];
    /* 0xa2 */ u16 unk_a2;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u16 unk_a6;
    /* 0xa8 */ u8 unk_a8[9];
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7[0x2d8 - 0xb7];
    /* 0x2d8 */ Unk_ov121_sub_022007e8 unk_2d8;
    /* 0x398 */ Unk_ov121_sub_02202640 unk_398;
    /* 0x3fc */ Unk_ov121_sub_022043e8 unk_3fc;
    /* 0x504 */ Unk_ov121_sub_02202454 unk_504;
};

// ---------------------------------------------------------------------------------------------

Unk_ov121_02294d68::~Unk_ov121_02294d68() {}

void Unk_ov121_02294d68::func_ov121_022923fc(u32 mask) { unk_a2 = unk_a2 & ~mask; }

void Unk_ov121_02294d68::func_ov121_0229240c(u32 mask) { unk_a2 = unk_a2 | mask; }

BOOL Unk_ov121_02294d68::func_ov121_0229241c(u32 mask) {
    if (unk_a2 & mask) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov121_02292430() {
    Unk_ov121_Comm *c = data_020cbb18;
    if (func_02072e44(c)) {
        if (c->unk_64 != 0 || func_020b0f54() > 1) {
            return FALSE;
        }
    } else if (func_020b0f54() > 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov121_02294d68::func_ov121_0229246c(s32 k) {
    if (k == 2) {
        if (func_02094fa8() == 0) {
            return TRUE;
        }
        return FALSE;
    }
    if (func_02094fb4() == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_02292498(s32 k, u32 v) {
    u16 t = v;
    switch (k) {
    case 0:
        if (func_02094bf8(&t)) {
            return TRUE;
        }
        break;
    case 1:
        if (func_02094be0(&t)) {
            return TRUE;
        }
        break;
    case 2:
        if (func_02094b78(&t)) {
            return TRUE;
        }
        break;
    }
    return FALSE;
}

static inline BOOL Unk_ov121_022924e0_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

u32 Unk_ov121_02294d68::func_ov121_022924e0(s32 k, u32 v) {
    u32 res = func_ov121_02292594(k);
    s32 p = func_0209750c();
    volatile u16 t = v;
    switch (k) {
    case 0:
        func_02098720(p, (u16 *)&t);
        t = res;
        if (!Unk_ov121_022924e0_Range(&t, 0x11a8, 0x12a7)) {
            res = 0xfff1;
        }
        break;
    case 1:
        func_02098708(p, (u16 *)&t);
        t = res;
        if (Unk_ov121_022924e0_Range(&t, 0x1429, 0x1430)) {
            res = 0xfff1;
        }
        break;
    case 2:
        t = res;
        if (Unk_ov121_022924e0_Range(&t, 0x13a0, 0x13a7)) {
            res = 0xfff1;
        }
        break;
    }
    return res;
}

u32 Unk_ov121_02294d68::func_ov121_02292594(s32 k) {
    s32 p = func_0209750c();
    switch (k) {
    case 0:
        return *func_0209872c(p);
    case 1:
        return *func_02098714(p);
    case 2:
        return *func_02098744(p);
    }
    return 0xfff1;
}

void Unk_ov121_02294d68::func_ov121_022925d0() {
    if (func_ov121_0229241c(0x200)) {
        if (unk_b6 != 0) {
            unk_b6 = *(volatile u8 *)&unk_b6 - 1;
            switch (unk_b6 % 5) {
            case 0:
                func_ov121_022938c0(unk_b5, 2);
                break;
            case 3:
                func_ov121_022938c0(unk_b5, 6);
                break;
            }
        } else {
            func_ov121_022923fc(0x200);
            func_ov121_022938c0(unk_b5, 2);
        }
    }
}

void Unk_ov121_02294d68::func_ov121_02292648(u32 v) {
    if (func_ov121_0229241c(0x200)) {
        func_ov121_022938c0(unk_b5, 2);
    }
    unk_b5 = v;
    unk_b6 = 0xf;
    func_ov121_0229240c(0x200);
}

BOOL Unk_ov121_02294d68::func_ov121_0229268c(void *pad, u32 f) {
    u32 old = unk_b1;
    func_ov121_022923fc(0x60);
    if (!func_ov121_02292840(pad, f)) {
        func_ov121_022926d0(pad, f);
    }
    if (old != unk_b1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov121_02294d68::func_ov121_022926d0(void *pad, u32 f) {
    if (func_ov002_0220128c(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 0;
        } else if (unk_b1 <= 3) {
            if (f) {
                unk_b1 = *(volatile u8 *)&unk_b1 + 0xc;
            } else {
                func_ov121_02292814();
            }
        } else if (!func_ov121_022929cc(4, 7, 0)) {
            u32 t = unk_b1;
            if (t >= 9 && t <= 0xb) {
                if (!f) {
                    func_ov121_02292814();
                }
            } else if (t >= 0xc && t <= 0xf) {
                if (func_ov002_0220125c(pad)) {
                    unk_b1 = *(volatile u8 *)&unk_b1 - 1;
                }
                unk_b1 = *(volatile u8 *)&unk_b1 - 3;
                if (unk_b1 > 0xb) {
                    unk_b1 = 0xb;
                }
            }
        }
    } else if (func_ov002_0220127c(pad)) {
        if (!func_ov121_022929a0(0, 3, 4)) {
            s32 t = func_ov121_02292988();
            if (t != -1) {
                func_ov121_022927f4(t);
            } else if (!func_ov121_022929a0(0xc, 0xf, 0)) {
                u32 b = unk_b1;
                if (b >= 9 && b <= 0xb) {
                    if (func_ov002_0220126c(pad)) {
                        unk_b1 = *(volatile u8 *)&unk_b1 + 1;
                    }
                    unk_b1 = *(volatile u8 *)&unk_b1 + 3;
                }
            }
        }
    }
}



BOOL Unk_ov121_02294d68::func_ov121_02292840(void *pad, u32 f) {
    if (func_ov002_0220126c(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 7;
            func_ov121_0229240c(0x20);
        } else if (unk_b1 == 4 && f) {
            unk_b1 = 8;
        } else if (!func_ov121_022929f8(0, 3) && !func_ov121_022929f8(4, 7) && !func_ov121_022929f8(9, 0xb) &&
                   !func_ov121_022929f8(0xc, 0xf)) {
            u32 t = unk_b1;
            if (t > 0x10 && t <= 0x17) {
                unk_b1 = *(volatile u8 *)&unk_b1 - 1;
            }
        }
    } else if (func_ov002_0220125c(pad)) {
        if (unk_b1 == 8) {
            unk_b1 = 4;
        } else if (unk_b1 == 7 && f) {
            unk_b1 = 8;
            func_ov121_0229240c(0x40);
        } else if (unk_b1 == 0xb && func_ov002_0220127c(pad)) {
            unk_b1 = 0xf;
            return TRUE;
        } else if (!func_ov121_02292a34(0, 3) && !func_ov121_02292a34(4, 7) && !func_ov121_02292a34(9, 0xb) &&
                   !func_ov121_02292a34(0xc, 0xf)) {
            u32 t = unk_b1;
            if (t >= 0x10 && t < 0x17) {
                unk_b1 = *(volatile u8 *)&unk_b1 + 1;
            }
        }
    }
    return func_ov121_0229241c(0x60);
}






void Unk_ov121_02294d68::func_ov121_02292a74() {
    unk_a4 = func_ov002_022028c8(&unk_398) - 3;
    unk_a6 = func_ov002_022028a0(&unk_398) + 9;
}

void Unk_ov121_02294d68::func_ov121_02292aa0() {
    func_ov002_02202d00(&unk_398, 5);
    func_ov121_0229240c(0x80);
    func_ov002_02200a58(0xb);
}

void Unk_ov121_02294d68::func_ov121_02292ac8() {
    func_ov002_02202d00(&unk_398, 5);
    func_ov121_022923fc(0x80);
    func_ov002_02200a58(0xb);
}

void Unk_ov121_02294d68::func_ov121_02292af0() {
    func_ov002_02202d00(&unk_398, 4);
    func_ov002_02200a58(9);
}

void Unk_ov121_02294d68::func_ov121_02292b10() {
    func_ov002_02202af0(&unk_398);
    func_ov002_02200a58(8);
}

void Unk_ov121_02294d68::func_ov121_02292b30() {
    func_ov002_02202b68(&unk_398);
    func_ov002_02200a58(7);
}

void Unk_ov121_02294d68::func_ov121_02292b50() {
    func_ov002_02202a78(&unk_398);
    unk_398.vfunc_0c();
}

void Unk_ov121_02294d68::func_ov121_02292b70() {
    s32 a = func_ov121_02292d68();
    s32 b = func_ov121_02292d3c();
    func_ov002_02202a40(&unk_398, a, b);
    func_ov002_02202d00(&unk_398, 1);
}

void Unk_ov121_02294d68::func_ov121_02292ba4() {
    unk_b3 = 0;
    s32 a = func_ov002_022014a4(&unk_504);
    s32 b = func_ov002_02201498(&unk_504, unk_b3);
    func_ov002_02202a40(&unk_398, a, b);
    func_ov002_02202d00(&unk_398, 7);
}

void Unk_ov121_02294d68::func_ov121_02292bf0() {
    unk_b2 = 8;
    unk_b3 = func_ov002_02201a70(&unk_504, 1);
    s32 a = func_ov002_022014a4(&unk_504);
    s32 b = func_ov002_02201498(&unk_504, unk_b3);
    func_ov002_02202a40(&unk_398, a, b);
    func_0208d538(&unk_398, 8);
    func_ov002_02200a58(0xf);
}

void Unk_ov121_02294d68::func_ov121_02292c54() {
    s32 a = func_ov002_022014a4(&unk_504);
    s32 b = func_ov002_02201498(&unk_504, unk_b3);
    func_ov002_02202a18(&unk_398, a, b, 2);
    unk_b4 = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov121_02294d68::func_ov121_022927f4(u32 idx) {
    unk_b1 = data_ov121_02294bd0[idx];
    func_ov002_02202c40(&unk_398);
}

void Unk_ov121_02294d68::func_ov121_02292814() {
    s32 t = func_ov002_0220288c(&unk_398);
    unk_b1 = func_ov090_02291944(t) + 0x10;
    func_ov002_02202be0(&unk_398);
}

s32 Unk_ov121_02294d68::func_ov121_02292988() {
    u32 t = unk_b1;
    if (t >= 0x10 && t <= 0x17) {
        return t - 0x10;
    }
    return -1;
}

BOOL Unk_ov121_02294d68::func_ov121_022929a0(u32 lo, u32 hi, u32 v) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        unk_b1 = *(volatile u8 *)&unk_b1 + (v - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_022929cc(u32 lo, u32 hi, u32 v) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        unk_b1 = *(volatile u8 *)&unk_b1 + (v - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_022929f8(u32 lo, u32 hi) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        if (t == lo) {
            unk_b1 = hi;
            func_ov121_0229240c(0x20);
        } else {
            unk_b1 = *(volatile u8 *)&unk_b1 - 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov121_02294d68::func_ov121_02292a34(u32 lo, u32 hi) {
    u32 t = unk_b1;
    if (t >= lo && t <= hi) {
        if (t == hi) {
            func_ov121_0229240c(0x40);
            unk_b1 = lo;
        } else {
            unk_b1 = *(volatile u8 *)&unk_b1 + 1;
        }
        return TRUE;
    }
    return FALSE;
}
