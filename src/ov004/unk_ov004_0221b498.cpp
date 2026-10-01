#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221b954_Vec {
    s32 x, y, z;
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
    s32 unk_64;
};

struct Unk_ov004_0221b6d4_Owner {
    u8 pad_00[0x70a];
    u8 unk_70a;
};

struct Unk_ov004_0221b6d4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

// Real symbol names of the callees outside this unit (all are called as free functions taking the object first).
#define func_0201b9fc _ZN12Unk_020d77a413func_0201b9fcEjjjz
#define func_0201ba88 _ZN12Unk_020d77a413func_0201ba88Ev
#define func_0201b9e8 _ZN12Unk_020d77a413func_0201b9e8Eii
#define func_0201b9bc _ZN12Unk_020d77a413func_0201b9bcEv
#define func_0201b964 _ZN12Unk_020d77a413func_0201b964EPvi
#define func_0201b980 _ZN12Unk_020d77a413func_0201b980EPhj
#define func_0201bc28 _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c
#define func_0201bc4c _ZN12Unk_020d77a413func_0201bc4cEj
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0201bd9c _ZN12Unk_020d77a413func_0201bd9cEi
#define func_0201b08c _ZN12Unk_020d77a48vfunc_4cEi
#define func_0203e468 _ZN12Unk_020d967013func_0203e468Ei
#define func_0202e548 _ZN12Unk_020d8bc813func_0202e548Eii
#define func_02015ab0 _ZN12Unk_020d771413func_02015ab0Ej
#define func_02015aac _ZN12Unk_020d771413func_02015aacEv
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_0201622c _ZN12Unk_0201635013func_0201622cEiPv
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_0209868c _ZN12Unk_0209865c13func_0209868cEv
#define func_02015a80 _ZN12Unk_020d771413func_02015a80EP18Unk_02015b8c_Scene
#define func_02087c50 _ZN12Unk_02087ad813func_02087c50Ej
#define func_02087c54 _ZN12Unk_02087ad813func_02087c54Ev

extern "C" {
extern Unk_ov004_0221b954_Global *data_020cbb18;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Vec data_021f4880;
extern const u8 data_ov004_022400a4[];
extern const u8 data_ov004_0224009c[];
extern const u8 data_ov004_022400c0[];
extern u32 data_ov004_0224ccf8[];

s32 func_0201b9fc(void *self, s32 a, s32 b, s32 c);
BOOL func_0201ba88(void *self);
s32 func_0201b9e8(void *self, s32 *a, s32 *b);
BOOL func_0201b9bc(void *self);
void func_0201b964(void *self, void *p, s32 n);
BOOL func_0201b980(void *self, u8 *p, u32 n);
void func_0201bc28(void *self, void *p);
u32 func_0201bc4c(void *self, u32 id);
s32 func_0201bcbc(void *self, void *p);
void func_0201bd9c(void *self, s32 v);
void func_0201b08c(void *self, u32 a, u32 b);
void func_0203e468(void *self, s32 v);
void func_0202e548(void *self, s32 a, s32 b);
void func_02015ab0(void *self, u32 v);
Unk_020d77a4 *func_02015aac(void *self);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b954_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
BOOL func_02014220(void *self);
void func_02014198(void *self, u8 a, u8 b);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
BOOL func_0201622c(void *self, s32 a, void *b);
BOOL func_02072e44(void *g);
void *func_0209868c(void *p);
void func_02015a80(void *self, void *p);
void func_02087c50(void *self, u32 v);
u32 func_02087c54(void *self);
void *func_0209750c();
s32 func_02063b8c(s32);
BOOL func_020a62a0();
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e18c(void *self, void *out, s32 x);
void func_0202e174(void *self, void *p);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_020a032c();
s32 func_0209cef4();
void *func_020816f8(s32 n);
void func_0203d67c(void *self);
void func_ov004_0222875c();
s32 func_ov004_02228738();
void func_ov004_02228780();
void func_ov004_02228720(u32 v);
s32 func_ov004_02228700();
u32 func_ov004_0221b504(void *self);
void func_ov004_0221b4ec(void *self, u32 v);
}

class Unk_ov004_0224cd8c : public Unk_020d8b38 {
public:
    Unk_ov004_0224cd8c();
    virtual ~Unk_ov004_0224cd8c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);

    void func_ov004_0221b888(Unk_ov004_0221b6d4_Owner *o);

    /* 0xac */ Unk_ov004_0221b6d4_Owner *unk_ac;
};

class Unk_ov004_0224ce1c : public Unk_020d8bc8 {
public:
    Unk_ov004_0224ce1c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_90();

    BOOL func_ov004_0221b92c();
    BOOL func_ov004_0221b930();
    BOOL func_ov004_0221b954();
    BOOL func_ov004_0221b9ac();
    BOOL func_ov004_0221b9e4();
    BOOL func_ov004_0221bae0();
    BOOL func_ov004_0221bb18();
    BOOL func_ov004_0221bb48();
    BOOL func_ov004_0221bb84();
    BOOL func_ov004_0221bb88();
    BOOL func_ov004_0221bb8c();
    BOOL func_ov004_0221bbf0();
    BOOL func_ov004_0221bc7c();
    BOOL func_ov004_0221bcec();
    void func_ov004_0221bd50(s32 state);

    s32 unk_654;
    Unk_ov004_0224cd8c unk_658;
    s16 unk_708;
    u8 unk_70a;
    u8 pad_70b;
    u16 unk_70c;
    u8 unk_70e;
};

struct Unk_ov004_0221bd50_Ent {
    BOOL (Unk_ov004_0224ce1c::*enter)();
    BOOL (Unk_ov004_0224ce1c::*exit)();
};

extern "C" {
extern Unk_ov004_0221bd50_Ent data_ov004_02250a2c[7];
extern u8 data_ov004_0224cd38[];
extern u8 data_ov004_0224cd68[];
}

struct Unk_ov004_SceneEntry {
    Unk_ov004_0224ce1c *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" Unk_ov004_0224ce1c *func_ov004_0221bf04() { return new Unk_ov004_0224ce1c; }

BOOL Unk_ov004_0224ce1c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(this, &unk_658);
    unk_658.func_ov004_0221b888((Unk_ov004_0221b6d4_Owner *)this);
    func_0202e548(this, 0x119a, 0x2000);
    func_0201bd9c(this, 0);
    func_0203e468(this, 0x3000);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::vfunc_00() {
    s32 v;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_708 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020a62a0()) {
            func_ov004_0221bd50(0);
        } else {
            func_0201b980(this, &unk_70e, 1);
            func_ov004_0221bd50(4);
        }
    } else {
        func_ov004_0221bd50(0);
        if (func_0202e18c(this, &v, 2)) {
            unk_70a = 1;
        }
    }
    return TRUE;
}

u8 *Unk_ov004_0224ce1c::vfunc_6c() { return data_ov004_0224cd68; }

u8 *Unk_ov004_0224ce1c::vfunc_70() { return data_ov004_0224cd38; }

BOOL Unk_ov004_0224ce1c::vfunc_68() {
    unk_70e = func_ov004_02228700() / 0x38;
    func_0201b964(this, &unk_70e, 1);
    BOOL r = FALSE;
    if (data_ov004_02250a2c[unk_654].exit) {
        r = (this->*data_ov004_02250a2c[unk_654].exit)();
    }
    return r;
}

void Unk_ov004_0224ce1c::func_ov004_0221bd50(s32 state) {
    BOOL ok = TRUE;
    if (data_ov004_02250a2c[state].enter) {
        ok = (this->*data_ov004_02250a2c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bcec() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0xe4, 0, data_020c6cc8, unk_70c);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bc7c() {
    if (unk_708 != unk_8e) {
        func_ov004_0221bd50(3);
        return TRUE;
    }
    if (func_0201622c(&unk_334, 0xe4, &unk_2a0)) {
        if (func_ov004_02228738()) {
            func_ov004_02228780();
            u32 t = unk_70e * 0x38;
            func_ov004_02228720((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bbf0() {
    if (func_ov004_0221b504(this) >= 6) {
        func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    }
    func_ov004_0222875c();
    if (func_ov004_0221b504(this) < 6) {
        func_02014198(&unk_618, 1, 0);
    } else {
        Unk_020d77a4 *p = func_02015aac(&unk_658);
        s32 r = 0;
        if (p) {
            r = func_0201bcbc(this, p);
        }
        func_020141b4(&unk_618, 0, r, 0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb8c() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (!func_02072e44(data_020cbb18) && !func_0202e1cc(0x11, 1)) {
        u32 t = (u8)(func_ov004_0221b504(this) + 1);
        if (t > 0xf) {
            t = 0xf;
        }
        func_ov004_0221b4ec(this, t);
    }
    func_0203d67c(this);
    func_ov004_0221bd50(2);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb88() { return TRUE; }

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb84() { return TRUE; }

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb48() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_708, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb18() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov004_0221bd50(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bae0() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b9e4() {
    s32 a, b;
    if (func_0201ba88(this)) {
        a = 4;
        b = 4;
        if (func_0201b9e8(this, &a, &b)) {
            s32 av = a;
            s32 g = data_020cbb18->unk_64;
            if (av == g && av == b) {
                func_0201b9fc(this, 1, g, g);
                Unk_020d7714 *p = &unk_658;
                p->vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(this, 4));
                func_ov004_0221bd50(1);
                goto end;
            }
        }
        if (func_020a62a0() && b == 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov004_0221bd50(0);
        }
    } else if (!func_020a62a0()) {
        if (func_0201622c(&unk_334, 0xe4, &unk_2a0)) {
            if (func_ov004_02228738()) {
                func_ov004_02228780();
                u32 t = unk_70e * 0x38;
                func_ov004_02228720((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
            }
        } else if (!func_ov004_02228738()) {
            func_ov004_0222875c();
        }
    }
end:
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b9ac() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b954() {
    if (func_0201ba88(this)) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(this, &a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
            func_ov004_0221bd50(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b930() {
    func_ov004_0222875c();
    unk_70c = unk_ec.unk_a4 >> 12;
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b92c() { return TRUE; }

void Unk_ov004_0224ce1c::vfunc_90() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
}

Unk_ov004_0224cd8c::Unk_ov004_0224cd8c() {}

Unk_ov004_0224cd8c::~Unk_ov004_0224cd8c() {}

void Unk_ov004_0224cd8c::func_ov004_0221b888(Unk_ov004_0221b6d4_Owner *o) {
    vfunc_08();
    unk_ac = o;
}

void Unk_ov004_0224cd8c::vfunc_78(Unk_ov004_0221b6d4_Out *out) {
    u32 idx = func_ov004_0221b504(unk_ac);
    void *g = data_020cbb18;
    if (func_02072e44(g) != 0 || *(s16 *)func_0209c37c(0, 0x4a) != 0) {
        idx = 0;
        out->unk_04 = 0x57;
    } else if (func_020a032c() != 0) {
        idx = 2;
        out->unk_04 = 5;
    } else {
        Unk_ov004_0221b6d4_Bits bits;
        if (func_0202e18c(unk_ac, &bits, 2) != 0) {
            idx = 1;
            unk_ac->unk_70a = idx;
            out->unk_04 = (data_ov004_022400a4 + bits.b * 7)[bits.c];
            func_0202e174(unk_ac, &bits);
        } else if (func_0202e1cc(0x10, 1) == 0) {
            if (idx >= 0xc) {
                out->unk_04 = data_ov004_0224009c[func_0209cef4()];
            } else {
                out->unk_04 = data_ov004_022400c0[idx * 8];
            }
            idx = 0;
        } else {
            if (idx > 0xc) {
                out->unk_04 = func_02063b8c(5) + 0x28;
            } else {
                s32 t = idx - 1;
                if (t < 0) {
                    t = 0;
                } else if (t > 0xb) {
                    t = 0xb;
                }
                u32 o = t << 3;
                s32 r = func_02063b8c(*(s32 *)(data_ov004_022400c0 + 4 + o)) + 1;
                out->unk_04 = r + data_ov004_022400c0[o];
            }
            idx = 0;
        }
    }
    out->unk_00 = data_ov004_0224ccf8[idx];
    if (func_02072e44(g) == 0 && *(s16 *)func_0209c37c(0, 0x4a) == 0 && idx == 0) {
        switch (out->unk_04) {
        case 2:
        case 5:
        case 8:
        case 9:
        case 12:
        case 15:
        case 17:
        case 18:
        case 19:
        case 21:
        case 23:
        case 24:
        case 27:
        case 28:
        case 30:
        case 40:
        case 43: {
            void *r = func_020816f8(4);
            if (r) {
                func_02015a80(this, r);
            }
            break;
        }
        }
    }
}

void Unk_ov004_0224cd8c::vfunc_14() {}

void Unk_ov004_0224cd8c::vfunc_18() {}

BOOL Unk_ov004_0224ce1c::vfunc_48() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224ce1c::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_558.unk_08 = v;
        if (v != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, v);
            func_ov004_0221bd50(6);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                func_ov004_0221bd50(6);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = v;
        if (v != 4 && v != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, v, v);
            func_ov004_0221bd50(5);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(this, 4));
                func_ov004_0221bd50(1);
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                func_ov004_0221bd50(3);
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                func_ov004_0221bd50(4);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) != 0) {
            if (func_0201ba88(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    func_ov004_0221bd50(0);
                }
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

extern "C" u32 func_ov004_0221b504(void *unused) {
    return func_02087c54(func_0209868c(func_0209750c()));
}

extern "C" void func_ov004_0221b4ec(void *unused, u32 a) {
    func_02087c50(func_0209868c(func_0209750c()), a);
}

// ---------------------------------------------------------------------------------------------------------------------

extern "C" const u8 data_ov004_0224009c[8] = {0x27, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x00};
extern "C" const u8 data_ov004_022400a4[0x1c] = {0, 1, 2, 3, 0xfe, 0xfe, 0xfe, 4, 5, 6, 0xfe, 0xfe, 0xfe, 0xfe, 7, 8, 9, 10, 11, 0xfe, 0xfe, 11, 12, 13, 14, 15, 16, 17};
extern "C" const u8 data_ov004_022400c0[0x60] = {0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 2, 0, 0, 0, 9, 0, 0, 0, 2, 0, 0, 0, 12, 0, 0, 0, 2, 0, 0, 0, 15, 0, 0, 0, 2, 0, 0, 0, 18, 0, 0, 0, 2, 0, 0, 0, 21, 0, 0, 0, 2, 0, 0, 0, 24, 0, 0, 0, 2, 0, 0, 0, 27, 0, 0, 0, 2, 0, 0, 0, 30, 0, 0, 0, 2, 0, 0, 0};
extern "C" u8 data_ov004_0224cd04[14] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'd', 'r', 'a', 'm', 'a', '3', 0};
extern "C" u8 data_ov004_0224cd14[15] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'o', 's', 'i', 's', 't', 'e', 'r', 0};
extern "C" u8 data_ov004_0224cd24[17] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};
extern "C" u32 data_ov004_0224ccf8[3] = {(u32)data_ov004_0224cd14, (u32)data_ov004_0224cd04, (u32)data_ov004_0224cd24};
extern "C" u8 data_ov004_0224cd38[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov004_0224cd68[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'h', 'g', 's', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry data_ov004_0224cd50 = {func_ov004_0221bf04, 0x77, 0x7c, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221b9acEv();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221b954Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bc7cEv();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221b930Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221b92cEv();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bbf0Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bcecEv();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bb48Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bae0Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221b9e4Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bb18Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bb8cEv();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bb84Ev();
extern "C" void _ZN18Unk_ov004_0224ce1c19func_ov004_0221bb88Ev();
extern "C" void *data_ov004_0224cc88[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221b9acEv, 0};
extern "C" void *data_ov004_0224ccf0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bb88Ev, 0};
extern "C" void *data_ov004_0224cce8[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bb84Ev, 0};
extern "C" void *data_ov004_0224cce0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bb8cEv, 0};
extern "C" void *data_ov004_0224ccd8[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bb18Ev, 0};
extern "C" void *data_ov004_0224ccd0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221b9e4Ev, 0};
extern "C" void *data_ov004_0224ccc8[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bae0Ev, 0};
extern "C" void *data_ov004_0224cc98[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bc7cEv, 0};
extern "C" void *data_ov004_0224cca0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221b930Ev, 0};
extern "C" void *data_ov004_0224ccb8[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bcecEv, 0};
extern "C" void *data_ov004_0224ccb0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bbf0Ev, 0};
extern "C" void *data_ov004_0224cca8[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221b92cEv, 0};
extern "C" void *data_ov004_0224ccc0[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221bb48Ev, 0};
extern "C" void *data_ov004_0224cc90[2] = {(void *)_ZN18Unk_ov004_0224ce1c19func_ov004_0221b954Ev, 0};
typedef BOOL (Unk_ov004_0224ce1c::*Unk_ov004_Fn)();
extern "C" Unk_ov004_0221bd50_Ent data_ov004_02250a2c[7] = {
    {*(Unk_ov004_Fn *)data_ov004_0224ccb8, *(Unk_ov004_Fn *)data_ov004_0224cc98},
    {*(Unk_ov004_Fn *)data_ov004_0224ccb0, *(Unk_ov004_Fn *)data_ov004_0224cce0},
    {*(Unk_ov004_Fn *)data_ov004_0224ccf0, *(Unk_ov004_Fn *)data_ov004_0224cce8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc0, *(Unk_ov004_Fn *)data_ov004_0224ccd8},
    {*(Unk_ov004_Fn *)data_ov004_0224ccc8, *(Unk_ov004_Fn *)data_ov004_0224ccd0},
    {*(Unk_ov004_Fn *)data_ov004_0224cc88, *(Unk_ov004_Fn *)data_ov004_0224cc90},
    {*(Unk_ov004_Fn *)data_ov004_0224cca0, *(Unk_ov004_Fn *)data_ov004_0224cca8},
};
