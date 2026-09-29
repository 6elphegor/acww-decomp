#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224cb98;
class Unk_ov004_0224ce1c;
class Unk_ov004_0224cd8c;
class Unk_ov004_0224cb08;

typedef BOOL (Unk_ov004_0224cb98::*Unk_ov004_0224cb98_Fn)();

// Owner of the C object (only its flag at +0x70a is used here)
struct Unk_ov004_0221b6d4_Owner {
    u8 pad_00[0x70a];
    u8 unk_70a;
};

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_0221b6d4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

struct Unk_ov004_0221afc4_Msg {
    u8 pad_00[8];
    s32 unk_08;
};

struct Unk_ov004_0221b1e8_Map {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
};

struct Unk_ov004_0221b0f0_Vec {
    s32 x, y, z;
    Unk_ov004_0221b0f0_Vec() {}
    ~Unk_ov004_0221b0f0_Vec() {}
};

struct Unk_ov004_0221b51c_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov004_0208403c {
    Unk_ov004_0208403c();
    u32 pad[0x40 / 4];
};

extern "C" {
extern Unk_ov004_0224cb98 *data_ov004_0225093c;
extern Unk_ov004_0224cb98_Fn data_ov004_0224ca68;
extern Unk_ov004_0221b1e8_Map *data_021c47c4;
extern u8 data_021dfd8c[];
extern u8 data_021f4880[];
extern s32 data_020c6d1c;
extern Unk_ov004_0221b51c_Global *data_020cbb18;
extern u8 data_ov004_022400a4[];
extern u8 data_ov004_0224009c[];
extern u8 data_ov004_022400c0[];
extern u8 data_ov004_022400c4[];
extern u32 data_ov004_0224ccf8[];

s32 func_0206ec6c();
s32 func_0206ed18();
s32 func_0206ed38();
s32 func_02099064();
s32 func_02063b8c(s32);
void func_02067a84(void *, void *, s32);
void func_02014ce4(void *, void *, s32, s32, s32);
void *func_0207a4b8(void *);
void *func_0209750c();
void *func_0209868c(...);
void *func_0209888c(...);
void func_02099678(void *, void *);
s32 func_02099690(void *);
s32 func_0202d388(void *, void *, s32);
void func_02015ab0(void *, void *);
void *func_0201bc4c(void *, s32);
s32 func_02014220(void *);
void *func_0207f55c(void *, void *);
void func_02080ecc(void *, s32, s32, s32);
s32 func_02037558(void *, s32, s32, s32);
s32 func_0204b288();
void func_0203002c(s32, s32);
void func_0201c574(void *, void *);
s32 func_0202d928();
s32 func_0202d948(void *);
s32 func_0202dab0(void *);
void func_020135c4(void *);
s32 func_0201b138(void *);
void func_0201bc28(void *, void *);
s32 func_0201ad30(void *, s32);
s32 func_0201ad34(void *, s32);
void func_0201a8d0(void *, s32, s32, s32, s32);
void func_0201a6c0(void *, s32, s32, s32, void *, s32, s32, s32);
s32 func_0204b2d4(void *);
u32 func_0204b25c(void *);
void func_02087c50(void *, u32);
u32 func_02087c54(void *);
s32 func_0201b9fc(void *, s32, s32, s32);
s32 func_0201ba88(void *);
s32 func_0201b9bc(void *);
s32 func_0201b9e8(void *, s32 *, s32 *);
s32 func_020a62a0();
s32 func_0201b08c(void *, u32, u32);
s32 func_02072e44(void *);
void *func_0209c37c(s32, s32);
s32 func_020a032c();
s32 func_0202e18c(void *, void *, s32);
void func_0202e174(void *, void *);
s32 func_0202e1cc(s32, s32);
s32 func_0209cef4();
void *func_020816f8(s32);
void func_02015a80(void *, void *);
void func_ov004_0221ab40_c(void *, s32);
}

// Menu base
class Unk_020d8938 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84(u32 a);

    u8 pad_04[0x3c - 4];
    Unk_ov004_0221afc4_Msg *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

// Owner base (Unk_020d89c8): vfunc_00..3c in Unk_020d8c7c_Base
class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_68[0x2a0 - 0x68];
    /* 0x2a0 */ u8 unk_2a0[0xc];
    /* 0x2ac */ u8 pad_2ac[0x350 - 0x2ac];
    /* 0x350 */ u8 unk_350[0x60];
    /* 0x3b0 */ u8 unk_3b0[0x68];
    /* 0x418 */ u8 pad_418[0x558 - 0x418];
    /* 0x558 */ u8 unk_558[8];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[0x618 - 0x561];
    /* 0x618 */ u8 unk_618[0x28];
    /* 0x640 */ u8 pad_640[0x680 - 0x640];
    /* 0x680 */ u8 unk_680[0x1a4];
    /* 0x824 */ u8 pad_824[0x82c - 0x824];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[8];
    /* 0x838 */ u8 unk_838[0x5b];
    /* 0x893 */ u8 unk_893;
};

// Menu state class (vtable 0x0224cb08)
class Unk_ov004_0224cb08 : public Unk_020d8938 {
public:
    Unk_ov004_0224cb08() {}
    virtual void vfunc_80();
    virtual void vfunc_84(u32 a);

    void func_ov004_0221b07c(Unk_ov004_0224cb98 *owner);
    u8 func_ov004_0221b0e4();

    /* 0x1a0 */ u8 unk_1a0;
    /* 0x1a1 */ u8 pad_1a1[3];
    /* 0x1a4 */ Unk_ov004_0224cb98 *unk_1a4;
};

// Owner (vtable 0x0224cb98)
class Unk_ov004_0224cb98 : public Unk_020d89c8 {
public:
    virtual ~Unk_ov004_0224cb98();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual BOOL vfunc_68();

    void func_ov004_0221aa7c();
    void func_ov004_0221ab40(s32 s);
    void func_ov004_0221b1b0();
    void func_ov004_0221b1e8();
    BOOL func_ov004_0221b2bc();

    /* 0x894 */ u32 unk_894;
    /* 0x898 */ u32 unk_898;
    /* 0x89c */ Unk_ov004_0224cb08 unk_89c;
    /* 0xa44 */ Unk_ov004_0224cb98_Fn unk_a44;
    /* 0xa4c */ Unk_ov004_0208403c unk_a4c;
    /* 0xa8c */ u8 pad_a8c[0];
};

// C: message-selection object (vtable 0x0224cd8c)
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);
    u8 pad_04[0xac - 4];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov004_0224cd8c : public Unk_020d8b38 {
public:
    virtual ~Unk_ov004_0224cd8c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);

    void func_ov004_0221b888(Unk_ov004_0221b6d4_Owner *o);

    /* 0xac */ Unk_ov004_0221b6d4_Owner *unk_ac;
};

// D base
class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    Unk_020d8bc8();
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);

    /* 0x004 */ u8 pad_04[0x55c];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 pad_561[0x618 - 0x561];
    /* 0x618 */ u8 unk_618[0x28];
    /* 0x640 */ u8 pad_640[0x658 - 0x640];
};

// Message-menu owner (vtable 0x0224ce1c)
class Unk_ov004_0224ce1c : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov004_0224ce1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);

    void func_ov004_0221bd50(s32 s);

    Unk_ov004_0224cd8c unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov004_0224cb08::vfunc_80() {
    u8 buf[4];
    Unk_ov004_0224cb98 *o = unk_1a4;
    if (o->unk_898 == 6) {
        if (func_0206ec6c()) {
            if (func_0206ed18() == 0) {
                unk_3c->unk_08 = 1;
                buf[0] = func_02063b8c(3) + 13;
                func_02067a84(unk_3c, buf, 0);
                unk_1a4->func_ov004_0221ab40(4);
            } else {
                func_0206ed38();
                func_02099064();
                buf[1] = func_02063b8c(3) + 16;
                func_02067a84(unk_3c, &buf[1], 0);
                *(u16 *)(buf + 2) = 0x155e;
                func_02014ce4(this, buf + 2, 0, 6, 0);
                unk_1a4->func_ov004_0221ab40(7);
            }
        }
    }
}

extern "C" void func_ov004_0221b09c();

void Unk_ov004_0224cb08::vfunc_84(u32 a) {
    if (a == 4) {
        func_ov004_0221b09c();
        unk_3c->unk_08 = 1;
    }
}

void Unk_ov004_0224cb08::func_ov004_0221b07c(Unk_ov004_0224cb98 *owner) {
    func_0202d388(this, owner, 0x11);
    unk_1a4 = owner;
}

u8 Unk_ov004_0224cb08::func_ov004_0221b0e4() { return unk_1a0; }

void Unk_ov004_0224cb98::vfunc_4c(u32 idx, u32 v) {
    Unk_ov004_0221b0f0_Vec vec;
    vec.x = unk_5c;
    vec.y = unk_60;
    vec.z = unk_64;
    vec.y += 0x2000;
    switch (idx) {
    case 3:
        unk_560 = v;
        func_ov004_0221ab40(2);
        break;
    case 0:
        unk_560 = v;
        func_02015ab0(&unk_89c, func_0201bc4c(this, 4));
        func_ov004_0221ab40(3);
        break;
    case 8:
        func_ov004_0221b1b0();
        func_ov004_0221ab40(0);
        break;
    case 4:
        func_ov004_0221ab40(0);
        break;
    }
}

BOOL Unk_ov004_0224cb98::vfunc_48() {
    if (func_02014220(unk_618)) {
        return FALSE;
    }
    if (unk_898 > 1) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224cb98::func_ov004_0221b1b0() {
    void *p = func_0209750c();
    if (p) {
        if (unk_82c) {
            void *g = func_0209888c(p);
            void *t = func_0207f55c(unk_82c, g);
            func_02080ecc(t, 0, 0, 0);
        }
    }
}

void Unk_ov004_0224cb98::func_ov004_0221b1e8() {
    Unk_ov004_0221b1e8_Map *m = data_021c47c4;
    void *p;
    if (m->unk_04 > (u8 *)0 && m->unk_08 > (u8 *)0 && (p = m->unk_00) != 0) {
    } else {
        p = 0;
    }
    s32 y = 0;
    s32 z = 0;
    for (; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            if (func_02037558(p, x, y, z)) {
                if (func_0204b288()) {
                    func_0203002c(x, y);
                }
            }
        }
    }
}

BOOL Unk_ov004_0224cb98::vfunc_68() {
    func_ov004_0221aa7c();
    func_0201c574(&unk_838, this);
    return TRUE;
}

BOOL Unk_ov004_0224cb98::vfunc_10() {
    if (func_0202d928() == 0) {
        return FALSE;
    }
    data_ov004_0225093c = 0;
    return TRUE;
}

BOOL Unk_ov004_0224cb98::vfunc_24() {
    if (unk_a44) {
        return (this->*unk_a44)();
    }
    return TRUE;
}

BOOL Unk_ov004_0224cb98::func_ov004_0221b2bc() {
    if (func_0201b138(this)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224cb98::vfunc_00() {
    if (func_0202d948(this) == 0) {
        return FALSE;
    }
    unk_a44 = data_ov004_0224ca68;
    func_ov004_0221b1e8();
    func_020135c4(unk_558);
    return TRUE;
}

BOOL Unk_ov004_0224cb98::vfunc_04() {
    if (func_0202dab0(this) == 0) {
        return FALSE;
    }
    data_ov004_0225093c = this;
    func_0201bc28(this, &unk_89c);
    unk_89c.func_ov004_0221b07c(this);
    u8 *p = (u8 *)func_0207a4b8(data_021dfd8c);
    *((u8 *)this + 0xa3c) = p[0x8e];
    if (unk_89c.func_ov004_0221b0e4() > 1) {
        func_0201ad30(unk_2a0, 0xea);
        func_0201ad34(unk_2a0, 0xe9);
        func_0201a8d0(unk_350, 1, 0xa4, 0x10, 0x10);
        func_0201a6c0(unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        unk_893 = 1;
    } else {
        func_0201a8d0(unk_350, 1, 0xcd, 0x14, 0x14);
        unk_893 = 0;
    }
    func_ov004_0221ab40(0);
    return TRUE;
}

static inline BOOL Unk_ov004_0221b3f8_Chk(u16 *p) {
    u16 v;
    BOOL r;
    if (func_0204b2d4(p)) {
        v = 0x155e;
        if (func_0204b25c(p) == func_0204b25c(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0x155e) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" BOOL func_ov004_0221b3f8(u16 *p, s32 x) {
    if (x == 0) {
        if (Unk_ov004_0221b3f8_Chk(p)) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" Unk_ov004_0224cb98 *func_ov004_0221b450() {
    return new Unk_ov004_0224cb98;
}

Unk_ov004_0224ce1c::~Unk_ov004_0224ce1c() {}

extern "C" void func_ov004_0221b4ec(void *unused, u32 a) {
    func_02087c50(func_0209868c(func_0209750c()), a);
}

extern "C" u32 func_ov004_0221b504(void *unused) {
    return func_02087c54(func_0209868c(func_0209750c()));
}

void Unk_ov004_0224ce1c::vfunc_4c(u32 idx, u32 v) {
    switch (idx) {
    case 3:
        unk_560 = v;
        if (v != 4) {
            func_0201b9fc(this, 1, data_020cbb18->unk_64, v);
            func_ov004_0221bd50(6);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                func_ov004_0221bd50(6);
            }
        }
        break;
    case 0:
        unk_560 = v;
        if (v != 4 && v != data_020cbb18->unk_64) {
            func_0201b9fc(this, 1, v, v);
            func_ov004_0221bd50(5);
        } else {
            if (func_0201ba88(this) != 0) {
                s32 g = data_020cbb18->unk_64;
                func_0201b9fc(this, 1, g, g);
                unk_658.vfunc_08();
                func_02015ab0(&unk_658, func_0201bc4c(this, 4));
                func_ov004_0221bd50(1);
            }
        }
        break;
    case 8:
        if (v == 4) {
            if (func_020a62a0() != 0) {
                func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                func_ov004_0221bd50(3);
            } else {
                func_0201b9fc(this, 1, 4, data_020cbb18->unk_64);
                func_ov004_0221bd50(4);
            }
        }
        break;
    case 4:
        if (func_0201b9bc(this) != 0) {
            if (func_0201ba88(this) != 0) {
                s32 a = 4;
                s32 b = 4;
                if (func_0201b9e8(this, &a, &b) != 0) {
                    if (v == 4) {
                        goto chk;
                    }
                    if (v == b) {
                        goto body;
                    }
                chk:
                    if (v != 4) {
                        break;
                    }
                body:
                    func_0201b9fc(this, 1, data_020cbb18->unk_64, 4);
                    func_ov004_0221bd50(0);
                }
            }
        }
        break;
    }
    func_0201b08c(this, idx, v);
}

BOOL Unk_ov004_0224ce1c::vfunc_48() {
    if (func_02014220(unk_618) != 0 || func_0201b9bc(this) != 0) {
        return FALSE;
    }
    return TRUE;
}

Unk_ov004_0224cd8c::~Unk_ov004_0224cd8c() {}

void Unk_ov004_0224cd8c::vfunc_14() {}
void Unk_ov004_0224cd8c::vfunc_18() {}

void Unk_ov004_0224cd8c::vfunc_78(Unk_ov004_0221b6d4_Out *out) {
    u32 idx = func_ov004_0221b504(unk_ac);
    void *g = data_020cbb18;
    if (func_02072e44(g) != 0 || *(s16 *)func_0209c37c(0, 0x4a) != 0) {
        idx = 0;
        out->unk_04 = 0x57;
    } else if (func_020a032c() != 0) {
        idx = 2;
        out->unk_04 = 5;
    } else {
        Unk_ov004_0221b6d4_Bits bits;
        if (func_0202e18c(unk_ac, &bits, 2) != 0) {
            idx = 1;
            unk_ac->unk_70a = idx;
            out->unk_04 = (data_ov004_022400a4 + bits.b * 7)[bits.c];
            func_0202e174(unk_ac, &bits);
        } else if (func_0202e1cc(0x10, 1) == 0) {
            if (idx >= 0xc) {
                out->unk_04 = data_ov004_0224009c[func_0209cef4()];
            } else {
                out->unk_04 = data_ov004_022400c0[idx * 8];
            }
            idx = 0;
        } else {
            if (idx > 0xc) {
                out->unk_04 = func_02063b8c(5) + 0x28;
            } else {
                s32 t = idx - 1;
                if (t < 0) {
                    t = 0;
                } else if (t > 0xb) {
                    t = 0xb;
                }
                u32 o = t << 3;
                s32 r = func_02063b8c(*(s32 *)(data_ov004_022400c4 + o)) + 1;
                out->unk_04 = r + data_ov004_022400c0[o];
            }
            idx = 0;
        }
    }
    out->unk_00 = data_ov004_0224ccf8[idx];
    if (func_02072e44(g) == 0 && *(s16 *)func_0209c37c(0, 0x4a) == 0 && idx == 0) {
        switch (out->unk_04) {
        case 2:
        case 5:
        case 8:
        case 9:
        case 12:
        case 15:
        case 17:
        case 18:
        case 19:
        case 21:
        case 23:
        case 24:
        case 27:
        case 28:
        case 30:
        case 40:
        case 43: {
            void *r = func_020816f8(4);
            if (r) {
                func_02015a80(this, r);
            }
            break;
        }
        }
    }
}

void Unk_ov004_0224cd8c::func_ov004_0221b888(Unk_ov004_0221b6d4_Owner *o) {
    vfunc_08();
    unk_ac = o;
}

// ---------------------------------------------------------------------------------------------------------------------
// Callers first, then callees that must not be inlined.
extern "C" void func_ov004_0221b09c() {
    void *p = func_0207a4b8(data_021dfd8c);
    func_02099678(p, func_0209888c(func_0209750c()));
}

extern "C" BOOL func_ov004_0221b0c0() {
    if (func_02099690(func_0207a4b8(data_021dfd8c))) {
        return TRUE;
    }
    return FALSE;
}
