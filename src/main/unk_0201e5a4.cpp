#include "types.h"

struct Unk_0201e5a4_Owner {
    u8 pad_00[0x82c];
    u32 unk_82c;
};

struct Unk_0201e5a4_Msg {
    u8 pad_00[8];
    s32 unk_08;
};

struct Unk_0201e5a4_Ret {
    s32 unk_00;
    u8 unk_04;
};

struct Unk_0201e9d0_S {
    u8 unk_00;
    u16 unk_02;
};

struct Unk_0201eabc_T {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 pad_22[6];
};

struct Unk_0201e5a4_Out {
    u8 *unk_00;
    u8 unk_04;
};

struct Unk_0201e710_Tmp {
    u32 unk_00;
};

struct Unk_020c7758_T {
    u32 unk_00;
    u8 unk_04;
};

extern Unk_020c7758_T data_020c7758;
extern u8 data_021ed24c[];
extern u8 data_021be920[];
extern u8 data_021be938[];
extern u8 data_021be950[];
extern u8 data_021beeb0[];
extern Unk_0201e9d0_S data_021edb5c;
extern u8 data_021bee98[];
extern u8 data_021beec8[];
extern u8 data_021bee80[];
extern u8 data_021bee50[];
extern u8 data_021bee08[];
extern u8 data_021bee38[];
extern u8 data_021bee68[];
extern u8 data_021bee20[];
extern u32 data_020c7a68[];

class Unk_0201e5a4;
typedef void (Unk_0201e5a4::*Unk_0201e5a4_RetFn)(Unk_0201e5a4_Ret *);
typedef void (Unk_0201e5a4::*Unk_0201e5a4_Fn)(u32);
typedef void (Unk_0201e5a4::*Unk_0201e5a4_VoidFn)();

extern "C" {
u32 func_02085828(u8 *p);
s32 func_0203f42c(u32 a);
s32 func_02063b8c(u32 a);
s32 func_02080a74(u32 a);
s32 func_02080a98(u32 a);
s32 func_020030b4(u32 a);
u32 func_020805c4(u32 p);
u32 func_02003098(u32 p);
s32 func_02080dd8(u32 a);
void func_02067a84(Unk_0201e5a4_Msg *obj, Unk_0201e9d0_S *p, s32 v);
void func_020679c0(Unk_0201e5a4_Msg *obj, u32 a);
u32 func_0209750c();
u32 func_02098750(u32 a);
s32 func_02097edc(u32 a);
u32 func_02097f6c(u32 a, u32 b);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void func_0206338c(Unk_0201e710_Tmp *o, u32 a, u32 b);
void func_02063388(Unk_0201e710_Tmp *o);
void func_02062f94(u16 *a, Unk_0201e710_Tmp *o, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02097f30(u32 a, u16 *b, s32 c, u32 d);
u32 func_020986c8(u32 a);
void func_0203c42c(u32 a, u16 *b, u32 c, u32 d);
s32 func_0206ed18();
u32 func_0206ed38();
void func_0209909c(u16 *a, u32 b, u32 c);
s32 func_02098f30(u32 *a, BOOL (*f)(u16 *));
}

class Unk_0201e5a4 {
public:
    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ Unk_0201e5a4_Msg *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ Unk_0201e5a4_Fn unk_ac;
    /* 0xb4 */ u8 pad_b4[0xfc - 0xb4];
    /* 0xfc */ Unk_0201e5a4_Owner *unk_fc;
    /* 0x100 */ u8 unk_100[0x1e];
    /* 0x11e */ u8 unk_11e;
    /* 0x11f */ u8 pad_11f;
    /* 0x120 */ u16 unk_120;
    /* 0x122 */ u8 pad_122[2];
    /* 0x124 */ s32 unk_124;
    /* 0x128 */ u32 unk_128;
    /* 0x12c */ u8 pad_12c[0x198 - 0x12c];
    /* 0x198 */ u16 unk_198;

    void func_0201e5a4(u32 arg);
    void func_0201e6b0(Unk_0201e5a4_Out *out);
    void func_0201e710();
    void func_0201e81c(Unk_0201e5a4_Out *out);
    void func_0201e87c();
    void func_0201e914(Unk_0201e5a4_Out *out);
    void func_0201e974();
    void func_0201e9d0();
    void func_0201ea8c();
    void func_0201eabc();
    void func_0201eb2c(Unk_0201e5a4_Out *out);
    void func_0201eb8c();
    void func_0201eb94();
    void func_0201eb9c();
    void func_0201ebf0(Unk_0201e5a4_Out *out);
    void func_0201ec50(Unk_0201e5a4_Out *out);
    void func_0201ecb0(Unk_0201e5a4_Out *out);
    void func_0201ed3c(u32 arg);
    void func_0201ee9c();

    void func_0202d048(u32 *a, s32 *b, u32 c, u32 d);
    void func_0202d1d4(u8 *s);
    void func_0202d184(u8 *a, u8 *b, u32 c, u32 d, u32 e, u32 f, u32 g, u8 h);
    void func_0202d328(Unk_0201e5a4_VoidFn f);
    void func_0202d33c(Unk_0201e5a4_VoidFn f);
    void func_0202d1c0(Unk_0201e5a4_VoidFn f);
    BOOL func_02020320(u32 a);
    void func_0201517c(u32 a, u32 b, u32 c);
    void func_020151d0(u32 a);
    BOOL func_02014e60(u16 *p, u32 b, u32 c, u32 d);
    BOOL func_02014ce4(u16 *p, u32 b, u32 c, u32 d);
    BOOL func_0201578c(u16 *p, u32 b, u32 c);
};

extern "C" {
BOOL func_0201ee4c(u16 *p, s32 a);
BOOL func_0201ee7c(u16 *p);
void func_0201fc48(Unk_0201e5a4 *p);
void func_02029d84(Unk_0201e5a4 *p);
void func_0201c95c(Unk_0201e5a4 *self, Unk_0201eabc_T *out);
void func_0201c938(Unk_0201e5a4 *self, Unk_0201eabc_T *a, u32 b, u32 c, u32 d, u8 *e);
void func_0201c870(Unk_0201e5a4 *self, Unk_0201eabc_T *a);
}

void Unk_0201e5a4::func_0201e5a4(u32 arg) {
    u32 r6 = unk_fc->unk_82c;
    u32 v = func_02085828(data_021ed24c);
    u32 r5 = 2;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r6, 0);
        return;
    }
    if (func_0203f42c(0x11) == 6 && unk_128 != 0 && func_02080a74(unk_128) != 0) {
        r5 = 3;
    }
    r5 = func_02063b8c(r5);
    if (unk_128 == 0 || func_02080a74(unk_128) == 0 || r5 == 2) {
        func_0202d1d4(data_021be920);
    } else if (r5 == 0 && func_020030b4(v) != 0) {
        func_0202d1d4(data_021be938);
    } else {
        func_0202d1d4(data_021be950);
    }
    if (unk_ac) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r6, 0);
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

void Unk_0201e5a4::func_0201e6b0(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xf, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201e81c(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0x13, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201e914(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0x11, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201eb2c(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xd, 2);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201ebf0(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 7, data_020c7758.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201ec50(Unk_0201e5a4_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, 0xa, data_020c7758.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201e5a4::func_0201ecb0(Unk_0201e5a4_Out *out) {
    u32 r4;
    u32 r6;
    s32 v = func_0203f42c(0x10);
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        r4 = 2;
        r6 = 0;
    } else if (v >= 1 && v <= 5) {
        r4 = 3;
        r6 = 2;
    } else {
        r4 = 2;
        r6 = 5;
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7758.unk_00, 1, r6, r4);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

BOOL func_0201ee4c(u16 *p, s32 a) {
    BOOL r = FALSE;
    BOOL in = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        in = TRUE;
    }
    if (in && a == 0) {
        r = TRUE;
    }
    return r;
}

BOOL func_0201ee7c(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        r = TRUE;
    }
    return r;
}

void Unk_0201e5a4::func_0201eb8c() { func_0201fc48(this); }
void Unk_0201e5a4::func_0201eb94() { func_02029d84(this); }

void Unk_0201e5a4::func_0201e87c() {
    s32 r4;
    if (unk_128 != 0) {
        r4 = func_02080dd8(unk_128);
    } else {
        r4 = 0;
    }
    if (r4 + 0x100 > func_02063b8c(0x200)) {
        Unk_0201e9d0_S c;
        Unk_0201e5a4_Ret t;
        func_0202d1d4(data_021beeb0);
        if (unk_ac) {
            (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
        }
        c.unk_00 = t.unk_04;
        func_02067a84(unk_3c, &c, t.unk_00);
    } else {
        func_02067a84(unk_3c, &data_021edb5c, data_020c7758.unk_00);
    }
}

void Unk_0201e5a4::func_0201e974() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    func_0202d1d4(data_021bee98);
    if (unk_3c != NULL) {
        unk_3c->unk_08 = 1;
    }
    if (unk_ac) {
        (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
    }
    c.unk_00 = t.unk_04;
    func_02067a84(unk_3c, &c, t.unk_00);
}

void Unk_0201e5a4::func_0201eb9c() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    func_0202d1d4(data_021bee50);
    if (unk_ac) {
        (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
    }
    c.unk_00 = t.unk_04;
    func_02067a84(unk_3c, &c, t.unk_00);
}

void Unk_0201e5a4::func_0201ed3c(u32 arg) {
    u32 r4 = unk_fc->unk_82c;
    u32 r6 = func_02063b8c(10) & 1;
    u32 r7 = func_02063b8c(10) & 1;
    u32 tmp;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r4, 0);
        return;
    }
    if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
        func_0202d1d4(data_021bee08);
    } else if (r6 == 0) {
        func_0202d1d4(data_021bee38);
    } else if (r7 == 0) {
        if (func_02098f30(&tmp, func_0201ee7c) > 0) {
            func_0202d1d4(data_021bee68);
        } else {
            func_0202d1d4(data_021bee38);
        }
    } else {
        func_0202d1d4(data_021bee20);
    }
    if (unk_ac) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r4, 0);
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

void Unk_0201e5a4::func_0201e9d0() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    if (func_0206ed18() != 0) {
        u32 r4 = func_0206ed38();
        unk_120 = *(u16 *)func_02097f6c(func_02098750(func_0209750c()), r4);
        c.unk_02 = 0xfff1;
        func_0209909c(&c.unk_02, 0, r4);
        func_02014ce4(&unk_120, 0, 5, 0);
        func_0202d328(&Unk_0201e5a4::func_0201e974);
    } else {
        func_0202d1d4(data_021beec8);
        if (unk_3c != NULL) {
            unk_3c->unk_08 = 1;
        }
        if (unk_ac) {
            (this->*(Unk_0201e5a4_RetFn)unk_ac)(&t);
        }
        c.unk_00 = t.unk_04;
        func_02067a84(unk_3c, &c, t.unk_00);
    }
}

void Unk_0201e5a4::func_0201ea8c() {
    func_0201517c((u32)func_0201ee4c, 0xd, 1);
    func_020151d0(0);
    func_0202d33c(&Unk_0201e5a4::func_0201e9d0);
}

void Unk_0201e5a4::func_0201eabc() {
    Unk_0201eabc_T t;
    func_0201c95c(this, &t);
    func_0201c938(this, &t, 0, 0x5b, 0x5d, data_021bee80);
    func_0201c938(this, &t, 1, 0x5e, 0x60, data_021beec8);
    t.unk_20 = 2;
    t.unk_21 = t.unk_20 - 1;
    func_0201c870(this, &t);
    func_0202d1c0(&Unk_0201e5a4::func_0201e9d0);
    func_020679c0(unk_3c, 1);
}

void Unk_0201e5a4::func_0201e710() {
    u16 a[2];
    Unk_0201e710_Tmp obj;
    BOOL r;
    u32 r6 = func_0209750c();
    u32 r7 = func_02098750(r6);
    s32 v = func_02097edc(r7);
    if (v == -1) {
        v = 0;
    }
    if (func_0204b2d4(&unk_120) != 0) {
        a[1] = 0x1546;
        if (func_0204b25c(&unk_120) == func_0204b25c(&a[1])) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (unk_120 == 0x1546) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        unk_198 = 0x1566;
    } else {
        func_0206338c(&obj, data_020c7a68[func_02063b8c(3)], 0);
        func_02062f94(a, &obj, 0, 0, 1, 1, 0);
        unk_198 = a[0];
        func_02063388(&obj);
    }
    func_02097f30(r7, &unk_198, v, 0);
    func_0203c42c(func_020986c8(r6), &unk_198, 0, 1);
    func_02014e60(&unk_198, 0, 5, 0);
    if (unk_198 != 0xfff1) {
        func_0201578c(&unk_198, 0, 7);
    }
}

void Unk_0201e5a4::func_0201ee9c() { func_0201fc48(this); }
