#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov048_0225cc58;

struct Unk_ov048_0225bdf0_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_ov048_0225bdf0_Loc : Unk_ov048_0225bdf0_Vec {
    Unk_ov048_0225bdf0_Loc() {}
};

class Unk_ov048_0225cbc8 {
public:
    Unk_ov048_0225cbc8();
    virtual ~Unk_ov048_0225cbc8();
    virtual void vfunc_08();
    u8 pad_04[0x7e4 - 4];
    s16 unk_7e4;
    u8 pad_7e6[0x7e9 - 0x7e6];
    u8 unk_7e9;
    u8 pad_7ea[0x7ec - 0x7ea];
};

typedef BOOL (Unk_ov048_0225cc58::*Unk_ov048_0225cc58_Fn)();

struct Unk_ov048_0225d168_Ent {
    Unk_ov048_0225cc58_Fn enter;
    Unk_ov048_0225cc58_Fn exit;
};

extern "C" {
extern Unk_ov048_0225bdf0_Vec data_ov048_0225c334;
extern u16 data_020c6cc8;
extern Unk_ov048_0225d168_Ent data_ov048_0225d168[];
extern void *data_020cbb18;
extern void *data_ov048_0225c6e8;
extern void *data_ov048_0225c6e4;

void *func_0209750c();
Unk_ov048_0225bdf0_Vec *func_020947f0(s32 n);
void func_02094b0c(void *p, s32 a, s32 b);
s32 func_020951b8(s32 n);
BOOL func_02014220(void *self);
void func_0203d67c(void *self);
s32 func_020197a8(void *p);
s32 func_02019790(void *p);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_02019614(void *p, s32 a, s32 b);
Unk_020d77a4 *func_02015aac(void *p);
void func_020141b4(void *p, s32 a, s32 b, s32 c);
s32 func_0202e360();
s32 func_020b50e8();
void func_0203d984();
s32 func_0202e3a4();
BOOL func_02072e44(void *g);
void func_ov048_0225b038(void *sub, s32 v);
void *func_020850e0();
void *func_02085180(void *p);
s32 func_02086efc(void *p);
s32 func_02086ef0(void *p);
void func_02086f04(void *p);
void func_0203d990();
s32 func_0202e514();
void func_ov048_0225b040(void *sub, void *p);
void func_ov048_0225bfb4(void *self, s32 s);
void func_0203d704(void *self, s32 v);
void func_0201ad30(void *p, s32 v);
void func_0201ad34(void *p, s32 v);
}
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
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
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
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
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
    void func_0203e468(s32 v);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xac - 0x96];
    s32 unk_ac;
    void *unk_b0;
    u8 pad_b4[0xc8 - 0xb4];
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
    s32 unk_cc;
    u8 pad_d0[0xea - 0xd0];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

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
    virtual BOOL vfunc_7c();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov048_0225cc58 : public Unk_020d8bc8 {
public:
    Unk_ov048_0225cc58() {}
    virtual ~Unk_ov048_0225cc58();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_7c();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov048_02258e88();
    BOOL func_ov048_0225bde0();
    BOOL func_ov048_0225bdf0();
    BOOL func_ov048_0225be7c();
    BOOL func_ov048_0225be8c();
    BOOL func_ov048_0225bec8();
    BOOL func_ov048_0225bf04();
    BOOL func_ov048_0225bf08();
    BOOL func_ov048_0225bf0c();
    BOOL func_ov048_0225bf30();
    BOOL func_ov048_0225bf68();
    BOOL func_ov048_0225bf78();
    BOOL func_ov048_0225bf9c();
    BOOL func_ov048_0225bfb0();

    s32 unk_654;
    Unk_ov048_0225cbc8 unk_658;
};


// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov048_0225cc58::func_ov048_0225bde0() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bdf0() {
    Unk_ov048_0225bdf0_Loc a;
    Unk_ov048_0225bdf0_Loc b;
    func_0209750c();
    Unk_ov048_0225bdf0_Vec *p = func_020947f0(4);
    *(Unk_ov048_0225bdf0_Vec *)&a = *p;
    switch (unk_658.unk_7e9) {
    case 0:
        if (func_02014220(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        *(Unk_ov048_0225bdf0_Vec *)&b = data_ov048_0225c334;
        func_02094b0c(&b, 0x266, 4);
        unk_658.unk_7e9 = 3;
        break;
    case 3:
        if (func_020951b8(4) == 0) {
            func_0203d67c(this);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225be7c() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225be8c() {
    if (func_ov048_02258e88()) {
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov048_0225bfb4(this, 1);
        }
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bec8() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_658.unk_7e4, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf04() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf08() {
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf0c() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf30() {
    Unk_020d77a4 *o = func_02015aac(&unk_658);
    s32 r = 0;
    if (o) {
        r = func_0201bcbc(o);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf68() {
    func_ov048_02258e88();
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf78() {
    func_02019614(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bf9c() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov048_0225cc58::func_ov048_0225bfb0() {
    return TRUE;
}

void func_ov048_0225bfb4(void *p, s32 s) {
    Unk_ov048_0225cc58 *self = (Unk_ov048_0225cc58 *)p;
    BOOL r = TRUE;
    if (data_ov048_0225d168[s].enter) {
        r = (self->*data_ov048_0225d168[s].enter)();
    }
    if (r) {
        self->unk_654 = s;
    }
}

BOOL Unk_ov048_0225cc58::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov048_0225d168[unk_654].exit) {
        r = (this->*data_ov048_0225d168[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov048_0225cc58::vfunc_70() {
    return (u8 *)data_ov048_0225c6e8;
}

u8 *Unk_ov048_0225cc58::vfunc_6c() {
    return (u8 *)data_ov048_0225c6e4;
}

BOOL Unk_ov048_0225cc58::vfunc_0c() {
    if (func_0202e360() == 0) {
        return FALSE;
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0xe) {
        func_0203d984();
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_00() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    unk_658.unk_7e4 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) && func_020b50e8() == 0xb) {
        if (func_0201ba88()) {
            func_ov048_0225bfb4(this, 1);
        } else {
            func_ov048_0225bfb4(this, 0xf);
        }
        return TRUE;
    }
    void *p = func_02085180(func_020850e0());
    if (func_02086efc(p) == 1 || func_02086efc(p) == 2) {
        if (func_02086efc(p) == 1) {
            func_ov048_0225b038(&unk_658, 6);
        } else {
            func_ov048_0225b038(&unk_658, 7);
        }
        func_ov048_0225bfb4(this, 0);
        unk_8e = func_02086ef0(p);
        unk_94 = func_02086ef0(p);
        func_02086f04(p);
    } else if (func_020b50e8() == 0xd) {
        func_0203d990();
        func_ov048_0225bfb4(this, 9);
    } else if (func_020b50e8() == 0xe) {
        func_0203d990();
        func_ov048_0225bfb4(this, 0xb);
    } else {
        func_ov048_0225bfb4(this, 1);
    }
    return TRUE;
}

BOOL Unk_ov048_0225cc58::vfunc_04() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov048_0225b040(&unk_658, this);
    func_0201bd9c(0x100);
    func_0201ad30(&unk_2a0, 0xd9);
    func_0201ad34(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    if (func_020b50e8() == 0xc) {
        unk_4cc.unk_44 = 0;
    }
    return TRUE;
}

extern "C" Unk_ov048_0225cc58 *func_ov048_0225c20c() {
    return new Unk_ov048_0225cc58();
}
