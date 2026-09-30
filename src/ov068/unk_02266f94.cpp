#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void *func_0209750c();
void func_0203d67c(void *p);
BOOL func_0203d704(void *p, s32 a);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201bc28(void *p, void *q);
void func_0201bda8(void *p, u16 *q);
u32 func_020ae02c(void *p);
u32 func_020e7518(void *p);
void func_020ed188(void *p);
void func_02034d70(u32 a);
void func_02034d84(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_0203a844();
BOOL func_020951b8(s32 a);
void *func_020947f0(s32 a);
void func_02094b0c(void *v, u32 a, u32 b);
void func_02094f48(s32 a, s32 b);
void func_020a02d0();
BOOL func_020a0304();
BOOL func_020a0318();
void func_02097ff4(void *p, s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_ov003_02212ebc(void *p);
void func_ov003_02212d28(void *p, s32 st);
void func_ov068_0226867c(void *p);
void func_02135558(void *obj, void (*dtor)(void *), void *dso);
extern u16 data_020c6cc8;
extern u32 data_021ed104;
extern u32 data_021f4880[];
extern const char *data_ov068_0226fd68[];
extern const char *data_ov068_0226fd78[];
}

struct Unk_ov068_0226ff34;

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
    u32 pad[0x68 / 4];
};
struct Unk_0201a194 { Unk_0201a194(); u32 pad[8 / 4]; };
struct Unk_0201a13c { Unk_0201a13c(); u32 pad[0x7c / 4]; };
struct Unk_020323b0 { Unk_020323b0(); u32 pad[0x30 / 4]; };
struct Unk_02088d00 { Unk_02088d00(); u32 pad[0x1c / 4]; u32 unk_1c; u32 pad_20[0x24 / 4]; u8 unk_44; u8 pad_45[3]; };
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

// Sub-object at +0x658 (vtable 0x0226fea4)
class Unk_ov068_0226fea4 : public Unk_0202e2bc {
public:
    Unk_ov068_0226fea4();
    virtual ~Unk_ov068_0226fea4();
    void func_ov068_02266f58(void *p);
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
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xd4 - 0x90];
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

typedef BOOL (Unk_ov068_0226ff34::*Unk_ov068_02267238_Fn)();
struct Unk_ov068_02267238_Entry {
    Unk_ov068_02267238_Fn a;
    Unk_ov068_02267238_Fn b;
};
extern "C" Unk_ov068_02267238_Entry data_ov068_02271018[];

struct Unk_ov068_02267370_Elem {
    u16 v;
    Unk_ov068_02267370_Elem(u16 x) { v = x; }
    ~Unk_ov068_02267370_Elem();
};

class Unk_ov068_0226ff34 : public Unk_020d8bc8 {
public:
    Unk_ov068_0226ff34() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();

    BOOL func_ov068_02266fc4();
    BOOL func_ov068_02266ff8();
    BOOL func_ov068_02267008();
    BOOL func_ov068_02267048();
    BOOL func_ov068_022670c8();
    BOOL func_ov068_022670f8();
    BOOL func_ov068_0226712c();
    BOOL func_ov068_0226716c();
    BOOL func_ov068_022671a4();
    BOOL func_ov068_022671dc();
    BOOL func_ov068_02267214();
    BOOL func_ov068_02267234();
    void func_ov068_02267238(s32 state);

    Unk_ov068_0226fea4 unk_658;
    u16 unk_710;
    u8 pad_712[2];
    s32 unk_714;
    s32 unk_718;
    s32 unk_71c;
    u8 unk_720;
    u8 pad_721[3];
};

struct Unk_ov068_0226fd68_Vec {
    s32 x, y, z;
};

// Unk_ov068_0226fea4 dtor (D1) and ctor (C1)
Unk_ov068_0226fea4::~Unk_ov068_0226fea4() {}

Unk_ov068_0226fea4::Unk_ov068_0226fea4() {}

BOOL Unk_ov068_0226ff34::func_ov068_02266fc4() {
    if (func_020e7518(&unk_720) == 0) {
        func_02034d70(0x13);
        func_02034dd0(0x12, 5, 5);
        func_020ed188(this);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02266ff8() {
    unk_720 = 10;
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267008() {
    if (unk_564.func_02019790() != 0 || func_020e7518(&unk_720) == 0) {
        func_0203d67c(this);
        if (func_0209750c()) {
            func_020a02d0();
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267048() {
    unk_714 = unk_5c;
    unk_718 = unk_60;
    unk_71c = unk_64;
    unk_714 -= 0x2000;
    unk_71c += 0xa000;
    unk_564.func_020196b4(2, 1, unk_714, unk_71c, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_720 = 0x3c;
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022670c8() {
    if (unk_564.func_020197a8() == 3) {
        if (unk_564.func_02019790()) {
            func_ov068_02267238(4);
        }
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022670f8() {
    unk_564.func_020196b4(3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_0226712c() {
    if (func_020951b8(4) == 0) {
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_ov068_02267238(1);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_0226716c() {
    Unk_ov068_0226fd68_Vec v;
    Unk_ov068_0226fd68_Vec *p = (Unk_ov068_0226fd68_Vec *)func_020947f0(4);
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    v.z += 0x2000;
    func_02094b0c(&v, 0x400, 4);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022671a4() {
    if (unk_618.func_02014220() == 0) {
        func_0203a844();
        func_02034dd0(0x13, 0x3c, 0);
        func_02034d84(0x47);
        func_ov068_02267238(3);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_022671dc() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 1);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267214() {
    if (func_0203d704(this, 0)) {
        func_02094f48(1, 4);
    }
    return TRUE;
}

BOOL Unk_ov068_0226ff34::func_ov068_02267234() {
    return TRUE;
}

void Unk_ov068_0226ff34::func_ov068_02267238(s32 state) {
    BOOL ok = TRUE;
    if (data_ov068_02271018[state].a != NULL) {
        ok = (this->*data_ov068_02271018[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov068_0226ff34::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov068_02271018[unk_654].b != NULL) {
        result = (this->*data_ov068_02271018[unk_654].b)();
    }
    return result;
}

const char *Unk_ov068_0226ff34::vfunc_70() {
    return data_ov068_0226fd68[func_020ae02c(&data_021ed104)];
}

const char *Unk_ov068_0226ff34::vfunc_6c() {
    return data_ov068_0226fd78[func_020ae02c(&data_021ed104)];
}

BOOL Unk_ov068_0226ff34::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov068_02267238(0);
    unk_710 = unk_8e;
    unk_4cc.unk_1c |= 2;
    void *p = func_0209750c();
    if (p != NULL) {
        if (!func_020a0304()) {
            if (!func_020a0318()) {
                func_02097ff4(p, 1);
            }
        }
    }
    func_02034dd0(0x13, 0xf, 0);
    return TRUE;
}

BOOL Unk_ov068_0226ff34::vfunc_04() {
    static Unk_ov068_02267370_Elem tbl[4] = {
        Unk_ov068_02267370_Elem(0xd019), Unk_ov068_02267370_Elem(0xd01a),
        Unk_ov068_02267370_Elem(0xd01b), Unk_ov068_02267370_Elem(0xd01c)
    };
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bda8(this, &tbl[func_020ae02c(&data_021ed104)].v);
    func_0201bc28(this, &unk_658);
    unk_658.func_ov068_02266f58(this);
    unk_350.func_0201a8d0(2, 0x399, 0x133, 0x199);
    return TRUE;
}

extern "C" Unk_ov068_0226ff34 *func_ov068_0226746c() {
    return new Unk_ov068_0226ff34();
}

// ---- state methods of an ov003-side actor (table data_ov003_02230b70) ----
class Unk_ov068_02267584 {
public:
    void func_ov068_02267584();
    BOOL func_ov068_02267614();
    void func_ov068_02267668();
    BOOL func_ov068_022676f8();
    void func_ov068_0226775c();
    BOOL func_ov068_022677cc();
    void func_ov068_02267814();

    u8 pad_00[0x5c];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0xa8 - 0x68];
    s32 unk_a8;
    u8 pad_ac[0x268 - 0xac];
    s32 unk_268;
    s32 unk_26c;
    u8 pad_270[0x304 - 0x270];
    s32 unk_304;
    s32 unk_308;
    s32 unk_30c;
    s32 unk_310;
    s32 unk_314;
    u8 pad_318[0x374 - 0x318];
    u16 unk_374;
    u16 pad_376;
    s32 unk_378;
    s32 unk_37c;
    s32 unk_380;
    u8 pad_384[0x392 - 0x384];
    s16 unk_392;
    u8 unk_394;
    u8 unk_395;
};

extern "C" s16 data_02135f44[];

void Unk_ov068_02267584::func_ov068_02267584() {
    s32 a;
    unk_26c = unk_268;
    a = data_02135f44[((u16)unk_392 >> 4) * 2 + 1];
    unk_304 = func_01ffcb0c(0x100, a);
    unk_30c = -func_01ffcb0c(0x100, a);
    unk_392 = unk_392 + 0x5000;
    if (unk_394 != 0) {
        unk_394--;
    }
    if (unk_394 == 0) {
        func_ov068_0226867c(this);
        func_020ed188(this);
    }
}

BOOL Unk_ov068_02267584::func_ov068_02267614() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    unk_304 = data_021f4880[0];
    unk_308 = data_021f4880[1];
    unk_30c = data_021f4880[2];
    unk_392 = 0;
    unk_394 = 0xc;
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_02267668() {
    s32 a;
    unk_26c = unk_268;
    a = data_02135f44[((u16)unk_392 >> 4) * 2 + 1];
    unk_304 = -func_01ffcb0c(0x100, a);
    unk_30c = func_01ffcb0c(0x100, a);
    unk_392 = unk_392 + 0x3800;
    if (unk_394 != 0) {
        unk_394--;
    }
    if (unk_394 == 0) {
        func_ov068_0226867c(this);
        func_020ed188(this);
    }
}

BOOL Unk_ov068_02267584::func_ov068_022676f8() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    func_ov003_02212ebc(&unk_5c);
    unk_304 = data_021f4880[0];
    unk_308 = data_021f4880[1];
    unk_30c = data_021f4880[2];
    unk_392 = 0;
    unk_394 = 0xc;
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_0226775c() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_64 += unk_314;
    unk_60 += unk_a8;
    if (unk_60 > unk_37c) {
        unk_60 = unk_37c;
    }
    if (unk_395++ >= 0x10) {
        unk_60 = unk_37c;
        func_ov003_02212d28(this, 0xb);
    }
}

BOOL Unk_ov068_02267584::func_ov068_022677cc() {
    unk_374 &= ~0x10;
    unk_374 |= 0x20;
    unk_392 = 0;
    unk_a8 = func_01ffc5a4(unk_37c - unk_60, 0x1333);
    return TRUE;
}

void Unk_ov068_02267584::func_ov068_02267814() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_64 += unk_314;
    unk_a8 += func_01ffc5a4(0, 0x2710000) + 0xdf;
    unk_60 -= unk_a8;
    if (unk_a8 >= 0) {
        s32 t = unk_37c - 0x200;
        if (unk_60 < t) {
            unk_60 = t;
            func_ov003_02212d28(this, 0xa);
        }
    }
    if (unk_395++ >= 0x10) {
        unk_5c = unk_378;
        unk_64 = unk_380;
    }
}
