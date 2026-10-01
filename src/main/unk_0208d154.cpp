#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02111df8(void *a, u32 b, u32 c);
void func_02003b6c(u8 v);
}

extern u8 data_020cf650[];
extern s32 data_020cf63c[];
extern s32 data_020cf67c[];
extern u8 data_020cf668[];
extern u8 data_020cf654[];
extern s32 data_020cf6d8[];
extern s32 data_020cf6c8[];
extern u8 data_020d5b0c[];
extern u8 data_020d467c[];

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

// Sub-object (ctor 0x02089270, dtor 0x0208926c)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    Unk_02089240_Rec *func_02089240();
    void *func_02089248();
    void func_02089258(s32 a, s32 b);
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Sub-object at +0x38 of Unk_020e0ff0 (0x34 bytes, ctor 0x02039b04, dtor 0x02039aec)
class Unk_02039b04 {
public:
    Unk_02039b04();
    ~Unk_02039b04();
    void func_020a7bd8(void *p);

    /* 0x00 */ u32 unk_00[13];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 unk_30;
};

class Unk_020e0ff0 : public Unk_020e0db4 {
public:
    typedef void (Unk_020e0ff0::*Fn)();

    Unk_020e0ff0();
    virtual ~Unk_020e0ff0();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d0bc();
    void func_0208d0d4();
    void func_0208d154();
    void func_0208d1bc();
    void func_0208d1ec();
    void func_0208d214();
    void func_0208d220();
    void func_0208d234();
    void func_0208d244();
    void func_0208d278();
    void func_0208d28c();
    void func_0208d2b8();
    static void func_0208d2c4();
    BOOL func_0208d2d8();
    BOOL func_0208d2f0();
    void func_0208d308(void *p);
    void func_0208d314(s32 a, s32 b);
    void func_0208d31c();
    void func_0208d324(s32 a);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_02039b04 unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

void Unk_020e0ff0::func_0208d154() {
    if (unk_6c != 0) {
        s32 len = unk_6c->vfunc_0c();
        u32 n = (u32)(len + 7) >> 3;
        s32 idx = unk_14.func_02089240()->unk_04 - 1;
        s32 t = n - 1;
        if (t < 0) {
            idx = 0;
        } else if (t <= idx) {
            idx = t;
        }
        unk_14.func_02089258(idx, 0);
        unk_6c->unk_30 = (u32)(n * 8 - len) >> 1;
        if (unk_0c == 0) {
            unk_34 = 0;
        } else {
            s32 q = idx << 2;
            q = -q;
            unk_34 = q + 0x24;
        }
    }
}

void Unk_020e0ff0::func_0208d1bc() {
    unk_14.func_02089268(data_020d467c + unk_10 * 8);
    unk_14.func_02089264(1);
    unk_14.func_02089260(0);
}

void Unk_020e0ff0::func_0208d1ec() {
    unk_30 += 11;
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        func_0208d0bc();
        func_0208d2b8();
    }
}

void Unk_020e0ff0::func_0208d214() {
    unk_70 = 3;
    unk_7c = 1;
}

void Unk_020e0ff0::func_0208d220() {
    if (unk_74 == 0) {
        func_0208d214();
    }
}

void Unk_020e0ff0::func_0208d234() {
    unk_70 = 2;
    unk_7c = 1;
    unk_78 = 2;
}

void Unk_020e0ff0::func_0208d244() {
    if (unk_78 > 2) {
        unk_30 -= 6;
    } else {
        unk_30 += 2;
    }
    unk_78 = unk_78 - 1;
    if (unk_78 <= 0) {
        unk_30 = 0;
        func_0208d234();
    }
}

void Unk_020e0ff0::func_0208d278() {
    unk_70 = 1;
    unk_7c = 1;
    unk_78 = 3;
    unk_30 = 5;
}

void Unk_020e0ff0::func_0208d28c() {
    if (unk_74 != 0) {
        if (unk_0c == 4) {
            func_0208d2c4();
        }
        func_0208d0d4();
        func_0208d154();
        func_0208d278();
    }
}

void Unk_020e0ff0::func_0208d2b8() {
    unk_70 = 0;
    unk_7c = 0;
}

void Unk_020e0ff0::func_0208d2c4() {
    func_02111df8(data_020cf650, 0xbc, 2);
}

BOOL Unk_020e0ff0::func_0208d2d8() {
    BOOL r;
    if (unk_70 != 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 0;
    }
    return r;
}

BOOL Unk_020e0ff0::func_0208d2f0() {
    BOOL r;
    if (unk_70 == 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        unk_74 = 2;
    }
    return r;
}

void Unk_020e0ff0::func_0208d308(void *p) {
    unk_38.func_020a7bd8(p);
}

void Unk_020e0ff0::func_0208d314(s32 a, s32 b) {
    unk_28 = a;
    unk_2c = b;
}

void Unk_020e0ff0::func_0208d31c() {
    func_0208d0bc();
}

void Unk_020e0ff0::func_0208d324(s32 a) {
    unk_0c = a;
    unk_10 = data_020cf63c[a];
    func_0208d1bc();
}

void Unk_020e0ff0::vfunc_0c() {
    static Fn tbl[4] = {&Unk_020e0ff0::func_0208d28c, &Unk_020e0ff0::func_0208d244, &Unk_020e0ff0::func_0208d220, &Unk_020e0ff0::func_0208d1ec};
    (this->*tbl[unk_70])();
    if (unk_70 != 0) {
        unk_14.func_02089140();
    }
}

void Unk_020e0ff0::vfunc_08() {
    if (unk_7c != 0) {
        void *h = unk_14.func_02089248();
        s32 a = func_02089f68();
        s32 b = unk_14.func_02089228(-1);
        s32 x = unk_34 + (unk_28 + a);
        x += b;
        s32 c = func_02089f64();
        s32 d = unk_14.func_02089210(-1);
        s32 y = unk_30 + (unk_2c + c);
        y += d;
        func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

Unk_020e0ff0::~Unk_020e0ff0() {
    func_0208d31c();
}

Unk_020e0ff0::Unk_020e0ff0() : unk_0c(0), unk_10(10), unk_28(0), unk_2c(0), unk_30(0), unk_34(0) {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
}

// ---------------------------------------------------------------------------------------------------------------------

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d4fc_dummy();
    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d538(s32 idx);
    void func_0208d580(s32 idx);
    void func_0208d60c(s32 a, s32 b);
    void func_0208d63c();
    void func_0208d644();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ Unk_02089270 unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

BOOL Unk_020e100c::func_0208d4fc() {
    BOOL r = FALSE;
    if (unk_0c.func_020891d8()) {
        BOOL t;
        if (unk_49 != 0) {
            t = unk_2c.func_020891d8();
        } else {
            t = TRUE;
        }
        if (t) {
            r = TRUE;
        }
    }
    return r;
}

s32 Unk_020e100c::func_0208d534() {
    return unk_40;
}

void Unk_020e100c::func_0208d538(s32 idx) {
    func_0208d580(idx);
    Unk_02089240_Rec *p = unk_0c.func_02089240();
    unk_0c.func_02089258(p->unk_04 - 1, 0);
    if (unk_49 != 0) {
        Unk_02089240_Rec *q = unk_2c.func_02089240();
        unk_2c.func_02089258(q->unk_04 - 1, 0);
    }
}

void Unk_020e100c::func_0208d580(s32 idx) {
    s32 a = data_020cf67c[idx];
    s32 n = a + 1;
    BOOL f;
    switch (data_020cf668[idx]) {
    default:
        f = FALSE;
        break;
    case 0:
        f = TRUE;
    }
    unk_40 = idx;
    unk_0c.func_02089268(data_020d5b0c + a * 8);
    unk_0c.func_02089264(f);
    unk_0c.func_020891bc();
    unk_49 = data_020cf654[idx];
    if (unk_49 != 0) {
        unk_2c.func_02089268(data_020d5b0c + n * 8);
        unk_2c.func_02089264(f);
        unk_2c.func_020891bc();
    }
}

void Unk_020e100c::func_0208d60c(s32 a, s32 b) {
    unk_20 = a;
    unk_24 = b;
    if (unk_40 != 0) {
        s32 v = unk_20 + func_02089f68();
        if (v < 0) {
            v = 0;
        }
        if (v > 0xff) {
            v = 0xff;
        }
        func_02003b6c(v);
    }
}

void Unk_020e100c::func_0208d63c() {
    unk_4a = 0;
}

void Unk_020e100c::func_0208d644() {
    unk_4a = 1;
}

void Unk_020e100c::vfunc_0c() {
    if (unk_40 != 0) {
        unk_0c.func_02089140();
        if (unk_49 != 0) {
            unk_2c.func_02089140();
        }
    }
}

void Unk_020e100c::vfunc_08() {
    void *h0;
    s32 x, y, y0, x0;
    if (unk_40 != 0) {
        h0 = unk_0c.func_02089248();
        void *h1;
        if (unk_49 != 0) {
            h1 = unk_2c.func_02089248();
        } else {
            h1 = 0;
        }
        s32 ax = unk_0c.func_02089228(-1);
        s32 ay = unk_0c.func_02089210(-1);
        s32 bx = unk_2c.func_02089228(-1);
        s32 by = unk_2c.func_02089210(-1);
        x = (s32)((u8 *)0 + (unk_20 + func_02089f68()));
        y = (s32)((u8 *)0 + (unk_24 + func_02089f64()));
        x0 = x + ax;
        y0 = y + ay;
        x += bx;
        y += by;
        if (unk_48 != 0) {
            func_02087e70(0, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                func_02087e70(0, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_4a != 0) {
                func_02087e70(0, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    func_02087e70(0, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            func_02087e70(1, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            if (h1 != 0) {
                func_02087e70(1, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_4a != 0) {
                func_02087e70(1, h0, x0, y0, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                if (h1 != 0) {
                    func_02087e70(1, h1, x, y, -1, unk_28, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

Unk_020e100c::~Unk_020e100c() {
}

Unk_020e100c::Unk_020e100c(BOOL flag) : unk_20(0), unk_24(0), unk_28(-1) {
    unk_40 = 0;
    unk_44 = 0x16;
    unk_48 = flag;
    unk_49 = 1;
    unk_4a = 0;
    func_0208d580(0);
}

// ---------------------------------------------------------------------------------------------------------------------

class Unk_020e1028 : public Unk_020e0db4 {
public:
    BOOL func_0208d9a8();
    s32 func_0208d9d0();
    void func_0208d9d4(s32 idx);
    void func_0208da58(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

BOOL Unk_020e1028::func_0208d9a8() {
    BOOL r;
    if (unk_14.func_020891d8() && unk_28.func_020891d8()) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

s32 Unk_020e1028::func_0208d9d0() {
    return unk_3c;
}

void Unk_020e1028::func_0208d9d4(s32 idx) {
    s32 a = data_020cf6d8[idx];
    s32 n = a + 1;
    s32 f = data_020cf6c8[idx];
    unk_3c = idx;
    unk_14.func_02089268(data_020d5b0c + a * 8);
    unk_14.func_02089264(f);
    unk_14.func_020891bc();
    unk_28.func_02089268(data_020d5b0c + n * 8);
    unk_28.func_02089264(f);
    unk_28.func_020891bc();
    if (idx == 1) {
        unk_14.func_02089260(0);
        unk_28.func_02089260(0);
    }
}

void Unk_020e1028::func_0208da58(s32 *a, s32 *b) {
    s32 x = 0;
    s32 y = 0;
    if (unk_3c == 2) {
        x = unk_14.func_02089228(-1);
        x -= unk_14.func_02089228(0);
        s32 t = unk_14.func_02089210(-1);
        y = t - unk_14.func_02089210(0);
    } else if (unk_3c == 3) {
        x = unk_14.func_02089228(0);
        x -= unk_14.func_02089228(-1);
        s32 t = unk_14.func_02089210(0);
        y = t - unk_14.func_02089210(-1);
    }
    *a = x;
    *b = y;
}
