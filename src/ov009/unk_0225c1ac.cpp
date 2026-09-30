#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void func_0203e47c(Unk_020e2a30 *a);
    void func_0203e488(Unk_020e2a30 *a);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov009_0225b880_Target {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

struct Unk_ov009_0225bbdc_Target {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

struct Unk_ov009_0225bf3c_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

struct Unk_ov009_0225c644_Msg {
    u32 v[4];
    Unk_ov009_0225c644_Msg() {}
};

// Scratch object of func_020b16bc / func_020b16a0 / func_020b16a4 / func_020b16b8
struct Unk_ov009_0225bce0_Pad {
    s32 v[2];
    Unk_ov009_0225bce0_Pad() {}
    ~Unk_ov009_0225bce0_Pad() {}
};

class Unk_ov009_0225bb0c_Tmp {
public:
    Unk_ov009_0225bb0c_Tmp(const u8 *src);
    ~Unk_ov009_0225bb0c_Tmp();
    s32 func_020b16a0();
    s32 func_020b16a4();

    u32 pad[4];
};

extern "C" {
extern u8 data_ov009_0225e3d8[];
extern u32 data_021c3070;
extern Unk_ov009_0225b880_Vec3 data_021c309c;
extern u8 data_020d0a7c[];

void func_02003e60(void *, u32, u32, u32);
void func_02003e70(void *, u32, u32, u32);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void func_020b1f64(void *);
void func_020547cc(void *, u32);
s32 func_020e7b98(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
void *func_02031ea0(void *);
s32 func_020b10c4(u32);
void func_020b10e0(u32);
BOOL func_0204b1a0(u16 *);
void func_020547e4(void *);
BOOL func_02056654(void *);
BOOL func_020565e8(void *, s32);
void func_02054720(void *, void *, s32, s32, s32, s32);
void func_0206da9c(void *, s32);
s32 func_02095180(s32, s32);
BOOL func_0203d978();
void func_0203d704(void *, s32);
s32 func_020b50b4();
s32 func_020b6014(s32, s32 *, u8 *);
s32 func_02095204(s32);
BOOL func_020b1d3c(u32, u32);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
void func_02066cf8(void *, u32);
void func_020b1040(u32, u32);
void func_020b101c();
void *func_020b4934();
void func_020b49b4();
s32 func_020e780c(s32, s32);
s32 func_020e9650(void *, void *);
s32 *func_020947f0(u32);
BOOL func_ov003_02212430(u32, s32 *, s32 *, s32);
BOOL func_020951d0();
void func_020949a0(u32);
BOOL func_020951c4();
void func_0203a5c4();
void func_0203d67c(void *);
BOOL func_ov003_0221249c(s32 *, s32 *, s16 *);
}

class Unk_020f43c8 {
public:
    virtual ~Unk_020f43c8();
};

// Vtable 0x0213b9c4 (ctor func_020f3e50 in main); its destructor is emitted in this overlay.
class Unk_0213b9c4 : public Unk_020f43c8 {
public:
    Unk_0213b9c4();
    virtual ~Unk_0213b9c4() {}

    /* 0x04 */ u8 pad_04[0x3c];
};

class Unk_ov009_0225b894 {
public:
    Unk_ov009_0225b894();

    void func_ov009_0225b894(u32 a);
    void func_ov009_0225b8b0(u32 a);
    void func_ov009_0225b8cc();
    void func_ov009_0225b8ec(Unk_ov009_0225b880_Vec3 *v);
    void func_ov009_0225b914();

    /* 0x00 */ Unk_0213b9c4 unk_00;
    /* 0x40 */ u8 unk_40;
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020e2a30 {
public:
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *vfunc_50();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void *vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual void vfunc_9c();
    virtual s32 vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual Unk_ov009_0225c644_Msg vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d650();
    s32 func_ov009_0225d7f0();
    s32 func_ov009_0225d720();
    s32 func_ov009_0225d788();
    BOOL func_ov009_0225c360(s32 a);
    BOOL func_ov009_0225c1ac();
    BOOL func_ov009_0225c248();
    void func_ov009_0225c288();
    BOOL func_ov009_0225c28c();
    void func_ov009_0225c290();
    void func_ov009_0225c440();
    BOOL func_ov009_0225c454();
    void func_ov009_0225c458();
    BOOL func_ov009_0225c46c();
    void func_ov009_0225c470();
    BOOL func_ov009_0225c4f4();
    void func_ov009_0225c538();
    BOOL func_ov009_0225c568();
    void func_ov009_0225c5d4();
    BOOL func_ov009_0225c644();
    void func_ov009_0225c7a8();
    BOOL func_ov009_0225c818();
    void func_ov009_0225c97c();
    BOOL func_ov009_0225ca50();
    void func_ov009_0225ca98();
    BOOL func_ov009_0225cb4c(s32 a);
    void func_ov009_0225d078(u32 a);
    void func_ov009_0225cf78(void *a);

    BOOL func_ov009_0225b998();
    BOOL func_ov009_0225b9b8();
    BOOL func_ov009_0225b9fc();
    BOOL func_ov009_0225ba1c();
    BOOL func_ov009_0225ba60();
    void func_ov009_0225ba74();
    BOOL func_ov009_0225baa4();
    void func_ov009_0225b964();
    u32 func_ov009_0225b974();
    u32 func_ov009_0225b980();
    u16 *func_ov009_0225b98c();
    s32 func_ov009_0225bb74();
    BOOL func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    void func_ov009_0225bc88();
    void func_ov009_0225beb0();
    BOOL func_ov009_0225bf08();
    void func_ov009_0225bf0c();
    BOOL func_ov009_0225bf28();
    void func_ov009_0225bf3c();
    BOOL func_ov009_0225c008();
    void func_ov009_0225c018();
    BOOL func_ov009_0225c054();
    void func_ov009_0225c0d8();
    BOOL func_ov009_0225c0f4();
    void func_ov009_0225c108();
    BOOL func_ov009_0225c14c();
    void func_ov009_0225c150();
    BOOL func_ov009_0225c17c();

    /* 0x10c */ u8 pad_10c[0x128 - 0x10c];
    /* 0x128 */ Unk_ov009_0225b880_Target *unk_128;
    /* 0x12c */ u8 pad_12c[2];
    /* 0x12e */ u16 unk_12e;
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[0x138 - 0x134];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ Unk_ov009_0225b894 unk_234;
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ Unk_ov009_0225bbdc_Target *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
};


typedef void (Unk_ov009_0225e29c::*Unk_ov009_0225c290_Fn)();
typedef BOOL (Unk_ov009_0225e29c::*Unk_ov009_0225c360_Fn)();

BOOL Unk_ov009_0225e29c::func_ov009_0225c1ac() {
    if (unk_27c == 0) {
        s32 r = func_020b10c4(unk_132);
        if (r != 0) {
            s32 v = (r == 2) ? 1 : 0;
            u8 *p = (u8 *)&unk_232;
            *p = (*p & ~2) | ((v & 1) << 1);
            unk_233 = (r == 3) ? 1 : 0;
            if (unk_232.f1 != 0 || unk_233 != 0) {
                func_ov009_0225c360(2);
            } else if (func_ov009_0225d650() == 1) {
                func_ov009_0225c360(7);
            } else {
                func_ov009_0225c360(4);
            }
        }
    } else {
        func_ov009_0225c360(2);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c248() {
    if (unk_27c == 0) {
        func_020b10e0(unk_132);
    }
    unk_232.f1 = 0;
    unk_233 = 0;
    return TRUE;
}

void Unk_ov009_0225e29c::func_ov009_0225c288() {}

BOOL Unk_ov009_0225e29c::func_ov009_0225c28c() { return TRUE; }

void Unk_ov009_0225e29c::func_ov009_0225c290() {
    static Unk_ov009_0225c290_Fn tbl[9] = {
        &Unk_ov009_0225e29c::func_ov009_0225c288, (Unk_ov009_0225c290_Fn)&Unk_ov009_0225e29c::func_ov009_0225c1ac,
        &Unk_ov009_0225e29c::func_ov009_0225c150, &Unk_ov009_0225e29c::func_ov009_0225c108,
        &Unk_ov009_0225e29c::func_ov009_0225c0d8, &Unk_ov009_0225e29c::func_ov009_0225c018,
        &Unk_ov009_0225e29c::func_ov009_0225bf3c, &Unk_ov009_0225e29c::func_ov009_0225bf0c,
        &Unk_ov009_0225e29c::func_ov009_0225beb0
    };
    if (unk_278 < 9) {
        (this->*tbl[unk_278])();
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c360(s32 a) {
    static Unk_ov009_0225c360_Fn tbl[9] = {
        &Unk_ov009_0225e29c::func_ov009_0225c28c, &Unk_ov009_0225e29c::func_ov009_0225c248,
        &Unk_ov009_0225e29c::func_ov009_0225c17c, &Unk_ov009_0225e29c::func_ov009_0225c14c,
        &Unk_ov009_0225e29c::func_ov009_0225c0f4, &Unk_ov009_0225e29c::func_ov009_0225c054,
        &Unk_ov009_0225e29c::func_ov009_0225c008, &Unk_ov009_0225e29c::func_ov009_0225bf28,
        &Unk_ov009_0225e29c::func_ov009_0225bf08
    };
    if (a < 9) {
        if ((this->*tbl[a])()) {
            unk_278 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c440() { vfunc_6c(0); }

BOOL Unk_ov009_0225e29c::func_ov009_0225c454() { return TRUE; }

void Unk_ov009_0225e29c::func_ov009_0225c458() { vfunc_6c(0); }

BOOL Unk_ov009_0225e29c::func_ov009_0225c46c() { return TRUE; }

void Unk_ov009_0225e29c::func_ov009_0225c470() {
    if (unk_12e != 0) {
        unk_12e--;
        if (unk_12e == 0) {
            if (func_0204b1a0(&unk_132)) {
                unk_234.func_ov009_0225b8b0(0x807);
            } else {
                unk_234.func_ov009_0225b8b0(0x809);
            }
        }
    }
    if (unk_12e == 0) {
        func_020547e4(unk_138);
        if (func_02056654(unk_1d4)) {
            vfunc_6c(0);
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c4f4() {
    unk_12e = 0x1a;
    void *r = vfunc_68();
    if (r) {
        func_02054720(unk_138, r, 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c538() {
    func_020547e4(unk_138);
    if (func_02056654(unk_1d4)) {
        vfunc_6c(4);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c568() {
    void *r = vfunc_64();
    if (r) {
        func_02054720(unk_138, r, 1, 0x1000, 0, 0);
        if (func_0204b1a0(&unk_132)) {
            unk_234.func_ov009_0225b8b0(0x806);
        } else {
            unk_234.func_ov009_0225b8b0(0x808);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c5d4() {
    func_020547e4(unk_138);
    if (func_02056654(unk_1d4)) {
        vfunc_6c(0);
    } else if (func_020565e8(unk_1d4, 0x12)) {
        unk_234.func_ov009_0225b8b0(0x7d3);
    } else if (func_020565e8(unk_1d4, 0x18)) {
        unk_234.func_ov009_0225b8b0(0x7d4);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c644() {
    void *r = vfunc_68();
    if (r != 0) {
        func_02054720(unk_138, r, 1, 0x1000, 0, 0);
        unk_234.func_ov009_0225b8b0(0x7d1);
        unk_234.func_ov009_0225b8b0(0x7d2);
        if (vfunc_98()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (func_0204b2d4(&unk_132)) {
                v[0] = 0x500d;
                if (func_0204b25c(&unk_132) == func_0204b25c(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (unk_132 == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (func_0204b2d4(&unk_132)) {
                    v[1] = 0x5000;
                    if (func_0204b25c(&unk_132) == func_0204b25c(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (unk_132 == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (func_0204b2d4(&unk_132)) {
                        v[2] = 0x500c;
                        if (func_0204b25c(&unk_132) == func_0204b25c(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (unk_132 == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225c644_Msg msg = vfunc_b4();
            func_0206da9c(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c7a8() {
    func_020547e4(unk_138);
    if (func_02056654(unk_1d4)) {
        vfunc_6c(0);
    } else if (func_020565e8(unk_1d4, 0x14)) {
        unk_234.func_ov009_0225b8b0(0x7d3);
    } else if (func_020565e8(unk_1d4, 0x1e)) {
        unk_234.func_ov009_0225b8b0(0x7d4);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c818() {
    void *r = vfunc_64();
    if (r != 0) {
        func_02054720(unk_138, r, 1, 0x1000, 0, 0);
        unk_234.func_ov009_0225b8b0(0x7d1);
        unk_234.func_ov009_0225b8b0(0x7d2);
        if (vfunc_98()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (func_0204b2d4(&unk_132)) {
                v[0] = 0x500d;
                if (func_0204b25c(&unk_132) == func_0204b25c(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (unk_132 == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (func_0204b2d4(&unk_132)) {
                    v[1] = 0x5000;
                    if (func_0204b25c(&unk_132) == func_0204b25c(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (unk_132 == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (func_0204b2d4(&unk_132)) {
                        v[2] = 0x500c;
                        if (func_0204b25c(&unk_132) == func_0204b25c(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (unk_132 == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225c644_Msg msg = vfunc_b4();
            func_0206da9c(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c97c() {
    if (func_02095180(0x13, 4) == 0 && func_0203d978() == 0) {
        s32 st = func_ov009_0225d650();
        s32 f = 0;
        if (st == 1 || st == 3) {
            if ((unk_231 & 4) != 0) {
                if (vfunc_8c() == 0) {
                    func_0203e42c();
                    unk_27c = 1;
                } else {
                    func_0203e42c();
                    unk_27c = 0;
                }
                func_0203d704(this, 0);
                f = 1;
            }
        }
        if ((unk_231 & 2) != 0 && f == 0) {
            s32 a = func_020b6014(func_020b50b4(), 0, 0);
            s32 b = func_02095204(4);
            if (b != 0 && b == a) {
                if (vfunc_8c() == 0) {
                    func_0203e42c();
                    unk_27c = 1;
                } else {
                    func_0203e42c();
                    unk_27c = 0;
                }
                func_0203d704(this, 0);
            }
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225ca50() {
    switch (func_ov009_0225d650()) {
    case 1:
    case 2: {
        void *r = vfunc_64();
        if (r == 0) {
            return FALSE;
        }
        func_02054720(unk_138, r, 0, 0x1000, 0, 0);
        break;
    }
    }
    return TRUE;
}

void Unk_ov009_0225e29c::func_ov009_0225ca98() {
    static Unk_ov009_0225c290_Fn tbl[7] = {
        &Unk_ov009_0225e29c::func_ov009_0225c97c, &Unk_ov009_0225e29c::func_ov009_0225c7a8,
        &Unk_ov009_0225e29c::func_ov009_0225c5d4, &Unk_ov009_0225e29c::func_ov009_0225c538,
        &Unk_ov009_0225e29c::func_ov009_0225c470, &Unk_ov009_0225e29c::func_ov009_0225c458,
        &Unk_ov009_0225e29c::func_ov009_0225c440
    };
    if (unk_130 < 7) {
        (this->*tbl[unk_130])();
    }
}
