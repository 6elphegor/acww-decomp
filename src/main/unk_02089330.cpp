#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

struct Unk_02089270_Rec {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0a */ s16 unk_0a;
};

struct Unk_02089270_Tbl {
    /* 0x00 */ Unk_02089270_Rec *unk_00;
    /* 0x04 */ s32 unk_04;
};

// Animation cursor over a table of 12-byte records (fixed-point frame position)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    void func_020891d0();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    Unk_02089270_Tbl *func_02089240();
    s32 func_02089244();
    void *func_02089248();
    void func_02089258(s32 a, s32 b);
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(Unk_02089270_Tbl *v);

    /* 0x00 */ Unk_02089270_Tbl *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
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

// Two-cursor menu/sprite object; vtable 0x020e0d44 (ctor 0x020894c0)
class Unk_020e0d44 : public Unk_020e0db4 {
public:
    Unk_020e0d44(u8 flag);
    virtual ~Unk_020e0d44();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_02089284();
    s32 func_020892ac();
    void func_020892b0(s32 idx);
    void func_02089320(s32 x, s32 y);
    void func_02089328();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ Unk_02089270 unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x41 */ u8 unk_41;
};

Unk_020e0d44::Unk_020e0d44(u8 flag) {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_41 = flag;
    func_020892b0(0);
}

Unk_020e0d44::~Unk_020e0d44() {}

void Unk_020e0d44::vfunc_08() {
    if (unk_34 != 0) {
        void *a = unk_0c.func_02089248();
        void *b = unk_20.func_02089248();
        s32 ox0 = unk_0c.func_02089228(-1);
        s32 oy0 = unk_0c.func_02089210(-1);
        s32 ox1 = unk_20.func_02089228(-1);
        s32 oy1 = unk_20.func_02089210(-1);
        s32 x = unk_38 + func_02089f68();
        s32 y = unk_3c + func_02089f64();
        if (unk_41 != 0) {
            func_02087e70(0, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(0, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(1, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0d44::vfunc_0c() {
    if (unk_34 != 0) {
        unk_0c.func_02089140();
        unk_20.func_02089140();
    }
}

