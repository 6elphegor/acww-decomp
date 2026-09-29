#include "types.h"

class Unk_020d8938;
typedef void (Unk_020d8938::*Unk_020d8938_Fn)(u32 a, s32 b);

class Unk_020d8938 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
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
    virtual s32 vfunc_64();
    virtual void vfunc_68();
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
    virtual void vfunc_b4();
    virtual void vfunc_b8();
    virtual void vfunc_bc();
    virtual void vfunc_c0();
    virtual void vfunc_c4();
    virtual void vfunc_c8();
    virtual void vfunc_cc();
    virtual void vfunc_d0();
    virtual void vfunc_d4();
    virtual void vfunc_d8();
    virtual void vfunc_dc();
    virtual void vfunc_e0();
    virtual void vfunc_e4();
    virtual void vfunc_e8();
    virtual void vfunc_ec();
    virtual void vfunc_f0();
    virtual void vfunc_f4();
    virtual void vfunc_f8();
    virtual void vfunc_fc();
    virtual void vfunc_100();
    virtual void vfunc_104();
    virtual void vfunc_108();
    virtual void vfunc_10c();
    virtual void vfunc_110();
    virtual void vfunc_114();
    virtual void vfunc_118();
    virtual void vfunc_11c();
    virtual void vfunc_120();
    virtual void vfunc_124();
    virtual void vfunc_128();
    virtual void vfunc_12c();
    virtual void vfunc_130();
    virtual void vfunc_134();
    virtual void vfunc_138();
    virtual void vfunc_13c();
    virtual void vfunc_140();
    virtual s32 vfunc_144();
    virtual s32 vfunc_148();
    virtual s32 vfunc_14c();
    void func_0201c8fc();
    void func_0201c870(void *t);
    u8 func_0201c784();
    void func_0201c790();
    BOOL func_0201c7c0();
    u8 func_0201c7e0();
    void func_0201c7ec(u8 v);
    u32 func_0201c7f8();
    void func_0201c804(u32 v);

    /* 0x004 */ u8 pad_004[0xc8];
    /* 0x0cc */ Unk_020d8938_Fn unk_cc;
    /* 0x0d4 */ u8 pad_0d4[0x68];
    /* 0x13c */ s32 unk_13c[5];
    /* 0x150 */ u8 pad_150[0x4f0];
    /* 0x640 */ u8 unk_640;
    /* 0x644 */ u32 unk_644;
    /* 0x648 */ u8 unk_648;
};

struct Unk_0201c870_Tbl {
    u8 range[5][2];
    u8 pad_0a[2];
    s32 val[5];
    u8 count;
    s8 unk_21;
};

extern "C" {
extern u32 data_0213a740[2];
extern u32 data_020c7aa4[5];
extern u32 data_020c7ab8[5];
extern u8 data_021edb60[];
extern u16 data_020c6cc8;
struct Unk_020cbb18 { u8 pad[0x64]; u32 unk_64; };
extern Unk_020cbb18 *data_020cbb18;

void *func_02015a5c(void *p);
s32 func_020aa514(void *p);
void func_020aa608(void *p);
void func_020aa638(void *p, s32 idx, const u8 *a, s32 b, const u8 *c, const char *d, s32 e);
void func_020aa680(void *p, s32 a, s32 b);
s32 func_02063b8c(s32 n);
BOOL func_02014220(void *p);
s32 func_02072e88(void *p, u32 a);
s32 func_02015e48(void *p, u32 a);
s32 func_02016254(void *p, u32 a, void *q);
s32 func_020196b4(void *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
void func_02053b34(void *p, void *q);
void *func_0207e310(u32 a);
s32 func_0207856c();
s32 func_0207853c(void *p);
s32 func_02078548(void *p);
s32 func_0207854c(void *p, u32 a);
s32 func_02078550(void *p, u32 a);
s32 func_02078568(void *p, u32 a);
s32 func_020805c4();
s32 func_02003098();
s32 func_02079fd8();
s32 func_0201ad30(void *p, u32 a);
s32 func_0201ad34(void *p, u32 a);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
s32 func_02003e80(void *p, void *v);
s32 func_02003e50(void *p);
s32 func_02003ecc(void *p);
s32 func_02090330(u32 a, void *v, void *w, u32 b);
void func_020f43fc(void *p);
void func_020f440c(void *p);
extern u32 data_020d7a38[2];
}

#define AT(p, off) ((void *)((u8 *)(p) + (off)))

struct Unk_0201c050_Parent { u8 pad[0x2c]; void *unk_2c; };
struct Unk_0201c050_Obj {
    u8 pad_00[4];
    Unk_0201c050_Parent *unk_04;
    u8 pad_08[0x1c];
    u32 unk_24;
    u8 pad_28[0x6a];
    u8 unk_92;
};
extern "C" void func_0201be44();

extern "C" void func_0201c050(Unk_0201c050_Obj *p) {
    void *q = p->unk_04->unk_2c;
    if (q != NULL) {
        func_02053b34((u8 *)q + 0xec, p);
    }
    p->unk_24 = (u32)func_0201be44;
    p->unk_92 = 2;
}

class Unk_0201c078;
typedef BOOL (Unk_0201c078::*Unk_0201c078_Fn)(Unk_020d8938 *s);
typedef void (Unk_0201c078::*Unk_0201c078_State)(Unk_020d8938 *s);

class Unk_0201c078 {
public:
    void func_0201c078(Unk_020d8938 *s);
    void func_0201c1d0(Unk_020d8938 *s, s32 next);
    BOOL func_0201c2a4(Unk_020d8938 *s, u32 idx);
    BOOL func_0201c34c(Unk_020d8938 *s);
    void func_0201c384(Unk_020d8938 *s);
    BOOL func_0201c3cc(Unk_020d8938 *s);
    void func_0201c3e8(Unk_020d8938 *s);
    void func_0201c3fc(Unk_020d8938 *s);
    BOOL func_0201c444(Unk_020d8938 *s);
    void func_0201c460(Unk_020d8938 *s);
    void func_0201c474(Unk_020d8938 *s);
    BOOL func_0201c4cc(Unk_020d8938 *s);
    void func_0201c4e8(Unk_020d8938 *s);
    void func_0201c4fc(Unk_020d8938 *s);
    BOOL func_0201c510(Unk_020d8938 *s);
    BOOL func_0201c554();
    void func_0201c564();
    void func_0201c56c();
    void func_0201c574(Unk_020d8938 *s);
    void func_0201c594(Unk_020d8938 *s, u32 a, u32 b);
    void func_0201c5f0();
    void func_0201c614(u32 a, s32 b);
    void func_0201c668();
    void func_0201c678(Unk_020d8938 *s, u32 mode);
    BOOL func_0201c6d4();
    void func_0201c6e4();
    void func_0201c704();
    void func_0201c724();

    /* 0x00 */ u8 pad_00[0x40];
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x4c */ Unk_0201c078_State unk_4c;
    /* 0x54 */ u8 unk_54;
    /* 0x56 */ u16 unk_56;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ u8 unk_5a;
};


void Unk_0201c078::func_0201c078(Unk_020d8938 *s) {
    void *a = func_0207e310(*(u32 *)AT(s, 0x82c));
    u32 b = func_0207856c();
    if (func_0201c6d4()) {
        if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
            if (func_02014220(AT(s, 0x618))) {
                b = 0;
                func_0201c678(s, b);
            } else {
                if (unk_58 != 0) {
                    u32 t = unk_54;
                    if (t < 5) {
                        if (b != 0 && b == t) {
                            func_02078550(a, unk_56);
                        } else {
                            func_0207854c(a, unk_56);
                        }
                        func_02078568(a, unk_54);
                        b = unk_54;
                    }
                    unk_58 = 0;
                    func_0201c668();
                }
                func_0207853c(a);
                if (b != 0) {
                    if (func_02078548(a) == 0) {
                        b = 0;
                        func_02078568(a, b);
                    }
                }
                func_0201c678(s, b);
            }
            s32 v = func_02015e48(AT(s, 0x334), 0);
            if (v != func_02016254(AT(s, 0x334), 0, AT(s, 0x2a0))) {
                if (func_0201c34c(s)) {
                    func_020196b4(AT(s, 0x564), 0, *(u32 *)AT(s, 0x578), 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            }
            func_0201c1d0(s, b);
            unk_40 = b;
            func_0201c574(s);
        }
    }
}

void Unk_0201c078::func_0201c1d0(Unk_020d8938 *s, s32 next) {
    if (next != unk_44 && unk_44 != 5) {
        unk_4c = *(Unk_0201c078_State *)data_0213a740;
        unk_44 = 5;
    } else if (!unk_4c) {
        switch (func_02015e48(AT(s, 0x334), 0) - 0xe5) {
        case 0:
        case 1:
            if (next == 1) {
                if (func_0201c2a4(s, 1)) {
                    unk_44 = next;
                }
            }
            break;
        case 2:
        case 3:
            if (next == 2 || next == 4) {
                if (func_0201c2a4(s, 2)) {
                    unk_44 = next;
                }
            }
            break;
        case 4:
        case 5:
            if ((u8)(next + 0xfd) <= 1) {
                if (func_0201c2a4(s, 3)) {
                    unk_44 = next;
                }
            }
            break;
        }
    }
    if (unk_4c) {
        (this->*unk_4c)(s);
    }
}

BOOL Unk_0201c078::func_0201c2a4(Unk_020d8938 *s, u32 idx) {
    static Unk_0201c078_Fn tbl[5] = {
        *(Unk_0201c078_Fn *)data_0213a740,
        &Unk_0201c078::func_0201c4cc,
        &Unk_0201c078::func_0201c444,
        &Unk_0201c078::func_0201c3cc,
        &Unk_0201c078::func_0201c444,
    };
    if (idx < 5) {
        if (tbl[idx]) {
            if ((this->*tbl[idx])(s)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0201c078::func_0201c34c(Unk_020d8938 *s) {
    s32 v = func_02015e48(AT(s, 0x334), 0);
    const u32 *p = data_020c7aa4;
    for (s32 i = 0; i < 5; p++, i++) {
        if (v == *p) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_0201c078::func_0201c510(Unk_020d8938 *s) {
    s32 v = func_02015e48(AT(s, 0x334), 0);
    const u32 *p = data_020c7aa4;
    const u32 *q = data_020c7ab8;
    for (s32 i = 0; i < 5; p++, q++, i++) {
        if (v == *p || v == *q) {
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_0201c078::func_0201c384(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c3e8(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0xe) {
            unk_48 = 0;
        }
    }
}

BOOL Unk_0201c078::func_0201c3cc(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = &Unk_0201c078::func_0201c384;
    return TRUE;
}

void Unk_0201c078::func_0201c3e8(Unk_020d8938 *s) { func_0201c594(s, 0x62, 0x7f); }

void Unk_0201c078::func_0201c3fc(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c460(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0x14) {
            unk_48 = 0;
        }
    }
}

BOOL Unk_0201c078::func_0201c444(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = &Unk_0201c078::func_0201c3fc;
    return TRUE;
}

void Unk_0201c078::func_0201c460(Unk_020d8938 *s) { func_0201c594(s, 0x5c, 0x83); }

void Unk_0201c078::func_0201c474(Unk_020d8938 *s) {
    if (func_0201c510(s)) {
        if (unk_48 == 0) {
            func_0201c4fc(s);
        } else if (unk_48 == 0x14) {
            func_0201c4e8(s);
        }
        unk_48 = unk_48 + 1;
        if (unk_48 >= 0x28) {
            unk_48 = 0;
        }
    }
}

BOOL Unk_0201c078::func_0201c4cc(Unk_020d8938 *s) {
    unk_48 = 0;
    unk_4c = &Unk_0201c078::func_0201c474;
    return TRUE;
}

void Unk_0201c078::func_0201c4e8(Unk_020d8938 *s) { func_0201c594(s, 0x5b, 0x7b); }
void Unk_0201c078::func_0201c4fc(Unk_020d8938 *s) { func_0201c594(s, 0x5a, 0x7b); }

BOOL Unk_0201c078::func_0201c554() {
    if (unk_5a != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0201c078::func_0201c564() { unk_5a = 0; }
void Unk_0201c078::func_0201c56c() { unk_5a = 1; }

struct Unk_0201c574_Vec { s32 x, y, z; };

void Unk_0201c078::func_0201c574(Unk_020d8938 *s) {
    Unk_0201c574_Vec v;
    Unk_0201c574_Vec *p = (Unk_0201c574_Vec *)AT(s, 0x5c);
    v = *p;
    func_02003e80(this, &v);
}

void Unk_0201c078::func_0201c594(Unk_020d8938 *s, u32 a, u32 b) {
    if (func_0201c554()) {
        u32 v[3];
        s16 h;
        v[0] = *(u32 *)AT(s, 0x478);
        v[1] = *(u32 *)AT(s, 0x47c);
        v[2] = *(u32 *)AT(s, 0x480);
        h = *(s16 *)AT(s, 0x8e);
        func_02003e70(this, b, 0x7f, 0);
        func_02090330(a, v, &h, 0);
    }
}

void Unk_0201c078::func_0201c5f0() {
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        unk_58 = 1;
    }
}

void Unk_0201c078::func_0201c614(u32 a, s32 b) {
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (a < 5) {
            u16 t = b * 0x4b0;
            if (a == unk_54) {
                unk_56 = unk_56 + t;
            } else {
                unk_54 = a;
                unk_56 = t;
            }
        }
    }
}

void Unk_0201c078::func_0201c668() {
    unk_54 = 5;
    unk_56 = 0;
}

void Unk_0201c078::func_0201c678(Unk_020d8938 *s, u32 mode) {
    s32 r = s->vfunc_64();
    if (mode == 4 && r != 0) {
        func_020805c4();
        s32 t = func_02003098();
        if (t == 0 || t == 3) {
            mode = 3;
        } else {
            mode = 2;
        }
    }
    func_0201ad34(AT(s, 0x2a0), data_020c7aa4[mode]);
    func_0201ad30(AT(s, 0x2a0), data_020c7ab8[mode]);
}

BOOL Unk_0201c078::func_0201c6d4() {
    if (unk_59 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0201c078::func_0201c6e4() {
    if (func_0201c6d4()) {
        func_02003e50(this);
    }
    unk_59 = 0;
}

void Unk_0201c078::func_0201c704() {
    func_0201c724();
    func_02003ecc(this);
    unk_5a = 1;
    unk_59 = 1;
}

void Unk_0201c078::func_0201c724() {
    unk_59 = 0;
    unk_40 = 5;
    unk_44 = 5;
    unk_48 = 0;
    unk_4c = *(Unk_0201c078_State *)data_0213a740;
    func_0201c668();
    unk_58 = 0;
    unk_5a = 0;
}

extern "C" void *func_0201c764(void *p) {
    func_020f43fc(p);
    return p;
}

extern "C" void *func_0201c774(void *p) {
    func_020f440c(p);
    return p;
}

u8 Unk_020d8938::func_0201c784() { return unk_640; }

void Unk_020d8938::func_0201c790() {
    unk_640 = 0xb;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        unk_640 = func_02079fd8();
    }
}

BOOL Unk_020d8938::func_0201c7c0() {
    if (unk_644 != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_020d8938::vfunc_144() { return 0; }
s32 Unk_020d8938::vfunc_148() { return 0; }
s32 Unk_020d8938::vfunc_14c() { return 0; }
u8 Unk_020d8938::func_0201c7e0() { return unk_648; }
void Unk_020d8938::func_0201c7ec(u8 v) { unk_648 = v; }
u32 Unk_020d8938::func_0201c7f8() { return unk_644; }
void Unk_020d8938::func_0201c804(u32 v) { unk_644 = v; }

void Unk_020d8938::vfunc_18(u32 a) {
    if (unk_cc) {
        void *h = func_02015a5c(this);
        s32 x;
        if (h != NULL) {
            x = func_020aa514(h);
        } else {
            x = -1;
        }
        (this->*unk_cc)(a, x);
        unk_cc = *(Unk_020d8938_Fn *)data_0213a740;
    }
}

void Unk_020d8938::func_0201c870(void *t_) {
    Unk_0201c870_Tbl *t = (Unk_0201c870_Tbl *)t_;
    void *h = func_02015a5c(this);
    if (h != NULL) {
        func_0201c8fc();
        func_020aa680(h, t->count, t->unk_21);
        for (s32 i = 0; i < t->count; i++) {
            u8 r = t->range[i][0] + func_02063b8c(t->range[i][1] - t->range[i][0] + 1);
            func_020aa638(h, i, &r, 0, data_021edb60, (const char *)0, 0);
            unk_13c[i] = t->val[i];
        }
        func_020aa608(h);
    }
}

void Unk_020d8938::func_0201c8fc() {
    for (s32 i = 0; i < 5; i++) {
        unk_13c[i] = 0;
    }
}

extern "C" void func_0201c938(u32 a, Unk_0201c870_Tbl *t, u32 i, u8 lo, u8 hi, s32 val) {
    t->range[i][0] = lo;
    t->range[i][1] = hi;
    t->val[i] = val;
}

extern "C" void func_0201c91c(u32 a, Unk_0201c870_Tbl *t, u32 i, const u8 *r, s32 val) {
    func_0201c938(a, t, i, r[0], r[1], val);
}

extern "C" void func_0201c95c(u32 a, Unk_0201c870_Tbl *t) {
    for (s32 i = 0; i < 5; i++) {
        t->range[i][0] = 0;
        t->range[i][1] = 0;
        t->val[i] = 0;
    }
    t->count = 0;
    t->unk_21 = -1;
}
