#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

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

    /* 0x00 */ u8 unk_00[0x14];
};

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

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d580(s32 idx);

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

class Unk_020e1028 : public Unk_020e0db4 {
public:
    BOOL func_0208d9a8();
    s32 func_0208d9d0();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

s32 Unk_020e1028::func_0208d9d0() {
    return unk_3c;
}

BOOL Unk_020e1028::func_0208d9a8() {
    BOOL r;
    if (unk_14.func_020891d8() && unk_28.func_020891d8()) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

Unk_020e100c::Unk_020e100c(BOOL flag) : unk_20(0), unk_24(0), unk_28(-1) {
    unk_40 = 0;
    unk_44 = 0x16;
    unk_48 = flag;
    unk_49 = 1;
    unk_4a = 0;
    func_0208d580(0);
}

Unk_020e100c::~Unk_020e100c() {
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

void Unk_020e100c::vfunc_0c() {
    if (unk_40 != 0) {
        unk_0c.func_02089140();
        if (unk_49 != 0) {
            unk_2c.func_02089140();
        }
    }
}

