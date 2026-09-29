#include "types.h"

struct Unk_020c0acc_Vec {
    s32 x, y, z;
};

// Sub-object at 0x658 of Unk_020e6924 (has a vtable).
class Unk_020c0624_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class Unk_020e6924;
typedef BOOL (Unk_020e6924::*Unk_020c11b8_Fn)();

struct Unk_020c11b8_Ent {
    Unk_020c11b8_Fn a;
    Unk_020c11b8_Fn b;
};

extern "C" {
BOOL func_0201622c(void *a, s32 b, void *c);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_020902d4(s32 a, void *b, void *c, s32 d);
void func_020902f8(s32 a);
BOOL func_02019790(void *a);
void func_020195c8(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020196b4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
s32 func_020197a8(void *a);
s32 func_020b50e8(void);
s32 func_020b50dc(void);
void func_02086f98(void *a);
s32 func_02086fa8(void *a);
void func_02086fb8(void *a, void *b);
void func_02086fc4(void *a, void *b);
void func_020c062c(void *a, s32 b);
s32 func_020c0624(void *a);
void func_02003e70(void *a, s32 b, s32 c, s32 d);
void *func_0209750c(void);
void *func_020850e0(void);
void *func_02085178(void *a);
void *func_020947f0(s32 a);
s32 func_0201bd20(void *a, s32 b);
s32 func_0201bc4c(void *a, s32 b);
s32 func_0201bcbc(void *a, s32 b);
void *func_0204da0c(void);
void func_0204d684(void *a, Unk_020c0acc_Vec *b, s32 c, s32 d);
void func_0204edd8(Unk_020c0acc_Vec *a, Unk_020c0acc_Vec *b);
void func_0204ed8c(Unk_020c0acc_Vec *a, s32 b, s32 c);
s32 func_020986a4(void *a);
BOOL func_02087314(s32 a);
BOOL func_02098044(void *a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0202e3a4(void *a);
BOOL func_0202e360(void);
void func_0203d67c(void *a);
void func_0203d984(void);
void func_0203d990(void);
BOOL func_02014220(void *a);
void func_020141b4(void *a, s32 b, s32 c, s32 d);
void func_0201a6c0(void *a, s32 b, s32 c, s32 d, u8 *e, s32 f, s32 g, s32 h);
s32 func_0201a7e8(void *a);
void func_0201a9ec(void *a, void *b);
void func_0201ad34(void *a, s32 b);
void func_0201ad30(void *a, s32 b);
s32 func_02015aac(void *a);
void func_02015ab0(void *a, s32 b);
BOOL func_02077e7c(Unk_020c0acc_Vec *a, s32 b, s32 c, s32 d);
void func_02077f40(Unk_020c0acc_Vec *a, s32 b);
s32 func_020e9650(void *a, void *b);
BOOL func_020e7500(void *a);


extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 data_021f4880[];
extern Unk_020c11b8_Ent data_021f4594[];
extern Unk_020c11b8_Ent data_021f459c[];
extern Unk_020e6924 *data_021f4578;
extern u8 data_020e6840[];
extern u8 data_020e6870[];
}

class Unk_020e6924 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual BOOL vfunc_40();
    virtual BOOL vfunc_44();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();
    virtual BOOL vfunc_60();
    virtual BOOL vfunc_64();
    virtual BOOL vfunc_68();
    virtual void *vfunc_6c();
    virtual void *vfunc_70();

    BOOL func_020c0abc();
    BOOL func_020c0acc();
    BOOL func_020c0b9c();
    BOOL func_020c0c08();
    BOOL func_020c0dc8();
    BOOL func_020c0e04();
    BOOL func_020c0e28();
    BOOL func_020c0e48();
    BOOL func_020c0e4c();
    BOOL func_020c0e50();
    BOOL func_020c0e7c();
    BOOL func_020c0efc();
    BOOL func_020c0f80();
    BOOL func_020c0fdc();
    BOOL func_020c108c();
    BOOL func_020c1140();
    BOOL func_020c1144();
    void func_020c11b8(s32 state);
    void func_020c121c(s32 state);
    BOOL func_020c12ac();
    s32 func_020c12cc();

    /* 0x004 */ u8 unk_04[0x58];
    /* 0x05c */ Unk_020c0acc_Vec unk_5c;
    /* 0x068 */ u8 unk_68[0x26];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 unk_90[0x100];
    /* 0x190 */ u32 unk_190;
    /* 0x194 */ u8 unk_194[0x10c];
    /* 0x2a0 */ u8 unk_2a0[0x94];
    /* 0x334 */ u8 unk_334[0x1c];
    /* 0x350 */ u8 unk_350[0x58];
    /* 0x3a8 */ u8 unk_3a8[8];
    /* 0x3b0 */ u8 unk_3b0[0xc8];
    /* 0x478 */ u8 unk_478[0x70];
    /* 0x4e8 */ u32 unk_4e8;
    /* 0x4ec */ u8 unk_4ec[0x24];
    /* 0x510 */ u8 unk_510;
    /* 0x511 */ u8 unk_511[3];
    /* 0x514 */ u8 unk_514[0x50];
    /* 0x564 */ u8 unk_564[0xb4];
    /* 0x618 */ u8 unk_618[0x3c];
    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_020c0624_Sub unk_658;
    /* 0x65c */ u8 unk_65c[0xb1];
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u16 unk_70e;
    /* 0x710 */ u16 unk_710;
    /* 0x714 */ Unk_020c0acc_Vec unk_714;
    /* 0x720 */ s32 unk_720;
    /* 0x724 */ u8 unk_724;
};

BOOL Unk_020e6924::func_020c0abc() {
    unk_724 = 0;
    return TRUE;
}

BOOL Unk_020e6924::func_020c0acc() {
    Unk_020c0acc_Vec v;
    s16 a;
    if (func_0201622c(&unk_334, 0x122, &unk_2a0)) {
        a = unk_8e;
        Unk_020c0acc_Vec *src = &unk_5c;
        v = *src;
        if (((unk_190 << 4) >> 16) == 7) {
            func_02090330(0x39, &v, &a, 0);
        }
        if (((unk_190 << 4) >> 16) == 9) {
            func_02090330(0x38, &v, &a, 0);
        }
        if (func_02019790(&unk_564)) {
            func_020195c8(&unk_564, 1, 0x123, 1, data_020c6cc8, 0);
        }
    }
    if (func_0201622c(&unk_334, 0x123, &unk_2a0)) {
        if (func_02019790(&unk_564)) {
            func_020c11b8(1);
        }
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c0b9c() {
    if (func_020b50e8() == 0) {
        func_02086f98(func_02085178(func_020850e0()));
    }
    func_020195c8(&unk_564, 1, 0x122, 1, data_020c6cc8, 0);
    func_020c062c(&unk_658, 4);
    func_02003e70(&unk_514, 0x7db, 0x7f, 0);
    return TRUE;
}

BOOL Unk_020e6924::func_020c0c08() {
    Unk_020c0acc_Vec a, b, c, d;
    void *p = func_0209750c();
    void *q;
    s32 t;
    if (p == NULL) {
        return TRUE;
    }
    if (unk_510 == 0 && func_020b50e8() == 0) {
        func_0204d684(func_0204da0c(), &a, 0, 0);
        func_0204edd8(&b, &unk_5c);
        if (b.z > a.z) {
            unk_510 = 1;
        }
    }
    if (unk_510 == 0 && func_020b50e8() == 0xb) {
        func_0204edd8(&d, &unk_5c);
        func_0204ed8c(&c, 6, 15);
        if (d.z < c.z) {
            unk_510 = 1;
        }
    }
    q = func_020947f0(4);
    if (q == NULL) {
        return TRUE;
    }
    t = func_0201bd20(this, 4);
    if ((func_020b50e8() == 0 || (func_020b50e8() == 0xc && func_02087314(func_020986a4(p)) == 0)) && func_020197a8(&unk_564) == 2) {
        s32 v, d2;
        if (t > 0x6000) {
            func_020c11b8(6);
            return TRUE;
        }
        v = func_0201a7e8(&unk_3a8);
        d2 = func_020e9650(&unk_714, &unk_5c);
        unk_714 = unk_5c;
        if (d2 <= 0x29 || v != 0) {
            if (func_020e7500(&unk_70e) == 0) {
                func_020c11b8(1);
                return TRUE;
            }
        } else {
            unk_70e = 0x28;
        }
    }
    if (t > 0x2800) {
        if (func_020197a8(&unk_564) != 2) {
            func_020196b4(&unk_564, 2, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
        func_0201a9ec(&unk_350, q);
    } else if (func_020197a8(&unk_564) != 0) {
        func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c0dc8() {
    unk_4e8 &= ~2;
    unk_70e = 0x28;
    unk_714 = unk_5c;
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e04() {
    if (func_020e7500(&unk_710) == 0) {
        func_020c11b8(5);
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e28() {
    unk_4e8 &= ~2;
    unk_710 = 0x28;
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e48() {
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e4c() {
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e50() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_020c11b8(7);
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c0e7c() {
    s32 p, r4;
    func_0201a6c0(&unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    p = func_02015aac(&unk_658);
    r4 = 0;
    if (p != 0) {
        r4 = func_0201bcbc(this, p);
    }
    func_0201ad34(&unk_2a0, 0xac);
    func_0201ad30(&unk_2a0, 0xac);
    func_020141b4(&unk_618, 0, r4, 0);
    return TRUE;
}

BOOL Unk_020e6924::func_020c0efc() {
    unk_4e8 |= 2;
    if (func_0201622c(&unk_334, 0xab, &unk_2a0) && func_02019790(&unk_564)) {
        func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        func_0201ad34(&unk_2a0, 0xac);
        func_0201ad30(&unk_2a0, 0xac);
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c0f80() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0xab, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6924::func_020c0fdc() {
    if (func_0201622c(&unk_334, 0x53, &unk_2a0) && func_02019790(&unk_564)) {
        func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        func_0201ad34(&unk_2a0, 0x54);
        func_0201ad30(&unk_2a0, 0x54);
    }
    if (unk_720 == -1) {
        unk_720 = func_02090330(0x54, &unk_478, &unk_8e, 0);
    }
    if (unk_720 != -1) {
        func_020902d4(unk_720, &unk_478, &unk_8e, 0);
    }
    return TRUE;
}

BOOL Unk_020e6924::func_020c108c() {
    Unk_020c0acc_Vec a, b;
    unk_4e8 |= 2;
    func_0201a6c0(&unk_3b0, 0, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0x53, 1, data_020c6cc8, 0);
    func_0204d684(func_0204da0c(), &a, 0, 0);
    func_0204edd8(&b, &unk_5c);
    if (b.z < a.z) {
        if (b.x >= a.x - 0x4000 && b.x <= a.x + 0x4000) {
            unk_5c.z = a.z + 0x1000;
        }
    }
    unk_510 = 1;
    return TRUE;
}

BOOL Unk_020e6924::func_020c1140() {
    return TRUE;
}

BOOL Unk_020e6924::func_020c1144() {
    unk_4e8 |= 2;
    func_0201a6c0(&unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

void Unk_020e6924::func_020c11b8(s32 state) {
    BOOL result = TRUE;
    Unk_020c11b8_Ent *e = &data_021f4594[state];
    if (e->a != 0) {
        result = (this->*(e->a))();
    }
    if (result) {
        if (state != 1 && unk_720 != -1) {
            func_020902f8(unk_720);
            unk_720 = -1;
        }
        unk_654 = state;
    }
}

void Unk_020e6924::func_020c121c(s32 state) {
    switch (state) {
    case 0:
    case 1:
        unk_658.vfunc_08();
        func_02015ab0(&unk_658, func_0201bc4c(this, 4));
        if (func_020c0624(&unk_658) != 6) {
            func_020c11b8(3);
        }
        break;
    case 8:
        func_020c062c(&unk_658, 3);
        if (func_02086fa8(func_02085178(func_020850e0())) != 0) {
            func_020c11b8(5);
        } else if (unk_70d != 0) {
            func_020c11b8(2);
        } else {
            func_020c11b8(0);
        }
        break;
    }
}

BOOL Unk_020e6924::func_020c12ac() {
    return func_02014220(&unk_618) == 0;
}

s32 Unk_020e6924::func_020c12cc() {
    s32 r = 0;
    if (data_021f459c[unk_654].a != 0) {
        r = (this->*(data_021f4594[unk_654].b))();
    }
    if (func_020b50e8() == 0) {
        func_02086fc4(func_02085178(func_020850e0()), &unk_5c);
    }
    if (func_020b50e8() == 0xb) {
        if (func_02087314(func_020986a4(func_0209750c()))) {
            func_02086fc4(func_02085178(func_020850e0()), &unk_5c);
        }
    }
    return r;
}

void *Unk_020e6924::vfunc_70() {
    return data_020e6840;
}

void *Unk_020e6924::vfunc_6c() {
    return data_020e6870;
}

BOOL Unk_020e6924::vfunc_0c() {
    if (func_0202e360() == 0) {
        return FALSE;
    }
    data_021f4578 = NULL;
    if (func_020b50e8() == 0x2f) {
        func_0203d984();
    }
    return TRUE;
}

BOOL Unk_020e6924::vfunc_00() {
    void *p;
    if (func_0202e3a4(this) == 0) {
        return FALSE;
    }
    data_021f4578 = this;
    unk_720 = -1;
    p = func_0209750c();
    if (func_020b50e8() == 0) {
        func_0204edd8(&unk_5c, &unk_5c);
        if (func_02077e7c(&unk_5c, 1, 0, 0)) {
            func_02077f40(&unk_5c, 0);
            unk_5c.x += 0x2000;
            unk_5c.z += 0x2000;
        }
        if (func_02086fa8(func_02085178(func_020850e0())) != 0) {
            if (func_020b50dc() == 0xb) {
                func_0204d684(func_0204da0c(), &unk_5c, 0, 0);
                unk_5c.z -= 0x2000;
                func_020c062c(&unk_658, 3);
                func_020c11b8(5);
                unk_510 = 0;
            } else {
                func_020c062c(&unk_658, 5);
                func_020c11b8(1);
            }
        } else if (func_02098044(p, 0x33) == 0) {
            if (func_02098044(p, 0x31) == 0) {
                func_020c062c(&unk_658, 0);
            } else {
                func_020c062c(&unk_658, 1);
            }
            func_020c11b8(1);
        } else {
            if (func_0202e1cc(0x29, 0) == 0) {
                func_020c062c(&unk_658, 2);
            } else {
                func_020c062c(&unk_658, 3);
            }
            func_020c11b8(1);
        }
    } else if (func_020b50e8() == 0xb) {
        func_020c062c(&unk_658, 3);
        func_020c11b8(5);
        unk_510 = 0;
    } else if (func_020b50e8() == 0xc) {
        func_02086fb8(func_02085178(func_020850e0()), &unk_5c);
        func_020c062c(&unk_658, 3);
        func_020c11b8(5);
    } else if (func_020b50e8() == 0x2f) {
        unk_510 = 0;
        func_0203d990();
        func_020c11b8(8);
    }
    return TRUE;
}
