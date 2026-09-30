#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov079_02272a34;
class Unk_ov079_02272ac4;

extern "C" {
BOOL func_0202e1cc(s32 a, s32 b);
void func_0203ffa4(u32 a);
u32 func_02063b8c(u32 n);
s32 func_020aa514();
BOOL func_02099014(u16 *p, u32 a);
BOOL func_0206ed18();
u32 func_0206ed38();
void *func_0209750c();
void *func_020986d4(void *p);
void *func_02071c5c(void *p);
u32 func_02071c1c(void *p, u32 v);
void *func_02071c88(void *p, u32 v);
void *func_02071e04(void *p);
void func_02071f70(void *p, void *q);
u16 *func_02098714(void *p);
u16 *func_0209872c(void *p);
u16 *func_02098744(void *p);
void func_02094bb4(u16 *p);
void func_02094b9c(u16 *p);
void func_02094b78(u16 *p);
void func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204b9e8(u16 *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
void func_ov079_02271ebc();
extern u8 data_ov079_02272b70[];
extern u8 data_0213a740[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    void func_020679ec(s32 idx, void *p, u32 val);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void func_02014a4c();
    void func_020146bc();
    void func_02014918();
    void func_02014e60(u16 *p, u32 a, u32 b, u32 c);
    void func_02015170(u32 a, u32 b);
    void func_0201517c(u32 a, u32 b, u32 c);
    void func_020151d0(s32 a);
    void func_0201578c(void *p, u32 a, u32 b);
    void func_02015a5c();
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

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

struct Unk_ov079_0227160c_Out {
    u8 *a;
    u8 b;
};

typedef void (Unk_ov079_02272a34::*Unk_ov079_02272a34_Fn)();

class Unk_ov079_02272a34 : public Unk_020d8b38 {
public:
    Unk_ov079_02272a34();
    virtual ~Unk_ov079_02272a34();
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
    virtual void vfunc_78(Unk_ov079_0227160c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov079_0227163c(Unk_ov079_02272ac4 *owner);
    void func_ov079_02271718();
    void func_ov079_02271ed8(s32 a);

    Unk_ov079_02272ac4 *unk_ac;
    Unk_ov079_02272a34_Fn unk_b0;
    Unk_ov079_02272a34_Fn unk_b8;
    u16 unk_c0;
    u8 pad_c2[2];
    s32 unk_c4;
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
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov079_02272ac4 : public Unk_020d8bc8 {
public:
    Unk_ov079_02272ac4() {}
    virtual ~Unk_ov079_02272ac4();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);

    void func_ov079_022725f4(s32 state);

    s32 unk_654;
    Unk_ov079_02272a34 unk_658;
};

struct Unk_ov079_02271718_Buf {
    u8 t;
    u8 pad_01;
    u16 v[16];
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov079_02272ac4::~Unk_ov079_02272ac4() {}

void Unk_ov079_02272ac4::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        func_ov079_022725f4(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov079_022725f4(4);
        break;
    case 8:
        func_ov079_022725f4(2);
        break;
    }
}

BOOL Unk_ov079_02272ac4::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov079_02272a34::vfunc_18() {
    u8 v;
    func_02015a5c();
    s32 t = func_020aa514();
    u8 *const str = data_ov079_02272b70;
    u8 r = 0xff;
    switch (unk_1e) {
    case 0:
        if (t == 0) {
            func_0201517c((u32)func_ov079_02271ebc, 0xd, 1);
            func_020151d0(0);
            func_ov079_02271ed8(0);
        }
        break;
    case 4:
        if (t == 0) {
            r = 0xe;
        }
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->func_02067a84(&v, str);
    }
}

static inline BOOL Unk_ov079_022714ec_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_ov079_02272a34::vfunc_14() {
    u8 *const str = data_ov079_02272b70;
    u8 r = 0xff;
    u8 v;
    switch (unk_1e) {
    case 3:
        r = 0xf;
        break;
    case 2:
        func_02014a4c();
        break;
    case 15:
        r = 4;
        if (Unk_ov079_022714ec_Rng(&unk_c0, 0x153b, 0x1541)) {
            unk_c0 = 0x13ac;
            if (func_02063b8c(2)) {
                unk_c0 = 0x3530;
            }
            r = 9;
            func_0201578c(&unk_c0, 0, 7);
        }
        func_0203ffa4(0x41);
        break;
    case 14:
        func_02015170(0xa, 0);
        func_020151d0(2);
        func_ov079_02271ed8(2);
        break;
    case 11:
        func_02014918();
        break;
    case 9:
        if (func_02099014(&unk_c0, 0)) {
            func_02014e60(&unk_c0, 0, 5, 0);
        }
        r = 0xa;
        break;
    case 5:
    case 10:
    case 13:
        func_0202e1cc(0xa, 1);
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->func_02067a84(&v, str);
    }
}

void Unk_ov079_02272a34::vfunc_10() {
    if (unk_1e == 0xf) {
        func_020146bc();
    }
}

void Unk_ov079_02272a34::vfunc_78(Unk_ov079_0227160c_Out *out) {
    out->a = data_ov079_02272b70;
    if (!func_0202e1cc(0xa, 0)) {
        out->b = 0;
    } else {
        out->b = func_02063b8c(3) + 6;
    }
}

void Unk_ov079_02272a34::func_ov079_0227163c(Unk_ov079_02272ac4 *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c0 = 0xfff1;
    unk_c4 = -1;
}

void Unk_ov079_02272a34::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_c4 = -1;
    unk_c0 = 0xfff1;
    Unk_ov079_02272a34_Fn t = *(Unk_ov079_02272a34_Fn *)data_0213a740;
    unk_b0 = t;
    unk_b8 = t;
}

Unk_ov079_02272a34::~Unk_ov079_02272a34() {}

Unk_ov079_02272a34::Unk_ov079_02272a34() {
    unk_c0 = 0xfff1;
}

static inline BOOL Unk_ov079_02271718_Chk(Unk_ov079_02272a34 *o, u16 *slot, u16 val) {
    BOOL r;
    if (func_0204b2d4(&o->unk_c0)) {
        *slot = val;
        if (func_0204b25c(&o->unk_c0) == func_0204b25c(slot)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (o->unk_c0 == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_ov079_02272a34::func_ov079_02271718() {
    Unk_020660f8 *m = unk_3c;
    Unk_ov079_02271718_Buf buf;
    u32 r4;
    buf.t = 0xd;
    if (func_0206ed18()) {
        void *g = func_0209750c();
        u32 a0 = func_0206ed38();
        u32 r6 = func_02071c1c(func_02071c5c(func_020986d4(g)), a0);
        r4 = 0;
        if (Unk_ov079_02271718_Chk(this, &buf.v[4], 0x131f)) {
            r4 = 0x15;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[5], 0x12ff)) {
            r4 = 0x16;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[6], 0x12f6)) {
            r4 = 0x17;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[7], 0x12f8)) {
            r4 = 0x18;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[8], 0x12fc)) {
            r4 = 0x19;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[9], 0x1309)) {
            r4 = 0x1a;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[10], 0x1312)) {
            r4 = 0x1b;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[11], 0x131c) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[12], 0x131d) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[13], 0x131e)) {
            r4 = 0x1d;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[14], 0x1302)) {
            r4 = 0x1e;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[15], 0x1303)) {
            r4 = 0x1f;
        } else {
            BOOL f = FALSE;
            u32 v = unk_c0;
            if (v >= 0x1548 && v <= 0x1548) {
                f = TRUE;
            }
            if (f) {
                r4 = 0xb;
            } else if (v >= 0x1542 && v <= 0x1546) {
                r4 = 8;
            } else if (v >= 0x1531 && v <= 0x153a) {
                r4 = 0xa;
            } else if (func_0204b9e8(&unk_c0) == 0) {
                r4 = (u8)func_02063b8c(8);
            } else if (func_0204b9e8(&unk_c0) == 1) {
                r4 = (u8)(func_02063b8c(9) + 0xc);
            } else if (func_0204b9e8(&unk_c0) == 2) {
                r4 = 0x1c;
            } else if (Unk_ov079_022714ec_Rng(&unk_c0, 0x1518, 0x151c)) {
                r4 = 9;
            }
        }
        func_02070e4c(7, r4, 9, r6, 1);
        buf.t = 5;
        buf.v[0] = 0x3530;
        func_02014e60(&buf.v[0], 0, 5, 0);
        u32 a, b, c;
        if (r6 < 8) {
            a = (u16)(r6 + 0x12a8);
        } else {
            a = 0x12a8;
        }
        if (r6 < 8) {
            b = (u16)(r6 + 0x1429);
        } else {
            b = 0x1429;
        }
        if (r6 < 8) {
            c = (u16)(r6 + 0x13a0);
        } else {
            c = 0x13a0;
        }
        u32 x = *func_0209872c(g);
        u32 y = *func_02098714(g);
        u32 z = *func_02098744(g);
        if (a == x) {
            if (Unk_ov079_022714ec_Rng(func_0209872c(g), 0x12a8, 0x12af)) {
                buf.v[1] = a;
                func_02094bb4(&buf.v[1]);
            }
        }
        if (b == y) {
            if (Unk_ov079_022714ec_Rng(func_02098714(g), 0x1429, 0x1430)) {
                buf.v[2] = b;
                func_02094b9c(&buf.v[2]);
            }
        }
        if (c == z) {
            if (Unk_ov079_022714ec_Rng(func_02098744(g), 0x13a0, 0x13a7)) {
                buf.v[3] = c;
                func_02094b78(&buf.v[3]);
            }
        }
        void *h = func_02071c88(func_020986d4(g), r6);
        u32 obj[9];
        func_0206267c(obj);
        func_02071f70(func_02071e04(h), obj);
        unk_3c->func_020679ec(1, obj, 7);
        func_0206260c(obj);
    }
    m->func_02067a84(&buf.t, data_ov079_02272b70);
}
