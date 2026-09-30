#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov076_02272174;

struct Unk_02014254 {
    BOOL func_02014220();
    u32 pad[0x28 / 4];
};

struct Unk_02063380 {
    void func_0206338c(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};


struct Unk_ov076_02271528_Out {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
};

struct Unk_ov076_02271744_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov076_02271864_Msg {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

struct Unk_ov076_02271a3c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov076_02271a3c_V {
    s32 x, y, z;
};

extern "C" {
extern u8 data_ov076_02272080[];
extern u8 data_ov076_02271f44[];
extern u8 data_ov076_02271f48[];
extern u32 data_021f4880;
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;
extern u32 data_0213a740[];

s32 func_020aa514();
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
void func_02067a84(void *self, u8 *b, void *c);
void func_02014e60(void *self, u16 *a, u32 b, u32 c, u32 d);
void func_02014ce4(void *self, u16 *a, u32 b, u32 c, u32 d);
void func_0201517c(void *self, BOOL (*cb)(u16 *, s32), u32 b, u32 c);
void func_020151d0(void *self, s32 a);
void func_02099014(u16 *, s32);
void func_02099064();
s32 func_02098ffc();
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
s32 func_0206ea84(BOOL (*cb)(u16 *, s32));
s32 func_0206ed18();
s32 func_0206ed38();
void func_02062f94(u16 *a, Unk_02063380 *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063388(Unk_02063380 *o);
void func_0203ffa4(u32 id);
void func_0203d67c(void *self);
u32 func_0201bc4c(void *p, s32 n);
u32 func_0201bcbc(void *p, void *q);
void func_0201a99c(void *self, s32 a);
void func_0201a784(void *self);
void func_020195c8(void *self, s32 a, s32 b, u32 c, s32 d, s32 e);
void func_020196b4(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
BOOL func_02019790(void *self);
s32 func_020197a8(void *self);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_02015e48(void *self, s32 a);
BOOL func_02015e74(void *self, void *o);
void func_020e7530(void *a, s32 b, s32 c);
void func_020ed188(void *self);
void func_ov003_02220db0(Unk_ov076_02271a3c_V *v, s32 a);
void func_02090330(s32 a, Unk_ov076_02271a3c_V *v, s32 b, s32 c);
void func_02003ddc(void *self, s32 a, s32 b, s32 c);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
s32 func_02133150(s32, s32);
void func_ov076_02271d20(void *self, s32 state);
BOOL func_ov076_022718bc(u16 *p, s32 x);
}

class Unk_020d7714 {
public:
    virtual ~Unk_020d7714();
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
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *a);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    void func_02015a5c();
    void func_02015ab0(u32 a);
    void *func_02015aac();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x1d];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov076_022720e4 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov076_022720e4::*Fn)();

    Unk_ov076_022720e4();
    virtual ~Unk_ov076_022720e4();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *a);
    virtual void vfunc_84();

    void func_ov076_022717b4(Unk_ov076_02272174 *o);
    void func_ov076_02271864();
    void func_ov076_0227190c(s32 i);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov076_02272174 *unk_b0;
    /* 0xb4 */ u16 unk_b4;
    /* 0xb8 */ Fn unk_b8;
};

class Unk_020d8bc8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    /* 0x004 */ u8 pad_04[0x58];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ s32 unk_60;
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[4];
    /* 0x094 */ s16 unk_94;
    /* 0x096 */ u8 pad_96[0x190 - 0x96];
    /* 0x190 */ Unk_ov076_02271a3c_Bits unk_190;
    /* 0x194 */ u8 pad_194[0x334 - 0x194];
    /* 0x334 */ u8 unk_334[0x350 - 0x334];
    /* 0x350 */ u8 unk_350[0x3b0 - 0x350];
    /* 0x3b0 */ u8 unk_3b0[0x514 - 0x3b0];
    /* 0x514 */ u8 unk_514[0x564 - 0x514];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ Unk_02014254 unk_618;
    /* 0x640 */ u8 pad_640[0x14];
};

class Unk_ov076_02272174 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov076_02272174();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);

    BOOL func_ov076_0227199c();
    BOOL func_ov076_022719e4();
    BOOL func_ov076_02271a3c();
    BOOL func_ov076_02271b28();
    BOOL func_ov076_02271be0();
    BOOL func_ov076_02271c28();
    BOOL func_ov076_02271c80();
    BOOL func_ov076_02271c84();
    BOOL func_ov076_02271cb0();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov076_022720e4 unk_658;
    /* 0x718 */ u8 unk_718;
    /* 0x719 */ u8 pad_719;
    /* 0x71a */ u16 unk_71a;
    /* 0x71c */ s32 unk_71c;
    /* 0x720 */ s16 unk_720;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov076_02272174::~Unk_ov076_02272174() {}

void Unk_ov076_02272174::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(this, 4));
        func_ov076_02271d20(this, 1);
        break;
    case 8:
        if (unk_718 != 0) {
            func_ov076_02271d20(this, 4);
        } else {
            func_ov076_02271d20(this, 3);
        }
        break;
    }
}

BOOL Unk_ov076_02272174::vfunc_48() {
    BOOL r = FALSE;
    if (func_0202e1cc(0x18, r) == 1) {
        return r;
    }
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov076_IsItem(u16 *p, u16 k) {
    BOOL ok;
    if (func_0204b2d4(p)) {
        u16 v = k;
        if (func_0204b25c(p) == func_0204b25c(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == k) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

void Unk_ov076_022720e4::vfunc_18() {
    func_02015a5c();
    s32 mode = func_020aa514();
    u8 *tag = data_ov076_02272080;
    u8 code = 0xff;
    switch (unk_1e) {
    case 0:
    case 1:
        if (mode == 0) {
            code = (u8)(func_02063b8c(0xef) + 0xf);
        } else {
            code = 5;
        }
        break;
    case 2:
        if (mode == 2) {
            code = 4;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (mode == 0) {
            code = 0xb;
        } else if (mode == 1) {
            code = 9;
        } else {
            code = 0xa;
        }
        break;
    }
    if (code != 0xff) {
        u8 b = code;
        func_02067a84(unk_3c, &b, tag);
    }
}

void Unk_ov076_022720e4::vfunc_14() {
    u8 *tag = data_ov076_02272080;
    u8 code = 0xff;
    u8 msg;
    u16 oa, ob, oc, v;
    s32 t0 = unk_1e;
    if (t0 == 0xfe || (t0 >= 0xf && t0 <= 0xfd)) {
        code = (u8)(func_02063b8c(2) + 0xd);
    }
    switch (unk_1e) {
    case 4:
        func_0201517c(this, func_ov076_022718bc, 0xd, 0);
        func_020151d0(this, 0);
        func_ov076_0227190c(0);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    case 10:
    case 11:
        if (unk_1e == 10) {
            unk_b4 = 0x4a38;
        } else {
            unk_b4 = 0x1373;
        }
        func_02014e60(this, &unk_b4, 0, 5, 0);
        func_02099014(&unk_b4, 0);
        unk_b0->unk_718 = 1;
        func_0202e1cc(0x18, 1);
        code = 0xc;
        break;
    case 12:
        BOOL ok;
        if (func_0204b2d4(&unk_b4)) {
            v = 0x4a38;
            if (func_0204b25c(&unk_b4) == func_0204b25c(&v)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (unk_b4 == 0x4a38) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (ok) {
            code = 0x33;
        } else {
            code = 0xfd;
        }
        break;
    case 13:
    case 14:
        if (unk_b0->unk_718 == 0) {
            if (func_02098ffc() >= 0) {
                s32 t = func_02063b8c(9);
                if (t <= 6) {
                    Unk_02063380 o0;
                    o0.func_0206338c(0, 0x15);
                    func_02062f94(&oa, &o0, 0, 0, 1, 1, 0);
                    unk_b4 = oa;
                    func_02063388(&o0);
                } else if (t == 7) {
                    Unk_02063380 o1;
                    o1.func_0206338c(4, 0x15);
                    func_02062f94(&ob, &o1, 0, 0, 1, 1, 0);
                    unk_b4 = ob;
                    func_02063388(&o1);
                } else {
                    Unk_02063380 o2;
                    o2.func_0206338c(3, 0x15);
                    func_02062f94(&oc, &o2, 0, 0, 1, 1, 0);
                    unk_b4 = oc;
                    func_02063388(&o2);
                }
                func_02014e60(this, &unk_b4, 0, 5, 0);
                func_02099014(&unk_b4, 0);
                func_0202e1cc(0x18, 1);
            }
            unk_b0->unk_718 = 1;
        }
        func_0203ffa4(0x42);
        break;
    }
    if (code != 0xff) {
        msg = code;
        func_02067a84(unk_3c, &msg, tag);
    }
}

void Unk_ov076_022720e4::vfunc_78(void *a) {
    Unk_ov076_02271744_Out *out = (Unk_ov076_02271744_Out *)a;
    if (func_0206ea84(func_ov076_022718bc)) {
        unk_ac = 0;
    } else if (func_02063b8c(2) == 0) {
        unk_ac = 1;
    } else {
        unk_ac = 2;
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = data_ov076_02271f48[unk_ac * 8];
        out->unk_00 = *(u32 *)(data_ov076_02271f44 + unk_ac * 8);
    }
}

void Unk_ov076_022720e4::func_ov076_022717b4(Unk_ov076_02272174 *o) {
    vfunc_08();
    unk_b0 = o;
    unk_b0->unk_718 = 0;
    unk_ac = 0;
}

void Unk_ov076_022720e4::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_b8 = *(Fn *)data_0213a740;
}

Unk_ov076_022720e4::~Unk_ov076_022720e4() {}

Unk_ov076_022720e4::Unk_ov076_022720e4() {
    unk_b4 = 0xfff1;
}

void Unk_ov076_022720e4::func_ov076_02271864() {
    void *r4 = unk_3c;
    Unk_ov076_02271864_Msg m;
    u16 v;
    m.unk_00 = 5;
    if (func_0206ed18()) {
        if (func_0206ed38() >= 0) {
            func_02099064();
        }
        m.unk_02 = 0x1559;
        func_02014ce4(this, &m.unk_02, 0, 5, 0);
        m.unk_00 = 6;
    }
    func_02067a84(r4, &m.unk_00, data_ov076_02272080);
}

extern "C" BOOL func_ov076_022718bc(u16 *p, s32 x) {
    if (x == 0) {
        return Unk_ov076_IsItem(p, 0x1559);
    }
    return FALSE;
}

void Unk_ov076_022720e4::func_ov076_0227190c(s32 i) {
    static Fn tbl[1] = {&Unk_ov076_022720e4::func_ov076_02271864};
    unk_b8 = tbl[i];
}

void Unk_ov076_022720e4::vfunc_84() {
    if (unk_b8) {
        (this->*unk_b8)();
        unk_b8 = *(Fn *)data_0213a740;
    }
}

BOOL Unk_ov076_02272174::func_ov076_0227199c() {
    unk_94 = 0;
    unk_8e = 0;
    func_0201a99c(unk_350, 0);
    unk_64 += 0xeb;
    if (unk_64 > unk_71c + 0x14000) {
        func_020ed188(this);
    }
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_022719e4() {
    func_020195c8(unk_564, 1, 0xfa, 0, 0, 0);
    func_0201a784(unk_3b0);
    unk_8e = 0;
    unk_94 = 0;
    func_0201a99c(unk_350, 0);
    unk_64 += 0x4000;
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271a3c() {
    Unk_ov076_02271a3c_V v;
    if (func_02015e48(unk_334, 0) == 0xf9 && func_02015e74(unk_334, this)) {
        func_ov076_02271d20(this, 5);
    } else {
        if (func_02015e48(unk_334, 0) == 0xf9 && unk_190.mid == 0xb) {
            *((u8 *)this + 0x511) = 0;
            *((u8 *)this + 0x510) = 0;
        }
        func_020e7530(&unk_8e, 0, unk_720);
        if (unk_190.mid == 0x1b) {
            Unk_ov076_02271a3c_V *pv = (Unk_ov076_02271a3c_V *)&unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y = 0;
            v.z = v.z + 0x3800;
            func_ov003_02220db0(&v, 0x5000);
            func_02090330(0x16, &v, 0, 0);
            func_02003ddc(unk_514, 0x7ed, 0x7f, 0);
        }
    }
    unk_94 = unk_8e;
    func_0201a99c(unk_350, unk_8e);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271b28() {
    func_020195c8(unk_564, 1, 0xf9, 1, 0, 0);
    func_02003ddc(unk_514, 0x814, 0x7f, 0);
    unk_8e = unk_8e + 0x8000;
    unk_94 = unk_8e;
    func_0201a99c(unk_350, unk_8e);
    s32 t = -(unk_8e / 6);
    if (t < 0) {
        t = -t;
    }
    unk_720 = t;
    func_0201a6c0(unk_3b0, 0, 0, 0, (s32)&data_021f4880, 4, data_020c6d1c, 1);
    unk_71c = unk_64;
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271be0() {
    if (func_020197a8(unk_564) == 3) {
        if (func_02019790(unk_564)) {
            if (unk_718 == 0) {
                func_ov076_02271d20(this, 0);
            } else {
                func_ov076_02271d20(this, 4);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271c28() {
    if (unk_718 == 1) {
        unk_71a = unk_71a + 0x8000;
    }
    func_020196b4(unk_564, 3, 1, 0, 0, 0, (s16)unk_71a, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271c84() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov076_02271d20(this, 2);
    }
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271cb0() {
    void *p = unk_658.func_02015aac();
    u32 r = 0;
    if (p != NULL) {
        r = func_0201bcbc(this, p);
    }
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271c80() { return TRUE; }
