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
    u8 rest : 7;
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
    virtual void vfunc_64();
    virtual void vfunc_68();
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
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d650();
    s32 func_ov009_0225d7f0();
    s32 func_ov009_0225d720();
    s32 func_ov009_0225d788();
    void func_ov009_0225c360(s32 a);
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
    /* 0x12c */ u8 pad_12c[4];
    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[0x138 - 0x134];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 pad_233[0x278 - 0x233];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ Unk_ov009_0225bbdc_Target *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
};

extern "C" {
s32 func_ov009_0225b880() { return 0; }
void func_ov009_0225b884(Unk_ov009_0225b880_Vec3 *out, Unk_020d5d84 *o) {
    out->x = o->unk_5c[0];
    out->y = o->unk_5c[1];
    out->z = o->unk_5c[2];
}
}

void Unk_ov009_0225b894::func_ov009_0225b894(u32 a) {
    if (unk_40 != 0) {
        func_02003e60(this, a, 0x7f, 0);
    }
}

void Unk_ov009_0225b894::func_ov009_0225b8b0(u32 a) {
    if (unk_40 != 0) {
        func_02003e70(this, a, 0x7f, 0);
    }
}

void Unk_ov009_0225b894::func_ov009_0225b8cc() {
    if (unk_40 != 0) {
        func_02003e50(this);
        unk_40 = 0;
    }
}

void Unk_ov009_0225b894::func_ov009_0225b8ec(Unk_ov009_0225b880_Vec3 *v) {
    if (unk_40 != 0) {
        Unk_ov009_0225b880_Vec3 t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        func_02003e80(this, &t);
    }
}

void Unk_ov009_0225b894::func_ov009_0225b914() {
    if (unk_40 == 0) {
        func_02003ecc(this);
        unk_40 = 1;
    }
}

Unk_ov009_0225b894::Unk_ov009_0225b894() {
    unk_40 = 0;
}

void Unk_ov009_0225e29c::func_ov009_0225b964() { func_020b1f64(unk_1f0); }
u32 Unk_ov009_0225e29c::func_ov009_0225b974() { return unk_22c; }
u32 Unk_ov009_0225e29c::func_ov009_0225b980() { return unk_228; }
u16 *Unk_ov009_0225e29c::func_ov009_0225b98c() { return &unk_132; }

BOOL Unk_ov009_0225e29c::func_ov009_0225b998() {
    if (unk_278 == 0) {
        return func_ov009_0225b9b8();
    }
    return FALSE;
}

BOOL Unk_ov009_0225e29c::func_ov009_0225b9b8() {
    switch (func_ov009_0225d650()) {
    case 2:
        return vfunc_6c(2);
    case 3:
        return vfunc_6c(6);
    case 1:
        return vfunc_6c(3);
    default:
        return FALSE;
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225b9fc() {
    if (unk_278 == 0) {
        return func_ov009_0225ba1c();
    }
    return FALSE;
}

BOOL Unk_ov009_0225e29c::func_ov009_0225ba1c() {
    switch (func_ov009_0225d650()) {
    case 2:
        return vfunc_6c(1);
    case 3:
        return vfunc_6c(5);
    case 1:
        return vfunc_6c(3);
    default:
        return FALSE;
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225ba60() {
    if (unk_130 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225ba74() {
    unk_231 = unk_231 & ~1;
    if (func_ov009_0225baa4()) {
        unk_231 = unk_231 | 1;
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225baa4() {
    if (data_021c3070 != 0) {
        Unk_ov009_0225b880_Vec3 *g = &data_021c309c;
        s32 dx = unk_5c[0] - g->x;
        if (dx < 0) {
            dx = -dx;
        }
        s32 dz = unk_5c[2] - g->z;
        if (dx > func_ov009_0225d7f0() || dz > func_ov009_0225d720() || dz < -func_ov009_0225d788()) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov009_0225e29c::vfunc_98() { return FALSE; }
BOOL Unk_ov009_0225e29c::vfunc_94() { return TRUE; }
BOOL Unk_ov009_0225e29c::vfunc_b0() { return TRUE; }
BOOL Unk_ov009_0225e29c::vfunc_90() { return FALSE; }

s32 Unk_ov009_0225e29c::vfunc_a0(){
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b16a0();
    return r;
}

s32 Unk_ov009_0225e29c::func_ov009_0225bb74(){
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t(v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = t.func_020b16a4();
    return r;
}

BOOL Unk_ov009_0225e29c::func_ov009_0225bbdc(Unk_ov009_0225b880_Vec3 *out, s16 *ang) {
    if (unk_288 != NULL && unk_28c != 0) {
        s32 a = func_020e7b98(unk_288->unk_28, unk_288->unk_30);
        s32 t0 = func_01ffcb0c(0x1000, unk_288->unk_30);
        Unk_ov009_0225b880_Vec3 v;
        v.x = func_01ffcb0c(0x1000, unk_288->unk_28);
        v.y = 0;
        v.z = t0;
        if (ang != NULL) {
            *ang = a + 0x8000;
        }
        if (out != NULL) {
            Unk_ov009_0225b880_Vec3 r;
            func_01ffd070(&r, func_02031ea0(unk_288), &v);
            out->x = r.x;
            out->y = r.y;
            out->z = r.z;
            out->y = 0x200;
            out->z = out->z - 0x200;
        }
        return TRUE;
    }
    out->x = unk_5c[0];
    out->y = unk_5c[1];
    out->z = unk_5c[2];
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225bc88() {
    if (unk_194 != NULL) {
        func_ov009_0225d078(0);
        func_020547cc(unk_138, 0);
        Unk_ov009_0225bc88_Blk t = unk_19c;
        func_ov009_0225cf78(&t);
    }
}

void Unk_ov009_0225e29c::vfunc_84() {}
void Unk_ov009_0225e29c::vfunc_80() {}
void Unk_ov009_0225e29c::vfunc_7c() {}

void Unk_ov009_0225e29c::vfunc_78() {
    Unk_ov009_0225bce0_Pad pad;
    func_020a710c((const char *)data_ov009_0225e3d8);
    unk_1e = 0;
}

void Unk_ov009_0225e29c::vfunc_88() {
    BOOL ok;
    if (func_0204b2d4(&unk_132)) {
        u16 v = 0x500a;
        if (func_0204b25c(&unk_132) == func_0204b25c(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (unk_132 == 0x500a) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    if (!ok) {
        func_02066cf8(unk_128, 0x64);
    }
}

void Unk_ov009_0225e29c::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        func_020b1040(unk_132, 0);
        func_020b101c();
        func_020b4934();
        func_020b49b4();
        unk_230 = 1;
        break;
    case 0:
    case 1:
        func_ov009_0225c360(1);
        break;
    case 8:
        func_ov009_0225c360(0);
        break;
    }
}

BOOL Unk_ov009_0225e29c::vfunc_48(Unk_020d9670 *a) {
    if (a == NULL) {
        return FALSE;
    }
    s32 d = func_020e780c((s16)(unk_8e + 0x8000), a->unk_8e);
    if (d <= 0x1000) {
        if (func_ov009_0225d650() != 0) {
            if ((unk_231 & 8) != 0 && func_ov009_0225d650() == 2) {
                if (vfunc_8c() == 0) {
                    func_0203e42c();
                    unk_27c = 1;
                    return TRUE;
                }
                func_0203e42c();
                unk_27c = 0;
                return TRUE;
            }
        } else if (vfunc_8c() == 0) {
            s32 r = func_020e9650(a->vfunc_50(), vfunc_50());
            func_0203e42c();
            unk_27c = 1;
            if (r >= 0x3000) {
                return FALSE;
            }
            return TRUE;
        }
    }
    return FALSE;
}

Unk_ov009_0225b880_Vec3 *Unk_ov009_0225e29c::vfunc_50() { return &unk_2a4; }

void Unk_ov009_0225e29c::func_ov009_0225beb0() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (func_ov009_0225bbdc(&v, &ang)) {
        p4 = v.x;
        if (vfunc_94() == 0) {
            s32 *q = func_020947f0(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (func_ov003_02212430(2, &p4, &v.z, ang)) {
            func_ov009_0225c360(6);
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225bf08() { return TRUE; }

void Unk_ov009_0225e29c::func_ov009_0225bf0c() {
    if (func_020951d0()) {
        func_ov009_0225c360(8);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225bf28() {
    func_020949a0(0);
    return TRUE;
}

extern "C" {
s32 func_020b50e8();
s32 func_020b4bbc(void *, s32);
s32 func_02030814(u32);
void func_020b49c4(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void func_020b0f00();
}

void Unk_ov009_0225e29c::func_ov009_0225bf3c() {
    unk_27e = unk_27e + 1;
    func_ov009_0225d650();
    u32 lim = 0x14;
    if (func_ov009_0225d650() == 1) {
        lim += 0xc;
    }
    if (unk_27e >= lim) {
        s32 r = func_ov009_0225bb74();
        s16 ang;
        Unk_ov009_0225b880_Vec3 v;
        if (func_ov009_0225bbdc(&v, &ang)) {
            if (func_020b4bbc(func_020b4934(), r)) {
                v.y = func_02030814(0);
                v.z = v.z + 0x1000;
                void *o = func_020b4934();
                s32 k = func_020b50e8();
                func_020b49c4(o, k, &v, 0xf000000, (s16)(ang + 0x8000), unk_228, unk_22c);
                func_ov009_0225d650();
                func_020b0f00();
                unk_232.f0 = 1;
            }
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c008() {
    unk_27e = 0;
    return TRUE;
}

void Unk_ov009_0225e29c::func_ov009_0225c018() {
    if (func_020951c4()) {
        switch (func_ov009_0225d650()) {
        case 2:
            func_0203a5c4();
            func_ov009_0225c360(6);
            break;
        case 3:
            func_0203a5c4();
            func_ov009_0225c360(6);
            break;
        }
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c054() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (func_ov009_0225bbdc(&v, &ang)) {
        p4 = v.x;
        if (vfunc_94() == 0) {
            s32 *q = func_020947f0(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (vfunc_90()) {
            if (func_ov003_0221249c(&p4, &v.z, &ang)) {
                return TRUE;
            }
        } else {
            BOOL m = func_ov009_0225d650() == 2 ? TRUE : FALSE;
            if (func_ov003_02212430(m, &p4, &v.z, ang)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov009_0225e29c::func_ov009_0225c0d8() {
    if (func_020951d0()) {
        func_ov009_0225c360(5);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c0f4() {
    func_020949a0(0);
    return TRUE;
}

void Unk_ov009_0225e29c::func_ov009_0225c108() {
    if (unk_128 != NULL && unk_128->unk_04 == 0) {
        vfunc_84();
        func_0203e47c(this);
        func_0203d67c(this);
    } else {
        vfunc_80();
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c14c() { return TRUE; }

void Unk_ov009_0225e29c::func_ov009_0225c150() {
    if (unk_128 != NULL && unk_128->unk_04 != 0) {
        vfunc_7c();
        func_ov009_0225c360(3);
    }
}

BOOL Unk_ov009_0225e29c::func_ov009_0225c17c() {
    func_0203e488(this);
    unk_128->unk_08 = 1;
    vfunc_78();
    return TRUE;
}
