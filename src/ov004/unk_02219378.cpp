#include "types.h"

class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)();

// Owner / parent object of the menu (copy of the declaration in unk_0202d0e4.cpp, extended with the fields used here)
class Unk_020d89c8 {
public:
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();

    u8 pad_04[0x148 - 4];
    u32 unk_148;
    u8 pad_14c[0x82c - 0x14c];
    void *unk_82c;
    u8 pad_830[0x894 - 0x830];
    u16 unk_894;
    u8 pad_896[0x8a4 - 0x896];
    s32 unk_8a4;
    u8 unk_8a8[100];
    u8 pad_90c[0xad8 - 0x90c];
    u8 unk_ad8;
};

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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_0202d388(Unk_020d89c8 *owner, u32 idx);

    u8 pad_04[0x3c - 4];
    u32 unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x8c - 0x68];
    u16 unk_8c;
    s16 unk_8e;
    u16 unk_90;
    u16 unk_92;
    s16 unk_94;
    u16 unk_96;
    u8 pad_98[0xac - 0x98];
    Unk_020d8938_Fn unk_ac;
    Unk_020d8938_Fn unk_b4;
    Unk_020d8938_Fn unk_bc;
    Unk_020d8938_Fn unk_c4;
    Unk_020d8938_Fn unk_cc;
    Unk_020d8938_Fn unk_d4;
    Unk_020d8938_Fn unk_dc;
    Unk_020d8938_Fn unk_e4;
    Unk_020d8938_Fn unk_ec;
    Unk_020d8938_Fn unk_f4;
    Unk_020d89c8 *unk_fc;
    u8 pad_100[0x120 - 0x100];
    u16 unk_120;
    u8 pad_122[2];
    s32 unk_124;
    s32 unk_128;
    s32 unk_12c;
    s32 unk_130;
    s32 unk_134;
    u8 unk_138;
    u8 pad_139[0x150 - 0x139];
    u32 unk_150;
    u8 unk_154;
    u8 unk_155;
    u8 pad_156[2];
    u32 unk_158;
    u32 unk_15c;
    u32 unk_160;
    u32 unk_164;
    Unk_020d8938_Fn unk_168;
    Unk_020d8938_Fn unk_170;
    Unk_020d8938_Fn unk_178;
    Unk_020d8938_Fn unk_180;
    Unk_020d8938_Fn unk_188;
    u8 pad_190[8];
    u16 unk_198;
    u8 unk_19a;
    u8 pad_19b;
    u32 unk_19c;
};

class Unk_ov004_0224c740;
typedef void (Unk_ov004_0224c740::*Unk_ov004_0224c740_Fn)();

struct Unk_ov004_0224c740_Ent {
    Unk_ov004_0224c740_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov004_0221946c_Vec {
    s32 x, y, z;
    Unk_ov004_0221946c_Vec() {}
    ~Unk_ov004_0221946c_Vec() {}
};

extern "C" {
s32 func_0204b2d4(void *);
u32 func_0204b25c(void *);
void *func_020805c4(void *);
void *func_0207f58c(void *);
void func_02080b78(void *, void *);
void func_0207cfb8(void *, void *);
void func_ov004_022344dc(s32);
s32 func_02063b8c(s32);
s32 func_0206ec6c();
s32 func_0206ed18();
s32 func_0204be70(void *);
void *func_0209750c();
void *func_0209888c(...);
s32 func_0207f854(void *, void *);
s32 func_02080dd8(s32);
s32 func_02132a4c(s32);
s32 func_021319d0(s32, s32);
s32 func_02132c80(s32, s32);
s32 func_021329d0(s32);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
s32 func_0206e8e8();
void func_02015958(void *, s32, u32, s32, s32, s32);
s32 func_0208a598();
void func_0200301c(void *, void *, s32, void *);
void func_02067a84(u32, void *, void *);
void func_0202d598(void *);
s32 func_02015aac(void *);
s32 func_0201bcbc(void *, s32);
void func_020141b4(void *, s32, s32, s32);
s32 func_02014220(void *);
void func_020e7518(void *);
void func_0209d498(void *);
void func_0203d67c(void *);
void *func_020947f0(s32);
s32 func_020b4934();
void func_020b4bbc(s32, s32);
void func_020b4a08(s32, s32);
s32 func_ov004_02218cdc(void *);
s32 func_020e9650(void *, void *);
void func_0201ae00(void *, void *, void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_020196b4(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_0201a9ec(void *, void *);
s32 func_020e972c(void *, void *);
s32 func_020e96ec(void *, void *);
s32 func_020e780c(s32, s32);
void func_0204ee10(s32 *, s32 *, s32 *);
void *func_ov004_02235718();
s32 func_ov004_02235624(void *, s32, s32, s32);
s32 func_ov004_02218a48(void *, s32);
void *func_ov004_0223584c();
void *func_ov004_02235720(void *, s32);
void *func_ov004_022087a4();
s32 func_0204b248(void *, s32);
void func_ov004_022088c0(void *, void *);
void func_ov004_022189dc(void *, void *);
void func_ov004_02218a20(void *, s32);
s32 func_ov004_02218bd4(void *);
s32 func_02002bdc(void *, void *);
void func_ov004_02219f18(void *, s32);
void _ZdlPv(void *);
extern u16 data_020c6cc8;
extern s16 data_02135f44[];
extern Unk_ov004_0224c740_Ent data_ov004_02250798[];
extern u8 data_ov004_022507b0[];
extern u8 data_ov004_0224c890[];
}

static inline BOOL Unk_ov004_02219378_Chk(u16 *p) {
    BOOL r;
    if (func_0204b2d4(p)) {
        u16 v = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(&v)) {
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

static inline BOOL Unk_ov004_0221946c_Chk(u16 *p, u16 *vp) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *vp = 0xfff1;
        if (func_0204b25c(p) == func_0204b25c(vp)) {
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

class Unk_ov004_0224c740 : public Unk_020d8938 {
public:
    Unk_ov004_0224c740();
    virtual ~Unk_ov004_0224c740();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov004_02219378();
    void func_ov004_0221946c();
    void func_ov004_022195fc(s32 v);
    void func_ov004_022196a4(Unk_020d89c8 *owner);
    BOOL func_ov004_0221971c();
    BOOL func_ov004_02219720();
    BOOL func_ov004_02219724();
    BOOL func_ov004_022197bc();
    BOOL func_ov004_02219808();
    BOOL func_ov004_02219870();
    BOOL func_ov004_022198a8();
    BOOL func_ov004_02219a90();
    BOOL func_ov004_02219ac4();
    BOOL func_ov004_02219b00();
    BOOL func_ov004_02219b60();
    BOOL func_ov004_02219c04();
    BOOL func_ov004_02219c38();

    Unk_020d89c8 *unk_1a0;
    s32 unk_1a4;
    s32 unk_1a8;
    u8 pad_1ac[0x350 - 0x1ac];
    u32 unk_350[(0x564 - 0x350) / 4];
    u32 unk_564[(0x618 - 0x564) / 4];
    u32 unk_618[(0x894 - 0x618) / 4];
    u16 unk_894;
    u8 pad_896[2];
    u32 unk_898[3];
    s32 unk_8a4;
    u8 pad_8a8[0x914 - 0x8a8];
    u32 unk_914[(0xac0 - 0x914) / 4];
    u8 unk_ac0;
    u8 pad_ac1[3];
    s32 unk_ac4;
    u32 unk_ac8[2];
    s32 unk_ad0;
    u8 unk_ad4;
    u8 unk_ad5;
    u8 pad_ad6[0xae0 - 0xad6];
    s32 unk_ae0;
};

Unk_ov004_0224c740::Unk_ov004_0224c740() {}
Unk_ov004_0224c740::~Unk_ov004_0224c740() {}

void Unk_ov004_0224c740::func_ov004_02219378() {
    u16 *p = &unk_1a0->unk_894;
    if (!Unk_ov004_02219378_Chk(p)) {
        if (unk_1a0->unk_8a4 != -1) {
            if (func_020805c4(unk_1a0->unk_82c)) {
                void *t = func_0207f58c(unk_1a0->unk_82c);
                if (t) {
                    func_02080b78(t, &unk_1a0->unk_894);
                }
                func_0207cfb8(unk_1a0->unk_82c, &unk_1a0->unk_894);
            }
            func_ov004_022344dc(unk_1a0->unk_8a4);
            s32 i = 0;
            s32 m1 = ~i;
            unk_1a0->unk_8a4 = m1;
            unk_1a0->unk_894 = 0xfff1;
            unk_1a0->unk_ad8++;
            for (; i < 100; i++) {
                unk_1a0->unk_8a8[i] = 0xff;
            }
        }
    }
}

void Unk_ov004_0224c740::func_ov004_0221946c() {
    u32 sp8 = unk_3c;
    u16 buf[2];
    ((u8 *)buf)[0] = func_02063b8c(2) + 8;
    unk_1a4 = 0;
    if (func_0206ec6c()) {
        if (func_0206ed18()) {
            s32 r6 = 0;
            s32 r4 = r6;
            u16 *p = &unk_1a0->unk_894;
            if (!Unk_ov004_0221946c_Chk(p, &buf[1])) {
                unk_1a4 = func_0204be70(&unk_1a0->unk_894);
                if (func_0209750c()) {
                    r6 = func_0207f854(unk_1a0->unk_82c, (void *)func_0209888c(func_0209750c()));
                }
                if (r6) {
                    r4 = func_02080dd8(r6);
                }
                r4 += 0xff;
                if (r4 > 0) {
                    r4 = func_021319d0(0x3f000000, func_02132a4c(r4 << 12));
                } else {
                    r4 = func_02132c80(func_02132a4c(r4 << 12), 0x3f000000);
                }
                r4 = func_01ffc5a4(func_021329d0(r4), 0x200000);
                func_02015958(this, func_0206e8e8(), 0, 10, 1, 0);
                r4 = func_01ffcb0c(unk_1a4, r4);
                if (r4 <= 10) {
                    r4 = 10;
                }
                if (func_0206e8e8() > r4) {
                    ((u8 *)buf)[0] = func_02063b8c(2) + 10;
                } else {
                    unk_1a4 = func_0206e8e8();
                    ((u8 *)buf)[0] = func_02063b8c(2) + 12;
                    func_0208a598();
                }
            }
        }
        func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_022507b0, 0x28, data_ov004_0224c890);
        func_02067a84(sp8, buf, data_ov004_022507b0);
        func_ov004_022195fc(0);
    }
}

void Unk_ov004_0224c740::vfunc_84() {
    s32 i = unk_1a8;
    if (data_ov004_02250798[i].flag == 0) {
        if (data_ov004_02250798[i].fn) {
            (this->*data_ov004_02250798[i].fn)();
            func_ov004_022195fc(0);
        }
    }
}

void Unk_ov004_0224c740::vfunc_80() {
    s32 i = unk_1a8;
    if (data_ov004_02250798[i].flag != 0) {
        if (data_ov004_02250798[i].fn) {
            (this->*data_ov004_02250798[i].fn)();
        }
    }
}

void Unk_ov004_0224c740::func_ov004_022196a4(Unk_020d89c8 *owner) {
    vfunc_08();
    func_0202d388(owner, 0x11);
    unk_1a0 = owner;
}

BOOL Unk_ov004_0224c740::func_ov004_0221971c() { return TRUE; }
BOOL Unk_ov004_0224c740::func_ov004_02219720() { return TRUE; }

BOOL Unk_ov004_0224c740::func_ov004_02219724() {
    u8 s = unk_ad5;
    if (s != 0) {
        if (s == 1) {
            s32 a = func_02015aac(unk_914);
            s32 b = 0;
            if (a) {
                b = func_0201bcbc(this, a);
            }
            func_020141b4(unk_618, 0, b, 1);
        }
        func_020e7518(&unk_ad5);
        return TRUE;
    }
    func_0209d498(unk_ac8);
    if (!func_02014220(unk_618)) {
        func_0203d67c(this);
        if (unk_ac0 == 1) {
            unk_ac0 = 2;
            unk_ae0 = 0;
        }
        func_ov004_02219f18(this, 8);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_022197bc() {
    s32 a = func_02015aac(unk_914);
    s32 b = 0;
    if (a) {
        b = func_0201bcbc(this, a);
    }
    s32 z = 0;
    unk_ac4 = z;
    if (unk_ac0) {
        func_020141b4(unk_618, z, b, z);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219808() {
    Unk_ov004_0221946c_Vec v;
    s32 *q = (s32 *)func_020947f0(4);
    v.x = q[0];
    v.y = q[1];
    v.z = q[2];
    if (!func_02014220(unk_618)) {
        if (unk_ac0 == 5) {
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_020b4a08(func_020b4934(), 0);
            func_020b4bbc(func_020b4934(), 6);
        }
        func_ov004_02219f18(this, 8);
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219870() {
    s32 a = func_02015aac(unk_914);
    s32 b = 0;
    if (a) {
        b = func_0201bcbc(this, a);
    }
    func_020141b4(unk_618, 0, b, 1);
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_022198a8() {
    s32 xy[2];
    u32 loc24[3];
    Unk_ov004_0221946c_Vec v;
    if (func_ov004_02218cdc(this)) {
        return TRUE;
    }
    s32 r4 = func_020e9650(&unk_5c, unk_898);
    func_0201ae00(loc24, this, unk_898);
    if (r4 > unk_ad0 + 0x1000) {
        if (func_020197a8(unk_564) == 1) {
            func_020196b4(unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (func_020197a8(unk_564) == 2) {
            func_020196b4(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    func_0201a9ec(unk_350, loc24);
    if (r4 <= unk_ad0 || func_020e972c(loc24, &unk_5c)) {
        func_ov004_02219f18(this, 3);
    }
    v.x = unk_5c;
    v.y = unk_60;
    v.z = unk_64;
    s32 h = *(u16 *)&unk_8e;
    xy[0] = 0;
    xy[1] = 0;
    s32 idx = (h >> 4) * 2;
    s32 g = func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.x = v.x + g;
    g = func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    v.z = v.z + g;
    func_0204ee10(&xy[0], &xy[1], &v.x);
    s32 r4b = func_ov004_02235624(func_ov004_02235718(), xy[0], xy[1], 0);
    s32 r6 = func_ov004_02235624(func_ov004_02235718(), xy[0], xy[1], 1);
    if (func_ov004_02218a48(this, r6)) {
        void *o = func_ov004_02235720(func_ov004_0223584c(), r6);
        unk_894 = func_0204b248(func_ov004_022087a4(), 0);
        func_ov004_022088c0(o, unk_898);
        func_ov004_022189dc(this, o);
        func_ov004_02218a20(this, r6);
        unk_8a4 = r6;
    } else if (func_ov004_02218a48(this, r4b)) {
        void *o = func_ov004_02235720(func_ov004_0223584c(), r4b);
        unk_894 = func_0204b248(func_ov004_022087a4(), 0);
        func_ov004_022088c0(o, unk_898);
        func_ov004_022189dc(this, o);
        func_ov004_02218a20(this, r4b);
        unk_8a4 = r4b;
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219a90() {
    func_020196b4(unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219ac4() {
    if (func_ov004_02218cdc(this)) {
        return TRUE;
    }
    if (func_020197a8(unk_564) == 3) {
        if (func_02019790(unk_564)) {
            func_ov004_02219f18(this, 3);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219b00() {
    func_020e9650(&unk_5c, unk_898);
    u32 loc1c[3];
    func_0201ae00(loc1c, this, unk_898);
    s32 r = func_02002bdc(&unk_5c, unk_898);
    func_020196b4(unk_564, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219b60() {
    if (func_ov004_02218cdc(this)) {
        return TRUE;
    }
    if (unk_ac0 != 2) {
        return TRUE;
    }
    if (func_ov004_02218bd4(this)) {
        s32 r6 = func_020e9650(&unk_5c, unk_898);
        u32 loc0[3];
        func_0201ae00(loc0, this, unk_898);
        s32 r1 = func_02002bdc(&unk_5c, unk_898);
        s32 r4 = func_020e780c(unk_8e, r1);
        if (r6 > unk_ad0 && func_020e96ec(loc0, &unk_5c)) {
            func_ov004_02219f18(this, 5);
        } else if (r4 > 0x2000) {
            func_ov004_02219f18(this, 4);
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219c04() {
    func_020196b4(unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov004_0224c740::func_ov004_02219c38() {
    unk_8c = 0;
    unk_8e = -0x8000;
    unk_90 = 0;
    unk_92 = 0;
    unk_94 = -0x8000;
    unk_96 = 0;
    u8 c = unk_ad4;
    if (c == 1) {
        func_020196b4(unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        func_0203d67c(this);
        func_ov004_02219f18(this, 8);
        return TRUE;
    } else if (c == 0) {
        Unk_ov004_0221946c_Vec v;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        s32 g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&unk_8e >> 4) * 2]);
        v.x = g + unk_5c;
        g = func_01ffcb0c(0x4000, data_02135f44[(*(u16 *)&unk_8e >> 4) * 2 + 1]);
        v.z = g + unk_64;
        func_020196b4(unk_564, 1, 2, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
        unk_ad4 = 30;
        return TRUE;
    } else {
        unk_ad4 = c - 1;
        return TRUE;
    }
}

void Unk_ov004_0224c740::func_ov004_022195fc(s32 v) { unk_1a8 = v; }
