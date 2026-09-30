#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov077_0227224c;
class Unk_ov077_022721bc;

extern "C" {
void *func_0209750c();
void *func_0209868c(void *p);
s32 func_02087bf4(void *p);
void *func_02015a5c(void *p);
void *func_020aa508(void *p);
s32 func_020aa514(void *p);
s32 func_020e77cc(void *p, u32 lo, u32 hi);
u32 func_02063b8c(u32 n);
u32 func_0201bc4c(void *p, s32 n);
void func_02003ddc(void *p, u32 a, u32 b, u32 c);
void func_02034d84(s32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034d70(s32 a);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
s32 func_020e7518(void *p);
s32 func_02014f74(void *p);
BOOL func_0206ec6c();
BOOL func_0206ed18();
s32 func_020951ec(s32 v);
u16 func_0201bcbc(void *p, s32 q);
s32 func_02090330(s32 a, void *b, s32 c, s32 d);
void func_020902f8(s32 h);
BOOL func_0203d67c(void *p);
void *func_020850e0();
void *func_0208517c(void *p);
void func_02086f14(void *p, u32 v);
s32 func_020ed188(void *p);
s32 func_0204ee10(s32 *x, s32 *y, void *v);
s32 func_0204ed8c(void *out, s32 x, s32 z);
void func_0203d6cc(void *p, s32 a);
s32 func_0204ea88(void *g, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g1, s32 g2);
s32 func_0204edf8(s32 *x, s32 *y, s32 a, s32 b, s32 c, s32 d);
void func_ov003_02212014(void *p);
extern u16 data_020c6cc8;
extern u8 data_020e416c;
extern void *data_021c47c4;
extern u8 data_ov077_02271fc0[];
extern u8 *data_ov077_022720c0;
extern u8 data_ov077_022722f8[];
extern u8 data_ov077_02272198[];
BOOL func_0202e360();
void func_0203d960();
BOOL func_0202e3a4();
void func_0203e468(void *p, s32 a);
void func_0203e42c(void *p);
void func_0203d96c();
BOOL func_0202e514();
void func_0201b138(void *p);
extern u8 data_ov077_02272144[];
extern u8 data_ov077_02272174[];
}

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
    void func_02067a84(u8 *a, void *b);
    void func_02067a1c(s32 a, u8 *b, void *c);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    void func_02015ab0(u32 a);
    void func_02015158(u32 a, u32 b, u32 c);
    void func_020151d0(s32 a);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_ov077_022715bc_Out {
    u32 a;
    u8 b;
};

struct Unk_ov077_022717e0_Rec {
    void (Unk_ov077_022721bc::*fn)();
    u32 pad;
};

extern "C" Unk_ov077_022717e0_Rec data_ov077_02272190[];

class Unk_ov077_022721bc : public Unk_020d8b38 {
public:
    Unk_ov077_022721bc();
    virtual ~Unk_ov077_022721bc();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 a);
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov077_022715bc_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov077_02271660(Unk_ov077_0227224c *owner);
    void func_ov077_0227173c();
    void func_ov077_02271794();
    void func_ov077_022717d0(s32 state);

    s32 unk_ac;
    u8 unk_b0;
    u8 pad_b1[3];
    Unk_ov077_0227224c *unk_b4;
    u8 unk_b8;
    u8 pad_b9[3];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_ov077_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};
union Unk_ov077_Word {
    u32 w;
    Unk_ov077_Bits b;
};
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    Unk_ov077_Word unk_a4;
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
struct Unk_0201ad3c {
    u8 unk_00[0xc];
    Unk_0201ad3c();
    ~Unk_0201ad3c();
    void func_0201ad30(s32 a);
    void func_0201ad34(s32 a);
};
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
struct Unk_02016350 {
    u8 unk_00[0x1c];
    Unk_02016350();
    ~Unk_02016350();
    BOOL func_0201622c(s32 a, void *b);
};
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 unk_45;
    u8 pad_46[2];
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
    BOOL func_02019790();
    void func_020195c8(u32 a, u32 b, u32 c, u32 s0, u32 s1);
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
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    u16 unk_8e;
    u8 pad_90[4];
    u16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
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

    void func_0201bc28(void *p);

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
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov077_02271a84_Pt {
    s32 x, y;
    Unk_ov077_02271a84_Pt(s32 a, s32 b) { x = a; y = b; }
};

class Unk_ov077_0227224c : public Unk_020d8bc8 {
public:
    Unk_ov077_0227224c() : unk_718(0), unk_71c(0) {}
    virtual ~Unk_ov077_0227224c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);

    BOOL func_ov077_02271874();
    BOOL func_ov077_02271944();
    BOOL func_ov077_0227198c();
    BOOL func_ov077_02271a28();
    BOOL func_ov077_02271a84();
    BOOL func_ov077_02271bf4();
    BOOL func_ov077_02271c9c();
    BOOL func_ov077_02271ca0();
    BOOL func_ov077_02271ca4();
    void func_ov077_02271d18(s32 state);
    BOOL func_ov077_02271cd8();
    BOOL func_ov077_02271d10();
    BOOL func_ov077_02271d14();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    s32 unk_654;
    Unk_ov077_022721bc unk_658;
    u8 unk_714;
    u8 pad_715[3];
    s32 unk_718;
    s32 unk_71c;
    s32 unk_720;
};

// ---------------------------------------------------------------------------------------------------------------------
struct Unk_ov077_02271d18_Ent {
    BOOL (Unk_ov077_0227224c::*enter)();
    BOOL (Unk_ov077_0227224c::*exit)();
};
extern "C" Unk_ov077_02271d18_Ent data_ov077_02272360[];

BOOL Unk_ov077_0227224c::func_ov077_02271cd8() {
    void *p = unk_658.func_02015aac();
    u16 v = 0;
    if (p != NULL) {
        v = func_0201bcbc(this, (s32)p);
    }
    unk_618.func_020141b4(0, v, 0);
    return TRUE;
}

BOOL Unk_ov077_0227224c::func_ov077_02271d10() { return TRUE; }

BOOL Unk_ov077_0227224c::func_ov077_02271d14() { return TRUE; }

void Unk_ov077_0227224c::func_ov077_02271d18(s32 state) {
    BOOL r = TRUE;
    if (data_ov077_02272360[state].enter != NULL) {
        r = (this->*data_ov077_02272360[state].enter)();
    }
    if (r) {
        unk_654 = state;
    }
}

BOOL Unk_ov077_0227224c::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov077_02272360[unk_654].exit != NULL) {
        r = (this->*data_ov077_02272360[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov077_0227224c::vfunc_70() { return data_ov077_02272144; }

u8 *Unk_ov077_0227224c::vfunc_6c() { return data_ov077_02272174; }

BOOL Unk_ov077_0227224c::vfunc_24() {
    if (unk_654 != 3) {
        func_0201b138(this);
    }
    return TRUE;
}

BOOL Unk_ov077_0227224c::vfunc_0c() {
    if (!func_0202e360()) {
        return FALSE;
    }
    func_0203d960();
    return TRUE;
}

BOOL Unk_ov077_0227224c::vfunc_00() {
    if (!func_0202e3a4()) {
        return FALSE;
    }
    unk_4cc.unk_1c |= 2;
    func_0203e468(this, 0);
    func_ov077_02271d18(3);
    func_0203e42c(this);
    func_0203d96c();
    return TRUE;
}

BOOL Unk_ov077_0227224c::vfunc_04() {
    if (!func_0202e514()) {
        return FALSE;
    }
    unk_714 = 0xff;
    func_0201bc28(&unk_658);
    unk_658.func_ov077_02271660(this);
    unk_2a0.func_0201ad34(0xfc);
    unk_2a0.func_0201ad30(0xfc);
    unk_4cc.unk_45 = 0;
    unk_4cc.unk_44 = 0;
    return TRUE;
}

extern "C" Unk_ov077_0227224c *func_ov077_02271e98() {
    return new Unk_ov077_0227224c();
}
