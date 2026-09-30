#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov081_0227217c;

extern "C" {
extern u16 data_020c6cc8;
extern u8 data_021ed24c[];
extern u8 data_021dfd8c[];
extern u8 data_021d7350[];
extern u8 data_ov081_02272098[];
extern u8 data_ov081_022720c8[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    u8 pad_04[0x38];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};


class Unk_ov081_022720ec : public Unk_020d8b38 {
public:
    Unk_ov081_022720ec();
    virtual ~Unk_ov081_022720ec();
    void func_ov081_02271998(Unk_ov081_0227217c *o);
    u8 pad_ac[0xc0 - 0xac];
    u16 unk_c0;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
    void func_02053848(s32 a, s32 b);
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
struct Unk_02016350 {
    u8 unk_00[0x1c];
    Unk_02016350();
    ~Unk_02016350();
    void func_0201610c(void *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
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
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual void vfunc_48();
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


struct Unk_ov081_02271d40_Loc {
    u16 a;
    u16 b;
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    Unk_ov081_02271d40_Loc() {}
};

static inline BOOL Unk_ov081_02271d40_Rng(volatile u16 *p) {
    BOOL r = FALSE;
    u16 v0 = *p;
    u16 v1 = *p;
    if (v1 >= 0x12e8 && v0 <= 0x131f) r = TRUE;
    return r;
}

class Unk_ov081_0227217c : public Unk_020d8bc8 {
public:
    Unk_ov081_0227217c() {}
    virtual ~Unk_ov081_0227217c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    void func_ov081_02271ca0(s32 state);

    s32 unk_654;
    Unk_ov081_022720ec unk_658;
    s32 unk_71c;
    s32 unk_720;
};

struct Unk_ov081_02271ce4_Ent {
    BOOL (Unk_ov081_0227217c::*enter)();
    BOOL (Unk_ov081_0227217c::*exit)();
};

extern "C" {
extern Unk_ov081_02271ce4_Ent data_ov081_02272274[];
void func_02085784(void *g, s32 a);
void func_02085818(u16 *p, void *g);
void func_020858ac(void *g);
s32 func_02063b8c(s32 a);
void func_0209d498(void *p);
u32 func_0204f0f4(u32 a);
u32 func_0204f234(u32 a, u32 b);
s32 func_0202c404(void *a, void *b, void *c, u32 d, u32 e);
void func_02085820(void *g, void *p);
s32 func_02085618(void *p);
void func_02085814(void *g, s32 v);
s32 func_0207bd3c(void *a, s32 b, s32 c);
s32 func_020805c4();
void func_02085870(void *g, s32 v);
void func_02085900(void *g, s32 v);
void func_0209e148(void *a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov081_0227217c::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov081_02272274[unk_654].exit != NULL) {
        result = (this->*data_ov081_02272274[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov081_0227217c::vfunc_70() { return data_ov081_02272098; }

u8 *Unk_ov081_0227217c::vfunc_6c() { return data_ov081_022720c8; }

BOOL Unk_ov081_0227217c::vfunc_00() {
    Unk_ov081_02271d40_Loc l;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov081_02271ca0(0);
    void *g = data_021ed24c;
    func_02085784(g, 1);
    func_02085818(&l.b, g);
    if (!Unk_ov081_02271d40_Rng(&l.b)) {
        func_020858ac(g);
        s32 r6 = func_02063b8c(2);
        l.x = 0;
        l.y = 0;
        l.z = 0;
        l.w = 0;
        l.a = 0xfff1;
        func_0209d498(&l.z);
        u32 b4 = ((u8 *)&l.w)[0];
        u32 b3 = ((u8 *)&l.z)[3];
        u32 t = func_0204f234(b4, func_0204f0f4(b3));
        if (t != 0) {
            if (func_0202c404(&l, &l.x, &l.y, r6, t) == 0) {
                func_0202c404(&l, &l.x, &l.y, (r6 + 1) & 1, t);
            }
        }
        func_02085820(g, &l);
        unk_720 = func_02085618(&l);
        func_02085814(g, *(volatile s32 *)&unk_720);
        if (func_0207bd3c(data_021dfd8c, 0, 0) != 0) {
            func_02085870(g, func_020805c4());
            func_02085900(g, 1);
            func_0209e148(data_021d7350, 0xf);
        }
    }
    unk_334.func_0201610c(this, 0x140, 0, 0, 0x1000, 0, 1);
    unk_ec.func_02053848(0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

BOOL Unk_ov081_0227217c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov081_02271998(this);
    return TRUE;
}

extern "C" Unk_ov081_0227217c *func_ov081_02271ec8() {
    return new Unk_ov081_0227217c();
}
