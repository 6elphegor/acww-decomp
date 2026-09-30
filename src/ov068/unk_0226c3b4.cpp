#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov068_02270780;

struct Unk_020660f8 {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};

struct Unk_ov068_0226c63c_Msg {
    s8 unk_00;
    s8 unk_01;
    s8 unk_02;
    s8 unk_03;
    s8 unk_04;
    u8 pad_05[3];
    s32 unk_08;
    u8 pad_0c[8];
};

struct Unk_ov068_0226c3b4_Vec {
    s32 x, y, z;
};

struct Unk_020dd324 {
    Unk_020dd324();
    ~Unk_020dd324();
    u32 pad[0x24 / 4];
};

struct Unk_020dd30c {
    Unk_020dd30c();
    ~Unk_020dd30c();
    u32 pad[0x20 / 4];
};

extern "C" {
extern char data_ov068_02270368[];
extern u8 *data_ov068_02270664[];
extern u32 data_ov068_02270554[];
extern u16 data_020c6cc8;

void func_0209750c();
Unk_ov068_0226c3b4_Vec *func_020947f0(s32 a);
void func_0204ee10(s32 *a, s32 *b, Unk_ov068_0226c3b4_Vec *v);
BOOL func_02095154(s32 a, s32 b);
void func_0203d6cc(void *p, s32 a);
BOOL func_020e7500(void *p);
void func_0201a664(void *self, s32 a, s16 b, s16 c, s16 d, s16 e);
void func_02067a84(Unk_020660f8 *self, u8 *cmd, u8 *tbl);
BOOL func_02099014(u16 *p, s32 a);
void func_0202e1cc(s32 a, s32 b);
void func_02034d84(u16 a);
void func_02064460(s32 a, s32 b);
void func_02064478(s32 a, s32 b, s32 c);
Unk_ov068_0226c63c_Msg *func_02003bbc();
void func_020199e0(void *self, u32 a);
void func_020199d0(void *self);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void func_02019614(void *self, u32 a, u16 b);
void func_020539a0(void *self);
void func_02116048(void *src, void *dst, u32 n);
s32 *func_02067918(s32 a);
s32 func_02063b8c(s32 a);
s16 *func_0209c37c(s32 a, s32 b);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
void *func_0206ecf0();
void func_020a78a4(void *a, void *b, u32 c);
void func_020a7aa0(void *a, void *b, s32 c, s32 d);
void func_020679ec(Unk_020660f8 *self, s32 a, void *b, u32 c);
BOOL func_0206ed18();
u32 func_0206ed38();
s32 func_02098eb0(u16 *p);
void func_02099064();
u32 func_020679b4(Unk_020660f8 *self);
u32 func_020aa514(u32 a);

void func_ov004_0223f350();
void func_ov004_0223f3cc();
void func_ov004_0223f850();
void func_ov004_0223f2f4();
void func_ov004_0223f860();
void func_ov004_0223f31c(s32 a);
void func_ov004_0223f3a4();
BOOL func_ov004_0223f2c8();
void func_ov004_0223f870();
void func_ov004_0223f3f4();
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
    u8 pad_a8[4];
    s32 unk_ac;
    u8 pad_b0[0x2a0 - 0xec - 0xb0];
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
    virtual void vfunc_4c(s32 a);
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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(s32 a);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
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
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x1d];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020d7714 : public Unk_020ddcf0 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual s32 vfunc_6c();
    virtual void vfunc_78() = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015ab0(u32 a);

    /* 0x44 */ u32 unk_44;
    /* 0x48 */ void *unk_48;
    /* 0x4c */ void *unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 unk_51;
    /* 0x52 */ u8 pad_52[6];
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ u8 pad_64[0x16];
    /* 0x7a */ u16 unk_7a;
};

class Unk_ov068_02270810;
typedef void (Unk_ov068_02270780::*Unk_ov068_02270780_Fn)();
typedef void (Unk_ov068_02270780::*Unk_ov068_02270780_Fn1)(s32);

struct Unk_ov068_02270780_Ent {
    Unk_ov068_02270780_Fn fn;
    u32 flag;
};

extern "C" {
extern Unk_ov068_02270780_Ent data_ov068_02270730[];
extern u8 data_ov068_02270738[];
}

// Scene object at +0x65c of Unk_ov068_02270810 (vtable 0x02270780)
class Unk_ov068_02270780 : public Unk_020d7714 {
public:
    virtual void vfunc_18(s32 a);
    virtual void vfunc_78();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov068_0226c4d8();
    void func_ov068_0226c530();
    void func_ov068_0226c63c();
    void func_ov068_0226c870();
    void func_ov068_0226c9b0();
    void func_ov068_0226cab8(s32 state);
    void func_ov068_0226cb54(s32 a);
    void func_ov068_0226cba4(s32 a);
    void func_ov068_0226cbe4(s32 a);
    s32 func_ov068_0226cbf8(s32 a);
    void func_ov068_0226d078(s32 a);

    /* 0x7c */ u8 pad_7c[0xb0 - 0x7c];
    /* 0xb0 */ Unk_ov068_02270810 *unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ Unk_ov068_0226c63c_Msg unk_b8;
    /* 0xcc */ u8 unk_cc;
    /* 0xcd */ u8 pad_cd[3];
};

class Unk_ov068_02270810 : public Unk_020d8bc8 {
public:
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    BOOL func_ov068_0226c3b4();
    s32 func_ov068_0226d39c(s32 a);
    u16 func_ov068_0226c340();

    /* 0x652 */ u16 unk_652;
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ s32 unk_658;
    /* 0x65c */ Unk_ov068_02270780 unk_65c;
    /* 0x72c */ s32 unk_72c;
    /* 0x730 */ u8 unk_730[0x10];
    /* 0x740 */ u16 unk_740;
    /* 0x742 */ u8 unk_742;
    /* 0x743 */ u8 unk_743;
    /* 0x744 */ u8 unk_744;
};

struct Unk_ov068_0226c870_Pad {
    s32 v[2];
    Unk_ov068_0226c870_Pad() {}
    ~Unk_ov068_0226c870_Pad() {}
};

struct Unk_ov068_02270780_Stat {
    u32 id;
    Unk_ov068_02270780_Fn1 fn;
};

BOOL Unk_ov068_02270810::func_ov068_0226c3b4() {
    if (unk_742 == 0) {
        return FALSE;
    }
    func_0209750c();
    Unk_ov068_0226c3b4_Vec v;
    v = *func_020947f0(4);
    s32 a = 0;
    s32 b = 0;
    func_0204ee10(&a, &b, &v);
    if (func_02095154(0x25, 4) != 0 && a == 9 && b == 0xd) {
        func_0203d6cc(this, 0);
    }
    return TRUE;
}

void Unk_ov068_02270810::vfunc_4c(s32 mode) {
    switch (mode) {
    case 0:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(func_0201bc4c(4));
        if (unk_72c == 7) {
            unk_65c.func_ov068_0226d078(0);
        }
        func_ov068_0226d39c(1);
        break;
    case 1:
        unk_65c.vfunc_08();
        unk_65c.func_02015ab0(func_0201bc4c(4));
        if (unk_744 != 0) {
            unk_65c.func_ov068_0226d078(1);
        } else {
            unk_65c.func_ov068_0226d078(2);
        }
        func_ov068_0226d39c(3);
        break;
    case 8:
        func_ov068_0226d39c(0);
        break;
    }
}

BOOL Unk_ov068_02270810::vfunc_48() {
    BOOL r = FALSE;
    if (unk_658 == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov068_02270780::func_ov068_0226c4d8() {
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        func_0201a664(&unk_b0->unk_3b0, 0, 0, 0x1000, 0x276, 0x276);
        unk_3c->unk_08 = 1;
        func_ov068_0226cab8(0);
    }
}

void Unk_ov068_02270780::func_ov068_0226c530() {
    u8 c0, c1, c2;
    u16 h;
    if (func_020e7500(&unk_b0->unk_740) == 0) {
        unk_b0->unk_742 = 0;
        if (unk_b0->unk_743 != 0) {
            c0 = 0xb;
            func_02067a84(unk_3c, &c0, data_ov068_02270664[unk_b0->unk_72c]);
        } else {
            h = unk_b0->unk_652;
            if (func_02099014(&h, 0) == 0) {
                c1 = 0xd;
                func_02067a84(unk_3c, &c1, data_ov068_02270664[unk_b0->unk_72c]);
            } else {
                func_0202e1cc(0xd, 1);
                c2 = 0xc;
                func_02067a84(unk_3c, &c2, data_ov068_02270664[unk_b0->unk_72c]);
            }
        }
        func_ov004_0223f350();
        func_02034d84(unk_b0->unk_654);
        unk_b0->unk_740 = 0x1e;
        func_02064460(1, 1);
        func_02064478(0, 0x1e, 0);
        func_ov068_0226cab8(5);
    }
}

void Unk_ov068_02270780::func_ov068_0226c63c() {
    Unk_ov068_0226c63c_Msg *p = func_02003bbc();
    func_ov004_0223f3cc();
    if (p != NULL) {
        if (p->unk_03 == 1 && unk_b8.unk_03 == 1) {
            goto end;
        }
        s32 t4 = p->unk_04;
        if (t4 != unk_b8.unk_04) {
            if (t4 == 2) {
                func_ov004_0223f850();
                func_ov004_0223f2f4();
            } else if ((u8)t4 <= 1) {
                func_ov004_0223f860();
            }
        }
        s32 t1 = p->unk_01;
        if (t1 != unk_b8.unk_01) {
            if (t1 == -1) {
                func_020199e0(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
            } else {
                func_020199e0(&unk_b0->unk_2ac, data_ov068_02270554[t1]);
            }
        }
        s32 t2 = p->unk_02;
        if (t2 != unk_b8.unk_02 || p->unk_00 != unk_b8.unk_00) {
            if (t2 == 1) {
                func_0201a664(&unk_b0->unk_3b0, 0, 0, 0, 0x100, 0x200);
            } else {
                func_0201a664(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x100, 0x200);
            }
            u16 v = data_020c6cc8;
            if (unk_cc == 0) {
                v = 0x28;
                unk_cc = 1;
            }
            s32 t0 = p->unk_00;
            if (t0 == 3) {
                func_020195c8(&unk_b0->unk_564, 2, 0x103, 0, v, 0);
            } else if (t0 == 4) {
                func_020195c8(&unk_b0->unk_564, 2, 0x104, 0, v, 0);
            }
        }
        if ((u8)(s8)(p->unk_00 - 3) <= 1) {
            unk_b0->unk_ec.unk_a4 = 0;
            unk_b0->unk_ec.unk_ac = p->unk_08;
            func_020539a0(&unk_b0->unk_ec);
            unk_b0->unk_ec.unk_ac = 0;
        }
        {
            s32 t3 = p->unk_03;
            if (t3 != unk_b8.unk_03) {
                if (t3 == 0) {
                    func_ov004_0223f3cc();
                    func_ov004_0223f31c(0);
                    func_ov004_0223f3a4();
                }
                if (p->unk_03 == 1) {
                    func_020199e0(&unk_b0->unk_2ac, (u32)data_ov068_02270368);
                    func_020199d0(&unk_b0->unk_2ac);
                    func_02019614(&unk_b0->unk_564, 2, 0x28);
                }
            }
        }
    }
end:
    func_ov004_0223f3a4();
    func_02116048(p, &unk_b8, 0x14);
    if (func_ov004_0223f2c8()) {
        unk_b0->unk_740 = 0x14;
        func_ov068_0226cab8(4);
    }
}

void Unk_ov068_02270780::func_ov068_0226c870() {
    Unk_ov068_0226c870_Pad pad;
    s32 *q = func_02067918(0);
    if (q[1] == 5) {
        if (unk_b0->unk_740 == 0x2d) {
            func_02064460(0, 0x1e);
            func_02064478(1, 1, 0);
            func_0201a664(&unk_b0->unk_3b0, 0, -0xc18, 0, 0x276, 0x276);
        }
        if (func_020e7500(&unk_b0->unk_740) == 0) {
            func_ov004_0223f870();
            unk_b0->unk_654 = 0;
            if (unk_b0->unk_743 != 0) {
                unk_b0->unk_654 = func_02063b8c(3) + 0xa9;
                s16 *r = func_0209c37c(0, 0x4e);
                if (*r != 0) {
                    r = func_0209c37c(0, 0x4e);
                    s32 t = *r - 1;
                    if (t < 0) {
                        t = 0;
                    } else if (t > 3) {
                        t = 3;
                    }
                    unk_b0->unk_654 = t + 0xa9;
                }
            } else {
                u32 h = unk_b0->unk_652;
                s32 t;
                if (h >= 0x1323 && h <= 0x1368) {
                    t = h - 0x1323;
                } else {
                    t = -1;
                }
                unk_b0->unk_654 = t + 0x63;
            }
            func_02034e10(0xf, (u16)unk_b0->unk_654, 0x7f, 0);
            unk_cc = 0;
            func_ov004_0223f3f4();
            func_ov068_0226cab8(3);
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226c9b0() {
    u8 cmd;
    u16 tmp;
    func_02116048(func_0206ecf0(), unk_b0->unk_730, 0x10);
    Unk_020dd324 objA;
    Unk_020dd30c objB;
    func_020a78a4(&objB, unk_b0->unk_730, 0x10);
    func_020a7aa0(&objA, &objB, 0, 0);
    func_020679ec(unk_3c, 0, &objA, 7);
    if (func_0206ed18()) {
        u32 v;
        u16 h;
        unk_b0->unk_743 = 0;
        v = func_0206ed38();
        if (v < 0x46) {
            h = v + 0x1323;
        } else {
            h = 0x1323;
        }
        unk_b0->unk_652 = h;
        tmp = unk_b0->unk_652;
        func_0201578c((u32)&tmp, 1, 7);
    } else {
        unk_b0->unk_743 = 1;
        unk_b0->unk_652 = unk_b0->func_ov068_0226c340();
    }
    cmd = 8;
    func_02067a84(unk_3c, &cmd, data_ov068_02270664[unk_b0->unk_72c]);
}

void Unk_ov068_02270780::vfunc_84() {
    s32 i = unk_b4;
    if (((u8 *)data_ov068_02270738)[i * 12] == 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
            func_ov068_0226cab8(0);
        }
    }
}

void Unk_ov068_02270780::vfunc_80() {
    s32 i = unk_b4;
    if (((u8 *)data_ov068_02270738)[i * 12] != 0) {
        Unk_ov068_02270780_Ent *e = &data_ov068_02270730[i];
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226cb54(s32 a) {
    if (a == 0) {
        unk_b0->unk_744 = 1;
    } else {
        unk_b0->unk_744 = 0;
        unk_b0->unk_743 = 0;
        unk_b0->unk_652 = unk_b0->func_ov068_0226c340();
    }
}

void Unk_ov068_02270780::func_ov068_0226cba4(s32 a) {
    u16 h0;
    u16 h1;
    if (a == 0) {
        h0 = 0x3530;
        if (func_02098eb0(&h0) != -1) {
            func_02099064();
            h1 = 0x4a34;
            func_02099014(&h1, 0);
        }
    }
}

void Unk_ov068_02270780::func_ov068_0226cbe4(s32 a) {
    if (a == 0) {
        unk_b0->unk_742 = 1;
    }
}

s32 Unk_ov068_02270780::func_ov068_0226cbf8(s32 a) {
    static Unk_ov068_02270780_Stat tbl[5] = {
        {1, &Unk_ov068_02270780::func_ov068_0226cbe4},
        {2, &Unk_ov068_02270780::func_ov068_0226cbe4},
        {3, &Unk_ov068_02270780::func_ov068_0226cbe4},
        {5, &Unk_ov068_02270780::func_ov068_0226cb54},
        {0xe, &Unk_ov068_02270780::func_ov068_0226cba4},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    u32 idv = tbl[i].id;
    u32 off = i * 12;
    if (idv == *pe) {
        u32 x = func_020aa514(func_020679b4(unk_3c));
        Unk_ov068_02270780_Fn1 *fp = (Unk_ov068_02270780_Fn1 *)((u8 *)tbl + off + 4);
        (this->*(*fp))(x);
    }
    i++;
test:
    if (i < 5) goto loop;
}

void Unk_ov068_02270780::vfunc_18(s32 a) {
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cbf8(a);
    }
}

void Unk_ov068_02270780::func_ov068_0226cab8(s32 state) {
    unk_b4 = state;
}
