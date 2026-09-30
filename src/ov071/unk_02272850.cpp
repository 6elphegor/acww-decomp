#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov071_02272c38;
class Unk_ov071_02272ba8;

struct Unk_ov071_02271f54_Vec {
    s32 x, y, z;
};

struct Unk_ov071_02271f54_Tmp {
    u32 v[4];
};

struct Unk_ov071_022726c4_Ent;

extern "C" {
extern u16 data_020c6cc8;
extern s32 data_020c6cf0;
extern s32 data_020c6d1c;
extern u32 data_021f4880[];
extern u32 data_021c3070;
extern Unk_ov071_02271f54_Vec data_021c309c;
extern u32 data_021c7c88;
extern s16 data_02135f44[];
extern s16 data_ov071_02272d00;
extern u8 data_ov071_02272d4c[];
extern u8 data_ov071_02272d58[];
extern u8 data_ov071_02272b54[];
extern u8 data_ov071_02272b84[];
extern Unk_ov071_022726c4_Ent data_ov071_02272d64[];

void func_0201a900(Unk_ov071_02271f54_Tmp *t, void *pos, void *p, s32 ang);
BOOL func_0201a834(Unk_ov071_02271f54_Tmp *t);
s32 func_0201a7e8(void *p);
BOOL func_0201a9a0(void *self, void *scene, s32 v);
BOOL func_0201a968(void *self);
void func_0201a8f0(void *self);
void func_0201a97c(void *self, Unk_ov071_02271f54_Vec *v);
void func_0201a9ec(void *self, Unk_ov071_02271f54_Vec *v);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, u32 *v, s32 d, s32 e, u8 f);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, u32 s5, s32 s6);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u32 d, u32 e);
BOOL func_02019790(void *self);
void func_020135c4(void *self);
BOOL func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void *func_02015aac(void *self);
void func_0203d67c(void *self);
s32 func_020e7fa8(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *a, void *b);
BOOL func_02077f40(void *a, s32 b);
s32 func_020e96a4(void *a, void *b);
s32 func_020951ec(s32 n);
s32 func_0201bd38(void *self, void *p);
s32 func_0201bc58(void *self, void *p);
BOOL func_0202e360();
BOOL func_0202e3a4();
BOOL func_0202e514();
BOOL func_02040c88();
void *func_020850e0();
void func_0208516c(void *p);
void func_020868e4();
void func_0201610c(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02053848(void *self, s32 a, s32 b);
void func_02115fb4(void *dst, s32 v, s32 n);
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
    u8 pad_04[0x58];
    Unk_ov071_02271f54_Vec unk_5c;
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
    virtual s32 vfunc_94();
    virtual s32 vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(void *p);
    s32 func_0201bcbc(void *other);

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

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

// Menu-state sub-object at +0x658 of the scene (vtable 0x02272ba8), defined in ov071_000.
class Unk_ov071_02272ba8 {
public:
    Unk_ov071_02272ba8();
    virtual ~Unk_ov071_02272ba8();
    void func_ov071_022718dc(Unk_ov071_02272c38 *o);
    u8 pad_04[0xc8 - 4];
};

// Scene class (vtable 0x02272c38)
class Unk_ov071_02272c38 : public Unk_020d8bc8 {
public:
    Unk_ov071_02272c38() {}
    virtual ~Unk_ov071_02272c38();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_94();
    virtual s32 vfunc_98();
    virtual s32 vfunc_a8();

    BOOL func_ov071_02271f30();
    BOOL func_ov071_02271f54();
    BOOL func_ov071_02272054(Unk_ov071_02271f54_Vec *out, void *unused);
    BOOL func_ov071_02272090(s32 *x, s32 *z);
    BOOL func_ov071_02272120();
    BOOL func_ov071_02272198();
    BOOL func_ov071_02272218();
    void func_ov071_022722b8();
    void func_ov071_02272380();
    void func_ov071_02272438();
    BOOL func_ov071_022724ec(s32 mask);
    BOOL func_ov071_0227252c();
    BOOL func_ov071_02272558();
    BOOL func_ov071_0227255c();
    BOOL func_ov071_02272598();
    BOOL func_ov071_022725c4();
    s32 func_ov071_022725c8(s32 *p);
    BOOL func_ov071_022725d8(s32 a);
    BOOL func_ov071_02272614(Unk_ov071_02271f54_Vec *a, Unk_ov071_02271f54_Vec *b, s32 m);
    void func_ov071_022726c4(s32 state);

    s32 unk_654;
    Unk_ov071_02272ba8 unk_658;
    u8 unk_720[5];
    u8 unk_725;
    u8 pad_726[2];
    s32 unk_728;
    s32 unk_72c;
    Unk_020d9670 *unk_730;
    Unk_ov071_02271f54_Vec unk_734;
};

typedef BOOL (Unk_ov071_02272c38::*Unk_ov071_02272c38_Fn)();
typedef void (Unk_ov071_02272c38::*Unk_ov071_02272198_Fn)();

struct Unk_ov071_022726c4_Ent {
    Unk_ov071_02272c38_Fn enter;
    Unk_ov071_02272c38_Fn exit;
};

s32 Unk_ov071_02272c38::vfunc_a8() { return data_020c6cf0 - 0x1000; }

extern "C" Unk_ov071_02272c38 *func_ov071_02272864() {
    return new Unk_ov071_02272c38();
}
