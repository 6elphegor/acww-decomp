#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov070_0227280c;
class Unk_ov070_0227277c;

extern "C" {
void *func_0209750c();
void *func_0209868c(void *p);
void func_02087bc8(void *p, u32 v);
u32 func_02087bdc(void *p);
void *func_020850e0();
BOOL func_020851bc(void *p, s32 v);
void func_020851a4(void *p, s32 v);
void func_0208a58c();
BOOL func_0206ed18();
s32 func_0206e8e8();
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0203d67c(void *p);
void func_02115fb4(void *p, s32 v, s32 n);
u32 func_02063b8c(u32 n);
BOOL func_0201bcbc(void *p, void *q);
void func_0201adc8(void *p, s32 v);
extern u16 data_020c6cc8;
extern u8 data_ov070_0227256c[];
extern u32 data_ov070_02272568[];
extern u8 data_ov070_02272718[];
extern u8 data_ov070_02272728[];
extern u8 data_ov070_02272758[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    u8 pad_04[0x38];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

struct Unk_ov070_02271f10_Out {
    u32 a;
    u8 b;
};

typedef void (Unk_ov070_0227277c::*Unk_ov070_0227277c_Fn)();

class Unk_ov070_0227277c : public Unk_020d8b38 {
public:
    Unk_ov070_0227277c();
    virtual ~Unk_ov070_0227277c();
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
    virtual void vfunc_64(u32 a);
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov070_02271f10_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov070_02272014(Unk_ov070_0227280c *owner);
    void func_ov070_02272138();
    void func_ov070_022721e0(s32 idx);

    s32 unk_ac;
    Unk_ov070_0227280c *unk_b0;
    Unk_ov070_0227277c_Fn unk_b4;
    s32 unk_bc;
    Unk_0203442c unk_c0[3];
    u8 pad_c6[2];
    u8 unk_c8[0x14];
    u8 unk_dc;
    u8 pad_dd[3];
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
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
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

    void func_0201bc28(void *p);

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

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov070_0227280c : public Unk_020d8bc8 {
public:
    Unk_ov070_0227280c() {}
    virtual ~Unk_ov070_0227280c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov070_02272294();
    BOOL func_ov070_02272298();
    BOOL func_ov070_022722c4();
    BOOL func_ov070_022722fc();
    BOOL func_ov070_02272300();
    void func_ov070_02272334(s32 state);

    s32 unk_654;
    Unk_ov070_0227277c unk_658;
};

struct Unk_ov070_02272334_Ent {
    BOOL (Unk_ov070_0227280c::*enter)();
    BOOL (Unk_ov070_0227280c::*exit)();
};

extern "C" {
extern Unk_ov070_02272334_Ent data_ov070_022728e4[];
}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" u8 func_ov070_02271e0c(s32 unused, s32 a, s32 kind) {
    u8 r = 0;
    switch (kind) {
    case 0:
        if (a == 0) {
            r = func_02063b8c(3) + 1;
        } else if (a < 200) {
            r = func_02063b8c(3) + 3;
        } else if (a < 1000) {
            r = func_02063b8c(3) + 5;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    case 1:
        if (a == 0) {
            r = func_02063b8c(3) + 1;
        } else if (a < 160) {
            r = func_02063b8c(3) + 3;
        } else if (a < 600) {
            r = func_02063b8c(3) + 5;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    case 2:
        if (a < 350) {
            r = func_02063b8c(3) + 1;
        } else if (a < 400) {
            r = func_02063b8c(3) + 4;
        } else {
            r = func_02063b8c(4) + 7;
        }
        break;
    }
    return r;
}

void Unk_ov070_0227277c::vfunc_64(u32 a) {
    func_02087bc8(func_0209868c(func_0209750c()), a);
}

void Unk_ov070_0227277c::vfunc_78(Unk_ov070_02271f10_Out *out) {
    void *g = func_0209868c(func_0209750c());
    if (!func_0202e1cc(7, 1)) {
        unk_ac = 0;
    } else if (func_0202e1cc(8, 0)) {
        if (func_0202e1cc(9, 0)) {
            unk_ac = 6;
        } else if (unk_b0->unk_658.unk_dc < 3) {
            unk_ac = 2;
        } else if (func_02087bdc(g) >= 0x3d) {
            unk_ac = 3;
        } else {
            unk_ac = 4;
        }
    } else {
        unk_ac = 1;
    }
    if (func_020851bc(func_020850e0(), 10)) {
        if ((u32)(unk_ac - 2) <= 2) {
            unk_ac = 5;
        }
    }
    if (unk_ac >= 0 && unk_ac < 7) {
        out->b = data_ov070_0227256c[unk_ac * 8];
        if (unk_ac == 2) {
            out->b = unk_b0->unk_658.unk_dc + 0x4c;
            unk_b0->unk_658.unk_dc++;
        }
        out->a = *(u32 *)((u8 *)data_ov070_02272568 + unk_ac * 8);
    }
}

void Unk_ov070_0227277c::func_ov070_02272014(Unk_ov070_0227280c *owner) {
    vfunc_08();
    unk_b0 = owner;
    for (s32 i = 0; i < 3; i++) {
        unk_c0[i].unk_00 = 0xfff1;
    }
    unk_ac = 0;
}

Unk_ov070_0227277c::~Unk_ov070_0227277c() {}

Unk_ov070_0227277c::Unk_ov070_0227277c() {}

extern "C" s32 func_ov070_02272118(s32 unused, u8 *p, s32 n);
extern "C" s32 func_ov070_022720e4(s32 unused, u8 *p, s32 n) {
    s32 z = func_ov070_02272118(unused, p, n);
    s32 pos = 0;
    s32 r = func_02063b8c(z);
    s32 i = pos;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            if (r == 0) {
                pos = i;
                break;
            }
            r--;
        }
    }
    return pos;
}

extern "C" s32 func_ov070_02272118(s32 unused, u8 *p, s32 n) {
    s32 cnt = 0;
    s32 i = 0;
    for (; i < n; p++, i++) {
        if (*p == 0) {
            cnt++;
        }
    }
    return cnt;
}

void Unk_ov070_0227277c::func_ov070_02272138() {
    Unk_020660f8 *m = unk_3c;
    u8 v = 0x4b;
    unk_bc = 0;
    if (func_0206ed18()) {
        unk_bc = func_0206e8e8();
        v = 0x2d;
        if (unk_bc > 1000 && unk_bc <= 2000) {
            v = 0x2e;
        } else if (unk_bc > 2000 && unk_bc <= 4000) {
            v = 0x2f;
        } else if (unk_bc > 4000) {
            v = 0x30;
        }
        func_0201adc8(unk_b0, unk_bc);
    } else {
        func_0208a58c();
        func_020851a4(func_020850e0(), 10);
    }
    m->func_02067a84(&v, data_ov070_02272718);
}

void Unk_ov070_0227277c::func_ov070_022721e0(s32 idx) {
    static Unk_ov070_0227277c_Fn tbl[1] = {&Unk_ov070_0227277c::func_ov070_02272138};
    unk_b4 = tbl[idx];
}

void Unk_ov070_0227277c::vfunc_84() {
    if (unk_b4 != NULL) {
        (this->*unk_b4)();
        unk_b4 = NULL;
    }
}

void Unk_ov070_0227277c::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_b4 = NULL;
}

BOOL Unk_ov070_0227280c::func_ov070_02272294() { return TRUE; }

BOOL Unk_ov070_0227280c::func_ov070_02272298() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov070_02272334(2);
    }
    return TRUE;
}

BOOL Unk_ov070_0227280c::func_ov070_022722c4() {
    void *p = unk_658.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = func_0201bcbc(this, p);
    }
    unk_618.func_020141b4(0, x, 0);
    return TRUE;
}

BOOL Unk_ov070_0227280c::func_ov070_022722fc() { return TRUE; }

BOOL Unk_ov070_0227280c::func_ov070_02272300() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_ov070_0227280c::func_ov070_02272334(s32 state) {
    BOOL ok = TRUE;
    if (data_ov070_022728e4[state].enter != NULL) {
        ok = (this->*data_ov070_022728e4[state].enter)();
    }
    if (ok == 1) {
        unk_654 = state;
    }
}

BOOL Unk_ov070_0227280c::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov070_022728e4[unk_654].exit != NULL) {
        result = (this->*data_ov070_022728e4[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov070_0227280c::vfunc_70() { return data_ov070_02272728; }

u8 *Unk_ov070_0227280c::vfunc_6c() { return data_ov070_02272758; }

BOOL Unk_ov070_0227280c::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov070_02272334(0);
    unk_4cc.unk_1c |= 2;
    unk_658.unk_dc = 0;
    return TRUE;
}

BOOL Unk_ov070_0227280c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov070_02272014(this);
    func_02115fb4(unk_658.unk_c8, 0, 0x14);
    return TRUE;
}

extern "C" Unk_ov070_0227280c *func_ov070_02272450() {
    return new Unk_ov070_0227280c();
}
