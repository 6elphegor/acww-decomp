#include "types.h"

extern "C" {
extern u8 data_020d477c[];
extern u8 data_020d4784[];
extern u8 data_020d478c[];
extern u8 data_020d467c[];
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern s8 data_020cf614[];
extern s8 data_020cf615[];
extern u8 data_020cf628[];
extern u8 data_020cf629[];

BOOL func_0203d848();
BOOL func_0203d854();
void func_0203d860();
void func_0200402c(s32);
BOOL func_0206e61c();
void func_0206e660();
BOOL func_020a6df8();
BOOL func_020a6dec();
BOOL func_020a6fa4();
BOOL func_020a70d4();
void func_020a6e0c();
void func_020a6e18();
s32 func_020a6d94();
BOOL func_0203e2f4();
u32 func_02095134(s32);
void func_0203a1d0(u32, u32);
s32 func_02087e70(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
BOOL func_0208b634(void *);
BOOL func_0208b5e4(void *);
}

class Unk_02089140 {
public:
    u32 pad[5];
    Unk_02089140();
    ~Unk_02089140();
    void func_02089140();
    BOOL func_020891d8();
    void func_02089264(s32);
    void func_02089268(const void *);
    void func_020891bc();
    void func_020891d0();
    s32 func_02089248();
    s32 func_02089228(s32);
    s32 func_02089210(s32);
};

class Unk_0208b668 {
public:
    u32 pad[2];
    Unk_0208b668();
    ~Unk_0208b668();
    BOOL func_0208b668();
    BOOL func_0208b688();
    BOOL func_0208b698();
    void func_0208b6a8(s32);
    void func_0208b6b0();
    void func_0208b6d0();
    void func_0208b6e0();
    void func_0208b700();
};

class Unk_02089f64 {
public:
    u32 unk_04;
    u32 unk_08;
    Unk_02089f64();
    virtual ~Unk_02089f64();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    s32 func_02089f64();
    s32 func_02089f68();
};

class Unk_020e0f2c : public Unk_02089f64 {
public:
    Unk_02089140 unk_0c;
    s32 unk_20;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    Unk_0208b668 unk_28;

    Unk_020e0f2c();
    virtual ~Unk_020e0f2c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ac84();
    void func_0208aca8();
    void func_0208acd8();
    void func_0208ad00();
    void func_0208ad1c();
    void func_0208ad44();
    void func_0208ad74();
    void func_0208ad90();
    void func_0208adc8();
    void func_0208ae08();
    void func_0208ae48();
    void func_0208ae6c();
    void func_0208ae9c();
    void func_0208aeb4();
    void func_0208aebc();
    BOOL func_0208aefc(s32);
    BOOL func_0208afc0();
    BOOL func_0208b018();
    void func_0208b038();
    void func_0208b040();
    void func_0208b048();
    void func_0208b060();
    void func_0208b080();
    void func_0208b098();
};

typedef void (Unk_020e0f2c::*Unk_020e0f2c_Fn)();

static inline BOOL Unk_0208afc0_Range(u32 v, u32 lo, u32 n) {
    BOOL r = FALSE;
    if (v - lo <= n) r = TRUE;
    return r;
}

void Unk_020e0f2c::func_0208ac84() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208aeb4();
    }
}

void Unk_020e0f2c::func_0208aca8() {
    unk_20 = 6;
    unk_0c.func_02089268(data_020d4784);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208acd8() {
    if (unk_28.func_0208b698()) {
        func_0203d848();
        unk_24 = 0;
        func_0208ae08();
    }
}

void Unk_020e0f2c::func_0208ad00() {
    unk_20 = 5;
    unk_28.func_0208b6a8(0);
    func_0200402c(0x4b);
}

void Unk_020e0f2c::func_0208ad1c() {
    BOOL a = func_0208aefc(1);
    BOOL b = func_0206e61c();
    if (a || b) {
        func_0208ad00();
    }
}

void Unk_020e0f2c::func_0208ad44() {
    unk_20 = 4;
    unk_0c.func_02089268(data_020d478c);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208ad74() {
    if (unk_28.func_0208b688()) {
        func_0208ad44();
    }
}

void Unk_020e0f2c::func_0208ad90() {
    unk_20 = 3;
    unk_28.func_0208b6a8(1);
    unk_24 = 1;
    if (unk_25 != 0) {
        func_020a6e0c();
    } else {
        func_020a6e18();
    }
    func_0200402c(0x4a);
}

void Unk_020e0f2c::func_0208adc8() {
    if (func_0203d854()) {
        func_0206e660();
        func_0208ad90();
    } else if (!func_0208afc0()) {
        func_0208aca8();
    } else if (func_0208aefc(0)) {
        func_0203d860();
    }
}

void Unk_020e0f2c::func_0208ae08() {
    unk_20 = 2;
    unk_25 = 0;
    unk_0c.func_02089268(data_020d4784);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
    unk_0c.func_020891d0();
}

void Unk_020e0f2c::func_0208ae48() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        func_0208ae08();
    }
}

void Unk_020e0f2c::func_0208ae6c() {
    unk_20 = 1;
    unk_0c.func_02089268(data_020d477c);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208ae9c() {
    if (func_0208afc0()) {
        func_0208ae6c();
    }
}

void Unk_020e0f2c::func_0208aebc() {
    if (unk_24 != 0) {
        if (func_020a6df8()) {
            if (func_020a6fa4()) {
                func_020a6e0c();
            }
        } else if (func_020a6dec()) {
            if (func_020a70d4()) {
                func_020a6e18();
            }
        }
        func_020a6d94();
    }
}

BOOL Unk_020e0f2c::func_0208aefc(s32 flag) {
    BOOL r = FALSE;
    BOOL f = r;
    if (unk_24 != 0) {
        if (func_020a6df8()) {
            if (func_020a6fa4()) {
                f = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_020a70d4()) {
                f = TRUE;
            }
        }
    }
    if (!f) {
        if (unk_28.func_0208b668()) {
            u32 k = data_021f47d8[1];
            if ((k & 0x400) != 0 || (flag != 0 && (k & 2) != 0)) {
                r = TRUE;
                unk_25 = 1;
            } else {
                BOOL c;
                if (data_021f4770 != 0 && data_021f4774 != 0) {
                    c = TRUE;
                } else {
                    c = FALSE;
                }
                if (c) {
                    s32 a = data_021ef5f8;
                    if ((s32)data_021ef5f4 < 16 && a >= 0xc8 && a < 0xe8) {
                        r = TRUE;
                        unk_25 = 0;
                    }
                }
            }
        }
    }
    return r;
}

BOOL Unk_020e0f2c::func_0208afc0() {
    BOOL a;
    if (func_0203e2f4()) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    u32 v = func_02095134(4);
    BOOL b, c;
    if (v - 8 <= 7) b = TRUE; else b = FALSE;
    if (v - 0x24 <= 8) c = TRUE; else c = FALSE;
    BOOL r;
    if (unk_26 != 0 && !a && !b && !c) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL Unk_020e0f2c::func_0208b018() {
    if (unk_20 == 0 && unk_28.func_0208b698()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0f2c::func_0208b038() {
    unk_26 = 0;
}

void Unk_020e0f2c::func_0208b040() {
    unk_26 = 1;
}

void Unk_020e0f2c::vfunc_08() {
    if (unk_20 != 0) {
        s32 v = unk_0c.func_02089248();
        if (v != 0) {
            s32 x = unk_0c.func_02089228(-1);
            s32 y = unk_0c.func_02089210(-1);
            s32 bx = func_02089f68();
            s32 by = func_02089f64();
            s32 t = ((u32)(unk_20 - 3) <= 2) ? 6 : 5;
            func_02087e70(0, v, bx + x, by + y, t, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void Unk_020e0f2c::func_0208b048() {
    vfunc_08();
    unk_28.func_0208b6b0();
}

void Unk_020e0f2c::func_0208b060() {
    vfunc_0c();
    unk_28.func_0208b6d0();
    func_0208aebc();
}

void Unk_020e0f2c::func_0208b080() {
    unk_28.func_0208b6e0();
    unk_0c.func_020891bc();
}

void Unk_020e0f2c::func_0208b098() {
    unk_26 = 0;
    unk_24 = 0;
    unk_25 = 0;
    func_0208aeb4();
    unk_28.func_0208b700();
}

void Unk_020e0f2c::vfunc_0c() {
    static Unk_020e0f2c_Fn tbl[7] = {
        &Unk_020e0f2c::func_0208ae9c, &Unk_020e0f2c::func_0208ae48,
        &Unk_020e0f2c::func_0208adc8, &Unk_020e0f2c::func_0208ad74,
        &Unk_020e0f2c::func_0208ad1c, &Unk_020e0f2c::func_0208acd8,
        &Unk_020e0f2c::func_0208ac84,
    };
    (this->*tbl[unk_20])();
}

Unk_020e0f2c::~Unk_020e0f2c() {
    func_0208b080();
}

Unk_020e0f2c::Unk_020e0f2c() : unk_20(0), unk_24(0), unk_25(0), unk_26(0) {
}

void Unk_020e0f2c::func_0208aeb4() {
    unk_20 = 0;
}

class Unk_0208b294 {
public:
    u32 unk_00[3];
    Unk_02089140 unk_0c[9];
    s32 unk_c0;
    s32 unk_c4;
    s32 unk_c8;
    s32 unk_cc;
    s32 unk_d0;
    u8 unk_d4;

    void func_0208b294();
    void func_0208b2d8();
    void func_0208b324();
    void func_0208b380();
    void func_0208b388();
    void func_0208b3cc();
    void func_0208b418();
    void func_0208b430();
    void func_0208b438();
    void func_0208b464();
    void func_0208b4a4();
    BOOL func_0208b508();
};

void Unk_0208b294::func_0208b294() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089140 *o = &unk_0c[i];
        o->func_02089140();
        if (!o->func_020891d8()) {
            r = z;
        }
    }
    if (r) {
        func_0208b430();
    }
}

void Unk_0208b294::func_0208b2d8() {
    unk_c0 = 3;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089140 *o = &unk_0c[i];
        o->func_02089268(data_020d467c + (i + 0x17) * 8);
        o->func_02089264(1);
        o->func_020891bc();
    }
}

void Unk_0208b294::func_0208b324() {
    if (unk_d4 == 0) {
        func_0208b2d8();
    } else if (!func_0208b634(this)) {
        BOOL f = FALSE;
        if (func_020a6df8()) {
            if (func_0208b5e4(this)) {
                f = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_0208b508()) {
                f = TRUE;
            }
        }
        if (f) {
            func_0208b4a4();
        }
    }
}

void Unk_0208b294::func_0208b380() {
    unk_c0 = 2;
}

void Unk_0208b294::func_0208b388() {
    BOOL z = FALSE;
    BOOL r = TRUE;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089140 *o = &unk_0c[i];
        o->func_02089140();
        if (!o->func_020891d8()) {
            r = z;
        }
    }
    if (r) {
        func_0208b380();
    }
}

void Unk_0208b294::func_0208b3cc() {
    s32 one = 1;
    unk_c0 = one;
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_02089140 *o = &unk_0c[i];
        o->func_02089268(data_020d467c + (i + 0xe) * 8);
        o->func_02089264(one);
        o->func_020891bc();
    }
}

void Unk_0208b294::func_0208b418() {
    if (unk_d4 != 0) {
        func_0208b3cc();
    }
}

void Unk_0208b294::func_0208b430() {
    unk_c0 = 0;
}

void Unk_0208b294::func_0208b438() {
    unk_c8 = data_020cf614[unk_c4 * 2];
    unk_cc = data_020cf615[unk_c4 * 2];
}

void Unk_0208b294::func_0208b464() {
    s32 i = 0;
    while (i < 9) {
        s32 n = i * 2;
        s8 *e = data_020cf614 + n;
        if (unk_c8 == data_020cf614[n] && unk_cc == e[1]) break;
        i++;
    }
    unk_c4 = i;
}

void Unk_0208b294::func_0208b4a4() {
    func_0203a1d0(data_020cf629[unk_c4 * 2], data_020cf628[unk_c4 * 2]);
    s32 p = unk_d0;
    if (unk_c4 != p) {
        s32 a = data_020cf615[unk_c4 * 2];
        s32 b = data_020cf615[p * 2];
        s32 snd;
        if (a < b) {
            snd = 0x4d;
        } else if (a > b) {
            snd = 0x4c;
        } else {
            snd = 0x4e;
        }
        func_0200402c(snd);
        unk_d0 = unk_c4;
    }
}

BOOL Unk_0208b294::func_0208b508() {
    s32 ox = unk_c8;
    s32 oy = unk_cc;
    u32 k = data_021f47d8[1];
    if ((k & 0x10) != 0) {
        unk_c8 = unk_c8 + 1;
    } else if ((k & 0x20) != 0) {
        unk_c8 = unk_c8 - 1;
    } else if ((k & 0x40) != 0) {
        unk_cc = unk_cc - 1;
    } else if ((k & 0x80) != 0) {
        unk_cc = unk_cc + 1;
    }
    s32 t = unk_c8;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_c8 = t;
    t = unk_cc;
    if (t < -1) t = -1;
    else if (t > 1) t = 1;
    unk_cc = t;
    func_0208b464();
    if (ox != unk_c8 || oy != unk_cc) {
        return TRUE;
    }
    return FALSE;
}
