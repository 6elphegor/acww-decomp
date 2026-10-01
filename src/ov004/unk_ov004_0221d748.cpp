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
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
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
    virtual void vfunc_78(void *arg);
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
    Unk_020d7710();
    virtual ~Unk_020d7710();
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
    u8 pad_00[0xa4];
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
    u8 pad_20[0x514 - 0x4cc - 0x20];
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
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual BOOL vfunc_58(void *p);
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

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

class Unk_ov004_0224d248;
class Unk_ov004_0224d2d8;

typedef void (Unk_ov004_0224d248::*Unk_ov004_0224d248_Fn)();
typedef BOOL (Unk_ov004_0224d2d8::*Unk_ov004_0224d2d8_Fn)();

struct Unk_ov004_0224d248_Ent {
    Unk_ov004_0224d248_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0221e0b4_Ent {
    Unk_ov004_0224d2d8_Fn enter;
    Unk_ov004_0224d2d8_Fn exit;
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
#define func_0201b08c _ZN12Unk_020d77a48vfunc_4cEi
#define func_0201b9fc _ZN12Unk_020d77a413func_0201b9fcEjjjz
#define func_0201ba88 _ZN12Unk_020d77a413func_0201ba88Ev
#define func_0201b9e8 _ZN12Unk_020d77a413func_0201b9e8Eii
#define func_0201b9bc _ZN12Unk_020d77a413func_0201b9bcEv
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0201bd9c _ZN12Unk_020d77a413func_0201bd9cEi
#define func_0201ad30 _ZN12Unk_0201ad2013func_0201ad30Ei
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_02015170 _ZN12Unk_020d771013func_02015170Ejj
#define func_020151d0 _ZN12Unk_020d771013func_020151d0Ei
#define func_0201578c _ZN12Unk_020d771413func_0201578cEjjj
#define func_020157e8 _ZN12Unk_020d771413func_020157e8Ejj
#define func_02015958 _ZN12Unk_020d771413func_02015958Eijiii
#define func_0201622c _ZN12Unk_0201635013func_0201622cEiPv
#define func_020986d4 _ZN12Unk_0209865c13func_020986d4Ev
#define func_02071c5c _ZN12Unk_02071c5c13func_02071c5cEv
#define func_02071c1c _ZN12Unk_02071c1c13func_02071c1cEj
#define func_0209872c _ZN12Unk_0209865c13func_0209872cEv
#define func_02098714 _ZN12Unk_0209865c13func_02098714Ev
#define func_020679b4 _ZN12Unk_020660f813func_020679b4Ev
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02072e88 _ZN12Unk_020cbb1813func_02072e88Ei
#define func_02099790 _ZN12Unk_020994cc13func_02099790Ev

extern "C" {
extern Unk_ov004_0221b954_Global *data_020cbb18;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern u8 data_021dfd8c[];
extern u8 *data_ov004_0224d14c;
extern u8 *data_ov004_0224d150;
extern u32 data_ov004_0224d154[];
extern Unk_ov004_0224d248_Ent data_ov004_02250b20[];
extern Unk_ov004_0221e0b4_Ent data_ov004_02250b50[];
// 0x02250b58 is a label inside the 0x70-byte table (second ptmf of entry 0)
#define data_ov004_02250b58 ((Unk_ov004_0221e0b4_Ent *)((u8 *)data_ov004_02250b50 + 8))

void func_0201b08c(void *self, u32 a, u32 b);
s32 func_0201b9fc(void *self, s32 a, s32 b, s32 c);
BOOL func_0201ba88(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL func_0201b9bc(void *self);
void func_0201bc28(void *self, void *p);
u32 func_0201bc4c(void *self, u32 id);
s32 func_0201bcbc(void *self, void *p);
void func_0201bd9c(void *self, s32 v);
void func_0201ad30(void *self, s32 a);
void func_0201ad34(void *self, s32 a);
void func_02015ab0(void *self, u32 v);
void *func_02015aac(void *self);
s32 func_020197a8(void *self);
s32 func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_02019614(void *self, s32 a, u16 b);
s32 func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_02015170(void *self, s32 a, s32 b);
void func_020151d0(void *self, s32 a);
s32 func_0201578c(void *self, u16 *p, s32 a, s32 b);
void func_020157e8(void *self, s32 a, s32 b);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_0201622c(void *self, s32 a, void *b);
s32 func_0206ed18(void);
u32 func_0206ed38(void);
u16 *func_0206eb9c(void);
void *func_0209750c(void);
void *func_020986d4(void *p);
void *func_02071c5c(void *p);
u32 func_02071c1c(void *p, u32 i);
void func_02070b68(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02070e4c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02003ddc(void *p, s32 a, s32 b, s32 c);
u16 *func_0209872c(void *p);
u16 *func_02098714(void *p);
void func_02094bb4(u16 *p);
void func_02094b9c(u16 *p);
void func_02067a84(void *o, void *p, u32 d);
void *func_020679b4(void *o);
s32 func_020aa514(void *p);
void *func_0209ebf0(void);
s32 func_02097520(void *p);
void *func_0209888c(s32 v);
void func_02084ce0(u16 *p);
s32 func_02039e44(void);
s32 func_02039e1c(void);
s32 func_0202e148(void);
s32 func_020a032c(void);
s32 func_02063b8c(s32 n);
s32 func_02098044(void *p, s32 n);
void func_0209801c(void *p, s32 n);
s32 func_02072e44(void *p);
s32 func_02072e88(void *p, u32 i);
s32 func_020a62a0(void);
void func_0203d67c(void *p);
s32 func_0207a484(void *p);
void *func_0207a4b8(void *p);
s32 func_02099790(void *p);
s32 func_020b50e8(void);
}

class Unk_ov004_0224d248 : public Unk_020d7710 {
public:
    Unk_ov004_0224d248();
    virtual ~Unk_ov004_0224d248();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void func_ov004_0221d960();
    void func_ov004_0221d9bc();
    void func_ov004_0221dae4();
    void func_ov004_0221db6c(s32 v);
    void func_ov004_0221de38(Unk_020d77a4 *o);

    /* 0xac */ Unk_020d77a4 *unk_ac;
    /* 0xb0 */ s32 unk_b0;
};

class Unk_ov004_0224d2d8 : public Unk_020d8bc8 {
public:
    Unk_ov004_0224d2d8() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58(void *p);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov004_0221dea4();
    BOOL func_ov004_0221dea8();
    BOOL func_ov004_0221deac();
    BOOL func_ov004_0221df04();
    BOOL func_ov004_0221df08();
    BOOL func_ov004_0221df84();
    BOOL func_ov004_0221df88();
    BOOL func_ov004_0221dfb8();
    BOOL func_ov004_0221dff4();
    BOOL func_ov004_0221dff8();
    BOOL func_ov004_0221dffc();
    BOOL func_ov004_0221e038();
    BOOL func_ov004_0221e08c();
    BOOL func_ov004_0221e090();
    void func_ov004_0221e0b4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov004_0224d248 unk_658;
    /* 0x70c */ s16 unk_70c;
    /* 0x70e */ u8 pad_70e[2];
};

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224d2d8 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov004_0221d9bc_Range {
    static inline BOOL Chk(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) {
            r = TRUE;
        }
        return r;
    }
};

extern "C" Unk_ov004_0224d2d8 *func_ov004_0221e28c() { return new Unk_ov004_0224d2d8; }

BOOL Unk_ov004_0224d2d8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(this, &unk_658);
    unk_658.func_ov004_0221de38(this);
    func_0201bd9c(this, 0x100);
    func_0201ad30(&unk_2a0, 0xd9);
    func_0201ad34(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_70c = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) && func_020b50e8() == 0xb) {
        if (func_0201ba88(this)) {
            func_ov004_0221e0b4(0);
        } else {
            func_ov004_0221e0b4(4);
        }
    } else {
        func_ov004_0221e0b4(0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    Unk_ov004_0221b954_Global *g = data_020cbb18;
    if (func_02072e88(g, g->unk_64) && !func_02072e44(g)) {
        void *p = data_021dfd8c;
        if (func_0207a484(p) != -1) {
            func_02099790(func_0207a4b8(p));
        }
    }
    return TRUE;
}

u8 *Unk_ov004_0224d2d8::vfunc_6c() { return data_ov004_0224d150; }

u8 *Unk_ov004_0224d2d8::vfunc_70() { return data_ov004_0224d14c; }

BOOL Unk_ov004_0224d2d8::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250b58[unk_654].enter) {
        r = (this->*data_ov004_02250b50[unk_654].exit)();
    }
    return r;
}

void Unk_ov004_0224d2d8::func_ov004_0221e0b4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov004_02250b50[state].enter) {
        ok = (this->*data_ov004_02250b50[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221e090() {
    func_02019614(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221e08c() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221e038() {
    Unk_020d7714 *p = &unk_658;
    p->vfunc_08();
    func_02015ab0(&unk_658, func_0201bc4c(this, 4));
    void *q = func_02015aac(&unk_658);
    s32 r = 0;
    if (q) {
        r = func_0201bcbc(this, q);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221dffc() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (!func_02014220(&unk_618)) {
        func_0203d67c(this);
        func_ov004_0221e0b4(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221dff8() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221dff4() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221dfb8() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_70c, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221df88() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov004_0221e0b4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221df84() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221df08() {
    s32 a, b;
    if (func_0201ba88(this)) {
        a = 4;
        b = 4;
        if (func_0201b9e8(this, &a, &b)) {
            s32 av = a;
            s32 g = data_020cbb18->unk_64;
            if (av == g && av == b) {
                func_0201b9fc(this, 1, g, g);
                func_ov004_0221e0b4(1);
                goto end;
            }
        }
        if (func_020a62a0() && b == 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov004_0221e0b4(0);
        }
    }
end:
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221df04() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221deac() {
    if (func_0201ba88(this)) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov004_0221e0b4(3);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221dea8() { return TRUE; }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d2d8 (continued)

BOOL Unk_ov004_0224d2d8::func_ov004_0221dea4() { return TRUE; }

Unk_ov004_0224d248::Unk_ov004_0224d248() {}

Unk_ov004_0224d248::~Unk_ov004_0224d248() {}

void Unk_ov004_0224d248::func_ov004_0221de38(Unk_020d77a4 *o) {
    vfunc_08();
    unk_ac = o;
}

void Unk_ov004_0224d248::vfunc_78(void *arg) {
    struct Msg {
        u32 unk_00;
        u8 unk_04;
    };
    Msg *out = (Msg *)arg;
    void *g = func_0209750c();
    if (func_0202e148() == 0 || func_020a032c() != 0) {
        out->unk_04 = func_02063b8c(3) + 8;
    } else if (func_02098044(g, 0x1b) == 0) {
        out->unk_04 = 0;
        func_0209801c(g, 0x1b);
    } else {
        out->unk_04 = func_02063b8c(4) + 4;
    }
    out->unk_00 = data_ov004_0224d154[0];
}

void Unk_ov004_0224d248::vfunc_14() {
    switch (unk_1e) {
    case 0x1a:
        func_02015170(this, 0x1f, 0);
        func_020151d0(this, 2);
        func_ov004_0221db6c(3);
        break;
    case 0x17:
        func_02015170(this, 9, 0);
        func_020151d0(this, 2);
        func_ov004_0221db6c(2);
        break;
    }
}

void Unk_ov004_0224d248::vfunc_18() {
    u8 c;
    u16 x;
    void *o = unk_3c;
    s32 t = func_020aa514(func_020679b4(o));
    u32 d = data_ov004_0224d154[0];
    u32 r = 0xff;
    switch (unk_1e) {
    case 0xf:
        if (t == 0) {
            Unk_ov004_0221b954_Global *s = data_020cbb18;
            if (func_02072e88(s, s->unk_64) != 0) {
                if (func_02072e44(s) != 0) {
                    s32 q = func_02097520(func_0209ebf0());
                    if (q != 0) {
                        func_020157e8(this, (s32)func_0209888c(q), 1);
                    }
                    r = 0x30;
                } else {
                    r = 0x2f;
                }
            } else {
                func_02084ce0(&x);
                switch (x) {
                case 0xd00a:
                    r = 0x22;
                    break;
                case 0xd00e:
                    r = 0x23;
                    break;
                case 0xd003:
                    r = 0x24;
                    break;
                case 0xd013:
                    r = 0x25;
                    break;
                case 0xd00b:
                    r = 0x26;
                    break;
                case 0xd002:
                    r = 0x27;
                    break;
                case 0xd00d:
                    r = 0x28;
                    break;
                case 0xd021:
                    r = 0x29;
                    break;
                case 0xd020:
                    r = 0x2a;
                    break;
                case 0xd022:
                    r = 0x2b;
                    break;
                case 0xd023:
                    r = 0x2c;
                    break;
                default:
                    r = 0x2e;
                    break;
                }
            }
        } else if (t == 1) {
            if (func_02039e44() != 0) {
                func_02015958(this, func_02039e1c(), 0, 2, 0, 0);
                r = 0x1a;
            } else {
                r = 0x1b;
            }
        }
        break;
    case 0x16:
        if (t == 0) {
            func_02015170(this, 6, 0);
            func_020151d0(this, 2);
            func_ov004_0221db6c(1);
        }
        break;
    }
    if (r != 0xff) {
        c = r;
        func_02067a84(o, &c, d);
    }
}

void Unk_ov004_0224d248::vfunc_80() {
    s32 i = unk_b0;
    if (data_ov004_02250b20[i].flag != 0) {
        if (data_ov004_02250b20[i].fn != 0) {
            (this->*data_ov004_02250b20[i].fn)();
        }
    }
}

void Unk_ov004_0224d248::vfunc_88() {
    s32 i = unk_b0;
    if (data_ov004_02250b20[i].flag == 0) {
        if (data_ov004_02250b20[i].fn != 0) {
            (this->*data_ov004_02250b20[i].fn)();
            func_ov004_0221db6c(0);
        }
    }
}

void Unk_ov004_0224d248::func_ov004_0221db6c(s32 v) {
    unk_b0 = v;
}

void Unk_ov004_0224d248::func_ov004_0221dae4() {
    u8 buf[2];
    if (func_0206ed18() != 0) {
        void *g = func_0209750c();
        u32 idx = func_0206ed38();
        s32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070e4c(9, t, 5, 0, 1);
        func_02003ddc(&unk_ac->unk_514, 0x50, 0x7f, 0);
        buf[0] = 0x18;
        func_02067a84(unk_3c, buf, data_ov004_0224d154[0]);
    } else {
        buf[1] = 1;
        func_02067a84(unk_3c, &buf[1], data_ov004_0224d154[0]);
    }
}

void Unk_ov004_0224d248::func_ov004_0221d9bc() {
    struct {
        u8 c0;
        u8 c1;
        u16 a;
        u16 b;
    } m;
    if (func_0206ed18() != 0) {
        void *g = func_0209750c();
        u32 idx = func_0206ed38();
        u32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070b68(9, t, 5, 0, 1);
        func_02003ddc(&unk_ac->unk_514, 0x50, 0x7f, 0);
        u32 x;
        u32 y;
        if (t < 8) {
            x = (u16)(t + 0x12a8);
        } else {
            x = 0x12a8;
        }
        if (t < 8) {
            y = (u16)(t + 0x1429);
        } else {
            y = 0x1429;
        }
        u32 p1 = *func_0209872c(g);
        u32 p2 = *func_02098714(g);
        if (x == p1) {
            if (Unk_ov004_0221d9bc_Range::Chk(func_0209872c(g), 0x12a8, 0x12af)) {
                m.a = x;
                func_02094bb4(&m.a);
            }
        }
        if (y == p2) {
            if (Unk_ov004_0221d9bc_Range::Chk(func_02098714(g), 0x1429, 0x1430)) {
                m.b = y;
                func_02094b9c(&m.b);
            }
        }
        m.c0 = 0x19;
        func_02067a84(unk_3c, &m, data_ov004_0224d154[0]);
    } else {
        m.c1 = 1;
        func_02067a84(unk_3c, &m.c1, data_ov004_0224d154[0]);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d248

void Unk_ov004_0224d248::func_ov004_0221d960() {
    void *o = unk_3c;
    u8 c;
    u16 v;
    c = 0x20;
    if (func_0206ed18() != 0) {
        if (func_0206ed38() > 1) {
            c = 0x1c;
        } else {
            v = *func_0206eb9c();
            func_0201578c(this, &v, 0, 7);
            c = 0x1e;
        }
    }
    func_02067a84(o, &c, data_ov004_0224d154[0]);
}

BOOL Unk_ov004_0224d2d8::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_58(void *p) {
    if (unk_558.unk_0b != 0) {
        return TRUE;
    }
    if (func_02014220(&unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224d2d8::vfunc_4c(u32 cmd, u32 arg) {
    s32 a;
    s32 b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, arg);
            func_ov004_0221e0b4(6);
            break;
        }
        if (func_0201ba88(this) != 0) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            func_ov004_0221e0b4(6);
        }
        break;
    case 1:
        func_ov004_0221e0b4(1);
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, arg, arg);
            func_ov004_0221e0b4(5);
            break;
        }
        if (func_0201ba88(this) != 0) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            func_ov004_0221e0b4(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                func_ov004_0221e0b4(3);
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                func_ov004_0221e0b4(4);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) != 0) {
            if (func_0201ba88(this) != 0) {
                a = 4;
                b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if ((arg != 4 && arg == (u32)b) || arg == 4) {
                        func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                        func_ov004_0221e0b4(0);
                    }
                }
            }
        }
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d2d8


extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221df08Ev();
extern "C" void _ZN18Unk_ov004_0224d24819func_ov004_0221dae4Ev();
extern "C" void _ZN18Unk_ov004_0224d24819func_ov004_0221d960Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221deacEv();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221df88Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221df04Ev();
extern "C" void _ZN18Unk_ov004_0224d24819func_ov004_0221d9bcEv();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221df84Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dea8Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dfb8Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dff8Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dff4Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dffcEv();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221e038Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221e08cEv();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221e090Ev();
extern "C" void _ZN18Unk_ov004_0224d2d819func_ov004_0221dea4Ev();
extern "C" u8 data_ov004_0224d1e0[19] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'a', 't', 'e', 'k', 'e', 'e', 'p', 'e', 'r', '2', 0};
extern "C" u8 data_ov004_0224d1f4[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'a', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov004_0224d224[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'a', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" u32 data_ov004_0224d154[1] = {(u32)data_ov004_0224d1e0};
extern "C" u8 *data_ov004_0224d14c = data_ov004_0224d1f4;
extern "C" u8 *data_ov004_0224d150 = data_ov004_0224d224;
extern "C" Unk_ov004_SceneEntry data_ov004_0224d20c = {func_ov004_0221e28c, 0x73, 0x78, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224d1d8[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dea4Ev, 0};
extern "C" void *data_ov004_0224d1d0[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221e090Ev, 0};
extern "C" void *data_ov004_0224d1c8[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221e08cEv, 0};
extern "C" void *data_ov004_0224d1c0[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221e038Ev, 0};
extern "C" void *data_ov004_0224d1b8[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dffcEv, 0};
extern "C" void *data_ov004_0224d190[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221df84Ev, 0};
extern "C" void *data_ov004_0224d1a8[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dff8Ev, 0};
extern "C" void *data_ov004_0224d1b0[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dff4Ev, 0};
extern "C" void *data_ov004_0224d170[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221deacEv, 0};
extern "C" void *data_ov004_0224d160[2] = {(void *)_ZN18Unk_ov004_0224d24819func_ov004_0221dae4Ev, 0};
extern "C" void *data_ov004_0224d158[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221df08Ev, 0};
extern "C" void *data_ov004_0224d180[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221df04Ev, 0};
extern "C" void *data_ov004_0224d178[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221df88Ev, 0};
extern "C" void *data_ov004_0224d1a0[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dfb8Ev, 0};
extern "C" void *data_ov004_0224d168[2] = {(void *)_ZN18Unk_ov004_0224d24819func_ov004_0221d960Ev, 0};
extern "C" void *data_ov004_0224d198[2] = {(void *)_ZN18Unk_ov004_0224d2d819func_ov004_0221dea8Ev, 0};
extern "C" void *data_ov004_0224d188[2] = {(void *)_ZN18Unk_ov004_0224d24819func_ov004_0221d9bcEv, 0};
typedef BOOL (Unk_ov004_0224d2d8::*Unk_ov004_O_Fn)();
typedef void (Unk_ov004_0224d248::*Unk_ov004_D_Fn)();
extern "C" Unk_ov004_0224d248_Ent data_ov004_02250b20[4] = {
    {0, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d160, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d188, 0},
    {*(Unk_ov004_D_Fn *)data_ov004_0224d168, 0},
};
extern "C" Unk_ov004_0221e0b4_Ent data_ov004_02250b50[7] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1d0, *(Unk_ov004_O_Fn *)data_ov004_0224d1c8},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1c0, *(Unk_ov004_O_Fn *)data_ov004_0224d1b8},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1a8, *(Unk_ov004_O_Fn *)data_ov004_0224d1b0},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d1a0, *(Unk_ov004_O_Fn *)data_ov004_0224d178},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d190, *(Unk_ov004_O_Fn *)data_ov004_0224d158},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d180, *(Unk_ov004_O_Fn *)data_ov004_0224d170},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d198, *(Unk_ov004_O_Fn *)data_ov004_0224d1d8},
};
