#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov081_0227217c;
class Unk_ov081_022720ec;

struct Unk_ov081_Vec {
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
extern u8 data_ov081_02272598[];
extern u32 data_021c7c88[];
extern Unk_ov081_Vec data_021f4880;
void func_02014f74(void *p);
void func_02014a4c(void *p);
void func_0201517c(void *p, void *cb, s32 b, s32 c);
void func_020151d0(void *p, s32 a);
void *func_0209868c(void *p);
void func_02087bb0(void *p, s32 a);
s32 func_02085810(void *p);
void func_02085814(void *p, s32 v);
void func_02085820(void *p, u16 *q);
void func_020858b0(void *p, void *q);
void func_02085900(void *p, s32 a);
void *func_0209888c(void *p);
void func_0209e148(void *p, s32 a);
s32 func_02085618(u16 *p);
u32 func_02099048();
BOOL func_0206ed18();
s32 func_0206ed38();
void func_02085818(u16 *out, void *g);
u16 *func_020858ac(void *g);
void *func_0208586c(void *g);
void func_020158a8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_020157e8(void *p, u16 *q, s32 a);
BOOL func_02094218(void *p);
BOOL func_020941e8(void *p, void *q);
BOOL func_020030b4(void *p);
void func_02002fc8(void *p, void *q);
s32 func_02094348(u16 *p);
void func_020947c0(u16 *p, s32 v);
void func_0209d498(void *o);
void func_0203d67c(void *p);
s32 func_02128930(const void *a, const void *b, u32 n);
extern u8 data_021ed24c[];
extern u8 data_021d7350[];
extern u32 data_0213a740[];
extern u8 data_ov081_02272228[];
extern u8 data_ov081_02272238[];
BOOL func_ov081_02271ae4(u16 *p, s32 x);
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

struct Unk_ov081_0227186c_Out {
    u32 a;
    u8 b;
};

struct Unk_02094030 {
    u32 v[7];
    Unk_02094030();
    ~Unk_02094030();
};

struct Unk_0209d498_Obj {
    u32 w[2];
};

typedef void (Unk_ov081_022720ec::*Unk_ov081_022720ec_Fn)();

class Unk_ov081_022720ec : public Unk_020d8b38 {
public:
    Unk_ov081_022720ec();
    virtual ~Unk_ov081_022720ec();
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
    virtual void vfunc_78(Unk_ov081_0227186c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov081_02271998(Unk_ov081_0227217c *owner);
    s32 func_ov081_02271768();
    void func_ov081_02271a20();
    void func_ov081_02271a28();
    void func_ov081_02271b0c(s32 idx);
    void func_ov081_02271b1c(s32 idx);
    void func_ov081_02271b2c(Unk_ov081_022720ec_Fn *out, s32 idx);

    /* 0xac */ Unk_ov081_0227217c *unk_ac;
    /* 0xb0 */ Unk_ov081_022720ec_Fn unk_b0;
    /* 0xb8 */ Unk_ov081_022720ec_Fn unk_b8;
    /* 0xc0 */ u16 unk_c0;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc4 */ s32 unk_c4;
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
    Unk_ov081_Vec *func_0201a978();
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

typedef BOOL (Unk_ov081_0227217c::*Unk_ov081_02271ca0_Fn)();
struct Unk_ov081_02271ca0_Entry {
    Unk_ov081_02271ca0_Fn a;
    Unk_ov081_02271ca0_Fn b;
};
extern "C" Unk_ov081_02271ca0_Entry data_ov081_02272274[];

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

class Unk_ov081_0227217c : public Unk_020d8bc8 {
public:
    Unk_ov081_0227217c() {}
    virtual ~Unk_ov081_0227217c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov081_02271c00();
    BOOL func_ov081_02271c04();
    BOOL func_ov081_02271c30();
    BOOL func_ov081_02271c68();
    BOOL func_ov081_02271c6c();
    void func_ov081_02271ca0(s32 state);

    s32 unk_654;
    Unk_ov081_022720ec unk_658;
    s32 unk_720;
};
// ---------------------------------------------------------------------------------------------------------------------
Unk_ov081_0227217c::~Unk_ov081_0227217c() {}

void Unk_ov081_0227217c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov081_02271ca0(1);
        break;
    case 8:
        func_ov081_02271ca0(0);
        break;
    }
}

BOOL Unk_ov081_0227217c::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov081_022720ec::vfunc_18() {
    u8 b1;
    u8 b2;
    u16 h;
    s32 t = func_02015a5c()->func_020aa514();
    u8 msg;
    u8 *s;
    s = data_ov081_02272228;
    msg = 0xff;
    if (unk_c4 >= 0) {
        s = data_ov081_02272238;
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
                if (func_ov081_02271768() == 0) {
                    msg = 9;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0xa;
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

void Unk_ov081_022720ec::vfunc_14() {
    u8 m1;
    u8 m2;
    u16 h0, h1, h2, h3, h4, h5;
    Unk_0202368c_Obj o;
    void *g;
    u8 *s;
    u8 msg;
    s = data_ov081_02272228;
    msg = 0xff;
    if (unk_c4 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_c4 = -2;
        }
        if (unk_1e == 2) {
            h1 = 0x1559;
            func_02014e60(this, &h1, 0, 5, 0);
            h2 = 0x1559;
            func_02099014(&h2, 0);
            m1 = 4;
            unk_3c->func_02067a84(&m1, data_ov081_02272238);
        }
    } else {
        switch (unk_1e) {
        case 0xd:
        case 0x10:
        case 0x13:
            h0 = 0xfff1;
            g = data_021ed24c;
            switch (unk_1e) {
            case 0xd:
                func_02014a4c(this);
                func_02087bb0(func_0209868c(func_0209750c()), 1);
                if (((unk_ac->unk_720 * 10) >> 12) > ((func_02085810(g) * 10) >> 12)) {
                    msg = 0x10;
                } else if (func_ov081_02271768() == 0) {
                    msg = 0x16;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0xe;
                }
                break;
            case 0x10:
                if (func_ov081_02271768() == 0) {
                    msg = 0x11;
                    unk_c2 = 1;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0x12;
                    unk_c2 = 0;
                }
                break;
            case 0x13:
                if (unk_c2 != 0) {
                    msg = 0x14;
                } else {
                    msg = 0x15;
                }
                func_02085820(g, &unk_c0);
                func_02085814(g, unk_ac->unk_720);
                func_020858b0(g, func_0209888c(func_0209750c()));
                func_02085900(g, 1);
                func_0209e148(data_021d7350, 0xf);
                func_0206338c(&o, 0, 0);
                func_02062f94(&h3, &o, 0, 0, 1, 1, 0);
                h0 = h3;
                func_02063388(&o);
                func_02014e60(this, &h0, 0, 5, 0);
                func_0201578c(this, &h0, 0, 7);
                func_02099014(&h0, 0);
                break;
            }
            break;
        }
        switch (unk_1e) {
        case 1:
            h4 = 0x1374;
            func_02014e60(this, &h4, 0, 5, 0);
            h5 = 0x1374;
            func_02099014(&h5, 0);
            msg = 4;
            func_0202e1cc(0x1b, 1);
            break;
        case 0xb:
            func_0201517c(this, (void *)func_ov081_02271ae4, 0xd, 1);
            func_020151d0(this, 0);
            func_ov081_02271b1c(0);
            break;
        }
        if (msg != 0xff) {
            m2 = msg;
            unk_3c->func_02067a84(&m2, s);
        }
    }
}

s32 Unk_ov081_022720ec::func_ov081_02271768() {
    u16 h[2];
    void *g = data_021ed24c;
    void *r4;
    void *r6;
    u16 *p5;
    u16 *p4;
    func_02085818(&h[0], g);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &h[0];
        u32 a = *pv;
        u32 b = *pv;
        if (b >= 0x12e8 && a <= 0x131f) {
            r = TRUE;
        }
        if (r != 0) {
            r6 = func_020858ac(g);
            r4 = func_0208586c(g);
            func_02085818(&h[1], g);
            func_0201578c(this, &h[1], 1, 7);
            func_020158a8(this, func_02085810(g), 0, 1, 3);
            if (func_02094218(r6) != 0) {
                func_020157e8(this, func_020858ac(g), 1);
                p4 = (u16 *)func_0209888c(func_0209750c());
                p5 = func_020858ac(g);
                if (p5[0] == p4[0] && func_02128930(p5 + 1, p4 + 1, 8) == 0 && func_020941e8(p5, p4) != 0) {
                    goto ret0;
                }
                return 1;
            ret0:
                return 0;
            } else if (func_020030b4(r4) != 0) {
                Unk_02094030 o;
                func_02002fc8(r4, &o);
                unk_3c->func_02067a3c(1, &o);
                return 2;
            }
        }
    }
    return -1;
}

void Unk_ov081_022720ec::vfunc_78(Unk_ov081_0227186c_Out *out) {
    struct {
        u16 h[5];
        Unk_0209d498_Obj o;
    } l;
    func_0209865c(func_0209750c());
    out->a = (u32)data_ov081_02272228;
    l.o.w[0] = 0;
    l.o.w[1] = 0;
    func_0209d498(&l.o);
    if (unk_c4 == -1) {
        l.h[2] = 0x37e0;
        unk_c4 = func_02098eb0(&l.h[2]);
        if (unk_c4 >= 0) {
            out->a = (u32)data_ov081_02272238;
            out->b = 0;
            return;
        }
    }
    {
        u32 v = ((u8 *)&l.o)[2];
        if (v < 0xc || v >= 0x12) {
            out->b = 2;
            return;
        }
    }
    l.h[0] = 0x1374;
    func_020947c0(&l.h[1], func_02094348(&l.h[0]));
    out->b = 3;
    if (func_0202e1cc(0x1b, 0) == 0) {
        l.h[3] = 0x1374;
        BOOL n1 = func_02098eb0(&l.h[3]) < 0 ? TRUE : FALSE;
        if (n1 != 0) {
            BOOL f1 = FALSE;
            volatile u16 *pv = l.h;
            u32 a = pv[1];
            u32 b = pv[1];
            if (b >= 0x1374 && a <= 0x1374) {
                f1 = TRUE;
            }
            if (f1 == 0) {
                l.h[4] = 0x1375;
                BOOL n2 = func_02098eb0(&l.h[4]) < 0 ? TRUE : FALSE;
                if (n2 != 0) {
                    BOOL f2 = FALSE;
                    volatile u16 *pw = l.h;
                    u32 c = pw[1];
                    u32 d = pw[1];
                    if (d >= 0x1375 && c <= 0x1375) {
                        f2 = TRUE;
                    }
                    if (f2 == 0) {
                        if (func_02098ffc() >= 0) {
                            out->b = 1;
                        } else {
                            out->b = 0;
                        }
                        return;
                    }
                }
            }
        }
    }
    if (func_0202e1cc(0x1b, 1) != 0) {
        out->b = 8;
    }
}

void Unk_ov081_022720ec::func_ov081_02271998(Unk_ov081_0227217c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c2 = 0;
    unk_c4 = -1;
}

Unk_ov081_022720ec::~Unk_ov081_022720ec() {}

Unk_ov081_022720ec::Unk_ov081_022720ec() {
    unk_c0 = 0xfff1;
}

void Unk_ov081_022720ec::func_ov081_02271a20() {
    func_02014f74(this);
}

void Unk_ov081_022720ec::func_ov081_02271a28() {
    Unk_020660f8 *p = unk_3c;
    u8 m;
    unk_c0 = 0xfff1;
    unk_ac->unk_720 = 0;
    m = 0xc;
    if (func_0206ed18() != 0) {
        s32 r4 = func_0206ed38();
        unk_c0 = func_02099048();
        unk_ac->unk_720 = func_02085618(&unk_c0);
        func_02014ce4(this, &unk_c0, 0, 4, 0);
        func_ov081_02271b0c(1);
        func_0201578c(this, &unk_c0, 2, 7);
        func_020158a8(this, unk_ac->unk_720, 4, 1, 3);
        if (r4 >= 0) {
            func_02099064(r4);
        }
        m = 0xd;
    } else {
        func_02014f74(this);
    }
    p->func_02067a84(&m, data_ov081_02272228);
}

extern "C" BOOL func_ov081_02271ae4(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov081_022720ec::func_ov081_02271b0c(s32 idx) {
    func_ov081_02271b2c(&unk_b8, idx);
}

void Unk_ov081_022720ec::func_ov081_02271b1c(s32 idx) {
    func_ov081_02271b2c(&unk_b0, idx);
}

void Unk_ov081_022720ec::func_ov081_02271b2c(Unk_ov081_022720ec_Fn *out, s32 idx) {
    static Unk_ov081_022720ec_Fn tbl[2] = {&Unk_ov081_022720ec::func_ov081_02271a28,
                                           &Unk_ov081_022720ec::func_ov081_02271a20};
    *out = tbl[idx];
}

void Unk_ov081_022720ec::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        Unk_ov081_022720ec_Fn t = *(Unk_ov081_022720ec_Fn *)data_0213a740;
        unk_b0 = t;
        if (unk_b8) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}

BOOL Unk_ov081_0227217c::func_ov081_02271c00() {
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c04() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov081_02271ca0(2);
    }
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c30() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c68() {
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c6c() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov081_0227217c::func_ov081_02271ca0(s32 state) {
    BOOL ok = TRUE;
    if (data_ov081_02272274[state].a != NULL) {
        ok = (this->*data_ov081_02272274[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}
