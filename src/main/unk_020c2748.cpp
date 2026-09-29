#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
BOOL func_0209750c();
BOOL func_020b50e8();
BOOL func_0203d67c(void *p);
void func_0201bda8(void *p, u16 *q);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201bc28(void *p, void *q);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 data_021f4880;
}

struct Unk_020e7440;

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

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x26];
    s16 unk_8e;
    u8 pad_90[0x44];
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


typedef BOOL (Unk_020e7440::*Unk_020c28b0_Fn)();
struct Unk_020c28b0_Entry {
    Unk_020c28b0_Fn a;
    Unk_020c28b0_Fn b;
};
extern "C" Unk_020c28b0_Entry data_021f4728[];
extern "C" const char *data_020d1ca0[];

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    void *func_02015aac();
};

class Unk_020e73b0 : public Unk_02015b54 {
public:
    Unk_020e73b0();
    virtual ~Unk_020e73b0();
    void func_020c271c(s32 v);
    void func_020c2724(void *p);
    u32 pad_04[0xa8 / 4];
    s32 unk_ac;
    void *unk_b0;
};

class Unk_020e7440 : public Unk_020d8bc8 {
public:
    Unk_020e7440() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();

    BOOL func_020c2798();
    BOOL func_020c27c8();
    BOOL func_020c2804();
    BOOL func_020c2808();
    BOOL func_020c2834();
    BOOL func_020c2878();
    BOOL func_020c287c();
    void func_020c28b0(s32 state);

    Unk_020e73b0 unk_658;
    s16 unk_70c;
};

// --------------------------------------------------------------------------------

extern "C" Unk_020e7440 *func_020c29ec() {
    return new Unk_020e7440();
}

Unk_020e73b0::~Unk_020e73b0() {}

Unk_020e73b0::Unk_020e73b0() {}

BOOL Unk_020e7440::func_020c2798() {
    if (unk_564.func_020197a8() == 3) {
        if (unk_564.func_02019790() == 1) {
            func_020c28b0(0);
        }
    }
    return TRUE;
}

BOOL Unk_020e7440::func_020c27c8() {
    unk_564.func_020196b4(3, 1, 0, 0, 0, unk_70c, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e7440::func_020c2804() {
    return TRUE;
}

BOOL Unk_020e7440::func_020c2808() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_020c28b0(2);
    }
    return TRUE;
}

BOOL Unk_020e7440::func_020c2834() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    unk_658.func_020c271c(0);
    return TRUE;
}

BOOL Unk_020e7440::func_020c2878() {
    return TRUE;
}

BOOL Unk_020e7440::func_020c287c() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_020e7440::func_020c28b0(s32 state) {
    BOOL ok = TRUE;
    if (data_021f4728[state].a != NULL) {
        ok = (this->*data_021f4728[state].a)();
    }
    if (ok == 1) {
        unk_654 = state;
    }
}

BOOL Unk_020e7440::vfunc_68() {
    BOOL result = FALSE;
    if (data_021f4728[unk_654].b != NULL) {
        result = (this->*data_021f4728[unk_654].b)();
    }
    return result;
}

const char *Unk_020e7440::vfunc_70() {
    return data_020d1ca0[0];
}

const char *Unk_020e7440::vfunc_6c() {
    return data_020d1ca0[1];
}

BOOL Unk_020e7440::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e7440::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_020c28b0(0);
    unk_70c = unk_8e;
    return TRUE;
}

BOOL Unk_020e7440::vfunc_04() {
    u16 v = 0xfff1;
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    v = 0xd000;
    func_0201bda8(this, &v);
    func_0201bc28(this, &unk_658);
    unk_658.func_020c2724(this);
    return TRUE;
}
