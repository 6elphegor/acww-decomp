#include "types.h"

extern "C" {
s32 func_0206e61c();
s32 func_0200142c();
s32 func_020013cc(s32 a);
s32 func_0200140c();
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u8 data_021edb5c[];
extern u8 data_ov002_02204864[];
}

class Unk_020660f8 {
public:
    void func_02067940();
    void func_0206794c();
    s32 func_02067958();
    void func_02067978(void *p);
    void func_02067a60();
    void func_02067a6c();
    void func_02067a78();
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};
extern "C" Unk_020660f8 *func_02067918(s32 a);
extern "C" s32 func_02067abc(void *p, void *q, s32 r);

class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    void func_0206f9fc(s32 v);
    u8 unk_00[0x40];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u8 a, s32 b);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208e110();
    s32 func_0208e138();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *x, s32 *y);
    void func_0208e288(s32 x, s32 y);
    void func_0208e290(Unk_020e0488 *p);
    void func_0208e2c8();

    /* 0x0c */ u8 unk_0c[0x64];
};

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 flag);
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_02089ac0(Unk_020e0488 *p);
    void func_02089ad8(s32 a, s32 b);
    void func_02089b10();

    /* 0x0c */ u8 unk_0c[0xb0];
};

// Vtable 0x02204468
class Unk_ov002_02204468 : public Unk_020e0d98 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();

    void func_ov002_022006ac(s32 v);
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const u8 *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
};

// Non-polymorphic holder object (members at +0x00 and +0xc0)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();

    BOOL func_ov002_0220403c();
    s32 func_ov002_02204044();
    BOOL func_ov002_0220405c();
    void func_ov002_0220407c();
    BOOL func_ov002_022040a4();
    void func_ov002_022040c0();
    void func_ov002_022040c8();
    void func_ov002_022040d4();
    void func_ov002_022040ec();
    BOOL func_ov002_02204140();
    void func_ov002_02204174();
    BOOL func_ov002_0220418c();
    void func_ov002_022041b8(u8 *a, s32 b);
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204340(u8 *a, s32 b, u32 c);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);

    /* 0x00 */ Unk_ov002_02204468 unk_00;
    /* 0xc0 */ Unk_020ddcf0 unk_c0;
    /* 0xe0 */ u8 unk_e0[0x1c];
    /* 0xfc */ Unk_020660f8 *unk_fc;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 unk_104;
    /* 0x105 */ u8 unk_105;
};

// Vtable 0x02204754
class Unk_ov002_02204754 : public Unk_020e1098 {
public:
    Unk_ov002_02204754(u8 a, s32 b);
    virtual ~Unk_ov002_02204754();
    virtual void vfunc_10(s32 a, s32 b);
};

// Vtable 0x02204738
class Unk_ov002_02204738 : public Unk_ov002_02204754 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();

    BOOL func_ov002_02203e24();
    void func_ov002_02203e88(s32 v, s32 x, s32 y);
    void func_ov002_02203ec8(s32 v);
    void func_ov002_02203edc(s32 v);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 k);
    s32 func_ov002_02203f78(s32 k);
};

Unk_ov002_02204754::Unk_ov002_02204754(u8 a, s32 b) : Unk_020e1098(a, b) {}
Unk_ov002_02204754::~Unk_ov002_02204754() {}
void Unk_ov002_02204754::vfunc_10(s32 a, s32 b) { Unk_020e0db4::vfunc_10(a - 0x80, b - 0x60); }

Unk_ov002_02204738::Unk_ov002_02204738() : Unk_ov002_02204754(0, 0) {}
Unk_ov002_02204738::~Unk_ov002_02204738() {}

BOOL Unk_ov002_02204738::func_ov002_02203e24() {
    BOOL c;
    if (data_021f4770 != 0 && data_021f4774 != 0) c = TRUE; else c = FALSE;
    if (c) {
        s32 a = data_021ef5f8;
        s32 x = a - func_02089f68();
        s32 b = data_021ef5f4;
        s32 y = b - func_02089f64();
        if (x >= 0 && x <= 0x40 && y >= 0 && y <= 0x18) return TRUE;
    }
    return FALSE;
}

void Unk_ov002_02204738::func_ov002_02203e88(s32 v, s32 x, s32 y) {
    func_ov002_02203edc(v);
    vfunc_10(x, y);
    func_0208e288(0, 0);
    func_0208e2c8();
    func_0208e13c(1);
    vfunc_0c();
}

void Unk_ov002_02204738::func_ov002_02203ec8(s32 v) {
    func_ov002_02203e88(v, 0x98, 0xac);
}

void Unk_ov002_02204738::func_ov002_02203edc(s32 v) {
    Unk_020e0488 s;
    s.func_0206f9fc(v);
    func_0208e290(&s);
}

BOOL Unk_ov002_02204738::func_ov002_02203f08() {
    if (func_0208e110() == 0) {
        vfunc_0c();
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov002_02204738::func_ov002_02203f28(s32 k) {
    s32 r = func_02089f64();
    s32 x, y;
    if (func_0208e138() == 2) {
        func_0208e1fc(&x, &y);
        r += y;
    }
    switch (k) {
    case 0:
    case 1:
        r += 8;
        break;
    case 2:
        break;
    case 3:
        r += 8;
    }
    return r;
}

s32 Unk_ov002_02204738::func_ov002_02203f78(s32 k) {
    s32 r = func_02089f68();
    s32 x, y;
    if (func_0208e138() == 2) {
        func_0208e1fc(&x, &y);
        r += x;
    }
    switch (k) {
    case 0:
    case 2:
        r += 0x10;
        break;
    case 1:
    case 3:
        r += 0x20;
    }
    return r;
}

Unk_ov002_022040ec::Unk_ov002_022040ec() {
    unk_104 = 3;
    unk_105 = 0;
}

Unk_ov002_022040ec::~Unk_ov002_022040ec() {}

void Unk_ov002_022040ec::func_ov002_022040c0() { func_ov002_0220403c(); }

void Unk_ov002_022040ec::func_ov002_022040c8() { unk_00.func_ov002_022006e4(0); }

void Unk_ov002_022040ec::func_ov002_022040d4() {
    unk_00.func_ov002_0220071c();
    Unk_ov002_02204468 *p = &unk_00;
    p->vfunc_08();
}

BOOL Unk_ov002_022040ec::func_ov002_022040a4() {
    Unk_020660f8 *p = func_02067918(1);
    if (p->unk_04 == 2) return TRUE;
    return FALSE;
}

BOOL Unk_ov002_022040ec::func_ov002_0220405c() {
    Unk_020660f8 *o = unk_fc;
    if (o->unk_04 == 0) {
        o->func_02067958();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_022040ec::func_ov002_0220407c() {
    Unk_020660f8 *p = func_02067918(1);
    func_02067abc(p, data_021edb5c, 0);
    p->func_02067a60();
    p->func_02067a6c();
}

BOOL Unk_ov002_022040ec::func_ov002_0220403c() { return func_0200140c(); }

s32 Unk_ov002_022040ec::func_ov002_02204044() {
    func_0200142c();
    func_020013cc(-10);
}

void Unk_ov002_022040ec::func_ov002_022040ec() {
    Unk_020e0488 s;
    s.func_0206f9fc(0x64);
    unk_00.func_02089ac0(&s);
    unk_00.func_02089ad8(0, 0x40);
    unk_00.func_ov002_022006b8();
    unk_00.func_02089b10();
    unk_00.func_ov002_022006ac(0);
    func_ov002_02204044();
    unk_00.func_ov002_022006c0();
}

BOOL Unk_ov002_022040ec::func_ov002_02204140() {
    if (unk_104 == 2) {
        if (func_ov002_0220405c()) {
            func_ov002_0220403c();
            unk_104 = 3;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void Unk_ov002_022040ec::func_ov002_02204174() {
    func_ov002_0220407c();
    unk_104 = 2;
}

BOOL Unk_ov002_022040ec::func_ov002_0220418c() {
    if (unk_104 == 0) {
        if (func_ov002_022040a4()) {
            unk_104 = 1;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void Unk_ov002_022040ec::func_ov002_022041b8(u8 *a, s32 b) {
    Unk_020660f8 *p = func_02067918(1);
    unk_c0.vfunc_08();
    unk_c0.func_020a710c(data_ov002_02204864);
    unk_c0.unk_1e = *a;
    p->func_02067978(&unk_c0);
    p->func_0206794c();
    if (b == 0) p->func_02067940();
    p->unk_08 = 1;
    p->func_02067a78();
    unk_104 = 0;
    if (unk_105 == 0) func_ov002_02204044();
}

BOOL Unk_ov002_022040ec::func_ov002_02204234(s32 a) {
    switch (unk_104) {
    case 0:
        if (func_ov002_022040a4()) {
            unk_104 = 1;
            unk_00.func_ov002_022006c0();
            if (unk_105 != 0) func_ov002_02204044();
        }
        break;
    case 1:
        if (unk_105 != 0) for (;;) {}
        if (a == 0 || !func_0206e61c()) {
            BOOL k;
            if (data_021f4770 != 0 && data_021f4774 != 0) k = TRUE; else k = FALSE;
            if (!k) {
                u16 v = data_021f47d8[1];
                if ((v & 1) == 0 && (v & 2) == 0 && (v & 0x400) == 0 && (v & 0x800) == 0) break;
            }
        }
        func_ov002_0220407c();
        unk_104 = 2;
        unk_00.func_ov002_022006e4(0);
        break;
    case 2:
        if (func_ov002_0220405c()) {
            func_ov002_0220403c();
            unk_104 = 3;
        }
        break;
    case 3:
        return TRUE;
    }
    unk_00.func_ov002_0220071c();
    if (unk_105 == 0) {
        Unk_ov002_02204468 *p = &unk_00;
        p->vfunc_08();
    }
    return FALSE;
}

void Unk_ov002_022040ec::func_ov002_02204340(u8 *a, s32 b, u32 c) {
    unk_105 = c;
    func_ov002_022041b8(a, b);
    Unk_020e0488 s;
    s.func_0206f9fc(0x64);
    unk_00.func_02089ac0(&s);
    unk_00.func_02089ad8(0, 0x30);
    unk_00.func_ov002_022006b8();
    unk_00.func_02089b10();
    unk_00.func_ov002_022006ac(0);
}

void Unk_ov002_022040ec::func_ov002_02204394(u8 *a, s32 b, u32 c) {
    unk_105 = c;
    func_ov002_022041b8(a, b);
    Unk_020e0488 s;
    s.func_0206f9fc(0x64);
    unk_00.func_02089ac0(&s);
    unk_00.func_02089ad8(0, 0x40);
    unk_00.func_ov002_022006b8();
    unk_00.func_02089b10();
    unk_00.func_ov002_022006ac(0);
}
