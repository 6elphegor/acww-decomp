#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------------
// Declarations copied from ov068_013 (Unk_020d8bc8 chain), src/ov004/unk_02224ee4.cpp (Unk_ov004_0224d4e8) and
// ov068_011 (Unk_020d89c8).
// ---------------------------------------------------------------------------------------------------------------------

class Unk_ov068_022708fc;
class Unk_ov068_02270afc;

extern "C" {
void func_02135558(void *obj, void (*dtor)(void *), void *dso);
extern u16 data_020c6cc8;
extern s32 data_020c8cbc;
extern Unk_ov068_022708fc *data_ov068_02271270;
extern char data_ov068_02270964[];
extern char data_ov068_02270970[];

void func_020e761c(void *dst, s32 v, s32 n);
void func_02106054(void *o, u32 i, u32 v);
s32 func_02063b8c(s32 n);
s32 func_020e9650(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *func_02095204(s32 n);
void *func_020947f0(s32 n);
BOOL func_0202ff64(void *v);
u32 func_0201bcbc(void *p, void *q);
s32 func_0201bb3c(void *p, void *out);
void func_020b101c();
void *func_020b4934();
void func_020b4a08(void *o, s32 v);
void func_020b4bbc(void *o, s32 v);
void *func_0207e310(void *o);
void func_020785a8(void *o);
void func_0203d67c(void *p);
BOOL func_0203d704(void *p, s32 a);
s32 func_ov003_02216ba4(void *a, void *b, s32 c);
}

// ---- member object types, named after their constructors.
struct Unk_02053d3c { Unk_02053d3c(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc {
    Unk_0201accc();
    void func_0201a9ec();
    u32 pad[0x58 / 4];
};
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 { Unk_0201a794(); u32 pad[0x68 / 4]; };
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x1c / 4]; u32 unk_1c; u32 pad_20[0x24 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 {
    Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    BOOL func_02019614(u32 a, u16 b);
    BOOL func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u32 pad[0xb4 / 4];
};
struct Unk_02014254 {
    Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u32 pad[0x28 / 4];
};
struct Unk_02082014 { Unk_02082014(); u32 pad[0x14 / 4]; };

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
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

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_a8();
    Unk_02082014 unk_640;
    u32 unk_654;
};

struct Unk_ov068_0226d0d4 { Unk_ov068_0226d0d4(); u32 pad[0xec / 4]; };

// Vtable 0x02270810 (size 0x748)
class Unk_ov068_02270810 : public Unk_020d8bc8 {
public:
    Unk_ov068_02270810() {}
    u32 unk_658;
    Unk_ov068_0226d0d4 unk_65c;
};

// ---------------------------------------------------------------------------------------------------------------------
// ov004 actor base (src/ov004/unk_02224ee4.cpp)
// ---------------------------------------------------------------------------------------------------------------------
class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
};

class Unk_020d9670_Ov004 : public Unk_020d5d84 {
public:
    Unk_020d9670_Ov004();
    virtual ~Unk_020d9670_Ov004();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u8 pad_04[0x94];
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
};

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;
};

class Unk_020dbd54 : public Unk_020dbd34, public Unk_020dbe7c {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    void *unk_b4;

    s32 func_020547cc(void *q);
};

class Unk_ov004_02224ee4 {
public:
    Unk_ov004_02224ee4();
    ~Unk_ov004_02224ee4();

    u32 unk_00;
    u32 unk_04;
    u32 unk_08[13];
    u32 unk_3c[13];
    u32 unk_70[13];
};

class Unk_ov004_02224d60 {
public:
    Unk_ov004_02224d60();
    ~Unk_ov004_02224d60();

    u32 unk_00;
};

class Unk_ov004_02224cf4 {
public:
    Unk_ov004_02224cf4();
    ~Unk_ov004_02224cf4();

    u32 unk_00[0x10];
};

class Unk_ov004_0224d4e8 : public Unk_020d9670_Ov004 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_60(u32 v);
    virtual void vfunc_64(void *out);

    void func_ov004_02224f58(u32 v);
    BOOL func_ov004_02224f20(s32 a);
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *name);

    /* 0xec */ Unk_020dbd54 unk_ec;
    /* 0x1a4 */ Unk_ov004_02224ee4 unk_1a4;
    /* 0x248 */ Unk_ov004_02224d60 unk_248;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ u8 pad_24d[3];
    /* 0x250 */ Unk_ov004_02224cf4 unk_250;
};

extern "C" void func_ov004_02224ff4(char *name, Unk_020dbd54 *m, Unk_ov004_02224ee4 *a, Unk_ov004_02224d60 *b);
extern "C" void func_ov004_02224f7c(Unk_ov004_02224ee4 *a, Unk_ov004_02224d60 *b);

struct Unk_ov068_0226da3c_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

// Vtable 0x022708fc (size 0x3fc)
class Unk_ov068_022708fc : public Unk_ov004_0224d4e8 {
public:
    Unk_ov068_022708fc();
    virtual ~Unk_ov068_022708fc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_60(u32 v);

    void func_ov068_0226d8a0();
    BOOL func_ov068_0226d8ac();
    void func_ov068_0226d8bc();
    BOOL func_ov068_0226d8c8();
    void func_ov068_0226d8d8();

    /* 0x290 */ s32 unk_290;
    /* 0x294 */ s32 unk_294;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 pad_299[3];
    /* 0x29c */ Unk_020dbd54 unk_29c;
    /* 0x354 */ Unk_ov004_02224ee4 unk_354;
    /* 0x3f8 */ Unk_ov004_02224d60 unk_3f8;
};

// ---------------------------------------------------------------------------------------------------------------------
// Menu/dialog sub-object at +0x898 of the owner (vtable 0x02270a6c)
// ---------------------------------------------------------------------------------------------------------------------
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

struct Unk_ov068_02270a6c_Obj {
    u32 unk_00;
    u32 unk_04;
};

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 pad_04[0x3c - 4];
    Unk_ov068_02270a6c_Obj *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_ov068_02270a6c : public Unk_020d8938 {
public:
    Unk_ov068_02270a6c();
    virtual ~Unk_ov068_02270a6c() {}
};

// ---------------------------------------------------------------------------------------------------------------------
// Owner base (Unk_020d89c8), size 0x894
// ---------------------------------------------------------------------------------------------------------------------
struct Unk_ov068_0225f23c_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02270afc_Vec {
    s32 x, y, z;
};

class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual BOOL vfunc_60(u16 *p);
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual BOOL vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov068_0225f23c_Vec unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[0x350 - 0x90];
    /* 0x350 */ Unk_0201accc unk_350;
    /* 0x3a8 */ u8 pad_3a8[0x508 - 0x3a8];
    /* 0x508 */ u8 unk_508;
    /* 0x509 */ u8 pad_509[0x564 - 0x509];
    /* 0x564 */ Unk_02019858 unk_564;
    /* 0x618 */ Unk_02014254 unk_618;
    /* 0x640 */ u8 pad_640[0x893 - 0x640];
    /* 0x893 */ u8 unk_893;
};

// Vtable 0x02270afc
class Unk_ov068_02270afc : public Unk_020d89c8 {
public:
    Unk_ov068_02270afc();
    virtual ~Unk_ov068_02270afc();
    virtual BOOL vfunc_80();
    virtual void vfunc_84();

    void func_ov068_0226dca4();
    BOOL func_ov068_0226dd14();
    void func_ov068_0226dd18();
    BOOL func_ov068_0226dd38();
    void func_ov068_0226dd3c();
    BOOL func_ov068_0226dd48();
    void func_ov068_0226dda4();
    BOOL func_ov068_0226dda8();
    void func_ov068_0226ddac();

    void func_ov068_0226e638(s32 state);
    void func_ov068_0226ed88();
    void func_ov068_0226ee18();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ Unk_ov068_02270a6c unk_898;
    /* 0xa38 */ u8 pad_a38[0xa4a - 0xa38];
    /* 0xa4a */ u16 unk_a4a;
    /* 0xa4c */ u8 pad_a4c[0xa50 - 0xa4c];
    /* 0xa50 */ u8 unk_a50;
    /* 0xa51 */ u8 unk_a51;
    /* 0xa52 */ u8 pad_a52[2];
    /* 0xa54 */ u8 unk_a54;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 unk_a56;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ u8 pad_a59;
    /* 0xa5a */ s16 unk_a5a;
    /* 0xa5c */ s32 unk_a5c;
    /* 0xa60 */ s32 unk_a60;
    /* 0xa64 */ s32 unk_a64;
    /* 0xa68 */ s32 unk_a68;
    /* 0xa6c */ s32 unk_a6c;
    /* 0xa70 */ s32 unk_a70;
};

// ---------------------------------------------------------------------------------------------------------------------

extern "C" Unk_ov068_02270810 *func_ov068_0226d788() {
    return new Unk_ov068_02270810();
}

void Unk_ov068_022708fc::func_ov068_0226d8a0() {
    unk_294 = 0x1f;
}

BOOL Unk_ov068_022708fc::func_ov068_0226d8ac() {
    unk_294 = 0x1f;
    return TRUE;
}

void Unk_ov068_022708fc::func_ov068_0226d8bc() {
    unk_294 = 1;
}

BOOL Unk_ov068_022708fc::func_ov068_0226d8c8() {
    unk_294 = 1;
    return TRUE;
}

void Unk_ov068_022708fc::func_ov068_0226d8d8() {
    static void (Unk_ov068_022708fc::*tbl[2])() = {
        &Unk_ov068_022708fc::func_ov068_0226d8bc,
        &Unk_ov068_022708fc::func_ov068_0226d8a0,
    };
    if (unk_24c < 2) {
        (this->*tbl[unk_24c])();
    }
}

BOOL Unk_ov068_022708fc::vfunc_60(u32 v) {
    static BOOL (Unk_ov068_022708fc::*tbl[2])() = {
        &Unk_ov068_022708fc::func_ov068_0226d8c8,
        &Unk_ov068_022708fc::func_ov068_0226d8ac,
    };
    if (v < 2) {
        if ((this->*tbl[v])()) {
            if (func_ov004_02224f20(v)) {
                unk_24c = v;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov068_022708fc::vfunc_0c() {
    func_ov004_02224f60();
    if (unk_298 != 0) {
        func_ov004_02224f7c(&unk_354, &unk_3f8);
    }
    data_ov068_02271270 = NULL;
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_24() {
    unk_ec.func_020547cc(0);
    if (unk_298 != 0) {
        unk_29c.func_020547cc(0);
    }
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_18() {
    func_ov068_0226d8d8();
    if (unk_290 != unk_294) {
        func_020e761c(&unk_290, unk_294, 2);
    }
    u32 n = (*(Unk_ov068_0226da3c_Obj **)((u8 *)this + 0x148))->unk_18;
    for (u32 i = 0; i < n; i++) {
        func_02106054(*(Unk_ov068_0226da3c_Obj **)((u8 *)this + 0x148), i, (u8)unk_290);
    }
    return TRUE;
}

BOOL Unk_ov068_022708fc::vfunc_00() {
    data_ov068_02271270 = this;
    func_ov004_02224f58(1);
    func_ov004_02224f90(data_ov068_02270964);
    unk_290 = unk_294 = 1;
    func_ov004_02224ff4(data_ov068_02270970, &unk_29c, &unk_354, &unk_3f8);
    vfunc_60(1);
    unk_298 = 1;
    return TRUE;
}

Unk_ov068_022708fc::~Unk_ov068_022708fc() {}

Unk_ov068_022708fc::Unk_ov068_022708fc() {
    data_ov068_02271270 = NULL;
}

extern "C" Unk_ov068_022708fc *func_ov068_0226dbcc() {
    return new Unk_ov068_022708fc();
}

Unk_ov068_02270a6c::Unk_ov068_02270a6c() {}

Unk_ov068_02270afc::~Unk_ov068_02270afc() {}

BOOL Unk_ov068_02270afc::vfunc_80() {
    if (unk_893 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::vfunc_84() {
    unk_893 = 1;
}

void Unk_ov068_02270afc::func_ov068_0226dca4() {
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            func_020b101c();
            if (vfunc_64() != NULL) {
                func_020785a8(func_0207e310(vfunc_64()));
            }
            func_ov068_0226ed88();
            if (unk_a50 != 0) {
                func_020b4a08(func_020b4934(), 0);
                func_020b4bbc(func_020b4934(), 6);
            } else {
                func_020b4bbc(func_020b4934(), 0);
            }
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226dd14() {
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226dd18() {
    if (unk_898.unk_3c != NULL) {
        if (unk_898.unk_3c->unk_04 == 0) {
            func_0203d67c(this);
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226dd38() {
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226dd3c() {
    func_ov068_0226e638(9);
}

BOOL Unk_ov068_02270afc::func_ov068_0226dd48() {
    void *p = func_02095204(4);
    if (p != NULL) {
        u32 x = func_0201bcbc(this, p);
        if (unk_a50 != 0 || unk_a51 != 0) {
            unk_618.func_020141b4(0, x, 1);
        } else {
            unk_618.func_020141b4(0, x, 0);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::func_ov068_0226dda4() {}

BOOL Unk_ov068_02270afc::func_ov068_0226dda8() {
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226ddac() {
    Unk_ov068_02270afc_Vec v;
    Unk_ov068_02270afc_Vec tmp;
    Unk_ov068_02270afc_Vec *pv = (Unk_ov068_02270afc_Vec *)func_020947f0(4);
    if (unk_894 == 6) {
        if (unk_618.func_02014220() == 0) {
            if (unk_a56 == 0 || unk_a54 == 0) {
                if (unk_a58 == 0) {
                    func_0203d704(this, 0);
                    unk_a50 = 1;
                    return;
                }
                if (unk_a58 > 0) {
                    unk_a58--;
                }
            }
            if (unk_a56 > 0) {
                unk_a56--;
            }
        }
    }
    if (unk_894 == 6) {
        if (pv != NULL) {
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_0202ff64(&v)) {
                func_0203d704(this, 0);
                unk_a51 = 1;
                return;
            }
        }
    }
    s32 d = data_020c8cbc;
    if (pv != NULL) {
        d = func_020e9650(pv, &unk_5c);
    }
    if (unk_508 != 0 || (unk_894 != 6 && d < 0x2334)) {
        if (unk_564.func_020197a8() == 1 || unk_894 == 3) {
            if (unk_564.func_02019614(2, data_020c6cc8)) {
                func_ov068_0226ee18();
                return;
            }
        }
    }
    if (unk_564.func_020197a8() == 0) {
        if (unk_a4a != 0) {
            unk_a4a--;
        }
        if (unk_a4a == 0) {
            unk_a5a = func_ov003_02216ba4(&unk_a68, &unk_5c, unk_8e);
            unk_a5c = unk_a68;
            unk_a60 = unk_a6c;
            unk_a64 = unk_a70;
            if (unk_a5a != unk_8e) {
                if (!unk_564.func_020196b4(3, 1, 0, 0, 0, unk_a5a, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x46) + 0x14;
            } else {
                if (!unk_564.func_020196b4(1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0)) {
                    return;
                }
                unk_a4a = func_02063b8c(0x50) + 0x14;
            }
        } else {
            if (unk_564.func_02019790()) {
                unk_564.func_02019614(1, data_020c6cc8);
            }
        }
    } else if (unk_564.func_020197a8() == 3) {
        if (unk_564.func_02019790()) {
            unk_564.func_020196b4(1, 1, unk_a68, unk_a70, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    } else if (unk_564.func_020197a8() == 1) {
        switch (func_0201bb3c(this, &tmp)) {
        case 1:
            if (unk_564.func_02019614(1, data_020c6cc8)) {
                func_ov068_0226ee18();
            }
            break;
        case 2:
            unk_a5c = tmp.x;
            unk_a60 = tmp.y;
            unk_a64 = tmp.z;
            unk_350.func_0201a9ec();
            break;
        default:
            if (func_020e96ec(&unk_a5c, &unk_a68) != 0) {
                unk_a5c = unk_a68;
                unk_a60 = unk_a6c;
                unk_a64 = unk_a70;
                unk_350.func_0201a9ec();
            } else if (func_020e9650(&unk_a68, &unk_5c) < 0x200) {
                unk_564.func_02019614(1, data_020c6cc8);
                func_ov068_0226ee18();
            }
            break;
        }
    }
}
