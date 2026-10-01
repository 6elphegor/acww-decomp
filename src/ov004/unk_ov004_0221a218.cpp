// mwcc-version: 1.2/base
// mwcc-flags: -str reuse
#include "types.h"
// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_ov004_0224c994;

#define func_0200301c _ZN12Unk_02002fc813func_0200301cEPvjj
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02015aac _ZN12Unk_020d771413func_02015aacEv
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_0201ad2c _ZN12Unk_0201ad2013func_0201ad2cEi
#define func_0201ad30 _ZN12Unk_0201ad2013func_0201ad30Ei
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0202d388 _ZN12Unk_020d893813func_0202d388EP12Unk_020d89c8j
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
typedef BOOL (Unk_ov004_0224c994::*Unk_ov004_0224c994_Fn)();

struct Unk_ov004_0224c994_Ent {
    Unk_ov004_0224c994_Fn a;
    Unk_ov004_0224c994_Fn b;
};

struct Unk_ov004_0221a2d8_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" {
extern u16 data_020c6cc8;
extern Unk_ov004_0224c994_Ent data_ov004_02250908[3];
extern u8 data_ov004_022508e0[0x28];

s32 func_02063b8c(s32 a);
void *func_020805c4(void *o);
void func_0200301c(void *a, const void *b, u32 c, const void *d);
void func_02015ab0(void *o, s32 a);
s32 func_0201bc4c(void *o, s32 a);
s32 func_02014220(void *o);
void func_0203d67c(void *o);
void *func_02015aac(void *o);
s32 func_0201bcbc(void *o, void *p);
void func_020141b4(void *o, s32 a, s32 b, s32 c);
void func_0201ad34(void *o, s32 a);
void func_0201ad30(void *o, s32 a);
void func_0201ad2c(void *o, s32 a);
void func_0201bc28(void *, void *);
void func_0202d388(void *, void *, u32);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
}

// Members of the scene object, named after their constructors.
// Members of the scene object, named after their constructors.
struct Unk_02053d3c {
    Unk_02053d3c();
    ~Unk_02053d3c();
    u32 pad[0x1b4 / 4];
};
struct Unk_0201ad3c { Unk_0201ad3c(); ~Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); ~Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); ~Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc { Unk_0201accc(); ~Unk_0201accc(); u32 pad[0x58 / 4]; };
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); ~Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); ~Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); ~Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); ~Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[8]; u8 unk_08; u8 pad_09[2]; u8 unk_0b; };
struct Unk_02019858 { Unk_02019858(); ~Unk_02019858(); u32 pad[0xb4 / 4]; };
struct Unk_02014254 { Unk_02014254(); ~Unk_02014254(); u32 pad[0x28 / 4]; };

class Unk_020f43c8 {
public:
    Unk_020f43c8();
    virtual ~Unk_020f43c8();
    u32 pad[0x40 / 4];
};
class Unk_020f4080 : public Unk_020f43c8 {
public:
    Unk_020f4080();
    ~Unk_020f4080() {}
};

struct Unk_0202d7f4 {
    Unk_0202d7f4();
    ~Unk_0202d7f4();
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct Unk_0201c078 { Unk_0201c078(); ~Unk_0201c078(); u32 pad[0x5c / 4]; };

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 unk_68;
    u32 pad_6c;
    u32 unk_70;
    u32 pad_74[(0x8c - 0x74) / 4];
    s16 unk_8c, unk_8e, unk_90, unk_92, unk_94, unk_96;
    u32 pad_98[(0xd4 - 0x98) / 4];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();

    u16 pad_e0[5];
    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();

    /* 0x640 */ u32 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u32 unk_648;
    /* 0x64c */ Unk_0202d7f4 unk_64c;
    /* 0x680 */ Unk_0202d5e8 unk_680;
    /* 0x824 */ Unk_02082088 unk_824;
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ void *unk_830;
    /* 0x834 */ u32 unk_834;
    /* 0x838 */ Unk_0201c078 unk_838;
};

// Dialog sub-object at +0x914 of Unk_ov004_0224c7d0. Its vtable (0x0224c740) names every slot after the class that last overrides it;
// declared here slot by slot so that each slot mangles to that symbol.
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_1c();
    virtual void vfunc_64();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
};

class Unk_020d8938 : public Unk_020d7710 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    virtual void vfunc_64_alt();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    u8 pad_ac[0x1a0 - 0xac];
};

class Unk_ov004_0224c904 : public Unk_020d8938 {
public:
    Unk_ov004_0224c904();
    virtual ~Unk_ov004_0224c904();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void func_ov004_0221a314(Unk_ov004_0224c994 *owner);

    /* 0x1a0 */ Unk_ov004_0224c994 *unk_1a0;
};

class Unk_ov004_0224c994 : public Unk_020d89c8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();

    BOOL func_ov004_0221a38c();
    BOOL func_ov004_0221a390();
    BOOL func_ov004_0221a3bc();
    BOOL func_ov004_0221a3f4();
    BOOL func_ov004_0221a3f8();
    void func_ov004_0221a42c(s32 idx);

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov004_0224c904 unk_898;
};

// ---------------------------------------------------------------------------------------------------------------------
extern "C" Unk_ov004_0224c994 *func_ov004_0221a530();
extern "C" Unk_ov004_SceneEntry data_ov004_0224c8e4 = {(void *(*)())func_ov004_0221a530, 0x88, 0x8c, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
u8 data_ov004_022508e0[0x28];
void _ZN18Unk_ov004_0224c99419func_ov004_0221a3bcEv();
void _ZN18Unk_ov004_0224c99419func_ov004_0221a390Ev();
void _ZN18Unk_ov004_0224c99419func_ov004_0221a38cEv();
void _ZN18Unk_ov004_0224c99419func_ov004_0221a3f8Ev();
void _ZN18Unk_ov004_0224c99419func_ov004_0221a3f4Ev();
// ptmf constants (named: their order cannot be reproduced natively), defined in the order that gives the original layout
void *data_ov004_0224c8d4[2] = {(void *)_ZN18Unk_ov004_0224c99419func_ov004_0221a3f8Ev, 0};
void *data_ov004_0224c8bc[2] = {(void *)_ZN18Unk_ov004_0224c99419func_ov004_0221a3bcEv, 0};
void *data_ov004_0224c8dc[2] = {(void *)_ZN18Unk_ov004_0224c99419func_ov004_0221a38cEv, 0};
void *data_ov004_0224c8cc[2] = {(void *)_ZN18Unk_ov004_0224c99419func_ov004_0221a390Ev, 0};
void *data_ov004_0224c8c4[2] = {(void *)_ZN18Unk_ov004_0224c99419func_ov004_0221a3f4Ev, 0};
}
#define PM(x) (*(Unk_ov004_0224c994_Fn *)(x))
extern "C" Unk_ov004_0224c994_Ent data_ov004_02250908[3] = {
    {PM(data_ov004_0224c8bc), PM(data_ov004_0224c8cc)},
    {0, PM(data_ov004_0224c8dc)},
    {PM(data_ov004_0224c8d4), PM(data_ov004_0224c8c4)}};
#define data_ov004_02250910 ((Unk_ov004_0224c994_Ent *)((u8 *)data_ov004_02250908 + 8))

extern "C" Unk_ov004_0224c994 *func_ov004_0221a530() {
    return new Unk_ov004_0224c994;
}

BOOL Unk_ov004_0224c994::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    func_0201ad34(&unk_2a0, 0x1e);
    func_0201ad30(&unk_2a0, 0x1e);
    func_0201ad2c(&unk_2a0, 0x1e);
    func_0201bc28(this, &unk_898);
    unk_898.func_ov004_0221a314(this);
    return TRUE;
}

BOOL Unk_ov004_0224c994::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    func_ov004_0221a42c(2);
    return TRUE;
}

BOOL Unk_ov004_0224c994::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250910[unk_894].a) {
        r = (this->*data_ov004_02250908[unk_894].b)();
    }
    return r;
}

void Unk_ov004_0224c994::func_ov004_0221a42c(s32 idx) {
    BOOL ok = TRUE;
    if (data_ov004_02250908[idx].a) {
        ok = (this->*data_ov004_02250908[idx].a)();
    }
    if (ok) {
        unk_894 = idx;
    }
}

BOOL Unk_ov004_0224c994::func_ov004_0221a3f8() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a3f4() { return TRUE; }

BOOL Unk_ov004_0224c994::func_ov004_0221a3bc() {
    void *p = func_02015aac(&unk_898);
    s32 v = 0;
    if (p) {
        v = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, v, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a390() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov004_0221a42c(1);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a38c() { return TRUE; }

Unk_ov004_0224c904::Unk_ov004_0224c904() {}

Unk_ov004_0224c904::~Unk_ov004_0224c904() {}

void Unk_ov004_0224c904::func_ov004_0221a314(Unk_ov004_0224c994 *owner) {
    vfunc_08();
    func_0202d388(this, owner, 0x11);
    unk_1a0 = owner;
}

void Unk_ov004_0224c904::vfunc_78(void *arg) {
    Unk_ov004_0221a2d8_Out *out = (Unk_ov004_0221a2d8_Out *)arg;
    func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022508e0, 0x28, "ai_shop3");
    out->unk_00 = data_ov004_022508e0;
    out->unk_04 = func_02063b8c(5);
}

void Unk_ov004_0224c904::vfunc_14() {}

void Unk_ov004_0224c904::vfunc_18() {}

BOOL Unk_ov004_0224c994::vfunc_48() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c994::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_898.vfunc_08();
        func_02015ab0(&unk_898, func_0201bc4c(this, 4));
        func_ov004_0221a42c(0);
        break;
    case 8:
        func_ov004_0221a42c(2);
        break;
    }
}

