#include "types.h"
#include "Unk_020d8c7c.h"

#pragma opt_loop_invariants off

class Unk_ov084_02271ddc;
class Unk_ov084_02271e6c;

struct Unk_020a71d0 {
    u32 unk_00[0xd];
    Unk_020a71d0();
    ~Unk_020a71d0();
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
s32 func_020991fc();
void *func_020991e4();
void *func_0209888c(void *p);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_0201578c(void *p, u16 *q, s32 a, s32 b);
u32 func_02063b8c(u32 n);
void func_020b35f8(void *o, u8 *c, s32 a);
void func_0203ce4c(void *p, void *o);
void func_020656dc(void *obj, u8 *c, void *str, void *d44, void *d40, void *x);
u32 func_0204b318(u32 a, u32 b);
void *func_020986c8(void *p);
void func_0203c41c(void *p, u16 *q, s32 a);
void *func_020850e0();
void func_020851a4(void *p, s32 a);
s32 func_020851bc(void *p, s32 a);
void *func_0209868c(void *p);
u32 func_02087b8c(void *p);
void func_02087b4c(void *p);
s32 func_0209411c(void *p);
u32 func_020a0414();
void func_020947c0(u16 *out, u32 v);
void func_0209d498(void *p);
s32 func_0209ce68(u32 a, u32 b, s32 c, s32 d);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e3a4(void *p);
BOOL func_0202e514(void *p);
void func_0203d67c(void *p);
void func_02085784(void *p, s32 a);
void func_0209cf88(u8 *p);
s32 func_0201bcbc(void *p, void *q);
extern u16 data_020c6cc8;
extern u8 data_ov084_02271d88[];
extern u8 data_ov084_02271db8[];
extern u8 data_ov084_02271d40[];
extern u8 data_ov084_02271d44[];
extern u8 data_ov084_02271f18[];
extern u8 data_ov084_02271f28[];
extern u8 data_ov084_02271f38[];
extern u8 data_ov084_02271cbc[];
extern u8 data_021ed24c[];
}

struct Unk_ov084_02271478_Ent {
    s32 a;
    s32 b;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

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

struct Unk_ov084_022717ac_Out {
    u8 *a;
    u8 b;
};

class Unk_ov084_02271ddc : public Unk_020d8b38 {
public:
    Unk_ov084_02271ddc();
    virtual ~Unk_ov084_02271ddc();
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
    virtual void vfunc_78(Unk_ov084_022717ac_Out *out);

    void func_ov084_02271920(Unk_ov084_02271e6c *owner);

    Unk_ov084_02271e6c *unk_ac;
    s32 unk_b0;
    u16 unk_b4;
    u8 pad_b6[2];
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
    void func_02053848(s32 a, s32 b);
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
struct Unk_02016350 {
    u8 unk_00[0x1c];
    Unk_02016350();
    ~Unk_02016350();
    void func_0201610c(void *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
};
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

class Unk_ov084_02271e6c : public Unk_020d8bc8 {
public:
    Unk_ov084_02271e6c() {}
    virtual ~Unk_ov084_02271e6c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov084_022719a0();
    BOOL func_ov084_022719a4();
    BOOL func_ov084_022719d0();
    BOOL func_ov084_02271a08();
    BOOL func_ov084_02271a0c();
    void func_ov084_02271a40(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov084_02271ddc unk_658;
    u8 unk_710;
};

struct Unk_ov084_02271a40_Ent {
    BOOL (Unk_ov084_02271e6c::*enter)();
    BOOL (Unk_ov084_02271e6c::*exit)();
};

extern "C" {
extern Unk_ov084_02271a40_Ent data_ov084_02271f60[];
extern Unk_ov084_02271a40_Ent data_ov084_02271f68[];
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov084_02271e6c::~Unk_ov084_02271e6c() {}

void Unk_ov084_02271e6c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov084_02271a40(1);
        break;
    case 8:
        func_ov084_02271a40(0);
        break;
    }
}

BOOL Unk_ov084_02271e6c::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov084_02271ddc::vfunc_18() {
    s32 t = func_02015a5c()->func_020aa514();
    u8 buf[6];
    u16 h[2];
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        u8 *s = data_ov084_02271f28;
        switch (unk_1e) {
        case 0:
            if (t == 0) {
                if (unk_b0 >= 0) {
                    func_02099064(unk_b0);
                    h[0] = 0x37e0;
                    func_02014ce4(this, &h[0], 0, 5, 0);
                }
                msg = 2;
            }
            break;
        }
        if (msg != 0xff) {
            buf[1] = msg;
            unk_3c->func_02067a84(&buf[1], s);
        }
    } else {
        if (unk_1e == 7 && t == 0) {
            msg = 0xc;
            if (func_020991fc() != -1) {
                void *obj = func_020991e4();
                if (obj != NULL) {
                    msg = 9;
                    void *g = func_0209750c();
                    buf[0] = 2;
                    Unk_020a71d0 o;
                    u32 base = func_02063b8c(4) + 8;
                    s32 i = 0;
                    u32 v = base;
                loop0:
                    buf[0] = v;
                    v = (u32)&((Unk_ov084_02271478_Ent *)data_ov084_02271cbc)[i];
                    func_020b35f8(&o, &buf[0], ((Unk_ov084_02271478_Ent *)data_ov084_02271cbc)[i].a);
                    func_0203ce4c((void *)((Unk_ov084_02271478_Ent *)v)->b, &o);
                    v = (base - 8) * 4;
                    v = v + func_02063b8c(4);
                    v = v + i * 16;
                    i++;
                    if (i < 4) goto loop0;
                    buf[0] = 1;
                    func_020656dc(obj, &buf[0], data_ov084_02271f38, data_ov084_02271d44, data_ov084_02271d40,
                                  func_0209888c(g));
                    if (g != NULL) {
                        h[1] = func_0204b318(0x1d, 4);
                        func_0203c41c(func_020986c8(g), &h[1], 0);
                    }
                    func_020851a4(func_020850e0(), 3);
                }
            }
        }
        if (msg != 0xff) {
            buf[4] = msg;
            unk_3c->func_02067a84(&buf[4], data_ov084_02271f18);
        }
    }
}

void Unk_ov084_02271ddc::vfunc_14() {
    u8 b;
    u8 b2;
    u16 h[7];
    u8 *s = data_ov084_02271f18;
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            h[1] = 0x1559;
            func_02014e60(this, &h[1], 0, 5, 0);
            h[2] = 0x1559;
            func_02099014(&h[2], 0);
            b = 4;
            unk_3c->func_02067a84(&b, data_ov084_02271f28);
        }
    } else {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
        case 6: {
            s32 r5 = func_02098ffc();
            h[0] = 0xfff1;
            h[3] = 0x137e;
            s32 t1 = func_02098eb0(&h[3]);
            BOOL f1 = FALSE;
            if (t1 == -1) f1 = TRUE;
            if (f1) {
                h[4] = 0x137f;
                s32 t2 = func_02098eb0(&h[4]);
                BOOL f2 = FALSE;
                if (t2 == -1) f2 = TRUE;
                if (f2) {
                    h[0] = 0x137e;
                    if (func_02063b8c(2) == 0) {
                        h[0] = 0x137f;
                    }
                    goto after;
                }
            }
            h[5] = 0x137e;
            {
                s32 t3 = func_02098eb0(&h[5]);
                BOOL f3 = FALSE;
                if (t3 == -1) f3 = TRUE;
                if (f3) {
                    h[0] = 0x137e;
                } else {
                    h[0] = 0x137f;
                }
            }
        after:
            if (r5 >= 0) {
                void *g2 = func_0209868c(func_0209750c());
                if (func_02087b8c(g2) < 10) {
                    func_02087b4c(g2);
                    s32 r = func_0209411c(func_0209888c(func_0209750c()));
                    func_02014e60(this, &h[0], 0, 5, 0);
                    func_02099014(&h[0], 0);
                    func_0201578c(this, &h[0], 0, 7);
                    if (r == 0) {
                        msg = 3;
                    } else {
                        msg = 4;
                    }
                } else {
                    msg = 0xb;
                }
            } else {
                func_0201578c(this, &h[0], 0, 7);
                msg = 5;
            }
            break;
        }
        case 9:
            h[6] = 0x1565;
            func_02014e60(this, &h[6], 0, 5, 0);
            msg = 0xa;
            break;
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->func_02067a84(&b2, s);
        }
    }
}

static inline BOOL Unk_ov084_022717ac_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_ov084_02271ddc::vfunc_78(Unk_ov084_022717ac_Out *out) {
    u16 h[4];
    u32 loc[2];
    func_0209865c(func_0209750c());
    out->a = data_ov084_02271f18;
    if (unk_b0 == -1) {
        h[1] = 0x37e0;
        unk_b0 = func_02098eb0(&h[1]);
        if (unk_b0 >= 0) {
            out->a = data_ov084_02271f28;
            out->b = 0;
            return;
        }
    }
    if (func_0202e1cc(0x1e, 1)) {
        func_020947c0(&h[0], func_020a0414());
        h[2] = 0x137e;
        s32 t1 = func_02098eb0(&h[2]);
        BOOL f1 = FALSE;
        if (t1 == -1) f1 = TRUE;
        if (!f1) {
            h[3] = 0x137f;
            s32 t2 = func_02098eb0(&h[3]);
            BOOL f2 = FALSE;
            if (t2 == -1) f2 = TRUE;
            if (!f2) goto skip;
        }
        if (!Unk_ov084_022717ac_Rng(&h[0], 0x137e, 0x137f)) {
            out->b = 6;
            return;
        }
    skip:
        if (func_020851bc(func_020850e0(), 3) == 0) {
            out->b = 7;
        } else {
            out->b = func_02063b8c(4) + 0xd;
        }
    } else {
        if (func_020851bc(func_020850e0(), 2) == 0) {
            func_020851a4(func_020850e0(), 2);
            if (unk_ac->unk_710 == 1) {
                out->b = 0;
            } else {
                loc[0] = 0;
                loc[1] = 0;
                func_0209d498(&loc[0]);
                s32 r = func_0209ce68(((u8 *)loc)[5], ((u8 *)loc)[4], 6, 5);
                if (r == -1) {
                    if (unk_ac->unk_710 <= 3) {
                        out->b = 1;
                    } else {
                        out->b = 2;
                    }
                } else {
                    if (unk_ac->unk_710 <= 4) {
                        out->b = 1;
                    } else {
                        out->b = 2;
                    }
                }
            }
        }
    }
}

void Unk_ov084_02271ddc::func_ov084_02271920(Unk_ov084_02271e6c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

Unk_ov084_02271ddc::~Unk_ov084_02271ddc() {}

Unk_ov084_02271ddc::Unk_ov084_02271ddc() {
    unk_b4 = 0xfff1;
}

BOOL Unk_ov084_02271e6c::func_ov084_022719a0() { return TRUE; }

BOOL Unk_ov084_02271e6c::func_ov084_022719a4() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov084_02271a40(2);
    }
    return TRUE;
}

BOOL Unk_ov084_02271e6c::func_ov084_022719d0() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov084_02271e6c::func_ov084_02271a08() { return TRUE; }

BOOL Unk_ov084_02271e6c::func_ov084_02271a0c() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov084_02271e6c::func_ov084_02271a40(s32 state) {
    BOOL ok = TRUE;
    if (data_ov084_02271f60[state].enter != NULL) {
        ok = (this->*data_ov084_02271f60[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov084_02271e6c::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov084_02271f68[unk_654].enter != NULL) {
        result = (this->*data_ov084_02271f60[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov084_02271e6c::vfunc_70() { return data_ov084_02271d88; }

u8 *Unk_ov084_02271e6c::vfunc_6c() { return data_ov084_02271db8; }

BOOL Unk_ov084_02271e6c::vfunc_00() {
    if (func_0202e3a4(this) == 0) {
        return FALSE;
    }
    func_ov084_02271a40(0);
    func_02085784(data_021ed24c, 0);
    unk_334.func_0201610c(this, 0x140, 0, 0, 0x1000, 0, 1);
    unk_ec.func_02053848(0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    u8 buf[8];
    func_0209cf88(buf);
    s32 n = buf[0] - 1;
    u8 *q = &unk_710;
    *q = n / 7;
    *q = *q + 1;
    return TRUE;
}

BOOL Unk_ov084_02271e6c::vfunc_04() {
    if (func_0202e514(this) == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov084_02271920(this);
    return TRUE;
}

extern "C" Unk_ov084_02271e6c *func_ov084_02271ba4() {
    return new Unk_ov084_02271e6c();
}
