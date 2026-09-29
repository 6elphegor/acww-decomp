#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov004_022091fc_Vec {
    s32 x, y, z;
    Unk_ov004_022091fc_Vec() {}
    ~Unk_ov004_022091fc_Vec() {}
};

struct Unk_ov004_02210f0c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02206520_Pair {
    s32 x, y;
};

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)
struct Unk_ov004_02206520 {
    Unk_ov004_02206520();
    ~Unk_ov004_02206520();
    Unk_ov004_02206520_Pair *func_02206520(u32 i);
    u32 func_0220652c();
    u32 unk_00;
    Unk_ov004_02206520_Pair unk_04[4];
};

struct Unk_ov004_02210f0c_Row {
    Unk_ov004_02210f0c_V3 *unk_00;
    u32 unk_04;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_ov004_022488d8 {
public:
    Unk_ov004_022488d8();
    virtual ~Unk_ov004_022488d8();
};

extern "C" {
void *func_ov004_02209ef0(u32 size);
}

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void operator delete(void *p);
    static void *operator new(unsigned long size) { return func_ov004_02209ef0(size); }

    virtual BOOL vfunc_00();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_28();
    virtual Unk_ov004_022091fc_Vec *vfunc_50();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual BOOL vfunc_6c();
    virtual BOOL vfunc_70(s32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual u32 vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();

    /* 0x0f0 */ u8 f_0f0[0x590 - 0xf0];
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 f_594[0x73c - 0x594];
    /* 0x73c */ u8 f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 f_760[0x77c - 0x760];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u32 unk_780;
    /* 0x784 */ u8 f_784[0x840 - 0x784];
};

struct Unk_ov004_02205ad4 {
    Unk_ov004_02205ad4();
    ~Unk_ov004_02205ad4();
    u8 pad[0x58];
};

extern "C" {
extern Unk_ov004_02210f0c_Row data_ov004_02240078[];
extern u32 data_ov004_0224007c[];
extern Unk_ov004_02210f0c_V3 *data_ov004_02249028[];
extern u8 data_ov004_02240050[];
extern void *data_020cbb18;

s32 *func_ov004_02210d58(void *o, u32 i);
void func_ov004_02208938(Unk_ov004_0224882c *self, void *out, void *src);
void func_ov004_022059b0(void *p, s32 v);
void func_ov004_022059f4(void *p);
void func_ov004_02205a64(void *p, u32 a, s32 b);
void func_ov004_02205c44(void *p, s32 a, s32 b);
BOOL func_ov004_02205c6c(void *p);
BOOL func_ov004_02205c7c(void *p);
BOOL func_ov004_02224c24(void *out, u32 i);
BOOL func_ov004_02224c30(void *out, u32 i);
void func_ov004_02224a80(void *a, void *b, void *c, void *d);
void func_ov004_02207c40(Unk_ov004_0224882c *o, Unk_ov004_02206520 *l, s32 a, s32 b);
BOOL func_ov004_02208980(Unk_ov004_0224882c *o);
BOOL func_ov004_02209198(Unk_ov004_0224882c *o);
BOOL func_ov004_02209108(Unk_ov004_0224882c *o);
BOOL func_ov004_02209150(Unk_ov004_0224882c *o);
BOOL func_ov004_022091e0(Unk_ov004_0224882c *o);
BOOL func_ov004_02206f8c(Unk_ov004_0224882c *o);
void func_ov004_02208de0(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c, s32 d);
void func_ov004_02208a18(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c);
void func_ov004_02208ba8(Unk_ov004_0224882c *o, s32 a, s32 b, s32 c, s32 d);
BOOL func_ov004_022087e8(void *v, s32 a, s32 b, s32 c, s32 d);
void func_ov004_02210ad4(Unk_ov004_0224882c *o);
void func_0204ee10(s32 *a, s32 *b, void *v);
void func_02051cc8(void *o, s32 a, s32 b, s32 c);
BOOL func_02072e44(void *p);
BOOL func_020b52d0(void);
void *func_ov004_022354ec(void *o);
u32 func_ov004_022354f4(void *o);
u32 func_ov004_022354e0(void *o);
void func_020e93a0(void *v, u32 a);
void func_01ffca8c(void *a, void *b, void *c);
void *func_ov004_022354d8(void);
void *func_ov004_02235464(void *mgr, void *o);
BOOL func_ov004_022350c8(void *o);
s32 func_ov004_022354e8(void *o);
s32 func_ov004_022354f8(void *o);
BOOL func_ov004_02234ad4(void);
}

// ---------------------------------------------------------------- class Unk_ov004_0224b694
class Unk_ov004_0224b694 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b694();
    virtual ~Unk_ov004_0224b694();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0221120c(Unk_ov004_02210f0c_V3 *out, void *o);

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 pad_842;
};

// ---------------------------------------------------------------- class Unk_ov004_0224ba18
class Unk_ov004_0224ba18 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224ba18();
    virtual ~Unk_ov004_0224ba18();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_48(void *a);
    virtual BOOL vfunc_70(s32 a, u32 b);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    u32 func_ov004_02210f0c(void *o);
    u32 func_ov004_02210f74(void *o);
    BOOL func_ov004_02211130();

    /* 0x840 */ u8 pad_840[0x854 - 0x840];
    /* 0x854 */ u32 unk_854;
    /* 0x858 */ u16 unk_858;
    /* 0x85a */ u8 unk_85a;
    /* 0x85b */ u8 pad_85b;
    /* 0x85c */ Unk_ov004_02205ad4 unk_85c;
};

// ---------------------------------------------------------------- class Unk_ov004_02249a74
class Unk_ov004_02249a74 : public Unk_ov004_0224882c {
public:
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(s32 a, u32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_022114f0();
    BOOL func_ov004_02211520();
    void func_ov004_02211554();
    BOOL func_ov004_022115a4();
    void func_ov004_022115d0();
    BOOL func_ov004_02211600();
    void func_ov004_02211638();
    BOOL func_ov004_02211678();
    void func_ov004_022116ac();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
};

typedef void (Unk_ov004_02249a74::*Unk_ov004_022116ac_Fn)();
typedef BOOL (Unk_ov004_02249a74::*Unk_ov004_02211738_Fn)();

// ================================================================ Unk_ov004_0224ba18 ==========
u32 Unk_ov004_0224ba18::func_ov004_02210f0c(void *o) {
    Unk_ov004_02210f0c_V3 *p = data_ov004_02240078[unk_780].unk_00;
    if (p) {
        u32 i;
        for (i = 0; i < data_ov004_02240078[unk_780].unk_04; i++) {
            Unk_ov004_02210f0c_V3 v;
            func_ov004_02208938(this, &v, &p[i]);
            s32 *q = func_ov004_02210d58(o, i);
            func_0204ee10(q, q + 1, &v);
        }
        return *(u32 *)((u8 *)data_ov004_0224007c + (unk_780 << 3));
    }
    return 0;
}

u32 Unk_ov004_0224ba18::func_ov004_02210f74(void *o) {
    Unk_ov004_02210f0c_V3 *p = data_ov004_02249028[unk_780];
    if (p) {
        u32 i;
        for (i = 0; i < 2; i++) {
            Unk_ov004_02210f0c_V3 v;
            func_ov004_02208938(this, &v, &p[i]);
            s32 *q = func_ov004_02210d58(o, i);
            func_0204ee10(q, q + 1, &v);
        }
        return 2;
    }
    return 0;
}

BOOL Unk_ov004_0224ba18::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_80() {
    if (unk_77c == 0x2a) {
        func_ov004_022059b0(f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            s32 x, y;
            if (func_ov004_02224c24(&v, i)) {
                func_0204ee10(&x, &y, &v);
                Unk_ov004_02206520 list;
                func_ov004_02207c40(this, &list, z, z);
                for (j = 0; j < list.func_0220652c(); j++) {
                    if (x == list.func_02206520(j)->x && y == list.func_02206520(j)->y) {
                        func_ov004_022059b0(f_760, 1);
                        func_ov004_022059f4(&unk_85c);
                        func_ov004_02208980(this);
                        func_ov004_02209198(this);
                        break;
                    }
                }
            }
        }
    }
    func_ov004_02210ad4(this);
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_7c() {
    func_ov004_022059b0(f_760, 0);
    if (unk_77c == 0x2a) {
        func_ov004_02208de0(this, 0, 0, 0x1000, 0);
        func_ov004_02205a64(&unk_85c, unk_590, 1);
    }
    if (func_020b52d0()) {
        vfunc_70(1, 0xff);
    }
    return TRUE;
}

BOOL Unk_ov004_0224ba18::vfunc_48(void *a) {
    if (!func_02072e44(data_020cbb18) && func_ov004_02211130() && unk_854 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224ba18::func_ov004_02211130() {
    if (unk_85a >= 1) {
        return TRUE;
    }
    return FALSE;
}

Unk_ov004_0224ba18::~Unk_ov004_0224ba18() {
}

Unk_ov004_0224ba18::Unk_ov004_0224ba18() : unk_858(0xfff1) {
}

extern "C" void func_ov004_022111f0() {
    new Unk_ov004_0224ba18;
}

// ================================================================ Unk_ov004_0224b694 ==========
void Unk_ov004_0224b694::func_ov004_0221120c(Unk_ov004_02210f0c_V3 *out, void *o) {
    if (unk_780 == 0) {
        out->x = unk_5c[0];
        out->y = unk_5c[1];
        out->z = unk_5c[2];
    } else {
        s32 *p = (s32 *)func_ov004_022354ec(o);
        out->x = p[0];
        out->y = p[1];
        out->z = p[2];
        Unk_ov004_02210f0c_V3 v;
        s32 t = func_ov004_022354f4(o) + 0x1000;
        v.x = 0;
        v.y = 0;
        v.z = t;
        func_020e93a0(&v, func_ov004_022354e0(o));
        func_01ffca8c(out, &v, out);
    }
}

BOOL Unk_ov004_0224b694::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224b694::vfunc_80() {
    s32 x, y;
    if (unk_77c == 0x2c) {
        func_ov004_022059b0(f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            if (func_ov004_02224c30(&v, i)) {
                func_0204ee10(&x, &y, &v);
                Unk_ov004_02206520 list;
                func_ov004_02207c40(this, &list, z, z);
                for (j = 0; j < list.func_0220652c(); j++) {
                    if (x == list.func_02206520(j)->x && y == list.func_02206520(j)->y) {
                        func_ov004_022059b0(f_760, 1);
                        func_ov004_02208980(this);
                        func_ov004_02209198(this);
                        break;
                    }
                }
            }
        }
    } else if (unk_77c == 9) {
        func_ov004_02208980(this);
        func_ov004_02209198(this);
    }
    BOOL hit = FALSE;
    void *r6 = func_ov004_02235464(func_ov004_022354d8(), this);
    if (r6 && func_ov004_022350c8(r6)) {
        BOOL ok = FALSE;
        u8 mode = 0;
        if (unk_77c != 0x26) {
            if (func_ov004_022354e8(r6) == 0) {
                ok = TRUE;
                mode = 0;
            }
        } else {
            s32 t = func_ov004_022354e8(r6);
            if (t == 0) {
                ok = TRUE;
                mode = 0;
            } else if (func_ov004_022354e8(r6) == 3) {
                ok = TRUE;
                mode = 1;
            } else if (func_ov004_022354e8(r6) == 1) {
                ok = TRUE;
                mode = 2;
            }
        }
        if (ok) {
            Unk_ov004_02210f0c_V3 pos;
            func_ov004_0221120c(&pos, r6);
            if (func_ov004_022087e8(&pos, 0x800, 0x2000, 0x800, 0)) {
                if (unk_840 < 7) {
                    hit = TRUE;
                    unk_840++;
                }
                if (func_ov004_022354f8(r6) > 0x200) {
                    if (unk_840 >= 7) {
                        func_ov004_02224a80(&pos, &pos.z, (u8 *)this + 0x8e, &mode);
                        unk_840 = 0;
                    }
                }
            }
        }
    }
    if (!hit) {
        unk_840 = 0;
    }
    return TRUE;
}

BOOL Unk_ov004_0224b694::vfunc_7c() {
    func_ov004_022059b0(f_760, 0);
    if (unk_77c == 9 || unk_77c == 0x2c) {
        func_ov004_02208de0(this, 0, 0, 0x1000, 0);
    }
    return TRUE;
}

Unk_ov004_0224b694::~Unk_ov004_0224b694() {
}

Unk_ov004_0224b694::Unk_ov004_0224b694() {
}

extern "C" void func_ov004_022114d4() {
    new Unk_ov004_0224b694;
}

// ================================================================ Unk_ov004_02249a74 ==========
void Unk_ov004_02249a74::func_ov004_022114f0() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (func_ov004_02208980(this)) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211520() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02209108(this);
    func_ov004_02208a18(this, 0, 3, 0x1000);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_02211554() {
    func_ov004_02208980(this);
    func_ov004_022091e0(this);
    func_ov004_02209198(this);
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 3, 0xff, 1);
    } else if (func_ov004_02206f8c(this)) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_022115a4() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02208a18(this, 1, 0, 0x1000);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_022115d0() {
    func_ov004_02205c44(f_73c, 1, 0);
    if (func_ov004_02208980(this)) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211600() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02209150(this);
    func_ov004_02208ba8(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_02211638() {
    if (func_ov004_02205c6c(f_73c)) {
        func_02051cc8(this, 1, 0xff, 1);
    } else if (func_ov004_02206f8c(this)) {
        vfunc_70(1, 0xff);
    }
}

BOOL Unk_ov004_02249a74::func_ov004_02211678() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02208ba8(this, 0, 3, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_02249a74::func_ov004_022116ac() {
    static Unk_ov004_022116ac_Fn tbl[4] = {
        &Unk_ov004_02249a74::func_ov004_02211638,
        &Unk_ov004_02249a74::func_ov004_022115d0,
        &Unk_ov004_02249a74::func_ov004_02211554,
        &Unk_ov004_02249a74::func_ov004_022114f0,
    };
    u32 i = unk_841;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL Unk_ov004_02249a74::vfunc_70(s32 a, u32 b) {
    Unk_ov004_0224882c::vfunc_70(a, b);
    static Unk_ov004_02211738_Fn tbl[4] = {
        &Unk_ov004_02249a74::func_ov004_02211678,
        &Unk_ov004_02249a74::func_ov004_02211600,
        &Unk_ov004_02249a74::func_ov004_022115a4,
        &Unk_ov004_02249a74::func_ov004_02211520,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_02249a74::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_02240050[a];
    }
    return 0;
}

BOOL Unk_ov004_02249a74::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_02249a74::vfunc_80() {
    func_ov004_022116ac();
    return TRUE;
}

BOOL Unk_ov004_02249a74::vfunc_7c() {
    unk_840 = 0;
    func_ov004_02208de0(this, 0, 1, 0x1000, 0);
    if (func_ov004_02205c7c(f_73c) && !func_ov004_02234ad4()) {
        vfunc_70(2, 0xff);
    } else {
        vfunc_70(0, 0xff);
    }
    return TRUE;
}
