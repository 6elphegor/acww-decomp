#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov068_02270afc_Pair {
    s16 a, b;
};

struct Unk_ov068_02270afc_Vec {
    s32 x, y, z;
};

// Owner base (Unk_020d89c8), size 0x894
class Unk_020d89c8 : public Unk_020d8c7c_Base {
public:
    Unk_020d89c8();
    virtual ~Unk_020d89c8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 idx, u32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
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
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(u32 idx);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ Unk_ov068_02270afc_Vec unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[2];
    /* 0x092 */ Unk_ov068_02270afc_Pair unk_92;
    /* 0x096 */ u8 pad_96[0x350 - 0x96];
    /* 0x350 */ u8 unk_350[0x60];
    /* 0x3b0 */ u8 unk_3b0[0x5c];
    /* 0x40c */ u8 pad_40c[0x510 - 0x40c];
    /* 0x510 */ u8 unk_510;
    /* 0x511 */ u8 pad_511[3];
    /* 0x514 */ u8 unk_514[0x50];
    /* 0x564 */ u8 unk_564[0xb4];
    /* 0x618 */ u8 unk_618[0x28];
    /* 0x640 */ u8 pad_640[0x82c - 0x640];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x894 - 0x830];
};

class Unk_ov068_02270afc;
typedef void (Unk_ov068_02270afc::*Unk_ov068_02270afc_Fn)();
typedef BOOL (Unk_ov068_02270afc::*Unk_ov068_02270afc_BFn)();

class Unk_020660f8 {
public:
    void func_02067a3c(s32 a, void *p);
    void func_02067a84(u8 *a, void *p);
    void func_02067abc(u8 *a, void *p);

    u32 unk_00;
    s32 unk_04;
};

// Vtable 0x02270afc
class Unk_ov068_02270afc : public Unk_020d89c8 {
public:
    void func_ov068_0226dca4();
    BOOL func_ov068_0226dd14();
    void func_ov068_0226dd18();
    BOOL func_ov068_0226dd38();
    void func_ov068_0226dd3c();
    BOOL func_ov068_0226dd48();
    void func_ov068_0226dda4();
    BOOL func_ov068_0226dda8();
    void func_ov068_0226ddac();
    BOOL func_ov068_0226e0cc();
    void func_ov068_0226e12c();
    BOOL func_ov068_0226e1cc();
    void func_ov068_0226e20c();
    BOOL func_ov068_0226e228();
    void func_ov068_0226e268();
    BOOL func_ov068_0226e2f4();
    void func_ov068_0226e354();
    BOOL func_ov068_0226e390();
    void func_ov068_0226e3b8();
    BOOL func_ov068_0226e3f4();
    void func_ov068_0226e490();
    BOOL func_ov068_0226e4dc();
    void func_ov068_0226e54c();
    BOOL func_ov068_0226e638(s32 idx);
    BOOL func_ov068_0226eda4();
    BOOL func_ov068_0226ef58();

    /* 0x894 */ s32 unk_894;
    /* 0x898 */ u8 pad_898[0x8d4 - 0x898];
    /* 0x8d4 */ Unk_020660f8 *unk_8d4;
    /* 0x8d8 */ u8 pad_8d8[0xa3c - 0x8d8];
    /* 0xa3c */ Unk_ov068_02270afc_BFn unk_a3c;
    /* 0xa44 */ u32 unk_a44;
    /* 0xa48 */ u8 unk_a48;
    /* 0xa49 */ u8 pad_a49;
    /* 0xa4a */ s16 unk_a4a;
    /* 0xa4c */ u32 unk_a4c;
    /* 0xa50 */ u8 unk_a50;
    /* 0xa51 */ u8 unk_a51;
    /* 0xa52 */ u8 unk_a52;
    /* 0xa53 */ u8 pad_a53;
    /* 0xa54 */ u8 unk_a54;
    /* 0xa55 */ u8 pad_a55;
    /* 0xa56 */ s16 unk_a56;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ s8 unk_a59;
    /* 0xa5a */ u8 pad_a5a[0xa68 - 0xa5a];
    /* 0xa68 */ s32 unk_a68;
    /* 0xa6c */ s32 unk_a6c;
    /* 0xa70 */ s32 unk_a70;
};

extern "C" {
void _ZN12Unk_0201a8c413func_0201a99cEs(void *self, s32 a);
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c8cb4;
extern s32 data_020c8cb8;
extern u8 data_021f4880[];
extern Unk_ov068_02270afc_BFn data_0213a740;

s32 func_02019614(void *, s32, u32);
void func_0201a6c0(void *, u32, s32, s32, void *, s32, s32, u8);
void func_0202ffb0(s32);
s32 func_02014220(void *);
void func_0203d704(void *, s32);
Unk_ov068_02270afc_Vec *func_020947f0(s32);
s32 func_0202ff64(void *);
void func_0201a8d0(void *, s32, s32, s32, s32);
s32 func_0203d67c(void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02019790(void *);
void func_02003e70(void *, s32, s32, s32);
void func_020b0e60();
void func_02014198(void *, s32, s32);
void func_0205b124(void *);
s32 func_0205afdc(void *, void *);
void func_020b1028();
void *func_0207e310(void *);
void func_020785e8(void *, s32);
void func_0205b120(void *);
Unk_020d89c8 *func_02095204(s32);
s32 func_020e9650(void *, void *);
}

BOOL Unk_ov068_02270afc::func_ov068_0226e0cc() {
    if (func_02019614(&unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(&unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        func_0202ffb0(0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov068_02270afc::func_ov068_0226e12c() {
    if (func_02014220(&unk_618) == 0) {
        if (unk_a56 == 0 || unk_a54 == 0) {
            if (unk_a58 == 0) {
                func_0203d704(this, 0);
                unk_a50 = 1;
                return;
            } else if (unk_a58 != 0) {
                unk_a58 = unk_a58 - 1;
            }
        }
        if (unk_a56 > 0) {
            unk_a56 = unk_a56 - 1;
        }
    }
    Unk_ov068_02270afc_Vec *p = func_020947f0(4);
    if (p) {
        Unk_ov068_02270afc_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        if (func_0202ff64(&v)) {
            func_0203d704(this, 0);
            unk_a51 = 1;
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e1cc() {
    unk_a4a = 5;
    func_0201a8d0(&unk_350, 1, 0x148, 0x25, 0x25);
    unk_a56 = 0x258;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e20c() {
    if (func_ov068_0226e638(5)) {
        func_0203d67c(this);
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e228() {
    if (func_02014220(&unk_618)) {
        return func_02019614(&unk_564, 2, data_020c6cc8);
    } else {
        return func_02019614(&unk_564, 1, data_020c6cc8);
    }
}

void Unk_ov068_02270afc::func_ov068_0226e268() {
    if (unk_a48 == 1) {
        unk_a3c = &Unk_ov068_02270afc::func_ov068_0226ef58;
        func_020196b4(&unk_564, 1, 2, unk_a68, unk_a70, 0, 0, 0, 0, 0, 0);
    } else if (unk_a48 == 0) {
        if (func_02019790(&unk_564)) {
            func_ov068_0226e638(4);
        }
    }
    if (unk_a48 != 0) {
        unk_a48 = unk_a48 - 1;
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e2f4() {
    unk_a68 = unk_5c.x;
    unk_a6c = unk_5c.y;
    unk_a70 = unk_5c.z;
    unk_a70 = unk_a70 - 0x2000;
    unk_a3c = data_0213a740;
    unk_510 = 1;
    unk_a48 = 0x28;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e354() {
    if (unk_8d4->unk_04 == 0) {
        func_02003e70(&unk_514, 0x4cb, 0x7f, 0);
        func_020b0e60();
        func_ov068_0226e638(3);
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e390() {
    unk_a3c = data_0213a740;
    unk_510 = 1;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e3b8() {
    if (unk_a59 > 0) {
        unk_a59 = unk_a59 - 1;
    }
    if (unk_a59 == 0) {
        func_02014198(&unk_618, 0, 1);
        unk_a59 = -1;
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e3f4() {
    u32 loc[6];
    unk_a3c = data_0213a740;
    unk_510 = 0;
    func_0202ffb0(0);
    func_0205b124(loc);
    unk_a4c = func_0205afdc(loc, &unk_a44);
    func_020b1028();
    if (vfunc_64()) {
        func_020785e8(func_0207e310(vfunc_64()), 2);
    }
    unk_a59 = 30;
    func_02003e70(&unk_514, 0x4ca, 0x7f, 0);
    func_0205b120(loc);
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e490() {
    if (func_ov068_0226eda4()) {
        Unk_020d89c8 *p = func_02095204(4);
        if (p) {
            Unk_ov068_02270afc_Vec v;
            Unk_ov068_02270afc_Vec *pv = &p->unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            if (func_020e9650(&v, &unk_5c) > 0x4e66) {
                func_0203d704(this, 0);
            }
        }
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e4dc() {
    unk_5c.x = data_020c8cb4;
    unk_5c.z = data_020c8cb8 - 0x1000;
    Unk_ov068_02270afc_Pair &q = unk_92;
    q.b = -0x8000;
    unk_8e = q.b;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, -0x8000);
    unk_a3c = data_0213a740;
    unk_510 = 0;
    return TRUE;
}

void Unk_ov068_02270afc::func_ov068_0226e54c() {
    static Unk_ov068_02270afc_Fn tbl[11] = {
        &Unk_ov068_02270afc::func_ov068_0226e490,
        &Unk_ov068_02270afc::func_ov068_0226e3b8,
        &Unk_ov068_02270afc::func_ov068_0226e354,
        &Unk_ov068_02270afc::func_ov068_0226e268,
        &Unk_ov068_02270afc::func_ov068_0226e20c,
        &Unk_ov068_02270afc::func_ov068_0226e12c,
        &Unk_ov068_02270afc::func_ov068_0226ddac,
        &Unk_ov068_02270afc::func_ov068_0226dda4,
        &Unk_ov068_02270afc::func_ov068_0226dd3c,
        &Unk_ov068_02270afc::func_ov068_0226dd18,
        &Unk_ov068_02270afc::func_ov068_0226dca4,
    };
    if (unk_894 < 11) {
        (this->*tbl[unk_894])();
    }
}

BOOL Unk_ov068_02270afc::func_ov068_0226e638(s32 idx) {
    static Unk_ov068_02270afc_BFn tbl[11] = {
        &Unk_ov068_02270afc::func_ov068_0226e4dc,
        &Unk_ov068_02270afc::func_ov068_0226e3f4,
        &Unk_ov068_02270afc::func_ov068_0226e390,
        &Unk_ov068_02270afc::func_ov068_0226e2f4,
        &Unk_ov068_02270afc::func_ov068_0226e228,
        &Unk_ov068_02270afc::func_ov068_0226e1cc,
        &Unk_ov068_02270afc::func_ov068_0226e0cc,
        &Unk_ov068_02270afc::func_ov068_0226dda8,
        &Unk_ov068_02270afc::func_ov068_0226dd48,
        &Unk_ov068_02270afc::func_ov068_0226dd38,
        &Unk_ov068_02270afc::func_ov068_0226dd14,
    };
    if (idx < 11) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// ---- Menu class (vtable 0x02270a6c) ----
class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_0202d1d4(void *t);

    u8 pad_04[0x3c - 4];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_020e2a60 {
public:
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void func_020a7aa0(Unk_020e2a60 *dst, s32 a, s32 b);
};

class Unk_020dd30c : public Unk_020e2a60 {
public:
    Unk_020dd30c(u8 *src);
    virtual ~Unk_020dd30c();
    u8 pad[0x1c];
};

class Unk_020e2a48 : public Unk_020e2a78 {
public:
    Unk_020e2a48();
    virtual ~Unk_020e2a48();
    u8 pad[0x30];
};

struct Unk_ov068_02270a6c_Out {
    void *unk_00;
    u8 unk_04;
};

struct Unk_ov068_02270a6c_Buf {
    u8 b[16];
};

struct Unk_ov068_02270a6c_Bits {
    u8 lo : 3;
    u8 hi : 5;
};

extern "C" {
extern u8 data_ov068_022712e0[];
extern u8 data_ov068_022712b8[];
extern u8 data_ov068_02270bbc[];
extern u8 data_ov068_02270bc4[];
extern u8 data_ov068_02270bd0[];
extern u8 data_ov068_02270bdc[];
extern u8 data_ov068_02270be8[];
extern u8 data_ov068_02270bf4[];
extern u8 data_ov068_02270c00[];
extern u8 data_ov068_02270c10[];
extern Unk_ov068_02270a6c_Buf data_ov068_02270a3c;
extern u8 data_021be7e0[];
extern u8 data_021be810[];
extern u8 data_021edb5c;
void func_0200301c(void *, void *, u32, void *);
void *func_020805c4(void *);
u32 func_02063b8c(s32);
void func_0200402c(s32);
s32 func_02003098(void *);
s32 func_ov004_02234b0c(s32);
void *func_0209750c();
void *func_0209865c(void *);
}

class Unk_ov068_02270a6c : public Unk_020d8938 {
public:
    virtual void vfunc_10(u32 a);
    virtual void vfunc_14(u32 a);
    virtual void vfunc_18(u32 a);
    virtual void vfunc_78(void *arg);

    void func_ov068_0226ebb0();
    BOOL func_ov068_0226ebcc();
    void func_ov068_0226ebf0();
    BOOL func_ov068_0226ec14();
    void func_ov068_0226ec38();

    /* 0x1a0 */ Unk_ov068_02270afc *unk_1a0;
};

void Unk_ov068_02270a6c::vfunc_18(u32 a) {
    if (unk_1a0->unk_a52 == 0) {
        Unk_020d8938::vfunc_18(a);
    }
}

void Unk_ov068_02270a6c::vfunc_14(u32 a) {
    u8 buf[2];
    Unk_ov068_02270afc *o = unk_1a0;
    u32 st = o->unk_a52;
    if (st == 0) {
        Unk_020d8938::vfunc_14(a);
    } else if (o != 0) {
        if (st == 1) {
            o->func_ov068_0226e638(2);
        } else if (st == 6 || st == 8) {
            o->unk_a52 = 7;
            func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov068_022712b8, 0x28, data_ov068_02270bbc);
            buf[0] = func_02063b8c(3);
            unk_1a0->unk_8d4->func_02067abc(buf, data_ov068_022712b8);
        } else if (st == 7) {
            buf[1] = data_021edb5c;
            unk_1a0->unk_8d4->func_02067a84(&buf[1], 0);
            unk_1a0->func_ov068_0226e638(10);
            func_0200402c(0x5f);
        }
    }
}

void Unk_ov068_02270a6c::vfunc_10(u32 a) {
    if (unk_1a0->unk_a52 == 0) {
        Unk_020d8938::vfunc_10(a);
    }
}

#define SPEAK(str) func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov068_022712e0, 0x28, str)

void Unk_ov068_02270a6c::vfunc_78(void *arg) {
    Unk_ov068_02270a6c_Out *out = (Unk_ov068_02270a6c_Out *)arg;
    out->unk_00 = data_ov068_022712e0;
    if (unk_1a0->unk_894 == 1) {
        unk_1a0->unk_a52 = 1;
        SPEAK(data_ov068_02270bc4);
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ec38();
        return;
    }
    if (unk_1a0->unk_a50 != 0 && unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a50 = 0;
    }
    if (unk_1a0->unk_a50 != 0) {
        unk_1a0->unk_a52 = 6;
        SPEAK(data_ov068_02270bd0);
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        return;
    }
    if (unk_1a0->unk_a51 != 0) {
        unk_1a0->unk_a52 = 8;
        SPEAK(data_ov068_02270bdc);
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(2);
        return;
    }
    if (func_ov068_0226ec14() == 0) {
        unk_1a0->unk_a52 = 2;
        SPEAK(data_ov068_02270be8);
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ebf0();
        return;
    }
    if (func_ov068_0226ebcc()) {
        unk_1a0->unk_a52 = 5;
        SPEAK(data_ov068_02270bf4);
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = func_02063b8c(3);
        func_ov068_0226ebb0();
        return;
    }
    if (unk_1a0->unk_a54 != 0) {
        unk_1a0->unk_a54 = unk_1a0->unk_a54 - 1;
    }
    u32 rnd = func_02063b8c(100);
    s32 v = func_ov004_02234b0c(func_02003098(func_020805c4(unk_1a0->unk_82c)));
    u32 n = unk_1a0->unk_a44;
    if (n >= 5) {
        n = 5;
    }
    Unk_ov068_02270a6c_Buf buf = data_ov068_02270a3c;
    for (u32 i = n; i < 16; i++) {
        buf.b[i] = 0;
    }
    Unk_020dd30c obj1(buf.b);
    Unk_020e2a48 obj2;
    obj2.func_020a7aa0(&obj1, 0, 0);
    unk_3c->func_02067a3c(3, &obj2);
    if (rnd < 30 && v != -1) {
        unk_1a0->unk_a52 = 3;
        SPEAK(data_ov068_02270c00);
        out->unk_00 = data_ov068_022712e0;
        out->unk_04 = v;
        return;
    }
    if (rnd < 50) {
        unk_1a0->unk_a52 = 4;
        SPEAK(data_ov068_02270c10);
        out->unk_00 = data_ov068_022712e0;
        u32 f = unk_1a0->unk_a4c;
        if (f & 1) {
            out->unk_04 = func_02063b8c(2);
        } else if (f & 2) {
            out->unk_04 = func_02063b8c(2) + 2;
        } else if ((f & 4) == 0) {
            out->unk_04 = func_02063b8c(2) + 4;
        } else if (f & 0x10) {
            out->unk_04 = 10;
        } else if (f & 0x20) {
            out->unk_04 = func_02063b8c(2) + 8;
        } else {
            out->unk_04 = func_02063b8c(2) + 6;
        }
        ((Unk_ov068_02270a6c_Bits *)((u8 *)func_0209865c(func_0209750c()) + 0xa8))->lo = n;
    } else if (rnd < 70) {
        unk_1a0->unk_a52 = 0;
        func_0202d1d4(data_021be7e0);
        Unk_020d8938::vfunc_78(out);
    } else {
        unk_1a0->unk_a52 = 0;
        func_0202d1d4(data_021be810);
        Unk_020d8938::vfunc_78(out);
    }
}
