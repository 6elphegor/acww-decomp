#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (declarations only)

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
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
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// ---------------------------------------------------------------------------------------------------------------------
// Classes of this file

// Fixed-size buffer, 0x100 bytes at +0x12 (vtable 0x020d906c)
class Unk_020d906c : public Unk_020e2a78 {
public:
    Unk_020d906c();
    virtual ~Unk_020d906c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

// Sibling buffer (vtable 0x020d909c), constructor only in this range
class Unk_020d909c : public Unk_020e2a78 {
public:
    Unk_020d909c();
    virtual ~Unk_020d909c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

// Buffer wrapping external memory (vtable 0x020d9164), 0x18 bytes
class Unk_020d9164 : public Unk_020e2a60 {
public:
    Unk_020d9164(u8 *data, u32 size);
    virtual ~Unk_020d9164();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 *unk_14;
    /* 0x18 */ u32 unk_18;
};

// 0x34-byte buffer (vtable 0x020d917c)
class Unk_020d917c : public Unk_020e2a78 {
public:
    Unk_020d917c();
    virtual ~Unk_020d917c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x20];
};

// Text view over external memory (vtable 0x020d914c), 0xc bytes
class Unk_020d914c {
public:
    Unk_020d914c(u8 *data, u32 size);
    virtual ~Unk_020d914c();

    /* 0x04 */ u32 unk_04[2];
};

// Text (vtable 0x020d9134), 0x10 bytes
class Unk_020d9134 {
public:
    Unk_020d9134();
    virtual ~Unk_020d9134();

    /* 0x04 */ u32 unk_04[3];
};

class Unk_02094030 {
public:
    Unk_02094030();
    ~Unk_02094030();
    u32 pad[0x1c / 4];
};

// 0xb4-byte player slot (its constructor func_02039544 is in another file)
class Unk_02039544 {
public:
    virtual ~Unk_02039544();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_02039544();
    void func_02039584();
    BOOL func_020395bc();
    BOOL func_020395dc();
    void func_020395fc(s32 index, u32 a, u32 b);
    void func_02039630();

    /* 0x04 */ u8 unk_04[8];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x34];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ u8 unk_4c[0x54];
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0[4];
};

struct Unk_020cbb18 {
    /* 0x00 */ u8 unk_00[0x64];
    /* 0x64 */ s32 unk_64;
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
    BOOL func_02038b44(Unk_02039544 *p);
    BOOL func_02038b74(Unk_02039544 *p);
    void func_02038ba4();
    void func_02038c10();
    void func_02038c40();
    BOOL func_02038ca8(Unk_02039544 *p);

    /* 0x004 */ Unk_02039544 unk_04[4];
    /* 0x2d4 */ Unk_02039544 *unk_2d4[4];
    /* 0x2e4 */ Unk_02039544 *unk_2e4[4];
};

class Unk_020d9124 {
public:
    Unk_020d9124();
    virtual ~Unk_020d9124();
    void func_02038764();
    void func_0203877c();
    void func_02038780();
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

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern s32 data_021c3000;
extern Unk_020d9114 *data_021c3008;
extern u16 data_021f47d8[];
extern u8 data_021c302c[];
extern u8 data_021c302d[];
extern u8 data_021c3035[];
extern u8 data_020c8ce4[];
extern u32 data_020c8cd4[];
extern u32 data_020c8cc4[];

s32 func_02095134(s32 a);
BOOL func_02072e44(Unk_020cbb18 *p);
BOOL func_02072e88(Unk_020cbb18 *p, s32 i);
u32 func_02072374(Unk_020cbb18 *p);
void func_02072380(Unk_020cbb18 *p, u32 v);
u8 *func_02072970(Unk_020cbb18 *p, s32 i);
BOOL func_0203e2f4();
BOOL func_02011880();
s32 func_020b50e8();
void func_020b3558(Unk_020d917c *buf, u8 *c, s32 z);
void func_02038fe8(s32 idx, Unk_02094030 *t, Unk_020d917c *buf);
void func_0200402c(u32 a);
void *func_0209750c();
void *func_0209888c(void *p);
void func_020940d0(void *p, Unk_02094030 *t);
void func_02050fd0(void *p);
void func_02050ee0(Unk_020d914c *p, void *q);
void func_02050ff8(Unk_020d9134 *a, Unk_020d914c *b);
void func_02076280(s32 a, s32 b, s32 c, s32 d);
u32 func_020766e0(void *p);
void func_02116048(void *dst, void *src, u32 n);
void func_020385ec(void *self);
void func_020388fc();
}

// ---------------------------------------------------------------------------------------------------------------------

Unk_020d909c::Unk_020d909c() { func_020a7c3c(); }

u32 Unk_020d906c::vfunc_08() { return 0x100; }
u8 *Unk_020d906c::vfunc_0c() { return (u8 *)this + 0x12; }
Unk_020d906c::~Unk_020d906c() {}
Unk_020d906c::Unk_020d906c() { func_020a7c3c(); }

void Unk_020d9114::func_02038a1c() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_04[i].func_02039544();
        unk_2d4[i] = NULL;
        unk_2e4[i] = NULL;
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

void Unk_020d9114::func_02038a80() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        Unk_02039544 *p = unk_2e4[i];
        if (p) {
            p->func_02039630();
            p->vfunc_08();
        }
    }
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

void Unk_020d9114::func_02038aec() {
    func_02038a1c();
    data_021c3008 = NULL;
}

void Unk_020d9114::func_02038b04() {
    s32 i;
    data_021c3008 = this;
    for (i = 0; i < 4; i++) {
        unk_04[i].func_020395fc(i, data_020c8cd4[i], data_020c8cc4[i]);
    }
}

BOOL Unk_020d9114::func_02038b44(Unk_02039544 *p) {
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

BOOL Unk_020d9114::func_02038b74(Unk_02039544 *p) {
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

void Unk_020d9114::func_02038ba4() {
    s32 i, j, k;
    for (i = 0; i < 4; i++) {
        Unk_02039544 *p = unk_2e4[i];
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

void Unk_020d9114::func_02038c10() {
    s32 i, z;
    for (i = 3, z = 0; i >= 0; i--) {
        Unk_02039544 *p = unk_2e4[i];
        if (p && p->unk_0c) {
            p->unk_44 = z;
            z += 0x10;
        }
    }
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

static inline BOOL IsPositive(s32 v) {
    if (v > 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d9114::func_02038ca8(Unk_02039544 *p) {
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

// Unk_020d9104 (vtable 0x020d9104)
Unk_020d9104::Unk_020d9104() {}
Unk_020d9104::~Unk_020d9104() {}
void Unk_020d9104::func_020389dc() { func_020388fc(); }
void Unk_020d9104::func_020389e4() {}
void Unk_020d9104::func_020389e8() {}

// Unk_020d9124 (vtable 0x020d9124)
Unk_020d9124::Unk_020d9124() {}
Unk_020d9124::~Unk_020d9124() {}
void Unk_020d9124::func_0203877c() {}
void Unk_020d9124::func_02038780() {}

// Main object
BOOL Unk_020d91b0::vfunc_0c() {
    unk_348.func_020389e4();
    unk_54.func_02038aec();
    unk_50.func_0203877c();
    return TRUE;
}

BOOL Unk_020d91b0::vfunc_24() {
    if (func_02011880()) {
        unk_54.func_02038a80();
    }
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

BOOL Unk_020d91b0::vfunc_00() {
    unk_50.func_02038780();
    unk_54.func_02038b04();
    unk_348.func_020389e8();
    return TRUE;
}

Unk_020d91b0::~Unk_020d91b0() {}

Unk_020d91b0::Unk_020d91b0() {}

extern "C" Unk_020d91b0 *func_020385d0() { return new Unk_020d91b0(); }


extern "C" void func_02038450() {
    Unk_020cbb18 *g = data_020cbb18;
    u32 v = func_02072374(g) | 0x20;
    func_02072380(g, v);
}

void Unk_020d9124::func_02038764() {
    if (data_021c3000 > 0) {
        data_021c3000--;
    }
    func_020385ec(this);
}

static inline BOOL IsZero(BOOL v) {
    if (v == 0) {
        return TRUE;
    }
    return FALSE;
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
    ready = func_02072e44(g);
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
            Unk_02094030 t;
            func_020940d0(func_0209888c(func_0209750c()), &t);
            func_02038fe8(g->unk_64, &t, &buf);
            func_0200402c(0x32);
            data_021c3000 = 0x1e;
        }
    }
}

extern "C" void func_020387b4() {
    void *p = func_0209750c();
    if (data_021c3000 <= 0 && p != NULL) {
        Unk_02094030 t;
        Unk_020d917c buf;
        u8 code;
        func_020940d0(func_0209888c(p), &t);
        code = 0xef;
        func_020b3558(&buf, &code, 0);
        func_02038fe8(data_020cbb18->unk_64, &t, &buf);
        func_0200402c(0x32);
        data_021c3000 = 0x1e;
    }
}

extern "C" void func_02038828(u8 *a, void *b, Unk_02039544 *c) {
    Unk_020d9164 buf(data_021c3035, 0x20);
    Unk_020d914c s(data_021c302d, 8);
    func_02050fd0(&buf);
    func_02050fd0(&s);
    buf.func_020a77f8((Unk_020e2a78 *)((u8 *)c + 0x54));
    func_02050ee0(&s, (u8 *)c + 0x88);
    data_021c302c[0] = 1;
    func_02116048(data_021c302c, a, func_020766e0(b));
}

extern "C" u8 func_0203889c(s32 idx) {
    u8 *p = func_02072970(data_020cbb18, idx + 0x14);
    u8 c = *p;
    if (c != 0) {
        s32 r = func_020b50e8();
        if (r == 0x2e || r == 0xc || r == 0xd || r == 0xe || r == 0x2f) {
            c = 0;
        } else {
            func_02116048(p, data_021c302c, 0x29);
        }
        func_02116048(data_020c8ce4, p, 1);
    }
    return c;
}

extern "C" void func_020388fc() {
    Unk_020cbb18 *g = data_020cbb18;
    s32 n = g->unk_64;
    s32 i;
    if (func_02072e44(g)) {
        for (i = 0; i < 4; i++) {
            if (i != n && func_02072e88(g, i) && func_0203889c(i)) {
                Unk_020d914c s(data_021c302d, 8);
                Unk_020d9164 b(data_021c3035, 0x20);
                Unk_020d9134 t;
                Unk_020d917c u;
                func_02050ff8(&t, &s);
                u.func_020a7aa0(&b, 0, 0);
                func_02038fe8(i, (Unk_02094030 *)&t, &u);
            }
        }
    }
}

extern "C" void func_020389a0(s32 i, s32 x) {
    if (i < 4) {
        Unk_020cbb18 *g = data_020cbb18;
        if (func_02072e44(g) && func_02072e88(g, i)) {
            func_02076280(i + 0x14, x, 0, 1);
        }
    }
}
