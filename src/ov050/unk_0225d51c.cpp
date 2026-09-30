#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov050_0225d51c_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_ov050_0225d51c_Global *data_020cbb18;
extern u16 data_020c6cc8;

BOOL func_020a62a0();
BOOL func_02072e44(void *g);
BOOL func_020b50dc();
void func_0202ffb0(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e18c(void *self, void *out, s32 x);
s16 *func_0209c37c(s32 a, s32 b);
void func_02019614(void *self, s32 a, u32 b);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
s32 func_02063b8c(s32 a);
s32 func_0203d704(void *self, s32 a);
BOOL func_ov050_02258e7c(void *self);
void func_ov050_0225c008(void *self, void *owner);
void func_02071e74(void *self);
}

struct Unk_ov050_0225c088 {
    u8 unk_00[0x72c - 0x658];
    Unk_ov050_0225c088();
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
    u8 pad_04[4];
    u32 unk_08;
    u8 pad_0c[0x1e - 0xc];
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


struct Unk_02071e74 {
    u8 unk_00[0x228];
    Unk_02071e74();
};

class Unk_ov050_0225e400 : public Unk_020d8bc8 {
public:
    Unk_ov050_0225e400() : unk_658(), unk_72e(0xfff1), unk_730(0), unk_734(0) {}
    virtual ~Unk_ov050_0225e400();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    s32 unk_654;
    Unk_ov050_0225c088 unk_658;
    u16 unk_72c;
    u16 unk_72e;
    s32 unk_730;
    s32 unk_734;
    u8 pad_738[4];
};

BOOL Unk_ov050_0225e400::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov050_0225c008(&unk_658, this);
    if (func_ov050_02258e7c(this)) {
        func_0202e548(0xccd, 0x2000);
        func_0201bd9c(0xb00);
    }
    unk_72c = data_020c6cc8;
    func_0201a8d0(&unk_350, 2, 0x400, 0x133, 0x199);
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        switch (unk_08) {
        case 0xd00f:
            unk_5c = 0xf000;
            unk_60 = 0;
            unk_64 = 0x11000;
            break;
        case 0xd010:
            unk_5c = 0xf000;
            unk_60 = 0;
            unk_64 = 0x13000;
            break;
        case 0xd019:
            unk_5c = 0xf000;
            unk_60 = 0;
            unk_64 = 0x19000;
            break;
        case 0xd01a:
            unk_5c = 0x13000;
            unk_60 = 0;
            unk_64 = 0x17000;
            break;
        case 0xd01b:
            unk_5c = 0xf000;
            unk_60 = 0;
            unk_64 = 0x15000;
            break;
        case 0xd01c:
            unk_5c = 0x11000;
            unk_60 = 0;
            unk_64 = 0x13000;
            break;
        }
    }
    return TRUE;
}

extern "C" Unk_ov050_0225e400 *func_ov050_0225d68c() { return new Unk_ov050_0225e400; }
extern "C" Unk_ov050_0225e400 *func_ov050_0225d7c0() { return new Unk_ov050_0225e400; }
extern "C" Unk_ov050_0225e400 *func_ov050_0225d8f4() { return new Unk_ov050_0225e400; }
