#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov083_02271c4c;
class Unk_ov083_02271bbc;

struct Unk_ov083_Vec {
    s32 x, y, z;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_ov083_02271620_Out {
    u32 a;
    u8 b;
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
void *func_0209868c(void *p);
void func_02087b24(void *p);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_0201578c(void *p, u16 *q, s32 a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL func_0201bcbc(void *p, void *q);
void func_0203d67c(void *p);
void func_020ac7cc(u16 *p);
void func_0209d498(void *p);
void *func_020850e0();
BOOL func_020851bc(void *p, s32 v);
void func_020851a4(void *p, s32 v);
void func_02085290(void *p);
void func_02085900(void *p, s32 v);
void func_0209e148(void *p, s32 v);
void func_020856a4(void *p, s32 v);
u32 func_0203f42c(s32 v);
void func_02053848(void *p, s32 a, s32 b);
void func_0201610c(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
extern u16 data_020c6cc8;
extern u8 data_ov083_02271b68[];
extern u8 data_ov083_02271b98[];
extern u8 data_ov083_02271cf8[];
extern u8 data_ov083_02271d08[];
extern u8 data_021ed24c[];
extern u8 data_021d7350[];
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

struct Unk_ov083_02271bbc_Fill {
    u16 a;
    u8 b;
    u8 c;
    u32 d;
};

class Unk_ov083_02271bbc : public Unk_020d8b38 {
public:
    Unk_ov083_02271bbc();
    virtual ~Unk_ov083_02271bbc();
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
    virtual void vfunc_78(Unk_ov083_02271620_Out *out);

    void func_ov083_022716e0(Unk_ov083_02271c4c *owner);

    Unk_ov083_02271c4c *unk_ac;
    s32 unk_b0;
    u16 unk_b4;
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
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
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

class Unk_ov083_02271c4c : public Unk_020d8bc8 {
public:
    Unk_ov083_02271c4c() {}
    virtual ~Unk_ov083_02271c4c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov083_02271760();
    BOOL func_ov083_02271764();
    BOOL func_ov083_02271790();
    s32 func_ov083_022717c8(s32 *p);
    BOOL func_ov083_022717d8();
    BOOL func_ov083_02271824();
    void func_ov083_02271858(s32 state);

    s32 unk_654;
    s32 unk_658;
    Unk_ov083_02271bbc unk_65c;
    u8 unk_714;
};

struct Unk_ov083_02271858_Ent {
    BOOL (Unk_ov083_02271c4c::*enter)();
    BOOL (Unk_ov083_02271c4c::*exit)();
};

extern "C" {
extern Unk_ov083_02271858_Ent data_ov083_02271d20[];
extern Unk_ov083_02271858_Ent data_ov083_02271d28[];
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov083_02271c4c::~Unk_ov083_02271c4c() {}

void Unk_ov083_02271c4c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(func_0201bc4c(4));
        func_ov083_02271858(1);
        break;
    case 8:
        func_ov083_02271858(0);
        break;
    }
}

BOOL Unk_ov083_02271c4c::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov083_02271bbc::vfunc_18() {
    u8 b1;
    u8 b2;
    u16 h;
    s32 t = func_02015a5c()->func_020aa514();
    u8 *s = data_ov083_02271cf8;
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        s = data_ov083_02271d08;
        if (unk_1e == 0 && t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                h = 0x37e0;
                func_02014ce4(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->func_02067a84(&b1, s);
        }
    } else {
        if (unk_1e == 0xa && t == 0) {
            if (func_02063b8c(3) == 0) {
                msg = 0xc;
            } else {
                msg = func_02063b8c(0xb) + 0x1c;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->func_02067a84(&b2, s);
        }
    }
}

void Unk_ov083_02271bbc::vfunc_14() {
    u8 b1;
    u8 b2;
    u16 h1, h2, h3;
    u8 *s = data_ov083_02271cf8;
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            h1 = 0x1559;
            func_02014e60(this, &h1, 0, 5, 0);
            h2 = 0x1559;
            func_02099014(&h2, 0);
            b1 = 4;
            unk_3c->func_02067a84(&b1, data_ov083_02271d08);
        }
    } else {
        if (unk_1e == 5 || unk_1e == 6 || unk_1e == 9) {
            if (!func_0202e1cc(0x1d, 1)) {
                func_02087b24(func_0209868c(func_0209750c()));
                if (func_02098ffc() >= 0) {
                    msg = 7;
                    func_020ac7cc(&h3);
                    unk_b4 = h3;
                }
            }
        }
        if (unk_1e == 7) {
            func_02014e60(this, &unk_b4, 0, 5, 0);
            func_02099014(&unk_b4, 0);
            func_0201578c(this, &unk_b4, 0, 7);
            msg = 8;
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->func_02067a84(&b2, s);
        }
    }
}

void Unk_ov083_02271bbc::vfunc_78(Unk_ov083_02271620_Out *out) {
    u16 h;
    u32 w[2];
    func_0209865c(func_0209750c());
    out->a = (u32)data_ov083_02271cf8;
    if (unk_b0 == -1) {
        h = 0x37e0;
        unk_b0 = func_02098eb0(&h);
        if (unk_b0 >= 0) {
            out->a = (u32)data_ov083_02271d08;
            out->b = 0;
            return;
        }
    }
    w[0] = 0;
    w[1] = 0;
    func_0209d498(w);
    {
        u32 v = ((u8 *)w)[2];
        if (v < 6 || v >= 0x12) {
            out->b = 0;
            return;
        }
    }
    if (!func_020851bc(func_020850e0(), 1)) {
        u32 c;
        func_020851a4(func_020850e0(), 1);
        c = *((u8 *)unk_ac + 0x714);
        if (c == 0) {
            out->b = 1;
        } else if (c >= 1 && c <= 5) {
            out->b = 2;
        } else {
            out->b = 3;
        }
    } else {
        out->b = 0xa;
    }
}

void Unk_ov083_02271bbc::func_ov083_022716e0(Unk_ov083_02271c4c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

Unk_ov083_02271bbc::~Unk_ov083_02271bbc() {}

Unk_ov083_02271bbc::Unk_ov083_02271bbc() : unk_b4(0xfff1) {}

BOOL Unk_ov083_02271c4c::func_ov083_02271760() { return TRUE; }

BOOL Unk_ov083_02271c4c::func_ov083_02271764() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov083_02271858(2);
    }
    return TRUE;
}

BOOL Unk_ov083_02271c4c::func_ov083_02271790() {
    void *p = unk_65c.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

s32 Unk_ov083_02271c4c::func_ov083_022717c8(s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL Unk_ov083_02271c4c::func_ov083_022717d8() {
    if (func_ov083_022717c8(&unk_654)) {
        return TRUE;
    }
    unk_654 = 0x258;
    u8 *const g = data_021ed24c;
    func_02085290(g);
    func_02085900(g, 3);
    func_0209e148(data_021d7350, 0xf);
    return TRUE;
}

BOOL Unk_ov083_02271c4c::func_ov083_02271824() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov083_02271c4c::func_ov083_02271858(s32 state) {
    BOOL ok = TRUE;
    if (data_ov083_02271d20[state].enter != NULL) {
        ok = (this->*data_ov083_02271d20[state].enter)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL Unk_ov083_02271c4c::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov083_02271d28[unk_658].enter != NULL) {
        result = (this->*data_ov083_02271d20[unk_658].exit)();
    }
    return result;
}

u8 *Unk_ov083_02271c4c::vfunc_70() { return data_ov083_02271b68; }

u8 *Unk_ov083_02271c4c::vfunc_6c() { return data_ov083_02271b98; }

BOOL Unk_ov083_02271c4c::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov083_02271858(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    unk_714 = func_0203f42c(0xe);
    func_020856a4(data_021ed24c, 0);
    return TRUE;
}

BOOL Unk_ov083_02271c4c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_65c);
    unk_65c.func_ov083_022716e0(this);
    return TRUE;
}

extern "C" Unk_ov083_02271c4c *func_ov083_022719a8() {
    return new Unk_ov083_02271c4c();
}
