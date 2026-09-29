#include "types.h"

struct Unk_02016a44_Sub2c;
struct Unk_02016a44_S334 { u8 pad[0x1c]; };
struct Unk_02016a44_S350 { u8 pad[0x128]; };
struct Unk_02016a44_S514 { u8 pad[0x10]; };
struct Unk_02016a44_S0ec { u8 pad[4]; };

class Unk_02006d14 {
public:
    /* 0x000 */ u8 pad_000[0x5c];
    /* 0x05c */ s32 unk_5c;
    /* 0x060 */ u8 pad_060[4];
    /* 0x064 */ s32 unk_64;
    /* 0x068 */ u8 pad_068[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_090[0xec - 0x90];
    /* 0x0ec */ Unk_02016a44_S0ec unk_ec;
    /* 0x0f0 */ u8 pad_0f0[0x334 - 0xf0];
    /* 0x334 */ Unk_02016a44_S334 unk_334;
    /* 0x350 */ Unk_02016a44_S350 unk_350;
    /* 0x478 */ s32 unk_478;
    /* 0x47c */ s32 unk_47c;
    /* 0x480 */ s32 unk_480;
    /* 0x484 */ u8 pad_484[0x514 - 0x484];
    /* 0x514 */ Unk_02016a44_S514 unk_514;
    /* 0x524 */ u8 pad_524[0x628 - 0x524];
    /* 0x628 */ void *unk_628;
};

struct Unk_02016a44_Sub { u8 pad[0x22]; u16 unk_22; };
struct Unk_02016a44_Sub2c { u8 pad[0x22]; u16 unk_22; u8 pad2[0x94 - 0x2c - 0x24]; };

extern "C" {
extern volatile u16 data_020c6cc8;
extern u8 data_021f4880[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_0201b888(Unk_02006d14 *o, s32 *v, s16 *a);
BOOL func_0201bd84(s16 a);
void func_0201ab4c(Unk_02016a44_S350 *p, Unk_02006d14 *o, u32 a, u32 b, u32 c);
void func_0201a99c(Unk_02016a44_S350 *p, s32 a);
void func_0201a9ec(Unk_02016a44_S350 *p, void *v);
void func_0201a97c(Unk_02016a44_S350 *p, void *v);
s32 func_02015e48(Unk_02016a44_S334 *p, u32 a);
BOOL func_02015e74(Unk_02016a44_S334 *p, ...);
void func_0201610c(Unk_02016a44_S334 *p, Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02011dfc(void *p, u32 a, u32 b);
void func_0209028c(u32 a, void *p, u32 b, u32 c);
void func_02003ddc(Unk_02016a44_S514 *p, u32 a, u32 b, u32 c);
void func_02057378(Unk_02006d14 *o);
s32 func_020902f8(s32 h);
void func_020902d4(s32 h, void *a, s16 *b, u32 c);
s32 func_02090330(u32 a, s32 *v, s16 *b, u32 c);
BOOL func_020573cc(u32 a, Unk_02006d14 *o);
s32 func_020572b0(u32 a);
BOOL func_02057294();
void func_02057250(u32 a, Unk_02006d14 *o);
void func_020943dc(u32 a);
BOOL func_020573f4(Unk_02006d14 *o);
BOOL func_02094a84();
void func_02053e28(Unk_02016a44_S0ec *p, u32 a, u32 b);
void func_02057278(u16 *p);
void func_02019848(Unk_02016a44_Sub2c *p);
}

class Unk_02016a44 {
public:
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06[8];
    /* 0x0e */ u8 pad_0e[6];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 pad_18[0x28 - 0x18];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ Unk_02016a44_Sub2c unk_2c;
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 pad_99[0xac - 0x99];
    /* 0xac */ s32 unk_ac;

    BOOL func_02016a44(Unk_02006d14 *o);
    BOOL func_02016bcc(Unk_02006d14 *o);
    BOOL func_02016c00(Unk_02006d14 *o);
    s32 func_02016c80(s32 a, u16 *p);
    void func_02016cb8(Unk_02006d14 *o);
    void func_02016d18(Unk_02006d14 *o);
    void func_02016d80(Unk_02006d14 *o);
    BOOL func_02016df4(Unk_02006d14 *o);
    void func_02016e88(Unk_02006d14 *o);
    void func_02016ef8();
    void func_02016f1c();
    BOOL func_02016f38(Unk_02006d14 *o);
    void func_02016f7c(Unk_02006d14 *o);
    void func_02016ffc();
    void func_0201701c(Unk_02006d14 *o);
    void func_02017064(Unk_02006d14 *o);
    BOOL func_020170b8(Unk_02006d14 *o);
    void func_02017138(Unk_02006d14 *o);
    BOOL func_02017188(Unk_02006d14 *o);
    void func_02017214(Unk_02006d14 *o);
    BOOL func_02017248(Unk_02006d14 *o);
    void func_020172e0();
    void func_020172e4(Unk_02006d14 *o);

    void func_02017d74(Unk_02006d14 *o);
    void func_02017ce8(Unk_02006d14 *o);
    void func_02017cac(Unk_02006d14 *o);
    void func_02017c40(Unk_02006d14 *o);
    void func_02017a38(Unk_02006d14 *o);
    void func_0201799c(Unk_02006d14 *o);
    void func_0201788c(Unk_02006d14 *o);
    void func_02017824(Unk_02006d14 *o);
    void func_020177c8(Unk_02006d14 *o);
    void func_020177a8(Unk_02006d14 *o);
    void func_02017780(Unk_02006d14 *o);
    void func_02017728(Unk_02006d14 *o);
    void func_020176bc(Unk_02006d14 *o);
    void func_020176a0(Unk_02006d14 *o);
    void func_02017654(Unk_02006d14 *o);
    void func_02017618(Unk_02006d14 *o);
    void func_020175c0(Unk_02006d14 *o);
    void func_020174ec(Unk_02006d14 *o);
    void func_02017498(Unk_02006d14 *o);
    void func_0201745c(Unk_02006d14 *o);

    Unk_02016a44_Sub *func_0201978c();
    void func_02019498(s32 v);
    void func_02019718(s32 a, s32 b);

    void func_02019394(void *a, u16 *b);
    BOOL func_020178c4(Unk_02006d14 *o, u16 *p, u32 a, u32 b);
};

BOOL Unk_02016a44::func_02016a44(Unk_02006d14 *o) {
    s32 v[3];
    s16 ang;
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    ang = o->unk_8e;
    if (func_0201b888(o, v, &ang)) {
        s32 dx = v[0] - o->unk_5c;
        s32 dz = v[2] - o->unk_64;
        s32 d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                func_0201ab4c(&o->unk_350, o, 3, 0, data_020c6cc8);
                func_0201a99c(&o->unk_350, ang);
                unk_98 = 2;
            } else {
                func_0201ab4c(&o->unk_350, o, 0, 0, data_020c6cc8);
                unk_98 = 0;
            }
            func_0201a9ec(&o->unk_350, data_021f4880);
            func_0201a97c(&o->unk_350, data_021f4880);
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (func_0201bd84((s16)(a - ang))) {
                if (unk_00 == 2) {
                    func_0201ab4c(&o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    func_0201ab4c(&o->unk_350, o, 1, 0, data_020c6cc8);
                }
                unk_98 = 1;
            } else {
                func_0201ab4c(&o->unk_350, o, 4, 0, data_020c6cc8);
                func_0201a99c(&o->unk_350, a);
                unk_98 = 3;
            }
            func_0201a9ec(&o->unk_350, v);
            func_0201a97c(&o->unk_350, v);
        }
    } else {
        func_0201ab4c(&o->unk_350, o, 0, 0, data_020c6cc8);
        func_0201a9ec(&o->unk_350, data_021f4880);
        func_0201a97c(&o->unk_350, data_021f4880);
        unk_98 = 0;
    }
    return TRUE;
}

BOOL Unk_02016a44::func_02016bcc(Unk_02006d14 *o) {
    Unk_02016a44_Sub *s = func_0201978c();
    if (func_020178c4(o, &s->unk_22, 6, 0)) {
        func_02019498(1);
    }
}

BOOL Unk_02016a44::func_02016c00(Unk_02006d14 *o) {
    func_0201978c();
    u16 t = data_020c6cc8;
    func_0201610c(&o->unk_334, o, 6, data_020c6cc8, 1, 0x1000, 0, 0);
    if (o->unk_628) {
        func_02011dfc(o->unk_628, t, 0);
    }
    func_0209028c(0x61, &o->unk_5c, 0, 0);
    func_02003ddc(&o->unk_514, 0x76, 0x7f, 0);
    func_02019498(0);
    return TRUE;
}

s32 Unk_02016a44::func_02016c80(s32 a, u16 *p) {
    s32 r = 0;
    if (a >= unk_28 || unk_28 == 3) {
        Unk_02016a44_Sub2c *q = &unk_2c;
        func_02019718(0x14, a);
        func_02019848(q);
        q->unk_22 = *p;
        r = 1;
    }
    return r;
}

void Unk_02016a44::func_02016cb8(Unk_02006d14 *o) {
    if (func_02015e48(&o->unk_334, 0) == 0x2a) {
        if (func_02015e74(&o->unk_334, o)) {
            func_02057378(o);
            func_0201610c(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            func_02019498(1);
        }
    }
}

void Unk_02016a44::func_02016d18(Unk_02006d14 *o) {
    static void (Unk_02016a44::*tbl[1])(Unk_02006d14 *) = {
        &Unk_02016a44::func_02016d80,
    };
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016a44::func_02016d80(Unk_02006d14 *o) {
    if (func_02015e74(&o->unk_334)) {
        func_0201610c(&o->unk_334, o, 0x2a, 0, 1, 0x1000, 0, 0);
        if (unk_ac != -1) {
            func_020902f8(unk_ac);
        }
        unk_98 = 1;
    } else {
        if (unk_ac != -1) {
            func_020902d4(unk_ac, &o->unk_478, &o->unk_8e, 0);
        }
    }
}

BOOL Unk_02016a44::func_02016df4(Unk_02006d14 *o) {
    s32 v[3];
    s16 ang;
    v[0] = o->unk_478;
    v[1] = o->unk_47c;
    v[2] = o->unk_480;
    ang = o->unk_8e;
    func_020573cc(0xb, o);
    func_0201610c(&o->unk_334, o, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
    unk_ac = func_02090330(0x40, v, &ang, 0);
    func_02003ddc(&o->unk_514, 0x6f, 0x7f, 0);
    func_02019498(0);
    return TRUE;
}

void Unk_02016a44::func_02016e88(Unk_02006d14 *o) {
    static void (Unk_02016a44::*tbl[2])(Unk_02006d14 *) = {
        (void (Unk_02016a44::*)(Unk_02006d14 *))&Unk_02016a44::func_02016f1c,
        (void (Unk_02016a44::*)(Unk_02006d14 *))&Unk_02016a44::func_02016ef8,
    };
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016a44::func_02016ef8() {
    if (func_020572b0(8) == 0) {
        unk_98 = 2;
        func_02019498(1);
    }
}

void Unk_02016a44::func_02016f1c() {
    if (func_020572b0(8) != 0) {
        unk_98 = 1;
    }
}

BOOL Unk_02016a44::func_02016f38(Unk_02006d14 *o) {
    if (func_02057294()) {
        if (func_020573cc(8, o)) {
            func_02057250(8, o);
            unk_98 = 0;
            func_02019498(0);
            func_020943dc(0x72);
        }
    }
    return TRUE;
}

void Unk_02016a44::func_02016f7c(Unk_02006d14 *o) {
    static void (Unk_02016a44::*tbl[3])(Unk_02006d14 *) = {
        &Unk_02016a44::func_02017064,
        &Unk_02016a44::func_0201701c,
        (void (Unk_02016a44::*)(Unk_02006d14 *))&Unk_02016a44::func_02016ffc,
    };
    if (unk_98 < 3) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016a44::func_02016ffc() {
    if (!func_02057294()) {
        func_02019498(1);
        unk_98 = 3;
    }
}

void Unk_02016a44::func_0201701c(Unk_02006d14 *o) {
    if (!func_020573f4(o)) {
        func_0201610c(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        unk_98 = 2;
    }
}

void Unk_02016a44::func_02017064(Unk_02006d14 *o) {
    if (func_02015e74(&o->unk_334)) {
        if (func_02094a84()) {
            func_0201610c(&o->unk_334, o, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            unk_98 = 1;
        }
    }
}

BOOL Unk_02016a44::func_020170b8(Unk_02006d14 *o) {
    if (func_02057294()) {
        if (func_020573cc(7, o)) {
            func_0201610c(&o->unk_334, o, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
            if (func_02015e48(&o->unk_334, 1) == 0x139) {
                func_02053e28(&o->unk_ec, 0, 0);
            }
            func_02057250(5, o);
            func_02019498(0);
        }
    }
    return TRUE;
}

void Unk_02016a44::func_02017138(Unk_02006d14 *o) {
    if (func_02015e74(&o->unk_334)) {
        func_02057378(o);
        func_0201610c(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        func_02019498(1);
    }
}

BOOL Unk_02016a44::func_02017188(Unk_02006d14 *o) {
    if (func_02057294()) {
        if (func_020573cc(5, o)) {
            func_0201610c(&o->unk_334, o, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
            func_02003ddc(&o->unk_514, 0x4f, 0x7f, 0);
            if (func_02015e48(&o->unk_334, 1) == 0x139) {
                func_02053e28(&o->unk_ec, 0, 0);
            }
            func_02019498(0);
        }
    }
    return TRUE;
}

void Unk_02016a44::func_02017214(Unk_02006d14 *o) {
    Unk_02016a44_Sub *s = func_0201978c();
    if (func_020178c4(o, &s->unk_22, 0x28, 1)) {
        func_02019498(1);
    }
}

BOOL Unk_02016a44::func_02017248(Unk_02006d14 *o) {
    Unk_02016a44_Sub *s = func_0201978c();
    u16 v;
    func_02057278(&v);
    s->unk_22 = v;
    if (func_02057294()) {
        func_02057378(o);
    }
    func_0201610c(&o->unk_334, o, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
    func_0209028c(0x61, &o->unk_5c, 0, 0);
    func_02003ddc(&o->unk_514, 0x76, 0x7f, 0);
    func_02019498(0);
    unk_04 = 0x14;
    unk_05 = unk_14;
    func_02019394(unk_06, &s->unk_22);
    return TRUE;
}

void Unk_02016a44::func_020172e0() {
}

void Unk_02016a44::func_020172e4(Unk_02006d14 *o) {
    static void (Unk_02016a44::*tbl[20])(Unk_02006d14 *) = {
        &Unk_02016a44::func_02017d74,
        &Unk_02016a44::func_02017ce8,
        &Unk_02016a44::func_02017cac,
        &Unk_02016a44::func_02017c40,
        &Unk_02016a44::func_02017a38,
        &Unk_02016a44::func_0201799c,
        &Unk_02016a44::func_0201788c,
        &Unk_02016a44::func_02017824,
        &Unk_02016a44::func_020177c8,
        &Unk_02016a44::func_020177a8,
        &Unk_02016a44::func_02017780,
        &Unk_02016a44::func_02017728,
        &Unk_02016a44::func_020176bc,
        &Unk_02016a44::func_020176a0,
        &Unk_02016a44::func_02017654,
        &Unk_02016a44::func_02017618,
        &Unk_02016a44::func_020175c0,
        &Unk_02016a44::func_020174ec,
        &Unk_02016a44::func_02017498,
        &Unk_02016a44::func_0201745c,
    };
    if (unk_98 < 20) {
        (this->*tbl[unk_98])(o);
    }
}
