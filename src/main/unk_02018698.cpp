#include "types.h"

struct Unk_02018698;

struct Unk_02018698_Ctx {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84();
    virtual void vf88();
    virtual void vf8c();
    virtual void vf90();
    virtual void vf94();
    virtual void vf98();
    virtual u32 vf9c();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0x190 - 0x9c];
    u32 unk_190;
    u8 pad_194[0x2ac - 0x194];
    u8 unk_2ac[0x334 - 0x2ac];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x3aa - 0x350];
    u8 unk_3aa[0x420 - 0x3aa];
    u8 unk_420[0x445 - 0x420];
    u8 unk_445;
    u8 pad_446[0x514 - 0x446];
    u8 unk_514[0x628 - 0x514];
    void *unk_628;
};

struct Unk_02018698_Data {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s16 unk_18;
    s16 unk_1a;
    u16 unk_1c;
    u8 pad_1e[3];
    u8 unk_21;
};

struct Unk_02018698_Ent {
    s32 unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[3];
};

struct Unk_02018698_Rec {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0c;
};

struct Unk_02018698_Vec {
    s32 x, y, z;
    Unk_02018698_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

typedef Unk_02018698_Ctx C;
typedef Unk_02018698_Data D;
typedef Unk_02018698_Vec V;

extern volatile u16 data_020c6cc8;
extern u8 data_021f4880[];
extern Unk_02018698_Ent data_020c6e60[];
extern u32 data_020c6d94[];
extern u16 data_020c6d78[];

extern "C" {
D *func_0201978c(Unk_02018698 *s);
s32 func_02019498(Unk_02018698 *s, u32 a);
BOOL func_02019790(Unk_02018698 *s);
void func_0201913c(Unk_02018698 *s, C *c);
void func_020191ac(Unk_02018698 *s, C *c);
void func_02019400(void *p, s32 a, s32 b, u32 c);
void func_0201ab4c(void *a, void *b, u32 c, u32 d, u32 e);
void func_0201ab30(void *a, void *b);
void func_0201a9ec(void *a, void *b);
void func_0201a97c(void *a, void *b);
void func_0201a99c(void *a, s32 b);
void func_0201acf8(void *a, s32 b);
BOOL func_0201acfc(void *a);
BOOL func_02015e74(void *p, void *q);
void func_0201610c(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void func_02011dfc(void *a, u32 b, u32 c);
s32 func_02011da4(void *a, u32 b, u32 c);
void func_02003f1c(u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void func_0201a040(void *a, void *b, u32 c);
void func_020199c8(void *a);
s32 func_0201a994(void *a);
s32 func_0201a98c(void *a);
s32 func_0201a9e8(void *a);
BOOL func_0201a9a0(void *a, void *b, u32 c);
BOOL func_0201a968(void *a);
BOOL func_0201bd58(void *a, s16 *out, s32 c);
BOOL func_0201bd84(s16 v);
}

struct Unk_02018698 {
    u32 pad_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0x0e];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    u8 pad_20[0x94 - 0x20];
    u32 unk_94;
    u8 unk_98;
    u8 pad_99[3];
    s32 unk_9c;
    s16 unk_a0;
    u8 pad_a2[2];
    Unk_02018698_Rec *unk_a4;
    u8 unk_a8;
    u8 unk_a9;
    u8 pad_aa[6];
    s32 unk_b0;

    s32 func_02018698(C *c);
    void func_02018724(C *c);
    s32 func_02018758(C *c);
    void func_020187d8(C *c);
    s32 func_020188b0(C *c);
    void func_0201899c(C *c);
    void func_020189d8(C *c);
    void func_02018a40(C *c);
    s32 func_02018aec(C *c);
    s32 func_02018b5c(C *c);
    s32 func_02018b70(C *c);
    void func_02018b84(C *c);
    void func_02018bf4(C *c);
    void func_02018cac(C *c);
    s32 func_02018d04(C *c, s32 a, s16 b);
    void func_02018df8(C *c);
    void func_02018e68(C *c);
    void func_02018e70(C *c);
    s32 func_02018ea4(C *c);
    void func_02018f3c(C *c);
    s32 func_02018f80(C *c);
};

extern "C" Unk_02018698_Ent *func_02018984(u32 i) {
    if (i < 0x3c) {
        return &data_020c6e60[i];
    }
    return 0;
}

s32 Unk_02018698::func_02018698(C *c) {
    D *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, d->unk_1c);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    func_0201610c(c->unk_334, c, 0x77, d->unk_1c, 1, 0x1000, 0, 0);
    func_02019498(this, 0);
    func_02003f1c(0xa0);
    unk_98 = 0;
    return 0;
}

void Unk_02018698::func_02018724(C *c) {
    if (((c->unk_190 << 4) >> 16) == 0) {
        if (!func_0201acfc(c->unk_3aa)) {
            func_02019498(this, 1);
        }
    }
}

s32 Unk_02018698::func_02018758(C *c) {
    D *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, d->unk_1c);
    func_0201610c(c->unk_334, c, 0xd8, d->unk_1c, 0, 0x1000, 0, 0);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    func_02019498(this, 0);
    return 0;
}

void Unk_02018698::func_020187d8(C *c) {
    Unk_02018698_Rec *t = unk_a4;
    if (t != 0) {
        if (unk_a8 == 1) {
            if (func_02015e74(c->unk_334, c)) {
                Unk_02018698_Rec *r = unk_a4;
                s32 *pv = &r->unk_0c;
                if (r->unk_0c < 0x137) {
                    u16 v = data_020c6cc8;
                    func_0201610c(c->unk_334, c, *pv, data_020c6cc8, 0, 0x1000, 0, 0);
                    if (c->unk_628) {
                        func_02011dfc(c->unk_628, v, 0);
                    }
                    c->unk_445 = unk_a9;
                    func_0201a040(c->unk_420, unk_a4, 1);
                    unk_a8 = 0;
                } else if (r->unk_0c == 0x137) {
                    func_02019498(this, 1);
                }
            }
        } else {
            if (t->unk_00 == 0) {
                if (((c->unk_190 << 4) >> 16) == 0) {
                    func_02019498(this, 1);
                }
            }
        }
    }
}

s32 Unk_02018698::func_020188b0(C *c) {
    u32 i = func_0201978c(this)->unk_21;
    u32 v = data_020c6cc8;
    if (i >= 0x3c) {
        i = 0;
    }
    unk_a9 = i;
    if (i == 0) {
        func_020199c8(c->unk_2ac);
        v = c->vf9c();
    }
    unk_a4 = (Unk_02018698_Rec *)&data_020c6e60[i];
    unk_a8 = ((Unk_02018698_Ent *)unk_a4)->unk_18;
    func_0201610c(c->unk_334, c, ((Unk_02018698_Ent *)unk_a4)->unk_00, v, unk_a8, 0x1000, 0, 0);
    if (c->unk_628) {
        func_02011dfc(c->unk_628, v, 0);
    }
    c->unk_445 = i;
    func_0201a040(c->unk_420, unk_a4, 0);
    func_02019498(this, 0);
    return 1;
}

void Unk_02018698::func_0201899c(C *c) {
    if (unk_98 >= 1) {
        if (!func_02019790(this)) {
            if (func_02015e74(c->unk_334, c)) {
                func_02019498(this, 1);
            }
        }
    }
}

void Unk_02018698::func_020189d8(C *c) {
    static void (Unk_02018698::*tbl[])(C *) = {&Unk_02018698::func_02018a40};
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02018698::func_02018a40(C *c) {
    if (c->unk_8e == func_0201a994(c->unk_350)) {
        if (unk_b0 >= 5) {
            unk_b0 = 0;
        }
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, data_020c6d94[unk_b0], data_020c6cc8, 1, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        func_02003ddc(c->unk_514, data_020c6d78[unk_b0], 0x7f, 0);
        unk_98 = 1;
    }
}

s32 Unk_02018698::func_02018aec(C *c) {
    D *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    func_0201a99c(c->unk_350, d->unk_18);
    func_0201acf8(c->unk_3aa, -2);
    if (c->unk_628) {
        func_02011da4(c->unk_628, d->unk_1c, 0);
    }
    unk_b0 = d->unk_14;
    func_02019498(this, 0);
    return 0;
}

s32 Unk_02018698::func_02018b5c(C *c) {
    return func_02018d04(c, 2, 2);
}

s32 Unk_02018698::func_02018b70(C *c) {
    return func_02018d04(c, 1, 1);
}

void Unk_02018698::func_02018b84(C *c) {
    static void (Unk_02018698::*tbl[])(C *) = {&Unk_02018698::func_02018cac, &Unk_02018698::func_02018bf4};
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02018698::func_02018bf4(C *c) {
    s16 out;
    s32 r = func_0201a9e8(c->unk_350);
    func_0201ab30(c->unk_350, c);
    if (func_0201a9a0(c->unk_350, c, 0)) {
        if (func_0201a968(c->unk_350)) {
            func_0201a97c(c->unk_350, (void *)r);
        } else {
            func_02019498(this, 1);
        }
    } else if (!func_0201bd58(c, &out, r)) {
        u16 v = data_020c6cc8;
        s32 t = func_0201a98c(c->unk_350);
        func_0201ab4c(c->unk_350, c, 3, t, data_020c6cc8);
        func_0201a99c(c->unk_350, out);
        unk_98 = 0;
        c->unk_98 = 0;
        if (c->unk_628) {
            func_02011da4(c->unk_628, v, 0);
        }
    }
}

void Unk_02018698::func_02018cac(C *c) {
    if (func_0201bd84(func_0201a994(c->unk_350) - c->unk_8e)) {
        s32 t = func_0201a98c(c->unk_350);
        func_0201ab4c(c->unk_350, c, unk_9c, t, data_020c6cc8);
        unk_98 = 1;
    }
}

s32 Unk_02018698::func_02018d04(C *c, s32 a, s16 b) {
    s16 out;
    D *d = func_0201978c(this);
    V v1(d->unk_04, 0, d->unk_08);
    V v2(d->unk_0c, 0, d->unk_10);
    unk_9c = a;
    unk_a0 = b;
    func_0201a9ec(c->unk_350, &v1);
    func_0201a97c(c->unk_350, &v2);
    if (func_0201bd58(c, &out, func_0201a9e8(c->unk_350))) {
        func_0201ab4c(c->unk_350, c, unk_9c, d->unk_1a, d->unk_1c);
        unk_98 = 1;
    } else {
        func_0201ab4c(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
        func_0201a99c(c->unk_350, out);
        c->unk_98 = 0;
        unk_98 = 0;
    }
    if (c->unk_628) {
        func_02011da4(c->unk_628, data_020c6cc8, 0);
    }
    func_0201acf8(c->unk_3aa, unk_a0);
    func_02019498(this, 0);
    return 0;
}

void Unk_02018698::func_02018df8(C *c) {
    static void (Unk_02018698::*tbl[])(C *) = {&Unk_02018698::func_02018e70, &Unk_02018698::func_02018e68};
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02018698::func_02018e68(C *c) {
    func_0201913c(this, c);
}

void Unk_02018698::func_02018e70(C *c) {
    if (c->unk_8e == func_0201a994(c->unk_350)) {
        func_020191ac(this, c);
        unk_98 = 1;
    }
}

s32 Unk_02018698::func_02018ea4(C *c) {
    D *d = func_0201978c(this);
    V v1(d->unk_04, 0, d->unk_08);
    V v2(d->unk_0c, 0, d->unk_10);
    func_0201ab4c(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    func_0201a9ec(c->unk_350, &v1);
    func_0201a97c(c->unk_350, &v2);
    func_0201a99c(c->unk_350, d->unk_18);
    func_0201acf8(c->unk_3aa, -2);
    if (c->unk_628) {
        func_02011da4(c->unk_628, data_020c6cc8, 0);
    }
    func_02019498(this, 0);
    return 0;
}

void Unk_02018698::func_02018f3c(C *c) {
    if (c->unk_8e == func_0201a994(c->unk_350)) {
        func_0201ab4c(c->unk_350, c, 0, 0, func_0201978c(this)->unk_1c);
        func_02019498(this, 1);
    }
}

s32 Unk_02018698::func_02018f80(C *c) {
    D *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    func_0201a99c(c->unk_350, d->unk_18);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    if (c->unk_628) {
        func_02011da4(c->unk_628, data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    func_02019400(unk_06, d->unk_1a, d->unk_18, d->unk_1c);
    func_02019498(this, 0);
    return 0;
}
