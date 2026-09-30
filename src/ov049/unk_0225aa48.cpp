#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov049_0225aba8_Vec {
    s32 x, y, z;
};

extern "C" {
struct Unk_020cbb18_Ov049 {
    u8 pad_00[0x64];
    u32 unk_64;
};
extern Unk_ov049_0225aba8_Vec data_021f4880;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern Unk_020cbb18_Ov049 *data_020cbb18;
extern void *data_021c47c4;

void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov049_0225aba8_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u16 i, u16 j);
void func_02019614(void *self, s32 a, u16 b);
BOOL func_02014220(void *self);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
Unk_020d77a4 *func_02015aac(void *self);
void func_02015ab0(void *self, s32 v);
BOOL func_020a62a0();
void func_0203d67c(void *self);
void func_0203d704(void *self, s32 a);
Unk_ov049_0225aba8_Vec *func_020947f0(s32 a);
void func_0201ae00(Unk_ov049_0225aba8_Vec *out, void *self, Unk_ov049_0225aba8_Vec *v);
void func_0201a99c(void *self, s32 v);
void func_0201a9ec(void *self, Unk_ov049_0225aba8_Vec *v);
void func_0204e328(void *g, void *v);
s32 func_020e972c(Unk_ov049_0225aba8_Vec *a, void *b);
s32 func_020e96ec(Unk_ov049_0225aba8_Vec *a, void *b);
s32 func_020e7518(void *p);
s32 func_020e7500(void *p);
s32 func_020e780c(s32 a, s32 b);
BOOL func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
BOOL func_020ac8f4();
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
    s32 func_0201bc70(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    s32 func_0201bd20(u32 id);
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

// Menu/dialog state machine member (vtable 0x0225be74), size 0xd0.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual void vfunc_08();
    u32 pad_04[0x38 / 4];
    void *unk_3c;
    u32 pad_40[(0xac - 0x40) / 4];
};

class Unk_ov049_0225be74 : public Unk_0202e2bc {
public:
    typedef void (Unk_ov049_0225be74::*Fn)();

    Unk_ov049_0225be74();
    virtual ~Unk_ov049_0225be74();

    s32 func_ov049_0225aa48();
    void func_ov049_0225aa50(s32 v);
    void func_ov049_0225aa58(s32 v);

    s32 unk_ac;
    s32 unk_b0;
    Fn unk_b4;
    Fn unk_bc;
    u8 pad_c4[0xc];
};

struct Unk_ov049_0225ae34_Obj {
    u16 unk_00;
    u8 pad_02[0x5e];
};

class Unk_ov049_0225bf04 : public Unk_020d8bc8 {
public:
    Unk_ov049_0225bf04() {}
    virtual void vfunc_8c();
    virtual void vfunc_90();

    BOOL func_ov049_0225aac4();
    BOOL func_ov049_0225ab1c();
    BOOL func_ov049_0225ab50();
    BOOL func_ov049_0225ab54();
    BOOL func_ov049_0225aba8();
    BOOL func_ov049_0225acc0();
    BOOL func_ov049_0225ad00();
    BOOL func_ov049_0225ad04();
    BOOL func_ov049_0225ad08();
    BOOL func_ov049_0225ad38();
    BOOL func_ov049_0225ad78();
    BOOL func_ov049_0225adb4();
    BOOL func_ov049_0225add8();
    BOOL func_ov049_0225ae30();
    BOOL func_ov049_0225ae34();
    BOOL func_ov049_0225af2c();
    BOOL func_ov049_0225af30();
    BOOL func_ov049_0225af84();
    BOOL func_ov049_0225afb8();
    BOOL func_ov049_0225afbc();
    BOOL func_ov049_0225afc0();
    BOOL func_ov049_0225aff0();
    BOOL func_ov049_0225b028();
    BOOL func_ov049_0225b070();
    BOOL func_ov049_0225b0a8();
    BOOL func_ov049_0225b1a8();
    BOOL func_ov049_0225b1dc();
    BOOL func_ov049_0225b2a4();
    BOOL func_ov049_0225b2d8();

    // out of range
    BOOL func_ov049_0225b3a8();
    void func_ov049_0225b458(s32 state);
    BOOL func_ov049_02258e4c();
    BOOL func_ov049_02258ec0();

    s32 unk_654;
    Unk_ov049_0225be74 unk_658;
    u8 pad_728[0x734 - 0x728];
    Unk_ov049_0225ae34_Obj unk_734;
    u8 pad_794[0x960 - 0x794];
    u16 unk_960;
    u16 unk_962;
    u8 unk_964;
    u8 unk_965;
    u8 pad_966;
    u8 unk_967;
};

// ---------------------------------------------------------------------------------------------------------------------

BOOL Unk_ov049_0225bf04::func_ov049_0225aac4() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_02019614(&unk_564, 1, unk_962);
        }
    }
    func_0201a99c(&unk_350, func_0201bc70(4));
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ab1c() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ab50() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225ab54() { return func_ov049_0225b3a8(); }

void Unk_ov049_0225bf04::vfunc_90() {
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    func_ov049_0225b458(1);
}

void Unk_ov049_0225bf04::vfunc_8c() { func_ov049_0225b458(0xe); }

BOOL Unk_ov049_0225bf04::func_ov049_0225aba8() {
    Unk_ov049_0225aba8_Vec *pv = func_020947f0(4);
    Unk_ov049_0225aba8_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov049_0225aba8_Vec out;
    func_0201ae00(&out, this, &v);
    s32 t = func_0201bd20(4);
    func_0204e328(data_021c47c4, &unk_5c);
    if (t > 0x6000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &out);
    if (t <= 0x5000 || func_020e972c(&out, &unk_5c) != 0 || func_020e7518(&unk_967) == 0) {
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov049_0225b458(4);
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225acc0() {
    unk_967 = 0x32;
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ad00() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225ad04() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225ad08() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov049_0225b458(0xa);
        }
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ad38() {
    s32 f = func_0201bc70(4);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, f, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ad78() {
    s32 t = func_0201bc70(4);
    if (func_020e780c(unk_8e, t) >= data_020c6cc0) {
        func_ov049_0225b458(0xb);
    } else {
        func_ov049_02258ec0();
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225adb4() {
    func_02019614(&unk_564, 1, unk_962);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225add8() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov049_0225b458(0xa);
        }
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225ae30() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225ae34() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (func_0201b9e8(&a, &b) && ((x = a), x == (t = data_020cbb18->unk_64)) && x == b) {
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            BOOL r;
            if (func_0204b2d4(&unk_734)) {
                u16 tmp = 0xfff1;
                s32 p = func_0204b25c(&unk_734);
                if (p == func_0204b25c(&tmp)) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (unk_734.unk_00 == 0xfff1) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                unk_658.func_ov049_0225aa50(2);
            }
            func_ov049_0225b458(4);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov049_0225b458(0xa);
        }
    } else {
        func_ov049_02258ec0();
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225af2c() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225af30() {
    if (func_ov049_02258e4c()) {
        return TRUE;
    }
    if (func_ov049_02258ec0()) {
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 0xa) {
        if (func_02019790(&unk_564)) {
            unk_962 = 0x18;
            func_ov049_0225b458(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225af84() {
    func_020196b4(&unk_564, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225afb8() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225afbc() { return TRUE; }

BOOL Unk_ov049_0225bf04::func_ov049_0225afc0() {
    if (func_02014220(&unk_618) == 0) {
        func_020b4bbc(func_020b4934(), 0);
        func_ov049_0225b458(6);
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225aff0() {
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    func_020141b4(&unk_618, 0, r, 1);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b028() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (unk_964 != 0 && func_020ac8f4() == 0) {
        return TRUE;
    }
    func_0203d67c(this);
    func_ov049_0225b458(6);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b070() {
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = func_0201bcbc(p);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b0a8() {
    if (func_ov049_02258e4c()) {
        return TRUE;
    }
    if (func_ov049_02258ec0()) {
        return TRUE;
    }
    Unk_ov049_0225aba8_Vec *pv = func_020947f0(4);
    Unk_ov049_0225aba8_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov049_0225aba8_Vec out;
    func_0201ae00(&out, this, &v);
    s32 t = func_0201bd20(4);
    func_0204e328(data_021c47c4, &unk_5c);
    if (t > 0x6000) {
        if (func_020197a8(&unk_564) == 1) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(&unk_564) == 2) {
            func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(&unk_350, &out);
    if (t <= 0x5000 || func_020e972c(&out, &unk_5c) != 0) {
        func_ov049_0225b458(1);
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b1a8() {
    func_020196b4(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b1dc() {
    if (func_ov049_02258e4c()) {
        return TRUE;
    }
    if (func_ov049_02258ec0()) {
        return TRUE;
    }
    Unk_ov049_0225aba8_Vec *pv = func_020947f0(4);
    Unk_ov049_0225aba8_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov049_0225aba8_Vec out;
    func_0201ae00(&out, this, &v);
    s32 r6 = func_0201bd20(4);
    s32 r4 = func_0201bc70(4);
    func_020e780c(unk_8e, r4);
    func_0204e328(data_021c47c4, &unk_5c);
    if (r6 > 0x5000) {
        if (func_020e96ec(&out, &unk_5c)) {
            func_ov049_0225b458(3);
        }
    }
    func_0201a99c(&unk_350, r4);
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov049_0225b458(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b2a4() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov049_0225bf04::func_ov049_0225b2d8() {
    Unk_ov049_0225aba8_Vec *pv = func_020947f0(4);
    Unk_ov049_0225aba8_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov049_0225aba8_Vec out;
    func_0201ae00(&out, this, &v);
    s32 r6 = func_0201bd20(4);
    s32 t = func_0201bc70(4);
    s32 r4 = func_020e780c(unk_8e, t);
    func_0204e328(data_021c47c4, &unk_5c);
    if (r6 > 0x5000 && func_020e96ec(&out, &unk_5c)) {
        func_ov049_0225b458(3);
    } else if (r4 > 0x2000) {
        func_ov049_0225b458(2);
    }
    if (func_ov049_02258e4c()) {
        return TRUE;
    }
    if (func_ov049_02258ec0()) {
        return TRUE;
    }
    if (unk_965 != 0) {
        if (func_020e7500(&unk_960) == 0) {
            func_ov049_0225b458(7);
        }
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Menu class

s32 Unk_ov049_0225be74::func_ov049_0225aa48() { return unk_b0; }

void Unk_ov049_0225be74::func_ov049_0225aa50(s32 v) { unk_b0 = v; }

void Unk_ov049_0225be74::func_ov049_0225aa58(s32 v) {
    vfunc_08();
    unk_ac = v;
}

Unk_ov049_0225be74::~Unk_ov049_0225be74() {}

Unk_ov049_0225be74::Unk_ov049_0225be74() {}
