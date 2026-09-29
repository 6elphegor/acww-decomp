#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
BOOL func_0209750c();
BOOL func_020b50e8();
BOOL func_0203d67c(void *p);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201bc28(void *p, void *q);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 data_021f4880;
}

struct Unk_020e6b68;

// Member object types, named after their constructors.
struct Unk_02053d3c { Unk_02053d3c(); u32 pad[0x1b4 / 4]; };
struct Unk_0201ad3c { Unk_0201ad3c(); u32 pad[0xc / 4]; };
struct Unk_02019dd8 { Unk_02019dd8(); u32 pad[0x88 / 4]; };
struct Unk_02016350 { Unk_02016350(); u32 pad[0x1c / 4]; };
struct Unk_0201accc {
    Unk_0201accc();
    void func_0201a8c4(s32 a);
    void func_0201a8d0(s32 a, s32 b, s32 c, s32 d);
    u32 pad[0x58 / 4];
};
struct Unk_0201a8bc { Unk_0201a8bc(); u8 pad[2]; };
struct Unk_0201ad18 { Unk_0201ad18(); u8 pad[6]; };
struct Unk_0201a794 {
    Unk_0201a794();
    void func_0201a6c0(u32 a, u32 b, u32 c, u32 *d, u32 e, u32 f, u32 g);
    u32 pad[0x68 / 4];
};
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x44 / 4]; u8 unk_44; u8 pad_45[3]; };
struct Unk_020f4080 { Unk_020f4080(); u32 pad[0x44 / 4]; };
struct Unk_020135e4 { Unk_020135e4(); u8 pad[0xb]; u8 unk_0b; };
struct Unk_02019858 {
    Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u32 pad[0xb4 / 4];
};
struct Unk_02014254 {
    Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u32 pad[0x28 / 4];
};
struct Unk_02082014 { Unk_02082014(); u32 pad[0x14 / 4]; };

class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
    virtual BOOL vfunc_08();
    void *func_02015aac();
    void func_02015ab0(u32 a);
    u32 pad[0xa8 / 4];
};

class Unk_020e6ad8 : public Unk_0202e2bc {
public:
    Unk_020e6ad8();
    virtual ~Unk_020e6ad8();
    void func_020c1e54(void *p);
    void *unk_ac;
    u32 pad_b0[2];
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u32 pad_68[0x6c / 4];
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

typedef BOOL (Unk_020e6b68::*Unk_020c2194_Fn)();
struct Unk_020c2194_Entry {
    Unk_020c2194_Fn a;
    Unk_020c2194_Fn b;
};
extern "C" Unk_020c2194_Entry data_021f4670[];

class Unk_020e6b68 : public Unk_020d8bc8 {
public:
    Unk_020e6b68() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual s32 vfunc_a8();

    BOOL func_020c1ec0();
    BOOL func_020c1f10();
    BOOL func_020c1f50();
    BOOL func_020c1fa0();
    BOOL func_020c1fe8();
    BOOL func_020c2038();
    BOOL func_020c2078();
    BOOL func_020c207c();
    BOOL func_020c20d0();
    BOOL func_020c20d4();
    BOOL func_020c20d8();
    BOOL func_020c20dc();
    BOOL func_020c2114();
    BOOL func_020c2140();
    BOOL func_020c2144();
    BOOL func_020c2160();
    void func_020c2194(s32 state);

    Unk_020e6ad8 unk_658;
};

extern Unk_020e6b68 *data_021f4638;

// --------------------------------------------------------------------------------

void Unk_020e6ad8::func_020c1e54(void *p) {
    vfunc_08();
    unk_ac = p;
}

Unk_020e6ad8::Unk_020e6ad8() {}

Unk_020e6ad8::~Unk_020e6ad8() {}

BOOL Unk_020e6b68::func_020c1ec0() {
    if (unk_564.func_02019790()) {
        if (unk_564.func_020197a8() == 1) {
            unk_564.func_020196b4(0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1f10() {
    unk_564.func_020196b4(4, 2, 0x10000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1f50() {
    if (unk_564.func_02019790()) {
        if (unk_564.func_020197a8() == 3) {
            unk_564.func_020196b4(0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1fa0() {
    unk_564.func_020196b4(3, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_350.func_0201a8c4(2);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1fe8() {
    if (unk_564.func_02019790()) {
        if (unk_564.func_020197a8() == 2) {
            unk_564.func_020196b4(0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2038() {
    unk_564.func_020196b4(2, 2, 0xf400, 0x14600, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2078() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c207c() {
    return func_020c2160();
}

void Unk_020e6b68::vfunc_90() {
    unk_3b0.func_0201a6c0(1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    func_020c2194(0);
}

void Unk_020e6b68::vfunc_8c() {
    func_020c2194(3);
}

BOOL Unk_020e6b68::func_020c20d0() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20d4() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20d8() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20dc() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2114() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_020c2194(2);
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2140() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2144() {
    if (func_020b50e8() == 0) {
        func_020c2194(7);
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2160() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_020e6b68::func_020c2194(s32 state) {
    BOOL ok = TRUE;
    if (data_021f4670[state].a != NULL) {
        ok = (this->*data_021f4670[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

void Unk_020e6b68::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_020c2194(1);
        break;
    case 0:
        func_020c2194(1);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_020c2194(9);
        break;
    case 8:
        func_020c2194(0);
        break;
    }
}

BOOL Unk_020e6b68::vfunc_48() {
    if (unk_618.func_02014220() == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e6b68::vfunc_68() {
    BOOL result = FALSE;
    if (data_021f4670[unk_654].b != NULL) {
        result = (this->*data_021f4670[unk_654].b)();
    }
    return result;
}

const char *Unk_020e6b68::vfunc_70() {
    return "npc_ps/model/mum.nsbmd";
}

const char *Unk_020e6b68::vfunc_6c() {
    return "npc_ps/model/mum_tex.nsbtx";
}

void func_020c22e0() {
    if (data_021f4638 != NULL) {
        data_021f4638->func_020c2194(6);
    }
}

void func_020c22fc() {
    if (data_021f4638 != NULL) {
        data_021f4638->func_020c2194(4);
    }
}

BOOL Unk_020e6b68::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_021f4638 = NULL;
    return TRUE;
}

BOOL Unk_020e6b68::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_0209750c();
    func_020c2194(0);
    if (func_020b50e8() == 0x2f) {
        unk_4cc.unk_44 = 0;
        unk_3b0.func_0201a6c0(0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
        unk_5c = 0x10000;
        unk_64 = 0x16800;
    }
    return TRUE;
}

s32 Unk_020e6b68::vfunc_a8() {
    if (func_020b50e8()) {
        return Unk_020d8bc8::vfunc_a8();
    }
    return data_020c6cf0;
}

BOOL Unk_020e6b68::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    data_021f4638 = this;
    func_0201bc28(this, &unk_658);
    unk_658.func_020c1e54(this);
    if (func_020b50e8()) {
        unk_350.func_0201a8d0(2, 0x333, 0xcc, 0x133);
        unk_350.func_0201a8d0(1, 0x280, 0xcc, 0x133);
    }
    unk_558.unk_0b = 1;
    return TRUE;
}

extern "C" Unk_020e6b68 *func_020c2454() {
    return new Unk_020e6b68();
}
