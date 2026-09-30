#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov054_0225ba54_Vec {
    s32 x, y, z;
};

struct Unk_ov054_0225ab00_Vec {
    s32 x, y, z;
    Unk_ov054_0225ab00_Vec() {}
    ~Unk_ov054_0225ab00_Vec() {}
};

struct Unk_ov054_0225b3ac_Row {
    s32 a, b, c;
};

struct Unk_ov054_0225a99c_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov054_0225b0ac_Local {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06[3];
};

extern "C" {
extern Unk_ov054_0225a99c_Global *data_020cbb18;
extern u16 data_020c6cc8;
extern u8 data_ov054_0225b348[];
extern u16 data_ov054_0225b35c[];
extern Unk_ov054_0225ba54_Vec data_ov054_0225b394[];
extern Unk_ov054_0225b3ac_Row data_ov054_0225b3ac[];
extern u8 data_ov054_0225b3b4[];
extern u8 data_ov054_0225b6e8[];
extern u8 data_ov054_0225b7b8[];
extern u8 data_020d77a4[];
extern u8 data_020d8bc8[];
extern u8 data_ov054_0225ba54[];

BOOL func_020a62a0();
BOOL func_020a032c();
BOOL func_02098044(u32 a, s32 b);
u32 func_0209750c();
BOOL func_ov054_02258e34(void *self);
BOOL func_020e7500(void *p);
s32 func_02063b8c(s32 a);
s32 func_0203d704(void *self, s32 a);
void func_0203d67c(void *self);
BOOL func_0202e18c(void *self, void *out, s32 x);
s32 func_020951b8(s32 a);
void func_02094b0c(void *v, s32 a, s32 b);
Unk_ov054_0225ba54_Vec *func_020947f0(s32 a);
s32 func_0204ee10(s32 *a, s32 *b, void *v);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_02019614(void *self, s32 a, u32 b);
void func_020196b4(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201a8c4(void *self, s32 a);
void func_0201a8d0(void *self, s32 a, s32 b, s32 c, s32 d);
BOOL func_02014220(void *self);
void func_02014198(void *self, s32 a, s32 b);
void func_02015ab0(void *self, s32 v);
void func_02034d84(s32 a);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void func_0209cf18(void *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_02002cf8(s32 a, u32 b, void *v, void *p, void *owner);
void *func_0204da0c();
void func_020b0f48();
BOOL func_0204d780(void *r, s32 *a, s32 *b, s32 *c);
void *func_020b4934();
s32 func_020b4f18(void *r, s32 a, void *v, s32 b, s32 c, s32 d, s32 e);
struct Unk_ov054_0225aa98_Rec { s32 unk_00; s32 unk_04; };
Unk_ov054_0225aa98_Rec *func_02067918(s32 a);
BOOL func_0202e360(void);
BOOL func_0202e3a4(void *a);
BOOL func_0202e514(void);
void func_ov054_0225a928(void *sub, void *owner);
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

class Unk_ov054_0225b9c4 {
public:
    Unk_ov054_0225b9c4();
    virtual ~Unk_ov054_0225b9c4();
    virtual void vfunc_08();
    u8 pad_04[0x800 - 0x658 - 4];
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
    void func_0201bda8(u16 *p);

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

class Unk_ov054_0225ba54 : public Unk_020d8bc8 {
public:
    Unk_ov054_0225ba54() : unk_658() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov054_0225a994();
    BOOL func_ov054_0225a998();
    BOOL func_ov054_0225a99c();
    BOOL func_ov054_0225a9f4();
    BOOL func_ov054_0225a9f8();
    BOOL func_ov054_0225aa94();
    BOOL func_ov054_0225aa98();
    BOOL func_ov054_0225aafc();
    BOOL func_ov054_0225ab00();
    BOOL func_ov054_0225ab54();
    BOOL func_ov054_0225ab88();
    BOOL func_ov054_0225abd4();
    BOOL func_ov054_0225ac24();
    BOOL func_ov054_0225ac28();
    BOOL func_ov054_0225ac2c();
    BOOL func_ov054_0225ac58();
    BOOL func_ov054_0225ac74();
    BOOL func_ov054_0225acdc();
    BOOL func_ov054_0225ad34();
    BOOL func_ov054_0225ad94();
    BOOL func_ov054_0225adfc();
    BOOL func_ov054_0225ae1c();
    BOOL func_ov054_0225ae48();
    BOOL func_ov054_0225ae5c();
    BOOL func_ov054_0225ae60();
    void func_ov054_0225aef4(s32 state);

    s32 unk_654;
    Unk_ov054_0225b9c4 unk_658;
    s16 unk_800;
    u8 pad_802[2];
    s32 unk_804;
    s32 unk_808;
    u16 unk_80c;
    u16 unk_80e;
    u8 unk_810;
    u8 pad_811[3];
};

struct Unk_ov054_0225aef4_Ent {
    BOOL (Unk_ov054_0225ba54::*enter)();
    BOOL (Unk_ov054_0225ba54::*exit)();
};

extern "C" {
extern Unk_ov054_0225aef4_Ent data_ov054_0225bc9c[];
extern Unk_ov054_0225aef4_Ent data_ov054_0225bca4[];
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov054_0225ba54::func_ov054_0225a994() { return TRUE; }
BOOL Unk_ov054_0225ba54::func_ov054_0225a998() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225a99c() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b)) {
            if (a == 4) {
                if (func_020a62a0()) {
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov054_0225aef4(2);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225a9f4() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225a9f8() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == data_020cbb18->unk_64 && a == b) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov054_0225aef4(4);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225aa94() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225aa98() {
    s32 a, b;
    s32 v[3];
    if (func_02067918(0)->unk_04 == 5) {
        func_020b0f48();
        void *r = func_0204da0c();
        if (r) {
            if (func_0204d780(r, &v[0], &a, &b)) {
                v[2] += 0x1000;
                func_020b4f18(func_020b4934(), 0, &v[0], 0xec00000, 0, 2, 2);
            }
        }
        func_ov054_0225aef4(5);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225aafc() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225ab00() {
    Unk_ov054_0225ab00_Vec v;
    func_ov054_02258e34(this);
    Unk_ov054_0225ba54_Vec *p = func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    if (func_020197a8(&unk_564) == 10) {
        if (func_02019790(&unk_564)) {
            unk_80e = 0x18;
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ab54() {
    func_020196b4(&unk_564, 10, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ab88() {
    func_ov054_02258e34(this);
    if (func_ov054_0225ae60()) {
        func_ov054_0225aef4(3);
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov054_0225aef4(2);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225abd4() {
    func_0201a8c4(&unk_350, 0);
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_800, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac24() { return TRUE; }
BOOL Unk_ov054_0225ba54::func_ov054_0225ac28() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225ac2c() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov054_0225aef4(5);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac58() {
    func_02014198(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ac74() {
    func_ov054_02258e34(this);
    if (func_ov054_0225ae60()) {
        func_ov054_0225aef4(3);
        func_0201a8c4(&unk_350, data_ov054_0225b348[unk_808]);
        return TRUE;
    }
    if (func_020197a8(&unk_564) == 6) {
        if (func_02019790(&unk_564)) {
            func_ov054_0225aef4(6);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225acdc() {
    u32 i = unk_808 * 12;
    func_020196b4(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov054_0225b3ac + i), *(s32 *)(data_ov054_0225b3b4 + i), 0x800, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ad34() {
    if (!func_ov054_02258e34(this)) {
        if (func_ov054_0225ae60()) {
            func_ov054_0225aef4(3);
            func_0201a8c4(&unk_350, data_ov054_0225b348[unk_808]);
        }
        if (unk_80c != 0xff) {
            if (!func_020e7500(&unk_80c)) {
                func_ov054_0225aef4(7);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ad94() {
    func_02019614(&unk_564, 1, unk_80e);
    unk_80c = 0xff;
    if (unk_810 == 0) {
        s32 v;
        if (func_0202e18c(this, &v, 0)) {
            unk_80c = func_02063b8c(5) * 20 + 100;
        }
    }
    unk_80e = data_020c6cc8;
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225adfc() {
    if (func_020951b8(4) == 0) {
        func_ov054_0225aef4(4);
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae1c() {
    Unk_ov054_0225ba54_Vec v;
    Unk_ov054_0225ba54_Vec *p = &data_ov054_0225b394[0];
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    func_02094b0c(&v, 0x400, 4);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae48() {
    func_0203d704(this, 0);
    return TRUE;
}

BOOL Unk_ov054_0225ba54::func_ov054_0225ae5c() { return TRUE; }

BOOL Unk_ov054_0225ba54::func_ov054_0225ae60() {
    s32 a, b;
    s32 c, d;
    Unk_ov054_0225ba54_Vec v;
    Unk_ov054_0225ba54_Vec w;
    Unk_ov054_0225ba54_Vec *p = func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    a = 0;
    b = 0;
    func_0204ee10(&a, &b, &v);
    s32 old = unk_808;
    s32 i = 0;
    s32 z = i;
    for (; i < 2; i++) {
        c = z;
        d = z;
        Unk_ov054_0225ba54_Vec *q = &data_ov054_0225b394[i];
        w.x = q->x;
        w.y = q->y;
        w.z = q->z;
        func_0204ee10(&c, &d, &w);
        if (a == c && b == d) {
            unk_808 = i;
            break;
        }
    }
    BOOL r;
    if (old == unk_808) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

typedef BOOL (Unk_ov054_0225ba54::*Unk_ov054_0225ba54_Fn)();

void Unk_ov054_0225ba54::func_ov054_0225aef4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov054_0225bc9c[state].enter) {
        ok = (this->*data_ov054_0225bc9c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov054_0225ba54::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov054_0225bca4[unk_654].enter) {
        r = (this->*data_ov054_0225bc9c[unk_654].exit)();
    }
    return r;
}

u8 *Unk_ov054_0225ba54::vfunc_70() { return ((u8 **)data_ov054_0225b7b8)[unk_804]; }
u8 *Unk_ov054_0225ba54::vfunc_6c() { return ((u8 **)data_ov054_0225b6e8)[unk_804]; }

BOOL Unk_ov054_0225ba54::vfunc_0c() {
    if (!func_0202e360()) {
        return FALSE;
    }
    if (unk_804 == 0) {
        func_02034d84(0x55);
    } else if (unk_804 == 1) {
        if (!func_ov054_02258e34(this)) {
            func_02034d84(0x56);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    u32 r = func_0209750c();
    if (func_ov054_02258e34(this)) {
        if (func_020a62a0()) {
            func_ov054_0225aef4(2);
        } else {
            func_ov054_0225aef4(9);
        }
    } else {
        if (func_020a032c() && func_02098044(r, 9) == 0) {
            func_ov054_0225aef4(0);
        } else {
            func_ov054_0225aef4(2);
        }
    }
    unk_800 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (unk_804 == 0) {
        func_02034e10(0x11, 0x55, 0x7f, 0);
    } else if (unk_804 == 1) {
        if (!func_ov054_02258e34(this)) {
            func_02034e10(0x11, 0x56, 0x7f, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov054_0225ba54::vfunc_04() {
    Unk_ov054_0225b0ac_Local l;
    Unk_ov054_0225ba54_Vec vec;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov054_0225a928(&unk_658, this);
    if (func_ov054_02258e34(this)) {
        BOOL m;
        if (func_0204b2d4(&unk_ea)) {
            l.unk_04 = data_ov054_0225b35c[0];
            if (func_0204b25c(&unk_ea) == func_0204b25c(&l.unk_04)) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        } else {
            if (unk_ea == data_ov054_0225b35c[0]) {
                m = TRUE;
            } else {
                m = FALSE;
            }
        }
        if (m) {
            unk_804 = 0;
            unk_808 = 1;
            unk_5c = data_ov054_0225b3ac[1].a;
            unk_60 = data_ov054_0225b3ac[1].b;
            unk_64 = data_ov054_0225b3ac[1].c;
            l.unk_06[0] = 0;
            l.unk_06[1] = 0;
            l.unk_06[2] = 0;
            vec.x = data_ov054_0225b3ac[0].a;
            vec.y = data_ov054_0225b3ac[0].b;
            vec.z = data_ov054_0225b3ac[0].c;
            func_02002cf8(0x7a, data_ov054_0225b35c[1], &vec, &l.unk_06[0], this);
        } else {
            unk_804 = 1;
            unk_808 = 0;
            unk_5c = data_ov054_0225b3ac[0].a;
            unk_60 = data_ov054_0225b3ac[0].b;
            unk_64 = data_ov054_0225b3ac[0].c;
        }
    } else {
        func_0209cf18(&l);
        u8 b = l.unk_01;
        unk_804 = 0;
        if (!func_020a032c()) {
            if (b >= 0x16 || b < 7) {
                unk_804 = 1;
            }
        }
        func_0201a8d0(&unk_350, 2, 0x399, 0xcc, 0x133);
        l.unk_02 = data_ov054_0225b35c[unk_804];
        func_0201bda8(&l.unk_02);
        unk_ea = data_ov054_0225b35c[unk_804];
    }
    func_0203e468(0x5000);
    unk_80e = data_020c6cc8;
    return TRUE;
}

extern "C" Unk_ov054_0225ba54 *func_ov054_0225b228() { return new Unk_ov054_0225ba54; }
