#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};



extern "C" {
extern u8 data_ov122_0229a180[];
extern u8 data_ov122_0229a030[];
void func_020ed188(void *p);
u32 func_020ed174();
void func_ov090_02291d8c(u32 a, u32 b);
void func_ov090_02291d2c(u32 a);
void func_ov090_02291a90(u32 a);
u32 func_0206ec48();
void func_0206ec54(u32 a);
void func_0206e63c();
BOOL func_0206e61c();
BOOL func_0206ef00();
void func_0200152c(u32 a);
void func_0200151c(u32 a);
void func_02001724(u32 a, u32 b);
void func_020016b0(u32 a);
void func_020021b8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020021fc(u32 a, u32 b, u32 c);
void func_02087e70(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_02088730(u32 a, void *b, u32 c, void *d, s32 e, s32 f, s32 g);
void func_0208dae8(void *a, u32 b, u32 c);
void func_ov002_02201b28(void *p);
void func_0206fca8(void *p);
}

class Unk_ov122_020b8800 {
public:
    Unk_ov122_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov122_0206fcc8 {
public:
    Unk_ov122_0206fcc8();
    ~Unk_ov122_0206fcc8();
    u32 unk_00[0x40 / 4];
};

// 0xc0: ov095 list/text object, size 0x22f4 + 0x48 + 0x80 = 0x23bc
class Unk_ov122_ov095_02293b60 {
public:
    Unk_ov122_ov095_02293b60() : unk_22f4(), unk_233c() {}
    void func_ov095_02293b60(u32 a, void *b, u32 c);
    void func_ov095_02293824(u32 a, void *b);
    void func_ov095_022937d0(u32 a, void *b, u32 c);
    void func_ov095_0229253c(s32 a, s32 b);
    void func_ov095_022938f8(s32 a, s32 b, s32 c);
    u32 unk_00[0x22f4 / 4];
    Unk_ov122_020b8800 unk_22f4[2];
    Unk_ov122_0206fcc8 unk_233c[2];
};

class Unk_ov122_0206d438 {
public:
    Unk_ov122_0206d438();
    u32 unk_00[0x210 / 4];
};

class Unk_ov122_02202f88 {
public:
    Unk_ov122_02202f88();
    virtual ~Unk_ov122_02202f88();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202e60();
    u32 unk_04[0x44 / 4];
};

class Unk_ov122_02202658 {
public:
    Unk_ov122_02202658();
    virtual ~Unk_ov122_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 a, s32 b);
    u32 unk_04[0x60 / 4];
};

class Unk_ov122_0206cb5c {
public:
    Unk_ov122_0206cb5c();
    u32 unk_00[0x94 / 4];
};

class Unk_ov122_02065370 {
public:
    Unk_ov122_02065370();
    u32 unk_00[0x138 / 4];
};

class Unk_ov122_022024a0 {
public:
    Unk_ov122_022024a0();
    u32 unk_00[0x2f4 / 4];
};

class Unk_ov122_02203994 {
public:
    Unk_ov122_02203994();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov122_02204400 {
public:
    Unk_ov122_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov122_0229a1b8;
typedef void (Unk_ov122_0229a1b8::*Unk_ov122_0229a1b8_Fn)();

// Vtable 0x0229a1b8, size 0x4664
class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    Unk_ov122_0229a1b8()
        : unk_c0(), unk_3c7c(), unk_3e8c(), unk_3ed4(), unk_3f38(), unk_3fcc(),
          unk_4104(), unk_43f8(), unk_455c() {}
    virtual ~Unk_ov122_0229a1b8();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // in range
    void func_ov122_02299870();
    BOOL func_ov122_022998b0(s32 a);
    BOOL func_ov122_02299900();
    void func_ov122_022999b0();

    // callees in other groups
    void func_ov122_02296968(u32 mask);
    void func_ov122_02296978(u32 mask);
    BOOL func_ov122_02296988(u32 mask);
    void func_ov122_0229699c();
    void func_ov122_02296a28();
    void func_ov122_02296c70();
    void func_ov122_02296d68();
    BOOL func_ov122_02296de4();
    void func_ov122_02296df4(s32 v);
    void func_ov122_022992c4();
    void func_ov122_02299268();
    void func_ov122_022992d4();
    void func_ov122_02299308();
    void func_ov122_02299334();
    void func_ov122_02299368();

    // state-table targets (0x8d table)
    void func_ov122_02298d84();
    void func_ov122_02298d30();
    void func_ov122_02298cf4();
    void func_ov122_02298c94();
    void func_ov122_02298c24();
    void func_ov122_02298b70();
    void func_ov122_022984f4();
    void func_ov122_022984c8();
    void func_ov122_022983ec();
    void func_ov122_02298394();
    void func_ov122_0229836c();
    void func_ov122_02298320();
    void func_ov122_02298210();
    void func_ov122_0229819c();
    void func_ov122_0229816c();
    void func_ov122_0229813c();
    void func_ov122_02298118();
    void func_ov122_022980dc();
    void func_ov122_022980b0();
    void func_ov122_02297f98();
    void func_ov122_02297f04();
    void func_ov122_02297eb4();
    void func_ov122_02297e84();
    void func_ov122_02297e50();
    void func_ov122_02297d78();
    void func_ov122_02297c90();
    void func_ov122_02297c68();
    // state-table targets (0x8c table)
    void func_ov122_022997d0();
    void func_ov122_02299774();
    void func_ov122_02299738();
    void func_ov122_022996d8();
    void func_ov122_02299694();
    void func_ov122_02299644();
    void func_ov122_02299614();
    void func_ov122_022995d0();
    void func_ov122_022995c0();
    void func_ov122_02299594();
    void func_ov122_02299534();
    void func_ov122_022994f4();
    void func_ov122_022994c8();
    void func_ov122_02299474();
    void func_ov122_02299408();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u32 unk_a4;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac[0xb2 - 0xac];
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3[0xc0 - 0xb3];
    /* 0x00c0 */ Unk_ov122_ov095_02293b60 unk_c0;
    /* 0x247c */ u32 unk_247c[(0x3c7c - 0x247c) / 4];
    /* 0x3c7c */ Unk_ov122_0206d438 unk_3c7c;
    /* 0x3e8c */ Unk_ov122_02202f88 unk_3e8c;
    /* 0x3ed4 */ Unk_ov122_02202658 unk_3ed4;
    /* 0x3f38 */ Unk_ov122_0206cb5c unk_3f38;
    /* 0x3fcc */ Unk_ov122_02065370 unk_3fcc;
    /* 0x4104 */ Unk_ov122_022024a0 unk_4104;
    /* 0x43f8 */ Unk_ov122_02203994 unk_43f8;
    /* 0x455c */ Unk_ov122_02204400 unk_455c;
};

void Unk_ov122_0229a1b8::func_ov122_02299870() {
    func_ov090_02291d8c(func_020ed174(), 7);
    func_ov122_02296df4(0);
    func_ov122_02296968(4);
    unk_8c = 0xd;
    func_ov002_02200a60(1);
    func_ov122_02296c70();
    func_ov122_0229699c();
}

BOOL Unk_ov122_0229a1b8::func_ov122_022998b0(s32 a) {
    u32 r6 = func_020ed174();
    if (a != -1 && a != 8) {
        u32 r7 = func_0206ec48();
        func_ov090_02291d8c(r6, (u8)a);
        func_0206ec54(r7);
        unk_8c = 2;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov122_0229a1b8::func_ov122_02299900() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            func_ov122_02299870();
            return TRUE;
        case 5:
        case 7:
        case 8:
        case 10:
            break;
        }
    }
    return FALSE;
}

BOOL Unk_ov122_0229a1b8::vfunc_5c() {
    func_ov122_02296a28();
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_58() { return TRUE; }

BOOL Unk_ov122_0229a1b8::vfunc_54() { return TRUE; }

BOOL Unk_ov122_0229a1b8::vfunc_50() {
    if (func_ov122_02299900()) {
        return TRUE;
    }
    func_ov122_02299308();
    func_ov122_022999b0();
    func_ov122_022992d4();
    return TRUE;
}

void Unk_ov122_0229a1b8::func_ov122_022999b0() {
    static Unk_ov122_0229a1b8_Fn tbl[27] = {
        &Unk_ov122_0229a1b8::func_ov122_02298d84, &Unk_ov122_0229a1b8::func_ov122_02298d30,
        &Unk_ov122_0229a1b8::func_ov122_02298cf4, &Unk_ov122_0229a1b8::func_ov122_02298c94,
        &Unk_ov122_0229a1b8::func_ov122_02298c24, &Unk_ov122_0229a1b8::func_ov122_02298b70,
        &Unk_ov122_0229a1b8::func_ov122_022984f4, &Unk_ov122_0229a1b8::func_ov122_022984c8,
        &Unk_ov122_0229a1b8::func_ov122_022983ec, &Unk_ov122_0229a1b8::func_ov122_02298394,
        &Unk_ov122_0229a1b8::func_ov122_0229836c, &Unk_ov122_0229a1b8::func_ov122_02298320,
        &Unk_ov122_0229a1b8::func_ov122_02298210, &Unk_ov122_0229a1b8::func_ov122_0229819c,
        &Unk_ov122_0229a1b8::func_ov122_0229816c, &Unk_ov122_0229a1b8::func_ov122_0229813c,
        &Unk_ov122_0229a1b8::func_ov122_02298118, &Unk_ov122_0229a1b8::func_ov122_022980dc,
        &Unk_ov122_0229a1b8::func_ov122_022980b0, &Unk_ov122_0229a1b8::func_ov122_02297f98,
        &Unk_ov122_0229a1b8::func_ov122_02297f04, &Unk_ov122_0229a1b8::func_ov122_02297eb4,
        &Unk_ov122_0229a1b8::func_ov122_02297e84, &Unk_ov122_0229a1b8::func_ov122_02297e50,
        &Unk_ov122_0229a1b8::func_ov122_02297d78, &Unk_ov122_0229a1b8::func_ov122_02297c90,
        &Unk_ov122_0229a1b8::func_ov122_02297c68};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov122_0229a1b8::vfunc_4c() {
    static Unk_ov122_0229a1b8_Fn tbl[15] = {
        &Unk_ov122_0229a1b8::func_ov122_022997d0, &Unk_ov122_0229a1b8::func_ov122_02299774,
        &Unk_ov122_0229a1b8::func_ov122_02299738, &Unk_ov122_0229a1b8::func_ov122_022996d8,
        &Unk_ov122_0229a1b8::func_ov122_02299694, &Unk_ov122_0229a1b8::func_ov122_02299644,
        &Unk_ov122_0229a1b8::func_ov122_02299614, &Unk_ov122_0229a1b8::func_ov122_022995d0,
        &Unk_ov122_0229a1b8::func_ov122_022995c0, &Unk_ov122_0229a1b8::func_ov122_02299594,
        &Unk_ov122_0229a1b8::func_ov122_02299534, &Unk_ov122_0229a1b8::func_ov122_022994f4,
        &Unk_ov122_0229a1b8::func_ov122_022994c8, &Unk_ov122_0229a1b8::func_ov122_02299474,
        &Unk_ov122_0229a1b8::func_ov122_02299408};
    func_ov122_022992c4();
    (this->*tbl[unk_8c])();
    func_ov122_02299268();
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_24() {
    func_ov002_02201b28(&unk_4104);
    if (func_ov122_02296988(1)) {
        u8 *p = unk_94 + 0x60;
        func_02087e70(1, data_ov122_0229a180, 0x80, p - 0x10, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        unk_c0.func_ov095_02293b60(0x80, p, 1);
        unk_c0.func_ov095_02293824(0x80, p);
        if (func_0206ef00()) {
            func_02088730(1, data_ov122_0229a030, 0x80, p, -1, 1, 0);
        }
        unk_c0.func_ov095_022937d0(0x80, p, unk_a4);
    }
    if (func_ov122_02296de4()) {
        func_ov122_02296d68();
        func_020021fc(4, 0, unk_b2);
        func_020021fc(3, 0, unk_b2);
        if (unk_b2 > 0x40) {
            if (!func_ov122_02296988(0x20)) {
                func_ov122_02296978(0x20);
                func_0200152c(1);
                func_02001724(0x1d, 1);
                func_020016b0(0x1f);
                func_020021b8(2, 0, 0xb0, 0xfe, 0xc0);
            }
        } else if (func_ov122_02296988(0x20)) {
            func_ov122_02296968(0x20);
            func_0200151c(1);
        }
    }
    if (func_ov122_02296988(1)) {
        func_0208dae8(&unk_3e8c, 0x64, (u32)(unk_94 - 0x58) + (unk_b2 >> 1));
        s32 t = unk_3e8c.func_ov002_02202e84();
        unk_c0.func_ov095_0229253c(t, unk_3e8c.func_ov002_02202e60());
        unk_3e8c.vfunc_08();
    }
    if (func_0206ef00()) {
        if (func_ov122_02296988(0x200)) {
            s32 t = unk_3e8c.func_ov002_02202e84();
            unk_3ed4.func_ov002_02202a40(t, unk_3e8c.func_ov002_02202e60());
        }
        unk_3ed4.func_ov002_02202844();
    }
    if (func_ov122_02296988(1)) {
        unk_43f8.func_ov002_022036a4((s32)unk_94);
    }
    if (func_ov122_02296988(2)) {
        unk_43f8.func_ov002_022036a4(unk_98);
    }
    if (func_ov122_02296988(4)) {
        s32 a = unk_9c;
        s32 b = unk_a0 - unk_b2;
        unk_ab = unk_ab + 1;
        if ((unk_ab & 0x10) != 0) {
            unk_c0.func_ov095_022938f8(a, b, 3);
        }
    }
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_0c() {
    u32 t = func_020ed174();
    func_ov090_02291d2c(t);
    func_ov090_02291a90(t);
    func_ov122_02299334();
    return TRUE;
}

BOOL Unk_ov122_0229a1b8::vfunc_00() {
    func_ov122_02299368();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov122_0229a1b8 *func_ov122_02299f40() { return new Unk_ov122_0229a1b8(); }

Unk_ov122_0229a1b8::~Unk_ov122_0229a1b8() {}
