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

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

struct Unk_ov004_0220ce38_Slot {
    /* 0x00 */ u32 sub[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c[3];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
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
    virtual BOOL vfunc_70(s32 a, s32 b);
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
    virtual BOOL vfunc_a0();

    // Callees outside this range
    BOOL func_ov004_02206f8c();
    BOOL func_ov004_02208980();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    void func_ov004_0220878c();
    u32 func_ov004_022087a4();
    void func_ov004_02207c40(void *a, s32 b, s32 c);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov004_022057b0();
    void func_ov004_0220711c(void *a, void *b, s32 c, s32 d);
    void func_ov004_02205814();

    /* 0x0f0 */ u8 pad_0f0[0x10a - 0xf0];
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x128 - 0x10b];
    /* 0x128 */ u32 unk_128;
    /* 0x12c */ u8 pad_12c[0x534 - 0x12c];
    /* 0x534 */ u8 f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 f_744[0x760 - 0x744];
    /* 0x760 */ u8 f_760[0x768 - 0x760];
    /* 0x768 */ u32 unk_768;
    /* 0x76c */ u8 pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 unk_77c;
    /* 0x780 */ u32 unk_780;
    /* 0x784 */ u8 pad_784[0x840 - 0x784];
};

struct Unk_ov004_0224aadc_Sub {
    Unk_ov004_0224aadc_Sub();
    ~Unk_ov004_0224aadc_Sub();
    /* 0x00 */ u8 pad_00[2];
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 pad_03[5];
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 pad_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u16 unk_18;
    /* 0x1a */ u16 pad_1a;
};

struct Unk_ov004_0220fde4_Elem {
    s32 x, y;
};

class Unk_ov004_0220fde4_Arr {
public:
    Unk_ov004_0220fde4_Arr();
    ~Unk_ov004_0220fde4_Arr();
    Unk_ov004_0220fde4_Elem *func_ov004_02206520(u32 i);
    u32 func_ov004_0220652c();
    u32 pad[9];
};

struct Unk_ov004_0220fde4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220fde4_Pos {
    s32 x, y;
};

class Unk_ov004_0224aadc : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224aadc();
    virtual ~Unk_ov004_0224aadc();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(s32 a, s32 b);
    virtual u32 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_a0();

    void func_ov004_0220f9ec();
    void func_ov004_0220fae8(s32 a);
    s32 func_ov004_0220fbf4();
    void func_ov004_0220fc70();
    BOOL func_ov004_0220fca0();
    void func_ov004_0220fcf4();
    BOOL func_ov004_0220fd24();
    void func_ov004_0220fd7c();
    BOOL func_ov004_0220fdac();
    void func_ov004_0220fde4();
    BOOL func_ov004_0220fef8();
    void func_ov004_0220ff44();
    void func_ov004_02210228();
    void func_ov004_022102c0();
    void func_ov004_02210364(s32 a);
    void func_ov004_022103ac();
    BOOL func_ov004_022103ec();
    void func_ov004_022103fc();
    BOOL func_ov004_02210488();
    void func_ov004_022104b8();
    void func_ov004_02208a18(s32 a, s32 b, s32 c);
    void func_ov004_02208ba8(s32 a, s32 b, s32 c, s32 d);

    /* 0x840 */ Unk_ov004_0224aadc_Sub unk_840;
    /* 0x85c */ u8 unk_85c;
    /* 0x85d */ u8 pad_85d[3];
    /* 0x860 */ u32 unk_860;
};

extern "C" {
extern u32 data_ov004_0224006c[];
extern u8 data_ov004_02240048[];
extern u8 data_021edb5c[];

BOOL func_ov004_02205c44(void *, s32, s32);
BOOL func_ov004_02205c6c(void *);
BOOL func_ov004_02205c7c(void *);
void func_ov004_022059b0(void *, s32);
void func_ov004_02205c1c(void *);
void func_ov004_02205c2c(void *);
void *func_ov004_02206be4(void *);
void func_ov004_022063c8(void *, u32);
BOOL func_ov004_02234ad4(void);
BOOL func_ov004_02208894(void);
BOOL func_020b52f8(void);
void *func_ov004_022354d8(void);
void *func_ov004_02235464(void *, void *);
BOOL func_ov004_022354e8(void *);
BOOL func_ov004_02234f80(s32, s32);
s32 func_0202fff0(s32, s32);
void func_ov004_02206558(void *);
void func_ov004_02206554(void *);
void func_0203d704(void *, s32);
void func_02094f20(void);
void func_020e93a0(void *, s32);
void func_ov004_02209aa8(void *);
void func_ov004_022096b4(void *);
void func_ov004_02209edc(void *);
void *func_ov004_02209ef0(u32);
u32 func_020679b4(u32);
u32 func_020aa514(u32);
void func_02067a84(u32, void *, u32);
void func_020aa680(u32, s32, s32);
void func_020aa638(u32, s32, void *, s32, void *, s32, s32);
void func_020aa608(u32);
void func_020679c0(u32, s32);
void func_0203e47c(void *, void *);
void func_0203d67c(void *);
void func_020ed188(void *);
u32 func_ov004_02209d58(u32, u32, u32, u32, u8, u32);
BOOL func_ov004_02235028(void);
u32 func_02053228(void *);
u32 func_0204b25c(void *);
BOOL func_0206ec6c(void);
BOOL func_0206ed18(void);
u32 func_0206ed38(void);
u16 func_02099048(void);
void *func_0209750c(void);
void func_020986d8(void *, void *);
u16 func_0204b248(u32, u32);
void func_0209909c(void *, u32, u32);
}

typedef void (Unk_ov004_0224aadc::*Unk_ov004_0220ff44_Fn)();
typedef BOOL (Unk_ov004_0224aadc::*Unk_ov004_0220ffd0_Fn)();

s32 Unk_ov004_0224aadc::func_ov004_0220fbf4() {
    u32 i;
    for (i = 0; i < 3; i++) {
        if (unk_77c == data_ov004_0224006c[i]) {
            return i;
        }
    }
    return -1;
}

void Unk_ov004_0224aadc::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (func_020b52f8()) {
            if (func_ov004_02208894()) {
                func_ov004_0220fae8(1);
            } else {
                func_ov004_0220fae8(6);
            }
        } else {
            func_ov004_0220fae8(6);
        }
        break;
    case 8:
        func_ov004_0220fae8(0);
        break;
    }
}

void Unk_ov004_0224aadc::func_ov004_0220fc70() {
    func_ov004_022059b0(f_760, 1);
    if (func_ov004_02208980()) {
        vfunc_70(0, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fca0() {
    func_ov004_02205c44(f_73c, 1, 0);
    func_ov004_02209108();
    if (unk_77c == 0xf) {
        func_ov004_02208ba8(1, 1, 0x1000, 0);
    } else {
        func_ov004_02208a18(0, 3, 0x1000);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fcf4() {
    func_ov004_022059b0(f_760, 1);
    if (func_ov004_02206f8c()) {
        vfunc_70(3, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fd24() {
    func_ov004_02205c44(f_73c, 0, 0);
    if (unk_77c == 0xf) {
        func_ov004_022063c8(func_ov004_02206be4(f_6c8), 0);
        func_ov004_02208a18(0, 1, 0x1000);
    } else {
        func_ov004_02208a18(0, 1, 0x1000);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fd7c() {
    func_ov004_022059b0(f_760, 1);
    if (func_ov004_02208980()) {
        vfunc_70(2, 0xff);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fdac() {
    func_ov004_02205c44(f_73c, 0, 0);
    func_ov004_02209150();
    func_ov004_02208ba8(0, 1, 0x1000, 0);
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220fde4() {
    s32 t;
    u32 i;
    func_ov004_022059b0(f_760, 0);
    void *e = func_ov004_02235464(func_ov004_022354d8(), this);
    if (func_ov004_02205c6c(f_73c) && e != NULL && func_ov004_022354e8(e) == 0) {
        if (unk_77c == 0xb) {
            Unk_ov004_0220fde4_Arr arr;
            Unk_ov004_0220fde4_Vec v;
            func_ov004_02207c40(&arr, 0, 0);
            v.x = 0;
            v.y = 0;
            v.z = 0x2000;
            func_020e93a0(&v, *(s16 *)((u8 *)this + 0x8e));
            volatile Unk_ov004_0220fde4_Pos p;
            p.x = 0;
            p.y = 0;
            p.x = v.x >> 13;
            p.y = v.z >> 13;
            for (i = 0; i < arr.func_ov004_0220652c(); i++) {
                s32 a = p.x + arr.func_ov004_02206520(i)->x;
                t = p.y + arr.func_ov004_02206520(i)->y;
                if (func_ov004_02234f80(a, t) != 0 || func_0202fff0(a, t) != -1) {
                    func_ov004_02205c44(f_73c, 1, 0);
                    return;
                }
            }
        }
        func_0203d704(this, 0);
        func_02094f20();
    } else {
        if (func_ov004_02206f8c()) {
            vfunc_70(1, 0xff);
        }
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_0220fef8() {
    func_ov004_02205c44(f_73c, 1, 0);
    if (unk_77c == 0xf) {
        func_ov004_02208a18(1, 1, 0x1000);
    } else {
        func_ov004_02208ba8(0, 3, 0x1000, 0);
    }
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_0220ff44() {
    static Unk_ov004_0220ff44_Fn tbl[4] = {
        &Unk_ov004_0224aadc::func_ov004_0220fde4,
        &Unk_ov004_0224aadc::func_ov004_0220fd7c,
        &Unk_ov004_0224aadc::func_ov004_0220fcf4,
        &Unk_ov004_0224aadc::func_ov004_0220fc70,
    };
    if (unk_85c < 4) {
        (this->*tbl[unk_85c])();
    }
}

BOOL Unk_ov004_0224aadc::vfunc_70(s32 a, s32 b) {
    func_ov004_0220878c();
    static Unk_ov004_0220ffd0_Fn tbl[4] = {
        &Unk_ov004_0224aadc::func_ov004_0220fef8,
        &Unk_ov004_0224aadc::func_ov004_0220fdac,
        &Unk_ov004_0224aadc::func_ov004_0220fd24,
        &Unk_ov004_0224aadc::func_ov004_0220fca0,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_85c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov004_0224aadc::vfunc_74(u32 a) {
    if (a < 4) {
        return data_ov004_02240048[a];
    }
    return 0;
}

BOOL Unk_ov004_0224aadc::vfunc_a0() {
    if (Unk_ov004_0224882c::vfunc_a0()) {
        if (unk_860 == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_0224aadc::vfunc_0c() {
    return TRUE;
}

BOOL Unk_ov004_0224aadc::vfunc_80() {
    func_ov004_0220f9ec();
    func_ov004_0220ff44();
    return TRUE;
}

BOOL Unk_ov004_0224aadc::vfunc_7c() {
    func_ov004_022059b0(f_760, 0);
    if (unk_768 == 1) {
        func_ov004_02205c44(f_73c, 1, 0);
    }
    if (unk_77c == 0xf) {
        func_ov004_02208de0(0, 1, 0x1000, 0);
    } else {
        func_ov004_02208de0(0, 3, 0x1000, 0);
    }
    if (func_ov004_02205c7c(f_73c) || func_ov004_02234ad4()) {
        vfunc_70(0, 0xff);
    } else {
        vfunc_70(2, 0xff);
    }
    func_ov004_0220fae8(0);
    return TRUE;
}

Unk_ov004_0224aadc::~Unk_ov004_0224aadc() {
}

Unk_ov004_0224aadc::Unk_ov004_0224aadc() {
    unk_85c = 0;
}

extern "C" void func_ov004_0221020c() {
    new Unk_ov004_0224aadc;
}

void Unk_ov004_0224aadc::func_ov004_02210228() {
    u32 r = func_020aa514(func_020679b4(unk_128));
    if (unk_840.unk_14 == 1) {
        switch (r) {
        case 0:
            func_02067a84(unk_128, data_021edb5c, 0);
            vfunc_70(6, 0xff);
            break;
        case 1:
            vfunc_70(5, 0xff);
            break;
        }
    } else {
        switch (r) {
        case 0:
            func_02067a84(unk_128, data_021edb5c, 0);
            vfunc_70(0xa, 0xff);
            break;
        case 1:
            func_02067a84(unk_128, data_021edb5c, 0);
            vfunc_70(9, 0xff);
            break;
        }
    }
}

void Unk_ov004_0224aadc::func_ov004_022102c0() {
    if (unk_10a == 0) {
        u32 o = unk_128;
        u32 h = func_020679b4(o);
        func_020aa680(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = data_021edb5c[0];
        func_020aa638(h, 0, &buf[0], 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = data_021edb5c[0];
        func_020aa638(h, 1, &buf[2], 1, &buf[3], 0, 0);
        func_020aa608(h);
        func_020679c0(o, 1);
    }
    if (unk_10a == 0x19) {
        vfunc_70(5, 0xff);
    }
}

void Unk_ov004_0224aadc::func_ov004_02210364(s32 a) {
    switch (a) {
    case 0:
    case 1:
        if (unk_840.unk_14 == 1) {
            vfunc_70(2, 0xff);
        } else {
            vfunc_70(7, 0xff);
        }
        break;
    case 8:
        vfunc_70(1, 0xff);
        break;
    }
}

void Unk_ov004_0224aadc::func_ov004_022103ac() {
    if (unk_840.unk_08 < 0x16) {
        unk_840.unk_08++;
    }
    if (unk_840.unk_08 == 0x16) {
        func_0203e47c(this, static_cast<Unk_ov004_022488d8 *>(this));
        func_0203d67c(this);
        func_020ed188(this);
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_022103ec() {
    unk_840.unk_08 = 0;
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_022103fc() {
    if (func_ov004_022057b0()) {
        s32 r4 = unk_840.unk_0c;
        s32 r6 = unk_840.unk_10;
        if (unk_780 == 2) {
            if (unk_840.unk_02 != 0) {
                r4++;
            }
        }
        u32 t = func_02053228(&unk_840.unk_18);
        if (unk_840.unk_02 != 0) {
            if (t == 2) {
                r4--;
            }
        }
        u32 c = func_0204b25c(&unk_840.unk_18);
        func_ov004_02209d58(r4, r6, c, 3, 0, 1);
        if (func_ov004_02235028()) {
            vfunc_70(0xd, 0xff);
        }
    }
}

BOOL Unk_ov004_0224aadc::func_ov004_02210488() {
    func_ov004_0220711c(&unk_840.unk_0c, &unk_840.unk_10, 0, 0);
    func_ov004_02205814();
    return TRUE;
}

void Unk_ov004_0224aadc::func_ov004_022104b8() {
    if (func_0206ec6c()) {
        if (func_0206ed18() == 0) {
            func_0203e47c(this, static_cast<Unk_ov004_022488d8 *>(this));
            func_0203d67c(this);
        } else {
            u32 r4 = func_0206ed38();
            unk_840.unk_18 = func_02099048();
            void *p = func_0209750c();
            if (p) {
                func_020986d8(p, &unk_840.unk_18);
            }
            u16 v = func_0204b248(func_ov004_022087a4(), 0);
            func_0209909c(&v, 0, r4);
            vfunc_70(0xc, 0xff);
        }
    }
}
