#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes owned by other units (declarations only, no inline bodies)

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

// destination-side buffer interface
class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(class Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    u8 func_020a7bd8(Unk_020e2a78 *other);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
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

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();
    u32 pad[0x1c / 4];
};

struct Unk_020cbb18 {
    /* 0x00 */ u8 unk_00[0x64];
    /* 0x64 */ s32 unk_64;
};

// ---------------------------------------------------------------------------------------------------------------------
// Classes of this unit, in vtable order

class Unk_020d9124 {
public:
    Unk_020d9124();
    virtual ~Unk_020d9124();
    void func_02038764();
    void func_0203877c();
    void func_02038780();
};

// 0x34-byte buffer
class Unk_020d917c : public Unk_020e2a78 {
public:
    Unk_020d917c();
    virtual ~Unk_020d917c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x14 */ u8 unk_14[0x20];
};

// Text (vtable 0x020d9134), 0x10 bytes
class Unk_020d9134 : public Unk_020d9218 {
public:
    Unk_020d9134();
    virtual ~Unk_020d9134();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x04 */ u8 unk_04[9];
};

// Player slot, 0xb4 bytes (vtable 0x020d9194)
class Unk_020d9194 : public Unk_020e0db4 {
public:
    Unk_020d9194();
    virtual ~Unk_020d9194();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0203900c();
    void func_02039028();
    void func_020390c8();
    void func_020390e4();
    void func_02039194();
    void func_02039230();
    void func_02039290();
    void func_0203930c();
    void func_0203934c();
    void func_020393b4();
    void func_020393f8();
    void func_02039498();
    void func_02039508();
    void func_02039534();
    void func_02039544();
    void func_02039584();
    BOOL func_020395bc();
    BOOL func_020395dc();
    void func_020395fc(s32 a, s32 b, s32 c);
    void func_0203960c(StrBuf *a, Unk_020e2a78 *b, s32 c);
    void func_02039630();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_020d917c unk_54;
    /* 0x88 */ Unk_020d9134 unk_88;
    /* 0x98 */ Unk_02050288 *unk_98;
    /* 0x9c */ Unk_02050288 *unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
};

// Slot table (vtable 0x020d9114), 0x2f4 bytes
class Unk_020d9114 {
public:
    Unk_020d9114();
    virtual ~Unk_020d9114();

    void func_02038a1c();
    void func_02038a58();
    void func_02038a80();
    void func_02038ab4();
    void func_02038aec();
    void func_02038b04();
    BOOL func_02038b44(Unk_020d9194 *p);
    BOOL func_02038b74(Unk_020d9194 *p);
    void func_02038ba4();
    void func_02038c10();
    void func_02038c40();
    BOOL func_02038ca8(Unk_020d9194 *p);
    BOOL func_02038d28(Unk_020d9194 *p);
    void func_02038d68(s32 idx);
    s32 func_02038dd0(s32 idx);
    s32 func_02038ddc(s32 idx);
    void func_02038dfc(s32 idx, StrBuf *a, Unk_020e2a78 *b);

    /* 0x004 */ Unk_020d9194 unk_04[4];
    /* 0x2d4 */ Unk_020d9194 *unk_2d4[4];
    /* 0x2e4 */ Unk_020d9194 *unk_2e4[4];
};

typedef void (Unk_020d9194::*Unk_020d9194_Fn)();

// Pointer + size view
class Unk_020d914c : public Unk_020d9200 {
public:
    Unk_020d914c(u8 *data, u32 size);
    virtual ~Unk_020d914c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_020d9104 {
public:
    Unk_020d9104();
    virtual ~Unk_020d9104();
    void func_020389dc();
    void func_020389e4();
    void func_020389e8();
};

// Main object (vtable 0x020d91b0)
class Unk_020d91b0 : public Unk_020d8c7c {
public:
    Unk_020d91b0();
    virtual ~Unk_020d91b0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    /* 0x050 */ Unk_020d9124 unk_50;
    /* 0x054 */ Unk_020d9114 unk_54;
    /* 0x348 */ Unk_020d9104 unk_348;
};

// Buffer wrapping external memory
class Unk_020d9164 : public Unk_020e2a60 {
public:
    Unk_020d9164(u8 *data, u32 size);
    virtual ~Unk_020d9164();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ u32 unk_14;
};

// Data
extern const u8 data_020c8ce4;  // first .rodata object of the next unit
extern u8 data_021c302c[0x29];
extern const u32 data_020c8cd4[4];


extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u16 data_021f47d8[];
extern u8 data_020d467c[];
extern s32 data_021c5384;

s32 func_02095134(s32 a);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *p);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *p, s32 i);
u8 *_ZN12Unk_020cbb1813func_02072970Ej(Unk_020cbb18 *p, s32 i);
BOOL func_0203e2f4();
BOOL func_02011880();
s32 func_020b50e8();
void func_020b3558(Unk_020d917c *buf, u8 *c, s32 z);
void func_0200402c(u32 a);
void *func_0209750c();
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
void _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(void *p, Unk_020e1c64 *t);
void func_02050fd0(void *p);
void func_02050ee0(Unk_020d914c *p, void *q);
void func_02050ff8(Unk_020d9134 *a, Unk_020d914c *b);
void func_02076280(s32 a, s32 b, s32 c, s32 d);
u32 func_020766e0(void *p);
void func_02116048(void *dst, void *src, u32 n);
void func_020385ec(void *self);
void func_020388fc();
u8 func_0203889c(s32 idx);
void func_020389a0(s32 i, Unk_020d9194 *x);
void func_02038fe8(s32 idx, StrBuf *a, Unk_020e2a78 *b);
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
s32 func_0209c38c(s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
s32 *_ZN12Unk_0208927013func_02089240Ev(void *p);
void _ZN12Unk_0208927013func_02089258Eii(void *p, s32 a, s32 b);
void _ZN12Unk_0208927013func_02089260Ei(void *p, s32 v);
void _ZN12Unk_0208927013func_02089264Ei(void *p, s32 v);
void _ZN12Unk_0208927013func_02089268EP16Unk_02089270_Tbl(void *p, void *v);
void func_0205113c(void *buf);
BOOL func_020510d8(StrBuf *dst, StrBuf *src);
s32 func_0206edbc(void);
s32 func_0206ede0(void);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

static inline BOOL IsPositive(s32 v) {
    if (v > 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL IsZero(BOOL v) {
    if (v == 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_02038f10_Pos(s32 v) {
    if (v > 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_020d917c::Unk_020d917c() { func_020a7c3c(); }

Unk_020d917c::~Unk_020d917c() {}

u32 Unk_020d917c::vfunc_08() { return 0x21; }

u8 *Unk_020d917c::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020d9164::Unk_020d9164(u8 *data, u32 size) : unk_10(data), unk_14(size) {}

Unk_020d9164::~Unk_020d9164() {}

u32 Unk_020d9164::vfunc_08() { return unk_14; }

u8 *Unk_020d9164::vfunc_0c() { return unk_10; }

Unk_020d9134::Unk_020d9134() { func_0205113c(this); }

Unk_020d9134::~Unk_020d9134() {}

u32 Unk_020d9134::vfunc_08() { return 9; }

u8 *Unk_020d9134::vfunc_0c() { return (u8 *)this + 4; }

Unk_020d914c::Unk_020d914c(u8 *data, u32 size) : unk_04(data), unk_08(size) {}

Unk_020d914c::~Unk_020d914c() {}

u32 Unk_020d914c::vfunc_08() { return unk_08; }

u8 *Unk_020d914c::vfunc_0c() { return unk_04; }

Unk_020d9194::Unk_020d9194()
    : unk_0c(0), unk_10(0), unk_14(0), unk_18(0), unk_44(0), unk_48(0), unk_4c(0), unk_50(0) {
    unk_98 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
}

Unk_020d9194::~Unk_020d9194() {
    func_020390c8();
    func_0203900c();
}

void Unk_020d9194::vfunc_08() {
    if (unk_b0 != 0) {
        if (unk_0c == 0) {
            void *h = unk_30.func_02089248();
            s32 x = func_02089f68() + unk_30.func_02089228(-1);
            s32 y = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_30.func_02089210(-1));
            func_02087e70(0, h, x, y, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            void *h1 = unk_1c.func_02089248();
            s32 x1 = func_02089f68() + unk_1c.func_02089228(-1);
            s32 y1 = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_1c.func_02089210(-1));
            void *h2 = unk_30.func_02089248();
            s32 x2 = func_02089f68() + unk_30.func_02089228(-1);
            s32 y2 = unk_50 + (unk_4c + (unk_48 + func_02089f64()) + unk_30.func_02089210(-1));
            func_02087e70(2, h1, x1, y1, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(2, h2, x2, y2, unk_10, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020d9194::vfunc_0c() {
    if (unk_a8 > 0) {
        unk_a8--;
    }
    static Unk_020d9194_Fn tbl[4] = {&Unk_020d9194::func_02039508, &Unk_020d9194::func_020393f8,
                                     &Unk_020d9194::func_0203934c, &Unk_020d9194::func_02039290};
    (this->*tbl[unk_a0])();
    if (unk_a0 != 0) {
        if (unk_0c != 0) {
            unk_1c.func_02089140();
        }
        unk_30.func_02089140();
    }
}

// Data creation order (it sets the layout: mwcc heapsorts the reversed creation list by size). With the record
// data_020d90d4 in the unit, the original order needs the definitions in exactly this sequence after vfunc_0c, plus one
// unreferenced 8-byte object (U037_order_fill0: no symbols.txt name, dead-stripped at link) between them.
const u32 data_020c8cd4[4] = {7, 7, 8, 9};
u8 data_021c302c[0x29];
u32 U037_order_fill0[2];
extern const u32 data_020c8cc4[4];
const u32 data_020c8cc4[4] = {10, 11, 12, 13};
s32 data_021c3000;
// 0x020d90d4: scene registration record of func_020385d0 (referenced only from the table word 0x020e2158)
extern "C" Unk_020d91b0 *func_020385d0();
struct Unk_020d90d4_Rec {
    Unk_020d91b0 *(*unk_00)();
    s16 unk_04;
    s16 unk_06;
};
Unk_020d90d4_Rec data_020d90d4 = {func_020385d0, 0xcb, 0x8d};
Unk_020d9114 *data_021c3008;

void Unk_020d9194::func_02039630() {
    s32 a, t, t2;
    if (unk_0c == 0) {
        a = func_0206edbc();
        t = func_01ffcb0c(0x4c000, a);
        t2 = func_01ffcb0c(0xc0000, 0x1000 - a);
        unk_50 = (t + t2) >> 12;
    } else {
        a = func_0206ede0();
        t = func_01ffcb0c(-0x5c000, a);
        t2 = func_01ffcb0c(0x30000, 0x1000 - a);
        unk_50 = (t + t2) >> 12;
    }
}

void Unk_020d9194::func_0203960c(StrBuf *a, Unk_020e2a78 *b, s32 c) {
    func_020510d8((StrBuf *)&unk_88, a);
    unk_54.func_020a7bd8(b);
    unk_10 = c + 5;
}

void Unk_020d9194::func_020395fc(s32 a, s32 b, s32 c) {
    unk_0c = a;
    unk_14 = b;
    unk_18 = c;
    func_02039230();
}

BOOL Unk_020d9194::func_020395dc() {
    BOOL r = unk_a0 == 0 ? TRUE : FALSE;
    if (r) {
        unk_ac = 2;
    }
    return r;
}

BOOL Unk_020d9194::func_020395bc() {
    BOOL r = unk_a0 != 0 ? TRUE : FALSE;
    if (r) {
        unk_ac = 0;
    }
    return r;
}

void Unk_020d9194::func_02039584() {
    if (unk_98 != NULL) {
        unk_98->unk_50 = 3;
        unk_98->func_02050c90();
    }
    if (unk_9c != NULL) {
        unk_9c->unk_50 = 3;
        unk_9c->func_02050c90();
    }
}

void Unk_020d9194::func_02039544() {
    unk_54.func_020a7c3c();
    func_0205113c(&unk_88);
    func_020390c8();
    func_0203900c();
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    func_02039534();
}

void Unk_020d9194::func_02039534() {
    unk_a0 = 0;
    unk_b0 = 0;
}

void Unk_020d9194::func_02039508() {
    if (unk_ac != 0) {
        func_020390e4();
        func_02039028();
        func_02039194();
        func_02039498();
    }
}

void Unk_020d9194::func_02039498() {
    s32 a, b;
    unk_a0 = 1;
    unk_b0 = 1;
    if (unk_0c == 0) {
        a = func_0209c38c(0x136, 2) + 3;
    } else {
        a = func_0209c38c(0x12c, 2) + 3;
    }
    if (unk_0c == 0) {
        b = func_0209c38c(0x136, 3) + 5;
    } else {
        b = func_0209c38c(0x12c, 3) - 5;
    }
    unk_a4 = a;
    unk_4c = b;
    if (unk_0c != 0) {
        func_0200402c(0x3f);
    }
}

void Unk_020d9194::func_020393f8() {
    s32 a, b, c;
    if (unk_0c == 0) {
        a = func_0209c38c(0x136, 4) + 2;
    } else {
        a = func_0209c38c(0x12c, 4) + 2;
    }
    if (unk_0c == 0) {
        b = func_0209c38c(0x136, 5) - 6;
    } else {
        b = func_0209c38c(0x12c, 5) + 6;
    }
    if (unk_0c == 0) {
        c = func_0209c38c(0x136, 6) + 2;
    } else {
        c = func_0209c38c(0x12c, 6) - 2;
    }
    if (unk_a4 > a) {
        unk_4c += b;
    } else {
        unk_4c += c;
    }
    unk_a4--;
    if (unk_a4 <= 0) {
        unk_4c = 0;
        func_020393b4();
    }
}

void Unk_020d9194::func_020393b4() {
    s32 t;
    unk_a0 = 2;
    unk_b0 = 1;
    if (unk_0c == 0) {
        t = func_0209c38c(0x137, 2) + 0x258;
    } else {
        t = func_0209c38c(0x12d, 2) + 0x258;
    }
    unk_a4 = t;
}

void Unk_020d9194::func_0203934c() {
    s32 t;
    if (unk_0c == 0) {
        t = func_0209c38c(0x137, 3) + 6;
    } else {
        t = func_0209c38c(0x12d, 3) + 6;
    }
    func_020e761c(&unk_48, unk_44, t);
    unk_a4--;
    if (unk_a4 <= 0) {
        unk_ac = 0;
    }
    if (unk_ac == 0) {
        func_0203930c();
    }
}

void Unk_020d9194::func_0203930c() {
    s32 t;
    unk_a0 = 3;
    unk_b0 = 1;
    if (unk_0c == 0) {
        t = func_0209c38c(0x138, 2) + 2;
    } else {
        t = func_0209c38c(0x12e, 2) + 2;
    }
    unk_a4 = t;
}

void Unk_020d9194::func_02039290() {
    s32 t;
    if (unk_0c == 0) {
        t = func_0209c38c(0x138, 3) + 0xb;
    } else {
        t = func_0209c38c(0x12e, 3) - 0xb;
    }
    unk_4c += t;
    unk_a4--;
    if (unk_a4 <= 0) {
        func_020390c8();
        func_0203900c();
        func_02039534();
        if (unk_0c == 0) {
            t = func_0209c38c(0x138, 4);
        } else {
            t = func_0209c38c(0x12e, 4) + 0xa;
        }
        unk_a8 = t;
    }
}

void Unk_020d9194::func_02039230() {
    u8 *t = data_020d467c + unk_18 * 8;
    if (unk_0c != 0) {
        _ZN12Unk_0208927013func_02089268EP16Unk_02089270_Tbl(&unk_1c, data_020d467c + unk_14 * 8);
        _ZN12Unk_0208927013func_02089264Ei(&unk_1c, 1);
        _ZN12Unk_0208927013func_02089260Ei(&unk_1c, 0);
    }
    _ZN12Unk_0208927013func_02089268EP16Unk_02089270_Tbl(&unk_30, t);
    _ZN12Unk_0208927013func_02089264Ei(&unk_30, 1);
    _ZN12Unk_0208927013func_02089260Ei(&unk_30, 0);
}

void Unk_020d9194::func_02039194() {
    u32 w, n, w2, n2;
    s32 pad, hi, lo;
    if (unk_98 != NULL) {
        w = unk_98->func_0c();
        n = (w + 7) >> 3;
        pad = n * 8 - w;
        hi = _ZN12Unk_0208927013func_02089240Ev(&unk_1c)[1] - 1;
        lo = n - 1;
        if (lo < 0) {
            hi = 0;
        } else if (lo <= hi) {
            hi = lo;
        }
        _ZN12Unk_0208927013func_02089258Eii(&unk_1c, hi, 0);
        unk_98->unk_30 = pad;
    }
    w2 = unk_9c->func_0c();
    n2 = (w2 + 7) >> 3;
    hi = _ZN12Unk_0208927013func_02089240Ev(&unk_30)[1] - 1;
    lo = n2 - 1;
    if (lo < 0) {
        hi = 0;
    } else if (lo <= hi) {
        hi = lo;
    }
    _ZN12Unk_0208927013func_02089258Eii(&unk_30, hi, 0);
    if (unk_0c == 0 && unk_9c != NULL) {
        unk_9c->unk_30 = (n2 * 8 - w2) >> 1;
    }
}

void Unk_020d9194::func_020390e4() {
    if (unk_0c != 0 && unk_98 == NULL) {
        unk_98 = func_020a8054((*(volatile s32 *)&unk_0c << 3) + 0x1c0, 8, 2);
        if (unk_98 != NULL) {
            unk_98->unk_2c = 4;
            Unk_02050288 *t = unk_98;
            t->unk_10 = (u32)((StrBuf *)&unk_88)->data();
            if (data_021c5384 == 0) {
                unk_98->unk_50 = 3;
            } else {
                unk_98->unk_50 = 2;
            }
            unk_98->unk_58 = 1;
            unk_98->unk_55 = 1;
            unk_98->unk_39 = 0xe;
            unk_98->unk_38 = 0xd;
            unk_98->func_02050c90();
        }
    }
}

void Unk_020d9194::func_020390c8() {
    if (unk_98 != NULL) {
        func_020a7fd8(unk_98);
        unk_98 = NULL;
    }
}

void Unk_020d9194::func_02039028() {
    if (unk_9c == NULL) {
        unk_9c = func_020a8054((unk_0c << 6) + 0xc0, 0x14, 2);
        if (unk_9c != NULL) {
            unk_9c->unk_2c = 4;
            Unk_02050288 *t = unk_9c;
            t->unk_10 = (u32)((Unk_020e2a78 *)&unk_54)->vfunc_0c();
            if (data_021c5384 == 0) {
                unk_9c->unk_50 = 3;
            } else {
                unk_9c->unk_50 = 2;
            }
            unk_9c->unk_58 = 1;
            unk_9c->unk_55 = 1;
            unk_9c->unk_39 = 0xf;
            unk_9c->unk_38 = 0xd;
            unk_9c->func_02050c90();
        }
    }
}

void Unk_020d9194::func_0203900c() {
    if (unk_9c != NULL) {
        func_020a7fd8(unk_9c);
        unk_9c = NULL;
    }
}

extern "C" void func_02038fe8(s32 idx, StrBuf *a, Unk_020e2a78 *b) { data_021c3008->func_02038dfc(idx, a, b); }

extern "C" void func_02038fd4(s32 idx) { data_021c3008->func_02038d68(idx); }

extern "C" void func_02038fb0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        data_021c3008->func_02038d68(i);
    }
}

extern "C" BOOL func_02038f60(void) {
    BOOL r = FALSE;
    s32 i = 0;
    for (; i < 4; i++) {
        Unk_020d9194 *p = &data_021c3008->unk_04[i];
        if ((p->unk_0c != 0 && p->unk_a0 != 0) || Unk_02038f10_Pos(p->unk_a8)) {
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" BOOL func_02038f10(void) {
    BOOL r = FALSE;
    s32 i = 0;
    for (; i < 4; i++) {
        Unk_020d9194 *p = &data_021c3008->unk_04[i];
        if ((p->unk_0c == 0 && p->unk_a0 != 0) || Unk_02038f10_Pos(p->unk_a8)) {
            r = TRUE;
            break;
        }
    }
    return r;
}

extern "C" void func_02038f00(void) { data_021c3008->func_02038a58(); }

extern "C" void func_02038ef0(void) { data_021c3008->func_02038a1c(); }

Unk_020d9114::Unk_020d9114() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_2d4[i] = NULL;
        unk_2e4[i] = NULL;
    }
}

Unk_020d9114::~Unk_020d9114() {}

void Unk_020d9114::func_02038dfc(s32 idx, StrBuf *a, Unk_020e2a78 *b) {
    if (idx <= 4) {
        Unk_020d9194 *p = &unk_04[func_02038ddc(idx)];
        if (func_02038d28(p)) {
            p->func_0203960c(a, b, func_02038dd0(idx));
            if (p->unk_0c == 0) {
                func_020389a0(idx, p);
            }
        }
    }
}

s32 Unk_020d9114::func_02038ddc(s32 idx) {
    return (idx - data_020cbb18->unk_64 + 4) % 4;
}

s32 Unk_020d9114::func_02038dd0(s32 idx) {
    if (idx == 4) {
        idx = 0;
    }
    return idx;
}

void Unk_020d9114::func_02038d68(s32 idx) {
    s32 i;
    if (idx <= 4) {
        s32 v = func_02038ddc(idx);
        for (i = 0; i < 4; i++) {
            Unk_020d9194 *p = unk_2d4[i];
            if (p != NULL && v == p->unk_0c) {
                unk_2d4[i] = NULL;
                break;
            }
        }
        for (i = 0; i < 4; i++) {
            Unk_020d9194 *p = unk_2e4[i];
            if (p != NULL && v == p->unk_0c) {
                p->func_020395bc();
                break;
            }
        }
    }
}

BOOL Unk_020d9114::func_02038d28(Unk_020d9194 *p) {
    BOOL ok = FALSE;
    s32 i;
    if (func_02038b74(p)) {
        ok = TRUE;
    } else {
        for (i = 0; i < 4; i++) {
            if (unk_2d4[i] == NULL) {
                unk_2d4[i] = p;
                ok = TRUE;
                break;
            }
        }
    }
    return ok;
}

BOOL Unk_020d9114::func_02038ca8(Unk_020d9194 *p) {
    BOOL result = FALSE;
    s32 z, i;
    if (func_02038b44(p)) {
        p->func_020395bc();
    } else if (!IsPositive(p->unk_a8)) {
        for (i = 3, z = 0; i >= 0; i--) {
            if (unk_2e4[i]) {
                if (unk_2e4[i]->unk_0c) {
                    z += 0x10;
                }
            } else {
                unk_2e4[i] = p;
                if (p->unk_0c == 0) {
                    z = 0;
                }
                p->unk_48 = z;
                p->unk_44 = z;
                p->func_02039630();
                p->func_020395dc();
                result = TRUE;
                break;
            }
        }
    }
    return result;
}

void Unk_020d9114::func_02038c40() {
    s32 i, j, k;
    for (i = 0; i < 4; i++) {
        if (unk_2d4[i] && func_02038ca8(unk_2d4[i])) {
            unk_2d4[i] = NULL;
        }
    }
    for (j = 0; j < 4; j++) {
        if (unk_2d4[j] == NULL) {
            for (k = j + 1; k < 4; k++) {
                if (unk_2d4[k]) {
                    unk_2d4[j] = unk_2d4[k];
                    unk_2d4[k] = NULL;
                    break;
                }
            }
        }
    }
}

void Unk_020d9114::func_02038c10() {
    s32 i, z;
    for (i = 3, z = 0; i >= 0; i--) {
        Unk_020d9194 *p = unk_2e4[i];
        if (p && p->unk_0c) {
            p->unk_44 = z;
            z += 0x10;
        }
    }
}

void Unk_020d9114::func_02038ba4() {
    s32 i, j, k;
    for (i = 0; i < 4; i++) {
        Unk_020d9194 *p = unk_2e4[i];
        if (p && p->unk_a0 == 0 && p->unk_ac == 0) {
            unk_2e4[i] = NULL;
        }
    }
    for (j = 0; j < 4; j++) {
        if (unk_2e4[j] == NULL) {
            for (k = j + 1; k < 4; k++) {
                if (unk_2e4[k]) {
                    unk_2e4[j] = unk_2e4[k];
                    unk_2e4[k] = NULL;
                    break;
                }
            }
        }
    }
}

BOOL Unk_020d9114::func_02038b74(Unk_020d9194 *p) {
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (unk_2d4[i] == p) {
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_020d9114::func_02038b44(Unk_020d9194 *p) {
    BOOL r = FALSE;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (unk_2e4[i] == p) {
            r = TRUE;
            break;
        }
    }
    return r;
}

void Unk_020d9114::func_02038b04() {
    s32 i;
    data_021c3008 = this;
    for (i = 0; i < 4; i++) {
        unk_04[i].func_020395fc(i, data_020c8cd4[i], data_020c8cc4[i]);
    }
}

void Unk_020d9114::func_02038aec() {
    func_02038a1c();
    data_021c3008 = NULL;
}

void Unk_020d9114::func_02038ab4() {
    s32 i;
    func_02038c40();
    func_02038c10();
    for (i = 0; i < 4; i++) {
        unk_04[i].vfunc_0c();
    }
    func_02038ba4();
}

void Unk_020d9114::func_02038a80() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        Unk_020d9194 *p = unk_2e4[i];
        if (p) {
            p->func_02039630();
            p->vfunc_08();
        }
    }
}

void Unk_020d9114::func_02038a58() {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (unk_2e4[i]) {
            unk_2e4[i]->func_02039584();
        }
    }
}

void Unk_020d9114::func_02038a1c() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_04[i].func_02039544();
        unk_2d4[i] = NULL;
        unk_2e4[i] = NULL;
    }
}

// Unk_020d9104 (vtable 0x020d9104)
Unk_020d9104::Unk_020d9104() {}

Unk_020d9104::~Unk_020d9104() {}

void Unk_020d9104::func_020389e8() {}

void Unk_020d9104::func_020389e4() {}

void Unk_020d9104::func_020389dc() { func_020388fc(); }

extern "C" void func_020389a0(s32 i, Unk_020d9194 *x) {
    if (i < 4) {
        Unk_020cbb18 *g = data_020cbb18;
        if (_ZN12Unk_020cbb1813func_02072e44Ev(g) && _ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
            func_02076280(i + 0x14, (s32)x, 0, 1);
        }
    }
}

extern "C" void func_020388fc() {
    Unk_020cbb18 *g = data_020cbb18;
    s32 n = g->unk_64;
    s32 i;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
        for (i = 0; i < 4; i++) {
            if (i != n && _ZN12Unk_020cbb1813func_02072e88Ei(g, i) && func_0203889c(i)) {
                Unk_020d914c s((data_021c302c + 1), 8);
                Unk_020d9164 b((data_021c302c + 9), 0x20);
                Unk_020d9134 t;
                Unk_020d917c u;
                func_02050ff8(&t, &s);
                u.func_020a7aa0(&b, 0, 0);
                func_02038fe8(i, (StrBuf *)&t, &u);
            }
        }
    }
}

extern "C" u8 func_0203889c(s32 idx) {
    u8 *p = _ZN12Unk_020cbb1813func_02072970Ej(data_020cbb18, idx + 0x14);
    u8 c = *p;
    if (c != 0) {
        s32 r = func_020b50e8();
        if (r == 0x2e || r == 0xc || r == 0xd || r == 0xe || r == 0x2f) {
            c = 0;
        } else {
            func_02116048(p, data_021c302c, 0x29);
        }
        func_02116048((void *)&data_020c8ce4, p, 1);
    }
    return c;
}

extern "C" void func_02038828(u8 *a, void *b, Unk_020d9194 *c) {
    Unk_020d9164 buf((data_021c302c + 9), 0x20);
    Unk_020d914c s((data_021c302c + 1), 8);
    func_02050fd0(&buf);
    func_02050fd0(&s);
    buf.func_020a77f8((Unk_020e2a78 *)((u8 *)c + 0x54));
    func_02050ee0(&s, (u8 *)c + 0x88);
    data_021c302c[0] = 1;
    func_02116048(data_021c302c, a, func_020766e0(b));
}

extern "C" void func_020387b4() {
    void *p = func_0209750c();
    if (data_021c3000 <= 0 && p != NULL) {
        Unk_020e1c64 t;
        Unk_020d917c buf;
        u8 code;
        _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(_ZN12Unk_0209865c13func_0209888cEv(p), &t);
        code = 0xef;
        func_020b3558(&buf, &code, 0);
        func_02038fe8(data_020cbb18->unk_64, (StrBuf *)&t, &buf);
        func_0200402c(0x32);
        data_021c3000 = 0x1e;
    }
}

// Unk_020d9124 (vtable 0x020d9124)
Unk_020d9124::Unk_020d9124() {}

Unk_020d9124::~Unk_020d9124() {}

void Unk_020d9124::func_02038780() {}

void Unk_020d9124::func_0203877c() {}

void Unk_020d9124::func_02038764() {
    if (data_021c3000 > 0) {
        data_021c3000--;
    }
    func_020385ec(this);
}

extern "C" void func_020385ec(void *self) {
    BOOL a, ready, modeOk, any;
    Unk_020cbb18 *g;
    BOOL b, c, d, e;
    BOOL idle;
    u32 keys;
    s32 mode = func_02095134(4);
    modeOk = TRUE;
    if (mode != 0x28 && mode != 0x2b && mode != 8 && mode != 9) {
        modeOk = FALSE;
    }
    keys = data_021f47d8[1];
    if (keys & 4) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    if (keys & 0x400) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (keys & 0x800) {
        c = TRUE;
    } else {
        c = FALSE;
    }
    if (keys & 1) {
        d = TRUE;
    } else {
        d = FALSE;
    }
    if (keys & 2) {
        e = TRUE;
    } else {
        e = FALSE;
    }
    any = TRUE;
    if (!(keys & 8) && !a && !b && !c && !d && !e) {
        any = FALSE;
    }
    g = data_020cbb18;
    ready = _ZN12Unk_020cbb1813func_02072e44Ev(g);
    if (func_0203e2f4()) {
        idle = FALSE;
    } else {
        idle = TRUE;
    }
    if (data_021c3000 <= 0 && modeOk && any && ready && idle) {
        Unk_020d917c buf;
        s32 code;
        BOOL skip = FALSE;
        if (a) {
            code = 0xf0;
        } else if (b) {
            code = 0xf1;
        } else if (c) {
            code = 0xf2;
        } else if (d) {
            code = 0xf3;
        } else if (e) {
            code = 0xf4;
        } else {
            code = 0xef;
            if (g->unk_64) {
                skip = TRUE;
            }
        }
        if (!skip) {
            u8 ch = code;
            func_020b3558(&buf, &ch, 0);
            Unk_020e1c64 t;
            _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c()), &t);
            func_02038fe8(g->unk_64, (StrBuf *)&t, &buf);
            func_0200402c(0x32);
            data_021c3000 = 0x1e;
        }
    }
}

extern "C" Unk_020d91b0 *func_020385d0() { return new Unk_020d91b0(); }

Unk_020d91b0::Unk_020d91b0() {}

Unk_020d91b0::~Unk_020d91b0() {}

BOOL Unk_020d91b0::vfunc_00() {
    unk_50.func_02038780();
    unk_54.func_02038b04();
    unk_348.func_020389e8();
    return TRUE;
}

BOOL Unk_020d91b0::vfunc_18() {
    unk_50.func_02038764();
    if (func_02011880()) {
        unk_54.func_02038ab4();
    }
    unk_348.func_020389dc();
    return TRUE;
}

BOOL Unk_020d91b0::vfunc_24() {
    if (func_02011880()) {
        unk_54.func_02038a80();
    }
    return TRUE;
}

// Main object
BOOL Unk_020d91b0::vfunc_0c() {
    unk_348.func_020389e4();
    unk_54.func_02038aec();
    unk_50.func_0203877c();
    return TRUE;
}

