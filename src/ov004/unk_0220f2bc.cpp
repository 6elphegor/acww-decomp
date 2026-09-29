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

struct Unk_ov004_0220f6e0_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
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

class Unk_ov004_0224882c : public Unk_020d9670, public Unk_ov004_022488d8 {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

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
    virtual BOOL vfunc_70();
    virtual BOOL vfunc_74();
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

    // Callees outside this range
    BOOL func_ov004_02206f8c();
    void func_ov004_02207c40(Unk_ov004_02206520 *l, s32 a, s32 b);
    u32 func_ov004_022087a4();
    u32 func_ov004_02208968();
    void func_ov004_02208980();
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    void func_ov004_022090c0();
    s32 func_ov004_0220fbf4();

    /* 0x0f0 */ u8 pad_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ Unk_ov004_0220f6e0_Rec *unk_128;
    /* 0x12c */ u8 pad_12c[0x534 - 0x12c];
    /* 0x534 */ u8 f_534[0x5d0 - 0x534];
    /* 0x5d0 */ u8 f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 f_6c8[0x77c - 0x6c8];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ u8 pad_780[0x794 - 0x780];
    /* 0x794 */ u8 f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 f_7b4[0x840 - 0x7b4];
};

union Unk_ov004_0220f2c0_Pad {
    u16 h;
    u8 b[2];
};

class Unk_ov004_0224a758 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224a758();
    virtual ~Unk_ov004_0224a758();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ s8 unk_840;
    /* 0x841 */ s8 unk_841;
    /* 0x842 */ Unk_ov004_0220f2c0_Pad unk_842;
    /* 0x844 */ Unk_ov004_0220f2c0_Pad unk_844;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 unk_847;
};

class Unk_ov004_0220f624 : public Unk_ov004_0224882c {
public:
    void func_ov004_0220f624();
    BOOL func_ov004_0220f650();
    BOOL func_ov004_0220f694();
    BOOL func_ov004_0220f6b8();
    BOOL func_ov004_0220f6bc();
    BOOL func_ov004_0220f6e0();
    BOOL func_ov004_0220f7b4();
    BOOL func_ov004_0220f7d0();
    BOOL func_ov004_0220f7e4();
    BOOL func_ov004_0220f814();
    BOOL func_ov004_0220f86c();
    BOOL func_ov004_0220f878();
    BOOL func_ov004_0220f87c();
    BOOL func_ov004_0220f898();
    BOOL func_ov004_0220f8dc();
    BOOL func_ov004_0220f8f8();
    BOOL func_ov004_0220f914();
    BOOL func_ov004_0220f930();
    BOOL func_ov004_0220f944();
    BOOL func_ov004_0220f974();
    BOOL func_ov004_0220f9d4();
    BOOL func_ov004_0220f9e0();
    BOOL func_ov004_0220f9e4();
    BOOL func_ov004_0220f9e8();
    void func_ov004_0220f9ec();
    BOOL func_ov004_0220fae8(s32 s);

    /* 0x840 */ u8 pad_840[0x85c - 0x840];
    /* 0x85c */ u8 unk_85c;
    /* 0x860 */ s32 unk_860;
};

extern "C" {
extern u8 *data_021c47c4;
extern u8 data_ov004_0224bbc0[];

void func_0209cf18(void *);
void func_020547a4(void *, u32);
void func_0205439c(void *);
void func_02054720(void *, void *, s32, s32, s32, s32);
void func_02054710(void *);
BOOL func_02054800(void *, u32);
BOOL func_02056654(void *);
u32 func_0209c348(u32);
u32 func_020b50e8(void);
s32 func_ov004_02206be4(void *);
void *func_ov004_022063c8(void *, u32);
void func_ov004_022358e0(void *, s32);
void func_ov004_02235908(void *, s32, void *);
void func_ov004_0223591c(void *, s32, void *);
s32 func_ov004_02234ad4(void);
s32 func_ov004_02234ba8(void);
void *func_ov004_022354d8(void);
void *func_ov004_02235464(void *, void *);
u16 func_ov004_022354e0(void *);
void *func_ov004_022354ec(void *);
BOOL func_ov004_022249d4(s32 *);
BOOL func_ov004_02224c78(s32);
BOOL func_ov004_022249f8(s32 *, void *, void *, u16 *);
void func_0203e47c(void *, Unk_ov004_022488d8 *);
void func_0203e488(void *, Unk_ov004_022488d8 *);
void func_0203d67c(void *);
void func_020a710c(Unk_ov004_022488d8 &, void *);
BOOL func_02051da4(void *, s32, s32, s32);
BOOL func_0206ec6c(void);
BOOL func_0206eca4(s32);
void *func_0204ebd8(void *, s32, s32, s32, s32, u32);
BOOL func_0204b2d4(void *);
}

BOOL Unk_ov004_0224a758::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224a758::vfunc_80() {
    unk_844.h = unk_842.h;
    func_0209cf18(&unk_842);
    if (unk_77c == 0x10) {
        if (!func_ov004_02206f8c() && unk_840 >= 0 && unk_840 != unk_841 && unk_847 != 0) {
            func_ov004_022358e0(f_794, 1);
        }
        unk_841 = unk_840;
        if (unk_840 == -1) {
            if (func_ov004_02206f8c()) {
                unk_840 = 1;
            } else if (!func_ov004_02234ad4() && unk_844.b[1] != unk_842.b[1]) {
                s32 t = unk_842.b[1];
                unk_840 = t % 12;
                if (unk_840 == 0) {
                    unk_840 = 12;
                }
                if (!func_ov004_02206f8c()) {
                    func_ov004_02235908(f_794, 0x42d, f_7b4);
                }
                func_02054720(f_534, func_ov004_022063c8((void *)func_ov004_02206be4(f_6c8), 0), 1, 0x1000, 0, 0);
            }
        } else if (unk_840 > 0) {
            if (!func_ov004_02206f8c()) {
                func_ov004_02235908(f_794, 0x42d, f_7b4);
            }
            func_0205439c(f_534);
            if (func_02056654(f_5d0)) {
                func_02054720(f_534, func_ov004_022063c8((void *)func_ov004_02206be4(f_6c8), 0), 1, 0x1000, 0, 0);
                if (!func_ov004_02206f8c()) {
                    unk_840 = unk_840 - 1;
                }
                if (unk_840 == 0) {
                    unk_840 = -1;
                }
            }
        }
    } else if (unk_77c == 0x2b) {
        func_ov004_02208980();
    }
    s32 s = func_ov004_02234ba8();
    if (unk_77c == 0x11) {
        func_020547a4(f_534, s);
    }
    if (unk_846 != 0 && (s == 9 || s == 0x1d)) {
        if (unk_77c == 0x10) {
            func_ov004_0223591c(f_794, 0x4d0, f_7b4);
        } else {
            func_ov004_022090c0();
        }
    }
    unk_846 = 0;
    unk_847 = 0;
    return TRUE;
}

BOOL Unk_ov004_0224a758::vfunc_7c() {
    u32 r4 = func_ov004_02208968();
    func_0209cf18(&unk_844);
    unk_842.h = unk_844.h;
    unk_840 = -1;
    if (unk_77c == 0x10) {
        if (func_02054800(f_534, func_0209c348(r4))) {
            func_02054720(f_534, func_ov004_022063c8((void *)func_ov004_02206be4(f_6c8), 0), 1, 0x1000, 0, 0);
            func_02054710(f_534);
        }
    } else if (unk_77c == 0x11) {
        if (func_02054800(f_534, func_0209c348(r4))) {
            func_02054720(f_534, func_ov004_022063c8((void *)func_ov004_02206be4(f_6c8), 0), 0, 0x1000, 0, 0);
            func_02054710(f_534);
        }
    } else if (unk_77c == 0x2b) {
        func_ov004_02208de0(0, 0, 0x1000, 0);
    }
    return TRUE;
}

Unk_ov004_0224a758::~Unk_ov004_0224a758() {
}

Unk_ov004_0224a758::Unk_ov004_0224a758() {
}

extern "C" void func_ov004_0220f608() {
    new Unk_ov004_0224a758;
}

void Unk_ov004_0220f624::func_ov004_0220f624() {
    u32 f = unk_85c;
    if (f == 0) {
        func_0203e47c(this, this);
        func_0203d67c(this);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f650() {
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        if (func_ov004_022249d4(&v)) {
            return func_02051da4(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return func_02051da4(this, 3, 0xff, 1);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f694() {
    if (unk_128 && unk_128->unk_04 == 0) {
        func_ov004_0220fae8(11);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f6b8() {
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f6bc() {
    if (unk_128 && unk_128->unk_04 != 0) {
        func_ov004_0220fae8(10);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f6e0() {
    s32 y, x;
    func_0203e488(this, this);
    unk_128->unk_08 = 1;
    func_020a710c(*this, data_ov004_0224bbc0);
    u32 t = func_ov004_022087a4();
    u32 r5 = t + func_020b50e8();
    r5 &= 0xf;
    struct {
        u32 pad;
        Unk_ov004_02206520 list;
    } l;
    Unk_ov004_02206520 &list = l.list;
    func_ov004_02207c40(&list, 0, 0);
    u8 *grid = data_021c47c4;
    if (grid != NULL) {
        u32 i;
        for (i = 0; i < list.func_0220652c(); i++) {
            x = list.func_02206520(i)->x;
            y = list.func_02206520(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            void *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (cell != NULL && func_0204b2d4(cell)) {
                r5 = (r5 + (x + (y << 4))) & 0xf;
                break;
            }
        }
    }
    unk_10a = r5;
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f7b4() {
    if (unk_85c == 2) {
        func_ov004_0220fae8(9);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f7d0() {
    return func_02051da4(this, 1, 0xff, 1);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f7e4() {
    s32 v = func_ov004_0220fbf4();
    if (v == -1) {
        func_ov004_0220fae8(8);
    } else if (func_ov004_02224c78(v)) {
        func_ov004_0220fae8(8);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f814() {
    void *r4 = func_ov004_02235464(func_ov004_022354d8(), this);
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        u16 h = func_ov004_022354e0(r4);
        void *a = func_ov004_022354ec(r4);
        func_ov004_022249f8(&v, a, (u8 *)func_ov004_022354ec(r4) + 8, &h);
        return TRUE;
    }
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f86c() {
    return func_ov004_0220fae8(7);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f878() {
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f87c() {
    if (unk_85c == 0) {
        func_0203d67c(this);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f898() {
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        if (func_ov004_022249d4(&v)) {
            return func_02051da4(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return func_02051da4(this, 3, 0xff, 1);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f8dc() {
    if (func_0206ec6c()) {
        func_ov004_0220fae8(5);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f8f8() {
    if (func_0206eca4(0x22)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f914() {
    if (unk_85c == 2) {
        func_ov004_0220fae8(4);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f930() {
    return func_02051da4(this, 1, 0xff, 1);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f944() {
    s32 v = func_ov004_0220fbf4();
    if (v == -1) {
        func_ov004_0220fae8(3);
    } else if (func_ov004_02224c78(v)) {
        func_ov004_0220fae8(3);
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220f974() {
    void *r4 = func_ov004_02235464(func_ov004_022354d8(), this);
    s32 v = func_ov004_0220fbf4();
    if (v != -1) {
        u16 h = func_ov004_022354e0(r4);
        void *a = func_ov004_022354ec(r4);
        if (func_ov004_022249f8(&v, a, (u8 *)func_ov004_022354ec(r4) + 8, &h)) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f9d4() {
    return func_ov004_0220fae8(2);
}

BOOL Unk_ov004_0220f624::func_ov004_0220f9e0() {
    return TRUE;
}

BOOL Unk_ov004_0220f624::func_ov004_0220f9e4() {
}

BOOL Unk_ov004_0220f624::func_ov004_0220f9e8() {
    return TRUE;
}

void Unk_ov004_0220f624::func_ov004_0220f9ec() {
    typedef BOOL (Unk_ov004_0220f624::*Fn)();
    static Fn tbl[12] = {
        &Unk_ov004_0220f624::func_ov004_0220f9e4,
        &Unk_ov004_0220f624::func_ov004_0220f9d4,
        &Unk_ov004_0220f624::func_ov004_0220f944,
        &Unk_ov004_0220f624::func_ov004_0220f914,
        &Unk_ov004_0220f624::func_ov004_0220f8dc,
        &Unk_ov004_0220f624::func_ov004_0220f87c,
        &Unk_ov004_0220f624::func_ov004_0220f86c,
        &Unk_ov004_0220f624::func_ov004_0220f7e4,
        &Unk_ov004_0220f624::func_ov004_0220f7b4,
        &Unk_ov004_0220f624::func_ov004_0220f6bc,
        &Unk_ov004_0220f624::func_ov004_0220f694,
        (Fn)&Unk_ov004_0220f624::func_ov004_0220f624,
    };
    s32 s = unk_860;
    if (s < 12) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov004_0220f624::func_ov004_0220fae8(s32 s) {
    typedef BOOL (Unk_ov004_0220f624::*Fn)();
    static Fn tbl[12] = {
        &Unk_ov004_0220f624::func_ov004_0220f9e8,
        &Unk_ov004_0220f624::func_ov004_0220f9e0,
        &Unk_ov004_0220f624::func_ov004_0220f974,
        &Unk_ov004_0220f624::func_ov004_0220f930,
        &Unk_ov004_0220f624::func_ov004_0220f8f8,
        &Unk_ov004_0220f624::func_ov004_0220f898,
        &Unk_ov004_0220f624::func_ov004_0220f878,
        &Unk_ov004_0220f624::func_ov004_0220f814,
        &Unk_ov004_0220f624::func_ov004_0220f7d0,
        &Unk_ov004_0220f624::func_ov004_0220f6e0,
        &Unk_ov004_0220f624::func_ov004_0220f6b8,
        &Unk_ov004_0220f624::func_ov004_0220f650,
    };
    if (s < 12) {
        if ((this->*tbl[s])()) {
            unk_860 = s;
            return TRUE;
        }
    }
    return FALSE;
}
