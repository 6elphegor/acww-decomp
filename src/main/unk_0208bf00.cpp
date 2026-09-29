#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
s32 func_0203e2f4();
s32 func_0206f11c();
s32 func_0206edb0();
s32 func_0206edbc();
void func_0209cf28(void *p);
void func_0209d224(void *p, s32 v);
void func_020b7878(s32 v);
void func_0208d084(void *p);
void func_0208d09c(void *p);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02038f10();
s32 func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_0209cfb8(void *p);
void func_0209cf18(void *p);
s32 func_0209cef4();
void func_020b3270(void *o, u8 a, s32 b, s32 c, s32 d, s32 e);
void func_020a7fd8(void *p);
}
extern s16 data_020cf5e4[];
extern u8 data_020e416c;
extern u8 data_020d467c[];
extern s32 data_020cf5dc[];
extern u16 data_020cf5f0[];

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    s32 func_020891d8();
    void func_02089264(s32 v);
    void func_02089268(void *p);
    void func_020891bc();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
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

class Unk_020e0edc {
public:
    Unk_020e0edc();
    ~Unk_020e0edc();
    u8 unk_00[0x18];
};

class Unk_020e0f10 : public Unk_020e0db4 {
public:
    Unk_020e0f10();
    virtual ~Unk_020e0f10();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    u8 func_0208bf00();
    void func_0208bf78();
    void func_0208bfa0();
    void func_0208bfe4();
    void func_0208bffc();
    void func_0208c004();
    void func_0208c028();
    void func_0208c074();
    void func_0208c08c();
    BOOL func_0208c094();
    BOOL func_0208c0b4();
    void func_0208c0c4();
    void func_0208c0cc();
    void func_0208c0f4();
    void func_0208c114();
    void func_0208c134(s32 a, s32 b);
    BOOL func_0208c1a4();
    void func_0208c1b4();
    void func_0208c1c4();
    void func_0208c1d4();
    void func_0208c1dc();

    void func_0208b908();
    void func_0208b924();
    void func_0208b9f0();
    void func_0208bcbc();
    void func_0208bcdc();
    void func_0208bee0();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ Unk_020e0edc unk_34;
    /* 0x4c */ Unk_020e0edc unk_4c;
    /* 0x64 */ Unk_020e0edc unk_64;
    /* 0x7c */ Unk_020e0edc unk_7c;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s32 unk_d0;
};

u8 Unk_020e0f10::func_0208bf00() {
    u8 r = unk_98;
    if (r != 0) {
        s32 a = func_0203e2f4();
        s32 b = func_0206f11c();
        BOOL c = FALSE;
        if (a != 0 && b == 0) c = TRUE;
        BOOL d = FALSE;
        if (a != 0 && b != 0) {
            s32 p = func_0206edb0();
            s32 q = func_0206edbc();
            if (p != 0) {
                if (q < 0x1000) d = TRUE;
            } else {
                d = TRUE;
            }
        }
        if (c != 0 || d != 0) {
            r = 0;
            if (c != 0) unk_b8 = r;
        }
    } else {
        unk_b8 = 0;
    }
    return r;
}

void Unk_020e0f10::func_0208bf78() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) {
        func_0208bcdc();
        func_0208c08c();
    }
}

void Unk_020e0f10::func_0208bfa0() {
    unk_20 = 3;
    s32 i;
    if (unk_99 != 0) i = 0x2c; else i = 0x27;
    unk_0c.func_02089268(data_020d467c + i * 8);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f10::func_0208bfe4() {
    if (func_0208bf00() == 0) func_0208bfa0();
}

void Unk_020e0f10::func_0208bffc() {
    unk_20 = 2;
}

void Unk_020e0f10::func_0208c004() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8() != 0) func_0208bffc();
}

void Unk_020e0f10::func_0208c028() {
    unk_20 = 1;
    func_0208b908();
    s32 i;
    if (unk_99 != 0) i = 0x2b; else i = 0x26;
    unk_0c.func_02089268(data_020d467c + i * 8);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    func_0208bee0();
}

void Unk_020e0f10::func_0208c074() {
    if (func_0208bf00() != 0) func_0208c028();
}

void Unk_020e0f10::func_0208c08c() {
    unk_20 = 0;
}

BOOL Unk_020e0f10::func_0208c094() {
    if (func_0208c1a4() != 0 && unk_b8 <= 0) return TRUE;
    return FALSE;
}

BOOL Unk_020e0f10::func_0208c0b4() {
    if (unk_20 == 0) return TRUE;
    return FALSE;
}

void Unk_020e0f10::func_0208c0c4() {
    unk_98 = 0;
}

void Unk_020e0f10::func_0208c0cc() {
    unk_98 = 1;
    BOOL t = TRUE;
    if (data_020e416c != 1) t = FALSE;
    unk_99 = (t != 0) ? 1 : 0;
}

void Unk_020e0f10::func_0208c0f4() {
    if (unk_a4 != 0) {
        unk_a0 = unk_a0 + 1;
        unk_97 = 1;
    }
}

void Unk_020e0f10::func_0208c114() {
    if (unk_a4 != 0) {
        unk_9c = unk_9c + 1;
        unk_96 = 1;
    }
}

void Unk_020e0f10::func_0208c134(s32 a, s32 b) {
    unk_a4 = a;
    unk_b8 = 0;
    if (a != 0) {
        func_0209cf28(&unk_a8);
        func_0209d224(&unk_a8, data_020cf5e4[a]);
        unk_9c = 0;
        unk_a0 = 0;
        unk_94 = 1;
        unk_95 = 1;
        unk_96 = 1;
        unk_97 = 1;
    }
    if (b == 0) {
        func_020b7878(a == 0 ? 2 : 1);
    }
}

BOOL Unk_020e0f10::func_0208c1a4() {
    if (unk_a4 == 0) return TRUE;
    return FALSE;
}

void Unk_020e0f10::func_0208c1b4() {
    vfunc_08();
}

void Unk_020e0f10::func_0208c1c4() {
    vfunc_0c();
}

void Unk_020e0f10::func_0208c1d4() {
    func_0208bcdc();
}

void Unk_020e0f10::func_0208c1dc() {
    unk_98 = 0;
    func_0208c08c();
}

extern u32 data_021ce668;
typedef void (Unk_020e0f10::*Unk_020e0f10_Fn)();

void Unk_020e0f10::vfunc_0c() {
    func_0208b9f0();
    static Unk_020e0f10_Fn tbl[4] = {&Unk_020e0f10::func_0208c074, &Unk_020e0f10::func_0208c004,
                                     &Unk_020e0f10::func_0208bfe4, &Unk_020e0f10::func_0208bf78};
    (this->*tbl[unk_20])();
    func_0208bcbc();
    if (unk_20 != 0) func_0208b924();
}

void Unk_020e0f10::vfunc_08() {
    if (unk_20 != 0) {
        void *p = unk_0c.func_02089248();
        if (p != 0) {
            s32 a = unk_0c.func_02089228(-1);
            s32 b = unk_0c.func_02089210(-1);
            s32 c = func_02089f68();
            s32 d = (unk_bc + 0x800) >> 12;
            s32 e = func_02089f64();
            e += d;
            func_02087e70(0, p, c + a, e + b, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020e0f10::~Unk_020e0f10() {
    unk_0c.func_020891bc();
    func_0208c1d4();
}

Unk_020e0f10::Unk_020e0f10() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0) {
    unk_94 = 0;
    unk_95 = 0;
    unk_96 = 0;
    unk_97 = 0;
    unk_98 = 0;
    unk_99 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_b4 = 0;
    unk_b8 = 0;
    unk_bc = 0;
    unk_c0 = 0;
    unk_c4 = 0;
    unk_c8 = -1;
    unk_cc = 0;
    unk_d0 = 0;
}

class Unk_0208c478_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    u8 unk_04[0x14];
};

class Unk_0208c478 {
public:
    void func_0208c478();
    void func_0208c488();
    void func_0208c51c();
    void func_0208c5d8();
    void func_0208c60c();
    void func_0208c664();
    void func_0208c6cc();
    void func_0208c714();
    void func_0208c754();
    void func_0208c7a4();
    void func_0208c7fc();
    s32 func_0208cbb4();

    /* 0x00 */ u8 unk_00[0x28];
    /* 0x28 */ Unk_02050288 *unk_28;
    /* 0x2c */ Unk_02050288 *unk_2c;
    /* 0x30 */ Unk_02050288 *unk_30;
    /* 0x34 */ Unk_02050288 *unk_34;
    /* 0x38 */ Unk_02050288 *unk_38;
    /* 0x3c */ Unk_02050288 *unk_3c;
    /* 0x40 */ Unk_02050288 *unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62;
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ Unk_0208c478_Obj unk_68;
    /* 0x80 */ Unk_0208c478_Obj unk_80;
    /* 0x98 */ Unk_0208c478_Obj unk_98;
    /* 0xb0 */ Unk_0208c478_Obj unk_b0;
};

void Unk_0208c478::func_0208c478() {
    unk_50 = 0;
    unk_54 = 0;
    unk_5c = -1;
    unk_58 = 0;
}

void Unk_0208c478::func_0208c488() {
    s32 a = func_02038f10();
    s32 b = func_0208cbb4();
    s32 t;
    if (a != 0 && b != 0) t = -0x14000; else t = 0;
    unk_58 = unk_58 + 0xa00;
    s32 v = unk_58;
    if (v < 0x2300) v = 0x2300; else if (v > 0x5000) v = 0x5000;
    unk_58 = v;
    if (t != unk_54) {
        s32 c = unk_5c;
        if (c < 0 || b == 0 || (unk_5c = c + 1, unk_5c > 10)) {
            unk_54 = t;
            unk_5c = 0;
        }
    } else {
        unk_5c = 0;
    }
    func_020e7870(&unk_50, unk_54, 0x600, unk_58, 0x2300);
}

void Unk_0208c478::func_0208c51c() {
    u16 v[2];
    func_0209cfb8(v);
    func_0209cf18(&v[1]);
    s32 t = func_0209cef4();
    if (v[0] != *(u16 *)&unk_60) {
        if (((u8 *)v)[1] != unk_61) unk_48 = 1;
        if (((u8 *)v)[0] != unk_60) unk_49 = 1;
        *(u16 *)&unk_60 = v[0];
    }
    if (v[1] != *(u16 *)&unk_62) {
        if (((u8 *)v)[3] != unk_63) {
            unk_4c = 1;
            unk_4b = 1;
        }
        if (((u8 *)v)[2] != unk_62) unk_4d = 1;
        *(u16 *)&unk_62 = v[1];
    }
    if (t != unk_64) {
        unk_4a = 1;
        unk_64 = t;
    }
}

void Unk_0208c478::func_0208c5d8() {
    if (unk_40 != 0) {
        unk_44 = unk_44 - 1;
        s32 t = unk_44;
        if (t <= 0) {
            unk_44 = 0x14;
            unk_40->func_02050c90();
        } else if (t == 8) {
            unk_40->func_02050c68(0);
        }
    }
}

void Unk_0208c478::func_0208c60c() {
    if (unk_3c != 0 && unk_4d != 0) {
        unk_4d = 0;
        func_020b3270(&unk_b0, unk_62, 2, 6, 0, 1);
        Unk_02050288 *t = unk_3c;
        t->unk_10 = unk_b0.vfunc_0c();
        unk_3c->func_02050c44();
        unk_3c->func_02050c90();
    }
}

void Unk_0208c478::func_0208c664() {
    if (unk_38 != 0 && unk_4c != 0) {
        unk_4c = 0;
        u8 c = unk_63;
        if (c >= 12) c = (u8)(c - 12);
        if (c == 0) c = 12;
        func_020b3270(&unk_98, c, 2, 0, 0, 1);
        Unk_02050288 *t = unk_38;
        t->unk_10 = unk_98.vfunc_0c();
        unk_38->func_02050c20();
        unk_38->func_02050c90();
    }
}

void Unk_0208c478::func_0208c6cc() {
    if (unk_34 != 0 && unk_4b != 0) {
        unk_4b = 0;
        s32 i = 0;
        if (unk_63 >= 12) i = 1;
        unk_34->unk_10 = data_020cf5dc[i];
        unk_34->func_02050c44();
        unk_34->func_02050c90();
    }
}

void Unk_0208c478::func_0208c714() {
    if (unk_30 != 0 && unk_4a != 0) {
        unk_4a = 0;
        u16 *e = &data_020cf5f0[unk_64];
        unk_30->unk_10 = (u32)e;
        unk_30->func_02050c44();
        unk_30->func_02050c90();
    }
}

void Unk_0208c478::func_0208c754() {
    if (unk_2c != 0 && unk_49 != 0) {
        unk_49 = 0;
        func_020b3270(&unk_80, unk_60, 2, 0, 0, 1);
        Unk_02050288 *t = unk_2c;
        t->unk_10 = unk_80.vfunc_0c();
        unk_2c->func_02050c90();
    }
}

void Unk_0208c478::func_0208c7a4() {
    if (unk_28 != 0 && unk_48 != 0) {
        unk_48 = 0;
        func_020b3270(&unk_68, unk_61, 2, 0, 0, 1);
        Unk_02050288 *t = unk_28;
        t->unk_10 = unk_68.vfunc_0c();
        unk_28->func_02050c20();
        unk_28->func_02050c90();
    }
}

void Unk_0208c478::func_0208c7fc() {
    func_0208c7a4();
    func_0208c754();
    func_0208c714();
    func_0208c6cc();
    func_0208c664();
    func_0208c60c();
    func_0208c5d8();
}
