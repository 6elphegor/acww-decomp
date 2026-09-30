#include "types.h"

class Unk_ov068_02270110;
class Unk_ov068_0226a794;
class Unk_ov068_0226a890;

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_04[0x1c];
};

struct Unk_ov068_0226a940_Bits {
    u16 a : 7;
    u16 b : 4;
    u16 c : 5;
};

struct Unk_ov068_0226a940_Words {
    u32 a, b;
};

struct Unk_ov068_0226a940_Loc {
    u16 pad;
    u16 h;
};

struct Unk_ov068_02270110_B {
    u8 pad_00[0x1e];
};

struct Unk_ov068_0226acf8_Vec {
    s32 x, y, z;
};

class Unk_ov068_02270110_A {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    u8 pad_04[0xe8];
};

class Unk_ov068_02270110 : public Unk_ov068_02270110_A, public Unk_ov068_02270110_B {
public:
    /* 0x10a */ u8 unk_10a;
    /* 0x10b */ u8 pad_10b[0x138 - 0x10b];
    /* 0x138 */ u8 unk_138[0x1d4 - 0x138];
    /* 0x1d4 */ u8 unk_1d4[0x234 - 0x1d4];
    /* 0x234 */ u8 unk_234[0x2b0 - 0x234];
    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ s32 unk_2b4;
    /* 0x2b8 */ s32 unk_2b8;
    /* 0x2bc */ Unk_ov068_0226acf8_Vec unk_2bc;
    /* 0x2c8 */ u8 pad_2c8[0x2d4 - 0x2c8];
    /* 0x2d4 */ u16 unk_2d4;
    /* 0x2d6 */ u8 unk_2d6;
    /* 0x2d7 */ u8 unk_2d7;
    /* 0x2d8 */ u8 unk_2d8;

    BOOL func_ov068_0226b43c(s32 idx);
    void func_ov068_0226b5a4();
    void func_ov068_0226b624();
    s16 func_ov068_0226b694();
    s32 func_ov068_0226b788();

    void func_ov068_0226aa74();
    BOOL func_ov068_0226aac4();
    void func_ov068_0226aad4();
    BOOL func_ov068_0226ab1c();
    void func_ov068_0226ab60();
    BOOL func_ov068_0226aba4();
    void func_ov068_0226abc8();
    BOOL func_ov068_0226abf8();
    void func_ov068_0226ac3c();
    BOOL func_ov068_0226acc4();
    void func_ov068_0226acf8();
    BOOL func_ov068_0226ad74();
    BOOL func_ov068_0226ada0();
    BOOL func_ov068_0226adac();
    void func_ov068_0226adc4();
    BOOL func_ov068_0226ae64();
    void func_ov068_0226ae74();
    BOOL func_ov068_0226aebc();
    void func_ov068_0226aef0();
    BOOL func_ov068_0226af0c();
    void func_ov068_0226af10();
    BOOL func_ov068_0226b014();
    void func_ov068_0226b060();
    BOOL func_ov068_0226b084();
    BOOL func_ov068_0226b088();
    BOOL func_ov068_0226b094();
};

class Unk_ov068_0226a794 {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 unk_7f8;

    void func_ov068_0226a794();
    void func_ov068_0226a7a8();
    void func_ov068_0226a7e4();
    void func_ov068_0226a80c();
    void func_ov068_0226a838();
    void func_ov068_0226a83c();
    s32 func_ov068_0226a858(s32 a, s32 b);
    s32 func_0200e248(void *msg);
};

class Unk_ov068_0226a890 {
public:
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 pad_60[4];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x2cc - 0x90];
    /* 0x2cc */ u8 unk_2cc[0x7ec - 0x2cc];
    /* 0x7ec */ u32 unk_7ec;
    /* 0x7f0 */ u8 pad_7f0[0x7f8 - 0x7f0];
    /* 0x7f8 */ u32 unk_7f8;

    void func_ov068_0226a890();
    void func_ov068_0226a8a4();
    void func_ov068_0226a8e8();
    void func_ov068_0226a910();
    void func_ov068_0226a93c();
    void func_ov068_0226a940();
    s32 func_ov068_0226a9cc(s32 a, s32 b);
    s32 func_0200e248(void *msg);
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(s32 a, s32 b, s32 c);
    u8 pad_00[0x20];
};

extern "C" {
extern s16 data_ov068_02271088;
extern u8 data_021d7350[];
extern u8 data_ov068_02270250[];

s32 func_02056654(void *);
s32 func_020565e8(void *, s32);
u32 func_02007c08(void *, u32);
void func_0200cf04(void *, s32, s32);
void func_0200bd60(void *, s32, s32, s32);
void *func_020952c8();
void func_02010914(void *);
void func_0200f258(void *);
void func_02010358(void *, s32, s32, s32);
void func_0200ec1c(void *);
void *func_02010d20(void *);
void func_0209d498(void *);
void func_0209d164(void *, s32);
void func_0200f17c(void *, void *, void *);
void *func_02095774(s32);
void func_0203d984();
void *func_020b4934();
void func_020b4f58(void *, s32, s32, s32);
void *func_0209750c();
void *func_02098a58(void *);
void *func_020974f8();
void func_0209df30(void *, void *);
void func_ov009_0225b894(void *, s32);
void func_ov009_0225b8b0(void *, s32);
void func_020547e4(void *);
void func_02054720(void *, s32, s32, s32, s32, s32);
void func_02094574(s32, s32, s32);
void *func_02095204(s32);
s32 func_020e780c(s32, s32);
void *func_ov003_02218b40(s32);
s32 func_ov009_0225ba60(void *);
s32 func_02094b0c(void *, s32, s32);
s32 func_ov009_0225b9b8(void *);
void func_0203d990();
void func_ov003_02218d6c(s32);
s32 func_ov009_0225bbdc(void *, void *, void *);
void func_020b4bbc(void *, s32);
void *func_020b50e8(void *);
void func_020b49c4(void *, void *, void *, s32, s32, s32, s32);
void func_ov009_0225ba1c(void *);
s32 func_ov009_0225b980(void *);
s32 func_ov009_0225b974(void *);
s32 func_ov003_02212430(s32, void *, void *, s32);
s32 func_020951b8(s32);
u32 *func_02067918(s32);
void func_02067958(void *, u32);
void func_02065fb0(Unk_ov068_02270110_B &);
void func_020a710c(Unk_ov068_02270110_B &, void *);
s32 func_0209888c(...);
s32 func_0209411c(...);
void func_02067978(void *, void *);
void func_02094030(void *);
void func_020814ec(void *, void *);
void func_02065f90(Unk_ov068_02270110_B &, void *, s32);
void func_02094018(void *);
}

void Unk_ov068_0226a794::func_ov068_0226a794() {
    func_ov068_0226a7e4();
    func_ov068_0226a7a8();
}

void Unk_ov068_0226a794::func_ov068_0226a7a8() {
    if (func_02056654(unk_2cc) != 0) {
        unk_7f8 = func_02007c08(this, unk_7ec);
        func_0200cf04(this, 9, -1);
    }
}

void Unk_ov068_0226a794::func_ov068_0226a7e4() {
    func_02010914(this);
    if (func_020565e8(unk_2cc, 8) != 0) {
        func_0200f258(this);
    }
}

void Unk_ov068_0226a794::func_ov068_0226a80c() {
    unk_5c = unk_5c - 0x1c00;
    unk_64 = unk_64 + 0x2c00;
    unk_8e = unk_8e + 0x8000;
}

void Unk_ov068_0226a794::func_ov068_0226a838() {
}

void Unk_ov068_0226a794::func_ov068_0226a83c() {
    func_02010358(this, 0x83, 3, 0);
    unk_8e = 0;
}

s32 Unk_ov068_0226a794::func_ov068_0226a858(s32 a, s32 b) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(0x88, a, b);
    return func_0200e248(&m);
}

void Unk_ov068_0226a890::func_ov068_0226a890() {
    func_ov068_0226a8e8();
    func_ov068_0226a8a4();
}

void Unk_ov068_0226a890::func_ov068_0226a8a4() {
    if (func_02056654(unk_2cc) != 0) {
        unk_7f8 = func_02007c08(this, unk_7ec);
        func_0200bd60(this, 0, 5, -1);
        *(u8 *)func_020952c8() = 0;
    }
}

void Unk_ov068_0226a890::func_ov068_0226a8e8() {
    func_02010914(this);
    if (func_020565e8(unk_2cc, 0x16) != 0) {
        func_0200f258(this);
    }
}

void Unk_ov068_0226a890::func_ov068_0226a910() {
    unk_5c = unk_5c + 0x1c00;
    unk_64 = unk_64 - 0x2c00;
    unk_8e = unk_8e + 0x8000;
}

void Unk_ov068_0226a890::func_ov068_0226a93c() {
}

void Unk_ov068_0226a890::func_ov068_0226a940() {
    Unk_ov068_0226a940_Loc l;
    Unk_ov068_0226a940_Words w;
    func_02010358(this, 0x82, 0, 0);
    unk_8e = 0;
    func_0200ec1c(this);
    void *r4 = func_02010d20(this);
    if (r4 != 0) {
        Unk_ov068_0226a940_Bits bits;
        w.a = 0;
        w.b = 0;
        func_0209d498(&w);
        func_0209d164(&w, 1);
        bits.a = ((u8 *)&w)[5];
        bits.b = ((u8 *)&w)[4];
        bits.c = ((u8 *)&w)[3];
        func_0200f17c(this, r4, &bits);
    }
}

s32 Unk_ov068_0226a890::func_ov068_0226a9cc(s32 a, s32 b) {
    Unk_0200e2c0 m;
    m.func_0200e2c0(0x87, a, b);
    return func_0200e248(&m);
}

extern "C" s32 func_ov068_0226aa04() {
    Unk_ov068_0226a794 *p = (Unk_ov068_0226a794 *)func_02095774(4);
    if (p != 0) {
        p->unk_7f8 = func_02007c08(p, p->unk_7ec);
        return p->func_ov068_0226a858(6, -1);
    }
    return 0;
}

extern "C" s32 func_ov068_0226aa3c() {
    Unk_ov068_0226a890 *p = (Unk_ov068_0226a890 *)func_02095774(4);
    if (p != 0) {
        p->unk_7f8 = func_02007c08(p, p->unk_7ec);
        return p->func_ov068_0226a9cc(6, -1);
    }
    return 0;
}

void Unk_ov068_02270110::func_ov068_0226aa74() {
    if (data_ov068_02271088 == 0) {
        func_0203d984();
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        func_02098a58(func_0209750c());
        func_0209df30(data_021d7350, func_020974f8());
    }
    if (data_ov068_02271088 >= 0) {
        data_ov068_02271088 = data_ov068_02271088 - 1;
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226aac4() {
    data_ov068_02271088 = 0x41;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226aad4() {
    func_ov009_0225b894(unk_234, 0x889);
    if (func_02056654(unk_1d4) != 0) {
        func_ov068_0226b43c(0x10);
    }
    func_ov068_0226b5a4();
    func_020547e4(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226ab1c() {
    s32 r1 = func_ov068_0226b788();
    func_02054720(unk_138, r1, 1, 0x1000, 0, 0);
    func_ov009_0225b8b0(unk_234, 0x88b);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226ab60() {
    if (unk_2d6 == 0) {
        func_ov068_0226b43c(0xf);
    }
    if (unk_2d6 != 0) {
        func_02094574(0, 0, 4);
        unk_2d6 = unk_2d6 - 1;
    }
    func_020547e4(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226aba4() {
    unk_2d6 = 0x1e;
    if (func_ov068_0226aa04() != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226abc8() {
    if (func_02056654(unk_1d4) != 0) {
        func_ov068_0226b43c(0xe);
    }
    func_020547e4(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226abf8() {
    s32 r1 = vfunc_68();
    func_02054720(unk_138, r1, 1, 0x1000, 0, 0);
    func_ov009_0225b8b0(unk_234, 0x88a);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226ac3c() {
    func_ov009_0225b894(unk_234, 0x888);
    if (func_02056654(unk_1d4) != 0) {
        func_ov068_0226b43c(0xd);
    }
    func_ov068_0226b624();
    func_020547e4(unk_138);
    u8 *o = (u8 *)func_02095204(4);
    if (o != 0) {
        s32 r4 = *(s16 *)(o + 0x8e);
        if (func_020e780c(r4, func_ov068_0226b694()) < 0x1200) {
            func_02094574(0, (s16)(func_ov068_0226b694() - r4), 4);
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226acc4() {
    s32 r1 = vfunc_64();
    func_02054720(unk_138, r1, 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226acf8() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        if (func_ov009_0225ba60(q) != 0) {
            u8 *o = (u8 *)func_02095204(4);
            if (o != 0) {
                if (unk_2d7 == 0) {
                    Unk_ov068_0226acf8_Vec v;
                    Unk_ov068_0226acf8_Vec *pv = (Unk_ov068_0226acf8_Vec *)(o + 0x5c);
                    v.x = pv->x;
                    v.y = pv->y;
                    v.z = pv->z;
                    v.z = v.z + 0x4000;
                    if (func_02094b0c(&v, 0x400, 4) != 0) {
                        func_ov068_0226b43c(0xc);
                    }
                }
            }
            if (unk_2d7 != 0) {
                unk_2d7 = unk_2d7 - 1;
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226ad74() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        unk_2d7 = 0x10;
        return func_ov009_0225b9b8(q);
    }
    return TRUE;
}

BOOL Unk_ov068_02270110::func_ov068_0226ada0() {
    return func_ov068_0226b43c(0xb);
}

BOOL Unk_ov068_02270110::func_ov068_0226adac() {
    func_0203d990();
    func_ov003_02218d6c(1);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226adc4() {
    Unk_ov068_0226acf8_Vec v;
    s16 sv;
    if (unk_2d4 != 0) {
        unk_2d4 = unk_2d4 - 1;
    }
    if (unk_2d4 == 0) {
        void *q = func_ov003_02218b40(0x5000);
        if (q != 0) {
            if (func_ov009_0225bbdc(q, &v, &sv) != 0) {
                func_020b4bbc(func_020b4934(), 9);
                v.z = v.z + 0x1000;
                void *r4 = func_020b4934();
                void *r1 = func_020b50e8(r4);
                func_020b49c4(r4, r1, &v, 0xf000000, (s16)(sv + 0x8000), unk_2b4, unk_2b8);
                func_0203d984();
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226ae64() {
    unk_2d4 = 0x14;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226ae74() {
    void *q = func_ov003_02218b40(0x5000);
    if (q != 0) {
        func_ov009_0225ba1c(q);
        unk_2b4 = func_ov009_0225b980(q);
        unk_2b8 = func_ov009_0225b974(q);
        func_ov068_0226b43c(9);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226aebc() {
    if (func_ov003_02212430(1, &unk_2bc, &unk_2bc.z, -0x8000) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226aef0() {
    if (func_020951b8(4) == 0) {
        func_ov068_0226b43c(8);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226af0c() {
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226af10() {
    func_ov009_0225b894(unk_234, 0x889);
    func_ov068_0226b5a4();
    if (func_02056654(unk_1d4) != 0) {
        func_ov068_0226b43c(7);
    } else {
        func_020547e4(unk_138);
        u8 *o = (u8 *)func_02095204(4);
        if (o != 0) {
            s32 r4 = *(s16 *)(o + 0x8e);
            if (func_020e780c(r4, func_ov068_0226b694()) < 0x1200) {
                func_02094574(0, (s16)(func_ov068_0226b694() - r4), 4);
            } else {
                if (unk_2d8 < 0xc8) {
                    unk_2d8 = unk_2d8 + 1;
                }
                if (unk_2d8 == 0x10) {
                    void *q = func_ov003_02218b40(0x5000);
                    if (q != 0) {
                        s32 l0[1];
                        s32 l1[3];
                        if (func_ov009_0225bbdc(q, l1, l0) != 0) {
                            unk_2bc.x = l1[0];
                            unk_2bc.y = l1[1];
                            s32 *p = &unk_2bc.z;
                            *p = l1[2];
                            *p = *p + 0x200;
                            func_02094574(0, 0, 4);
                            func_02094b0c(&unk_2bc, 0x400, 4);
                        }
                    }
                }
            }
        }
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b014() {
    s32 r1 = func_ov068_0226b788();
    func_02054720(unk_138, r1, 1, 0x1000, 0, 0);
    func_ov009_0225b8b0(unk_234, 0x88b);
    unk_2d8 = 0;
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b060() {
    u32 *r = func_02067918(0);
    u32 t = r[1];
    if (t == 0) {
        func_02067958(r, t);
        func_ov068_0226b43c(6);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b084() {
    return TRUE;
}

BOOL Unk_ov068_02270110::func_ov068_0226b088() {
    return func_ov068_0226b43c(5);
}

BOOL Unk_ov068_02270110::func_ov068_0226b094() {
    u32 *rec = func_02067918(0);
    func_02065fb0(*this);
    func_020a710c(*this, data_ov068_02270250);
    BOOL r;
    if (func_0209750c() != 0 && (func_0209888c(), func_0209411c() == 1)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    unk_10a = r;
    func_02067978(rec, (Unk_ov068_02270110_B *)this);
    rec[2] = 1;
    Unk_ov068_0226a940_Loc l;
    Unk_020e1c64 o;
    l.h = 0xd014;
    func_020814ec(&o, &l.h);
    Unk_020e1c64 *po = (Unk_020e1c64 *)(u8 *)&o;
    func_02065f90(*this, po->vfunc_0c(), 0);
    return TRUE;
}
