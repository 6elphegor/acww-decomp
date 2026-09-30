// mwcc-version: 1.2/sp2
#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov068_0226b12c_Vec3 {
    s32 x, y, z;
    Unk_ov068_0226b12c_Vec3() {}
    Unk_ov068_0226b12c_Vec3(const Unk_ov068_0226b12c_Vec3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
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
    virtual Unk_ov068_0226b12c_Vec3 *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual const char *vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_88();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual u32 vfunc_s68();
    virtual s32 vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x41 */ u8 pad_41[3];
};

struct Unk_ov068_0226b5a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov068_0226b12c_Vec3 *vfunc_50();
    virtual void vfunc_60(u32 a, void *b);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
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
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8();

    void func_ov009_0225d6d8();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x1d4 - 0x138];
    /* 0x1d4 */ u8 unk_1d4[8];
    /* 0x1dc */ Unk_ov068_0226b5a4_Bits unk_1dc;
    /* 0x1e0 */ u8 pad_1e0[0x1f0 - 0x1e0];
    /* 0x1f0 */ u8 unk_1f0[0x234 - 0x1f0];
    /* 0x234 */ u8 unk_234[0x278 - 0x234];
    /* 0x278 */ u8 pad_278[0x28e - 0x278];
    /* 0x28e */ u8 unk_28e[0x2b0 - 0x28e];
};

// Overlay 68 concrete actor (vtable 0x02270110, secondary vtable 0x022701d4), size 0x2e4
class Unk_ov068_02270110 : public Unk_ov009_0225e29c {
public:
    Unk_ov068_02270110();
    virtual ~Unk_ov068_02270110();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual void vfunc_60(u32 a, void *b);
    virtual BOOL vfunc_70();
    virtual void vfunc_88();
    virtual BOOL vfunc_b0();
    virtual Unk_ov068_0226b12c_Vec3 vfunc_b4();
    virtual s32 vfunc_s6c();

    // update states
    void func_ov068_0226aa74();
    void func_ov068_0226aad4();
    void func_ov068_0226ab60();
    void func_ov068_0226abc8();
    void func_ov068_0226ac3c();
    void func_ov068_0226acf8();
    void func_ov068_0226ada0();
    void func_ov068_0226adc4();
    void func_ov068_0226ae74();
    void func_ov068_0226aef0();
    void func_ov068_0226af10();
    void func_ov068_0226b060();
    void func_ov068_0226b088();
    void func_ov068_0226b12c();
    void func_ov068_0226b1ec();
    void func_ov068_0226b268();
    void func_ov068_0226b2bc();
    // enter states
    BOOL func_ov068_0226aac4();
    BOOL func_ov068_0226ab1c();
    BOOL func_ov068_0226aba4();
    BOOL func_ov068_0226abf8();
    BOOL func_ov068_0226acc4();
    BOOL func_ov068_0226ad74();
    BOOL func_ov068_0226adac();
    BOOL func_ov068_0226ae64();
    BOOL func_ov068_0226aebc();
    BOOL func_ov068_0226af0c();
    BOOL func_ov068_0226b014();
    BOOL func_ov068_0226b084();
    BOOL func_ov068_0226b094();
    BOOL func_ov068_0226b190();
    BOOL func_ov068_0226b234();
    BOOL func_ov068_0226b284();
    BOOL func_ov068_0226b2c0();

    void func_ov068_0226b2f4();
    BOOL func_ov068_0226b43c(s32 idx);
    void func_ov068_0226b594();
    void func_ov068_0226b5a4();
    void func_ov068_0226b5f0();
    void func_ov068_0226b614();
    void func_ov068_0226b624();
    void func_ov068_0226b670();
    s32 func_ov068_0226b694();
    Unk_ov068_0226b12c_Vec3 func_ov068_0226b6dc();
    void func_ov068_0226b788();

    /* 0x2b0 */ s32 unk_2b0;
    /* 0x2b4 */ u8 pad_2b4[0x2c8 - 0x2b4];
    /* 0x2c8 */ Unk_ov068_0226b12c_Vec3 unk_2c8;
    /* 0x2d4 */ u8 pad_2d4[0x2d9 - 0x2d4];
    /* 0x2d9 */ u8 unk_2d9;
    /* 0x2da */ u8 unk_2da;
    /* 0x2db */ u8 pad_2db;
    /* 0x2dc */ s32 unk_2dc;
    /* 0x2e0 */ s32 unk_2e0;
};

struct Unk_ov068_0226b724_Obj {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov068_0226b12c_Vec3 unk_4c;
};

struct Unk_ov068_0226b724_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov068_0226b724_Obj *unk_b4;
};

struct Unk_ov068_0226b9f0_Obj {
    /* 0x000 */ u8 pad_000[0x2d0];
    /* 0x2d0 */ u8 unk_2d0[0x388 - 0x2d0];
    /* 0x388 */ u8 unk_388[0x430 - 0x388];
    /* 0x430 */ u8 unk_430;
};

extern "C" {
extern Unk_ov068_0226b9f0_Obj *data_ov068_022711bc;

BOOL func_02056654(void *);
void func_020547e4(void *);
void func_02054720(void *, s32, u32, s32, s32, s32);
void func_02094f20();
void func_02094ae8(s32, s32);
BOOL func_02095204(s32);
void func_0203d990();
void func_0203d984();
void func_020902f8(s32);
void func_020902d4(s32, void *, s32, s32);
s32 func_02090330(s32, void *, s32, s32);
Unk_ov068_0226b12c_Vec3 *func_020947f0(s32);
void func_020e9960(Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *, Unk_ov068_0226b12c_Vec3 *);
void func_01ffd070(Unk_ov068_0226b12c_Vec3 *, void *, Unk_ov068_0226b12c_Vec3 *);
s32 func_020e7b98(s32, s32);
s32 func_01ffc5a4(s32, s32);
void func_020b0f18();
void func_020b0f3c();
void func_02094f64(s32);
void *func_0209750c();
BOOL func_020b0f0c();
BOOL func_020b0f30();
void func_020b4934();
void func_020b49b4();
void func_02098738(void *, u16 *);
BOOL func_ov068_0226aa3c();
void func_ov009_0225b8b0(void *, s32);
void func_ov009_0225b894(void *, s32);
s32 func_0205458c(void *);
s32 func_ov004_02224d8c(void *, s32);
}

// ================================================================

void Unk_ov068_02270110::func_ov068_0226b12c() {
    if (func_02056654(unk_1d4)) {
        switch (unk_2d9) {
        case 0x12:
            func_02094f20();
            func_02094ae8(func_ov068_0226b694(), 4);
            break;
        case 0x1c:
            func_ov068_0226b43c(4);
            break;
        }
        if (unk_2d9 < 0xc8) {
            unk_2d9++;
        }
    } else {
        func_020547e4(unk_138);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b190() {
    unk_2d9 = 0;
    if (func_ov068_0226aa3c()) {
        func_02054720(unk_138, vfunc_68(), 1, 0x1000, 0, 0);
        func_ov009_0225b8b0(unk_234, 0x88a);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226b1ec() {
    func_ov009_0225b894(unk_234, 0x888);
    if (func_02056654(unk_1d4)) {
        func_ov068_0226b43c(3);
    }
    func_ov068_0226b624();
    func_020547e4(unk_138);
}

BOOL Unk_ov068_02270110::func_ov068_0226b234() {
    func_02054720(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b268() {
    if (func_02095204(4)) {
        func_ov068_0226b43c(2);
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b284() {
    func_02054720(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    func_0203d990();
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b2bc() {
}

BOOL Unk_ov068_02270110::func_ov068_0226b2c0() {
    func_02054720(unk_138, vfunc_64(), 1, 0x1000, 0, 0);
    return TRUE;
}

void Unk_ov068_02270110::func_ov068_0226b2f4() {
    static void (Unk_ov068_02270110::*tbl[17])() = {
        &Unk_ov068_02270110::func_ov068_0226b2bc, &Unk_ov068_02270110::func_ov068_0226b268,
        &Unk_ov068_02270110::func_ov068_0226b1ec, &Unk_ov068_02270110::func_ov068_0226b12c,
        &Unk_ov068_02270110::func_ov068_0226b088, &Unk_ov068_02270110::func_ov068_0226b060,
        &Unk_ov068_02270110::func_ov068_0226af10, &Unk_ov068_02270110::func_ov068_0226aef0,
        &Unk_ov068_02270110::func_ov068_0226ae74, &Unk_ov068_02270110::func_ov068_0226adc4,
        &Unk_ov068_02270110::func_ov068_0226ada0, &Unk_ov068_02270110::func_ov068_0226acf8,
        &Unk_ov068_02270110::func_ov068_0226ac3c, &Unk_ov068_02270110::func_ov068_0226abc8,
        &Unk_ov068_02270110::func_ov068_0226ab60, &Unk_ov068_02270110::func_ov068_0226aad4,
        &Unk_ov068_02270110::func_ov068_0226aa74,
    };
    if (unk_2b0 < 0x11) {
        (this->*tbl[unk_2b0])();
    }
}

BOOL Unk_ov068_02270110::func_ov068_0226b43c(s32 idx) {
    static BOOL (Unk_ov068_02270110::*tbl[17])() = {
        &Unk_ov068_02270110::func_ov068_0226b2c0, &Unk_ov068_02270110::func_ov068_0226b284,
        &Unk_ov068_02270110::func_ov068_0226b234, &Unk_ov068_02270110::func_ov068_0226b190,
        &Unk_ov068_02270110::func_ov068_0226b094, &Unk_ov068_02270110::func_ov068_0226b084,
        &Unk_ov068_02270110::func_ov068_0226b014, &Unk_ov068_02270110::func_ov068_0226af0c,
        &Unk_ov068_02270110::func_ov068_0226aebc, &Unk_ov068_02270110::func_ov068_0226ae64,
        &Unk_ov068_02270110::func_ov068_0226adac, &Unk_ov068_02270110::func_ov068_0226ad74,
        &Unk_ov068_02270110::func_ov068_0226acc4, &Unk_ov068_02270110::func_ov068_0226abf8,
        &Unk_ov068_02270110::func_ov068_0226aba4, &Unk_ov068_02270110::func_ov068_0226ab1c,
        &Unk_ov068_02270110::func_ov068_0226aac4,
    };
    if (idx < 0x11) {
        if ((this->*tbl[idx])()) {
            unk_2b0 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226b594() {
    func_020902f8(unk_2e0);
}

void Unk_ov068_02270110::func_ov068_0226b5a4() {
    u32 v = unk_1dc.mid;
    if (v >= 0x25 && v <= 0x32) {
        if (v == 0x25) {
            func_ov068_0226b5f0();
        }
        func_020902d4(unk_2e0, &unk_2c8, 0, 0);
        if (v == 0x32) {
            func_ov068_0226b594();
        }
    }
}

void Unk_ov068_02270110::func_ov068_0226b5f0() {
    unk_2e0 = func_02090330(0x42, &unk_2c8, 0, 0);
}

void Unk_ov068_02270110::func_ov068_0226b614() {
    func_020902f8(unk_2dc);
}

void Unk_ov068_02270110::func_ov068_0226b624() {
    u32 v = unk_1dc.mid;
    if (v >= 0x2d && v <= 0x31) {
        if (v == 0x2d) {
            func_ov068_0226b670();
        }
        func_020902d4(unk_2dc, &unk_2c8, 0, 0);
        if (v == 0x31) {
            func_ov068_0226b614();
        }
    }
}

void Unk_ov068_02270110::func_ov068_0226b670() {
    unk_2dc = func_02090330(0x41, &unk_2c8, 0, 0);
}

s32 Unk_ov068_02270110::func_ov068_0226b694() {
    if (func_020947f0(4)) {
        Unk_ov068_0226b12c_Vec3 a;
        Unk_ov068_0226b12c_Vec3 c;
        Unk_ov068_0226b12c_Vec3 *p = func_020947f0(4);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        Unk_ov068_0226b12c_Vec3 b = func_ov068_0226b6dc();
        func_020e9960(&c, &b, &a);
        return func_020e7b98(c.x, c.z);
    }
    return 0;
}

Unk_ov068_0226b12c_Vec3 Unk_ov068_02270110::func_ov068_0226b6dc() {
    Unk_ov068_0226b12c_Vec3 r;
    r.x = unk_2c8.x;
    r.y = unk_2c8.y;
    r.z = unk_2c8.z;
    r.x += func_01ffc5a4(0x19000, 0x64000) - 0xf6;
    return r;
}

void Unk_ov068_02270110::vfunc_88() {
}

s32 Unk_ov068_02270110::vfunc_s6c() {
    return 0;
}

void Unk_ov068_02270110::vfunc_60(u32 a, void *b) {
    if (a == 0) {
        Unk_ov068_0226b724_Obj *o = ((Unk_ov068_0226b724_Arg *)b)->unk_b4;
        Unk_ov068_0226b12c_Vec3 v;
        Unk_ov068_0226b12c_Vec3 out;
        Unk_ov068_0226b12c_Vec3 *pv = &o->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        func_01ffd070(&out, &unk_5c, &v);
        unk_2c8.x = out.x;
        unk_2c8.y = out.y;
        unk_2c8.z = out.z;
    }
}

BOOL Unk_ov068_02270110::vfunc_b0() {
    if (unk_2b0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270110::func_ov068_0226b788() {
    func_ov009_0225d6d8();
}

Unk_ov068_0226b12c_Vec3 Unk_ov068_02270110::vfunc_b4() {
    return unk_2c8;
}

BOOL Unk_ov068_02270110::vfunc_0c() {
    if (unk_2b0) {
        func_0203d984();
    }
    if (unk_2da) {
        unk_2da = 0;
        func_020b0f18();
        func_020b0f3c();
    }
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_18() {
    func_ov068_0226b2f4();
    if (unk_2b0) {
        func_02094f64(1);
    }
    return TRUE;
}

BOOL Unk_ov068_02270110::vfunc_70() {
    void *p = func_0209750c();
    unk_2c8.x = unk_5c[0];
    unk_2c8.y = unk_5c[1];
    unk_2c8.z = unk_5c[2];
    if (func_020b0f0c()) {
        unk_2da = 1;
        func_020b4934();
        func_020b49b4();
        func_ov068_0226b43c(1);
    } else if (func_020b0f30()) {
        unk_2da = 1;
        if (p) {
            u16 t = 0xfff1;
            func_02098738(p, &t);
        }
        func_020b4934();
        func_020b49b4();
        func_ov068_0226b43c(0xa);
    } else {
        func_ov068_0226b43c(0);
    }
    return TRUE;
}

Unk_ov068_02270110::~Unk_ov068_02270110() {
}

Unk_ov068_02270110::Unk_ov068_02270110() {
}

extern "C" {

void func_ov068_0226b91c() {
    new Unk_ov068_02270110();
}

void func_ov068_0226b9ec() {
}

void func_ov068_0226b9a8(s32 a0, s32 a, void *sub, void *obj, u8 s0, u32 s1, u16 s2, u16 s3) {
    s32 cur = func_0205458c(sub);
    if (cur != func_ov004_02224d8c(obj, a)) {
        func_02054720(sub, func_ov004_02224d8c(obj, a), s0, s1, s2, s3);
    }
}

BOOL func_ov068_0226b9f0() {
    Unk_ov068_0226b9f0_Obj *g = data_ov068_022711bc;
    if (g) {
        g->unk_430 = 1;
        func_02054720(data_ov068_022711bc->unk_2d0, func_ov004_02224d8c(data_ov068_022711bc->unk_388, 0), 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

}
