#include "types.h"

class Unk_ov004_0224d010;
class Unk_ov004_0224d0a0;

typedef void (Unk_ov004_0224d010::*Unk_ov004_0224d010_Fn)();
typedef BOOL (Unk_ov004_0224d0a0::*Unk_ov004_0224d0a0_Fn)();

struct Unk_ov004_0224d010_Ent {
    Unk_ov004_0224d010_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0224d0a0_Ent {
    Unk_ov004_0224d0a0_Fn fn1;
    Unk_ov004_0224d0a0_Fn fn2;
};

struct Unk_ov004_0221cc88_Msg {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221cc88_Obj {
    u8 pad_00[0x14];
    u32 unk_14;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    u32 unk_64;
};

extern "C" {
extern u32 data_ov004_0224cf54[];
extern u8 data_ov004_0224cec8[];
extern u8 data_ov004_0224cf8c[];
extern u8 data_ov004_0224cfbc[];
extern u32 data_ov004_02250a9c;
extern Unk_ov004_0224d010_Ent data_ov004_0224cfd8[];
extern Unk_ov004_0224d0a0_Ent data_ov004_02250aa0[];
extern Unk_ov004_0224d0a0_Ent data_ov004_02250aa8[];
extern u32 data_021f4880;
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_020cbb18 *data_020cbb18;

void *func_0209750c(void);
void *func_0209868c(void *p);
s32 func_02087c4c(void *p);
s32 func_020aa514(void);
s32 func_020a032c(void);
s32 func_0201ade4(s32 p, s32 v);
void func_0201adc8(s32 p, s32 v);
s32 func_02063b8c(s32 n);
void func_02067a84(void *o, void *p, u32 d);
void *func_02002d3c(s32 a, s32 b);
s32 func_02072e44(void *p);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_0202e1cc(...);
s32 func_ov068_0226c334(void *p);
s32 func_02095154(s32 a, s32 b);
void func_0208a598(void);
void func_0208a58c(void);
s32 func_020a62a0(void);
void func_ov004_02224a38(s32 a);
void func_ov004_02226860(void);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, void *d, s32 e, s32 f, s32 g);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
s32 func_020197a8(void *p);
s32 func_02019790(void *p);
s32 func_02014220(void *p);
void func_020141b4(void *p, s32 a, s32 b, s32 c);
void func_0203d67c(void *p);
void func_0203d6cc(void *p, s32 a);
void func_020553cc(void *p, void *q, s32 n);
void func_020539a0(void *p);
void func_02056520(void *p, s32 n);
s32 func_02034d2c(void);
s32 func_020e77cc(s32 a, s32 b, s32 c);
u8 *func_02003bbc(void);
s32 func_0202e360(void);
void *func_02015aac(void *p);
void func_02015ab0(void *p, u32 v);
}

void operator delete(void *p);

class Unk_02015b54 {
public:
    Unk_02015b54();
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

    s32 func_02015a5c();
};

class Unk_ov004_0224d010 : public Unk_02015b54 {
public:
    Unk_ov004_0224d010();
    virtual ~Unk_ov004_0224d010();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov004_0221cbe4(s32 v);
    void func_ov004_0221cf0c(s32 v);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov004_0221cc88_Obj *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 pad_b6[2];
};

struct Unk_ov004_0224d0a0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_020d77a4 {
public:
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 x);
    virtual BOOL vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
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
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_0201ba88();
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(void *other);

    /* 0x04 */ u8 pad_04[0x8e - 4];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xec - 0x90];
    /* 0xec */ u8 unk_ec[0x190 - 0xec];
    /* 0x190 */ Unk_ov004_0224d0a0_Bits unk_190;
    /* 0x194 */ u32 pad_194;
    /* 0x198 */ u32 unk_198;
    /* 0x19c */ u8 pad_19c[0x1a4 - 0x19c];
    /* 0x1a4 */ u8 unk_1a4[0x3b0 - 0x1a4];
    /* 0x3b0 */ u8 unk_3b0[0x3d2 - 0x3b0];
    /* 0x3d2 */ s16 unk_3d2;
    /* 0x3d4 */ u8 pad_3d4[0x564 - 0x3d4];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ u8 unk_658[0x710 - 0x658];
    /* 0x710 */ s16 unk_710;
    /* 0x712 */ u8 pad_712[2];
    /* 0x714 */ u8 unk_714[0x744 - 0x714];
    /* 0x744 */ u8 unk_744[0x774 - 0x744];
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 pad_778[2];
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    virtual ~Unk_020d8bc8();
};

class Unk_ov004_0224d0a0 : public Unk_020d8bc8 {
public:
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov004_0221cf78();
    BOOL func_ov004_0221cf7c();
    BOOL func_ov004_0221cf80();
    BOOL func_ov004_0221cfd8();
    BOOL func_ov004_0221d010();
    BOOL func_ov004_0221d0ac();
    BOOL func_ov004_0221d0e4();
    BOOL func_ov004_0221d104();
    BOOL func_ov004_0221d108();
    BOOL func_ov004_0221d138();
    BOOL func_ov004_0221d174();
    BOOL func_ov004_0221d178();
    BOOL func_ov004_0221d17c();
    BOOL func_ov004_0221d20c();
    BOOL func_ov004_0221d278();
    BOOL func_ov004_0221d340();
    void func_ov004_0221d37c(s32 idx);
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d010

void Unk_ov004_0224d010::func_ov004_0221cbe4(s32 v) {
    unk_ac = v;
    unk_b4 = 0;
}

void Unk_ov004_0224d010::vfunc_84() {
    s32 i = unk_ac;
    if (data_ov004_0224cfd8[i].flag == 0) {
        if (data_ov004_0224cfd8[i].fn != 0) {
            (this->*data_ov004_0224cfd8[i].fn)();
            func_ov004_0221cbe4(0);
        }
    }
}

void Unk_ov004_0224d010::vfunc_80() {
    s32 i = unk_ac;
    if (data_ov004_0224cfd8[i].flag != 0) {
        if (data_ov004_0224cfd8[i].fn != 0) {
            (this->*data_ov004_0224cfd8[i].fn)();
        }
    }
}

void Unk_ov004_0224d010::vfunc_18() {
    void *h = func_0209868c(func_0209750c());
    func_02015a5c();
    s32 t = func_020aa514();
    u32 d = data_ov004_0224cf54[0];
    u32 r = 0xff;
    if ((s32)unk_1e >= 0x24 && (s32)unk_1e <= 0x2b) {
        if (t != 0) {
            r = (u8)((func_02087c4c(h) >> 2) + 0x28);
        } else {
            unk_3c->unk_14 = 0;
            func_ov004_0221cbe4(2);
        }
    }
    switch (unk_1e) {
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        if (t == 0) {
            if (func_0201ade4(unk_b0, 200) == 0) {
                r = 0x2f;
            } else {
                func_0201adc8(unk_b0, 200);
                r = func_02063b8c(2);
                r = (u8)(r + (((func_02087c4c(h) >> 2) << 1) + 0x1c));
            }
        } else {
            r = (u8)((func_02087c4c(h) >> 2) + 0x18);
        }
        break;
    }
    if (r != 0xff) {
        u8 buf;
        buf = r;
        func_02067a84(unk_3c, &buf, d);
    }
}

void Unk_ov004_0224d010::vfunc_14() {
    void *h = func_0209868c(func_0209750c());
    Unk_ov004_0221cc88_Obj *o = unk_3c;
    u32 d = data_ov004_0224cf54[0];
    u32 r = 0xff;
    if (func_020a032c() == 0) {
        if ((s32)unk_1e >= 0x1c && (s32)unk_1e <= 0x23) {
            if ((u32)func_02087c4c(h) >= 5) {
                if (func_02063b8c(3) == 0) {
                    r = 0x2c;
                    goto next0;
                }
            }
            o->unk_14 = 0;
            func_ov004_0221cbe4(1);
        }
    next0:
        if (unk_1e != 0x2d && unk_1e != 0x2e) {
            goto next1;
        }
        if (unk_1e == 0x2d) {
            unk_b5 = 1;
        }
        o->unk_14 = 0;
        func_ov004_0221cbe4(1);
    next1:
        if ((s32)unk_1e >= 0x30 && (s32)unk_1e <= 0x3b) {
            o->unk_14 = 0;
            func_ov004_0221cbe4(3);
        }
        if (r != 0xff) {
            u8 buf;
            buf = r;
            func_02067a84(unk_3c, &buf, d);
        }
    }
}

void Unk_ov004_0224d010::vfunc_78(void *arg) {
    Unk_ov004_0221cc88_Msg *out = (Unk_ov004_0221cc88_Msg *)arg;
    void *h = func_0209868c(func_0209750c());
    if (func_020a032c() != 0) {
        out->unk_00 = data_ov004_0224cf54[1];
        out->unk_04 = 0x1f;
    } else {
        out->unk_00 = data_ov004_0224cf54[0];
        void *o = func_02002d3c(0x66, 0);
        if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
            out->unk_04 = func_02063b8c(3) + 0x55;
        } else if (func_0202e1cc(0x17) != 0) {
            if (o != 0 && func_ov068_0226c334(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                s32 c = func_02087c4c(h) >> 2;
                out->unk_04 = data_ov004_0224cec8[c] + func_02063b8c(3);
            }
        } else if (func_02095154(0x28, 4) == 0) {
            if (func_0202e1cc(0x16, 1) == 0) {
                out->unk_04 = func_02087c4c(h) >> 1;
            } else if (o != 0 && func_ov068_0226c334(o) == 7) {
                out->unk_04 = 0x58;
            } else {
                out->unk_04 = (func_02087c4c(h) >> 2) + 0x49;
            }
        } else {
            if (func_0202e1cc(0x17, 0) == 0) {
                func_0208a598();
            }
            out->unk_04 = (func_02087c4c(h) >> 2) + 0x14;
        }
    }
}

void Unk_ov004_0224d010::func_ov004_0221cf0c(s32 v) {
    vfunc_08();
    unk_b0 = v;
}

Unk_ov004_0224d010::~Unk_ov004_0224d010() {}

Unk_ov004_0224d010::Unk_ov004_0224d010() {}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224d0a0

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf78() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf7c() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cf80() {
    if (func_0201ba88() != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov004_0221d37c(0);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221cfd8() {
    func_0201a6c0(unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d010() {
    if (func_0201ba88() != 0) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) != 0 && a == (s32)data_020cbb18->unk_64 && a == b) {
            func_0201b9fc(1, data_020cbb18->unk_64, data_020cbb18->unk_64);
            ((Unk_02015b54 *)unk_658)->vfunc_08();
            s32 r = func_0201bc4c(4);
            func_02015ab0(unk_658, r);
            func_ov004_0221d37c(1);
        } else if (func_020a62a0() != 0 && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov004_0221d37c(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d0ac() {
    func_0201a6c0(unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d0e4() {
    if (func_02095154(0x28, 4) != 0) {
        func_ov004_0221d37c(1);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d104() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d108() {
    if (func_020197a8(unk_564) == 3) {
        if (func_02019790(unk_564) != 0) {
            func_ov004_0221d37c(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d138() {
    func_020196b4(unk_564, 3, 2, 0, 0, 0, unk_710, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d174() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d178() {
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d17c() {
    if (func_02014220(unk_618) == 0) {
        if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0) {
            if (func_02095154(0x28, 4) != 0) {
                func_ov004_02224a38(2);
            }
            func_0208a58c();
        }
        func_0201a6c0(unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
        func_0203d67c(this);
        func_ov004_0221d37c(2);
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d20c() {
    void *p = func_02015aac(unk_658);
    s32 r = 0;
    func_0201a6c0(unk_3b0, 1, r, r, &data_021f4880, 4, data_020c6d1c, 1);
    if (p != 0) {
        r = func_0201bcbc(p);
    }
    func_020141b4(unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d278() {
    if (unk_774 > 0) {
        unk_774++;
        if (unk_774 > 0x14) {
            func_0201a6c0(unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            unk_774 = -1;
        }
    } else if (unk_774 == 0) {
        if (unk_3d2 > 0x2000) {
            unk_774 = 1;
        }
    }
    if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0) {
        if (func_02095154(0x27, 4) != 0) {
            func_0203d6cc(this, 0);
        }
    }
    if (unk_710 != unk_8e) {
        func_ov004_0221d37c(3);
        return TRUE;
    }
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::func_ov004_0221d340() {
    unk_774 = 0;
    func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov004_0224d0a0::func_ov004_0221d37c(s32 idx) {
    BOOL r = TRUE;
    if (data_ov004_02250aa0[idx].fn1 != 0) {
        r = (this->*data_ov004_02250aa0[idx].fn1)();
    }
    if (r != 0) {
        unk_654 = idx;
    }
}

BOOL Unk_ov004_0224d0a0::vfunc_68() {
    BOOL r = FALSE;
    s32 i = unk_654;
    if (data_ov004_02250aa8[i].fn1 != 0) {
        r = (this->*data_ov004_02250aa0[i].fn2)();
    }
    if (func_020e77cc(func_02034d2c(), 0x63, 0xab) != 0) {
        if (unk_77a == 0) {
            if (unk_190.mid != 0) {
                func_02056520(unk_1a4, 10);
            }
            unk_77a = 1;
        }
        u8 *q = func_02003bbc();
        if (q != 0) {
            if ((s8)q[3] != 1) {
                *(u32 *)&unk_190 = 0;
                unk_198 = *(u32 *)(q + 0x10);
                func_020539a0(unk_ec);
                unk_198 = 0;
            }
        }
    } else {
        unk_77a = 0;
    }
    return r;
}

u8 *Unk_ov004_0224d0a0::vfunc_70() {
    return data_ov004_0224cf8c;
}

u8 *Unk_ov004_0224d0a0::vfunc_6c() {
    return data_ov004_0224cfbc;
}

BOOL Unk_ov004_0224d0a0::vfunc_24() {
    if (Unk_020d77a4::vfunc_24() == 0) {
        return FALSE;
    }
    func_020553cc(unk_ec, unk_714, 0xe);
    func_020553cc(unk_ec, unk_744, 0xb);
    func_ov004_02226860();
    return TRUE;
}

BOOL Unk_ov004_0224d0a0::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    data_ov004_02250a9c = 0;
    return TRUE;
}
