#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224c7d0;
class Unk_ov004_0224c994;

struct Unk_ov004_0221a2d8_Out {
    void *unk_00;
    u8 unk_04;
};

extern "C" {
extern u16 data_020c6cc8;
extern u8 data_ov004_022508e0[];
extern u8 data_ov004_0224ca54[];

u32 *func_02067918(s32 a);
u32 func_020e7518(u8 *p);
s32 func_02063b8c(s32 a);
void *func_02095204(s32 a);
s32 func_020e9650(void *a, void *b);
void func_02003e70(void *a, u32 b, u32 c, u32 d);
void func_0203d704(void *o, s32 a);
s32 func_020b0e60();
void func_020b101c();
void func_0207821c(s32 a);
void *func_0207e310(void *o);
s32 func_020785a8(void *o);
void func_020785e8(void *o, u32 a);
void func_020135c4(void *o);
void func_0201a784(void *o);
void *func_0209750c();
void *func_0209888c(void *o);
void func_020b50dc();
s32 func_020b5178();
s32 func_02094218(void *o);
void *func_0207f854(void *o, void *a);
s32 func_02080950(void *o);
void *func_ov004_0223584c();
void *func_ov004_02235788(void *g);
void func_ov004_02235d04();
void func_020b1028();
void func_0202ffb0(s32 a);
void func_0209d498(void *p);
void func_ov004_022196a4(void *m, void *owner);
u32 func_0200301c(void *a, void *b, u32 c, void *d);
void *func_020805c4(void *o);
u32 func_0201bc4c(void *o, u32 a);
void func_02015ab0(void *o, u32 a);
s32 func_02014220(void *o);
void func_0203d67c(void *o);
void *func_02015aac(void *o);
s32 func_0201bcbc(void *o, void *p);
s32 func_020141b4(void *o, s32 a, s32 b, s32 c);
void func_0201ad34(void *o, s32 a);
void func_0201ad30(void *o, s32 a);
void func_0201ad2c(void *o, s32 a);
void func_02084038(void *o);
}

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
struct Unk_020135e4 { Unk_020135e4(); ~Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
    u32 pad[0xb4 / 4];
};
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
    void func_0202d664(void *owner, u16 *p);
    u32 pad[0x34 / 4];
};
class Unk_0202d5e8 : public Unk_020d8c7c_Base {
public:
    Unk_0202d5e8();
    u32 pad[(0x1a0 - 4) / 4];
    u8 unk_1a0;
    u8 pad_1a1[3];
};
struct Unk_02082088 { Unk_02082088(); ~Unk_02082088(); u32 pad[2]; };
struct Unk_0201c078 { Unk_0201c078(); ~Unk_0201c078(); u32 pad[0x5c / 4]; };

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
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
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

    BOOL func_0201ba88();
    void func_0201bc28(void *p);

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
    virtual void *vfunc_64();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88(u16 *p, BOOL flag);
    virtual void vfunc_a4(u32 a, s32 b);
    virtual BOOL vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();

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


class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
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

    void func_0202d388(Unk_020d89c8 *owner, u32 n);

    u8 pad_04[0x1a0 - 4];
};

// Menu member of Unk_ov004_0224c7d0 at +0x914 (constructor lives in another file).
class Unk_ov004_0224c740 : public Unk_020d8938 {
public:
    Unk_ov004_0224c740();
    u8 pad_1a0[0x1ac - 0x1a0];
};

// Menu member of Unk_ov004_0224c994 at +0x898.
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

// Menu member of Unk_ov004_0224cb98 at +0x89c.
class Unk_ov004_0224cb08 : public Unk_020d8938 {
public:
    virtual ~Unk_ov004_0224cb08() {}
};

struct Unk_ov004_02219e0c_V {
    s32 x, y, z;
};
struct Unk_ov004_02219e0c_Obj {
    u8 pad_00[0x5c];
    Unk_ov004_02219e0c_V unk_5c;
};

typedef BOOL (Unk_ov004_0224c7d0::*Unk_ov004_0224c7d0_Fn)();
struct Unk_ov004_0224c7d0_Ent {
    Unk_ov004_0224c7d0_Fn a;
    Unk_ov004_0224c7d0_Fn b;
};

class Unk_ov004_0224c7d0 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c7d0() : unk_894(0xfff1) {
        unk_ac8[0] = 0;
        unk_ac8[1] = 0;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_68();

    BOOL func_ov004_02219d34();
    BOOL func_ov004_02219d44();
    BOOL func_ov004_02219dd8();
    BOOL func_ov004_02219e0c();
    BOOL func_ov004_02219eb8();
    void func_ov004_02219ef4();
    void func_ov004_02219f18(s32 idx);

    /* 0x894 */ u16 unk_894;
    u8 pad_896[2];
    /* 0x898 */ u32 unk_898;
    /* 0x89c */ u32 unk_89c;
    /* 0x8a0 */ u32 unk_8a0;
    /* 0x8a4 */ s32 unk_8a4;
    /* 0x8a8 */ u8 unk_8a8[100];
    /* 0x90c */ s32 unk_90c;
    /* 0x910 */ s32 unk_910;
    /* 0x914 */ Unk_ov004_0224c740 unk_914;
    /* 0xac0 */ u8 unk_ac0;
    u8 pad_ac1[3];
    /* 0xac4 */ s32 unk_ac4;
    /* 0xac8 */ u32 unk_ac8[3];
    /* 0xad4 */ u8 unk_ad4;
    /* 0xad5 */ u8 unk_ad5;
    /* 0xad6 */ u8 unk_ad6;
    /* 0xad7 */ u8 unk_ad7;
    /* 0xad8 */ u8 unk_ad8;
    u8 pad_ad9[3];
    /* 0xadc */ s32 unk_adc;
    /* 0xae0 */ s32 unk_ae0;
};

typedef BOOL (Unk_ov004_0224c994::*Unk_ov004_0224c994_Fn)();
struct Unk_ov004_0224c994_Ent {
    Unk_ov004_0224c994_Fn a;
    Unk_ov004_0224c994_Fn b;
};

class Unk_ov004_0224c994 : public Unk_020d89c8 {
public:
    Unk_ov004_0224c994() {}
    virtual ~Unk_ov004_0224c994();
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

class Unk_ov004_0224cb98 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224cb98();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    /* 0x894 */ u16 unk_894;
    /* 0x896 */ u8 unk_896;
    u8 pad_897;
    /* 0x898 */ u32 unk_898;
    /* 0x89c */ Unk_ov004_0224cb08 unk_89c;
    /* 0xa3c */ u8 pad_a3c[0x10];
    /* 0xa4c */ u8 unk_a4c[0x20];
};

extern "C" {
extern Unk_ov004_0224c7d0_Ent data_ov004_02250850[];
extern Unk_ov004_0224c7d0_Ent data_ov004_02250858[];
extern Unk_ov004_0224c994_Ent data_ov004_02250908[];
extern Unk_ov004_0224c994_Ent data_ov004_02250910[];
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov004_0224c7d0::func_ov004_02219d34() {
    unk_ad4 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02219d44() {
    u32 *p = func_02067918(0);
    if (p) {
        if (p[1] != 0) {
            return TRUE;
        }
    }
    if (unk_ad4 == 0x28) {
        func_ov004_02219ef4();
    }
    unk_8c = 0;
    unk_8e = -0x8000;
    unk_90 = 0;
    unk_92 = 0;
    unk_94 = -0x8000;
    unk_96 = 0;
    if (func_020e7518(&unk_ad4)) {
        if (unk_ad4 == 8) {
            unk_5c = 0x10000;
            unk_68 = 0x10000;
            unk_64 = 0x1f000;
            unk_70 = 0x1f000;
        }
        return TRUE;
    }
    func_ov004_02219f18(2);
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02219dd8() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02219e0c() {
    if (unk_ad5 == 0) {
        if (func_020e7518(&unk_ad7)) {
            return TRUE;
        }
        if (func_02063b8c(0x65) > 0x19) {
            unk_ad7 = 100;
            return TRUE;
        }
        Unk_ov004_02219e0c_Obj *p = (Unk_ov004_02219e0c_Obj *)func_02095204(4);
        if (p) {
            Unk_ov004_02219e0c_V v;
            Unk_ov004_02219e0c_V *pv = &p->unk_5c;
            v.x = p->unk_5c.x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &unk_5c) > 0x8000) {
                func_02003e70(&unk_514, 0x4ca, 0x7f, 0);
                unk_ad5 = 0x1e;
            }
        }
    }
    if (unk_ad5 != 0) {
        func_0203d704(this, 0);
        if (unk_ad5 > 1) {
            func_020e7518(&unk_ad5);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02219eb8() {
    unk_ac0 = 0;
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov004_0224c7d0::func_ov004_02219ef4() {
    func_02003e70(&unk_514, 0x4cb, 0x7f, 0);
    func_020b0e60();
}

void Unk_ov004_0224c7d0::func_ov004_02219f18(s32 idx) {
    BOOL ok = TRUE;
    if (data_ov004_02250850[idx].a) {
        ok = (this->*data_ov004_02250850[idx].a)();
    }
    if (ok) {
        unk_910 = unk_90c;
        unk_90c = idx;
    }
}

BOOL Unk_ov004_0224c7d0::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250858[unk_90c].a) {
        r = (this->*data_ov004_02250850[unk_90c].b)();
    }
    return r;
}

BOOL Unk_ov004_0224c7d0::vfunc_24() {
    if (unk_ac0 != 0) {
        Unk_020d77a4::vfunc_24();
    }
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::vfunc_0c() {
    if (!Unk_020d89c8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_ac0 == 6 || unk_ac0 == 4) {
        func_020b101c();
        func_0207821c(-1);
    }
    if (vfunc_64()) {
        func_020785a8(func_0207e310(vfunc_64()));
    }
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    unk_894 = 0xfff1;
    func_020135c4(&unk_558);
    unk_898 = unk_5c;
    unk_89c = unk_60;
    unk_8a0 = unk_64;
    unk_ac8[2] = 0x3000;
    s32 i;
    for (i = 0; i < 100; i++) {
        unk_8a8[i] = 0xff;
    }
    func_0201a784(&unk_3b0);
    void *o;
    if (func_0209750c()) {
        o = func_0209888c(func_0209750c());
    } else {
        o = 0;
    }
    func_020b50dc();
    if (func_020b5178() != 0 ||
        (vfunc_64() && o && func_02094218(o) && func_0207f854(vfunc_64(), o) &&
         func_02080950(func_0207f854(vfunc_64(), o)))) {
        unk_adc = (s32)func_ov004_02235788(func_ov004_0223584c());
        func_020b1028();
        func_0202ffb0(0);
        func_ov004_02235d04();
        func_0209d498(unk_ac8);
        unk_ac0 = 2;
        func_ov004_02219f18(3);
    } else {
        unk_5c = 0x10000;
        unk_68 = 0x10000;
        unk_64 = 0x23000;
        unk_70 = 0x23000;
        unk_ad7 = 100;
        unk_ae0 = 1;
        func_ov004_02219f18(0);
    }
    if (vfunc_64()) {
        func_020785e8(func_0207e310(vfunc_64()), 2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_914);
    func_ov004_022196a4(&unk_914, this);
    return TRUE;
}

extern "C" Unk_ov004_0224c7d0 *func_ov004_0221a1c4() {
    return new Unk_ov004_0224c7d0;
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov004_0224c994::~Unk_ov004_0224c994() {}

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

BOOL Unk_ov004_0224c994::vfunc_48() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c904::vfunc_14() {}
void Unk_ov004_0224c904::vfunc_18() {}

void Unk_ov004_0224c904::vfunc_78(void *arg) {
    Unk_ov004_0221a2d8_Out *out = (Unk_ov004_0221a2d8_Out *)arg;
    func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022508e0, 0x28, data_ov004_0224ca54);
    out->unk_00 = data_ov004_022508e0;
    out->unk_04 = func_02063b8c(5);
}

void Unk_ov004_0224c904::func_ov004_0221a314(Unk_ov004_0224c994 *owner) {
    vfunc_08();
    func_0202d388(owner, 0x11);
    unk_1a0 = owner;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a38c() { return TRUE; }

BOOL Unk_ov004_0224c994::func_ov004_0221a390() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov004_0221a42c(1);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a3bc() {
    void *p = func_02015aac(&unk_898);
    s32 v = 0;
    if (p) {
        v = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, v, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c994::func_ov004_0221a3f4() { return TRUE; }

BOOL Unk_ov004_0224c994::func_ov004_0221a3f8() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
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

BOOL Unk_ov004_0224c994::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250910[unk_894].a) {
        r = (this->*data_ov004_02250908[unk_894].b)();
    }
    return r;
}

BOOL Unk_ov004_0224c994::vfunc_00() {
    if (!Unk_020d89c8::vfunc_00()) {
        return FALSE;
    }
    func_ov004_0221a42c(2);
    return TRUE;
}

BOOL Unk_ov004_0224c994::vfunc_04() {
    if (!Unk_020d89c8::vfunc_04()) {
        return FALSE;
    }
    func_0201ad34(&unk_2a0, 0x1e);
    func_0201ad30(&unk_2a0, 0x1e);
    func_0201ad2c(&unk_2a0, 0x1e);
    func_0201bc28(&unk_898);
    unk_898.func_ov004_0221a314(this);
    return TRUE;
}

extern "C" Unk_ov004_0224c994 *func_ov004_0221a530() {
    return new Unk_ov004_0224c994;
}

Unk_ov004_0224c904::~Unk_ov004_0224c904() {}
Unk_ov004_0224c904::Unk_ov004_0224c904() {}

Unk_ov004_0224cb98::~Unk_ov004_0224cb98() {
    func_02084038(unk_a4c);
}

BOOL Unk_ov004_0224cb98::vfunc_7c() {
    if (unk_896 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224cb98::vfunc_80() { unk_896 = 1; }
