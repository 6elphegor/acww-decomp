#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
// Other files
void func_0200145c(s32 x);
void func_02001504(u32 x);
void func_020014cc(u32 x);
void func_0200158c(u32 x);
void func_020015a0(u32 x);
void func_020020b8(u32 x);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_0200261c(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void func_02002654(const char *path, void *heap, u32 a);
void func_020026c4(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void func_02002ab8(void);
void func_0200402c(u32 x);
void func_020040cc(void);
void func_0205113c(void);
void func_0205c170(void);
void func_0205c18c(u32 a, u32 b);
void func_0205369c(void);
void func_02053780(void);
void func_02078370(void);
void func_0207835c(void);
void func_02097564(void);
void func_0209d624(void *p);
void func_0209d70c(void *p, u32 x);
void func_0209df9c(void *p);
BOOL func_0209eb48(void *p);
void func_0209f224(u32 x);
void func_020a06ec(void);
u32 func_020a071c(void);
u32 func_020a0a7c(u32 a, void *p);
void func_020a4414(u32 a, u32 b, u32 c, u32 d);
u32 func_020a5ec8(void);
void func_020a5ed8(u32 x);
u32 func_020a6358(u32 i);
u32 func_020b50e8(void);
void func_020b5408(void);
void func_020b541c(void);
void func_020b4f78(void *p, u32 x);
void func_020b4968(u32 a, u32 b);
u32 func_0209c08c(void);
void func_020b83e0(void);
void func_020b8494(void);
void func_0208e9a8(void);
u64 func_01ffa6b4(void);
void func_0210f900(u32 x);
void func_021101f4(u32 x);
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *ptr);
void func_02116048(const void *src, void *dst, u32 size);

struct Unk_020cbb18_t {
    u8 unk_00[0x64];
    u32 unk_64;
};
extern Unk_020cbb18_t *data_020cbb18;
BOOL func_02072e88(Unk_020cbb18_t *p, u32 i);
BOOL func_020729cc(Unk_020cbb18_t *p, u32 i);

extern u32 data_020dc520;
extern u32 data_021c5388;
extern void *data_021f482c;
extern u8 data_021d7350;
extern u8 data_021ed32c;
extern u8 data_021ef378;
extern char data_020e402c[];
extern char data_020e4040[];
extern char data_020e4054[];
extern char data_020e4068[];
extern char data_020e407c[];
extern char data_020e4090[];
extern u8 data_020d0c24[];
extern u8 data_020d0cf4[];
extern u8 data_020d0cc0[];
extern u8 data_020d0c58[];
}

// Buffer interface, see unk_020a6914.cpp
class Unk_020e2a08 {
public:
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e3e9c : public Unk_020e2a78 {
public:
    Unk_020e3e9c();
    virtual ~Unk_020e3e9c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c;
};

class Unk_020e3eb4 : public Unk_020e2a78 {
public:
    Unk_020e3eb4();
    virtual ~Unk_020e3eb4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020e3efc : public Unk_020e2a78 {
public:
    Unk_020e3efc();
    virtual ~Unk_020e3efc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

// Intermediate game-state class with an inline constructor that sets flags
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020e2988() {}
};

class Unk_020e3fe4 : public Unk_020e2988 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020e3fe4();

    void func_020b41cc();
    void func_020b4248();
    void func_020b42b8();

    /* 0x50 */ u8 unk_50;
    /* 0x51 */ volatile u8 unk_51;
    /* 0x54 */ u64 unk_54;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 unk_5d;
    /* 0x5e */ u8 unk_5e;
    /* 0x5f */ u8 unk_5f;
    /* 0x60 */ void *unk_60;
    /* 0x64 */ void *unk_64;
    /* 0x68 */ void *unk_68;
};

class Unk_020e40cc : public Unk_020e2988 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e40cc();

    void func_020b4704();
    void func_020b4708();
    void func_020b4728();

    /* 0x50 */ s32 unk_50;
};

class Unk_020e4124 : public Unk_020e2988 {
public:
    virtual ~Unk_020e4124();
};

class Unk_020e4238 : public Unk_020e2988 {
public:
    virtual ~Unk_020e4238();
};

// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

extern "C" u8 *func_020b4934(void) { return &data_021ef378; }
extern "C" u8 func_020b4928(u32 i) { return data_020d0c58[i]; }
extern "C" u8 func_020b491c(u32 i) { return data_020d0cc0[i]; }
extern "C" u8 func_020b4910(u32 i) { return data_020d0cf4[i]; }
extern "C" u8 func_020b4904(u32 i) { return data_020d0c24[i]; }

extern "C" BOOL func_020b4880(void) {
    u32 v;
    s32 i;
    Unk_020cbb18_t *p = data_020cbb18;
    if (!func_02072e88(p, p->unk_64)) {
        v = func_020b50e8();
        if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
    } else {
        for (i = 3; i >= 0; i--) {
            if (func_02072e88(p, i) && !func_020729cc(p, i)) {
                v = func_020a6358(i);
                if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
            }
        }
    }
    return TRUE;
}

Unk_020e4238::~Unk_020e4238() {}

Unk_020e4124::~Unk_020e4124() {}

extern "C" Unk_020e4124 *func_020b478c(void) { return new Unk_020e4124; }

Unk_020e40cc::~Unk_020e40cc() {}

extern "C" Unk_020e40cc *func_020b4748(void) { return new Unk_020e40cc; }

void Unk_020e40cc::func_020b4728() {
    if (func_020a5ec8() == 0xb) {
        func_020a5ed8(0xc);
        func_020b4708();
    }
}

void Unk_020e40cc::func_020b4708() {
    func_020a4414(6, 3, func_0209c08c(), 1);
    unk_50 = 2;
}

void Unk_020e40cc::func_020b4704() {}

BOOL Unk_020e40cc::vfunc_00() {
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        unk_50 = 0;
    } else {
        unk_50 = 1;
    }
    func_020040cc();
    func_020b541c();
    func_02002ab8();
    func_0208e9a8();
    return TRUE;
}

BOOL Unk_020e40cc::vfunc_0c() {
    data_021c5388 = 0;
    func_020b5408();
    return TRUE;
}

BOOL Unk_020e40cc::vfunc_18() {
    typedef void (Unk_020e40cc::*Fn)();
    static Fn table[3] = {&Unk_020e40cc::func_020b4728, &Unk_020e40cc::func_020b4708, &Unk_020e40cc::func_020b4704};
    (this->*table[unk_50])();
    return TRUE;
}

BOOL Unk_020e40cc::vfunc_24() { return TRUE; }

extern "C" Unk_020e3fe4 *func_020b459c(void) { return new Unk_020e3fe4; }

Unk_020e3fe4::~Unk_020e3fe4() {}

BOOL Unk_020e3fe4::vfunc_0c() {
    func_020e85fc(unk_60, unk_64);
    func_020e85fc(unk_60, unk_68);
    return TRUE;
}

BOOL Unk_020e3fe4::vfunc_00() {
    data_020dc520 = 3;
    func_020040cc();
    unk_50 = 0;
    unk_60 = data_021f482c;
    unk_64 = func_020e8608(unk_60, 0x15fe0);
    unk_68 = func_020e8608(unk_60, 0x15fe0);
    return TRUE;
}

BOOL Unk_020e3fe4::vfunc_18() {
    switch (unk_5f) {
    case 0:
        if (unk_50 == 1) unk_5f = 1;
        break;
    case 1: {
        u32 r = func_020a0a7c(0, unk_64);
        if (r != 3) {
            unk_5c = r;
            unk_5f = 2;
        }
        break;
    }
    case 2: {
        u32 r = func_020a0a7c(1, unk_68);
        if (r != 3) {
            unk_5d = r;
            unk_5f = 3;
        }
        break;
    }
    }
    switch (unk_50) {
    case 0:
        func_020b42b8();
        func_0200145c(-16);
        unk_50 = 1;
        unk_51 = 0x10;
        func_0200402c(0x88c);
        break;
    case 1:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            func_0200145c(-unk_51);
        } else {
            unk_50 = 2;
            unk_54 = func_01ffa6b4();
        }
        break;
    case 2: {
        u64 now = func_01ffa6b4();
        if (unk_5f < 5) {
            if (unk_5f < 3) break;
            func_020b4248();
            func_020b41cc();
            unk_5f = 5;
        }
        if (now - unk_54 < 0x7fd88) break;
        unk_50 = 3;
        unk_51 = 0x10;
        break;
    }
    case 3:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            func_0200145c(unk_51 - 0x10);
        } else {
            func_02001504(0);
            func_020014cc(0);
            unk_50 = 4;
            func_020b4f78(func_020b4934(), 0x2c);
            func_020b4968(3, 2);
        }
        break;
    }
    return TRUE;
}

void Unk_020e3fe4::func_020b42b8() {
    func_02053780();
    func_020b83e0();
    func_020b8494();
    func_0205369c();
    func_021101f4(0x20);
    func_0210f900(0x80);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xffcfffef;
    *(volatile u32 *)0x4001000 = *(volatile u32 *)0x4001000 & 0xffcfffef;
    func_020015a0(0);
    func_0200158c(0);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xc7ffffff;
    func_0200226c(6, 0, 0, 0);
    func_0200226c(2, 0, 0, 0);
    void *heap = data_021f482c;
    func_0200261c(data_020e402c, heap, 6, 0, 0, 0x2ff);
    func_020026c4(data_020e4040, heap, 6, 0, 0, 0);
    func_02002654(data_020e4054, heap, 6);
    func_0200261c(data_020e4068, heap, 2, 0, 0, 0x13f);
    func_020026c4(data_020e407c, heap, 2, 0, 0, 0);
    func_02002654(data_020e4090, heap, 2);
    func_020020b8(6);
    func_020020b8(2);
}

void Unk_020e3fe4::func_020b4248() {
    if (unk_5c == 1 || unk_5d == 1) {
        unk_5e = 1;
    } else if (unk_5c != 0 && unk_5d != 0) {
        unk_5e = 4;
    } else {
        u32 r;
        if (unk_5c != 0) {
            r = 1;
        } else if (unk_5d != 0) {
            r = 0;
        } else {
            r = func_020a071c();
        }
        if (r == 0) {
            func_02116048(unk_64, &data_021d7350, 0x15fe0);
        } else {
            func_02116048(unk_68, &data_021d7350, 0x15fe0);
        }
        unk_5e = 0;
    }
}

void Unk_020e3fe4::func_020b41cc() {
    func_0205c18c(0x5000, 0);
    if (unk_5e == 4 || unk_5e == 1) {
        if (unk_5e == 4) {
            if (!func_0209eb48(&data_021ed32c)) func_0209f224(1);
        }
        if (unk_5e == 4) func_020a06ec();
        func_0209df9c(&data_021d7350);
        func_02097564();
        func_02078370();
        func_0209d70c(&data_021d7350, 3);
    } else {
        func_0209d70c(&data_021d7350, 4);
    }
    func_0209d624(&data_021d7350);
    func_0207835c();
    func_0205c170();
}

Unk_020e3efc::~Unk_020e3efc() {}
u8 *Unk_020e3efc::vfunc_0c() { return (u8 *)this + 0x12; }
u32 Unk_020e3efc::vfunc_08() { return 0x19; }
Unk_020e3efc::Unk_020e3efc() { func_020a7c3c(); }

u8 *Unk_020e3eb4::vfunc_0c() { return (u8 *)this + 0x12; }
u32 Unk_020e3eb4::vfunc_08() { return 0x100; }
Unk_020e3eb4::~Unk_020e3eb4() {}
Unk_020e3eb4::Unk_020e3eb4() { func_020a7c3c(); }

extern "C" Unk_020e3eb4 *func_020b406c(void) {
    static Unk_020e3eb4 inst;
    return &inst;
}

Unk_020e3e9c::Unk_020e3e9c() : unk_1c(0) { func_020a7c3c(); }
Unk_020e3e9c::~Unk_020e3e9c() {}
