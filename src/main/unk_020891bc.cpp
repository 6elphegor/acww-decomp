#include "types.h"

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

extern const u32 data_020cf5b8[];
extern const u32 data_020cf5c8[];
extern u8 data_020d5b0c[];

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

enum Unk_020892b0_E { Unk_020892b0_E0 = 0 };

void Unk_020e0d44::func_02089328() { unk_40 = 1; }

void Unk_020e0d44::func_02089320(s32 x, s32 y) {
    unk_38 = x;
    unk_3c = y;
}

void Unk_020e0d44::func_020892b0(s32 idx) {
    Unk_020892b0_E a;
    Unk_020892b0_E b;
    u32 c;
    a = (Unk_020892b0_E)((u32 *)data_020cf5c8)[idx];
    if (unk_40 != 0) {
        a = (Unk_020892b0_E)(a + 6);
    }
    b = (Unk_020892b0_E)(a + 1);
    c = ((u32 *)data_020cf5b8)[idx];
    unk_34 = idx;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + a * 8));
    unk_0c.func_02089264(c);
    unk_0c.func_020891bc();
    unk_20.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + b * 8));
    unk_20.func_02089264(c);
    unk_20.func_020891bc();
}

s32 Unk_020e0d44::func_020892ac() { return unk_34; }

BOOL Unk_020e0d44::func_02089284() {
    if (unk_0c.func_020891d8() && unk_20.func_020891d8()) {
        return TRUE;
    }
    return FALSE;
}

// Cursor ctor/dtor and 0x020890f4/0x02089100 are defined last so they are not inlined
Unk_02089270::Unk_02089270() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0x1000;
    unk_10 = 0;
}

Unk_02089270::~Unk_02089270() {}

void Unk_02089270::func_02089268(Unk_02089270_Tbl *v) { unk_00 = v; }

void Unk_02089270::func_02089264(s32 v) { unk_10 = v; }

void Unk_02089270::func_02089260(s32 v) { unk_0c = v; }

void Unk_02089270::func_02089258(s32 a, s32 b) {
    unk_04 = a;
    unk_08 = b;
}

void *Unk_02089270::func_02089248() { return unk_00->unk_00[unk_04].unk_00; }

s32 Unk_02089270::func_02089244() { return unk_04; }

Unk_02089270_Tbl *Unk_02089270::func_02089240() { return unk_00; }

s32 Unk_02089270::func_02089228(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_08;
}

s32 Unk_02089270::func_02089210(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_0a;
}

BOOL Unk_02089270::func_020891d8() {
    BOOL r = FALSE;
    if (unk_10 == 1) {
        Unk_02089270_Tbl *t = unk_00;
        s32 i = unk_04;
        if (i >= t->unk_04 - 1) {
            s32 f = unk_08 >> 12;
            if (f >= t->unk_00[i].unk_04 - 1) {
                r = TRUE;
            }
        }
    }
    return r;
}

void Unk_02089270::func_020891d0() { unk_0c = 0; }

void Unk_02089270::func_020891bc() {
    unk_0c = 0x1000;
    func_02089258(0, 0);
}

const u32 data_020cf5b8[] = {0, 0, 1, 1};
const u32 data_020cf5c8[] = {0x23, 0x23, 0x25, 0x27};
