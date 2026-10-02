#include "types.h"

extern "C" {
void func_02003b6c(u8 v);
}

extern u8 data_020d5b0c[];

extern const u8 data_020cf654[0x14];
extern const u8 data_020cf668[0x14];
extern const s32 data_020cf67c[0x13];

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

struct Unk_02089270_Tbl;

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
    void func_02089268(Unk_02089270_Tbl *v);

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

void Unk_020e100c::func_0208d644() {
    unk_4a = 1;
}

void Unk_020e100c::func_0208d63c() {
    unk_4a = 0;
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
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + a * 8));
    unk_0c.func_02089264(f);
    unk_0c.func_020891bc();
    unk_49 = data_020cf654[idx];
    if (unk_49 != 0) {
        unk_2c.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + n * 8));
        unk_2c.func_02089264(f);
        unk_2c.func_020891bc();
    }
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

// Declarations for data defined further down (definition order sets the data layout)
extern const u8 data_020cf668[0x14];
extern const u8 data_020cf654[0x14];
extern const s32 data_020cf67c[0x13];

extern const u8 data_020cf668[0x14] = {1,1,0,0, 0,0,0,1, 0,0,0,0, 0,1,0,0, 1,0,0,0};

extern const u8 data_020cf654[0x14] = {1,1,1,1, 1,1,0,1, 1,1,1,1, 0,0,0,0, 0,0,0,0};

extern const s32 data_020cf67c[0x13] = {1,1,3,5,7,9,11,12,14,16,18,20,22,23,25,27,29,31,33};

// 0x020cf650: first .rodata object of this file (bytes 7b 6f 00 00); read by the unit at 0x0208d154 (0x0208d2d0)
extern const u8 data_020cf650[4] = {0x7b, 0x6f, 0x00, 0x00};
