// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// Secondary base at +0xec of the ov004 actors (ctor func_0206606c).
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();

    /* 0x04 */ u8 pad_04[0x44 - 4];
};

struct Unk_020b22ac {
    Unk_020b22ac();
    ~Unk_020b22ac();
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

// Element at +0x844 of the 0x864-byte actors (ctor func_ov004_02205c2c, dtor func_ov004_02205c1c).
struct Unk_ov004_02205bcc : public Unk_020b22ac {
    Unk_ov004_02205bcc();
    ~Unk_ov004_02205bcc();
    void func_ov004_02205b14();
    void func_ov004_02205bcc(BOOL on, s32 a, s32 b);
    BOOL func_ov004_02205be4(void *res, const void *name, u32 on);
    s8 unk_14;
    void *unk_18;
};

// Container at +0x844 of the class Unk_ov004_0224a17c
struct Unk_ov004_022059f4 {
    u8 pad[0x58];
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
};

struct Unk_ov004_02205c44 {
    void func_ov004_02205c44(u32 v, s32 flag);
    BOOL func_ov004_02205c6c();
    u8 func_ov004_02205c7c();
    u8 unk_00;
    u8 unk_01;
};

extern "C" {
extern u8 data_ov004_0224005c[];
extern u8 data_ov004_0224003c[];
extern u8 data_ov004_0224bb98[];
extern u8 data_ov004_0224bba0[];
extern u8 data_ov004_0224bba8[];
BOOL func_ov004_02234ad4();
void *func_ov004_02233cdc();
void *func_ov004_02206a14(void *);
void func_ov004_022358f4(void *, void *);
void func_02056744(void *, void *, void *, s32, s32);
void func_02056794(void *, void *, void *, void *, void *);
void func_02051cc8(void *, s32, s32, s32);
void func_0203d704(void *, s32);
void func_02094f20();
s32 func_ov004_0220878c(void *self, s32 idx, u32 v);
}

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    BOOL func_ov004_0220e744(BOOL a);
    BOOL func_ov004_02208980();
    void func_ov004_02208a18(u32 a, s32 b, s32 c);
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();

    /* 0x130 */ u8 pad_130[0x590 - 0x130];
    /* 0x590 */ void *unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u32 sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ Unk_ov004_02205c44 unk_73c;
    /* 0x73e */ u8 pad_73e[0x794 - 0x73e];
    /* 0x794 */ u32 sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 unk_7b4[3];
    /* 0x7c0 */ u8 pad_7c0[0x840 - 0x7c0];
};

// ---------------------------------------------------------------- Unk_ov004_022495c4 (no extra fields)
class Unk_ov004_022495c4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_022495c4();
    virtual ~Unk_ov004_022495c4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
};

// ---------------------------------------------------------------- Unk_ov004_02249df8 (2-state)
class Unk_ov004_02249df8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249df8();
    virtual ~Unk_ov004_02249df8();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220e56c();
    BOOL func_ov004_0220e594();
    void func_ov004_0220e5d0();
    BOOL func_ov004_0220e5f8();
    void func_ov004_0220e634();
    void func_ov004_0220e738();

    /* 0x840 */ u8 unk_840;
    /* 0x844 */ Unk_ov004_02205bcc unk_844;
    /* 0x860 */ u8 unk_860;
};

// ---------------------------------------------------------------- Unk_ov004_02249948 (4-state, derives from Unk_ov004_02249df8)
class Unk_ov004_02249948 : public Unk_ov004_02249df8 {
public:
    Unk_ov004_02249948();
    virtual ~Unk_ov004_02249948();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220e11c();
    BOOL func_ov004_0220e14c();
    void func_ov004_0220e198();
    BOOL func_ov004_0220e1c0();
    void func_ov004_0220e208();
    BOOL func_ov004_0220e238();
    void func_ov004_0220e28c();
    BOOL func_ov004_0220e2b4();
    void func_ov004_0220e300();

    /* 0x861 */ u8 unk_861;
};

// ---------------------------------------------------------------- Unk_ov004_0224a17c (only one method here)
class Unk_ov004_0224a17c : public Unk_ov004_0224882c {
public:
    void func_ov004_0220e950();

    /* 0x840 */ u32 pad_840;
    /* 0x844 */ Unk_ov004_022059f4 unk_844;
};

// ================================================================ Unk_ov004_022495c4
BOOL Unk_ov004_022495c4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_022495c4::vfunc_80() {
    func_ov004_02208980();
    return TRUE;
}

BOOL Unk_ov004_022495c4::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0, 0);
    return TRUE;
}

Unk_ov004_022495c4::~Unk_ov004_022495c4() {
}

Unk_ov004_022495c4::Unk_ov004_022495c4() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e100() {
    return new Unk_ov004_022495c4;
}

// ================================================================ Unk_ov004_02249948
void Unk_ov004_02249948::func_ov004_0220e11c() {
    unk_73c.func_ov004_02205c44(0, 0);
    if (func_ov004_02208980()) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e14c() {
    unk_73c.func_ov004_02205c44(0, 0);
    unk_844.func_ov004_02205bcc(0, 1, 0);
    func_ov004_0220e744(0);
    func_ov004_02208a18(0, 3, 0x1000);
    func_ov004_02209108();
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e198() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 3, 0xff, 1);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e1c0() {
    unk_73c.func_ov004_02205c44(1, 0);
    unk_844.func_ov004_02205bcc(1, 1, 0);
    func_ov004_0220e744(1);
    func_ov004_02208a18(0, 1, 0x1000);
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e208() {
    unk_73c.func_ov004_02205c44(1, 0);
    if (func_ov004_02208980()) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e238() {
    unk_73c.func_ov004_02205c44(1, 0);
    unk_844.func_ov004_02205bcc(1, 1, 0);
    func_ov004_0220e744(1);
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e28c() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249948::func_ov004_0220e2b4() {
    unk_73c.func_ov004_02205c44(0, 0);
    unk_844.func_ov004_02205bcc(0, 1, 0);
    func_ov004_0220e744(0);
    func_ov004_02208ba8(0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249948::func_ov004_0220e300() {
    static void (Unk_ov004_02249948::*tbl[4])() = {
        &Unk_ov004_02249948::func_ov004_0220e28c,
        &Unk_ov004_02249948::func_ov004_0220e208,
        &Unk_ov004_02249948::func_ov004_0220e198,
        &Unk_ov004_02249948::func_ov004_0220e11c,
    };
    u32 i = unk_861;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249948::vfunc_70(u32 idx, u32 v) {
    func_ov004_0220878c(this, idx, v);
    static BOOL (Unk_ov004_02249948::*tbl[4])() = {
        &Unk_ov004_02249948::func_ov004_0220e2b4,
        &Unk_ov004_02249948::func_ov004_0220e238,
        &Unk_ov004_02249948::func_ov004_0220e1c0,
        &Unk_ov004_02249948::func_ov004_0220e14c,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_861 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249948::vfunc_74(u32 idx) {
    if (idx < 4) {
        return data_ov004_0224005c[idx];
    }
    return 0;
}

BOOL Unk_ov004_02249948::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249948::vfunc_80() {
    unk_844.func_ov004_02205b14();
    func_ov004_0220e300();
    return TRUE;
}

BOOL Unk_ov004_02249948::vfunc_7c() {
    func_ov004_02208de0(0, 1, 0x1000, 0);
    void *res = unk_590;
    u8 t = unk_73c.func_ov004_02205c7c();
    unk_844.func_ov004_02205be4(res, data_ov004_0224bb98, t);
    if (unk_73c.func_ov004_02205c7c() != 0 && func_ov004_02234ad4() == 0) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249948::~Unk_ov004_02249948() {
}

Unk_ov004_02249948::Unk_ov004_02249948() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e550() {
    return new Unk_ov004_02249948;
}

// ================================================================ Unk_ov004_02249df8
void Unk_ov004_02249df8::func_ov004_0220e56c() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_02249df8::func_ov004_0220e594() {
    func_ov004_02209150();
    unk_844.func_ov004_02205bcc(1, 1, 0);
    unk_73c.func_ov004_02205c44(1, 0);
    func_ov004_0220e744(1);
    return TRUE;
}

void Unk_ov004_02249df8::func_ov004_0220e5d0() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_02249df8::func_ov004_0220e5f8() {
    func_ov004_02209108();
    unk_844.func_ov004_02205bcc(0, 1, 0);
    unk_73c.func_ov004_02205c44(0, 0);
    func_ov004_0220e744(0);
    return TRUE;
}

void Unk_ov004_02249df8::func_ov004_0220e634() {
    static void (Unk_ov004_02249df8::*tbl[2])() = {
        &Unk_ov004_02249df8::func_ov004_0220e5d0,
        &Unk_ov004_02249df8::func_ov004_0220e56c,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249df8::vfunc_70(u32 idx, u32 v) {
    func_ov004_0220878c(this, idx, v);
    static BOOL (Unk_ov004_02249df8::*tbl[2])() = {
        &Unk_ov004_02249df8::func_ov004_0220e5f8,
        &Unk_ov004_02249df8::func_ov004_0220e594,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_02249df8::vfunc_74(u32 idx) {
    if (idx < 2) {
        return data_ov004_0224003c[idx];
    }
    return 0;
}

void Unk_ov004_02249df8::func_ov004_0220e738() {
    unk_860 = 1;
}

BOOL Unk_ov004_02249df8::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249df8::vfunc_80() {
    unk_844.func_ov004_02205b14();
    func_ov004_0220e634();
    unk_860 = 0;
    return TRUE;
}

BOOL Unk_ov004_02249df8::vfunc_7c() {
    void *res = unk_590;
    u8 t = unk_73c.func_ov004_02205c7c();
    unk_844.func_ov004_02205be4(res, data_ov004_0224bb98, t);
    if (unk_73c.func_ov004_02205c7c() != 0 && func_ov004_02234ad4() == 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_02249df8::~Unk_ov004_02249df8() {
}

Unk_ov004_02249df8::Unk_ov004_02249df8() {
}

extern "C" Unk_ov004_0224882c *func_ov004_0220e934() {
    return new Unk_ov004_02249df8;
}

// ================================================================ Unk_ov004_0224a17c
void Unk_ov004_0224a17c::func_ov004_0220e950() {
    func_ov004_02208980();
    func_ov004_02209198();
    unk_844.func_ov004_02205a1c(1, 1, 0);
    func_ov004_022358f4(sub_794, unk_7b4);
    if (unk_73c.func_ov004_02205c6c()) {
        unk_73c.func_ov004_02205c44(1, 0);
        func_0203d704(this, 0);
        func_02094f20();
    }
}

// ================================================================ Unk_ov004_0224882c
BOOL Unk_ov004_0224882c::func_ov004_0220e744(BOOL a) {
    if (a != 0) {
        void *r = unk_590;
        void *t = func_ov004_02233cdc();
        func_02056744(r, data_ov004_0224bb98, t, 0, 0);
    } else {
        void *r = unk_590;
        void *t = func_ov004_02206a14(sub_6c8);
        func_02056794(r, data_ov004_0224bb98, t, data_ov004_0224bba0, data_ov004_0224bba8);
    }
    return TRUE;
}
