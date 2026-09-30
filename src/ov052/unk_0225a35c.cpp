#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

extern "C" {
extern u16 data_020c6cc8;
extern u8 data_ov052_0225a81c[];
extern u8 data_ov052_0225a84c[];
extern u8 data_020d77a4[];
extern u8 data_020d8bc8[];
extern u8 data_ov052_0225a900[];

BOOL func_0202e3a4(void *self);
BOOL func_0202e514(void *self);
BOOL func_020b50dc();
void func_0202ffb0(s32 a);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
void func_02115fb4(void *p, s32 v, s32 n);
void func_ov052_02259a98(void *sub, void *owner);
void func_ov052_02259b04(void *sub);
void func_02004b60(void *);
void func_0203442c(void *p);
void *__cxa_vec_ctor(void *, u32, u32, void (*)(void *), void (*)(void *));
void func_0203e7a4(void *p);
void func_02053d3c(void *p);
void func_0201ad3c(void *p);
void func_02019dd8(void *p);
void func_02016350(void *p);
void func_0201accc(void *p);
void func_0201a8bc(void *p);
void func_0201ad18(void *p);
void func_0201a794(void *p);
void func_0201a194(void *p);
void func_0201a13c(void *p);
void func_020323b0(void *p);
void func_02088d00(void *p);
void func_020f4080(void *p);
void func_020135e4(void *p);
void func_02019858(void *p);
void func_02014254(void *p);
void func_02082014(void *p);
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

class Unk_ov052_0225a900 : public Unk_020d8bc8 {
public:
    Unk_ov052_0225a900() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    void func_ov052_0225a2cc(s32 v);

    s32 unk_654;
    u32 unk_658[(0x718 - 0x658) / 4];
    u16 unk_718;
    u16 unk_71a;
    u16 unk_71c[3];
    u16 pad_722;
    s32 unk_724;
    s32 unk_728;
    u8 pad_72c[0x73c - 0x72c];
};

BOOL Unk_ov052_0225a900::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    if (func_020b50dc()) {
        func_ov052_0225a2cc(1);
    } else {
        func_ov052_0225a2cc(0);
    }
    func_0202ffb0(0);
    unk_71a = 0xfff1;
    for (s32 i = 0; i < 3; i++) {
        unk_71c[i] = 0xfff1;
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov052_02259a98(&unk_658, this);
    unk_718 = data_020c6cc8;
    func_02115fb4((u8 *)this + 0x72f, 0, 5);
    func_02115fb4((u8 *)this + 0x734, 0, 5);
    func_0201a8d0(&unk_350, 2, 0x400, 0x133, 0x199);
    return TRUE;
}

extern "C" void *func_ov052_0225a450() {
    u8 *p = (u8 *)Unk_020d8c7c_Base::operator new(0x73c);
    if (p != 0) {
        func_0203e7a4(p);
        *(u32 *)p = (u32)data_020d77a4;
        *(u16 *)(p + 0xea) = 0xfff1;
        func_02053d3c(p + 0xec);
        func_0201ad3c(p + 0x2a0);
        func_02019dd8(p + 0x2ac);
        func_02016350(p + 0x334);
        func_0201accc(p + 0x350);
        func_0201a8bc(p + 0x3a8);
        func_0201ad18(p + 0x3aa);
        func_0201a794(p + 0x3b0);
        func_0201a194(p + 0x418);
        func_0201a13c(p + 0x420);
        func_020323b0(p + 0x49c);
        func_02088d00(p + 0x4cc);
        func_020f4080(p + 0x514);
        func_020135e4(p + 0x558);
        func_02019858(p + 0x564);
        func_02014254(p + 0x618);
        *(u32 *)p = (u32)data_020d8bc8;
        func_02082014(p + 0x640);
        *(u32 *)p = (u32)data_ov052_0225a900;
        func_ov052_02259b04(p + 0x658);
        *(u16 *)(p + 0x71a) = 0xfff1;
        __cxa_vec_ctor(p + 0x71c, 3, 2, func_0203442c, func_02004b60);
        *(s32 *)(p + 0x724) = 0;
        *(s32 *)(p + 0x728) = 0;
    }
    return p;
}

// Getters at the end of the file so they are not inlined.
u8 *Unk_ov052_0225a900::vfunc_6c() { return data_ov052_0225a84c; }
u8 *Unk_ov052_0225a900::vfunc_70() { return data_ov052_0225a81c; }
