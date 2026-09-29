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

struct Unk_ov004_02205c44 {
    void func_ov004_02205c44(u32 v, s32 flag);
    void func_ov004_02205c54(s32 flag);
    BOOL func_ov004_02205c6c();
    u8 func_ov004_02205c7c();
    u8 unk_00;
    u8 unk_01;
};

// Container of three animation slots (ctor func_ov004_02205ad4, dtor func_ov004_02205ab8).
struct Unk_ov004_02205ad4 {
    Unk_ov004_02205ad4();
    ~Unk_ov004_02205ad4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);
    u8 pad[0x58];
};

struct Unk_ov004_02206e74 {
    BOOL func_ov004_02206e74();
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0x20 - 0x14];
};

extern "C" {
extern u8 data_ov004_02240044[];
extern u8 data_ov004_02240030[];
void *func_ov004_02209ef0(u32 size);
BOOL func_ov004_02234ad4();
void func_02051cc8(void *, s32, s32, s32);
BOOL func_020565e8(void *, u32);
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

    static void *operator new(unsigned long size) { return func_ov004_02209ef0(size); }
    static void operator delete(void *p);

    u32 func_ov004_022087a4();
    BOOL func_ov004_02208980();
    void func_ov004_02208a18(u32 a, s32 b, s32 c);
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();
    BOOL func_ov004_022091e0();

    /* 0x130 */ u8 pad_130[0x590 - 0x130];
    /* 0x590 */ void *unk_590;
    /* 0x594 */ u8 pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 unk_5d0[0x10];
    /* 0x5e0 */ u32 unk_5e0;
    /* 0x5e4 */ u8 pad_5e4[0x73c - 0x5e4];
    /* 0x73c */ Unk_ov004_02205c44 unk_73c;
    /* 0x73e */ u8 pad_73e[0x7c0 - 0x73e];
    /* 0x7c0 */ Unk_ov004_02206e74 unk_7c0[4];
};

// ---------------------------------------------------------------- Unk_ov004_0224b7c8 (2-state, vtable 0x0224b7c8)
class Unk_ov004_0224b7c8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b7c8();
    virtual ~Unk_ov004_0224b7c8();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    BOOL func_ov004_02212818();
    BOOL func_ov004_0221289c();
    void func_ov004_022128c4();
    BOOL func_ov004_022128ec();
    void func_ov004_0221291c();

    /* 0x840 */ u8 unk_840;
};

// ---------------------------------------------------------------- Unk_ov004_0224a3d4 (2-state, container at 0x844)
class Unk_ov004_0224a3d4 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a3d4();
    virtual ~Unk_ov004_0224a3d4();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022124fc();
    BOOL func_ov004_02212534();
    void func_ov004_02212568();
    BOOL func_ov004_02212590();
    void func_ov004_022125c4();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ Unk_ov004_02205ad4 unk_844;
};

// ---------------------------------------------------------------- Unk_ov004_0224af8c (3-state, value at 0x844, container at 0x848)
class Unk_ov004_0224af8c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224af8c();
    virtual ~Unk_ov004_0224af8c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 idx, u32 v);
    virtual u8 vfunc_74(u32 idx);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    // Outside this range
    void func_ov004_02212110();
    BOOL func_ov004_02212140();

    void func_ov004_02212174();
    BOOL func_ov004_022121a4();
    void func_ov004_022121e8();
    BOOL func_ov004_02212210();
    void func_ov004_02212248();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ u32 unk_844;
    /* 0x848 */ Unk_ov004_02205ad4 unk_848;
};

// ================================================================ Unk_ov004_0224af8c
void Unk_ov004_0224af8c::func_ov004_02212174() {
    func_ov004_022091e0();
    func_ov004_02209198();
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 2, 0xff, 1);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_022121a4() {
    unk_844 = 0x1000;
    unk_73c.func_ov004_02205c44(1, 0);
    func_ov004_02209150();
    unk_848.func_ov004_02205a1c(1, 1, 0);
    return TRUE;
}

void Unk_ov004_0224af8c::func_ov004_022121e8() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224af8c::func_ov004_02212210() {
    unk_844 = 0;
    unk_73c.func_ov004_02205c44(0, 0);
    unk_848.func_ov004_02205a1c(0, 1, 0);
    return TRUE;
}

void Unk_ov004_0224af8c::func_ov004_02212248() {
    static void (Unk_ov004_0224af8c::*tbl[3])() = {
        &Unk_ov004_0224af8c::func_ov004_022121e8,
        &Unk_ov004_0224af8c::func_ov004_02212174,
        &Unk_ov004_0224af8c::func_ov004_02212110,
    };
    u32 i = unk_840;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224af8c::vfunc_70(u32 idx, u32 v) {
    func_ov004_0220878c(this, idx, v);
    static BOOL (Unk_ov004_0224af8c::*tbl[3])() = {
        &Unk_ov004_0224af8c::func_ov004_02212210,
        &Unk_ov004_0224af8c::func_ov004_022121a4,
        &Unk_ov004_0224af8c::func_ov004_02212140,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224af8c::vfunc_74(u32 idx) {
    if (idx < 3) {
        return data_ov004_02240044[idx];
    }
    return 0;
}

BOOL Unk_ov004_0224af8c::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224af8c::vfunc_80() {
    u32 i;
    unk_848.func_ov004_022059f4();
    func_ov004_02212248();
    unk_5e0 = unk_844;
    for (i = 0; i < 4; i++) {
        if (unk_7c0[i].func_ov004_02206e74()) {
            unk_7c0[i].unk_10 = unk_844;
        }
    }
    func_ov004_02208980();
    return TRUE;
}

BOOL Unk_ov004_0224af8c::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0x1000, 0);
    void *res = unk_590;
    u8 t = unk_73c.func_ov004_02205c7c();
    unk_848.func_ov004_02205a64((u32)res, t);
    if (unk_73c.func_ov004_02205c7c() != 0 && func_ov004_02234ad4() == 0) {
        vfunc_70(1, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224af8c::~Unk_ov004_0224af8c() {
}

Unk_ov004_0224af8c::Unk_ov004_0224af8c() {
}

extern "C" Unk_ov004_0224882c *func_ov004_022124e0() {
    return new Unk_ov004_0224af8c;
}

// ================================================================ Unk_ov004_0224a3d4
void Unk_ov004_0224a3d4::func_ov004_022124fc() {
    func_ov004_02208980();
    func_ov004_022091e0();
    func_ov004_02209198();
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 0, 0xff, 1);
    }
}

BOOL Unk_ov004_0224a3d4::func_ov004_02212534() {
    unk_73c.func_ov004_02205c44(1, 0);
    func_ov004_02209150();
    unk_844.func_ov004_02205a1c(1, 1, 0);
    return TRUE;
}

void Unk_ov004_0224a3d4::func_ov004_02212568() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224a3d4::func_ov004_02212590() {
    unk_73c.func_ov004_02205c44(0, 0);
    func_ov004_02209108();
    unk_844.func_ov004_02205a1c(0, 1, 0);
    return TRUE;
}

void Unk_ov004_0224a3d4::func_ov004_022125c4() {
    static void (Unk_ov004_0224a3d4::*tbl[2])() = {
        &Unk_ov004_0224a3d4::func_ov004_02212568,
        &Unk_ov004_0224a3d4::func_ov004_022124fc,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224a3d4::vfunc_70(u32 idx, u32 v) {
    func_ov004_0220878c(this, idx, v);
    static BOOL (Unk_ov004_0224a3d4::*tbl[2])() = {
        &Unk_ov004_0224a3d4::func_ov004_02212590,
        &Unk_ov004_0224a3d4::func_ov004_02212534,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_ov004_0224a3d4::vfunc_74(u32 idx) {
    if (idx < 2) {
        return data_ov004_02240030[idx];
    }
    return 0;
}

BOOL Unk_ov004_0224a3d4::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a3d4::vfunc_80() {
    unk_844.func_ov004_022059f4();
    func_ov004_022125c4();
    return TRUE;
}

BOOL Unk_ov004_0224a3d4::vfunc_7c() {
    func_ov004_02208de0(0, 0, 0x1000, 0);
    void *res = unk_590;
    u8 t = unk_73c.func_ov004_02205c7c();
    unk_844.func_ov004_02205a64((u32)res, t);
    if (unk_73c.func_ov004_02205c7c() == 0 || func_ov004_02234ad4() != 0) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(1, 0xff);
    }
    return TRUE;
}

Unk_ov004_0224a3d4::~Unk_ov004_0224a3d4() {
}

Unk_ov004_0224a3d4::Unk_ov004_0224a3d4() {
}

extern "C" Unk_ov004_0224882c *func_ov004_022127fc() {
    return new Unk_ov004_0224a3d4;
}

// ================================================================ Unk_ov004_0224b7c8
BOOL Unk_ov004_0224b7c8::func_ov004_02212818() {
    u32 t = func_ov004_022087a4();
    if (t != 0xb9 && t != 0xba) goto rest;
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
        goto end;
    }
rest:
    unk_73c.func_ov004_02205c54(0);
    if (func_ov004_02208980()) {
        func_02051cc8(this, 0, 0xff, 1);
    } else {
        func_ov004_02209198();
    }
    if (func_ov004_022087a4() == 0x207) {
        if (func_020565e8(unk_5d0, 0x30)) {
            func_ov004_02209108();
        }
    }
end:;
}

BOOL Unk_ov004_0224b7c8::func_ov004_0221289c() {
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    func_ov004_02209150();
    return TRUE;
}

void Unk_ov004_0224b7c8::func_ov004_022128c4() {
    if (unk_73c.func_ov004_02205c6c()) {
        func_02051cc8(this, 1, 0xff, 1);
    }
}

BOOL Unk_ov004_0224b7c8::func_ov004_022128ec() {
    func_ov004_02208a18(0, 1, 0x1000);
    if (func_ov004_022087a4() != 0x207) {
        func_ov004_02209108();
    }
    return TRUE;
}

void Unk_ov004_0224b7c8::func_ov004_0221291c() {
    static BOOL (Unk_ov004_0224b7c8::*tbl[2])() = {
        (BOOL (Unk_ov004_0224b7c8::*)())&Unk_ov004_0224b7c8::func_ov004_022128c4,
        &Unk_ov004_0224b7c8::func_ov004_02212818,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_0224b7c8::vfunc_70(u32 idx, u32 v) {
    func_ov004_0220878c(this, idx, v);
    static BOOL (Unk_ov004_0224b7c8::*tbl[2])() = {
        &Unk_ov004_0224b7c8::func_ov004_022128ec,
        &Unk_ov004_0224b7c8::func_ov004_0221289c,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224b7c8::vfunc_0c() {
    unk_73c.func_ov004_02205c44(0, 0);
    return TRUE;
}

BOOL Unk_ov004_0224b7c8::vfunc_80() {
    func_ov004_0221291c();
    return TRUE;
}

BOOL Unk_ov004_0224b7c8::vfunc_7c() {
    unk_73c.func_ov004_02205c44(0, 0);
    func_ov004_02208de0(0, 1, 0x1000, 0);
    func_ov004_02208a18(0, 1, 0x1000);
    vfunc_70(0, 0xff);
    return TRUE;
}
