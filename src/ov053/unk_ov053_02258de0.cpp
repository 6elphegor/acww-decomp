#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;
class Unk_ov053_0225a558;
class Unk_ov053_0225a4c8;

struct Unk_ov053_02258e7c_Vec {
    s32 x, y, z;
};

struct Unk_ov053_02258e7c_Loc : Unk_ov053_02258e7c_Vec {
    Unk_ov053_02258e7c_Loc() {}
};

extern "C" {
extern u8 data_ov053_0225a180[];
extern u8 data_ov053_0225a184[];
extern Unk_ov053_02258e7c_Vec data_ov053_0225a188;
extern Unk_ov053_02258e7c_Vec data_ov053_0225a194;
extern u8 data_ov053_0225a1ac[];
extern const void *data_ov053_0225a340;
extern u8 data_021edb5c[];
extern u16 data_020c6cc8[];

void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
void func_0203d704(void *self, s32 a);
BOOL func_0203d64c(void);
s32 func_0203d6cc(void *p, s32 a);
s32 func_02095154(s32 a, s32 b);
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_0209750c();
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
u16 *func_020986fc(void *p);
u16 *func_02098714(void *p);
void *func_0209868c(void *p);
u32 func_02087c38(void *p);
void *func_0209888c(void *p);
s32 func_0209411c(void *p);
s32 func_02014220(void *self);
s32 func_020aa514(void *p);
void *func_02015a5c(void *p);
s32 func_0208a598();
s32 func_0201ade4(void *o, s32 a);
void func_0201adc8(void *o, s32 v);
void func_020851a4(void *p, s32 v);
void func_02085188(void *p, s32 v);
s32 func_02098840(void *p);
s32 func_02098814(void *p);
void func_02067a84(void *ctx, u8 *msg, const void *tbl);
void func_ov004_02224b78(s32 v);
void func_0200402c(s32 v);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 func_02098044(void *h, s32 v);
void func_0209801c(void *h, s32 v);
s32 func_02063b8c(s32 n);
void func_ov004_0222487c();
void func_02087c24(void *p, u32 v);
void func_0203a844();
void func_02094b0c(void *v, s32 a, s32 b);
s32 func_020951b8(s32 a);
void func_0203d67c(void *self);
void func_ov004_022248e8(u8 *a, u8 *b);
void func_ov004_02225290();
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
BOOL func_0201622c(void *self, s32 a, void *b);
BOOL func_02019790(void *self);
void func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 func_020e7518(void *p);
void func_02015ab0(void *self, s32 v);
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
    void func_0201a99c(s32 v);
};
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
    u8 pad_04[8];
    u16 unk_0c;
    u8 pad_0e[0x5c - 0xe];
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
    virtual void vfunc_4c(u32 a, u8 b);
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
    s32 func_0201bc70(u32 id);
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

// Dialog-state base (ctor func_0202e2bc, D2 func_0202e26c), size 0xac.
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

struct Unk_ov053_02259428_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov053_02259428_Ent {
    const void *p;
    u8 v;
};

// Dialog member at +0x658 (vtable 0x0225a4c8)
class Unk_ov053_0225a4c8 : public Unk_0202e2bc {
public:
    Unk_ov053_0225a4c8();
    virtual ~Unk_ov053_0225a4c8();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov053_02259428_Out *out);

    s32 func_ov053_0225911c();
    s32 func_ov053_02259568();
    void func_ov053_02259570(s32 v);
    void func_ov053_02259578(Unk_ov053_0225a558 *o);
    u8 func_ov053_02259ed4();
    u8 func_ov053_02259edc();

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov053_0225a558 *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 pad_ba[2];
};

class Unk_ov053_0225a558 : public Unk_020d8bc8 {
public:
    Unk_ov053_0225a558() {}
    virtual ~Unk_ov053_0225a558();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual BOOL vfunc_58();

    s32 func_ov053_02258e34();
    BOOL func_ov053_02258e48();
    BOOL func_ov053_02258e7c();
    BOOL func_ov053_02258ec4();
    BOOL func_ov053_02258f18();
    BOOL func_ov053_022595ec();
    BOOL func_ov053_022595f0();
    BOOL func_ov053_022595f4();
    BOOL func_ov053_022596b0();
    BOOL func_ov053_022596c0();
    void func_ov053_02259ee4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov053_0225a4c8 unk_658;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 pad_715;
    /* 0x716 */ u8 unk_716;
    /* 0x717 */ u8 pad_717;
};

// ---------------------------------------------------------------------------------------------------------------------

Unk_ov053_0225a558::~Unk_ov053_0225a558() {}

s32 Unk_ov053_0225a558::func_ov053_02258e34() {
    return func_020851bc(func_020850e0(), 7);
}

BOOL Unk_ov053_0225a558::func_ov053_02258e48() {
    void *p = func_0209750c();
    if (*func_020986fc(p) != 0xfff1 || *func_02098714(p) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258e7c() {
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_02258e7c_Vec *src = (Unk_ov053_02258e7c_Vec *)func_020947f0(4);
    *(Unk_ov053_02258e7c_Vec *)&v = *src;
    if (func_0202ff64(&v)) {
        unk_658.func_ov053_02259570(10);
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258ec4() {
    if (func_ov053_02258e34() == 0) {
        return FALSE;
    }
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_02258e7c_Vec *src = (Unk_ov053_02258e7c_Vec *)func_020947f0(4);
    *(Unk_ov053_02258e7c_Vec *)&v = *src;
    if (v.z > data_ov053_0225a188.z) {
        unk_658.func_ov053_02259570(8);
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258f18() {
    if (func_0203d64c()) {
        return FALSE;
    }
    if (func_ov053_02258e34() == 0) {
        return FALSE;
    }
    func_0209750c();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_02258e7c_Vec *src = (Unk_ov053_02258e7c_Vec *)func_020947f0(4);
    *(Unk_ov053_02258e7c_Vec *)&v = *src;
    s32 bx = 0, by = 0;
    func_0204ee10(&bx, &by, &v);
    if ((func_02095154(0x25, 4) || func_02095154(0x28, 4)) && func_0203d6cc(this, 0)) {
        s32 f = 0;
        s32 x = bx;
        if (*(volatile s32 *)&bx == 4 && by == 0xb) {
            f = 1;
        }
        if (f != 0 || (x == 5 && by == 0xb)) {
            if (func_ov053_02258e48()) {
                unk_658.func_ov053_02259570(3);
            } else {
                unk_658.func_ov053_02259570(4);
            }
        } else {
            unk_658.func_ov053_02259570(7);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov053_0225a558::vfunc_4c(u32 cmd, u8 arg) {
    func_0209750c();
    unk_558.unk_08 = arg;
    switch (cmd) {
    case 3:
        func_ov053_02259ee4(10);
        break;
    case 1:
        unk_558.unk_08 = arg;
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        if (unk_658.func_ov053_02259568() == 4 || unk_658.func_ov053_02259568() == 3) {
            func_ov053_02259ee4(6);
        } else {
            func_ov053_02259ee4(2);
        }
        break;
    case 0:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov053_02259ee4(2);
        break;
    case 8:
        if (unk_658.func_ov053_02259568() == 9) {
            unk_658.func_ov053_02259570(14);
            func_ov053_02259ee4(5);
        } else if (unk_658.func_ov053_02259568() != 10) {
            unk_658.func_ov053_02259570(14);
            func_ov053_02259ee4(4);
        }
        break;
    }
}

BOOL Unk_ov053_0225a558::vfunc_58() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::vfunc_48() {
    if (func_02014220(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov053_0225a4c8::func_ov053_0225911c() {
    void *p = func_0209750c();
    if (func_02087c38(func_0209868c(p)) >= 0x10) {
        if (func_0209411c(func_0209888c(p)) == 0) {
            return 0x15;
        }
        return 0x16;
    }
    return 0x3e;
}

void Unk_ov053_0225a4c8::vfunc_18() {
    void *p = func_0209750c();
    s32 arg = func_020aa514(func_02015a5c(this));
    const void *tbl = data_ov053_0225a340;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 1:
    case 2:
    case 4:
        if (arg == 0) {
            func_0208a598();
            msg = 8;
        }
        break;
    case 8:
        if (arg == 0) {
            if (func_0201ade4(unk_b0, 0xbb8)) {
                func_0201adc8(unk_b0, 0xbb8);
                msg = 0x3c;
                func_020851a4(func_020850e0(), 7);
                unk_b6 = 0;
                unk_b7 = 0;
                unk_b8 = func_02098840(p);
                unk_b9 = func_02098814(p);
            } else {
                msg = 0x3f;
            }
        }
        break;
    case 9:
    case 10:
        if (arg != 4) {
            unk_b7 = data_ov053_0225a184[arg];
            msg = 0xc;
        }
        break;
    case 11:
    case 0x38:
        if (arg != 4) {
            unk_b7 = data_ov053_0225a180[arg];
            msg = 0xc;
        }
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        func_02067a84(unk_3c, &m, tbl);
    }
}

void Unk_ov053_0225a4c8::vfunc_14() {
    void *p = func_0209750c();
    const void *tbl = data_ov053_0225a340;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 0xd:
        if (unk_b6 == unk_b8 && unk_b7 == unk_b9) {
            msg = 0x37;
        } else {
            msg = 0xe;
        }
        unk_b5 = 0;
        break;
    case 0x17:
        unk_b4 = 1;
        break;
    case 0x18:
        unk_b4 = 0;
        break;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36: {
        s32 r = func_0209411c(func_0209888c(p));
        if (unk_b4 != 0) {
            if (r == 0) {
                r = 1;
            } else {
                r = 0;
            }
        }
        u8 *q = &data_ov053_0225a1ac[(unk_1e - 0x2f) * 2];
        unk_b6 = q[r];
        break;
    }
    case 0x40:
        func_ov004_02224b78(0);
        func_0200402c(0x43);
        msg = func_ov053_0225911c();
        break;
    case 0x42:
        unk_b0->func_ov053_02259ee4(9);
        break;
    case 0xe:
    case 0x37:
        func_0202e1cc(0x13, 1);
        func_02085188(func_020850e0(), 7);
        func_02067a84(unk_3c, data_021edb5c, 0);
        break;
    case 0x41:
        func_ov004_02224b78(1);
        func_0200402c(0x44);
        break;
    case 0x45:
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        func_02067a84(unk_3c, &m, tbl);
    }
}

void Unk_ov053_0225a4c8::vfunc_70() {
    if (unk_1e == 0xc) {
        func_02034dd0(0xe, 0x46, 0);
    }
}

void Unk_ov053_0225a4c8::vfunc_74() {
    u32 t = unk_1e;
    if (t == 0xe || t == 0x37) {
        if ((t == 0xe && unk_b5 == 1) || (t == 0x37 && unk_b5 == 2)) {
            func_ov004_0222487c();
            func_02087c24(func_0209868c(func_0209750c()), 1);
        }
        unk_b5 = unk_b5 + 1;
    }
}

void Unk_ov053_0225a4c8::vfunc_78(Unk_ov053_02259428_Out *out) {
    void *p = func_0209750c();
    static Unk_ov053_02259428_Ent tbl[14] = {
        {data_ov053_0225a340, 0x43}, {data_ov053_0225a340, 0},    {data_ov053_0225a340, 2},
        {data_ov053_0225a340, 0x40}, {data_ov053_0225a340, 0x3e}, {data_ov053_0225a340, 0xd},
        {data_ov053_0225a340, 0x3d}, {data_ov053_0225a340, 0x45}, {data_ov053_0225a340, 0x42},
        {data_ov053_0225a340, 0x41}, {data_ov053_0225a340, 0x46}, {data_ov053_0225a340, 5},
        {data_ov053_0225a340, 6},    {data_ov053_0225a340, 7},
    };
    if (func_ov053_02259568() == 4) {
        out->unk_00 = tbl[unk_ac].p;
        out->unk_04 = func_ov053_0225911c();
    } else {
        if (func_ov053_02259568() != 0 && func_ov053_02259568() != 3 && func_ov053_02259568() != 5 &&
            func_ov053_02259568() != 7 && func_ov053_02259568() != 8 && func_ov053_02259568() != 9 &&
            func_ov053_02259568() != 10) {
            if (unk_b0->func_ov053_02258e34() == 0) {
                if (func_0202e1cc(0x13, 0) == 0) {
                    if (func_02098044(p, 0xb) == 0) {
                        func_ov053_02259570(1);
                        func_0209801c(p, 0xb);
                    } else {
                        func_ov053_02259570(2);
                    }
                } else {
                    func_ov053_02259570(func_02063b8c(3) + 0xb);
                }
            } else {
                func_ov053_02259570(6);
            }
        }
        if (unk_ac >= 0 && unk_ac < 0xe) {
            out->unk_04 = tbl[unk_ac].v;
            out->unk_00 = tbl[unk_ac].p;
        }
    }
}

BOOL Unk_ov053_0225a558::func_ov053_022595f4() {
    func_0209750c();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_02258e7c_Vec *src = (Unk_ov053_02258e7c_Vec *)func_020947f0(4);
    *(Unk_ov053_02258e7c_Vec *)&v = *src;
    s32 bx1 = 0, by1 = 0, bx2 = 0, by2 = 0;
    Unk_ov053_02258e7c_Loc w;
    *(Unk_ov053_02258e7c_Vec *)&w = data_ov053_0225a194;
    s32 dx = w.x, dy = w.y, dz = w.z;
    func_0204ee10(&bx2, &by2, &w);
    func_0204ee10(&bx1, &by1, &v);
    switch (unk_714) {
    case 0:
        if (func_02014220(&unk_618) == 0) {
            func_0203a844();
            unk_714 = 1;
        }
        break;
    case 1: {
        Unk_ov053_02258e7c_Loc u;
        u.x = dx;
        u.y = dy;
        u.z = dz;
        func_02094b0c(&u, 0x266, 4);
        unk_714 = 2;
        break;
    }
    case 2:
        if (func_020951b8(4) == 0) {
            func_0203d67c(this);
            func_ov053_02259ee4(4);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022596b0() {
    unk_714 = 0;
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022596c0() {
    if (func_020e7518(&unk_716) == 0) {
        unk_658.func_ov053_02259570(5);
        func_ov053_02259ee4(2);
    }
    if (unk_716 == 0x55) {
        u8 out[2];
        out[1] = unk_658.func_ov053_02259ed4();
        out[0] = unk_658.func_ov053_02259edc();
        func_ov004_022248e8(&out[0], &out[1]);
        func_ov004_02225290();
        func_02003ddc(&unk_514, 0x41, 0x7f, 0);
    }
    if (func_0201622c(&unk_334, 0xf1, &unk_2a0)) {
        if (func_02019790(&unk_564)) {
            func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8[0], 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022595ec() {
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022595f0() {
    return TRUE;
}

// ---- member small functions (defined late so callers keep bl) ----

s32 Unk_ov053_0225a4c8::func_ov053_02259568() {
    return unk_ac;
}

void Unk_ov053_0225a4c8::func_ov053_02259570(s32 v) {
    unk_ac = v;
}

void Unk_ov053_0225a4c8::func_ov053_02259578(Unk_ov053_0225a558 *o) {
    vfunc_08();
    unk_b0 = o;
    unk_ac = 0xe;
}

Unk_ov053_0225a4c8::~Unk_ov053_0225a4c8() {}

Unk_ov053_0225a4c8::Unk_ov053_0225a4c8() {}
