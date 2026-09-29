#include "types.h"

struct Unk_02017d74_Data {
    s32 unk_00;
    u8 pad_04[0x1c - 4];
    u16 unk_1c;
    u16 unk_1e;
    u8 unk_20;
    u8 pad_21;
    u16 unk_22;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c;
    u8 pad_2d[3];
    s32 unk_30;
};

struct Unk_02017d74_Ctx {
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
    virtual u32 vf94();
    virtual u32 vf98();
    u8 pad_04[0x18c - 4];
    u32 unk_18c;
    u32 unk_190;
    u8 pad_194[0x19c - 0x194];
    u8 unk_19c;
    u8 pad_19d[0x334 - 0x19d];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x3aa - 0x350];
    u8 unk_3aa[0x514 - 0x3aa];
    u8 unk_514[0x628 - 0x514];
    void *unk_628;
};

struct Unk_02017d74_Buf {
    s32 a;
    s32 b;
    s32 c;
};

extern volatile u16 data_020c6cc8;
extern u8 data_021f4880[];
extern u32 data_020c6d68[];

extern "C" {
Unk_02017d74_Data *func_0201978c(void *s);
BOOL func_020572b0(u32 a);
void func_02057250(u32 a, void *p);
BOOL func_020572e0(void *p);
BOOL func_ov004_02224918(void);
BOOL func_02015e74(void *p);
BOOL func_020573cc(u32 a, void *p);
void func_0201610c(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 func_02019498(void *s, u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void func_02011dfc(void *a, u32 b, u32 c);
BOOL func_02057294(void);
BOOL func_020573f4(void *p);
BOOL func_02094a84(void);
BOOL func_02057328(void *p);
BOOL func_02057304(void *p);
void func_0201ab4c(void *a, void *b, u32 c, u32 d, u32 e);
void func_0201a9ec(void *a, void *b);
void func_0201a97c(void *a, void *b);
void func_0201acf8(void *a, s32 b);
BOOL func_0204b2d4(void *p);
s32 func_0204b25c(void *p);
s32 func_020b50e8(void);
void func_ov004_0222493c(void *a, void *b, void *c, void *d, void *e);
void func_02094aa8(void *a, void *b, void *c, void *d, void *e);
void func_02057418(void *a, s32 b, u32 c, s32 d, void *e, s32 f);
void func_020193c0(void *a, s32 b, u32 c, u32 d, u32 e);
BOOL func_02019790(void *s);
}

typedef Unk_02017d74_Ctx C;

static inline BOOL Unk_02017d74_Is(u16 *p, u16 v) {
    if (func_0204b2d4(p)) {
        u16 t = v;
        s32 x = func_0204b25c(p);
        return x == func_0204b25c(&t) ? TRUE : FALSE;
    }
    return *p == v ? TRUE : FALSE;
}

struct Unk_02017d74 {
    u8 pad_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0x14 - 6];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    u8 pad_20[0x98 - 0x20];
    u8 unk_98;

    void func_02017d74(C *c);
    BOOL func_02017f10(C *c);
    void func_02017fb4(C *c);
    void func_02017fb8(C *c);
    void func_02018058(C *c);
    void func_020180bc(C *c);
    void func_020180e4(C *c);
    void func_02018104(C *c);
    void func_02018160(C *c);
    BOOL func_020181ec(C *c);
    void func_020182dc(C *c);
    BOOL func_02018338(C *c);
    void func_020183e4(C *c);
    void func_02018434(C *c);
    void func_0201849c(C *c);
    BOOL func_02018508(C *c);
    void func_020185b8(C *c);
    void func_020185e4(C *c);
    void func_0201864c(C *c);
};

typedef void (Unk_02017d74::*Unk_02017d74_Fn)(C *);

void Unk_02017d74::func_02017d74(C *c) {
    if (func_020572b0(2)) {
        Unk_02017d74_Data *d = func_0201978c(this);
        if (Unk_02017d74_Is((u16 *)((u8 *)c + 0xea), 0xd00c) || func_02057328(c)) {
            u16 v = data_020c6cc8;
            func_0201610c(c->unk_334, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->unk_628) {
                func_02011dfc(c->unk_628, v, 0);
            }
            unk_98 = 2;
        } else if (Unk_02017d74_Is(&d->unk_22, 0x1565) && d->unk_24 == 0 && (func_020b50e8() == 9 || func_020b50e8() == 0x10)) {
            if (func_020572e0(c)) {
                u16 v = data_020c6cc8;
                func_0201610c(c->unk_334, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
                if (c->unk_628) {
                    func_02011dfc(c->unk_628, v, 0);
                }
                unk_98 = 2;
            }
        } else {
            Unk_02017d74_Buf buf;
            if (func_02057304(&buf)) {
                buf.b = 0;
                func_0201a9ec(c->unk_350, &buf);
                func_0201a97c(c->unk_350, &buf);
                func_0201ab4c(c->unk_350, c, 1, 0, data_020c6cc8);
                unk_98 = 1;
            }
        }
    }
}

BOOL Unk_02017d74::func_02017f10(C *c) {
    Unk_02017d74_Data *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, d->unk_1c);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    if (d->unk_30 == 1) {
        func_ov004_0222493c(&d->unk_22, &d->unk_24, &d->unk_2c, &d->unk_30, c);
        unk_98 = 0xd;
    } else {
        func_02094aa8(&d->unk_22, &d->unk_24, &d->unk_2c, &d->unk_30, c);
        unk_98 = 0;
    }
    func_02019498(this, 0);
    return TRUE;
}

void Unk_02017d74::func_02017fb4(C *c) {
}

void Unk_02017d74::func_02017fb8(C *c) {
    static Unk_02017d74_Fn tbl[5] = {
        &Unk_02017d74::func_02018160,
        &Unk_02017d74::func_02018104,
        &Unk_02017d74::func_020180e4,
        &Unk_02017d74::func_020180bc,
        &Unk_02017d74::func_02018058,
    };
    if (unk_98 < 5) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::func_02018058(C *c) {
    if (!func_020572b0(1)) {
        Unk_02017d74_Data *d = func_0201978c(this);
        func_02057250(9, c);
        if (func_020572e0((void *)d->unk_28)) {
            if (func_ov004_02224918()) {
                unk_98 = 2;
            }
        }
    } else if (((c->unk_190 << 4) >> 16) == 8) {
        func_02003ddc(c->unk_514, 0x63, 0x7f, 0);
    }
}

void Unk_02017d74::func_020180bc(C *c) {
    if (((c->unk_190 << 4) >> 16) == 0x17) {
        func_020573cc(2, c);
        unk_98 = 4;
    }
}

void Unk_02017d74::func_020180e4(C *c) {
    if (!func_02057294()) {
        func_02019498(this, 1);
        unk_98 = 5;
    }
}

void Unk_02017d74::func_02018104(C *c) {
    if (!func_020573f4(c)) {
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        unk_98 = 2;
    }
}

void Unk_02017d74::func_02018160(C *c) {
    if (func_02015e74(c->unk_334)) {
        if (func_02094a84()) {
            u16 v = data_020c6cc8;
            func_0201610c(c->unk_334, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                func_02011dfc(c->unk_628, v, 0);
            }
            unk_98 = 1;
        }
    } else if (((c->unk_190 << 4) >> 16) == 8) {
        func_02003ddc(c->unk_514, 0x63, 0x7f, 0);
    }
}

BOOL Unk_02017d74::func_020181ec(C *c) {
    Unk_02017d74_Data *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, d->unk_1c);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    func_0201610c(c->unk_334, c, data_020c6d68[d->unk_30], data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->unk_628) {
        func_02011dfc(c->unk_628, v, 0);
    }
    func_02003ddc(c->unk_514, 0x4f, 0x7f, 0);
    func_02057418(&d->unk_22, d->unk_24, d->unk_2c, d->unk_30, c, d->unk_28);
    func_020573cc(1, c);
    func_02019498(this, 0);
    if (d->unk_30 == 1) {
        unk_98 = 4;
    } else {
        unk_98 = 0;
    }
    return TRUE;
}

void Unk_02017d74::func_020182dc(C *c) {
    BOOL r = FALSE;
    switch (c->unk_19c) {
    case 0:
    case 2:
        if (((c->unk_190 << 4) >> 16) == 0) {
            r = TRUE;
        }
        break;
    case 1:
    case 3:
        r = func_02015e74(c->unk_334);
        break;
    }
    if (r) {
        func_02019498(this, 1);
    }
}

BOOL Unk_02017d74::func_02018338(C *c) {
    Unk_02017d74_Data *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, data_020c6cc8);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    func_0201610c(c->unk_334, c, d->unk_00, d->unk_1c, d->unk_20, 0x1000, d->unk_1e, 0);
    unk_04 = unk_1c;
    unk_05 = unk_14;
    func_020193c0(unk_06, d->unk_00, d->unk_20, d->unk_1c, d->unk_1e);
    func_02019498(this, 0);
    return TRUE;
}

void Unk_02017d74::func_020183e4(C *c) {
    if (unk_98 >= 1) {
        if (!func_02019790(this)) {
            s32 a = (c->unk_190 << 4) >> 16;
            s32 b = (c->unk_18c << 4) >> 16;
            if (a >= b - 0x1000) {
                func_02019498(this, 1);
            }
        }
    }
}

void Unk_02017d74::func_02018434(C *c) {
    static Unk_02017d74_Fn tbl[1] = {
        &Unk_02017d74::func_0201849c,
    };
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::func_0201849c(C *c) {
    if (func_02015e74(c->unk_334)) {
        u32 r = c->vf98();
        u16 v = data_020c6cc8;
        func_0201610c(c->unk_334, c, r, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            func_02011dfc(c->unk_628, v, 0);
        }
        unk_98 = 1;
    }
}

BOOL Unk_02017d74::func_02018508(C *c) {
    u32 r = c->vf94();
    Unk_02017d74_Data *d = func_0201978c(this);
    func_0201ab4c(c->unk_350, c, 0, 0, d->unk_1c);
    func_0201a9ec(c->unk_350, data_021f4880);
    func_0201a97c(c->unk_350, data_021f4880);
    func_0201acf8(c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    func_0201610c(c->unk_334, c, r, data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->unk_628) {
        func_02011dfc(c->unk_628, v, 0);
    }
    unk_98 = 0;
    func_02019498(this, 0);
    return FALSE;
}

void Unk_02017d74::func_020185b8(C *c) {
    if (unk_98 >= 1) {
        if (func_02015e74(c->unk_334)) {
            func_02019498(this, 1);
        }
    }
}

void Unk_02017d74::func_020185e4(C *c) {
    static Unk_02017d74_Fn tbl[1] = {
        &Unk_02017d74::func_0201864c,
    };
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::func_0201864c(C *c) {
    if (func_02015e74(c->unk_334)) {
        func_0201610c(c->unk_334, c, 0x78, data_020c6cc8, 1, 0x1000, 0, 0);
        unk_98 = 1;
    }
}
