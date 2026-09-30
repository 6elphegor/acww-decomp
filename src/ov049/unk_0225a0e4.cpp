#include "types.h"

class Unk_ov049_0225be74;
struct Unk_ov049_0225a714_Out;

struct Unk_ov049_0225a434_Ent {
    const u8 *bytes;
    u8 count;
};

struct Unk_ov049_0225a434_Owner {
    u8 pad_00[0xea];
    u16 unk_ea;
    u8 pad_ec[0x734 - 0xec];
    u16 unk_734;
    u8 pad_736[0x965 - 0x736];
    u8 unk_965;
    u8 unk_966;
};

struct Unk_ov049_0225a714_Out {
    char *unk_00;
    u8 unk_04;
};

struct Unk_ov049_0225a714_Name {
    u8 b[8];
};

struct Unk_ov049_0225a714_Pair;
struct Unk_ov049_0225a714_Q;
struct Unk_ov049_0225a714_P;

extern "C" {
extern void *data_020cbb18;
extern u32 data_ov049_0225b7b0[];
extern u8 data_ov049_0225b78c[];
extern u8 data_ov049_0225b794[];
extern char *data_ov049_0225bc58[3];
extern Unk_ov049_0225a434_Ent data_ov049_0225bce4[4];
extern u8 data_021d7350[];

void func_ov049_02259140(void *owner, u32 v);
void func_ov049_02259a8c(void *self, s32 v);
void func_ov049_022594e0(void *self, Unk_ov049_0225a434_Ent *ent, u32 idx);
s32 func_02063b8c(s32 n);
void func_02015170(void *self, u32 a, u32 b);
void func_020151d0(void *self, s32 a);
s32 func_0201ade4(void *owner, s32 v);
s32 func_02067a84(void *self, void *buf, void *cb);
BOOL func_02072e44(void *g);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_020816f8(s32 n);
void func_02015a80(void *self, s32 v);
u32 func_020aa514(void *p);
void *func_020679b4(void *p);
BOOL func_020a032c();
u32 func_0212a438(const char *s);
s32 func_0212a15c(void *a, const char *b, u32 n);
void func_0201ad4c(void *owner, s32 v);
void func_0201adc8(void *owner, s32 v);

void *func_0209750c();
void *func_0209865c();
void *func_02099864(void *p);
BOOL func_02099f98(void *a, void *b);
BOOL func_0202e18c(void *owner, void *buf, s32 n);
void *func_0204be70(void *p);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0201578c(void *self, void *a, s32 b, s32 c);
void *func_02071b00(void *a, u32 b);
void *func_02071e04(void *a);
void func_02071f70(void *a, void *b);
void func_020679ec(void *a, s32 b, void *c, s32 d);
const Unk_ov049_0225a714_Pair *func_02071fa0(void *a);
const Unk_ov049_0225a714_Pair *func_0209888c(...);
const Unk_ov049_0225a714_P *func_0209409c(Unk_ov049_0225a714_Pair *a);
s32 func_02128930(const void *a, const void *b, u32 n);
BOOL func_020941e8(Unk_ov049_0225a714_Pair *a, Unk_ov049_0225a714_Pair *b);
void func_020157e8(void *self, void *a, s32 n);
void func_02015818(void *self, void *a, s32 n);
void func_020639b8(Unk_ov049_0225a714_P *p);
void func_020942c8(Unk_ov049_0225a714_Pair *p);
void func_0206267c(Unk_ov049_0225a714_Q *p);
void func_0206260c(Unk_ov049_0225a714_Q *p);
}

struct Unk_ov049_0225a714_Q {
    u8 unk_00[0x24];
    Unk_ov049_0225a714_Q() { func_0206267c(this); }
    ~Unk_ov049_0225a714_Q() { func_0206260c(this); }
};

struct Unk_ov049_0225a714_P {
    u16 id;
    Unk_ov049_0225a714_Name name;
    Unk_ov049_0225a714_P(const Unk_ov049_0225a714_P &o) {
        id = o.id;
        name = o.name;
    }
    ~Unk_ov049_0225a714_P() { func_020639b8(this); }
};

struct Unk_ov049_0225a714_Pair {
    u16 id0;
    Unk_ov049_0225a714_Name name0;
    u16 id1;
    Unk_ov049_0225a714_Name name1;
    s8 unk_14;
    u8 unk_15;
    Unk_ov049_0225a714_Pair(const Unk_ov049_0225a714_Pair &o) {
        id0 = o.id0;
        name0 = o.name0;
        id1 = o.id1;
        name1 = o.name1;
        unk_14 = o.unk_14;
        unk_15 = o.unk_15;
    }
    ~Unk_ov049_0225a714_Pair() { func_020942c8(this); }
};

// Menu-state machine base
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
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
    virtual void vfunc_78(Unk_ov049_0225a714_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
};

typedef void (Unk_ov049_0225be74::*Unk_ov049_0225be74_Fn)(u32);
typedef void (Unk_ov049_0225be74::*Unk_ov049_0225be74_Fn0)();

struct Unk_ov049_0225a210_Ent {
    u32 id;
    Unk_ov049_0225be74_Fn fn;
};

struct Unk_ov049_0225a590_Ent {
    u32 id;
    Unk_ov049_0225be74_Fn0 fn;
};

class Unk_ov049_0225be74 : public Unk_02015b54 {
public:
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_78(Unk_ov049_0225a714_Out *out);

    void func_ov049_0225a034(u32 a);
    void func_ov049_0225a048(u32 a);
    void func_ov049_0225a0e4(u32 a);
    void func_ov049_0225a12c(u32 a);
    void func_ov049_0225a17c(u32 a);
    void func_ov049_0225a210();
    void func_ov049_0225a3c4();
    void func_ov049_0225a3c8();
    void func_ov049_0225a3ec();
    void func_ov049_0225a410();
    void func_ov049_0225a434();
    void func_ov049_0225a4fc();
    void func_ov049_0225a510();
    void func_ov049_0225a534();
    void func_ov049_0225a548();
    void func_ov049_0225a56c();
    void func_ov049_0225a590();

    void func_ov049_02259b28(u32 a);
    void func_ov049_02259bc0(u32 a);
    void func_ov049_02259c14(u32 a);
    void func_ov049_02259dd8(u32 a);

    s32 func_ov049_0225aa48();

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov049_0225a434_Owner *unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov049_0225be74::func_ov049_0225a0e4(u32 a) {
    s32 idx = 0;
    switch (a) {
    case 0:
        idx = func_02063b8c(3);
        break;
    case 1:
        idx = func_02063b8c(3) + 3;
        break;
    case 2:
        idx = func_02063b8c(4) + 6;
        break;
    }
    func_ov049_02259140(unk_ac, data_ov049_0225b7b0[idx]);
}

void Unk_ov049_0225be74::func_ov049_0225a12c(u32 a) {
    u8 buf[2];
    if (a == 0) {
        if (func_0201ade4(unk_ac, 0x15e) == 0) {
            buf[0] = 0xd;
            func_02067a84(unk_3c, &buf[0], data_ov049_0225bc58[0]);
        } else {
            buf[1] = 0xe;
            func_02067a84(unk_3c, &buf[1], data_ov049_0225bc58[0]);
        }
    }
}

void Unk_ov049_0225be74::func_ov049_0225a17c(u32 a) {
    u8 buf[2];
    void *g = data_020cbb18;
    if (func_02072e44(g) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        if (a == 2) {
            buf[0] = 0x1c;
            func_02067a84(unk_3c, &buf[0], data_ov049_0225bc58[0]);
        } else if (a == 0) {
            buf[1] = 0x37;
            func_02067a84(unk_3c, &buf[1], data_ov049_0225bc58[0]);
        }
    }
    if (func_02072e44(g) == 0 && *func_0209c37c(0, 0x4a) == 0) {
        s32 r = func_020816f8(5);
        if (r != 0) {
            func_02015a80(this, r);
        }
    }
}

void Unk_ov049_0225be74::func_ov049_0225a210() {
    static Unk_ov049_0225a210_Ent tbl[11] = {
        {4, &Unk_ov049_0225be74::func_ov049_0225a17c},
        {0x15, &Unk_ov049_0225be74::func_ov049_0225a17c},
        {0x1a, &Unk_ov049_0225be74::func_ov049_0225a17c},
        {0xb, &Unk_ov049_0225be74::func_ov049_0225a12c},
        {0x10, &Unk_ov049_0225be74::func_ov049_0225a0e4},
        {0x1b, &Unk_ov049_0225be74::func_ov049_0225a048},
        {0x17, &Unk_ov049_0225be74::func_ov049_0225a034},
        {0x28, &Unk_ov049_0225be74::func_ov049_02259dd8},
        {0x2d, &Unk_ov049_0225be74::func_ov049_02259c14},
        {0x2e, &Unk_ov049_0225be74::func_ov049_02259bc0},
        {0x38, &Unk_ov049_0225be74::func_ov049_0225a17c},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 off = i * 12;
    u32 id = tbl[i].id;
    if (id == *idp) {
        u32 arg = func_020aa514(func_020679b4(unk_3c));
        (this->*((Unk_ov049_0225a210_Ent *)((u32)tbl + off))->fn)(arg);
    }
    i++;
test0:
    if (i < 0xb) goto loop0;
}

void Unk_ov049_0225be74::vfunc_18(u32 a) {
    if (func_ov049_0225aa48() != 2 || !func_020a032c()) {
        static Unk_ov049_0225be74_Fn tbl[2] = {
            (Unk_ov049_0225be74_Fn)&Unk_ov049_0225be74::func_ov049_0225a210,
            &Unk_ov049_0225be74::func_ov049_02259b28,
        };
        char *s = data_ov049_0225bc58[0];
        u32 n = func_0212a438(s);
        BOOL r;
        if (func_0212a15c((u8 *)this + 4, s, n) != 0) {
            r = TRUE;
        } else {
            r = FALSE;
        }
        (this->*tbl[r])(a);
    }
}

void Unk_ov049_0225be74::func_ov049_0225a3c4() {}

void Unk_ov049_0225be74::func_ov049_0225a3c8() {
    func_02015170(this, 8, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 5);
}

void Unk_ov049_0225be74::func_ov049_0225a3ec() {
    func_02015170(this, 7, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 4);
}

void Unk_ov049_0225be74::func_ov049_0225a410() {
    func_02015170(this, 5, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 3);
}

static inline BOOL Unk_ov049_0225a434_R2(Unk_ov049_0225a434_Owner *o, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (o->unk_734 >= lo && o->unk_734 <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_ov049_0225be74::func_ov049_0225a434() {
    BOOL f = Unk_ov049_0225a434_R2(unk_ac, 0x11a8, 0x12a7);
    u32 v = unk_ac->unk_734;
    if (f) {
        func_ov049_022594e0(this, data_ov049_0225bce4, data_ov049_0225bce4[0].count - 1);
    } else if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x13a8 && v <= 0x13c7)) {
        func_ov049_022594e0(this, &data_ov049_0225bce4[1], data_ov049_0225bce4[1].count - 1);
    } else if (v >= 0x1431 && v <= 0x1470) {
        func_ov049_022594e0(this, &data_ov049_0225bce4[2], data_ov049_0225bce4[2].count - 1);
    } else if (v >= 0x1380 && v <= 0x139f) {
        func_ov049_022594e0(this, &data_ov049_0225bce4[3], data_ov049_0225bce4[3].count - 1);
    }
}

void Unk_ov049_0225be74::func_ov049_0225a4fc() {
    func_0201ad4c(unk_ac, unk_b8);
}

void Unk_ov049_0225be74::func_ov049_0225a510() {
    func_02015170(this, 0x1e, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 6);
}

void Unk_ov049_0225be74::func_ov049_0225a534() {
    func_0201adc8(unk_ac, 0x15e);
}

void Unk_ov049_0225be74::func_ov049_0225a548() {
    func_02015170(this, 0xb, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 2);
}

void Unk_ov049_0225be74::func_ov049_0225a56c() {
    func_02015170(this, 4, 0);
    func_020151d0(this, 2);
    func_ov049_02259a8c(this, 1);
}

void Unk_ov049_0225be74::func_ov049_0225a590() {
    static Unk_ov049_0225a590_Ent tbl[9] = {
        {0xe, &Unk_ov049_0225be74::func_ov049_0225a56c},
        {0x11, &Unk_ov049_0225be74::func_ov049_0225a548},
        {0x12, &Unk_ov049_0225be74::func_ov049_0225a534},
        {0x14, &Unk_ov049_0225be74::func_ov049_0225a510},
        {0x1e, &Unk_ov049_0225be74::func_ov049_0225a4fc},
        {0x28, &Unk_ov049_0225be74::func_ov049_0225a434},
        {0x36, &Unk_ov049_0225be74::func_ov049_0225a410},
        {0x26, &Unk_ov049_0225be74::func_ov049_0225a3ec},
        {0x23, &Unk_ov049_0225be74::func_ov049_0225a3c8},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov049_0225a590_Ent *)((u32)tbl + i * 12))->fn)();
    }
    i++;
test0:
    if (i < 9) goto loop0;
}

void Unk_ov049_0225be74::vfunc_14(u32 a) {
    if (func_ov049_0225aa48() != 2 || !func_020a032c()) {
        static Unk_ov049_0225be74_Fn tbl[2] = {
            (Unk_ov049_0225be74_Fn)&Unk_ov049_0225be74::func_ov049_0225a590,
            (Unk_ov049_0225be74_Fn)&Unk_ov049_0225be74::func_ov049_0225a3c4,
        };
        char *s = data_ov049_0225bc58[0];
        u32 n = func_0212a438(s);
        BOOL r;
        if (func_0212a15c((u8 *)this + 4, s, n) != 0) {
            r = TRUE;
        } else {
            r = FALSE;
        }
        (this->*tbl[r])(a);
    }
}

struct Unk_ov049_0225a714_Bits {
    u8 lo : 2;
    u8 mid : 3;
    u8 hi : 3;
};

void Unk_ov049_0225be74::vfunc_78(Unk_ov049_0225a714_Out *out) {
    void *r7 = func_0209750c();
    void *r6 = func_02099864(func_0209865c());
    u8 buf[4];
    if (func_020a032c() != 0 && func_ov049_0225aa48() == 2) {
        out->unk_00 = data_ov049_0225bc58[2];
        out->unk_04 = 6;
        return;
    }
    if (func_ov049_0225aa48() == 2 && func_02099f98(r6, &unk_ac->unk_ea) != 0) {
        out->unk_04 = 0x2e;
        out->unk_00 = data_ov049_0225bc58[0];
        return;
    }
    if (func_ov049_0225aa48() == 2 && func_0202e18c(unk_ac, buf, 2) != 0) {
        unk_ac->unk_965 = 1;
        Unk_ov049_0225a714_Bits *b = (Unk_ov049_0225a714_Bits *)buf;
        out->unk_04 = *(data_ov049_0225b794 + b->mid * 7 + b->hi);
        out->unk_00 = data_ov049_0225bc58[1];
        return;
    }
    out->unk_04 = data_ov049_0225b78c[unk_b0];
    out->unk_00 = data_ov049_0225bc58[0];
    if (func_ov049_0225aa48() == 4) {
        unk_b8 = (s32)func_0204be70(&unk_ac->unk_734);
        func_02015958(this, unk_b8, 0, 0xa, 1, 0);
        func_0201578c(this, &unk_ac->unk_734, 0, 7);
        if (func_020a032c() != 0) {
            out->unk_00 = data_ov049_0225bc58[2];
            out->unk_04 = 0x1e;
        }
    } else if (func_ov049_0225aa48() == 5) {
        u8 *g = data_021d7350;
        BOOL f = Unk_ov049_0225a434_R2(unk_ac, 0x3e04, 0x3e23);
        u32 v = unk_ac->unk_734;
        s32 t;
        if (f) {
            t = (s32)(v - 0x3e04) >> 2;
        } else {
            t = -1;
        }
        unk_ac->unk_966 = t;
        void *q6 = func_02071b00(g + 0xfafc, unk_ac->unk_966);
        Unk_ov049_0225a714_Q q;
        func_02071f70(func_02071e04(q6), &q);
        func_020679ec(unk_3c, 2, &q, 7);
        Unk_ov049_0225a714_Pair a(*func_02071fa0(func_02071e04(q6)));
        Unk_ov049_0225a714_Pair b(*func_0209888c(r7));
        Unk_ov049_0225a714_P c(*func_0209409c(&a));
        Unk_ov049_0225a714_P d(*func_0209409c(&b));
        if (func_020a032c() != 0) {
            out->unk_00 = data_ov049_0225bc58[2];
            out->unk_04 = 0x1d;
        } else if (c.id != d.id || func_02128930(&c.name, &d.name, 8) != 0) {
            func_020157e8(this, &a, 2);
            func_02015818(this, &c, 3);
            out->unk_04 = 0x33;
        } else if (a.id0 == b.id0 && func_02128930(&a.name0, &b.name0, 8) == 0 && func_020941e8(&a, &b) != 0) {
        } else {
            func_020157e8(this, &a, 2);
            out->unk_04 = 0x32;
        }
    }
}
