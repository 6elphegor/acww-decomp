#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov080_02271cac;
class Unk_ov080_02271c1c;

extern "C" {
void *func_0209750c();
u32 func_02063b8c(u32 n);
BOOL func_0201bcbc(void *p, void *q);
BOOL func_0203d67c(void *p);
void func_0203d948();
BOOL func_0203c338();
BOOL func_0203c31c();
void func_02053848(void *self, s32 a, s32 b);
void func_0201610c(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020aa514();
s32 func_02098044(void *p, u32 a);
void func_0209801c(void *p, u32 a);
BOOL func_02099014(u16 *p, u32 a);
void func_02099064(s32 a);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void *func_02097868(void *tbl, s32 i);
BOOL func_02098a48(void *p);
extern u16 data_020c6cc8;
extern u8 data_021d735c[];
extern u8 data_ov080_02271bc8[];
extern u8 data_ov080_02271bf8[];
extern u8 data_ov080_02271d58[];
extern u8 data_ov080_02271d68[];
extern u8 data_ov080_02271d7c[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    void func_02015a5c();
    void func_02014e60(u16 *p, u32 a, u32 b, u32 c);
    void func_02014ce4(u16 *p, u32 a, u32 b, u32 c);
    void func_0201578c(u16 *p, u32 a, u32 b);
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

struct Unk_ov080_02271648_Out {
    u8 *a;
    u8 b;
};

class Unk_ov080_02271c1c : public Unk_020d8b38 {
public:
    Unk_ov080_02271c1c();
    virtual ~Unk_ov080_02271c1c();
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
    virtual void vfunc_78(Unk_ov080_02271648_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov080_022717ac(Unk_ov080_02271cac *owner);

    Unk_ov080_02271cac *unk_ac;
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
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov080_02271cac : public Unk_020d8bc8 {
public:
    Unk_ov080_02271cac() {}
    virtual ~Unk_ov080_02271cac();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov080_02271820();
    BOOL func_ov080_02271824();
    BOOL func_ov080_02271850();
    BOOL func_ov080_02271888();
    BOOL func_ov080_0227188c();
    void func_ov080_022718c0(s32 state);

    s32 unk_654;
    Unk_ov080_02271c1c unk_658;
};

struct Unk_ov080_022718c0_Ent {
    BOOL (Unk_ov080_02271cac::*enter)();
    BOOL (Unk_ov080_02271cac::*exit)();
};

extern "C" {
extern Unk_ov080_022718c0_Ent data_ov080_02271da0[];
}

struct Unk_ov080_02271648_Buf {
    u8 t[2];
    u16 v[8];
};

struct Unk_ov080_02271478_Buf {
    u8 t;
    u8 pad_01;
    u16 v;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov080_02271cac::~Unk_ov080_02271cac() {}

void Unk_ov080_02271cac::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov080_022718c0(1);
        break;
    case 8:
        func_ov080_022718c0(0);
        break;
    }
}

BOOL Unk_ov080_02271cac::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov080_02271c1c::vfunc_18() {
    Unk_ov080_02271478_Buf buf;
    func_02015a5c();
    s32 t = func_020aa514();
    void *g = func_0209750c();
    u8 r = 0xff;
    if (unk_b0 >= 0) {
        u8 *const str = data_ov080_02271d58;
        if (unk_1e == 0 && t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                buf.v = 0x37e0;
                this->func_02014ce4(&buf.v, 0, 5, 0);
            }
            r = 2;
        }
        if (r != 0xff) {
            buf.t = r;
            unk_3c->func_02067a84(&buf.t, str);
        }
    } else {
        func_02098044(g, 1);
    }
}

void Unk_ov080_02271c1c::vfunc_14() {
    Unk_ov080_02271648_Buf buf;
    u32 r = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            buf.v[0] = 0x1559;
            this->func_02014e60(&buf.v[0], 0, 5, 0);
            buf.v[1] = 0x1559;
            func_02099014(&buf.v[1], 0);
            buf.t[0] = 4;
            unk_3c->func_02067a84(&buf.t[0], data_ov080_02271d58);
        }
    } else {
        void *g = func_0209750c();
        u8 *str;
        if (func_02098044(g, 1)) {
            str = data_ov080_02271d68;
        } else {
            str = data_ov080_02271d7c;
            switch (unk_1e) {
            case 0:
            case 2:
                buf.v[2] = 0x1375;
                if (func_02099014(&buf.v[2], 0)) {
                    buf.v[3] = 0x1375;
                    this->func_02014e60(&buf.v[3], 0, 5, 0);
                    func_0209801c(g, 0x21);
                    buf.v[4] = 0x1375;
                    this->func_0201578c(&buf.v[4], 0, 7);
                    r = 1;
                }
                break;
            case 3:
            case 5:
                buf.v[5] = 0x1377;
                if (func_02099014(&buf.v[5], 0)) {
                    buf.v[6] = 0x1377;
                    this->func_02014e60(&buf.v[6], 0, 5, 0);
                    func_0209801c(g, 0x22);
                    buf.v[7] = 0x1377;
                    this->func_0201578c(&buf.v[7], 0, 7);
                    r = 4;
                }
                break;
            }
        }
        if (r != 0xff) {
            buf.t[1] = r;
            unk_3c->func_02067a84(&buf.t[1], str);
        }
    }
}

void Unk_ov080_02271c1c::vfunc_78(Unk_ov080_02271648_Out *out) {
    void *g = func_0209750c();
    if (func_02098044(g, 1)) {
        out->a = data_ov080_02271d68;
        if (func_02098044(g, 0xd) == 0) {
            out->b = 0;
            func_0209801c(g, 0xd);
        } else {
            out->b = func_02063b8c(4) + 3;
        }
        func_0209801c(g, 0xa);
    } else {
        if (unk_b0 == -1) {
            u16 v = 0x37e0;
            unk_b0 = func_02098eb0(&v);
            if (unk_b0 >= 0) {
                out->a = data_ov080_02271d58;
                out->b = 0;
                return;
            }
        }
        out->a = data_ov080_02271d7c;
        if (func_02098044(g, 0x21) == 0 && func_0203c338()) {
            out->b = 0;
            if (func_02098ffc() < 0) {
                out->b = 9;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = func_02097868(data_021d735c, i);
                    if (p != NULL && func_02098a48(p) && p != g && func_02098044(p, 0x21)) {
                        out->b = 2;
                        break;
                    }
                }
            }
        } else if (func_02098044(g, 0x22) == 0 && func_0203c31c()) {
            out->b = 3;
            if (func_02098ffc() < 0) {
                out->b = 0xa;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = func_02097868(data_021d735c, i);
                    if (p != NULL && func_02098a48(p) && p != g && func_02098044(p, 0x22)) {
                        out->b = 5;
                        break;
                    }
                }
            }
        } else {
            out->b = func_02063b8c(3) + 6;
        }
    }
}

void Unk_ov080_02271c1c::func_ov080_022717ac(Unk_ov080_02271cac *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

Unk_ov080_02271c1c::~Unk_ov080_02271c1c() {}

Unk_ov080_02271c1c::Unk_ov080_02271c1c() {}

BOOL Unk_ov080_02271cac::func_ov080_02271820() { return TRUE; }

BOOL Unk_ov080_02271cac::func_ov080_02271824() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov080_022718c0(2);
    }
    return TRUE;
}

BOOL Unk_ov080_02271cac::func_ov080_02271850() {
    void *p = unk_658.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov080_02271cac::func_ov080_02271888() { return TRUE; }

BOOL Unk_ov080_02271cac::func_ov080_0227188c() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov080_02271cac::func_ov080_022718c0(s32 state) {
    BOOL ok = TRUE;
    if (data_ov080_02271da0[state].enter != NULL) {
        ok = (this->*data_ov080_02271da0[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov080_02271cac::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov080_02271da0[unk_654].exit != NULL) {
        result = (this->*data_ov080_02271da0[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov080_02271cac::vfunc_70() { return data_ov080_02271bc8; }

u8 *Unk_ov080_02271cac::vfunc_6c() { return data_ov080_02271bf8; }

BOOL Unk_ov080_02271cac::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov080_02271cac::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov080_022718c0(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    if (func_02098044(func_0209750c(), 1) == 0) {
        func_0203d948();
    }
    return TRUE;
}

BOOL Unk_ov080_02271cac::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov080_022717ac(this);
    return TRUE;
}

extern "C" Unk_ov080_02271cac *func_ov080_02271a20() {
    return new Unk_ov080_02271cac();
}
