#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

extern "C" {
extern u8 data_021d7350[];
extern u8 data_021e58a8[];
extern u8 data_021edb5c[];
extern u8 data_020e416c;
extern u8 data_ov050_0225e1d4[];

s32 func_02060388(void *g);
void func_02060370(void *g, s32 v);
void func_02015958(void *self, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_02014e60(void *self, u16 *p, s32 b, s32 c, s32 d);
void *func_0209750c();
void *func_0209865c(void *p);
void *func_02099db4(void *h, s32 v);
void *func_0209a4f0(void *p);
void func_0209abb4(void *p, s32 v);
void func_02099910(void *h);
s32 func_02099014(u16 *p, s32 v);
void func_02094030(void *p);
void func_02094018(void *p);
void func_0209992c(void *h);
s32 func_02099c68(void *h, void *buf, void *v);
void func_02067a3c(void *self, s32 id, void *buf);
void func_02067a84(void *self, void *buf, void *cb);
s32 func_02098ffc();
void func_02099948(void *h);
void func_02099ae4(void *h);
void *func_0209a4e4(void *p, s32 v);
void func_02002fc8(void *p, void *buf);
s32 func_0209ad68(void *p);
s32 func_0209ac64(void *p);
void func_02099b4c(void *h);
s32 func_02099b90(void *h);
void func_02099bd8(void *h);
void func_02099bac(void *h);
void func_02098f30(void *buf, void *fn);
void func_02099be0(void *h);
s32 func_0209abc4(void *p);
s32 func_02099be8(void *h);
void func_020998b8(void *h);
void func_02097ff4(void *p, s32 v);
void *func_0209868c(void *p);
void *func_020850e0();
void func_020851a4(void *p, s32 v);
s32 func_02087c58(void *p);
void func_ov050_0225d1d4(void *owner, s32 v);
void func_ov050_0225bdc8(void *self);
BOOL func_ov050_0225bd54(void *self);
BOOL func_ov050_02258eb8(void *self);
void func_ov050_0225be74();
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
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xac - 0x96];
    s32 unk_ac;
    void *unk_b0;
    u8 pad_b4[0xc8 - 0xb4];
    u8 unk_c8;
    u8 pad_c9;
    u16 unk_ca;
    s32 unk_cc;
    u8 pad_d0[0xea - 0xd0];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
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
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_7c();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

// Base of the dialog-state object (ctor func_0202e2bc, D2 func_0202e26c), size 0xac.
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_88();

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0x6c];
};


struct Unk_ov050_0225b7f4_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov050_0225b0f4_Owner {
    u8 pad_00[0x73a];
    u8 unk_73a;
    u8 unk_73b;
};

class Unk_ov050_0225e4b4;
typedef void (Unk_ov050_0225e4b4::*Unk_ov050_0225e4b4_Fn)(void *);

struct Unk_ov050_0225b5a8_Row {
    u32 id;
    Unk_ov050_0225e4b4_Fn f;
};

class Unk_ov050_0225e4b4 : public Unk_0202e2bc {
public:
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c(Unk_ov050_0225b7f4_Out *out);
    virtual void vfunc_a0(Unk_ov050_0225b7f4_Out *out);
    virtual void vfunc_a4(Unk_ov050_0225b7f4_Out *out);
    virtual void vfunc_a8();

    void func_0225afd4(void *h);
    void func_0225afe4(void *h);
    void func_0225b018(void *h);
    void func_0225b088(void *h);
    void func_0225b0c0(void *h);
    void func_0225b0f4(void *h);
    void func_0225b158(void *h);
    void func_0225b194(void *h);
    void func_0225b210(void *h);
    void func_0225b24c(void *h);
    void func_0225b288(void *h);
    void func_0225b2d0(void *h);
    void func_0225b330(void *h);
    void func_0225b3ac(void *h);
    void func_0225b3e8(void *h);
    void func_0225b478(void *h);
    void func_0225b48c(void *h);
    void func_0225b498(void *h);
    void func_0225b4c8(void *h);
    void func_0225b518(void *h);
    void func_0225b56c(void *h);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov050_0225b0f4_Owner *unk_b0;
    /* 0xb4 */ u8 pad_b4[0xcc - 0xb4];
    /* 0xcc */ s32 unk_cc;
};

class Unk_ov050_0225e400 : public Unk_020d8bc8 {
public:
    Unk_ov050_0225e400() {}
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    s32 unk_654;
    u8 unk_658[0x734 - 0x658];
    u16 unk_734;
    s16 unk_736;
    u16 unk_738;
    u8 unk_73a;
    u8 unk_73b;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov050_0225e4b4::func_0225afd4(void *h) {
    func_ov050_0225d1d4(unk_b0, 0x11);
}

void Unk_ov050_0225e4b4::func_0225afe4(void *h) {
    func_020998b8(h);
    void *o = func_0209750c();
    func_02097ff4(o, 1);
    o = func_0209868c(o);
    func_020851a4(func_020850e0(), 5);
    func_02087c58(o);
}

void Unk_ov050_0225e4b4::func_0225b018(void *h) {
    u8 *const a = data_021d7350;
    u8 *const g = data_021e58a8;
    if (func_02060388(g) < 0x579) {
        unk_cc = 0x36;
    } else {
        s32 t = func_02060388(g);
        func_02060370(g, t - 0x578);
        s32 s = func_02060388(a + 0xe558);
        func_02015958(this, s, 2, 10, 1, 0);
        unk_cc = 0x34;
    }
}

void Unk_ov050_0225e4b4::func_0225b088(void *h) {
    func_0209abb4(func_0209a4f0(func_02099db4(h, 0)), 2);
    func_02099910(h);
    unk_b0->unk_73a = 0;
}

void Unk_ov050_0225e4b4::func_0225b0c0(void *h) {
    u16 v = 0x1564;
    func_02014e60(this, &v, 2, 5, 0);
    unk_b0->unk_73a = 0;
}

void Unk_ov050_0225e4b4::func_0225b0f4(void *h) {
    u16 v[2];
    u32 buf[7];
    v[0] = 0x1564;
    if (func_02099014(&v[0], 2)) {
        func_02094030(buf);
        func_0209992c(h);
        v[1] = 0x1564;
        func_02099c68(h, buf, &v[1]);
        func_02067a3c(unk_3c, 1, buf);
        unk_cc = 0x2e;
        func_02094018(buf);
    } else {
        unk_cc = 0x17;
    }
}

void Unk_ov050_0225e4b4::func_0225b158(void *h) {
    u16 v[2];
    v[0] = 0x1561;
    if (func_02099014(&v[0], 2)) {
        v[1] = 0x1561;
        func_02014e60(this, &v[1], 0, 5, 0);
    }
}

void Unk_ov050_0225e4b4::func_0225b194(void *h) {
    u16 v;
    u32 buf[7];
    void *r = func_0209a4f0(func_02099db4(h, 0));
    func_02094030(buf);
    func_0209abb4(r, 2);
    unk_b0->unk_73a = 0;
    if (func_02098ffc() >= 0) {
        func_02099948(h);
        v = 0x1561;
        func_02099c68(h, buf, &v);
        func_02067a3c(unk_3c, 1, buf);
        unk_cc = 0x29;
    } else {
        unk_cc = 0x17;
    }
    func_02094018(buf);
}

void Unk_ov050_0225e4b4::func_0225b210(void *h) {
    func_0209abb4(func_0209a4f0(func_02099db4(h, 0)), 0);
    if (func_02098ffc() >= 0) {
        unk_cc = 0x25;
    } else {
        func_02067a84(unk_3c, data_021edb5c, 0);
    }
}

void Unk_ov050_0225e4b4::func_0225b24c(void *h) {
    func_0209abb4(func_0209a4f0(func_02099db4(h, 0)), 0);
    unk_b0->unk_73a = 1;
    func_0225b2d0(h);
}

void Unk_ov050_0225e4b4::func_0225b288(void *h) {
    if (unk_b0->unk_73a == 0 && func_02098ffc() != -1) {
        unk_cc = 0x22;
    } else {
        unk_b0->unk_73a = 1;
        func_02067a84(unk_3c, data_021edb5c, 0);
    }
}

void Unk_ov050_0225e4b4::func_0225b2d0(void *h) {
    u16 v[2];
    v[0] = 0x1020;
    if (func_02099014(&v[0], 0)) {
        v[1] = 0x1020;
        func_02014e60(this, &v[1], 0, 5, 0);
    }
    if (unk_1e == 0x1f) {
        unk_cc = 0x20;
        unk_b0->unk_73a = 2;
    } else {
        unk_cc = 0x26;
    }
}

void Unk_ov050_0225e4b4::func_0225b330(void *h) {
    u32 buf[8];
    void *r = func_02099db4(h, 0);
    func_0209abb4(func_0209a4f0(r), 1);
    if (func_02098ffc() >= 0) {
        func_02099ae4(h);
        r = func_0209a4e4(r, 1);
        if (r) {
            func_02094030(buf);
            func_02002fc8(r, buf);
            func_02067a3c(unk_3c, 0, buf);
            func_02094018(buf);
        }
        unk_b0->unk_73a = 0;
        unk_cc = 0x1f;
    } else {
        unk_cc = 0x17;
    }
}

void Unk_ov050_0225e4b4::func_0225b3ac(void *h) {
    u16 v[2];
    v[0] = 0x1563;
    if (func_02099014(&v[0], 2)) {
        v[1] = 0x1563;
        func_02014e60(this, &v[1], 2, 5, 0);
    }
}

void Unk_ov050_0225e4b4::func_0225b3e8(void *h) {
    u16 v;
    u32 buf[7];
    void *r = func_0209a4f0(func_02099db4(h, 0));
    if (func_0209ad68(r) && func_0209ac64(r) == 0xd) {
        func_0209abb4(r, 1);
    }
    if (func_02098ffc() >= 0) {
        func_02094030(buf);
        func_02099b4c(h);
        v = 0x1563;
        func_02099c68(h, buf, &v);
        func_02067a3c(unk_3c, 1, buf);
        unk_b0->unk_73a = 0;
        unk_cc = 0x18;
        func_02094018(buf);
    } else {
        unk_cc = 0x17;
    }
}

void Unk_ov050_0225e4b4::func_0225b478(void *h) {
    func_0209750c();
    func_02099b90(h);
}

void Unk_ov050_0225e4b4::func_0225b48c(void *h) {
    func_02099bd8(h);
}

void Unk_ov050_0225e4b4::func_0225b498(void *h) {
    func_ov050_0225bdc8(this);
    func_02099bac(h);
    unk_b0->unk_73a = 0;
    unk_cc = 10;
}

void Unk_ov050_0225e4b4::func_0225b4c8(void *h) {
    u8 b[4];
    func_02098f30(b, (void *)func_ov050_0225be74);
    if (b[2] >= 7) {
        unk_cc = 8;
    } else {
        unk_cc = 9;
    }
    void *r = func_0209a4f0(func_02099db4(h, 0));
    func_02099be0(h);
    func_0209abb4(r, 2);
}

void Unk_ov050_0225e4b4::func_0225b518(void *h) {
    u16 v = 0x11a8;
    func_02014e60(this, &v, 0, 5, 0);
    unk_cc = 6;
    void *r = func_0209a4f0(func_02099db4(h, 0));
    if (func_0209ad68(r) && func_0209ac64(r) == 0xb) {
        func_0209abb4(r, 1);
    }
}

void Unk_ov050_0225e4b4::func_0225b56c(void *h) {
    u16 v = 0x11a8;
    if (func_02099014(&v, 0)) {
        func_02099be8(h);
        unk_cc = 3;
    } else {
        unk_cc = 1;
    }
}

void Unk_ov050_0225e4b4::vfunc_a8() {
    void *h = func_0209865c(func_0209750c());
    func_0209a4f0(func_02099db4(h, 0));
    unk_cc = 0xff;
    static Unk_ov050_0225b5a8_Row tbl[24] = {
        {0x00, &Unk_ov050_0225e4b4::func_0225b56c},
        {0x03, &Unk_ov050_0225e4b4::func_0225b518},
        {0x04, &Unk_ov050_0225e4b4::func_0225b518},
        {0x07, &Unk_ov050_0225e4b4::func_0225b4c8},
        {0x08, &Unk_ov050_0225e4b4::func_0225b498},
        {0x0e, &Unk_ov050_0225e4b4::func_0225b48c},
        {0x12, &Unk_ov050_0225e4b4::func_0225b478},
        {0x16, &Unk_ov050_0225e4b4::func_0225b3e8},
        {0x1a, &Unk_ov050_0225e4b4::func_0225b3e8},
        {0x18, &Unk_ov050_0225e4b4::func_0225b3ac},
        {0x1e, &Unk_ov050_0225e4b4::func_0225b330},
        {0x1f, &Unk_ov050_0225e4b4::func_0225b2d0},
        {0x21, &Unk_ov050_0225e4b4::func_0225b288},
        {0x25, &Unk_ov050_0225e4b4::func_0225b24c},
        {0x27, &Unk_ov050_0225e4b4::func_0225b210},
        {0x28, &Unk_ov050_0225e4b4::func_0225b194},
        {0x29, &Unk_ov050_0225e4b4::func_0225b158},
        {0x2c, &Unk_ov050_0225e4b4::func_0225b0f4},
        {0x2e, &Unk_ov050_0225e4b4::func_0225b0c0},
        {0x31, &Unk_ov050_0225e4b4::func_0225b088},
        {0x33, &Unk_ov050_0225e4b4::func_0225b018},
        {0x35, &Unk_ov050_0225e4b4::func_0225afe4},
        {0x36, &Unk_ov050_0225e4b4::func_0225afe4},
        {0x0c, &Unk_ov050_0225e4b4::func_0225afd4},
    };
    s32 i = 0;
    u8 *p = &unk_1e;
    Unk_ov050_0225b5a8_Row *t = tbl;
    for (; (u32)i < 0x18; i++) {
        u32 a = tbl[i].id;
        u32 b = *p;
        if (a == b) {
            (this->*t[i].f)(h);
        }
    }
    if (unk_cc != 0xff) {
        u8 v = unk_cc;
        func_02067a84(unk_3c, &v, data_ov050_0225e1d4);
    }
}

static inline BOOL Unk_ov050_0225b7b4_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov050_0225e400::vfunc_7c() {
    if (func_ov050_02258eb8(this)) {
        return FALSE;
    }
    if (Unk_ov050_0225b7b4_IsOne(data_020e416c) == 0 || unk_73b == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov050_0225e400::vfunc_80() {
    unk_73b = 1;
}

void Unk_ov050_0225e4b4::vfunc_a4(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54(this) == 0) {
        void *h = func_0209865c(func_0209750c());
        if (func_0209abc4(func_0209a4f0(func_02099db4(h, 0))) == 1) {
            out->unk_04 = 0x33;
        } else if (unk_b0->unk_73a == 0) {
            out->unk_04 = 0x32;
            unk_b0->unk_73a = 1;
        } else {
            out->unk_04 = 0x10;
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_a0(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54(this) == 0) {
        void *h = func_0209865c(func_0209750c());
        if (func_0209abc4(func_0209a4f0(func_02099db4(h, 0))) == 1) {
            out->unk_04 = 0x31;
        } else if (unk_b0->unk_73a == 0) {
            out->unk_04 = 0x2b;
            unk_b0->unk_73a = 1;
        } else {
            out->unk_04 = 0x10;
        }
    }
}

void Unk_ov050_0225e4b4::vfunc_9c(Unk_ov050_0225b7f4_Out *out) {
    if (func_ov050_0225bd54(this) == 0) {
        void *h = func_0209865c(func_0209750c());
        if (func_0209abc4(func_0209a4f0(func_02099db4(h, 0))) == 1) {
            out->unk_04 = 0x2c;
        } else if (unk_b0->unk_73a == 0) {
            out->unk_04 = 0x2b;
            unk_b0->unk_73a = 1;
        } else {
            out->unk_04 = 0x10;
        }
    }
}
