#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov086_02271d4c;
class Unk_ov086_02271cbc;

struct Unk_ov086_Vec {
    s32 x, y, z;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c();
    ~Unk_02065dc8_Obj1c();
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
void *func_02099864(void *p);
void *func_0209a108(void *p);
void func_0209a10c(void *p);
u16 *func_0209ab94(void *p);
s32 func_0209ad68(void *p);
s32 func_0209abc4(void *p);
s32 func_0209a05c(void *p);
s32 func_0209a0dc(void *p, void *q);
void func_0209abb4(void *p, s32 v);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_0201578c(void *p, u16 *q, s32 a, s32 b);
void func_0206338c(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02063388(Unk_0202368c_Obj *o);
void func_02062f94(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ffa4(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_02002bdc(void *p, void *q);
BOOL func_0201bd84(s32 v);
void func_020e7518(void *p);
BOOL func_0201bcbc(void *p, void *q);
u32 func_020e7fa8(void *p);
extern u16 data_020c6cc8;
extern u8 data_ov086_02271df8[];
extern u8 data_ov086_02271e08[];
extern u8 data_ov086_02271e18[];
extern u8 data_ov086_02271c20[];
extern u8 data_ov086_02271c24[];
extern u8 data_ov086_02271c68[];
extern u8 data_ov086_02271c98[];
s32 func_0209cf88(void *p);
void func_0209d498(void *p);
s32 func_0209ccd0();
s32 func_020991fc();
void *func_020991e4();
void func_020a71d0(void *p);
void func_020a71b8(void *p);
void func_020b35f8(void *o, u8 *b, u32 t);
void func_0203ce4c(u32 a, void *o);
void *func_0209888c(...);
void func_020656dc(void *a, u8 *b, u8 *c, u8 *d, u8 *e, void *f);
s32 func_0204b318(s32 a, s32 b);
void *func_020986c8(void *p);
void func_0203c41c(void *a, u16 *b, s32 c);
void *func_020850e0();
void func_020851a4(void *p, s32 v);
s32 func_020851bc(void *p, s32 v);
void func_0203d67c(void *p);
void func_0201610c(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02053848(void *self, s32 a, s32 b);
BOOL func_0202e3a4();
BOOL func_0202e514();
extern u32 data_021c7c88[];
extern Unk_ov086_Vec data_021f4880;
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    void func_02015ab0(void *p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
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

struct Unk_ov086_022716b0_Out {
    u32 a;
    u8 b;
};

class Unk_ov086_02271cbc : public Unk_020d8b38 {
public:
    Unk_ov086_02271cbc();
    virtual ~Unk_ov086_02271cbc();
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
    virtual void vfunc_78(Unk_ov086_022716b0_Out *out);

    void func_ov086_0227182c(Unk_ov086_02271d4c *owner);

    Unk_ov086_02271d4c *unk_ac;
    s32 unk_b0;
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
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov086_Vec *func_0201a978();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
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
    void func_020135bc();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    BOOL func_02019790();
    s32 func_020197a8();
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
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
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
    void *func_0201bc4c(u32 v);

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

class Unk_ov086_02271d4c : public Unk_020d8bc8 {
public:
    Unk_ov086_02271d4c() {}
    virtual ~Unk_ov086_02271d4c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov086_022718a0();
    BOOL func_ov086_022718a4();
    BOOL func_ov086_022718d0();
    BOOL func_ov086_02271908();
    BOOL func_ov086_0227190c();
    void func_ov086_02271940(s32 state);

    u8 unk_651;
    s32 unk_654;
    Unk_ov086_02271cbc unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov086_02271d4c::~Unk_ov086_02271d4c() {}

void Unk_ov086_02271d4c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov086_02271940(1);
        break;
    case 8:
        func_ov086_02271940(0);
        break;
    }
}

BOOL Unk_ov086_02271d4c::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov086_02271cbc::vfunc_18() {
    u8 b;
    u16 h;
    u8 *s;
    s32 t = func_02015a5c()->func_020aa514();
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        s = data_ov086_02271df8;
        if (unk_1e == 0 && t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                h = 0x37e0;
                func_02014ce4(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b = msg;
            unk_3c->func_02067a84(&b, s);
        }
    }
}

struct Unk_ov086_022716b0_A {
    u8 b0, b1;
    u8 pad[4];
};
struct Unk_ov086_022716b0_B {
    u8 b0, b1, b2, b3;
    u32 w;
};

void Unk_ov086_02271cbc::vfunc_78(Unk_ov086_022716b0_Out *out) {
    u16 h;
    Unk_ov086_022716b0_A a;
    Unk_ov086_022716b0_B t;
    BOOL f;
    func_0209865c(func_0209750c());
    out->a = (u32)data_ov086_02271e08;
    if (unk_b0 == -1) {
        h = 0x37e0;
        unk_b0 = func_02098eb0(&h);
        if (unk_b0 >= 0) {
            out->a = (u32)data_ov086_02271df8;
            out->b = 0;
            return;
        }
    }
    func_0209cf88(&a);
    *(u32 *)&t = 0;
    t.w = 0;
    func_0209d498(&t);
    f = FALSE;
    if (a.b1 == 0xc) {
        if (func_0209ccd0() == 0) {
            out->b = func_02063b8c(3);
        } else if (func_0209ccd0() == 1) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 2;
            }
        } else if (t.b2 < 0x17) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 4;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x1e) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 6;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x37) {
            out->b = func_02063b8c(3) + 9;
        } else if (t.b2 == 0x17 && t.b1 < 0x3b) {
            out->b = func_02063b8c(2) + 0xc;
            f = TRUE;
        } else {
            out->b = func_02063b8c(2) + 0xe;
            f = TRUE;
        }
    } else if (t.b2 < 6) {
        out->b = func_02063b8c(3) + 0x10;
        f = TRUE;
    } else if (func_020851bc(func_020850e0(), 4) != 0) {
        out->b = func_02063b8c(3) + 0x16;
        f = TRUE;
    } else {
        out->b = 0x13;
        f = TRUE;
    }
    if (!f) {
        if (func_02098ffc() != -1) {
            if (func_02063b8c(2) == 0) {
                out->b = func_02063b8c(3) + 0x19;
            }
        }
    }
}

struct Unk_ov086_022714e4_Ent {
    u32 a, b;
};
extern "C" Unk_ov086_022714e4_Ent data_ov086_02271b90[];

void Unk_ov086_02271cbc::vfunc_14() {
    struct {
        u8 bb[6];
        u16 h1, h2, h3, h4, h5, h6;
    } l;
    u32 obj[14];
    Unk_ov086_022714e4_Ent *e;
    u8 msg = 0xff;
    void *p;
    void *g;
    u32 v, base;
    s32 i;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            l.h1 = 0x1559;
            func_02014e60(this, &l.h1, 0, 5, 0);
            l.h2 = 0x1559;
            func_02099014(&l.h2, 0);
            l.bb[1] = 4;
            unk_3c->func_02067a84(&l.bb[1], data_ov086_02271df8);
        }
    } else {
        s32 r = func_020991fc();
        switch (unk_1e) {
        case 0x13:
            msg = 0x14;
            if (r != -1) {
                p = func_020991e4();
                if (p != NULL) {
                    g = func_0209750c();
                    l.bb[0] = 2;
                    func_020a71d0(obj);
                    v = func_02063b8c(4);
                    i = 0;
                    base = v << 2;
                    do {
                        l.bb[0] = v;
                        e = &data_ov086_02271b90[i];
                        func_020b35f8(obj, &l.bb[0], data_ov086_02271b90[i].a);
                        func_0203ce4c(e->b, obj);
                        v = base + func_02063b8c(4);
                        v = v + (i << 4);
                        i++;
                    } while (i < 4);
                    l.bb[0] = 0;
                    func_020656dc(p, &l.bb[0], data_ov086_02271e18, data_ov086_02271c20, data_ov086_02271c24, func_0209888c(g));
                    if (g != NULL) {
                        l.h3 = func_0204b318(0x1d, 4);
                        func_0203c41c(func_020986c8(g), &l.h3, 0);
                    }
                    func_020851a4(func_020850e0(), 4);
                    l.h4 = 0x1565;
                    func_02014e60(this, &l.h4, 0, 5, 0);
                    msg = 0x15;
                    func_020a71b8(obj);
                }
            }
            break;
        case 0x19:
        case 0x1a:
        case 0x1b:
            l.h5 = 0x137d;
            func_02014e60(this, &l.h5, 0, 5, 0);
            l.h6 = 0x137d;
            func_02099014(&l.h6, 0);
            msg = 0x1c + func_02063b8c(3);
            break;
        }
        if (msg != 0xff) {
            l.bb[4] = msg;
            unk_3c->func_02067a84(&l.bb[4], data_ov086_02271e08);
        }
    }
}

Unk_ov086_02271cbc::~Unk_ov086_02271cbc() {}

Unk_ov086_02271cbc::Unk_ov086_02271cbc() {}

void Unk_ov086_02271cbc::func_ov086_0227182c(Unk_ov086_02271d4c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

BOOL Unk_ov086_02271d4c::func_ov086_022718a0() { return TRUE; }

BOOL Unk_ov086_02271d4c::func_ov086_022718a4() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov086_02271940(2);
    }
    return TRUE;
}

BOOL Unk_ov086_02271d4c::func_ov086_022718d0() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov086_02271d4c::func_ov086_02271908() { return TRUE; }

BOOL Unk_ov086_02271d4c::func_ov086_0227190c() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

struct Unk_ov086_02271940_Ent {
    BOOL (Unk_ov086_02271d4c::*enter)();
    BOOL (Unk_ov086_02271d4c::*exit)();
};
extern "C" Unk_ov086_02271940_Ent data_ov086_02271e40[];

void Unk_ov086_02271d4c::func_ov086_02271940(s32 state) {
    BOOL ok = TRUE;
    if (data_ov086_02271e40[state].enter != NULL) {
        ok = (this->*data_ov086_02271e40[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov086_02271d4c::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov086_02271e40[unk_654].exit != NULL) {
        result = (this->*data_ov086_02271e40[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov086_02271d4c::vfunc_70() { return data_ov086_02271c68; }

u8 *Unk_ov086_02271d4c::vfunc_6c() { return data_ov086_02271c98; }

BOOL Unk_ov086_02271d4c::vfunc_00() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    func_ov086_02271940(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

BOOL Unk_ov086_02271d4c::vfunc_04() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov086_0227182c(this);
    return TRUE;
}

extern "C" Unk_ov086_02271d4c *func_ov086_02271a78() {
    return new Unk_ov086_02271d4c();
}
