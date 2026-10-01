#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

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

struct Unk_0201bc1c;

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa0];
    s32 unk_a0;
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 pad_45[0x514 - 0x4cc - 0x45];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

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
    virtual BOOL vfunc_48(void *p);
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    void *func_0201bc4c(u32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

class Unk_ov004_0224d3f8;

struct Unk_ov004_0221e56c_Ent {
    BOOL (Unk_ov004_0224d3f8::*enter)();
    BOOL (Unk_ov004_0224d3f8::*exit)();
};

#define func_020aa514 _ZN12Unk_020aa3b813func_020aa514Ev
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02015aac _ZN12Unk_020d771413func_02015aacEv
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_02015a5c _ZN12Unk_020d771413func_02015a5cEv
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_0201622c _ZN12Unk_0201635013func_0201622cEiPv
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt

extern "C" {
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221e56c_Ent data_ov004_02250bc4[];
// 0x02250bcc is a label inside the 0x20-byte table (second ptmf of entry 0)
#define data_ov004_02250bcc ((Unk_ov004_0221e56c_Ent *)((u8 *)data_ov004_02250bc4 + 8))
extern Unk_ov004_0224d3f8 *volatile data_ov004_02250bc0;
extern u8 data_ov004_0224d3a4[];
extern u8 data_ov004_0224d3d4[];

void func_0201ad34(void *self, s32 a);
s32 func_0201622c(void *self, s32 a, void *b);
s32 func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 func_020e7518(void *self);
s32 func_020a08a8();
}

class Unk_ov004_0224d3f8 : public Unk_020d8bc8 {
public:
    Unk_ov004_0224d3f8() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov004_0221e428();
    BOOL func_ov004_0221e4ac();
    BOOL func_ov004_0221e4dc();
    BOOL func_ov004_0221e528();
    void func_ov004_0221e56c(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ u8 unk_658;
};

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224d3f8 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" Unk_ov004_0224d3f8 *func_ov004_0221e69c() { return new Unk_ov004_0224d3f8; }

BOOL Unk_ov004_0224d3f8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201ad34(&unk_2a0, 0xff);
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov004_02250bc0 = this;
    func_ov004_0221e56c(0);
    unk_4cc.unk_1c |= 2;
    unk_4cc.unk_44 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_ov004_02250bc0 = 0;
    return TRUE;
}

u8 *Unk_ov004_0224d3f8::vfunc_6c() { return data_ov004_0224d3d4; }

u8 *Unk_ov004_0224d3f8::vfunc_70() { return data_ov004_0224d3a4; }

BOOL Unk_ov004_0224d3f8::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250bcc[unk_654].enter) {
        r = (this->*data_ov004_02250bc4[unk_654].exit)();
    }
    return r;
}

void Unk_ov004_0224d3f8::func_ov004_0221e56c(s32 state) {
    BOOL ok = TRUE;
    if (data_ov004_02250bc4[state].enter) {
        ok = (this->*data_ov004_02250bc4[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov004_0224d3f8::func_ov004_0221e528() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_658 = 0xa;
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::func_ov004_0221e4dc() {
    if (((u32)unk_ec.unk_a4 << 4) >> 16 == (((u32)unk_ec.unk_a0 << 4) >> 16) - 1) {
        if (func_020e7518(&unk_658) == 0 && func_020a08a8()) {
            func_ov004_0221e56c(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::func_ov004_0221e4ac() {
    func_020195c8(&unk_564, 1, 0x100, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::func_ov004_0221e428() {
    if (func_0201622c(&unk_334, 0x100, &unk_2a0) && func_02019790(&unk_564)) {
        func_020195c8(&unk_564, 1, 0x101, 1, data_020c6cc8, 0);
    }
    if (func_0201622c(&unk_334, 0x101, &unk_2a0) && func_02019790(&unk_564)) {
        func_ov004_0221e56c(0);
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d3f8

extern "C" BOOL func_ov004_0221e3dc() {
    Unk_ov004_0224d3f8 *y = data_ov004_02250bc0;
    if (y) {
        if (func_0201622c(&y->unk_334, 0xff, &y->unk_2a0) && data_ov004_02250bc0->unk_654 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN18Unk_ov004_0224d3f819func_ov004_0221e528Ev();
extern "C" void _ZN18Unk_ov004_0224d3f819func_ov004_0221e4dcEv();
extern "C" void _ZN18Unk_ov004_0224d3f819func_ov004_0221e4acEv();
extern "C" void _ZN18Unk_ov004_0224d3f819func_ov004_0221e428Ev();
extern "C" u8 data_ov004_0224d3a4[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'i', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov004_0224d3d4[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'i', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry data_ov004_0224d3bc = {func_ov004_0221e69c, 0x5d, 0x64, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224d394[2] = {(void *)_ZN18Unk_ov004_0224d3f819func_ov004_0221e4acEv, 0};
extern "C" void *data_ov004_0224d39c[2] = {(void *)_ZN18Unk_ov004_0224d3f819func_ov004_0221e428Ev, 0};
extern "C" void *data_ov004_0224d384[2] = {(void *)_ZN18Unk_ov004_0224d3f819func_ov004_0221e528Ev, 0};
extern "C" void *data_ov004_0224d38c[2] = {(void *)_ZN18Unk_ov004_0224d3f819func_ov004_0221e4dcEv, 0};
typedef BOOL (Unk_ov004_0224d3f8::*Unk_ov004_O_Fn)();
extern "C" Unk_ov004_0221e56c_Ent data_ov004_02250bc4[2] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224d384, *(Unk_ov004_O_Fn *)data_ov004_0224d38c},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d394, *(Unk_ov004_O_Fn *)data_ov004_0224d39c},
};
extern "C" Unk_ov004_0224d3f8 *volatile data_ov004_02250bc0 = 0;
