#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov004_0221b8f4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_ov004_0221b8f4_Vec data_021f4880;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Global *data_020cbb18;
extern u8 data_ov004_0224cd38[];
extern u8 data_ov004_0224cd68[];
extern u8 data_ov004_0224d0a0[];

void func_ov004_0222875c();
s32 func_ov004_02228738();
void func_ov004_02228780();
void func_ov004_02228720(u32 v);
s32 func_ov004_02228700();
u32 func_ov004_0221b504(void *self);
void func_ov004_0221b4ec(void *self, u32 v);
void func_ov004_0221b888(void *sub, void *owner);
void func_ov004_0221cf48(void *sub);
BOOL func_020a62a0();
BOOL func_02072e44(void *g);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e18c(void *self, void *out, s32 x);
void func_0203d67c(void *self);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_0201622c(void *self, s32 a, void *b);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b8f4_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
BOOL func_02014220(void *self);
void func_02014198(void *self, u8 a, u8 b);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_02015ab0(void *self, u32 v);
Unk_020d77a4 *func_02015aac(void *self);
void func_02015e48(void *self, u32 v);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u32 pad_04[0xa8 / 4];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov004_0224cd8c : public Unk_020d8b38 {
public:
    Unk_ov004_0224cd8c();
    virtual ~Unk_ov004_0224cd8c();
};

class Unk_ov004_0221cf48 : public Unk_020d7714 {
public:
    ~Unk_ov004_0221cf48();
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa0];
    s32 unk_a0;
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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

extern "C" {
extern u8 *data_ov004_0224d14c;
extern u8 *data_ov004_0224d150;
extern u8 data_ov004_0224d3a4[];
extern u8 data_ov004_0224d3d4[];
extern u8 data_021dfd8c[];
BOOL func_02072e88(void *g, s32 i);
s32 func_0207a484(void *p);
void *func_0207a4b8(void *p);
s32 func_02099790(void *p);
s32 func_020b50e8();
void func_0201ad30(void *self, s32 v);
void func_0201ad34(void *self, s32 v);
void func_02019614(void *self, s32 a, u16 b);
s32 func_020e7518(void *self);
BOOL func_020a08a8();
}

class Unk_ov004_0224d248 : public Unk_020d7714 {
public:
    Unk_ov004_0224d248();
    virtual ~Unk_ov004_0224d248();

    void func_ov004_0221de38(Unk_020d77a4 *o);

    /* 0xac */ Unk_020d77a4 *unk_ac;
};

class Unk_ov004_0224d2d8 : public Unk_020d8bc8 {
public:
    Unk_ov004_0224d2d8() {}
    virtual ~Unk_ov004_0224d2d8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
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

    s32 unk_654;
    Unk_ov004_0224d248 unk_658;
    u8 pad_708[4];
    s16 unk_70c;
    u8 pad_70e[2];
};

struct Unk_ov004_0221e0b4_Ent {
    BOOL (Unk_ov004_0224d2d8::*enter)();
    BOOL (Unk_ov004_0224d2d8::*exit)();
};

class Unk_ov004_0224d3f8 : public Unk_020d8bc8 {
public:
    Unk_ov004_0224d3f8() {}
    virtual ~Unk_ov004_0224d3f8();
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

    s32 unk_654;
    u8 unk_658;
};

struct Unk_ov004_0221e56c_Ent {
    BOOL (Unk_ov004_0224d3f8::*enter)();
    BOOL (Unk_ov004_0224d3f8::*exit)();
};

extern "C" {
extern Unk_ov004_0221e0b4_Ent data_ov004_02250b50[];
extern Unk_ov004_0221e0b4_Ent data_ov004_02250b58[];
extern Unk_ov004_0221e56c_Ent data_ov004_02250bc4[];
extern Unk_ov004_0221e56c_Ent data_ov004_02250bcc[];
extern Unk_ov004_0224d3f8 *volatile data_ov004_02250bc0;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d248

void Unk_ov004_0224d248::func_ov004_0221de38(Unk_020d77a4 *o) {
    vfunc_08();
    unk_ac = o;
}

Unk_ov004_0224d248::~Unk_ov004_0224d248() {}

Unk_ov004_0224d248::Unk_ov004_0224d248() {}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d2d8

BOOL Unk_ov004_0224d2d8::func_ov004_0221dea4() { return TRUE; }
BOOL Unk_ov004_0224d2d8::func_ov004_0221dea8() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221deac() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov004_0221e0b4(3);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221df04() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221df08() {
    s32 a, b;
    if (func_0201ba88()) {
        a = 4;
        b = 4;
        if (func_0201b9e8(&a, &b)) {
            s32 av = a;
            s32 g = data_020cbb18->unk_64;
            if (av == g && av == b) {
                func_0201b9fc(1, g, g);
                func_ov004_0221e0b4(1);
                goto end;
            }
        }
        if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov004_0221e0b4(0);
        }
    }
end:
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221df84() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221df88() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov004_0221e0b4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221dfb8() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_70c, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221dff4() { return TRUE; }
BOOL Unk_ov004_0224d2d8::func_ov004_0221dff8() { return TRUE; }

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

BOOL Unk_ov004_0224d2d8::func_ov004_0221e038() {
    Unk_020d7714 *p = &unk_658;
    p->vfunc_08();
    func_02015ab0(&unk_658, func_0201bc4c(4));
    Unk_020d77a4 *q = func_02015aac(&unk_658);
    s32 r = 0;
    if (q) {
        r = func_0201bcbc(q);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::func_ov004_0221e08c() { return TRUE; }

BOOL Unk_ov004_0224d2d8::func_ov004_0221e090() {
    func_02019614(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250b58[unk_654].enter) {
        r = (this->*data_ov004_02250b50[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov004_0224d2d8::vfunc_70() { return data_ov004_0224d14c; }
u8 *Unk_ov004_0224d2d8::vfunc_6c() { return data_ov004_0224d150; }

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

BOOL Unk_ov004_0224d2d8::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_70c = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) && func_020b50e8() == 0xb) {
        if (func_0201ba88()) {
            func_ov004_0221e0b4(0);
        } else {
            func_ov004_0221e0b4(4);
        }
    } else {
        func_ov004_0221e0b4(0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov004_0221de38(this);
    func_0201bd9c(0x100);
    func_0201ad30(&unk_2a0, 0xd9);
    func_0201ad34(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    return TRUE;
}

extern "C" Unk_ov004_0224d2d8 *func_ov004_0221e28c() { return new Unk_ov004_0224d2d8; }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d3f8

Unk_ov004_0224d3f8::~Unk_ov004_0224d3f8() {}

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

BOOL Unk_ov004_0224d3f8::func_ov004_0221e428() {
    if (func_0201622c(&unk_334, 0x100, &unk_2a0) && func_02019790(&unk_564)) {
        func_020195c8(&unk_564, 1, 0x101, 1, data_020c6cc8, 0);
    }
    if (func_0201622c(&unk_334, 0x101, &unk_2a0) && func_02019790(&unk_564)) {
        func_ov004_0221e56c(0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::func_ov004_0221e4ac() {
    func_020195c8(&unk_564, 1, 0x100, 1, data_020c6cc8, 0);
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

BOOL Unk_ov004_0224d3f8::func_ov004_0221e528() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_658 = 0xa;
    return TRUE;
}

BOOL Unk_ov004_0224d3f8::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov004_02250bcc[unk_654].enter) {
        r = (this->*data_ov004_02250bc4[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov004_0224d3f8::vfunc_70() { return data_ov004_0224d3a4; }
u8 *Unk_ov004_0224d3f8::vfunc_6c() { return data_ov004_0224d3d4; }

BOOL Unk_ov004_0224d3f8::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_ov004_02250bc0 = 0;
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

BOOL Unk_ov004_0224d3f8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201ad34(&unk_2a0, 0xff);
    return TRUE;
}

extern "C" Unk_ov004_0224d3f8 *func_ov004_0221e69c() { return new Unk_ov004_0224d3f8; }

// State setters (defined last so they are not inlined into the callers above).
void Unk_ov004_0224d2d8::func_ov004_0221e0b4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov004_02250b50[state].enter) {
        ok = (this->*data_ov004_02250b50[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
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
