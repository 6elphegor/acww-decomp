#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};

struct Unk_0201d9e0_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};

struct Unk_0201d568_S {
    u8 pad_00[0x20];
    volatile u8 unk_20;
    s8 unk_21;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_02014e60(void *, u16 *, s32, s32, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_020157b8(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_02094218(void *);
s32 func_020030b4(void *);
s32 func_0207f854(void *, void *);
s32 func_02080dd8();
s32 func_02128930(void *, void *, s32);
void func_02034d84(u32);
void func_02034dd0(s32, s32, s32);
void func_02034d70(u32);
void func_02034e10(s32, s32, s32, s32);
void func_02099014(u16 *, s32);
void *func_0209cf0c();
void func_020982dc(void *, u32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_0203a680(void *);
void func_02014f74(void *);
s32 func_0201c91c(void *, void *, s32, void *, void *);
void *func_0207e310(void *);
void *func_0207856c();
s32 func_0202bb88(void *, void *);
s32 func_0202b444(void *);
s32 func_0202bb84(void *);
s32 func_0202bb54(void *);
s32 func_0202bb48(void *, s32);
Unk_0201d2d0_Data *func_0202baec(void *, void *, void *);
s32 func_0202ba80(void *, void *, void *);
Unk_0201d2d0_Data *func_0202ba28(void *, s32);
s32 func_0202ba10(void *);
s32 func_0202bae0(void *, s32);
Unk_0201d2d0_Data *func_0202bab4(void *);
s32 func_0202b9e4(void *, void *);
Unk_0201d2d0_Data *func_0202b9bc(void *, void *, void *);
s32 func_0202b9b0(void *, void *);
s32 func_0202b9a4(void *, void *);
s32 func_0202b998(void *, void *);
s32 func_02080a74(void *);
void func_02080a98(void *);
s32 func_02079524(void *, void *);
s32 func_02063b8c(s32);
s32 func_02072e44(void *);
s32 func_0207e190(void *);
void func_0207e268(void *);
void *func_0209a610();
void func_0209b238(void *);
s32 func_0207e160(void *);
void func_0207b508(void *, void *);
s32 func_02094058(void *);
s32 func_02116048(void *, void *, s32);
s32 func_02021ce4(void *);
s32 func_02020a1c(void *);
s32 func_02020a90(void *);
s32 func_02020a00(void *, void *, s32);
s32 func_0202b4e8(void *, s32, s32);
s32 func_0202b4ac(void *, s32, void *);
}

extern Unk_0201d2d0_Data data_020c7670, data_020c78a8, data_020c7650, data_020c75c8, data_020c76e8, data_020c7870, data_020c7608, data_020c7540, data_020c7848;
extern void *data_020cbb18;
extern Unk_0201d2d0_Fn data_020d7f60, data_020d7ed8;
extern u8 data_021bed48[], data_021bedc0[], data_021beaa8[], data_021beac0[], data_021bead8[], data_021beaf0[], data_021bea90[], data_020c74fc[], data_020c7500[], data_021be668[], data_021bea78[], data_021bed30[], data_021bedd8[], data_021bedf0[], data_020c7a74[];
extern Unk_0201d2d0_Data data_020c7798;
extern Unk_0201d2d0_Data data_020c7938;
extern Unk_0201d2d0_Data data_020c75c8;
extern Unk_0201d2d0_Data data_020c78e8;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern Unk_0201d2d0_Fn data_0213a740;
extern u8 data_021beb80[];
extern u8 data_021beb98[];
extern u8 data_021beb50[];
extern u8 data_021beb68[];
extern u8 data_021beb20[];
extern u8 data_021beb38[];
extern u8 data_021beb08[];
extern u8 data_021dfd8c[];

class Unk_0201d2d0 {
public:
    void func_0201d2d0(Unk_0201d2d0_Out *out);
    void func_0201d344();
    void func_0201d378(Unk_0201d2d0_Out *out);
    void func_0201d3ec();
    void func_0201d420(Unk_0201d2d0_Out *out);
    void func_0201d4a8(Unk_0201d2d0_Out *out);
    void func_0201d508(Unk_0201d2d0_Out *out);
    void func_0201d568();
    void func_0201d5d4(Unk_0201d2d0_Out *out);
    void func_0201d634();
    void func_0201d668(Unk_0201d2d0_Out *out);
    void func_0201d6c8();
    void func_0201d71c(Unk_0201d2d0_Out *out);
    void func_0201d7d4(Unk_0201d2d0_Out *out);
    void func_0201d88c();
    void func_0201d90c();
    void func_0201d9e0(Unk_0201d2d0_Out *out);
    void func_0201db44();
    void func_0201db60();
    void func_0201db88();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_020200e4();
    void func_02020150(Unk_0201d2d0_Out *out);
    void func_020201b0(Unk_0201d2d0_Out *out);
    s32 func_02020320(Unk_0201d2d0_Out *out);
    void func_020204b4(Unk_0201d2d0_Out *out);
    void func_020204dc(Unk_0201d2d0_Out *out);
    void func_0202053c(Unk_0201d2d0_Out *out);
    void func_0202059c(Unk_0201d2d0_Out *out);
    void func_02020654();
    void func_020206bc(Unk_0201d2d0_Out *out);
    void func_0202071c();
    void func_020207c8();
    void func_0202081c();
    void func_02020850(Unk_0201d2d0_Out *out);
    void func_020209cc();

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x190 - 0x139];
    u8 unk_190;
    u8 pad_191[3];
    s32 unk_194;
};



void Unk_0201d2d0::func_020200e4() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0xc4, 0xc4, data_021bed48);
    func_0201c938(this, &s, 1, 0xd0, 0xd0, data_021bedc0);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7f60);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_02020150(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7670.unk_00, 1, 3, data_020c7670.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020201b0(Unk_0201d2d0_Out *out) {
    void *r7 = unk_fc->unk_82c;
    Unk_0201d2d0_Out o2;
    if (func_02020320(out) != 0) {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
    } else {
        func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
        if (unk_128 != 0 && func_02080a74((void *)unk_128) == 0) {
            func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(r7)), data_020c7670.unk_00, data_020c7670.unk_04, 0, 0);
            out->unk_00 = (u32)&unk_100;
            out->unk_04 = unk_11e;
            func_02080a98((void *)unk_128);
        } else {
            if (func_02079524(data_021dfd8c, func_020805c4(r7)) == 0) {
                switch (func_02063b8c(3)) {
                case 0:
                    func_0202d1d4(this, data_021bed30);
                    break;
                case 1:
                    func_0202d1d4(this, data_021bedd8);
                    break;
                default:
                    func_0202d1d4(this, data_021bedf0);
                    break;
                }
                if (unk_ac) {
                    (this->*unk_ac)(out);
                }
            } else {
                func_0202d1d4(this, data_021bedf0);
                if (unk_ac) {
                    (this->*unk_ac)(out);
                }
            }
        }
    }
}

s32 Unk_0201d2d0::func_02020320(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    s32 v24 = -1;
    void *r18 = unk_fc->unk_82c;
    u8 *r6 = (u8 *)func_0207e310(r18);
    void *r20 = func_0207856c();
    s32 result = 0;
    s32 v28 = 0;
    s32 v2c = 0;
    s32 r7 = func_0202bb88(this, &v2c);
    func_0202b444(this);
    if (func_0202bb84(this) != 0) {
        d = &data_020c75c8;
        if (r7 == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb54(this) != 0) {
        d = &data_020c76e8;
        if (r7 == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb48(this, r7) != 0) {
        d = func_0202baec(this, &v28, r18);
    } else if (func_0202ba80(this, &v24, &unk_fc->unk_5c) != 0) {
        d = func_0202ba28(this, v24);
    } else if (func_0202ba10(this) != 0) {
        d = &data_020c7870;
    } else if (func_0202bae0(this, r7) != 0) {
        d = func_0202bab4(this);
    } else if (func_0202b9e4(this, r6) != 0) {
        d = func_0202b9bc(this, &v28, r6);
    } else if (func_0202b9b0(this, r20) != 0) {
        d = &data_020c7608;
    } else if (func_0202b9a4(this, r20) != 0) {
        d = &data_020c7540;
    } else if (func_0202b998(this, r20) != 0) {
        d = &data_020c7848;
    }
    if (d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(r18)), d->unk_00, d->unk_04, v28, 0);
        result = 1;
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    r6[0x1d] |= 4;
    return result;
}

void Unk_0201d2d0::func_020204b4(Unk_0201d2d0_Out *out) {
    func_02021ce4(this);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020204dc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78a8.unk_00, data_020c78a8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202053c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, 1, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202059c(Unk_0201d2d0_Out *out) {
    s32 v;
    if (func_02063b8c(3) == 0 && func_02072e44(data_020cbb18) == 0) {
        void *r6 = unk_fc->unk_82c;
        void *r7;
        func_0207e268(r6);
        r7 = func_0209a610();
        if (func_0207e160(r6) == 0) {
            func_0209b238(r7);
            func_0207b508(data_021dfd8c, func_020805c4(r6));
        }
        v = 3;
    } else {
        v = 2;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, v, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02020654() {
    Unk_0201d568_S s;
    func_0201c938(this, &s, 0, 0x37, 0x39, data_021beaa8);
    func_0201c938(this, &s, 1, 0x3a, 0x3c, data_021beac0);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7f60);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_020206bc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7650.unk_00, data_020c7650.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202071c() {
    Unk_0201d568_S s;
    u8 *p;
    if (func_0207e190(unk_fc->unk_82c) != 0) {
        p = data_021bead8;
    } else if (func_02072e44(data_020cbb18) != 0 && func_02094058(func_0209888c(func_0209750c())) != 0) {
        p = data_021beaf0;
    } else {
        p = data_021bea90;
    }
    func_0201c91c(this, &s, 0, data_020c74fc, p);
    func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7ed8);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_020207c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bea78);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202081c() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}

typedef s32 (Unk_0201d2d0::*Unk_02020850_Fn)();
extern Unk_02020850_Fn data_020d7fa8, data_020d7b98, data_020d7f90, data_020d7f80, data_020d7b88, data_020d7b78, data_020d7f48, data_020d7b60, data_020d7f10, data_020d7b48, data_020d7b38, data_020d7b30, data_020d7ea8, data_020d7ea0;

extern u8 tbl2[];

void Unk_0201d2d0::func_02020850(Unk_0201d2d0_Out *out) {
    static Unk_02020850_Fn tbl[14] = { data_020d7fa8, data_020d7b98, data_020d7f90, data_020d7f80, data_020d7b88, data_020d7b78, data_020d7f48, data_020d7b60, data_020d7f10, data_020d7b48, data_020d7b38, data_020d7b30, data_020d7ea8, data_020d7ea0 };
    s32 r, i;
    func_02116048(data_020c7a74, tbl2, 14);
    func_020209cc();
    r = func_02020a1c(this);
    if (r == 0) {
        r = func_02020a90(this);
    }
    while (r == 0) {
        i = func_02020a00(this, tbl2, 14);
        if (i >= 0 && i < 14) {
            r = (this->*tbl[i])();
            if (r == 0) {
                tbl2[i] = 0;
            }
        } else {
            func_02021ce4(this);
            break;
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_020209cc() {
    func_0202b4e8(this, 4, 3);
    func_0202b4ac(this, 5, unk_fc->unk_82c);
    func_0202b4e8(this, 6, 4);
}
