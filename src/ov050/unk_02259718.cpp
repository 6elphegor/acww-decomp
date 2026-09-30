#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov050_022598e0_Buf {
    u8 a;
    u8 b;
    u8 pad[6];
};

class Unk_ov050_0225e4b4;
typedef void (Unk_ov050_0225e4b4::*Unk_ov050_02259838_Fn)(s32);

struct Unk_ov050_02259838_Row {
    u32 id;
    Unk_ov050_02259838_Fn fn;
};

// Object at dialog +0xb0
struct Unk_ov050_02259a68_Obj {
    u8 pad_00[0x72e];
    u16 unk_72e;
    u32 unk_730;
    u32 unk_734;
    u8 unk_738;
};

extern "C" {
extern s32 data_ov050_0225da40[];
extern u8 data_ov050_0225e1d4[];
extern u8 data_ov050_0225e1c4[];
extern u8 data_ov050_0225e1a4[];
extern u8 data_021ed29c;
extern u8 data_021d735c;

s32 func_02014220(void *p);
s32 func_0201ad68(void *self, s32 v, s32 w);
void func_0201adc8(void *self, s32 v);
s32 func_0201ade4(void *self, s32 v);
void func_0201ad4c(void *self, s32 v);
void func_02099014(void *p, s32 v);
void func_0209750c();
s32 func_0209888c(...);
void func_02097740(void *a, s32 b);
void *func_020b50e8();
void func_020aca4c(void *a, void *b, void *c, void *d);
void func_020787b0();
s32 func_02098ffc();
void func_02099064();
s32 func_020aa514();
void func_02067a84(void *o, void *p, void *q);
s32 func_0202e148();
s32 func_020aca18();
s32 func_0209cef4();
s32 func_0208653c(void *p);
void func_02015958(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 func_0202e18c(void *a, void *b, s32 c);
void func_0202e174(void *a, void *b);
s32 func_ov050_02258ed0(void *p);
void func_020acb28(void *p);
void func_0206eb38(s32 v);
s32 func_0204b2d4(void *p);
u16 func_0204b25c(void *p);
void func_ov004_0223fcd4();
void func_ov004_0223fcb4();
void func_020342cc(void *a, s32 b, s32 c, s32 d);
void func_02034250(void *a, s32 b, s32 c, s32 d);
void func_020341f4(s32 a);
void func_020341c0(s32 a);
void func_0203a5ac();
void func_020ac948(void *p);
void func_0203d704(void *p, s32 v);
void func_0201517c(void *self, void *fn, u32 b, u32 c);
s32 func_020151d0(void *self, s32 a);
void func_ov050_0225c180();
void func_02014ce4(void *self, u16 *a, u32 b, u32 c, u32 d);
}

// Menu-state machine base
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
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
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    s32 func_02015a5c();
};


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
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
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
MEMBER(Unk_02014254, 0x28);
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
    u8 pad_04[0x58];
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
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov050_0225e400 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov050_0225e400();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_58();

    BOOL func_ov050_022590d8();

    s32 unk_654;
};

class Unk_ov050_0225e4b4 : public Unk_02015b54 {
public:
    Unk_ov050_0225e4b4();
    virtual ~Unk_ov050_0225e4b4();
    virtual void vfunc_14();
    virtual void vfunc_18();

    void func_ov050_02259808(s32 p);
    void func_ov050_02259838();
    s32 func_ov050_0225978c();
    void func_ov050_022598e0();
    void func_ov050_022599f8(s32 p);
    void func_ov050_02259a14(s32 p);
    void func_ov050_02259a30(s32 p);
    void func_ov050_02259a4c(s32 p);
    void func_ov050_02259a68(s32 p);
    void func_ov050_02259af0(s32 p);
    void func_ov050_02259b2c(s32 p);
    void func_ov050_02259bb8(s32 p);
    void func_ov050_02259cac(s32 p);
    void func_ov050_02259d48(s32 p);
    void func_ov050_02259d90(s32 p);
    void func_ov050_02259e38(s32 p);
    void func_ov050_02259e4c(s32 p);
    void func_ov050_02259e80(s32 p);
    void func_ov050_02259f18();

    // out of range
    void func_ov050_0225a288(s32 a, s32 b);
    void func_ov050_0225c000(s32 v);
    void func_ov050_0225c4fc(s32 v);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov050_02259a68_Obj *unk_b0;
    /* 0xb4 */ u8 pad_b4[0xbc - 0xb4];
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ void *unk_c0;
    /* 0xc4 */ u8 pad_c4[4];
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ u8 pad_d0[4];
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov050_0225e400

BOOL Unk_ov050_0225e400::vfunc_58() {
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov050_0225e400::vfunc_48() {
    if (unk_64 < data_ov050_0225da40[2]) {
        return FALSE;
    }
    if (func_02014220(&unk_618) != 0 || func_0201b9bc() != 0 || func_ov050_022590d8() != 0) {
        return FALSE;
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_ov050_02259bb8_Match(u16 *p) {
    BOOL r;
    if (func_0204b2d4(p) != 0) {
        u16 v = 0xfff1;
        s32 a = func_0204b25c(p);
        if (a == func_0204b25c(&v)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_ov050_0225e4b4::func_ov050_02259808(s32 p) {
    func_0209750c();
    if (p == 0) {
        if (func_02098ffc() >= 0) {
            unk_cc = 0x25;
        } else {
            unk_cc = 0x17;
        }
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259838() {
    func_02015a5c();
    s32 t = func_020aa514();
    unk_cc = 0xff;
    static Unk_ov050_02259838_Row tbl[1] = {
        {0x22, &Unk_ov050_0225e4b4::func_ov050_02259808},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 1) {
        goto loop;
    }
    if (unk_cc != 0xff) {
        u8 b = unk_cc;
        func_02067a84(unk_3c, &b, data_ov050_0225e1d4);
    }
}

void Unk_ov050_0225e4b4::func_ov050_022598e0() {
    func_02015a5c();
    s32 t = func_020aa514();
    func_0209750c();
    u8 *g = &data_021ed29c;
    s32 lv = unk_1e;
    if (lv <= 0x14) {
        Unk_ov050_022598e0_Buf buf;
        unk_cc = 0xff;
        if (t != 3) {
            func_ov050_0225c000(5);
        }
        switch (t) {
        case 0:
            unk_cc = 7;
            break;
        case 1:
            if (func_0202e148() == 0) {
                unk_cc = 0x59;
            } else if (func_020aca18() != 0) {
                unk_cc = 0x18;
            } else {
                unk_cc = 0x17;
            }
            break;
        case 2:
            if (func_0209cef4() != 0) {
                s32 r = func_0208653c(g);
                func_02015958(this, r, 1, 3, 1, 0);
                unk_cc = 0x16;
            } else {
                unk_cc = 0xd;
            }
            break;
        case 3:
            if (func_ov050_02258ed0(unk_b0) != 0) {
                if (func_0202e18c(unk_b0, &buf, 3) != 0) {
                    func_0202e174(unk_b0, &buf);
                }
            }
            break;
        case 4:
            unk_cc = 0x15;
            break;
        }
        s32 c = unk_cc;
        if (c != 0xff) {
            buf.b = c;
            func_02067a84(unk_3c, &buf.b, data_ov050_0225e1c4);
        }
    }
}

void Unk_ov050_0225e4b4::func_ov050_022599f8(s32 p) {
    if (p != 4) {
        func_ov050_0225a288(3, p);
        unk_cc = 0x48;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259a14(s32 p) {
    if (p != 4) {
        func_ov050_0225a288(2, p);
        unk_cc = 0x48;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259a30(s32 p) {
    if (p != 4) {
        func_ov050_0225a288(1, p);
        unk_cc = 0x48;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259a4c(s32 p) {
    if (p != 4) {
        func_ov050_0225a288(0, p);
        unk_cc = 0x48;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259a68(s32 p) {
    if (p == 0) {
        switch (func_0201ad68(unk_b0, (s32)unk_c0, unk_bc)) {
        case 0:
            func_0201ad4c(unk_b0, (s32)unk_c0);
            func_020acb28(unk_c0);
            unk_cc = 0x12;
            break;
        case 1:
            func_020acb28(unk_c0);
            unk_cc = 0x13;
            break;
        case 2:
            unk_cc = 0x5d;
            func_0206eb38(0);
            break;
        }
    } else {
        if (unk_1e != 0x40) {
            func_0206eb38(0);
        } else {
            func_0206eb38(1);
        }
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259af0(s32 p) {
    if (p == 0) {
        if (unk_c8 >= 0) {
            u16 v;
            func_02099064();
            v = 0x36fc;
            func_02014ce4(this, &v, 0, 5, 0);
        }
        unk_cc = 0x37;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259b2c(s32 p) {
    if (p == 0) {
        if (func_0201ade4(unk_b0, (s32)unk_c0) == 0) {
            unk_cc = 0x21;
        } else {
            Unk_ov050_02259a68_Obj *o;
            unk_cc = 0x22;
            unk_b0->unk_738 = 1;
            func_0201adc8(unk_b0, (s32)unk_c0);
            func_0209750c();
            func_02097740(&data_021d735c, func_0209888c());
            o = unk_b0;
            func_020aca4c((void *)o->unk_730, (void *)o->unk_734, unk_c0, func_020b50e8());
        }
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259bb8(s32 p) {
    if (p == 0) {
        if (func_02098ffc() < 0) {
            unk_cc = 0x20;
        } else if (func_0201ade4(unk_b0, (s32)unk_c0) == 0) {
            unk_cc = 0x21;
        } else {
            unk_cc = 0x22;
            func_ov050_0225978c();
        }
    } else if (p == 1) {
        u16 *q = &unk_b0->unk_72e;
        if (!Unk_ov050_02259bb8_Match(q)) {
            BOOL r = FALSE;
            u32 v = unk_b0->unk_72e;
            if (v < 0x1100 || v > 0x1143) {
            } else {
                r = TRUE;
            }
            if (r) {
                func_ov004_0223fcd4();
                func_020342cc(&unk_b0->unk_72e, 0, 1, 1);
            } else {
                func_ov004_0223fcb4();
                func_02034250(&unk_b0->unk_72e, 0, 1, 1);
            }
        }
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259cac(s32 p) {
    u16 *q = &unk_b0->unk_72e;
    if (!Unk_ov050_02259bb8_Match(q)) {
        BOOL r = FALSE;
        u32 v = unk_b0->unk_72e;
        if (v < 0x1100 || v > 0x1143) {
        } else {
            r = TRUE;
        }
        if (r) {
            func_020341f4(1);
        } else {
            func_020341c0(1);
        }
        func_0203a5ac();
    }
    func_ov050_02259d48(p);
}

void Unk_ov050_0225e4b4::func_ov050_02259d90(s32 p) {
    if (p == 0) {
        if (func_0201ade4(unk_b0, (s32)unk_c0) != 0) {
            func_0201adc8(unk_b0, (s32)unk_c0);
            unk_cc = 0x1c;
            u16 *q = &unk_b0->unk_72e;
            if (!Unk_ov050_02259bb8_Match(q)) {
                func_020ac948(&unk_b0->unk_72e);
            }
        } else {
            unk_cc = 0x1d;
        }
    } else {
        unk_cc = 0x1b;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259e38(s32 p) {
    if (p != 0) {
        func_0206eb38(0);
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259e4c(s32 p) {
    if (p == 0) {
        func_0201517c(this, (void *)func_ov050_0225c180, 0xd, 0);
        func_020151d0(this, 0);
        func_ov050_0225c4fc(2);
    } else {
        unk_cc = 0xf;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259e80(s32 p) {
    func_0209750c();
    switch (p) {
    case 0:
        unk_cc = 7;
        break;
    case 1:
        if (func_0202e148() == 0) {
            unk_cc = 0x59;
        } else if (func_020aca18() != 0) {
            unk_cc = 0x18;
        } else {
            unk_cc = 0x17;
        }
        break;
    case 2:
        if (func_0209cef4() != 0) {
            s32 r = func_0208653c(&data_021ed29c);
            func_02015958(this, r, 1, 3, 1, 0);
            unk_cc = 0x16;
        } else {
            unk_cc = 0xd;
        }
        break;
    case 3:
        unk_cc = 0x15;
        break;
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259f18() {
    func_02015a5c();
    s32 t = func_020aa514();
    unk_cc = 0xff;
    static Unk_ov050_02259838_Row tbl[37] = {
        {0x00, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x02, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x05, &Unk_ov050_0225e4b4::func_ov050_02259e4c},
        {0x06, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x08, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x0a, &Unk_ov050_0225e4b4::func_ov050_02259e38},
        {0x0b, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x0c, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x0e, &Unk_ov050_0225e4b4::func_ov050_02259a68},
        {0x0f, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x11, &Unk_ov050_0225e4b4::func_ov050_02259a68},
        {0x12, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x17, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x19, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x1a, &Unk_ov050_0225e4b4::func_ov050_02259d90},
        {0x1b, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x1c, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x1d, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x1e, &Unk_ov050_0225e4b4::func_ov050_02259d48},
        {0x2a, &Unk_ov050_0225e4b4::func_ov050_02259d48},
        {0x2b, &Unk_ov050_0225e4b4::func_ov050_02259bb8},
        {0x2c, &Unk_ov050_0225e4b4::func_ov050_02259cac},
        {0x2e, &Unk_ov050_0225e4b4::func_ov050_02259b2c},
        {0x31, &Unk_ov050_0225e4b4::func_ov050_02259d48},
        {0x35, &Unk_ov050_0225e4b4::func_ov050_02259af0},
        {0x40, &Unk_ov050_0225e4b4::func_ov050_02259a68},
        {0x42, &Unk_ov050_0225e4b4::func_ov050_02259a4c},
        {0x43, &Unk_ov050_0225e4b4::func_ov050_02259a4c},
        {0x44, &Unk_ov050_0225e4b4::func_ov050_02259a30},
        {0x45, &Unk_ov050_0225e4b4::func_ov050_02259a14},
        {0x46, &Unk_ov050_0225e4b4::func_ov050_022599f8},
        {0x47, &Unk_ov050_0225e4b4::func_ov050_02259a4c},
        {0x55, &Unk_ov050_0225e4b4::func_ov050_02259a4c},
        {0x56, &Unk_ov050_0225e4b4::func_ov050_02259a4c},
        {0x58, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x59, &Unk_ov050_0225e4b4::func_ov050_02259e80},
        {0x5d, &Unk_ov050_0225e4b4::func_ov050_02259e80},
    };
    u32 i = 0;
    u8 *pe = &unk_1e;
    goto test;
loop:
    {
        u32 id = *(u32 *)((u8 *)tbl + i * 12);
        u32 cur = *pe;
        if (id == cur) {
            (this->*tbl[i].fn)(t);
        }
    }
    i++;
test:
    if (i < 37) {
        goto loop;
    }
    if (unk_cc != 0xff) {
        u8 *str = func_ov050_02258ed0(unk_b0) != 0 ? data_ov050_0225e1c4 : data_ov050_0225e1a4;
        u8 b = unk_cc;
        func_02067a84(unk_3c, &b, str);
    }
}

void Unk_ov050_0225e4b4::func_ov050_02259d48(s32 p) {
    if (p == 0) {
        if (func_02098ffc() < 0) {
            unk_cc = 0x20;
        } else if (func_0201ade4(unk_b0, (s32)unk_c0) == 0) {
            unk_cc = 0x21;
        } else {
            unk_cc = 0x22;
            func_ov050_0225978c();
        }
    }
}

s32 Unk_ov050_0225e4b4::func_ov050_0225978c() {
    Unk_ov050_02259a68_Obj *o;
    unk_b0->unk_738 = 1;
    func_0201adc8(unk_b0, (s32)unk_c0);
    func_02099014(&unk_b0->unk_72e, 0);
    func_0209750c();
    func_02097740(&data_021d735c, func_0209888c());
    o = unk_b0;
    func_020aca4c((void *)o->unk_730, (void *)o->unk_734, unk_c0, func_020b50e8());
    func_020787b0();
}
