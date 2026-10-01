#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_0203d99c();
s32 _ZN12Unk_0206555413func_02065578Ev();
void func_02065c94(void *p);
}

// Sub-object at +0x14 of Unk_020e1164 (ctor 0x02089270, dtor 0x0208926c)
class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
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

// Vtable at 0x020e1164; singleton data_021ceb80
class Unk_020e1164 : public Unk_020e0db4 {
public:
    Unk_020e1164();
    virtual ~Unk_020e1164();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ee40();
    BOOL func_0208ee94();
    void func_0208ee8c();
    void func_0208ee90();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ u8 unk_28;
};

Unk_020e1164 data_021ceb80;

// Player-slot style record (full definition in the next unit)
class Unk_0208f238 {
public:
    u8 func_0208f060();
    void func_0208f068(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
};

class Unk_020dd458 {
public:
    Unk_020dd458();
    ~Unk_020dd458();
};

class Unk_0208f0a0 : public Unk_020dd458 {
public:
    Unk_0208f0a0();
    ~Unk_0208f0a0();
};

Unk_0208f0a0::Unk_0208f0a0() {}

Unk_0208f0a0::~Unk_0208f0a0() {}

extern "C" void func_0208f088(void *p) { func_02065c94(p); }

extern "C" BOOL func_0208f070() {
    if (_ZN12Unk_0206555413func_02065578Ev()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0208f238::func_0208f068(u32 v) { unk_0f4 = v; }

u8 Unk_0208f238::func_0208f060() { return unk_0f4; }

extern "C" void func_0208f05c() {}

extern "C" void func_0208f050() { data_021ceb80.unk_0c = 0; }

extern "C" void func_0208f044() { data_021ceb80.unk_0c = 1; }

extern "C" void func_0208f038() { data_021ceb80.unk_0c = 2; }

extern "C" BOOL func_0208f024() {
    if (data_021ceb80.unk_0c == 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0208f010() {
    if (data_021ceb80.unk_0c == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0208f000() { data_021ceb80.func_0208ee90(); }

extern "C" void func_0208eff0() { data_021ceb80.func_0208ee8c(); }

extern "C" void func_0208efe0() { data_021ceb80.vfunc_0c(); }

extern "C" void func_0208efd0() { data_021ceb80.vfunc_08(); }

void Unk_020e1164::vfunc_08() {
    if (unk_28 != 0) {
        if (!func_0208ee94()) {
            void *h = unk_14.func_02089248();
            s32 x = func_02089f68() + unk_14.func_02089228(-1);
            s32 y = func_02089f64() + unk_14.func_02089210(-1);
            func_02087e70(3, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e1164::vfunc_0c() {
    if (unk_28 != 0) {
        unk_14.func_02089140();
    }
    if (unk_0c != unk_10) {
        func_0208ee40();
        unk_10 = unk_0c;
    }
}

Unk_020e1164::Unk_020e1164() : unk_0c(0), unk_10(0) {
    unk_28 = 0;
}

Unk_020e1164::~Unk_020e1164() {
}

