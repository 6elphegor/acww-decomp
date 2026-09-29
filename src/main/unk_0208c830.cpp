#include "types.h"
#include "text/Unk_02050288.h"

class Unk_020e2a08 {
public:
    Unk_020e2a08();
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

class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();
};

extern "C" {
Unk_020e2a90 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_020e2a90 *obj);
BOOL func_0203e2f4();
BOOL func_02095154(s32 a, s32 b);
BOOL func_0206f11c();
BOOL func_0206edb0();
s32 func_0206edbc();
void func_02087e70(u32 a, s32 h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern u32 data_020cf5d8;
extern u8 data_021c4938[];
extern u8 data_021c48fc[];
extern u8 data_020e416c;

struct Unk_020d467c_Entry {
    u32 unk_00;
    u32 unk_04;
};
extern Unk_020d467c_Entry data_020d467c[];

// Animation player
class Unk_02089140 {
public:
    Unk_02089140();
    ~Unk_02089140();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 i);
    s32 func_02089228(s32 i);
    s32 func_02089248();
    void func_02089264(s32 v);
    void func_02089268(void *p);

    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
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

// 0x18 bytes: 3-character text buffer
class Unk_020e0edc : public Unk_020e2a78 {
public:
    Unk_020e0edc();
    virtual ~Unk_020e0edc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[3];
};

class Unk_020e0f64 : public Unk_020e0db4 {
public:
    Unk_020e0f64();
    virtual ~Unk_020e0f64();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208c830();
    void func_0208c89c();
    void func_0208c910();
    void func_0208c978();
    void func_0208c9e0();
    void func_0208ca48();
    void func_0208cab0();
    void func_0208cb18();
    void func_0208cb80();
    u32 func_0208cbb4();
    void func_0208cc50();
    void func_0208cc78();
    void func_0208ccbc();
    void func_0208ccd4();
    void func_0208ccdc();
    void func_0208cd00();
    void func_0208cd4c();
    void func_0208cd70();
    BOOL func_0208cd78();
    void func_0208cd88();
    void func_0208cd90();
    void func_0208cdb8();
    void func_0208cdc8();
    void func_0208cdd8();
    void func_0208cde0();
    void func_0208c478();
    void func_0208c488();
    void func_0208c51c();
    void func_0208c7fc();

    /* 0x0c */ Unk_02089140 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ Unk_020e2a90 *unk_28;
    /* 0x2c */ Unk_020e2a90 *unk_2c;
    /* 0x30 */ Unk_020e2a90 *unk_30;
    /* 0x34 */ Unk_020e2a90 *unk_34;
    /* 0x38 */ Unk_020e2a90 *unk_38;
    /* 0x3c */ Unk_020e2a90 *unk_3c;
    /* 0x40 */ Unk_020e2a90 *unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u16 unk_60;
    /* 0x62 */ u16 unk_62;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ Unk_020e0edc unk_68;
    /* 0x80 */ Unk_020e0edc unk_80;
    /* 0x98 */ Unk_020e0edc unk_98;
    /* 0xb0 */ Unk_020e0edc unk_b0;
};

void Unk_020e0f64::func_0208c830() {
    if (unk_28 != NULL) {
        func_020a7fd8(unk_28);
        unk_28 = NULL;
    }
    if (unk_2c != NULL) {
        func_020a7fd8(unk_2c);
        unk_2c = NULL;
    }
    if (unk_30 != NULL) {
        func_020a7fd8(unk_30);
        unk_30 = NULL;
    }
    if (unk_34 != NULL) {
        func_020a7fd8(unk_34);
        unk_34 = NULL;
    }
    if (unk_38 != NULL) {
        func_020a7fd8(unk_38);
        unk_38 = NULL;
    }
    if (unk_3c != NULL) {
        func_020a7fd8(unk_3c);
        unk_3c = NULL;
    }
    if (unk_40 != NULL) {
        func_020a7fd8(unk_40);
        unk_40 = NULL;
    }
}

void Unk_020e0f64::func_0208c89c() {
    if (unk_40 == NULL) {
        unk_40 = func_020a8054(unk_4f != 0 ? 0xd8 : 0x8c, 1, 2);
        Unk_020e2a90 *o = unk_40;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_40->unk_10 = data_020cf5d8;
            unk_40->unk_50 = 2;
            unk_40->unk_55 = 1;
            unk_40->unk_28 = (Unk_02050288_Font *)data_021c4938;
            unk_40->func_02050c44();
            unk_40->unk_39 = 0;
            unk_40->unk_38 = 9;
            unk_40->func_02050c68(0);
        }
    }
}

void Unk_020e0f64::func_0208c910() {
    if (unk_3c == NULL) {
        unk_3c = func_020a8054(unk_4f != 0 ? 0xf6 : 0xaa, 2, 1);
        Unk_020e2a90 *o = unk_3c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_3c->unk_50 = 2;
            unk_3c->unk_55 = 1;
            unk_3c->unk_39 = 0;
            unk_3c->unk_38 = 9;
            unk_3c->unk_28 = (Unk_02050288_Font *)data_021c48fc;
            unk_3c->func_02050c90();
            unk_4d = 1;
        }
    }
}

void Unk_020e0f64::func_0208c978() {
    if (unk_38 == NULL) {
        unk_38 = func_020a8054(unk_4f != 0 ? 0xf4 : 0xa8, 2, 1);
        Unk_020e2a90 *o = unk_38;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 9;
            unk_38->unk_28 = (Unk_02050288_Font *)data_021c48fc;
            unk_38->func_02050c90();
            unk_4c = 1;
        }
    }
}

void Unk_020e0f64::func_0208c9e0() {
    if (unk_34 == NULL) {
        unk_34 = func_020a8054(unk_4f != 0 ? 0xd4 : 0x88, 2, 1);
        Unk_020e2a90 *o = unk_34;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_34->unk_50 = 2;
            unk_34->unk_55 = 1;
            unk_34->unk_39 = 0;
            unk_34->unk_38 = 9;
            unk_34->unk_28 = (Unk_02050288_Font *)data_021c48fc;
            unk_34->func_02050c90();
            unk_4b = 1;
        }
    }
}

void Unk_020e0f64::func_0208ca48() {
    if (unk_30 == NULL) {
        unk_30 = func_020a8054(unk_4f != 0 ? 0x9a : 0x86, 2, 2);
        Unk_020e2a90 *o = unk_30;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_30->unk_50 = 2;
            unk_30->unk_55 = 1;
            unk_30->unk_39 = 0;
            unk_30->unk_38 = 0xa;
            unk_30->unk_28 = (Unk_02050288_Font *)data_021c4938;
            unk_30->func_02050c90();
            unk_4a = 1;
        }
    }
}

void Unk_020e0f64::func_0208cab0() {
    if (unk_2c == NULL) {
        unk_2c = func_020a8054(unk_4f != 0 ? 0x97 : 0x83, 3, 2);
        Unk_020e2a90 *o = unk_2c;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_2c->unk_50 = 2;
            unk_2c->unk_55 = 1;
            unk_2c->unk_39 = 0;
            unk_2c->unk_38 = 0xc;
            unk_2c->unk_28 = (Unk_02050288_Font *)data_021c4938;
            unk_2c->func_02050c90();
            unk_49 = 1;
        }
    }
}

void Unk_020e0f64::func_0208cb18() {
    if (unk_28 == NULL) {
        unk_28 = func_020a8054(unk_4f != 0 ? 0x94 : 0x80, 3, 2);
        Unk_020e2a90 *o = unk_28;
        if (o != NULL) {
            o->unk_2c = 4;
            unk_28->unk_50 = 2;
            unk_28->unk_55 = 1;
            unk_28->unk_39 = 0;
            unk_28->unk_38 = 0xc;
            unk_28->unk_28 = (Unk_02050288_Font *)data_021c4938;
            unk_28->func_02050c90();
            unk_48 = 1;
        }
    }
}

void Unk_020e0f64::func_0208cb80() {
    func_0208cb18();
    func_0208cab0();
    func_0208ca48();
    func_0208c9e0();
    func_0208c978();
    func_0208c910();
    func_0208c89c();
}

u32 Unk_020e0f64::func_0208cbb4() {
    u32 r = unk_4e;
    if (r != 0) {
        BOOL t = func_0203e2f4();
        BOOL a = func_02095154(2, 4);
        BOOL b = func_0206f11c();
        BOOL f5 = FALSE;
        if (t != 0 && b == 0) {
            f5 = TRUE;
        }
        BOOL f4 = FALSE;
        if (b == 0 && a == 0) {
            f4 = TRUE;
        }
        BOOL f7 = FALSE;
        if (t != 0 && b != 0) {
            BOOL x = func_0206edb0();
            s32 y = func_0206edbc();
            if (x != 0) {
                if (y < 0x1000) {
                    f7 = TRUE;
                }
            } else {
                f7 = TRUE;
            }
        }
        if (f5 || f4 || f7) {
            r = 0;
            if (f5 || f4) {
                unk_24 = 0x1e;
            } else {
                unk_24 = 1;
            }
        }
    } else {
        unk_24 = 10;
    }
    return r;
}

void Unk_020e0f64::func_0208cc50() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208c830();
        func_0208cd70();
    }
}

void Unk_020e0f64::func_0208cc78() {
    unk_20 = 3;
    s32 i = unk_4f != 0 ? 0x2a : 5;
    unk_0c.func_02089268((u8 *)data_020d467c + (i << 3));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f64::func_0208ccbc() {
    if (func_0208cbb4() == 0) {
        func_0208cc78();
    }
}

void Unk_020e0f64::func_0208ccd4() {
    unk_20 = 2;
}

void Unk_020e0f64::func_0208ccdc() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208ccd4();
    }
}

void Unk_020e0f64::func_0208cd00() {
    unk_20 = 1;
    func_0208c478();
    s32 i = unk_4f != 0 ? 0x29 : 4;
    unk_0c.func_02089268((u8 *)data_020d467c + (i << 3));
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    func_0208cb80();
}

void Unk_020e0f64::func_0208cd4c() {
    if (func_0208cbb4() != 0) {
        unk_24 = unk_24 - 1;
        if (unk_24 <= 0) {
            func_0208cd00();
        }
    }
}

void Unk_020e0f64::func_0208cd70() {
    unk_20 = 0;
}

BOOL Unk_020e0f64::func_0208cd78() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0f64::func_0208cd88() {
    unk_4e = 0;
}

void Unk_020e0f64::func_0208cd90() {
    unk_4e = 1;
    BOOL v = TRUE;
    if (data_020e416c != 1) {
        v = FALSE;
    }
    unk_4f = v ? 1 : 0;
}

void Unk_020e0f64::func_0208cdb8() {
    vfunc_08();
}

void Unk_020e0f64::func_0208cdc8() {
    vfunc_0c();
}

void Unk_020e0f64::func_0208cdd8() {
    func_0208c830();
}

void Unk_020e0f64::func_0208cde0() {
    unk_4e = 0;
    func_0208cd70();
}

typedef void (Unk_020e0f64::*Unk_020e0f64_Fn)();

void Unk_020e0f64::vfunc_0c() {
    static Unk_020e0f64_Fn tbl[4] = {&Unk_020e0f64::func_0208cd4c, &Unk_020e0f64::func_0208ccdc,
                                     &Unk_020e0f64::func_0208ccbc, &Unk_020e0f64::func_0208cc50};
    (this->*tbl[unk_20])();
    func_0208c51c();
    func_0208c7fc();
    if (unk_20 != 0) {
        func_0208c488();
    }
}

void Unk_020e0f64::vfunc_08() {
    if (unk_20 != 0) {
        s32 a = unk_0c.func_02089248();
        if (a != 0) {
            s32 x = unk_0c.func_02089228(-1);
            s32 y = unk_0c.func_02089210(-1);
            s32 bx = func_02089f68();
            s32 t = (unk_50 + 0x800) >> 12;
            s32 g = func_02089f64();
            s32 by = g + t;
            s32 f = unk_64 == 0 ? 0xf : 9;
            func_02087e70(0, a, bx + x, by + y, f, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020e0f64::~Unk_020e0f64() {
    unk_0c.func_020891bc();
    func_0208cdd8();
}

Unk_020e0f64::Unk_020e0f64()
    : unk_20(0), unk_24(0), unk_28(NULL), unk_2c(NULL), unk_30(NULL), unk_34(NULL), unk_38(NULL), unk_3c(NULL),
      unk_40(NULL), unk_44(0), unk_48(0), unk_49(0), unk_4a(0), unk_4b(0), unk_4c(0), unk_4d(0), unk_4e(0),
      unk_4f(0), unk_50(0), unk_54(0), unk_58(0), unk_5c(-1), unk_64(0) {
    unk_60 = 0;
    unk_62 = 0;
}


u8 *Unk_020e0edc::vfunc_0c() {
    return unk_12;
}

u32 Unk_020e0edc::vfunc_08() {
    return 3;
}

Unk_020e0edc::~Unk_020e0edc() {}

Unk_020e0edc::Unk_020e0edc() {
    func_020a7c3c();
}

class Unk_0208d0bc {
public:
    void func_0208d0bc();
    void func_0208d0d4();

    u32 pad_00[3];
    /* 0x0c */ s32 unk_0c;
    u32 pad_10[0x5c / 4];
    /* 0x6c */ Unk_020e2a90 *unk_6c;
};

void Unk_0208d0bc::func_0208d0bc() {
    if (unk_6c != NULL) {
        func_020a7fd8(unk_6c);
        unk_6c = NULL;
    }
}

void Unk_0208d0bc::func_0208d0d4() {
    if (unk_6c == NULL) {
        BOOL c = unk_0c == 4 ? TRUE : FALSE;
        s32 size = c ? 0x1c8 : (unk_0c << 6) + 0xc0;
        u8 t = c ? 0xe : 0xf;
        unk_6c = func_020a8054(size, 0x14, 2);
        Unk_020e2a90 *o = unk_6c;
        if (o != NULL) {
            o->unk_2c = 4;
            Unk_020e2a90 *p = unk_6c;
            p->unk_10 = (u32)((Unk_020e2a78 *)((u8 *)this + 0x38))->vfunc_0c();
            unk_6c->unk_50 = 2;
            unk_6c->unk_55 = 1;
            unk_6c->unk_39 = t;
            unk_6c->unk_38 = 0xd;
            unk_6c->func_02050c90();
        }
    }
}
