#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d77a4;

extern "C" {
extern u16 data_020c6cc8;
extern u8 data_ov045_02259d9c[];
extern u8 data_ov045_02259dfc[];

void func_ov045_02259654(void *sub, void *owner);
s32 func_ov004_02228e84();
BOOL func_02014220(void *self);
void func_02014198(void *self, u8 a, u8 b);
Unk_020d77a4 *func_02015aac(void *self);
s32 func_020197a8(void *self);
BOOL func_02019790(void *self);
void func_020196b4(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_0203d67c(void *self);
void func_0203d704(void *self, s32 a);
void *func_020b4934();
s32 func_020b4bbc(void *, s32);
s32 func_020553cc(void *p, void *q, s32 v);
s32 func_020e7518(void *p);
s32 func_02090330(u32 kind, void *a, s32 b, s32 c);
void func_020902f8(s32 id);
void func_020902d4(s32 id, void *pos, s32 a, s32 b);
void func_0201bc28(void *p);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    u32 pad_04[0xac / 4];
};

class Unk_ov045_02259e20 : public Unk_020d7714 {
public:
    Unk_ov045_02259e20();
    virtual ~Unk_ov045_02259e20();
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
    virtual void vfunc_38(s32 a);
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
    virtual BOOL vfunc_24();
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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov045_02259eb0 : public Unk_020d8bc8 {
public:
    Unk_ov045_02259eb0() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov045_022590e4();
    BOOL func_ov045_02259724();
    BOOL func_ov045_02259728();
    BOOL func_ov045_0225972c();
    BOOL func_ov045_0225975c();
    BOOL func_ov045_02259760();
    BOOL func_ov045_0225978c();
    BOOL func_ov045_022597c0();
    BOOL func_ov045_022597dc();
    void func_ov045_02259810(s32 state);

    s32 unk_654;
    s32 unk_658;
    u8 unk_65c[0x30];
    Unk_ov045_02259e20 unk_68c;
    u8 pad_73c[4];
    u8 unk_740;
    u8 unk_741;
    u8 pad_742[0x12];
    u8 unk_754;
    u8 pad_755[3];
};

struct Unk_ov045_02259810_Ent {
    BOOL (Unk_ov045_02259eb0::*enter)();
    BOOL (Unk_ov045_02259eb0::*exit)();
};

extern "C" {
extern Unk_ov045_02259810_Ent data_ov045_02259f7c[];
extern Unk_ov045_02259810_Ent data_ov045_02259f84[];
extern Unk_ov045_02259eb0 *data_ov045_02259f60;
BOOL func_ov045_02259004(Unk_ov045_02259eb0 *self);
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov045_02259e20::~Unk_ov045_02259e20() {}

Unk_ov045_02259e20::Unk_ov045_02259e20() {}

BOOL Unk_ov045_02259eb0::func_ov045_02259724() { return TRUE; }

BOOL Unk_ov045_02259eb0::func_ov045_02259728() { return TRUE; }

BOOL Unk_ov045_02259eb0::func_ov045_0225972c() {
    if (!func_02014220(&unk_618)) {
        func_020b4bbc(func_020b4934(), 0);
        func_ov045_02259810(2);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_0225975c() { return TRUE; }

BOOL Unk_ov045_02259eb0::func_ov045_02259760() {
    if (!func_02014220(&unk_618)) {
        func_0203d67c(this);
        func_ov045_02259810(2);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_0225978c() {
    Unk_020d77a4 *p = func_02015aac(&unk_68c);
    if (p) {
        func_0201bcbc(p);
    }
    func_02014198(&unk_618, 1, 0);
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_022597c0() {
    if (func_ov045_02259004(this)) {
        func_0203d704(this, 0);
    }
    return TRUE;
}

BOOL Unk_ov045_02259eb0::func_ov045_022597dc() {
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov045_02259eb0::func_ov045_02259810(s32 state) {
    BOOL ok = TRUE;
    if (data_ov045_02259f7c[state].enter) {
        ok = (this->*data_ov045_02259f7c[state].enter)();
    }
    if (ok) {
        unk_658 = state;
    }
}

BOOL Unk_ov045_02259eb0::vfunc_68() {
    s32 t = func_020197a8(&unk_564);
    if (t != 0x1e && t != 0x20) {
    } else if (func_02019790(&unk_564)) {
        unk_68c.vfunc_38(0);
    }
    if (unk_654 == -1) {
        if (t == 0x21 && ((((u32)unk_ec.unk_a4 << 4) >> 16)) >= 0x12) {
            unk_654 = func_02090330(0x3d, (u8 *)this + 0x478, 0, 0);
            unk_754 = 0x16;
        }
    } else if (func_020e7518(&unk_754) == 0) {
        func_020902f8(unk_654);
        unk_654 = -1;
    } else {
        func_020902d4(unk_654, (u8 *)this + 0x478, 0, 0);
    }
    BOOL r = FALSE;
    if (data_ov045_02259f84[unk_658].enter) {
        r = (this->*data_ov045_02259f7c[unk_658].exit)();
    }
    return r;
}

BOOL Unk_ov045_02259eb0::vfunc_24() {
    if (!Unk_020d77a4::vfunc_24()) {
        return FALSE;
    }
    func_020553cc(&unk_ec, &unk_65c, 0xe);
    func_ov004_02228e84();
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_ov045_02259f60 = 0;
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov045_02259f60 = this;
    func_ov045_02259810(0);
    unk_4cc.unk_1c |= 2;
    unk_740 = 0xff;
    unk_741 = 0xff;
    return TRUE;
}

BOOL Unk_ov045_02259eb0::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_68c);
    func_ov045_02259654(&unk_68c, this);
    func_0201bd9c(0x100);
    func_0203e468(0x5000);
    unk_654 = -1;
    unk_754 = 0;
    return TRUE;
}

extern "C" Unk_ov045_02259eb0 *func_ov045_02259a50() { return new Unk_ov045_02259eb0; }

u8 *Unk_ov045_02259eb0::vfunc_70() { return data_ov045_02259d9c; }
u8 *Unk_ov045_02259eb0::vfunc_6c() { return data_ov045_02259dfc; }
