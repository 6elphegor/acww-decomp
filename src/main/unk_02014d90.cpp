#include "types.h"

extern u16 data_020c6cc8;
extern u8 data_021f4880[];

extern "C" {
u32 func_020197a8(u8 *p);
u32 func_02019790(u8 *p);
BOOL func_02019578(u8 *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void func_02067a6c(void *p);
void func_02067a78(void *p);
BOOL func_0206ec6c();
u16 func_0206ea84(u32 p);
BOOL func_0206ead4(u32 a, u32 b);
BOOL func_0206ea48();
BOOL func_0206eca4(u32 a);
BOOL func_0206ec84(u32 a, u32 b);
BOOL func_0206e888(u32 a, u32 b);
BOOL func_0206f094(u32 a);
BOOL func_0206e6ec(u32 a, u32 b, u32 c);
u32 func_020156ec();
u32 func_020947f0();
s32 func_02002bdc(u32 a, u8 *b);
void func_02094574(u32 a, s16 b, u32 c);
void func_02094ae8(s32 a, u32 b);
void func_02094f48(u32 a, u32 b);
struct Unk_020155e4_Ret;
Unk_020155e4_Ret *func_020951ec(u32 a);
s32 func_0201bcbc(u8 *a, u8 *b);
s32 func_0201bc70(u8 *a, u32 b);
void func_020196b4(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, u32 g, u32 h, u32 i, u32 j);
void func_0201a6c0(u8 *p, u32 a, u32 b, u8 *c, u8 *d, u32 e, u32 f, u32 g);
}

struct Unk_020155e4_Ret {
    u8 pad_00[0x8e];
    s16 unk_8e;
};

class Unk_0201bc1c {
public:
    virtual void vfunc_00() = 0;
    virtual void vfunc_04() = 0;
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10() = 0;
    virtual void vfunc_14() = 0;
    virtual void vfunc_18() = 0;
    virtual void vfunc_1c() = 0;
    virtual void vfunc_20() = 0;
    virtual void vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual void vfunc_2c() = 0;
    virtual void vfunc_30() = 0;
    virtual void vfunc_34() = 0;
    virtual void vfunc_38(s32 flag) = 0;
    virtual void vfunc_3c() = 0;
};

extern "C" Unk_0201bc1c *func_0201bc1c();

struct Unk_02014d90_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
};

// State-machine parameter block located at +0x64 of Unk_020d7710
struct Unk_02015344_Params {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u16 unk_16;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
    /* 0x21 */ u8 pad_21[0x2c - 0x21];
    /* 0x2c */ u8 unk_2c;
    /* 0x2d */ u8 pad_2d[3];
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ u8 unk_3c;
    /* 0x3d */ u8 unk_3d;
    /* 0x3e */ u8 pad_3e[2];
    /* 0x40 */ s32 unk_40;
};

class Unk_020d7710 {
public:
    virtual void vfunc_00() = 0;
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
    virtual void vfunc_38(s32 flag);
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
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84(s32 oldState);
    virtual void vfunc_88();

    BOOL func_02014d90();
    BOOL func_02014ddc();
    BOOL func_02014e60(u16 *p, u32 b, u32 c, u32 d);
    BOOL func_02014e9c();
    BOOL func_02014f0c();
    BOOL func_02014f20();
    BOOL func_02014f38(u32 x);
    BOOL func_02014f5c();
    BOOL func_02014f74();
    BOOL func_02014f80();
    BOOL func_02014ffc();
    BOOL func_02015030();
    BOOL func_02015108();
    void func_0201511c(u32 a, u32 b, u32 c, u8 d);
    void func_02015144(u32 a, u32 b);
    void func_0201514c(u32 a, u32 b, u32 c);
    void func_02015158(u32 a, u32 b, u32 c);
    void func_02015170(u32 a, u32 b);
    void func_0201517c(u32 a, u32 b, u32 c);
    void func_020151a8(u32 a, u32 b, u32 c);
    BOOL func_020151d0(s32 x);
    void func_020151f4();
    BOOL func_02015304();
    BOOL func_02015314(s32 x);
    void func_02015344(Unk_02015344_Params *p);
    void func_02015398();
    void func_020143fc(s32 x);
    u8 *func_02015748(u32 x);
    void func_020155a4(u8 *p);
    void func_020155e4(u8 *p);

    /* 0x04 */ u8 pad_04[0x38];
    /* 0x3c */ Unk_02014d90_Node *unk_3c;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[0x0f];
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u32 unk_70;
    /* 0x74 */ u32 unk_74;
    /* 0x78 */ u16 unk_78;
    /* 0x7a */ u16 unk_7a;
    /* 0x7c */ u32 unk_7c;
    /* 0x80 */ u8 unk_80;
    /* 0x81 */ u8 pad_81;
    /* 0x82 */ u8 unk_82;
    /* 0x83 */ u8 unk_83;
    /* 0x84 */ u8 unk_84;
    /* 0x85 */ u8 pad_85[0x0b];
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ u32 unk_a4;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
};

typedef BOOL (Unk_020d7710::*Unk_020d7710_StateFn)();

BOOL Unk_020d7710::func_02014d90() {
    BOOL result = FALSE;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (func_020197a8(unk_48 + 0x564) == 13 && func_02019790(unk_48 + 0x564) != 0) {
            func_02067a6c(unk_3c);
            unk_a8 = 2;
            result = TRUE;
        }
    }
    return result;
}

BOOL Unk_020d7710::func_02014ddc() {
    if (unk_48 != NULL) {
        if (unk_3c != NULL) {
            func_02067a78(unk_3c);
        }
        if (func_020197a8(unk_48 + 0x564) == 8 && func_02019790(unk_48 + 0x564) == 0) {
            vfunc_38(0);
        } else if (unk_3c != NULL) {
            if (func_02019578(unk_48 + 0x564, 4, &unk_7a, unk_7c, unk_90, unk_94, unk_44)) {
                unk_a8 = 1;
            }
        }
    }
    return FALSE;
}

BOOL Unk_020d7710::func_02014e60(u16 *p, u32 b, u32 c, u32 d) {
    BOOL result = FALSE;
    if (func_02015314(3)) {
        unk_7a = *p;
        unk_7c = b;
        unk_90 = c;
        unk_94 = d;
        result = TRUE;
    }
    return result;
}

BOOL Unk_020d7710::func_02014e9c() {
    static Unk_020d7710_StateFn tbl[2] = {&Unk_020d7710::func_02014f20, &Unk_020d7710::func_02014f0c};
    BOOL r = FALSE;
    u8 i = unk_a8;
    if (i < 2) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL Unk_020d7710::func_02014f0c() {
    BOOL result = FALSE;
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        result = TRUE;
    }
    return result;
}

BOOL Unk_020d7710::func_02014f20() {
    if (unk_3c != NULL) {
        unk_3c->unk_14 = unk_a4;
        unk_a8 = 1;
    }
    return FALSE;
}

BOOL Unk_020d7710::func_02014f38(u32 x) {
    if (func_02015314(2)) {
        unk_a4 = x;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d7710::func_02014f5c() {
    BOOL result = FALSE;
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        result = TRUE;
        unk_3c->unk_08 = result;
    }
    return result;
}

BOOL Unk_020d7710::func_02014f74() {
    return func_02015314(1);
}

BOOL Unk_020d7710::func_02014f80() {
    static Unk_020d7710_StateFn tbl[3] = {&Unk_020d7710::func_02015108, &Unk_020d7710::func_02015030, &Unk_020d7710::func_02014ffc};
    BOOL r = FALSE;
    u8 i = unk_a8;
    if (i < 3) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL Unk_020d7710::func_02014ffc() {
    BOOL result = FALSE;
    if (func_0206ec6c()) {
        if (unk_84 != 1) {
            unk_3c->unk_08 = 1;
        }
        unk_a8 = 3;
        result = TRUE;
    }
    return result;
}

BOOL Unk_020d7710::func_02015030() {
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        BOOL r = FALSE;
        switch (unk_64) {
        case 0: {
            u16 v = unk_78;
            if (unk_74 != 0) {
                v = func_0206ea84(unk_74);
            }
            r = func_0206ead4(v, unk_80);
            break;
        }
        case 1:
            unk_84 = 1;
            r = func_0206ea48();
            break;
        case 2:
            r = func_0206eca4(unk_82);
            break;
        case 3:
            r = func_0206ec84(unk_82, unk_83);
            break;
        case 4:
            r = func_0206e888(unk_68, unk_6c);
            break;
        case 5:
            r = func_0206f094(unk_70);
            break;
        case 6:
            r = func_0206e6ec(unk_82, unk_98, unk_9c);
            break;
        case 7:
            if (unk_84 != 1) {
                unk_3c->unk_08 = 1;
            }
            unk_a8 = 3;
            return TRUE;
        }
        if (r) {
            unk_a8 = 2;
        }
    }
    return FALSE;
}

BOOL Unk_020d7710::func_02015108() {
    if (unk_3c != NULL) {
        unk_3c->unk_14 = 1;
        unk_a8 = 1;
    }
    return FALSE;
}

void Unk_020d7710::func_0201511c(u32 a, u32 b, u32 c, u8 d) {
    unk_82 = a;
    unk_98 = b;
    unk_9c = c;
    unk_84 = d;
}

void Unk_020d7710::func_02015144(u32 a, u32 b) {
    unk_70 = a;
    unk_84 = b;
}

void Unk_020d7710::func_0201514c(u32 a, u32 b, u32 c) {
    unk_68 = a;
    unk_6c = b;
    unk_84 = c;
}

void Unk_020d7710::func_02015158(u32 a, u32 b, u32 c) {
    unk_82 = a;
    unk_83 = b;
    unk_84 = c;
}

void Unk_020d7710::func_02015170(u32 a, u32 b) {
    unk_82 = a;
    unk_84 = b;
}

void Unk_020d7710::func_0201517c(u32 a, u32 b, u32 c) {
    unk_78 = 0;
    unk_74 = a;
    unk_80 = b;
    unk_7a = 0xfff1;
    unk_84 = c;
}

void Unk_020d7710::func_020151a8(u32 a, u32 b, u32 c) {
    unk_78 = a;
    unk_74 = 0;
    unk_80 = b;
    unk_7a = 0xfff1;
    unk_84 = c;
}

BOOL Unk_020d7710::func_020151d0(s32 x) {
    BOOL result = FALSE;
    if (func_02015314(0)) {
        unk_64 = x;
        result = TRUE;
    }
    return result;
}

void Unk_020d7710::vfunc_88() {
}

void Unk_020d7710::func_020151f4() {
    static Unk_020d7710_StateFn tbl[12] = {
        &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f5c, &Unk_020d7710::func_02014e9c, &Unk_020d7710::func_02014f80,
        &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80,
        &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80, &Unk_020d7710::func_02014f80};
    if (unk_60 < 12) {
        if ((this->*tbl[unk_60])()) {
            s32 old = unk_60;
            unk_a9 = 0;
            unk_60 = 12;
            vfunc_84(old);
        }
    }
}

BOOL Unk_020d7710::func_02015304() {
    if (unk_a9 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d7710::func_02015314(s32 x) {
    BOOL result = FALSE;
    if (unk_60 == 12 || func_02015304() == 0) {
        unk_60 = x;
        unk_a8 = 0;
        result = TRUE;
        unk_a9 = result;
    }
    return result;
}

void Unk_020d7710::func_02015344(Unk_02015344_Params *p) {
    p->unk_00 = 8;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_14 = 0;
    p->unk_10 = 0;
    p->unk_1c = 13;
    p->unk_16 = 0xfff1;
    p->unk_18 = 0;
    p->unk_1e = 0x45;
    p->unk_1f = 0;
    p->unk_20 = 2;
    p->unk_2c = 12;
    p->unk_30 = 2;
    p->unk_3c = 1;
    p->unk_34 = 0;
    p->unk_38 = 0;
    p->unk_3d = 0;
    p->unk_40 = 0;
}

void Unk_020d7710::func_02015398() {
    unk_60 = 12;
    unk_a8 = 0;
    unk_a9 = 0;
    func_02015344((Unk_02015344_Params *)&unk_64);
}

void Unk_020d7710::vfunc_64() {
    func_020143fc(1);
}

void Unk_020d7710::vfunc_60() {
    u8 *p7 = func_02015748(1);
    if (p7 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 0: {
            u8 *p4 = func_02015748(s);
            if (p4 != NULL) {
                Unk_0201bc1c *h = func_0201bc1c();
                s32 v = func_0201bcbc(p4, p7);
                vfunc_58();
                if (h != NULL) {
                    h->vfunc_38(0);
                }
                func_020196b4(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            func_020155a4(p7);
            break;
        }
    }
}

void Unk_020d7710::vfunc_5c() {
    u8 *p4 = func_02015748(1);
    if (p4 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 0: {
            u8 *p = func_02015748(s);
            if (p != NULL) {
                func_0201a6c0(p + 0x3b0, 2, 0, p4, data_021f4880, 4, 0, 0);
            }
            break;
        }
        case 2:
            func_020155e4(p4);
            break;
        }
    }
}

void Unk_020d7710::vfunc_58() {
    u8 *p7 = func_02015748(0);
    if (p7 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 1: {
            u8 *p4 = func_02015748(s);
            if (p4 != NULL) {
                Unk_0201bc1c *h = func_0201bc1c();
                s32 v = func_0201bcbc(p4, p7);
                vfunc_50();
                if (h != NULL) {
                    h->vfunc_38(0);
                }
                func_020196b4(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            func_020155a4(p7);
            break;
        }
    }
}

void Unk_020d7710::vfunc_54() {
    u8 *p4 = func_02015748(0);
    if (p4 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 1: {
            u8 *p = func_02015748(s);
            if (p != NULL) {
                func_0201a6c0(p + 0x3b0, 2, 0, p4, data_021f4880, 4, 0, 0);
            }
            break;
        }
        case 2:
            func_020155e4(p4);
            break;
        }
    }
}

void Unk_020d7710::func_020155a4(u8 *p) {
    u32 a = func_020156ec();
    u32 b = func_020947f0();
    if (b != 0) {
        s32 s = func_02002bdc(b, p + 0x5c);
        func_02094574(0, 0, a);
        func_02094ae8(s, a);
        func_02094f48(1, a);
    }
}

void Unk_020d7710::func_020155e4(u8 *p) {
    u32 a = func_020156ec();
    u32 b = func_020947f0();
    if (b != 0) {
        s32 s = func_02002bdc(b, p + 0x5c);
        s16 d = s - func_020951ec(4)->unk_8e;
        func_02094574(0, d, a);
    }
}

void Unk_020d7710::vfunc_50() {
    u8 *p5 = func_02015748(unk_50);
    if (p5 != NULL) {
        Unk_0201bc1c *h = func_0201bc1c();
        u32 u = func_020156ec();
        s32 v = func_0201bc70(p5, u);
        if (h != NULL) {
            h->vfunc_38(0);
        }
        func_0201a6c0(p5 + 0x3b0, 4, 0, NULL, data_021f4880, u, 0, 0);
        func_020196b4(p5 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
    }
}
