#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
void func_02111df8(void *a, u32 b, u32 c);
}

extern "C" {
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
class Unk_020d917c {
public:
    Unk_020d917c();
    ~Unk_020d917c();
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
    /* 0x38 */ Unk_020d917c unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

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

s32 Unk_020e100c::func_0208d534() {
    return unk_40;
}

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

Unk_020e0ff0::Unk_020e0ff0() : unk_0c(0), unk_10(10), unk_28(0), unk_2c(0), unk_30(0), unk_34(0) {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
}

Unk_020e0ff0::~Unk_020e0ff0() {
    func_0208d31c();
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

void Unk_020e0ff0::vfunc_0c() {
    Fn p0 = &Unk_020e0ff0::func_0208d220;
    static Fn tbl[4] = {&Unk_020e0ff0::func_0208d28c, &Unk_020e0ff0::func_0208d244, &Unk_020e0ff0::func_0208d220, &Unk_020e0ff0::func_0208d1ec};
    Fn q0 = &Unk_020e0ff0::func_0208d220;
    Fn q1 = &Unk_020e0ff0::func_0208d220;
    Fn q2 = &Unk_020e0ff0::func_0208d220;
    (this->*tbl[unk_70])();
    if (unk_70 != 0) {
        unk_14.func_02089140();
    }
}

// ---------------------------------------------------------------------------------------------------------------------

