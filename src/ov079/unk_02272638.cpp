#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov079_02272a34;
class Unk_ov079_02272ac4;

extern "C" {
BOOL func_0202e1cc(s32 a, s32 b);
void func_0203ffa4(u32 a);
u32 func_02063b8c(u32 n);
s32 func_020aa514();
BOOL func_02099014(u16 *p, u32 a);
BOOL func_0206ed18();
u32 func_0206ed38();
void *func_0209750c();
void *func_020986d4(void *p);
void *func_02071c5c(void *p);
u32 func_02071c1c(void *p, u32 v);
void *func_02071c88(void *p, u32 v);
void *func_02071e04(void *p);
void func_02071f70(void *p, void *q);
u16 *func_02098714(void *p);
u16 *func_0209872c(void *p);
u16 *func_02098744(void *p);
void func_02094bb4(u16 *p);
void func_02094b9c(u16 *p);
void func_02094b78(u16 *p);
void func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204b9e8(u16 *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
void func_ov079_02271ebc();
extern u8 data_ov079_02272b70[];
extern u8 data_0213a740[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    void func_020679ec(s32 idx, void *p, u32 val);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void func_02014a4c();
    void func_020146bc();
    void func_02014918();
    void func_02014e60(u16 *p, u32 a, u32 b, u32 c);
    void func_02015170(u32 a, u32 b);
    void func_0201517c(u32 a, u32 b, u32 c);
    void func_020151d0(s32 a);
    void func_0201578c(void *p, u32 a, u32 b);
    void func_02015a5c();
    void func_02015ab0(u32 a);
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

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

struct Unk_ov079_0227160c_Out {
    u8 *a;
    u8 b;
};

typedef void (Unk_ov079_02272a34::*Unk_ov079_02272a34_Fn)();

class Unk_ov079_02272a34 : public Unk_020d8b38 {
public:
    Unk_ov079_02272a34();
    virtual ~Unk_ov079_02272a34();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov079_0227160c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov079_0227163c(Unk_ov079_02272ac4 *owner);
    void func_ov079_02271718();
    void func_ov079_02271ed8(s32 a);

    Unk_ov079_02272ac4 *unk_ac;
    Unk_ov079_02272a34_Fn unk_b0;
    Unk_ov079_02272a34_Fn unk_b8;
    u16 unk_c0;
    u8 pad_c2[2];
    s32 unk_c4;
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
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
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
    u32 func_0201bc4c(u32 a);

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

class Unk_ov079_02272ac4 : public Unk_020d8bc8 {
public:
    Unk_ov079_02272ac4() {}
    virtual ~Unk_ov079_02272ac4();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov079_02272694();
    BOOL func_ov079_022726c0();
    BOOL func_ov079_022726e0();
    void func_ov079_022725f4(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov079_02272a34 unk_658;
};

struct Unk_ov079_02272638_Ent {
    BOOL (Unk_ov079_02272ac4::*enter)();
    BOOL (Unk_ov079_02272ac4::*exit)();
};

extern "C" {
extern Unk_ov079_02272638_Ent data_ov079_02272be4[];
extern u8 data_ov079_022729e0[];
extern u8 data_ov079_02272a10[];
extern s32 data_020c6cf0;
BOOL func_0202e360();
BOOL func_0202e3a4();
BOOL func_0202e514();
BOOL func_02040c88();
void *func_020850e0();
void func_0208516c(void *p);
void func_020868e4();
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov079_02272ac4::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov079_02272be4[unk_654].exit != NULL) {
        result = (this->*data_ov079_02272be4[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov079_02272ac4::vfunc_70() { return data_ov079_022729e0; }

u8 *Unk_ov079_02272ac4::vfunc_6c() { return data_ov079_02272a10; }

BOOL Unk_ov079_02272ac4::func_ov079_02272694() {
    if (func_0202e360() == 0) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        func_0208516c(func_020850e0());
        func_020868e4();
    }
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_022726c0() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    func_ov079_022725f4(3);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_022726e0() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov079_0227163c(this);
    return TRUE;
}

extern "C" s32 func_ov079_02272710() { return data_020c6cf0; }

extern "C" Unk_ov079_02272ac4 *func_ov079_0227271c() {
    return new Unk_ov079_02272ac4();
}
