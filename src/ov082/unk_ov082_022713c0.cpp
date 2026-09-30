#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov082_022721dc;
class Unk_ov082_0227214c;

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_02094030_Obj {
    u32 v[8];
    Unk_02094030_Obj();
    ~Unk_02094030_Obj();
};

struct Unk_ov082_022718b0_Rec {
    u32 a, b;
};

extern "C" {
void func_02014a4c(void *p);
void func_02014e60(void *p, u16 *q, u32 a, u32 b, u32 c);
void func_02014ce4(void *p, u16 *q, u32 a, u32 b, u32 c);
void func_0201578c(void *p, u16 *q, u32 a, u32 b);
void func_0201517c(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void func_020151d0(void *p, s32 v);
void func_02014f74(void *p);
void func_02015958(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
void func_020157e8(void *p, void *q, u32 a);
void *func_02015a5c(void *p);
s32 func_020aa514(void *p);
u32 func_0201bcbc(void *p, void *q);
s32 func_02094218(void *p);
s32 func_020941e8(void *p, void *q);
s32 func_020030b4(void *p);
void func_02002fc8(void *p, void *q);
void *func_020858ac(void *p);
void *func_0208586c(void *p);
s32 func_02085810(void *p);
void func_02085818(u16 *out, void *p);
void func_02085820(void *p, u16 *q);
void func_02085814(void *p, s32 v);
void func_020858b0(void *p, void *q);
void func_02085900(void *p, u32 v);
void func_02087b94(void *p, s32 v);
void *func_0209750c();
void *func_0209868c(void *p);
void *func_0209888c(void *p);
void *func_0209865c(void *p);
void func_0209e148(void *p, u32 v);
void func_0206338c(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02062f94(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02063388(Unk_0202368c_Obj *o);
void func_0203d67c(void *p);
void func_020947c0(u16 *out, void *p);
void *func_02094348();
void func_0209d498(void *p);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void func_02099064(s32 v);
void func_02099014(u16 *p, s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_02099048();
s32 func_02085618(u16 *p);
s32 func_02128930(void *a, void *b, u32 n);
extern u8 data_ov082_02272288[];
extern u8 data_ov082_02272298[];
extern u8 data_021ed24c[];
extern u8 data_021d7350[];
extern u32 data_0213a740[];
extern u16 data_020c6cc8;
BOOL func_ov082_02271b28(u16 *p, s32 x);
}

struct Unk_020660f8 {
    s32 func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_78(void *a);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(void *v);
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

static inline BOOL Unk_ov082_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov082_Neg(s32 v) {
    if (v < 0) {
        return TRUE;
    }
    return FALSE;
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

class Unk_ov082_0227214c : public Unk_020d8b38 {
public:
    typedef void (Unk_ov082_0227214c::*Fn)();

    Unk_ov082_0227214c();
    virtual ~Unk_ov082_0227214c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov082_022718b0_Rec *out);
    virtual void vfunc_84();

    s32 func_ov082_022717ac();
    void func_ov082_022719d8(Unk_ov082_022721dc *owner);
    void func_ov082_02271a60();
    void func_ov082_02271a68();
    void func_ov082_02271b50(s32 i);
    void func_ov082_02271b60(s32 i);
    void func_ov082_02271b70(Fn *slot, s32 i);

    Unk_ov082_022721dc *unk_ac;
    Fn unk_b0;
    Fn unk_b8;
    u16 unk_c0;
    u8 unk_c2;
    s32 unk_c4;
};

class Unk_ov082_022721dc : public Unk_020d8bc8 {
public:
    Unk_ov082_022721dc() {}
    virtual ~Unk_ov082_022721dc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov082_02271c44();
    BOOL func_ov082_02271c48();
    BOOL func_ov082_02271c74();
    BOOL func_ov082_02271cac();
    BOOL func_ov082_02271cb0();
    void func_ov082_02271ce4(s32 state);

    u8 unk_651;
    u8 pad_652[6];
    Unk_ov082_0227214c unk_658;
    s32 unk_720;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov082_022721dc::~Unk_ov082_022721dc() {}

void Unk_ov082_022721dc::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov082_02271ce4(1);
        break;
    case 8:
        func_ov082_02271ce4(0);
        break;
    }
}

BOOL Unk_ov082_022721dc::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov082_0227214c::vfunc_18() {
    u8 b1, b2;
    u16 h;
    s32 t = func_020aa514(func_02015a5c(this));
    u8 *s = data_ov082_02272288;
    u8 msg = 0xff;
    if (unk_c4 >= 0) {
        s = data_ov082_02272298;
        if (unk_1e == 0 && t == 0) {
            if (unk_c4 >= 0) {
                func_02099064(unk_c4);
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
        if (unk_1e == 8) {
            if (t != 0) {
                s32 r = func_ov082_022717ac();
                if (r == 0) {
                    msg = 9;
                } else if (r > 0) {
                    msg = 0xa;
                } else {
                    msg = 0x1e;
                }
            } else {
                msg = 0xb;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->func_02067a84(&b2, s);
        }
    }
}

void Unk_ov082_0227214c::vfunc_14() {
    u8 b1, b2;
    u16 h0, ha, hb, x14, h16, hc, hd;
    Unk_0202368c_Obj o;
    u8 *r6;
    u8 *r7 = data_ov082_02272288;
    u32 msg = 0xff;
    if (unk_c4 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_c4 = -2;
        }
        if (unk_1e == 2) {
            ha = 0x1559;
            func_02014e60(this, &ha, 0, 5, 0);
            hb = 0x1559;
            func_02099014(&hb, 0);
            b1 = 4;
            unk_3c->func_02067a84(&b1, data_ov082_02272298);
        }
        return;
    }
    if (unk_1e == 0xd || unk_1e == 0x10 || unk_1e == 0x13 || unk_1e == 0x16) {
        h0 = 0xfff1;
        r6 = data_021ed24c;
        switch (unk_1e) {
        case 0xd:
            func_02014a4c(this);
            func_02085818(&x14, r6);
            if (!Unk_ov082_InRange(&x14, 0x12b0, 0x12e7)) {
                msg = 0x16;
                break;
            }
            func_02087b94(func_0209868c(func_0209750c()), 1);
            {
                s32 v = func_02085810(r6);
                if ((unk_ac->unk_720 >> 12) > (v >> 12)) {
                    msg = 0x10;
                    break;
                }
            }
            if (func_ov082_022717ac() == 0) {
                msg = 0x1d;
            } else if (func_ov082_022717ac() > 0) {
                msg = 0xe;
            }
            break;
        case 0xe:
        case 0xf:
            break;
        case 0x10:
            if (func_ov082_022717ac() == 0) {
                msg = 0x11;
                unk_c2 = 1;
            } else if (func_ov082_022717ac() > 0) {
                msg = 0x12;
                unk_c2 = 0;
            }
            break;
        case 0x11:
        case 0x12:
        case 0x14:
        case 0x15:
            break;
        case 0x13:
        case 0x16:
            if (unk_c2 != 0) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            func_02085820(r6, &unk_c0);
            func_02085814(r6, unk_ac->unk_720);
            func_020858b0(r6, func_0209888c(func_0209750c()));
            func_02085900(r6, 2);
            func_0209e148(data_021d7350, 0xf);
            func_0206338c(&o, 0, 0);
            func_02062f94(&h16, &o, 0, 0, 1, 1, 0);
            h0 = h16;
            func_02063388(&o);
            func_02014e60(this, &h0, 0, 5, 0);
            func_0201578c(this, &h0, 0, 7);
            func_02099014(&h0, 0);
            break;
        }
    }
    switch (unk_1e) {
    case 1:
        hc = 0x1376;
        func_02014e60(this, &hc, 0, 5, 0);
        hd = 0x1376;
        func_02099014(&hd, 0);
        msg = 4;
        func_0202e1cc(0x1c, 1);
        break;
    case 0xb:
        func_0201517c(this, func_ov082_02271b28, 0xd, 1);
        func_020151d0(this, 0);
        func_ov082_02271b60(0);
        break;
    }
    if (msg != 0xff) {
        b2 = msg;
        unk_3c->func_02067a84(&b2, r7);
    }
}

void Unk_ov082_0227214c::vfunc_78(Unk_ov082_022718b0_Rec *out) {
    u16 x[4];
    Unk_ov082_022718b0_Rec rec;
    func_0209865c(func_0209750c());
    out->a = (u32)data_ov082_02272288;
    rec.a = 0;
    rec.b = 0;
    func_0209d498(&rec);
    if (unk_c4 == -1) {
        x[1] = 0x37e0;
        unk_c4 = func_02098eb0(&x[1]);
        if (unk_c4 >= 0) {
            out->a = (u32)data_ov082_02272298;
            *((u8 *)out + 4) = 0;
            return;
        }
    }
    u8 t = *((u8 *)&rec + 2);
    if (!(t >= 0xc && t < 0x12)) {
        *((u8 *)out + 4) = 2;
    } else {
        *((u8 *)out + 4) = 3;
        func_020947c0(&x[0], func_02094348());
        if (!func_0202e1cc(0x1c, 0)) {
            x[2] = 0x1376;
            if (Unk_ov082_Neg(func_02098eb0(&x[2]))) {
                if (!Unk_ov082_InRange(&x[0], 0x1376, 0x1376)) {
                    x[3] = 0x1377;
                    if (Unk_ov082_Neg(func_02098eb0(&x[3]))) {
                        if (!Unk_ov082_InRange(&x[0], 0x1377, 0x1377)) {
                            if (func_02098ffc() >= 0) {
                                *((u8 *)out + 4) = 1;
                            } else {
                                *((u8 *)out + 4) = 0;
                            }
                            return;
                        }
                    }
                }
            }
        }
        if (func_0202e1cc(0x1c, 1)) {
            *((u8 *)out + 4) = 8;
        }
    }
}

void Unk_ov082_0227214c::func_ov082_022719d8(Unk_ov082_022721dc *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c2 = 0;
    unk_c4 = -1;
}

Unk_ov082_0227214c::~Unk_ov082_0227214c() {}

Unk_ov082_0227214c::Unk_ov082_0227214c() {
    unk_c0 = 0xfff1;
}

void Unk_ov082_0227214c::func_ov082_02271a60() {
    func_02014f74(this);
}

void Unk_ov082_0227214c::func_ov082_02271a68() {
    Unk_020660f8 *r6 = unk_3c;
    u8 b;
    unk_c0 = 0xfff1;
    unk_ac->unk_720 = 0;
    b = 0xc;
    if (func_0206ed18()) {
        s32 r4 = func_0206ed38();
        unk_c0 = func_02099048();
        unk_ac->unk_720 = func_02085618(&unk_c0);
        func_02014ce4(this, &unk_c0, 0, 4, 0);
        func_ov082_02271b50(1);
        func_0201578c(this, &unk_c0, 2, 7);
        func_02015958(this, unk_ac->unk_720 >> 12, 4, 3, 0, 0);
        if (r4 >= 0) {
            func_02099064(r4);
        }
        b = 0xd;
    } else {
        func_02014f74(this);
    }
    r6->func_02067a84(&b, data_ov082_02272288);
}

extern "C" BOOL func_ov082_02271b28(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12b0 && v <= 0x12e7) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov082_0227214c::func_ov082_02271b50(s32 i) {
    func_ov082_02271b70(&unk_b8, i);
}

void Unk_ov082_0227214c::func_ov082_02271b60(s32 i) {
    func_ov082_02271b70(&unk_b0, i);
}

void Unk_ov082_0227214c::func_ov082_02271b70(Fn *slot, s32 i) {
    static Fn tbl[2] = {&Unk_ov082_0227214c::func_ov082_02271a68, &Unk_ov082_0227214c::func_ov082_02271a60};
    *slot = tbl[i];
}

void Unk_ov082_0227214c::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        Fn t = *(Fn *)data_0213a740;
        unk_b0 = t;
        if (unk_b8) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}

BOOL Unk_ov082_022721dc::func_ov082_02271c44() { return TRUE; }

BOOL Unk_ov082_022721dc::func_ov082_02271c48() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov082_02271ce4(2);
    }
    return TRUE;
}

BOOL Unk_ov082_022721dc::func_ov082_02271c74() {
    void *p = unk_658.func_02015aac();
    u32 r = 0;
    if (p != NULL) {
        r = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, r, 0);
    return TRUE;
}

BOOL Unk_ov082_022721dc::func_ov082_02271cac() { return TRUE; }

BOOL Unk_ov082_022721dc::func_ov082_02271cb0() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

s32 Unk_ov082_0227214c::func_ov082_022717ac() {
    u16 v, w;
    u8 *r7 = data_021ed24c;
    func_02085818(&v, r7);
    if (Unk_ov082_InRange(&v, 0x12b0, 0x12e7)) {
        void *r6 = func_020858ac(r7);
        void *r4 = func_0208586c(r7);
        func_02085818(&w, r7);
        func_0201578c(this, &w, 1, 7);
        func_02015958(this, func_02085810(r7) >> 12, 0, 3, 0, 0);
        if (func_02094218(r6)) {
            func_020157e8(this, func_020858ac(r7), 1);
            u16 *q = (u16 *)func_0209888c(func_0209750c());
            u16 *p = (u16 *)func_020858ac(r7);
            if (p[0] != q[0] || func_02128930(p + 1, q + 1, 8) != 0 || func_020941e8(p, q) == 0) {
                return 1;
            }
            return 0;
        }
        if (func_020030b4(r4)) {
            Unk_02094030_Obj o;
            func_02002fc8(r4, &o);
            unk_3c->func_02067a3c(1, &o);
            return 2;
        }
    }
    return -1;
}
