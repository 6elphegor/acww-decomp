#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020d9670;
class Unk_ov054_0225ba54;

struct Unk_ov054_0225902c_Vec {
    s32 x, y, z;
};

struct Unk_ov054_02258e44_Glob {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov054_022590d0_Rec {
    void *p[3];
};

struct Unk_ov054_02258e58_Sub {
    s32 unk_00;
    s32 unk_04;
};

extern "C" {
extern Unk_ov054_02258e44_Glob *data_020cbb18;
extern u8 data_021e58a8[];
extern Unk_ov054_022590d0_Rec data_ov054_0225b96c[];
extern s32 data_ov054_0225b3e4[];
extern Unk_ov054_0225902c_Vec data_ov054_0225b394[];
extern u8 data_ov054_0225b350[];
extern u8 data_ov054_0225b344[];
extern s32 data_ov054_0225b380[];
extern void *data_ov054_0225b910[];

s32 func_02072e44(void *g);
s32 func_02072e88(void *g, s32 v);
BOOL func_ov004_0221e3dc();
s32 func_0202e148();
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_0209750c();
void *func_02098320(void *g);
s32 func_02097404(void *h);
s32 func_020973e8(void *h);
void func_020973e4(void *h, u8 i);
void func_0209801c(void *g, s32 v);
s32 func_02098044(void *g, s32 v);
void func_02067a84(void *o, void *buf, void *name);
s32 func_02060388(void *m);
void func_02015958(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02015170(void *self, s32 a, s32 b);
void func_020151d0(void *self, s32 a);
void func_0201517c(void *self, void *cb, s32 a, s32 b);
void func_0202e214(void *self, void *tbl, s32 n, s32 m);
s32 func_02015a5c(void *self);
s32 func_020aa514(s32 v);
void func_0203cb80(s32 v);
s32 func_0203ca94();
s32 func_0202e18c(void *o, void *b, s32 c);
void func_0202e174(void *o, void *b);
void func_020679c0(void *o, s32 v);
void func_0206e9bc();
void func_0206e9d8();
s32 func_020a62a0();
void func_02015ab0(void *self, s32 v);
void func_ov054_0225a218();
}

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
struct Unk_02019dd8 {
    u8 unk_00[0x334 - 0x2ac];
    Unk_02019dd8();
    ~Unk_02019dd8();
    s32 func_02019d8c();
};
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    void func_0201a99c(s32 v);
};
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
MEMBER(Unk_02019858, 0x618 - 0x564);
struct Unk_02014254 {
    u8 unk_00[0x28];
    Unk_02014254();
    ~Unk_02014254();
    s32 func_02014220();
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
    void func_0203e468(s32 v);
    u8 pad_04[8];
    u16 unk_0c;
    u8 pad_0e[0x5c - 0xe];
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
    virtual BOOL vfunc_48(Unk_020d9670 *o);
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bc70(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

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
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};
class Unk_0202e2bc {
public:
    Unk_0202e2bc();
    virtual ~Unk_0202e2bc();
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
    virtual void vfunc_84();

    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    Unk_ov054_02258e58_Sub *unk_3c;
    u32 pad_40[(0xac - 0x40) / 4];
};

// Dialog member at owner +0x658 (vtable 0x0225b9c4)
class Unk_ov054_0225b9c4 : public Unk_0202e2bc {
public:
    typedef void (Unk_ov054_0225b9c4::*Fn)();

    Unk_ov054_0225b9c4();
    virtual ~Unk_ov054_0225b9c4();

    void func_ov054_022590d0();
    void func_ov054_02259178();
    void func_ov054_022591ac();
    void func_ov054_02259200();
    void func_ov054_02259224();
    void func_ov054_02259258();
    void func_ov054_02259270(s32 a);
    void func_ov054_0225944c();
    void func_ov054_022594f4();
    void func_ov054_02259534();
    void func_ov054_022595c4(s32 a);
    s32 func_ov054_0225a690(s32 v);
    s32 func_ov054_0225a910();

    Unk_ov054_0225ba54 *unk_ac;
    s32 unk_b0;
    Fn unk_b4;
    s32 unk_bc;
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
};

class Unk_ov054_0225ba54 : public Unk_020d8bc8 {
public:
    Unk_ov054_0225ba54() {}
    virtual ~Unk_ov054_0225ba54();
    virtual BOOL vfunc_48(Unk_020d9670 *o);
    virtual void vfunc_4c(u32 cmd, u32 arg);

    s32 func_ov054_02258e34();
    s32 func_ov054_02258e44();
    BOOL func_ov054_02258e58();
    s32 func_ov054_0225aef4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov054_0225b9c4 unk_658;
    /* 0x724 */ u8 pad_724[0x804 - 0x724];
    /* 0x804 */ s32 unk_804;
    /* 0x808 */ s32 unk_808;
};

// ---------------------------------------------------------------------------------------------------------------------

Unk_ov054_0225ba54::~Unk_ov054_0225ba54() {}

s32 Unk_ov054_0225ba54::func_ov054_02258e34() {
    return func_02072e44(data_020cbb18);
}

s32 Unk_ov054_0225ba54::func_ov054_02258e44() {
    return func_02072e88(data_020cbb18, data_020cbb18->unk_64);
}

BOOL Unk_ov054_0225ba54::func_ov054_02258e58() {
    if (unk_2ac.func_02019d8c() == 0xba && func_ov004_0221e3dc() && unk_658.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov054_0225ba54::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov054_0225aef4(0xb);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            func_ov054_0225aef4(0xb);
        }
        break;
    case 1:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(4));
        func_ov054_0225aef4(1);
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov054_0225aef4(0xa);
        } else if (func_0201ba88()) {
            u32 t = data_020cbb18->unk_64;
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, func_0201bc4c(4));
            func_ov054_0225aef4(4);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, data_020cbb18->unk_64, 4);
                func_ov054_0225aef4(2);
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov054_0225aef4(9);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov054_0225aef4(2);
                    }
                }
            }
        }
        break;
    }
}

BOOL Unk_ov054_0225ba54::vfunc_48(Unk_020d9670 *o) {
    BOOL r = FALSE;
    s32 bx, by, cx, cy;
    Unk_ov054_0225902c_Vec pos;
    Unk_ov054_0225902c_Vec *pv = (Unk_ov054_0225902c_Vec *)&o->unk_5c;
    pos.x = o->unk_5c;
    pos.y = pv->y;
    pos.z = pv->z;
    bx = 0;
    by = 0;
    cx = 0;
    cy = 0;
    func_0204ee10(&bx, &by, &pos);
    Unk_ov054_0225902c_Vec dst;
    Unk_ov054_0225902c_Vec *pd = &data_ov054_0225b394[unk_808];
    dst.x = data_ov054_0225b394[unk_808].x;
    dst.y = pd->y;
    dst.z = pd->z;
    func_0204ee10(&cx, &cy, &dst);
    if (unk_618.func_02014220() != 0 || func_0201b9bc()) {
        return FALSE;
    }
    if (unk_654 == 2 || unk_654 == 0 || unk_654 == 9) {
        if (bx == cx && by == cy) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_ov054_0225b9c4::func_ov054_022590d0() {
    void *o = unk_3c;
    void *g;
    void *h;
    void *name;
    name = data_ov054_0225b96c[unk_ac->unk_804].p[0];
    g = func_0209750c();
    h = func_02098320(g);
    s32 pos = func_02097404(h);
    u8 v = func_020973e8(h) + 0x1f;
    s32 i;
    for (i = 1; i < 0x15; i++) {
        s32 t = data_ov054_0225b3e4[i];
        if (pos >= t && pos < data_ov054_0225b3e4[i + 1]) {
            func_020973e4(h, i);
            if (unk_c0 < t) {
                func_0209801c(g, 0x16);
                v = i + 0x1f;
            } else {
                v = i + 0x1f;
            }
        }
    }
    u8 m = v;
    func_02067a84(o, &m, name);
}

void Unk_ov054_0225b9c4::func_ov054_02259178() {
    u8 m = 0x16;
    func_02067a84(unk_3c, &m, data_ov054_0225b96c[unk_ac->unk_804].p[0]);
}

void Unk_ov054_0225b9c4::func_ov054_022591ac() {
    func_02015958(this, func_02060388(data_021e58a8), 4, 10, 1, 0);
    u8 m = 0x12;
    func_02067a84(unk_3c, &m, data_ov054_0225b96c[unk_ac->unk_804].p[0]);
}

void Unk_ov054_0225b9c4::func_ov054_02259200() {
    func_02015170(this, 0x26, 0);
    func_020151d0(this, 2);
    func_ov054_0225a690(2);
}

void Unk_ov054_0225b9c4::func_ov054_02259224() {
    u8 m = 1;
    func_02067a84(unk_3c, &m, data_ov054_0225b96c[unk_ac->unk_804].p[0]);
}

void Unk_ov054_0225b9c4::func_ov054_02259258() {
    func_020151d0(this, 1);
    func_ov054_0225a690(1);
}

void Unk_ov054_0225b9c4::func_ov054_02259270(s32 a) {
    s32 idx = func_020aa514(func_02015a5c(this));
    static Fn a1[2] = {&Unk_ov054_0225b9c4::func_ov054_02259258, &Unk_ov054_0225b9c4::func_ov054_02259224};
    static Fn a2[4] = {&Unk_ov054_0225b9c4::func_ov054_02259258, &Unk_ov054_0225b9c4::func_ov054_02259178,
                       &Unk_ov054_0225b9c4::func_ov054_02259200, &Unk_ov054_0225b9c4::func_ov054_02259224};
    static Fn a3[5] = {&Unk_ov054_0225b9c4::func_ov054_02259258, &Unk_ov054_0225b9c4::func_ov054_022591ac,
                       &Unk_ov054_0225b9c4::func_ov054_02259178, &Unk_ov054_0225b9c4::func_ov054_02259200,
                       &Unk_ov054_0225b9c4::func_ov054_02259224};
    static Fn a4[3] = {&Unk_ov054_0225b9c4::func_ov054_02259258, &Unk_ov054_0225b9c4::func_ov054_02259178,
                       &Unk_ov054_0225b9c4::func_ov054_02259224};
    static Fn a5[4] = {&Unk_ov054_0225b9c4::func_ov054_02259258, &Unk_ov054_0225b9c4::func_ov054_022591ac,
                       &Unk_ov054_0225b9c4::func_ov054_02259178, &Unk_ov054_0225b9c4::func_ov054_02259224};
    static Fn *const tbls[5] = {a2, a3, a1, a4, a5};
    static const s32 cnt[5] = {4, 5, 2, 3, 4};
    if (idx < cnt[unk_b0]) {
        (this->*tbls[unk_b0][idx])();
    }
}

void Unk_ov054_0225b9c4::func_ov054_0225944c() {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    void *g = func_0209750c();
    unk_b0 = 0;
    if (!func_0202e148()) {
        unk_b0 = 2;
    } else if (func_02098044(g, 1) == 0 && func_02060388(data_021e58a8) != 0) {
        if (unk_ac->func_ov054_02258e44()) {
            unk_b0 = 4;
        } else {
            unk_b0 = 1;
        }
    } else {
        if (unk_ac->func_ov054_02258e44()) {
            unk_b0 = 3;
        }
    }
    s32 n = data_ov054_0225b380[unk_b0];
    func_0202e214(this, data_ov054_0225b910[unk_b0], n, n - 1);
    func_020679c0(o, 1);
}

void Unk_ov054_0225b9c4::func_ov054_022594f4() {
    s32 r = func_020aa514(func_02015a5c(this));
    func_0209750c();
    if (unk_1e == 0x12) {
        switch (r) {
        case 0:
            func_0203cb80(0);
            break;
        case 1:
            func_0203cb80(1);
            break;
        }
        func_0203ca94();
    }
}

void Unk_ov054_0225b9c4::func_ov054_02259534() {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = func_020aa514(func_02015a5c(this));
    u32 id = 0xff;
    u32 k = 1;
    u8 m[2];
    s32 t = unk_1e;
    if (t >= 0 && t <= 0x19) {
        if (r == 1) {
            id = data_ov054_0225b350[unk_ac->unk_808];
            k = 0;
        } else if (func_0202e18c(unk_ac, m, 0)) {
            func_0202e174(unk_ac, m);
        }
    }
    if (id != 0xff) {
        void *name = data_ov054_0225b96c[unk_ac->unk_804].p[k];
        m[1] = id;
        func_02067a84(o, &m[1], name);
    }
}

void Unk_ov054_0225b9c4::func_ov054_022595c4(s32 a) {
    Unk_ov054_02258e58_Sub *o = unk_3c;
    s32 r = func_020aa514(func_02015a5c(this));
    void *g = func_0209750c();
    u32 id = 0xff;
    u8 m;
    switch (unk_1e) {
    case 0x5f:
        if (r == 0) {
            func_0201517c(this, (void *)func_ov054_0225a218, 0xd, 0);
            func_020151d0(this, 0);
            func_ov054_0225a690(0xb);
        } else if (r == 1) {
            id = data_ov054_0225b344[unk_ac->unk_808];
        }
        break;
    case 0:
    case 0x52:
    case 0x53:
    case 0x56:
        func_ov054_02259270(a);
        break;
    case 3:
    case 9:
        if (r == 0) {
            func_020151d0(this, 1);
            func_ov054_0225a690(1);
        }
        break;
    case 0x10:
        if (r == 0) {
            id = 0x11;
        } else if (r == 1) {
            id = 0xe;
            func_0206e9bc();
        }
        break;
    case 0xc:
        if (r == 0) {
            func_0206e9d8();
            id = 7;
        }
        break;
    case 4:
    case 0x1c:
    case 0x34:
    case 0x5d:
    case 0x5e:
        if (r == 2) {
            if (func_02098044(g, 4) == 0) {
                id = 0x1a;
                func_0209801c(g, 4);
            } else {
                id = 0x19;
            }
        } else if (r == 3) {
            if (func_02098044(g, 1) != 0) {
                id = 0x60;
            } else {
                id = 0x35;
            }
        }
        break;
    case 0x38:
    case 0x39:
        if (r == 1) {
            func_ov054_0225a910();
            id = 0x3a;
        }
        break;
    case 1:
        break;
    }
    if (id != 0xff) {
        m = id;
        func_02067a84(o, &m, data_ov054_0225b96c[unk_ac->unk_804].p[0]);
    }
}
