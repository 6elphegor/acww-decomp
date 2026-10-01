#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov087_02271e1c;
class Unk_ov087_02271eac;

extern "C" {
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_020aa514();
BOOL func_02099014(u16 *p, u32 a);
void *func_0209750c();
void *func_0209868c(void *p);
u32 func_02099048(s32 i);
void func_02099064(s32 i);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
u16 func_0204b318(u32 a, u32 b);
void func_020656dc(void *a, void *b, void *c, void *d, void *e, void *f);
void func_0203ce4c(u32 a, void *b);
void func_020b35f8(void *a, void *b, void *c);
s32 func_0209888c(...);
void *func_020986c8(void *p);
void func_0203c41c(void *a, void *b, u32 c);
BOOL func_0206ea84(u32 cb);
s32 func_020991fc();
void *func_020991e4();
BOOL func_02098044(void *p, u32 n);
void func_0209801c(void *p, u32 n);
void func_0209865c(void *p);
u32 func_02087c0c(void *p);
u32 func_02087c20(void *p);
void func_02087c10(void *p, u32 n);
void func_02087bf8(void *p);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02015958(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_0203d67c(void *p);
void *func_02015aac(void *p);
u32 func_0201bcbc(void *p, void *q);
void func_020141b4(void *p, u32 a, u32 b, u32 c);
void func_020196b4(void *p, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void func_0201610c(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void func_02053848(void *a, u32 b, u32 c);
void func_020856a4(void *a, s32 v);
BOOL func_ov087_022718c4(u16 *p, u32 m);
extern u16 data_020c6cc8;
extern u8 data_021ed24c[];
extern u32 data_ov087_02271d80[];
extern u32 data_ov087_02271d84[];
extern u8 data_ov087_02271f58[];
extern u8 data_ov087_02271f68[];
extern u8 data_ov087_02271ce4[];
extern u8 data_ov087_02271ce6[];
extern u8 data_ov087_02271dc8[];
extern u8 data_ov087_02271df8[];
extern u8 data_0213a740[];
}

struct Unk_ov087_02271cc4_Ent {
    u8 *name;
    u32 idx;
};
extern "C" {
extern Unk_ov087_02271cc4_Ent data_ov087_02271cc4[];
}

struct Unk_ov087_02271a6c_Ent {
    BOOL (Unk_ov087_02271eac::*enter)();
    BOOL (Unk_ov087_02271eac::*exit)();
};
extern "C" {
extern Unk_ov087_02271a6c_Ent data_ov087_02271f80[];
}

struct Unk_020a71d0 {
    u8 pad_00[0x38];
    Unk_020a71d0();
    ~Unk_020a71d0();
};

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

struct Unk_ov087_022718ec_Out {
    u8 *a;
    u8 b;
};

typedef void (Unk_ov087_02271e1c::*Unk_ov087_02271e1c_Fn)();

class Unk_ov087_02271e1c : public Unk_020d8b38 {
public:
    Unk_ov087_02271e1c();
    virtual ~Unk_ov087_02271e1c();
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
    virtual void vfunc_78(Unk_ov087_022718ec_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov087_02271960(Unk_ov087_02271eac *owner);

    Unk_ov087_02271eac *unk_ac;
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

class Unk_ov087_02271eac : public Unk_020d8bc8 {
public:
    Unk_ov087_02271eac() {}
    virtual ~Unk_ov087_02271eac();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov087_02271a34();
    BOOL func_ov087_02271a38();
    BOOL func_ov087_022719fc();
    BOOL func_ov087_022719d0();
    BOOL func_ov087_022719cc();
    void func_ov087_02271a6c(s32 state);

    s32 unk_654;
    Unk_ov087_02271e1c unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov087_02271eac::~Unk_ov087_02271eac() {}

void Unk_ov087_02271eac::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov087_02271a6c(1);
        break;
    case 8:
        func_ov087_02271a6c(0);
        break;
    }
}

BOOL Unk_ov087_02271eac::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov087_02271478_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov087_02271478_Chk(u16 *c, u16 *slot, u16 val) {
    BOOL r;
    if (func_0204b2d4(c)) {
        *slot = val;
        r = (func_0204b25c(c) == func_0204b25c(slot)) ? TRUE : FALSE;
    } else {
        if (*c == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

struct Unk_ov087_02271478_Buf {
    u8 a;
    u8 pad_01[2];
    u8 v;
    u16 s[4];
};

// 001
#pragma opt_loop_invariants off
void Unk_ov087_02271e1c::vfunc_18() {
    Unk_ov087_02271478_Buf buf;
    func_02015a5c();
    s32 t5 = func_020aa514();
    void *g8 = func_0209750c();
    s32 k = 0xff;
    switch (unk_1e) {
    case 5:
        if (t5 == 0) {
            void *g = func_0209868c(g8);
            s32 cntB;
            s32 cntA;
            buf.s[0] = 0xfff1;
            k = 0;
            cntB = 0;
            cntA = 0;
            for (; k < 15; k++) {
                buf.s[0] = func_02099048(k);
                if (Unk_ov087_02271478_Rng(&buf.s[0], 0x1542, 0x1546)) {
                    if (Unk_ov087_02271478_Chk(&buf.s[0], &buf.s[2], 0x1546)) {
                        cntA++;
                    } else {
                        cntB++;
                    }
                    func_02099064(k);
                }
            }
            buf.s[0] = 0x1542;
            if (cntA == 0) {
                k = (u8)(func_02063b8c(3) + 7);
                cntA = 1;
                while (cntB > 0) {
                    func_02087c10(g, cntA);
                    cntB--;
                }
            } else if (cntB != 0) {
                buf.s[0] = 0x1546;
                k = 0x18;
            } else {
                k = 0x19;
            }
            func_02014ce4(this, &buf.s[0], 0, 5, 0);
        }
        break;
    case 16:
        if (t5 == 0) {
            k = 0x12;
            if (func_020991fc() != -1) {
                void *obj = func_020991e4();
                if (obj != NULL) {
                    k = 0x13;
                    buf.a = 2;
                    Unk_020a71d0 o;
                    u32 n = func_02063b8c(4) + 4;
                    s32 i = 0;
                    u32 r6 = n;
                    Unk_ov087_02271cc4_Ent *ent;
                loop16:
                    buf.a = (u8)r6;
                    ent = &data_ov087_02271cc4[i];
                    func_020b35f8(&o, &buf.a, data_ov087_02271cc4[i].name);
                    func_0203ce4c(ent->idx, &o);
                    r6 = (n - 4) * 4;
                    r6 += func_02063b8c(4);
                    r6 += i * 16;
                    i++;
                    if (i < 4) goto loop16;
                    buf.a = 2;
                    func_020656dc(obj, &buf.a, data_ov087_02271f68, data_ov087_02271d84, data_ov087_02271d80,
                                  (void *)func_0209888c(g8));
                    if (g8 != NULL) {
                        buf.s[1] = func_0204b318(0x1d, 4);
                        func_0203c41c(func_020986c8(g8), &buf.s[1], 0);
                    }
                    func_0202e1cc(0x1a, 1);
                }
            }
        }
        break;
    }
    if (k != 0xff) {
        buf.v = k;
        unk_3c->func_02067a84(&buf.v, data_ov087_02271f58);
    }
}


static inline BOOL Unk_ov087_02271670_Z(BOOL x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov087_02271670_Buf {
    u8 t;
    u8 pad_01;
    u16 v[6];
};

void Unk_ov087_02271e1c::vfunc_14() {
    Unk_ov087_02271670_Buf buf;
    void *g = func_0209868c(func_0209750c());
    u32 k;
    buf.v[0] = 0xfff1;
    k = 0xff;
    switch (unk_1e) {
    case 2:
    case 3:
        if (func_0206ea84((u32)func_ov087_022718c4)) {
            s32 i = 0;
            u32 cnt = 0;
            while (i < 15) {
                buf.v[0] = func_02099048(i);
                if (Unk_ov087_02271478_Rng(&buf.v[0], 0x1542, 0x1546)) {
                    cnt++;
                }
                i++;
            }
            func_02015958(this, cnt, 2, 3, 0, 0);
            k = 5;
        } else if (func_02087c0c(g) >= 12) {
            k = 0x17;
        } else {
            u32 a = func_02087c0c(g);
            u32 b = func_02087c20(g);
            s32 d = data_ov087_02271ce6[a * 4] - b;
            if (d > 0) {
                func_02015958(this, d, 1, 3, 0, 0);
                k = 4;
            } else {
                k = 0x16;
            }
        }
        break;
    case 7:
    case 8:
    case 9:
        func_02015958(this, func_02087c20(g), 0, 3, 0, 0);
        if (func_02087c0c(g) >= 12) {
            k = 0x16;
        } else {
            k = 0xa;
        }
        break;
    case 10: {
        u32 t = func_02087c20(g);
        if (t >= data_ov087_02271ce6[func_02087c0c(g) * 4]) {
            buf.v[1] = *(u16 *)&data_ov087_02271ce4[func_02087c0c(g) * 4];
            func_0201578c(&buf.v[1], 0, 7);
            k = 0xb;
        } else {
            u32 a = func_02087c0c(g);
            u32 b = func_02087c20(g);
            s32 d = data_ov087_02271ce6[a * 4];
            d -= b;
            func_02015958(this, d, 1, 3, 0, 0);
            k = 0xf;
        }
        break;
    }
    case 11:
    case 13:
        buf.v[2] = *(u16 *)&data_ov087_02271ce4[func_02087c0c(g) * 4];
        if (Unk_ov087_02271670_Z(func_02099014(&buf.v[2], 0))) {
            k = 0xc;
        } else {
            func_02087bf8(g);
            buf.v[3] = *(u16 *)&data_ov087_02271ce4[func_02087c0c(g) * 4];
            func_02014e60(&buf.v[3], 0, 5, 0);
            if (func_02087c0c(g) < 12) {
                u32 b = func_02087c20(g);
                if (b >= data_ov087_02271ce6[func_02087c0c(g) * 4]) {
                    buf.v[4] = *(u16 *)&data_ov087_02271ce4[func_02087c0c(g) * 4];
                    func_0201578c(&buf.v[4], 0, 7);
                    k = 0xd;
                    break;
                }
            }
            k = 0xe;
        }
        break;
    case 20:
        buf.v[5] = 0x1565;
        func_02014e60(&buf.v[5], 0, 5, 0);
        k = 0x15;
        break;
    }
    if (k != 0xff) {
        buf.t = k;
        unk_3c->func_02067a84(&buf.t, data_ov087_02271f58);
    }
}

void Unk_ov087_02271e1c::vfunc_78(Unk_ov087_022718ec_Out *out) {
    void *g = func_0209750c();
    func_0209865c(g);
    out->a = data_ov087_02271f58;
    if (func_02098044(g, 0xf) == 0) {
        out->b = 0;
        func_0209801c(g, 0xf);
        func_0202e1cc(0x19, 1);
    } else if (func_0202e1cc(0x19, 1) == 0) {
        out->b = 2;
    } else if (func_02063b8c(2) == 0 || func_0202e1cc(0x1a, 0) != 0) {
        out->b = 3;
    } else {
        out->b = 0x10;
    }
}

void Unk_ov087_02271e1c::func_ov087_02271960(Unk_ov087_02271eac *owner) {
    vfunc_08();
    unk_ac = owner;
}

Unk_ov087_02271e1c::~Unk_ov087_02271e1c() {}

BOOL Unk_ov087_02271eac::func_ov087_022719cc() { return TRUE; }

BOOL Unk_ov087_02271eac::func_ov087_022719d0() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov087_02271a6c(2);
    }
    return TRUE;
}

BOOL Unk_ov087_02271eac::func_ov087_022719fc() {
    void *p = func_02015aac(&unk_658);
    u32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov087_02271eac::func_ov087_02271a34() { return TRUE; }

BOOL Unk_ov087_02271eac::func_ov087_02271a38() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov087_02271eac::func_ov087_02271a6c(s32 state) {
    BOOL ok = TRUE;
    if (data_ov087_02271f80[state].enter != NULL) {
        ok = (this->*data_ov087_02271f80[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov087_02271eac::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov087_02271f80[unk_654].exit != NULL) {
        result = (this->*data_ov087_02271f80[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov087_02271eac::vfunc_70() { return data_ov087_02271dc8; }

u8 *Unk_ov087_02271eac::vfunc_6c() { return data_ov087_02271df8; }

BOOL Unk_ov087_02271eac::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov087_02271a6c(0);
    func_0201610c(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    func_020856a4(data_021ed24c, 2);
    return TRUE;
}

BOOL Unk_ov087_02271eac::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov087_02271960(this);
    return TRUE;
}

extern "C" Unk_ov087_02271eac *func_ov087_02271bac() {
    return new Unk_ov087_02271eac();
}

Unk_ov087_02271e1c::Unk_ov087_02271e1c() {}

extern "C" BOOL func_ov087_022718c4(u16 *p, u32 m) {
    BOOL r;
    if (m == 0) {
        r = FALSE;
        if (*p >= 0x1542 && *p <= 0x1546) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}
