#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void *func_0209750c();
void func_0203d67c(void *p);
void func_0201bc28(void *p, void *q);
void func_0201bda8(void *p, u16 *q);
u32 func_020ae02c(void *p);
void func_020ed188(void *p);
void func_02034d70(u32 a);
void func_02034d18();
void func_02034d04();
void func_02034dd0(u32 a, u32 b, u32 c);
void func_0203a844();
s32 func_02095154(s32 a, s32 b);
void func_ov004_02224a38(s32 a);
void func_ov004_0223f880();
void func_ov004_0223f350();
void func_ov004_022264b8(void *p);
void func_ov004_022264a0();
void func_02105f90(s32 a, s32 b);
void func_0201610c(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_02053848(void *a, s32 b, s32 c);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void func_0201a664(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0201a730(void *self, s32 a);
void func_02014198(void *self, u8 a, u8 b);
s32 func_02014220(void *self);
void func_0201ad34(void *self, s32 a);
void func_0201ad30(void *self, s32 a);
void func_0201ad2c(void *self, s32 a);
void func_0209d498(void *p);
s32 func_02072e88(void *g, s32 v);
s32 func_0209ea50(void *p);
s32 func_0209cef4();
s32 func_02085f7c(void *p);
s32 func_02085f98(void *p);
s32 func_02085f90(void *p);
s32 func_02085fa0(void *p);
s32 func_02002cf8(u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02063b8c(s32 a);
s32 func_02098eb0(u16 *p);
s32 func_02098044(void *p, s32 a);
void func_0209801c(void *p, s32 a);
void func_02015170(void *self, u32 a, u32 b);
void func_020151d0(void *self, u32 a);
void func_0201578c(void *self, u16 *p, s32 a, s32 b);
void func_020679ec(void *self, s32 a, void *p, s32 b);
void func_020a78a4(void *dst, void *src, s32 n);
void func_020a7aa0(void *a, void *b, s32 c, s32 d);
extern u16 data_020c6cc8;
extern s16 data_020c6cc4;
extern s16 data_020c6cbc;
extern s32 data_020c6d1c;
extern u32 data_021f4880[];
extern u32 data_021ed104;
extern u8 data_021ed315[];
extern u8 data_021e58a7[];
extern u8 data_020cbb18[];
extern const char *data_ov068_02270664[];
extern const char *data_ov068_02270688[];
extern const char *data_ov068_022706d0[];
extern u8 data_ov068_0226f1a8[];
extern u16 data_ov068_0226f1ac[];
}

class Unk_ov068_02270810;

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

struct Unk_ov068_0226ccd4_P3c {
    u8 pad_00[0x14];
    s32 unk_14;
};

struct Unk_ov068_0226ce70_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov068_0226ce70_Date {
    u32 a;
    u32 b;
};

// View of the owner (Unk_ov068_02270810) as seen from the sub-object.
struct Unk_ov068_0226ccd4_Owner {
    u8 pad_000[0x652];
    u16 unk_652;
    u8 pad_654[0x72c - 0x654];
    s32 unk_72c;
    u8 unk_730[0x10];
    u16 unk_740;
    u8 unk_742;
};

struct Unk_020f8134 {
    Unk_020f8134();
    s8 unk_00[5];
    u8 pad_05[0x13];
};

class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual BOOL vfunc_08();
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
    virtual void vfunc_78(Unk_ov068_0226ce70_Out *out) = 0;

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_ov068_0226ccd4_P3c *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_ov068_02270780;

typedef void (Unk_ov068_02270780::*Unk_ov068_0226cd18_Fn)();

struct Unk_ov068_0226cd18_Ent {
    u32 id;
    Unk_ov068_0226cd18_Fn fn;
};

// Sub-object of the owner at +0x65c (vtable 0x02270780)
class Unk_ov068_02270780 : public Unk_0202e2bc {
public:
    Unk_ov068_02270780();
    virtual ~Unk_ov068_02270780();
    virtual void vfunc_10(s32 a);
    virtual void vfunc_14(s32 a);
    virtual void vfunc_78(Unk_ov068_0226ce70_Out *out);

    void func_ov068_0226ccd4();
    void func_ov068_0226ccf4();
    void func_ov068_0226cd18(s32 a);
    void func_ov068_0226cdcc(s32 a);
    s32 func_ov068_0226d070();
    void func_ov068_0226d078(s32 v);
    void func_ov068_0226d080(Unk_ov068_0226ccd4_Owner *o);
    void func_ov068_0226cab8(s32 a);

    s32 unk_ac;
    Unk_ov068_0226ccd4_Owner *unk_b0;
    u32 pad_b4;
    Unk_020f8134 unk_b8;
};

// ---- owner and its bases (same layout as ov068_013) ----
struct Unk_02053d3c { Unk_02053d3c(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc {
    Unk_0201accc();
    u32 pad[0x58 / 4];
};
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 {
    Unk_0201a794();
    u32 pad[0x68 / 4];
};
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x1c / 4]; u32 unk_1c; u32 pad_20[0x24 / 4]; u8 unk_44; u8 unk_45; u8 pad_46[2]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 {
    Unk_02019858();
    u32 pad[0xb4 / 4];
};
struct Unk_02014254 {
    Unk_02014254();
    u32 pad[0x28 / 4];
};
struct Unk_02082014 { Unk_02082014(); u32 pad[0x14 / 4]; };

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    void func_0203e468(s32 v);
    u32 pad_04[0x58 / 4];
    s32 unk_5c;
    u32 unk_60;
    s32 unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xd4 - 0x96];
    u32 unk_d4, unk_d8, unk_dc;
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    u16 pad_e0[5];
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_a8();
    Unk_02082014 unk_640;
    u32 unk_654;
};

typedef BOOL (Unk_ov068_02270810::*Unk_ov068_0226d39c_Fn)();
struct Unk_ov068_0226d39c_Entry {
    Unk_ov068_0226d39c_Fn a;
    Unk_ov068_0226d39c_Fn b;
};
extern "C" Unk_ov068_0226d39c_Entry data_ov068_02271200[];

class Unk_ov068_02270810 : public Unk_020d8bc8 {
public:
    Unk_ov068_02270810() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();

    BOOL func_ov068_0226d0f4();
    BOOL func_ov068_0226d150();
    BOOL func_ov068_0226d1d0();
    BOOL func_ov068_0226d1f0();
    BOOL func_ov068_0226d1f4();
    BOOL func_ov068_0226d1f8();
    BOOL func_ov068_0226d1fc();
    BOOL func_ov068_0226d238();
    BOOL func_ov068_0226d2b0();
    BOOL func_ov068_0226d2ec();
    void func_ov068_0226d39c(s32 state);
    void func_ov068_0226c3b4();

    s32 unk_658;
    Unk_ov068_02270780 unk_65c;
    s32 unk_72c;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov068_02270780::~Unk_ov068_02270780() {}

Unk_ov068_02270780::Unk_ov068_02270780() {}

void Unk_ov068_02270780::func_ov068_0226ccd4() {
    unk_3c->unk_14 = 0;
    unk_b0->unk_740 = 0x2d;
    func_ov068_0226cab8(2);
}

void Unk_ov068_02270780::func_ov068_0226ccf4() {
    func_02015170(this, 0xd, 0);
    func_020151d0(this, 2);
    func_ov068_0226cab8(1);
}

void Unk_ov068_02270780::func_ov068_0226cd18(s32 a) {
    static Unk_ov068_0226cd18_Ent tbl[3] = {
        {7, &Unk_ov068_02270780::func_ov068_0226ccf4},
        {6, &Unk_ov068_02270780::func_ov068_0226ccd4},
        {9, &Unk_ov068_02270780::func_ov068_0226ccd4},
    };
    s32 i = 0;
    u8 *pc = &unk_1e;
    for (; (u32)i < 3; i++) {
        u32 off = i * 12;
        u32 id = tbl[i].id;
        if (id == *pc) {
            Unk_ov068_0226cd18_Ent *e = (Unk_ov068_0226cd18_Ent *)((u32)tbl + off);
            (this->*e->fn)();
        }
    }
}

void Unk_ov068_02270780::vfunc_14(s32 a) {
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cd18(a);
    }
}

void Unk_ov068_02270780::func_ov068_0226cdcc(s32 a) {
    switch (unk_1e) {
    case 12:
    case 13: {
        u16 v = unk_b0->unk_652;
        func_0201578c(this, &v, 1, 7);
        break;
    }
    case 11: {
        Unk_020dd324 a;
        Unk_020dd30c b;
        func_020a78a4(&b, unk_b0->unk_730, 0x10);
        func_020a7aa0(&a, &b, 0, 0);
        func_020679ec(unk_3c, 0, &a, 7);
        break;
    }
    }
}

void Unk_ov068_02270780::vfunc_10(s32 a) {
    if (unk_b0->unk_72c == 7) {
        func_ov068_0226cdcc(a);
    }
}

void Unk_ov068_02270780::vfunc_78(Unk_ov068_0226ce70_Out *out) {
    u16 h0, h2, h4, h6;
    unk_b8.unk_00[0] = -1;
    unk_b8.unk_00[1] = -1;
    unk_b8.unk_00[2] = -1;
    unk_b8.unk_00[3] = -1;
    unk_b8.unk_00[4] = -1;
    void *p = func_0209750c();
    out->unk_00 = data_ov068_02270664[unk_b0->unk_72c];
    if (unk_b0->unk_72c == 7) {
        if (func_ov068_0226d070() == 0) {
            Unk_ov068_0226ce70_Date d;
            d.a = 0;
            d.b = 0;
            func_0209d498(&d);
            u8 m = ((u8 *)&d)[2];
            if (m < 0x14 && m >= 0x13) {
                h0 = 0x3530;
                s32 r = func_02098eb0(&h0);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->unk_04 = 0xe;
                } else {
                    out->unk_04 = 0x13;
                }
            } else if (unk_b0->unk_742 != 0) {
                out->unk_04 = 0;
            } else if (func_0202e1cc(0xd, 0) != 0) {
                h2 = 0x3530;
                s32 r = func_02098eb0(&h2);
                BOOL ok = FALSE;
                if (r != -1) {
                    ok = TRUE;
                }
                if (ok) {
                    out->unk_04 = 0xe;
                } else {
                    out->unk_04 = 0x12;
                }
            } else if (func_02098044(p, 7) == 0) {
                out->unk_04 = 1;
                func_0209801c(p, 7);
            } else if (func_0202e1cc(0xc, 1) == 0) {
                out->unk_04 = 2;
            } else {
                out->unk_04 = 3;
            }
        } else {
            if (func_ov068_0226d070() == 1) {
                Unk_020dd324 a;
                Unk_020dd30c b;
                func_020a78a4(&b, unk_b0->unk_730, 0x10);
                func_020a7aa0(&a, &b, 0, 0);
                func_020679ec(unk_3c, 0, &a, 7);
            } else if (func_ov068_0226d070() == 2) {
                h4 = unk_b0->unk_652;
                func_0201578c(this, &h4, 1, 7);
                h6 = unk_b0->unk_652;
                func_0201578c(this, &h6, 2, 7);
            }
            out->unk_04 = data_ov068_0226f1a8[unk_ac];
            out->unk_00 = data_ov068_02270664[unk_b0->unk_72c];
        }
    } else {
        if (func_0202e1cc(unk_b0->unk_72c + 0x21, 1) == 0) {
            out->unk_04 = func_02063b8c(3);
        } else {
            out->unk_04 = func_02063b8c(5) + 3;
        }
    }
}

s32 Unk_ov068_02270780::func_ov068_0226d070() { return unk_ac; }

void Unk_ov068_02270780::func_ov068_0226d078(s32 v) { unk_ac = v; }

void Unk_ov068_02270780::func_ov068_0226d080(Unk_ov068_0226ccd4_Owner *o) {
    vfunc_08();
    unk_b0 = o;
}

// ---- owner ----
BOOL Unk_ov068_02270810::func_ov068_0226d0f4() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        if (func_02095154(0x28, 4)) {
            func_ov004_02224a38(0);
        }
        func_02034d70(0x10);
        func_02034d18();
        func_0203a844();
        func_ov068_0226d39c(4);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d150() {
    func_020195c8(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    func_ov004_0223f880();
    func_0201a664(&unk_3b0, 0, 0, 0x1000, data_020c6cc4, data_020c6cbc);
    func_02014198(&unk_618, 0, 1);
    func_02034dd0(0x10, 0xf, 0);
    func_02034d04();
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d1d0() {
    if (func_02095154(0x28, 4)) {
        func_ov068_0226d39c(2);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d1f0() { return TRUE; }
BOOL Unk_ov068_02270810::func_ov068_0226d1f4() { return TRUE; }
BOOL Unk_ov068_02270810::func_ov068_0226d1f8() { return TRUE; }

BOOL Unk_ov068_02270810::func_ov068_0226d1fc() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov068_0226d39c(4);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d238() {
    if (unk_72c == 7) {
        func_020195c8(&unk_564, 1, 0x102, 0, data_020c6cc8, 0);
    }
    func_0201a6c0(&unk_3b0, 4, 0, 0, data_021f4880, 4, data_020c6d1c, 0);
    func_02014198(&unk_618, 0, 0);
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d2b0() {
    if (unk_72c == 8) {
        func_020ed188(this);
        return TRUE;
    }
    if (unk_72c == 7) {
        func_ov068_0226c3b4();
    } else {
        func_ov004_022264b8(this);
    }
    if (unk_72c == 6) {
        func_ov004_022264a0();
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::func_ov068_0226d2ec() {
    if (unk_72c == 7) {
        func_0201a6c0(&unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        func_020195c8(&unk_564, 1, 0x105, 0, data_020c6cc8, 0);
        func_0201a664(&unk_3b0, 0, -0xc18, 0, data_020c6cc4, data_020c6cbc);
    } else {
        func_0201a6c0(&unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    }
    return TRUE;
}

void Unk_ov068_02270810::func_ov068_0226d39c(s32 state) {
    BOOL ok = TRUE;
    if (data_ov068_02271200[state].a != NULL) {
        ok = (this->*data_ov068_02271200[state].a)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL Unk_ov068_02270810::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov068_02271200[unk_658].b != NULL) {
        result = (this->*data_ov068_02271200[unk_658].b)();
    }
    return result;
}

const char *Unk_ov068_02270810::vfunc_70() {
    return data_ov068_02270688[unk_72c];
}

const char *Unk_ov068_02270810::vfunc_6c() {
    return data_ov068_022706d0[unk_72c];
}

BOOL Unk_ov068_02270810::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        func_ov004_0223f350();
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    if (unk_72c == 7) {
        func_02105f90(*(s32 *)((u8 *)this + 0x148), 3);
    }
    func_ov068_0226d39c(0);
    unk_4cc.unk_1c |= 2;
    if (unk_72c == 3) {
        func_0201610c(&unk_334, this, 0x142, 0, 0, 0x1000, 0, 1);
        func_02053848(&unk_ec, 0xc, 0xe);
    }
    return TRUE;
}

BOOL Unk_ov068_02270810::vfunc_04() {
    Unk_ov068_0226ce70_Date d;
    u16 h;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(this, &unk_65c);
    unk_65c.func_ov068_0226d080((Unk_ov068_0226ccd4_Owner *)this);
    unk_4cc.unk_45 = 0;
    d.a = 0;
    d.b = 0;
    func_0209d498(&d);
    u8 mo = ((u8 *)&d)[2];
    u8 dy = ((u8 *)&d)[1];
    unk_72c = 8;
    if (func_02072e88(*(void **)data_020cbb18, *(s32 *)(*(u8 **)data_020cbb18 + 0x64))) {
        return TRUE;
    }
    if (func_0209ea50(data_021ed315)) {
        return TRUE;
    }
    u8 *g = data_021e58a7;
    switch (func_0209cef4()) {
    case 6:
        if ((mo == 0x13 && dy >= 0x1e) || mo == 0x14 || mo == 0x15 || mo == 0x16 || (mo == 0x17 && dy <= 0x3b)) {
            unk_72c = 7;
            func_02002cf8(0x10, 0, 0, 0, 0);
        }
        break;
    case 0:
        if (mo == 0x15 && dy < 0x37) {
            unk_72c = 1;
        }
        break;
    default:
        if (mo == 0x15 && dy < 0x37) {
            unk_72c = 1;
        }
        if (mo == 0x17 && dy <= 0x3b) {
            if (func_02085f7c(g)) {
                if (func_020ae02c(&data_021ed104) == 3) {
                    unk_72c = 2;
                }
            }
        }
        break;
    }
    if (mo == 0xc || (mo == 0xd && dy < 0x1e)) {
        switch (func_02085f98(g)) {
        case 2:
            unk_72c = 5;
            break;
        case 1:
            unk_72c = 4;
            break;
        case 3:
            unk_72c = 6;
            break;
        case 4:
            unk_72c = 3;
            break;
        }
    }
    if ((mo == 0xe && dy >= 0x1e) || (mo == 0xf && dy <= 0x3b)) {
        switch (func_02085f90(g)) {
        case 2:
            unk_72c = 5;
            break;
        case 1:
            unk_72c = 4;
            break;
        case 3:
            unk_72c = 6;
            break;
        case 4:
            unk_72c = 3;
            break;
        }
    }
    if (mo == 6 && dy < 0x37 && func_02085fa0(g)) {
        unk_72c = 0;
    }
    h = data_ov068_0226f1ac[unk_72c];
    func_0201bda8(this, &h);
    if (unk_72c == 7) {
        func_0203e468(0x5000);
        unk_5c = 0xf000;
        unk_64 = 0x13000;
        unk_8e = 0;
        unk_94 = 0;
        func_0201ad34(&unk_2a0, 0x102);
        func_0201ad30(&unk_2a0, 0x102);
        func_0201ad2c(&unk_2a0, 0x102);
        func_0201a6c0(&unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    } else {
        func_0201ad34(&unk_2a0, 0x1e);
        func_0201ad30(&unk_2a0, 0x1e);
        func_0201ad2c(&unk_2a0, 0x1e);
        func_0201a730(&unk_3b0, 0);
    }
    return TRUE;
}
