#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov004_0221d4f8_Sing {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_ov004_0221d960_Msg {
    u8 pad_00[0x14];
    u32 unk_14;
};

struct Unk_ov004_0221d9bc_Owner {
    u8 pad_00[0x514];
    u8 unk_514[0x50];
};

class Unk_ov004_0224d010 {
public:
    void func_ov004_0221cf0c(void *v);
    u32 pad_00[0xb8 / 4];
};

class Unk_0201ad20 {
public:
    void func_0201ad2c(s32 a);
    void func_0201ad30(s32 a);
    void func_0201ad34(s32 a);
    u8 pad[0x10];
};

class Unk_0201a8c4 {
public:
    void func_0201a8d0(s32 a, s32 b, s32 c, s32 d);
    u8 pad[0x10];
};

class Unk_02013b10 {
public:
    s32 func_02014220();
    u8 pad[0x28];
};

class Unk_02015b54 {
public:
    virtual ~Unk_02015b54();
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
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_02015170(s32 a, s32 b);
    void func_020151d0(s32 a);
    s32 func_0201578c(u16 *p, s32 a, s32 b);
    void func_020157e8(s32 a, s32 b);
    void func_02015958(s32 a, s32 b, s32 c, s32 d, s32 e);
};

typedef void (Unk_ov004_0224d248_Dummy)();

class Unk_ov004_0224d248;
typedef void (Unk_ov004_0224d248::*Unk_ov004_0224d248_Fn)();

struct Unk_ov004_0224d248_Ent {
    Unk_ov004_0224d248_Fn fn;
    u8 flag;
    u8 pad[3];
};

class Unk_ov004_0224d248 : public Unk_02015b54 {
public:
    virtual ~Unk_ov004_0224d248();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov004_0221d960();
    void func_ov004_0221d9bc();
    void func_ov004_0221dae4();
    void func_ov004_0221db6c(s32 v);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov004_0221d960_Msg *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_ov004_0221d9bc_Owner *unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u32 pad_b4;
};

class Unk_020d77a4 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d77a4();

    BOOL func_0202e3a4();
    BOOL func_0202e514();
    void func_0201bc28(void *p);
    void func_0201bd9c(u32 v);
    void func_0203e468(u32 v);
    s32 func_0201b9bc();
    s32 func_0201ba88();
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);

    u8 pad_04[0x2a0 - 4];
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    virtual ~Unk_020d8bc8();
};

class Unk_ov004_0224d0a0 : public Unk_020d8bc8 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();

    void func_ov004_0221d37c(s32 idx);

    /* 0x2a0 */ Unk_0201ad20 unk_2a0;
    /* 0x2b0 */ u8 pad_2b0[0x350 - 0x2b0];
    /* 0x350 */ Unk_0201a8c4 unk_350;
    /* 0x360 */ u8 pad_360[0x4e8 - 0x360];
    /* 0x4e8 */ u32 unk_4e8;
    /* 0x4ec */ u8 pad_4ec[0x658 - 0x4ec];
    /* 0x658 */ Unk_ov004_0224d010 unk_658;
    /* 0x710 */ s16 unk_710;
};

class Unk_ov004_0224d2d8 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov004_0224d2d8();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_58();

    void func_ov004_0221e0b4(s32 v);

    /* 0x2a0 */ u8 pad_2a0[0x560 - 0x2a0];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[2];
    /* 0x563 */ u8 unk_563;
    /* 0x564 */ u8 pad_564[0x618 - 0x564];
    /* 0x618 */ Unk_02013b10 unk_618;
    /* 0x640 */ u8 pad_640[0x658 - 0x640];
    /* 0x658 */ Unk_ov004_0224d248 unk_658;
};

extern "C" {
extern Unk_ov004_0221d4f8_Sing *data_020cbb18;
extern Unk_ov004_0224d0a0 *data_ov004_02250a9c;
extern u8 data_ov004_02240128[];
extern u8 data_ov004_02240120[];
extern u32 data_ov004_0224d154[];
extern Unk_ov004_0224d248_Ent data_ov004_02250b20[];
extern u8 data_020d77a4[];
extern u8 data_020d8bc8[];
extern u8 data_ov004_0224d0a0[];

s32 func_02072e44(void *p);
BOOL func_02072e88(void *p, u32 i);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_020a62a0(void);
void func_02002cf8(s32 a, s32 b, void *c, void *d, s32 e);
void func_0203e7a4(void *p);
void func_02053d3c(void *p);
void func_0201ad3c(void *p);
void func_02019dd8(void *p);
void func_02016350(void *p);
void func_0201accc(void *p);
void func_0201a8bc(void *p);
void func_0201ad18(void *p);
void func_0201a794(void *p);
void func_0201a194(void *p);
void func_0201a13c(void *p);
void func_020323b0(void *p);
void func_02088d00(void *p);
void func_020f4080(void *p);
void func_020135e4(void *p);
void func_02019858(void *p);
void func_02014254(void *p);
void func_02082014(void *p);
void func_ov004_0221cf60(void *p);
void func_ov004_0221de74(void *p);

s32 func_0206ed18(void);
u32 func_0206ed38(void);
u16 *func_0206eb9c(void);
void *func_0209750c(void);
void *func_020986d4(void *p);
void *func_02071c5c(void *p);
u32 func_02071c1c(void *p, u32 i);
void func_02070b68(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02070e4c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02003ddc(void *p, s32 a, s32 b, s32 c);
u16 *func_0209872c(void *p);
u16 *func_02098714(void *p);
void func_02094bb4(u16 *p);
void func_02094b9c(u16 *p);
void func_02067a84(void *o, void *p, u32 d);
s32 func_020679b4(void *o);
s32 func_020aa514(s32 v);
void *func_0209ebf0(void);
s32 func_02097520(void *p);
void *func_0209888c(s32 v);
void func_02084ce0(u16 *p);
s32 func_02039e44(void);
s32 func_02039e1c(void);
s32 func_0202e148(void);
s32 func_020a032c(void);
s32 func_02063b8c(s32 n);
s32 func_02098044(void *p, s32 n);
void func_0209801c(void *p, s32 n);
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d0a0

BOOL Unk_ov004_0224d0a0::vfunc_00() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    data_ov004_02250a9c = this;
    unk_710 = *(s16 *)((u8 *)this + 0x8e);
    unk_4e8 |= 2;
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020a62a0() != 0) {
            func_ov004_0221d37c(0);
        } else {
            func_ov004_0221d37c(5);
        }
    } else {
        func_ov004_0221d37c(0);
    }
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        func_02002cf8(0x66, 0xd01d, data_ov004_02240128, data_ov004_02240120, 0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::vfunc_04() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28((u8 *)this + 0x658);
    unk_658.func_ov004_0221cf0c(this);
    func_0201bd9c(0x100);
    func_0203e468(0x5000);
    unk_350.func_0201a8d0(2, 0x166, 0xcc, 0x133);
    unk_2a0.func_0201ad34(0xf2);
    unk_2a0.func_0201ad30(0xf4);
    unk_2a0.func_0201ad2c(0xf4);
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// factory

extern "C" void *func_ov004_0221d630() {
    u8 *p = (u8 *)Unk_020d8c7c_Base::operator new(0x77c);
    if (p != 0) {
        func_0203e7a4(p);
        *(u32 *)p = (u32)data_020d77a4;
        *(u16 *)(p + 0xea) = 0xfff1;
        func_02053d3c(p + 0xec);
        func_0201ad3c(p + 0x2a0);
        func_02019dd8(p + 0x2ac);
        func_02016350(p + 0x334);
        func_0201accc(p + 0x350);
        func_0201a8bc(p + 0x3a8);
        func_0201ad18(p + 0x3aa);
        func_0201a794(p + 0x3b0);
        func_0201a194(p + 0x418);
        func_0201a13c(p + 0x420);
        func_020323b0(p + 0x49c);
        func_02088d00(p + 0x4cc);
        func_020f4080(p + 0x514);
        func_020135e4(p + 0x558);
        func_02019858(p + 0x564);
        func_02014254(p + 0x618);
        *(u32 *)p = (u32)data_020d8bc8;
        func_02082014(p + 0x640);
        *(u32 *)p = (u32)data_ov004_0224d0a0;
        func_ov004_0221cf60(p + 0x658);
    }
    return p;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d2d8

Unk_ov004_0224d2d8::~Unk_ov004_0224d2d8() {}

void Unk_ov004_0224d2d8::vfunc_4c(u32 cmd, u32 arg) {
    s32 a;
    s32 b;
    switch (cmd) {
    case 3:
        unk_560 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov004_0221e0b4(6);
            break;
        }
        if (func_0201ba88() != 0) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            func_ov004_0221e0b4(6);
        }
        break;
    case 1:
        func_ov004_0221e0b4(1);
        break;
    case 0:
        unk_560 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov004_0221e0b4(5);
            break;
        }
        if (func_0201ba88() != 0) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            func_ov004_0221e0b4(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov004_0221e0b4(3);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov004_0221e0b4(4);
            }
        }
        break;
    case 4:
        if (func_0201b9bc() != 0) {
            if (func_0201ba88() != 0) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b) != 0) {
                    if ((arg != 4 && arg == (u32)b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov004_0221e0b4(0);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov004_0224d2d8::vfunc_58() {
    if (unk_563 != 0) {
        return TRUE;
    }
    if (unk_618.func_02014220() != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224d2d8::vfunc_48() {
    if (unk_618.func_02014220() != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d248

void Unk_ov004_0224d248::func_ov004_0221d960() {
    Unk_ov004_0221d960_Msg *o = unk_3c;
    u8 c;
    u16 v;
    c = 0x20;
    if (func_0206ed18() != 0) {
        if (func_0206ed38() > 1) {
            c = 0x1c;
        } else {
            v = *func_0206eb9c();
            func_0201578c(&v, 0, 7);
            c = 0x1e;
        }
    }
    func_02067a84(o, &c, data_ov004_0224d154[0]);
}

struct Unk_ov004_0221d9bc_Range {
    static inline BOOL Chk(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) {
            r = TRUE;
        }
        return r;
    }
};

void Unk_ov004_0224d248::func_ov004_0221d9bc() {
    struct {
        u8 c0;
        u8 c1;
        u16 a;
        u16 b;
    } m;
    if (func_0206ed18() != 0) {
        void *g = func_0209750c();
        u32 idx = func_0206ed38();
        u32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070b68(9, t, 5, 0, 1);
        func_02003ddc(unk_ac->unk_514, 0x50, 0x7f, 0);
        u32 x;
        u32 y;
        if (t < 8) {
            x = (u16)(t + 0x12a8);
        } else {
            x = 0x12a8;
        }
        if (t < 8) {
            y = (u16)(t + 0x1429);
        } else {
            y = 0x1429;
        }
        u32 p1 = *func_0209872c(g);
        u32 p2 = *func_02098714(g);
        if (x == p1) {
            if (Unk_ov004_0221d9bc_Range::Chk(func_0209872c(g), 0x12a8, 0x12af)) {
                m.a = x;
                func_02094bb4(&m.a);
            }
        }
        if (y == p2) {
            if (Unk_ov004_0221d9bc_Range::Chk(func_02098714(g), 0x1429, 0x1430)) {
                m.b = y;
                func_02094b9c(&m.b);
            }
        }
        m.c0 = 0x19;
        func_02067a84(unk_3c, &m, data_ov004_0224d154[0]);
    } else {
        m.c1 = 1;
        func_02067a84(unk_3c, &m.c1, data_ov004_0224d154[0]);
    }
}

void Unk_ov004_0224d248::func_ov004_0221dae4() {
    u8 buf[2];
    if (func_0206ed18() != 0) {
        void *g = func_0209750c();
        u32 idx = func_0206ed38();
        s32 t = func_02071c1c(func_02071c5c(func_020986d4(g)), idx);
        func_02070e4c(9, t, 5, 0, 1);
        func_02003ddc(unk_ac->unk_514, 0x50, 0x7f, 0);
        buf[0] = 0x18;
        func_02067a84(unk_3c, buf, data_ov004_0224d154[0]);
    } else {
        buf[1] = 1;
        func_02067a84(unk_3c, &buf[1], data_ov004_0224d154[0]);
    }
}

void Unk_ov004_0224d248::vfunc_84() {
    s32 i = unk_b0;
    if (data_ov004_02250b20[i].flag == 0) {
        if (data_ov004_02250b20[i].fn != 0) {
            (this->*data_ov004_02250b20[i].fn)();
            func_ov004_0221db6c(0);
        }
    }
}

void Unk_ov004_0224d248::vfunc_80() {
    s32 i = unk_b0;
    if (data_ov004_02250b20[i].flag != 0) {
        if (data_ov004_02250b20[i].fn != 0) {
            (this->*data_ov004_02250b20[i].fn)();
        }
    }
}

void Unk_ov004_0224d248::vfunc_18() {
    u8 c;
    u16 x;
    Unk_ov004_0221d960_Msg *o = unk_3c;
    s32 t = func_020aa514(func_020679b4(o));
    u32 d = data_ov004_0224d154[0];
    u32 r = 0xff;
    switch (unk_1e) {
    case 0xf:
        if (t == 0) {
            Unk_ov004_0221d4f8_Sing *s = data_020cbb18;
            if (func_02072e88(s, s->unk_64) != 0) {
                if (func_02072e44(s) != 0) {
                    s32 q = func_02097520(func_0209ebf0());
                    if (q != 0) {
                        func_020157e8((s32)func_0209888c(q), 1);
                    }
                    r = 0x30;
                } else {
                    r = 0x2f;
                }
            } else {
                func_02084ce0(&x);
                switch (x) {
                case 0xd00a:
                    r = 0x22;
                    break;
                case 0xd00e:
                    r = 0x23;
                    break;
                case 0xd003:
                    r = 0x24;
                    break;
                case 0xd013:
                    r = 0x25;
                    break;
                case 0xd00b:
                    r = 0x26;
                    break;
                case 0xd002:
                    r = 0x27;
                    break;
                case 0xd00d:
                    r = 0x28;
                    break;
                case 0xd021:
                    r = 0x29;
                    break;
                case 0xd020:
                    r = 0x2a;
                    break;
                case 0xd022:
                    r = 0x2b;
                    break;
                case 0xd023:
                    r = 0x2c;
                    break;
                default:
                    r = 0x2e;
                    break;
                }
            }
        } else if (t == 1) {
            if (func_02039e44() != 0) {
                func_02015958(func_02039e1c(), 0, 2, 0, 0);
                r = 0x1a;
            } else {
                r = 0x1b;
            }
        }
        break;
    case 0x16:
        if (t == 0) {
            func_02015170(6, 0);
            func_020151d0(2);
            func_ov004_0221db6c(1);
        }
        break;
    }
    if (r != 0xff) {
        c = r;
        func_02067a84(o, &c, d);
    }
}

void Unk_ov004_0224d248::vfunc_14() {
    switch (unk_1e) {
    case 0x1a:
        func_02015170(0x1f, 0);
        func_020151d0(2);
        func_ov004_0221db6c(3);
        break;
    case 0x17:
        func_02015170(9, 0);
        func_020151d0(2);
        func_ov004_0221db6c(2);
        break;
    }
}

void Unk_ov004_0224d248::vfunc_78(void *arg) {
    struct Msg {
        u32 unk_00;
        u8 unk_04;
    };
    Msg *out = (Msg *)arg;
    void *g = func_0209750c();
    if (func_0202e148() == 0 || func_020a032c() != 0) {
        out->unk_04 = func_02063b8c(3) + 8;
    } else if (func_02098044(g, 0x1b) == 0) {
        out->unk_04 = 0;
        func_0209801c(g, 0x1b);
    } else {
        out->unk_04 = func_02063b8c(4) + 4;
    }
    out->unk_00 = data_ov004_0224d154[0];
}

void Unk_ov004_0224d248::func_ov004_0221db6c(s32 v) {
    unk_b0 = v;
}
