#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov046_0225a11c_Vec {
    s32 x, y, z;
};

extern "C" {
struct Unk_020cbb18_Ov047 {
    u8 pad_00[0x64];
    u32 unk_64;
};
extern Unk_ov046_0225a11c_Vec data_021f4880;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_020cbb18_Ov047 *data_020cbb18;
extern u8 data_ov047_0225b580[];
extern u8 data_ov047_0225b5b0[];
extern u8 data_0213a740[];
extern u8 data_020d77a4[];
extern u8 data_020d8bc8[];
extern u8 data_ov047_0225b664[];

void func_ov047_0225a28c(void *sub, void *owner);
void func_ov047_0225a350(void *sub);
BOOL func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_0209ccd0();
s32 func_020e7500(void *p);
void func_0203d67c(void *self);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov046_0225a11c_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void func_02019614(void *self, s32 a, u16 b);
BOOL func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
Unk_020d77a4 *func_02015aac(void *self);
void func_02015ab0(void *self, s32 v);
void func_020902f8(s32 h);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_020902d4(s32 h, void *b, void *c);
BOOL func_020a62a0();
s32 func_02063b8c(s32 v);
BOOL func_0202e18c(void *unused, u8 *p, u32 mode);
BOOL func_0202e360(void);
BOOL func_0202e3a4(void *a);
BOOL func_0202e514(void);

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

class Unk_ov047_0225b5d4 {
public:
    Unk_ov047_0225b5d4();
    virtual ~Unk_ov047_0225b5d4();
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    typedef void (Unk_ov047_0225b5d4::*Fn)();
    u8 pad_04[0xb0];
    Fn unk_b4;
    Fn unk_bc;
    u8 pad_c4[0xc];
};

class Unk_ov047_0225b664 : public Unk_020d8bc8 {
public:
    Unk_ov047_0225b664() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov047_0225aa54();
    BOOL func_ov047_0225aa58();
    BOOL func_ov047_0225aa5c();
    BOOL func_ov047_0225aab4();
    BOOL func_ov047_0225aaec();
    BOOL func_ov047_0225ab88();
    BOOL func_ov047_0225abc0();
    BOOL func_ov047_0225abc4();
    BOOL func_ov047_0225abf8();
    BOOL func_ov047_0225ac7c();
    BOOL func_ov047_0225acbc();
    BOOL func_ov047_0225ad20();
    BOOL func_ov047_0225ad50();
    BOOL func_ov047_0225ad8c();
    BOOL func_ov047_0225ae10();
    void func_ov047_0225aeb4(s32 state);

    s32 unk_654;
    Unk_ov047_0225b5d4 unk_658;
    u8 unk_728;
    u8 pad_729;
    u16 unk_72a;
    u16 unk_72c;
    u16 unk_72e;
    s16 unk_730;
    u8 unk_732;
    u8 pad_733;
    u16 unk_734;
    s16 pad_736;
    s32 unk_738;
};

struct Unk_ov047_0225aeb4_Ent {
    BOOL (Unk_ov047_0225b664::*enter)();
    BOOL (Unk_ov047_0225b664::*exit)();
};

extern "C" {
extern Unk_ov047_0225aeb4_Ent data_ov047_0225ba08[];
extern Unk_ov047_0225aeb4_Ent data_ov047_0225ba10[];
}

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov047_0225b5d4::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        Fn n = *(Fn *)data_0213a740;
        unk_b4 = n;
        if (unk_bc) {
            unk_b4 = unk_bc;
            unk_bc = n;
        }
    }
}

BOOL Unk_ov047_0225b664::func_ov047_0225aa54() { return TRUE; }

BOOL Unk_ov047_0225b664::func_ov047_0225aa58() { return TRUE; }

BOOL Unk_ov047_0225b664::func_ov047_0225aa5c() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aab4() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aaec() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (func_0201b9e8(&a, &b) && ((x = a), x == (t = data_020cbb18->unk_64)) && x == b) {
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov047_0225aeb4(3);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ab88() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225abc0() { return TRUE; }

BOOL Unk_ov047_0225b664::func_ov047_0225abc4() {
    if (func_02014220(&unk_618) == 0) {
        unk_732 = 0;
        func_0203d67c(this);
        func_ov047_0225aeb4(4);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225abf8() {
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    if (unk_738 != -1) {
        func_020902f8(unk_738);
        unk_738 = -1;
    }
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ac7c() {
    if (unk_738 == -1) {
        unk_738 = func_02090330(0x3c, (u8 *)this + 0x478, &unk_8e, 0);
    } else {
        func_020902d4(unk_738, (u8 *)this + 0x478, &unk_8e);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225acbc() {
    func_020195c8(&unk_564, 1, 0xf0, 0, unk_734, 0);
    unk_732 = 1;
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad20() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad50() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_730, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad8c() {
    if (unk_72a != 0xff) {
        if (func_020e7500(&unk_72a) == 0) {
            func_ov047_0225aeb4(5);
        }
        return TRUE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0 || func_0209ccd0() == 2 ||
        func_0209ccd0() == 3) {
        return TRUE;
    }
    if (func_020e7500(&unk_72e) == 0) {
        unk_734 = 0x18;
        func_ov047_0225aeb4(2);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ae10() {
    u8 buf[8];
    unk_72a = 0xff;
    func_02019614(&unk_564, 1, unk_72c);
    if (unk_728 == 0) {
        if (func_0202e18c(this, buf, 1)) {
            unk_72a = func_02063b8c(5) * 0x14 + 0x64;
        }
    }
    unk_732 = 0;
    unk_72c = data_020c6cc8;
    unk_72e = 0x78;
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

void Unk_ov047_0225b664::func_ov047_0225aeb4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov047_0225ba08[state].enter) {
        ok = (this->*data_ov047_0225ba08[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov047_0225b664::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov047_0225ba10[unk_654].enter) {
        r = (this->*data_ov047_0225ba08[unk_654].exit)();
    }
    return r;
}

BOOL Unk_ov047_0225b664::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_738 != -1) {
        func_020902f8(unk_738);
        unk_738 = -1;
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    u8 buf[8];
    unk_728 = 0;
    unk_730 = unk_8e;
    unk_72a = 0xff;
    unk_4cc.unk_1c |= 2;
    unk_734 = 0;
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        unk_4cc.unk_1c |= 2;
        if (func_020a62a0()) {
            unk_5c = 0xf000;
            unk_64 = 0x15000;
            unk_8e = 0;
            unk_94 = 0;
            func_ov047_0225aeb4(0);
        } else {
            func_ov047_0225aeb4(6);
        }
        return TRUE;
    }
    if (func_0209ccd0() == 2 || func_0209ccd0() == 3 || func_0202e18c(this, buf, 1)) {
        func_ov047_0225aeb4(0);
    } else {
        func_ov047_0225aeb4(2);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov047_0225a28c(&unk_658, this);
    unk_72c = data_020c6cc8;
    unk_738 = -1;
    return TRUE;
}

extern "C" void *func_ov047_0225b0c0() {
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
        *(u32 *)p = (u32)data_ov047_0225b664;
        func_ov047_0225a350(p + 0x658);
    }
    return p;
}

// Getters at the end of the file so they are not inlined.
u8 *Unk_ov047_0225b664::vfunc_70() { return data_ov047_0225b580; }
u8 *Unk_ov047_0225b664::vfunc_6c() { return data_ov047_0225b5b0; }
