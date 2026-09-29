#include "Unk_020d8c7c.h"

extern "C" {
extern const char data_020d6f7c[];
extern const char data_020d6f9c[];
extern const char data_020d6fbc[];
extern const char data_020d6fdc[];
extern const char data_020d6ff8[];
extern const char data_020d7018[];
extern const char data_020d7038[];
extern const char data_020d7058[];
extern u8 data_021bddc0[];
extern u8 data_020c6c88[];
extern u32 data_021bdd80[];
extern u32 data_020d6f54[];
}

struct Unk_02011580 {
    u8 unk_00[0x48];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x200];
    s32 unk_250;
    u8 unk_254;
    u8 unk_255;

    Unk_02011580();
    ~Unk_02011580();
    BOOL func_02011580();
    BOOL func_020115e0(s32 mode);
    const char *func_02011640(s32 mode);
    const char *func_02011690(s32 mode);
    void func_020116e8(u32 v);
    void func_02011718(u32 v);
    void func_02011748(u32 a, u32 b, u32 c);
    void func_02011788(u32 a, u32 b);
    void func_02011800(u32 a);
};

extern Unk_02011580 data_021bdb80;

extern "C" {
void func_02119d78(void *p);
void *func_02011568(void *p);
void *func_02011550(void *p);
void func_0201106c(void *p);
void func_02011074(void *p);
s32 func_020110bc(void *p, u32 v);
void func_02011158(void *p);
void func_02011160(void *p);
s32 func_020111b0(void *p, u32 v);
void func_02011258(void *p, u32 v);
s32 func_020112dc(void *p, u32 v);
void func_020114f0(void *p, u32 v);
void func_020114b0(void *p, u32 v);
s32 func_02011410(void *p, u32 v);
void func_0201137c(void *p, u32 v);
void func_02011408(void *p);
s32 func_0208f010(void);
s32 func_020b50e8(void);
s32 func_02038f00(void);
void *func_020e8594(u32 size);
void *func_02119a28(void *self, const char *path);
s32 func_021198b4(void *self, void *buf, u32 size);
s32 func_021199e0(void *self);
void func_02115fb4(void *dst, u32 v, u32 n);
s32 func_0201188c(void);
void func_020116e0(void *p);
}

BOOL Unk_02011580::func_02011580() {
    void *r6 = func_02119a28(this, func_02011640(4));
    BOOL ok;
    unk_4c = (s32)func_020e8594(0x3000);
    if (unk_4c != 0) {
        ok = func_021198b4(this, (void *)unk_4c, 0x3000) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = func_021199e0(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_4c != 0) return TRUE;
    return FALSE;
}

BOOL Unk_02011580::func_020115e0(s32 mode) {
    void *r6 = func_02119a28(this, func_02011690(mode));
    BOOL ok;
    unk_48 = (s32)func_020e8594(0x180);
    if (unk_48 != 0) {
        ok = func_021198b4(this, (void *)unk_48, 0x180) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = func_021199e0(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_48 != 0) return TRUE;
    return FALSE;
}

const char *Unk_02011580::func_02011640(s32 mode) {
    if (mode >= 4) mode = func_0201188c();
    const char *b = data_020d6f7c;
    const char *a = data_020d6f9c;
    const char *c = data_020d6fbc;
    const char *r = data_020d6fdc;
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}

const char *Unk_02011580::func_02011690(s32 mode) {
    if (mode >= 4) mode = func_0201188c();
    const char *b = data_020d6ff8;
    const char *a = data_020d7018;
    const char *c = data_020d7038;
    const char *r = data_020d7058;
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}

extern "C" void func_020116e0(void *p) { func_02119d78(p); }

void Unk_02011580::func_020116e8(u32 v) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (func_020110bc(p, v)) func_02011074(p);
    func_0201106c(this);
}

void Unk_02011580::func_02011718(u32 v) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (func_020111b0(p, v)) func_02011160(p);
    func_02011158(this);
}

void Unk_02011580::func_02011748(u32 a, u32 b, u32 c) {
    s32 r;
    func_020116e0(&data_021bdb80);
    r = func_020112dc(&data_021bdb80, a);
    if (b != 0) {
        unk_250 = c;
    } else if (r != 0) {
        func_02011258(&data_021bdb80, c);
    }
}

void Unk_02011580::func_02011788(u32 a, u32 b) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (p->func_020115e0(a)) func_020114f0(p, b);
    func_02011568(p);
    if (func_02011410(p, a)) func_0201137c(p, b);
    func_02011408(p);
    if (a == 2 || (a == 4 && func_0201188c() == 2)) {
        if (func_0208f010()) func_02011748(1, 0, b);
    }
}

void Unk_02011580::func_02011800(u32 a) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (p->func_020115e0(4)) func_020114f0(p, a);
    func_02011568(p);
    if (p->func_02011580()) func_020114b0(p, a);
    func_02011550(p);
    if (func_0201188c() == 2) {
        if (func_0208f010()) func_02011748(1, 0, a);
    }
}

extern "C" {
void func_02011868(void) { data_021bddc0[0x14] = 0; }
void func_02011874(void) { data_021bddc0[0x14] = 1; }
u8 func_02011880(void) { return data_021bddc0[0x14]; }
s32 func_0201188c(void) { return data_020c6c88[func_020b50e8()]; }
void func_020118a4(void) {
    Unk_02011580 *p = &data_021bdb80;
    if (data_021bdd80[0x50 / 4] != 3) {
        func_02011258(p, p->unk_250);
        p->unk_250 = 3;
    }
}
void func_020118d4(u32 a) { data_021bdb80.func_020116e8(a); }
void func_020118e4(u32 a) { data_021bdb80.func_02011718(a); }
u8 func_020118f4(void) { return data_021bddc0[0x15]; }
void func_02011900(u8 v) { data_021bddc0[0x15] = v; }
void func_0201190c(u32 a, u32 b, u32 c) { data_021bdb80.func_02011748(a, b, c); }
void func_0201192c(u32 a, u32 b) { data_021bdb80.func_02011788(a, b); }
void func_02011940(void) {
    data_021bdb80.func_02011800(2);
    func_02038f00();
}
void func_0201195c(void) {
    data_021bdb80.func_02011800(0);
    func_02038f00();
}
}

Unk_02011580::~Unk_02011580() {
    func_02011568(this);
    func_02011550(this);
}

Unk_02011580::Unk_02011580() {
    unk_48 = 0;
    unk_4c = 0;
    unk_250 = 3;
    unk_254 = 0;
    unk_255 = 0;
    func_02115fb4(&unk_50, 0, 0x200);
}

// ---- Unk_020d77a4 destructors ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(Unk_02053d3c, 0x2a0 - 0xec);
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
MEMBER(Unk_02088d00, 0x514 - 0x4cc);
MEMBER(Unk_020135e4, 0xc);
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);

extern "C" void func_020f43c8(void *p);

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080() {
        *(u32 *)this = (u32)data_020d6f54;
        func_020f43c8(this);
    }
};

struct Unk_0203e7a4 : Unk_020d8c7c_Base {
    u8 unk_04[0xe6];
    Unk_0203e7a4();
    virtual ~Unk_0203e7a4();
};

struct Unk_020d77a4 : Unk_0203e7a4 {
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
    Unk_020d77a4();
    virtual ~Unk_020d77a4();
};

Unk_020d77a4::~Unk_020d77a4() {}

// ---- Unk_02011b60 ----
struct Unk_02081d4c {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02006d14_Prim {
    u8 unk_00[0xec];
};
struct Unk_020e2a30 {
    u8 unk_00[4];
};
struct Unk_02006d14 : Unk_02006d14_Prim, Unk_020e2a30 {
    u8 unk_f0[0x198 - 0xf0];
    u32 unk_198;
};

struct Unk_0205dfa4_Prim {
    u8 unk_00[0x9c];
};
struct Unk_0205dfa4_9c {
    u8 unk_00[0x10];
    u32 unk_10;
};
struct Unk_0205dfa4 : Unk_0205dfa4_Prim, Unk_0205dfa4_9c {};

extern "C" {
Unk_02081d4c *func_02081d4c(void *p);
void func_0205e184(Unk_02081d4c *p, u32 v);
Unk_0205dfa4 *func_0205dfa4(Unk_02081d4c *p);
void func_020553cc(Unk_020e2a30 *dst, void *src, u32 n);
void func_0205e014(Unk_02081d4c *p, void *src);
void func_0205e120(Unk_02081d4c *p);
void func_0208211c(void *p);
void func_0205e1a0(Unk_02081d4c *p, u32 a, u32 b, u32 c);
}

struct Unk_02011b60 {
    u16 unk_00;
    u8 unk_02[2];
    u8 unk_04[8];
    u8 unk_0c[0x30];
    u8 unk_3c;

    void func_02011b60(u32 v);
    Unk_0205dfa4 *func_02011b7c();
    void func_02011b98(u32 v);
    u32 func_02011bb0();
    void func_02011bcc(Unk_02006d14 *p);
    void func_02011c08(Unk_02006d14 *p);
    void func_02011c38();
    void func_02011c44(u32 a, u32 b);
    void func_02011c64(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011c9c(u32 a, u32 b);
    void func_02011cbc(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011cf4(u32 a, u32 b);
    void func_02011d14(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011d4c(u32 a, u32 b);
    void func_02011d6c(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011da4(u32 a, u32 b);
    void func_02011dc4(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011dfc(u32 a, u32 b);
    void func_02011e1c(Unk_02011b60 *p, u32 a, u32 b);
    void func_02011e9c(u32 a, u32 b, u32 c);
};

void Unk_02011b60::func_02011b60(u32 v) {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) func_0205e184(r, v);
}

Unk_0205dfa4 *Unk_02011b60::func_02011b7c() {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) return func_0205dfa4(r);
    return 0;
}

void Unk_02011b60::func_02011b98(u32 v) {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) r->unk_04 = v;
}

u32 Unk_02011b60::func_02011bb0() {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) return r->unk_04;
    return 0;
}

void Unk_02011b60::func_02011bcc(Unk_02006d14 *p) {
    if (unk_3c != 0) {
        Unk_02081d4c *r = func_02081d4c(&unk_04);
        if (p) {
            Unk_020e2a30 &s = *p;
            func_020553cc(&s, unk_0c, 0xe);
        }
        if (r) func_0205e014(r, unk_0c);
    }
}

void Unk_02011b60::func_02011c08(Unk_02006d14 *p) {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) {
        u32 v = p->unk_198;
        Unk_0205dfa4_9c &s = *func_0205dfa4(r);
        s.unk_10 = v;
        func_0205e120(r);
    }
}

void Unk_02011b60::func_02011c38() { func_0208211c(&unk_04); }

inline BOOL Unk_02011c44_InRange(u32 id, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (id >= lo && id <= hi) r = TRUE;
    return r;
}
#define RANGE(id, lo, hi) Unk_02011c44_InRange(id, lo, hi)

void Unk_02011b60::func_02011c44(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011c64(this, a, b);
}
void Unk_02011b60::func_02011c64(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) func_02011e9c(0x12, a, b);
}
void Unk_02011b60::func_02011c9c(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011cbc(this, a, b);
}
void Unk_02011b60::func_02011cbc(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) func_02011e9c(0x11, a, b);
}
void Unk_02011b60::func_02011cf4(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011d14(this, a, b);
}
void Unk_02011b60::func_02011d14(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) func_02011e9c(0x10, a, b);
}
void Unk_02011b60::func_02011d4c(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011d6c(this, a, b);
}
void Unk_02011b60::func_02011d6c(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) func_02011e9c(0xf, a, b);
}
void Unk_02011b60::func_02011da4(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011dc4(this, a, b);
}
void Unk_02011b60::func_02011dc4(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) func_02011e9c(1, a, b);
}
void Unk_02011b60::func_02011dfc(u32 a, u32 b) {
    if (unk_00 != 0xfff1) func_02011e1c(this, a, b);
}
void Unk_02011b60::func_02011e1c(Unk_02011b60 *p, u32 a, u32 b) {
    u16 id = p->unk_00;
    if (RANGE(id, 0x1376, 0x1376) || RANGE(id, 0x1377, 0x1377)) {
        func_02011e9c(0, a, b);
    } else if (RANGE(id, 0x1374, 0x1374) || RANGE(id, 0x1375, 0x1375)) {
        func_02011e9c(0x13, 0, 0);
    } else if (RANGE(id, 0x1380, 0x139f)) {
        func_02011e9c(0x25, 0, 0);
    }
}
void Unk_02011b60::func_02011e9c(u32 a, u32 b, u32 c) {
    Unk_02081d4c *r = func_02081d4c(&unk_04);
    if (r) func_0205e1a0(r, a, b, c);
}
