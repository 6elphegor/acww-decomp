#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

struct Unk_ov004_0221b8f4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

extern "C" {
extern Unk_ov004_0221b8f4_Vec data_021f4880;
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221b954_Global *data_020cbb18;
extern u8 data_ov004_0224cd38[];
extern u8 data_ov004_0224cd68[];
extern u8 data_ov004_0224d0a0[];

void func_ov004_0222875c();
s32 func_ov004_02228738();
void func_ov004_02228780();
void func_ov004_02228720(u32 v);
s32 func_ov004_02228700();
u32 func_ov004_0221b504(void *self);
void func_ov004_0221b4ec(void *self, u32 v);
void func_ov004_0221b888(void *sub, void *owner);
void func_ov004_0221cf48(void *sub);
BOOL func_020a62a0();
BOOL func_02072e44(void *g);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e18c(void *self, void *out, s32 x);
void func_0203d67c(void *self);
s16 *func_0209c37c(s32 a, s32 b);
BOOL func_0201622c(void *self, s32 a, void *b);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov004_0221b8f4_Vec *v, s32 d, s32 e, u8 f);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_020195c8(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
BOOL func_02014220(void *self);
void func_02014198(void *self, u8 a, u8 b);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void func_02015ab0(void *self, u32 v);
Unk_020d77a4 *func_02015aac(void *self);
void func_02015e48(void *self, u32 v);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u32 pad_04[0xac / 4];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov004_0224cd8c : public Unk_020d8b38 {
public:
    Unk_ov004_0224cd8c();
    virtual ~Unk_ov004_0224cd8c();
};

class Unk_ov004_0221cf48 : public Unk_020d7714 {
public:
    ~Unk_ov004_0221cf48();
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
    virtual void vfunc_48();
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
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov004_0224ce1c : public Unk_020d8bc8 {
public:
    Unk_ov004_0224ce1c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_90();

    BOOL func_ov004_0221b92c();
    BOOL func_ov004_0221b930();
    BOOL func_ov004_0221b954();
    BOOL func_ov004_0221b9ac();
    BOOL func_ov004_0221b9e4();
    BOOL func_ov004_0221bae0();
    BOOL func_ov004_0221bb18();
    BOOL func_ov004_0221bb48();
    BOOL func_ov004_0221bb84();
    BOOL func_ov004_0221bb88();
    BOOL func_ov004_0221bb8c();
    BOOL func_ov004_0221bbf0();
    BOOL func_ov004_0221bc7c();
    BOOL func_ov004_0221bcec();
    void func_ov004_0221bd50(s32 state);

    s32 unk_654;
    Unk_ov004_0224cd8c unk_658;
    s16 unk_708;
    u8 unk_70a;
    u8 pad_70b;
    u16 unk_70c;
    u8 unk_70e;
};

struct Unk_ov004_0221bd50_Ent {
    BOOL (Unk_ov004_0224ce1c::*enter)();
    BOOL (Unk_ov004_0224ce1c::*exit)();
};

extern "C" {
extern Unk_ov004_0221bd50_Ent data_ov004_02250a2c[];
extern Unk_ov004_0221bd50_Ent data_ov004_02250a34[];
}

class Unk_ov004_0224d0a0 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov004_0224d0a0();
    virtual void vfunc_4c(u32 a, u32 b);
    void func_ov004_0221d37c(s32 state);

    s32 unk_654;
    Unk_ov004_0221cf48 unk_658;
    u8 pad_708[0xc];
    u8 unk_714[0x30];
    u8 unk_744[0x10];
};

extern "C" {
extern Unk_ov004_0224d0a0 *data_ov004_02250a9c;
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov004_0224cd8c::Unk_ov004_0224cd8c() {}

void Unk_ov004_0224ce1c::vfunc_90() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b92c() { return TRUE; }

BOOL Unk_ov004_0224ce1c::func_ov004_0221b930() {
    func_ov004_0222875c();
    unk_70c = unk_ec.unk_a4 >> 12;
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b954() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov004_0221bd50(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b9ac() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221b9e4() {
    s32 a, b;
    if (func_0201ba88()) {
        a = 4;
        b = 4;
        if (func_0201b9e8(&a, &b)) {
            s32 av = a;
            s32 g = data_020cbb18->unk_64;
            if (av == g && av == b) {
                func_0201b9fc(1, g, g);
                Unk_020d7714 *p = &unk_658;
                p->vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(4));
                func_ov004_0221bd50(1);
                goto end;
            }
        }
        if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov004_0221bd50(0);
        }
    } else if (!func_020a62a0()) {
        if (func_0201622c(&unk_334, 0xe4, &unk_2a0)) {
            if (func_ov004_02228738()) {
                func_ov004_02228780();
                u32 t = unk_70e * 0x38;
                func_ov004_02228720((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
            }
        } else if (!func_ov004_02228738()) {
            func_ov004_0222875c();
        }
    }
end:
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bae0() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb18() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov004_0221bd50(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb48() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_708, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb84() { return TRUE; }
BOOL Unk_ov004_0224ce1c::func_ov004_0221bb88() { return TRUE; }

BOOL Unk_ov004_0224ce1c::func_ov004_0221bb8c() {
    if (func_02014220(&unk_618)) {
        return TRUE;
    }
    if (!func_02072e44(data_020cbb18) && !func_0202e1cc(0x11, 1)) {
        u32 t = (u8)(func_ov004_0221b504(this) + 1);
        if (t > 0xf) {
            t = 0xf;
        }
        func_ov004_0221b4ec(this, t);
    }
    func_0203d67c(this);
    func_ov004_0221bd50(2);
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bbf0() {
    if (func_ov004_0221b504(this) >= 6) {
        func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    }
    func_ov004_0222875c();
    if (func_ov004_0221b504(this) < 6) {
        func_02014198(&unk_618, 1, 0);
    } else {
        Unk_020d77a4 *p = func_02015aac(&unk_658);
        s32 r = 0;
        if (p) {
            r = func_0201bcbc(p);
        }
        func_020141b4(&unk_618, 0, r, 0);
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bc7c() {
    if (unk_708 != unk_8e) {
        func_ov004_0221bd50(3);
        return TRUE;
    }
    if (func_0201622c(&unk_334, 0xe4, &unk_2a0)) {
        if (func_ov004_02228738()) {
            func_ov004_02228780();
            u32 t = unk_70e * 0x38;
                func_ov004_02228720((u16)(t + (((u32)unk_ec.unk_a4 << 4) >> 16)));
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::func_ov004_0221bcec() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0xe4, 0, data_020c6cc8, unk_70c);
    return TRUE;
}

void Unk_ov004_0224ce1c::func_ov004_0221bd50(s32 state) {
    BOOL ok = TRUE;
    if (data_ov004_02250a2c[state].enter) {
        ok = (this->*data_ov004_02250a2c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov004_0224ce1c::vfunc_68() {
    unk_70e = func_ov004_02228700() / 0x38;
    func_0201b964(&unk_70e, 1);
    BOOL r = FALSE;
    if (data_ov004_02250a34[unk_654].enter) {
        r = (this->*data_ov004_02250a2c[unk_654].exit)();
    }
    return r;
}

BOOL Unk_ov004_0224ce1c::vfunc_00() {
    s32 v;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_708 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
        if (func_020a62a0()) {
            func_ov004_0221bd50(0);
        } else {
            func_0201b980(&unk_70e, 1);
            func_ov004_0221bd50(4);
        }
    } else {
        func_ov004_0221bd50(0);
        if (func_0202e18c(this, &v, 2)) {
            unk_70a = 1;
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224ce1c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    func_ov004_0221b888(&unk_658, this);
    func_0202e548(0x119a, 0x2000);
    func_0201bd9c(0);
    func_0203e468(0x3000);
    return TRUE;
}

extern "C" Unk_ov004_0224ce1c *func_ov004_0221bf04() { return new Unk_ov004_0224ce1c; }

Unk_ov004_0224d0a0::~Unk_ov004_0224d0a0() {}

extern "C" void func_ov004_0221c070() { func_02015e48(&data_ov004_02250a9c->unk_334, 0); }

extern "C" u32 func_ov004_0221c08c() { return ((u32)data_ov004_02250a9c->unk_ec.unk_a4 << 4) >> 16; }

extern "C" void *func_ov004_0221c0a4() { return &data_ov004_02250a9c->unk_744; }

extern "C" void *func_ov004_0221c0b8() { return &data_ov004_02250a9c->unk_714; }

u8 *Unk_ov004_0224ce1c::vfunc_70() { return data_ov004_0224cd38; }
u8 *Unk_ov004_0224ce1c::vfunc_6c() { return data_ov004_0224cd68; }

void Unk_ov004_0224d0a0::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov004_0221d37c(7);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            func_ov004_0221d37c(7);
        }
        break;
    case 1:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov004_0221d37c(6);
        } else if (func_0201ba88()) {
            Unk_ov004_0221b954_Global *gl = data_020cbb18;
            s32 g = gl->unk_64;
            func_0201b9fc(1, g, g);
            Unk_020d7714 *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            if (func_02072e44(gl) || *func_0209c37c(0, 0x4a) != 0) {
                func_ov004_0221d37c(1);
            } else {
                func_ov004_0221d37c(4);
            }
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov004_0221d37c(6);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            Unk_020d7714 *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov004_0221d37c(1);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov004_0221d37c(3);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov004_0221d37c(5);
            }
        }
        break;
    case 4:
        if (func_0201b9bc() && func_0201ba88()) {
            a = 4;
            b = 4;
            if (func_0201b9e8(&a, &b)) {
                if (arg != 4) {
                    if (arg == b) {
                        goto body;
                    }
                }
                if (arg == 4) {
                body:
                    func_0201b9fc(1, data_020cbb18->unk_64, 4);
                    func_ov004_0221d37c(0);
                }
            }
        }
        break;
    case 2: case 5: case 6: case 7:
        break;
    }
    Unk_020d77a4::vfunc_4c(cmd, arg);
}
