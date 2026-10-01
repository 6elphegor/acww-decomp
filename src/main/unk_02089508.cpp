#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL func_020510d8(StrBuf *dst, StrBuf *src);
void func_0205113c(StrBuf *buf);
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
}

struct Unk_02089270_Rec {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s16 unk_08;
    /* 0x0a */ s16 unk_0a;
};

struct Unk_02089270_Tbl {
    /* 0x00 */ Unk_02089270_Rec *unk_00;
    /* 0x04 */ s32 unk_04;
};

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    void func_020891d0();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    Unk_02089270_Tbl *func_02089240();
    s32 func_02089244();
    void *func_02089248();
    void func_02089258(s32 a, s32 b);
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(Unk_02089270_Tbl *v);

    /* 0x00 */ Unk_02089270_Tbl *unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public Unk_020d9218 {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

extern u8 data_020d5ce4[];
extern u8 data_020d5cec[];
extern u8 data_021c4924[];
extern u8 data_021c4910[];

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 flag);
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_02089508();
    void func_02089554();
    void func_02089588();
    void func_020896dc();
    void func_020897b0();
    void func_020897fc();
    s32 func_02089868();
    s32 func_0208987c();
    s32 func_02089880();
    s32 func_02089884();
    s32 func_0208989c();
    Unk_02089270 *func_020898b8();
    s32 func_020898bc();
    void func_020898c0();
    void func_02089908();
    void func_02089924();
    void func_02089944();
    void func_0208994c();
    void func_020899bc();
    void func_020899f0();
    void func_02089a1c();
    BOOL func_02089a24();
    BOOL func_02089a40();
    void func_02089a5c(s32 flag);
    void func_02089ab0(u8 v);
    void func_02089ab8();
    void func_02089ac0(StrBuf *src);
    void func_02089ad8(s32 a, s32 b);
    void func_02089ae0();
    void func_02089ae8();
    void func_02089af0();
    void func_02089af8();
    void func_02089b00();
    void func_02089b08();
    void func_02089b10();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ Unk_02089270 unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ u8 unk_5a;
    /* 0x5b */ u8 unk_5b;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ Unk_02050288 *unk_b0;
    /* 0xb4 */ Unk_02050288 *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

typedef void (Unk_020e0d98::*Unk_020e0d98_Fn)();

void Unk_020e0db4::vfunc_10(s32 a, s32 b) {
    unk_04 = a + 0x80;
    unk_08 = b + 0x60;
}

s32 Unk_020e0db4::func_02089f68() { return unk_04; }

s32 Unk_020e0db4::func_02089f64() { return unk_08; }

Unk_020e0d80::Unk_020e0d80() { func_0205113c((StrBuf *)this); }

Unk_020e0d80::~Unk_020e0d80() {}

u32 Unk_020e0d80::vfunc_08() { return 0x21; }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e0d80 and Unk_020e0db4 members

u8 *Unk_020e0d80::vfunc_0c() { return (u8 *)this + 4; }

Unk_020e0d98::Unk_020e0d98(s32 flag)
    : unk_34(0), unk_38(0), unk_3c(0), unk_40(0), unk_44(-1), unk_48(0), unk_4c(0), unk_50(0), unk_54(0),
      unk_55(0), unk_56(flag), unk_57(0), unk_58(0), unk_59(0), unk_5a(0), unk_5b(0), unk_5c(0), unk_b0(0),
      unk_b4(0), unk_b8(0) {
    func_020897b0();
    func_02089a1c();
}

Unk_020e0d98::~Unk_020e0d98() { func_02089554(); }

void Unk_020e0d98::vfunc_08() {
    if (unk_34 != 0) {
        void *h0 = unk_0c.func_02089248();
        void *h1 = unk_20.func_02089248();
        s32 base = func_0208989c();
        s32 base2 = func_02089884();
        s32 x0 = base + unk_0c.func_02089228(-1);
        s32 y0 = base2 + unk_0c.func_02089210(-1);
        s32 x1 = base + unk_20.func_02089228(-1);
        s32 y1 = base2 + unk_20.func_02089210(-1);
        if (unk_56 != 0) {
            func_02087e70(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                func_02087e70(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                func_02087e70(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    func_02087e70(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            func_02087e70(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                func_02087e70(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                func_02087e70(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    func_02087e70(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

void Unk_020e0d98::vfunc_0c() {
    static Unk_020e0d98_Fn tbl[4] = {&Unk_020e0d98::func_020899f0, &Unk_020e0d98::func_0208994c,
                                     &Unk_020e0d98::func_02089924, &Unk_020e0d98::func_020898c0};
    (this->*tbl[unk_34])();
    if (unk_34 != 0) {
        unk_0c.func_02089140();
        unk_20.func_02089140();
        func_02089508();
    }
}

void Unk_020e0d98::func_02089b10() { unk_58 = 1; }

void Unk_020e0d98::func_02089b08() { unk_58 = 0; }

void Unk_020e0d98::func_02089b00() { unk_59 = 1; }

void Unk_020e0d98::func_02089af8() { unk_5a = 1; }

void Unk_020e0d98::func_02089af0() { unk_5a = 0; }

void Unk_020e0d98::func_02089ae8() { unk_5b = 1; }

void Unk_020e0d98::func_02089ae0() { unk_5b = 0; }

void Unk_020e0d98::func_02089ad8(s32 a, s32 b) {
    unk_3c = a;
    unk_40 = b;
}

void Unk_020e0d98::func_02089ac0(StrBuf *src) {
    func_020510d8((StrBuf *)&unk_60, src);
    unk_b8 = 1;
}

void Unk_020e0d98::func_02089ab8() { unk_5c = 1; }

void Unk_020e0d98::func_02089ab0(u8 v) { unk_57 = v; }

void Unk_020e0d98::func_02089a5c(s32 flag) {
    Unk_02050288 *p = unk_b0;
    if (p) {
        p->unk_10 = (u32)unk_60.vfunc_0c();
        unk_b0->func_02050c90();
    }
    p = unk_b4;
    if (p) {
        p->unk_10 = (u32)unk_88.vfunc_0c();
        unk_b4->func_02050c90();
    }
    if (flag) {
        func_020896dc();
    }
}

BOOL Unk_020e0d98::func_02089a40() {
    BOOL r = unk_34 == 0 ? TRUE : FALSE;
    if (r) {
        unk_54 = 1;
    }
    return r;
}

BOOL Unk_020e0d98::func_02089a24() {
    BOOL r = unk_34 == 2 ? TRUE : FALSE;
    if (r) {
        unk_55 = 1;
    }
    return r;
}

void Unk_020e0d98::func_02089a1c() { unk_34 = 0; }

void Unk_020e0d98::func_020899f0() {
    if (unk_54 != 0) {
        unk_54 = 0;
        func_02089588();
        func_020896dc();
        func_020899bc();
    }
}

void Unk_020e0d98::func_020899bc() {
    if (unk_59 != 0) {
        unk_38 = 1;
        unk_48 = 0;
        unk_4c = 0;
    } else {
        unk_38 = 3;
        unk_48 = -5;
        s32 v = -5;
        if (unk_5a == 0) {
            v = 5;
        }
        unk_4c = v;
    }
    unk_34 = 1;
}

void Unk_020e0d98::func_0208994c() {
    if (unk_59 == 0) {
        if (unk_38 > 2) {
            unk_48 += 6;
            s32 d;
            if (unk_5a != 0) {
                d = 6;
            } else {
                d = -6;
            }
            unk_4c += d;
        } else {
            unk_48 -= 1;
            s32 d;
            if (unk_5a != 0) {
                d = -1;
            } else {
                d = 1;
            }
            unk_4c += d;
        }
    }
    unk_38--;
    if (unk_38 <= 0) {
        unk_48 = 0;
        unk_4c = 0;
        func_02089944();
    }
}

void Unk_020e0d98::func_02089944() { unk_34 = 2; }

void Unk_020e0d98::func_02089924() {
    if (unk_55 != 0) {
        unk_55 = 0;
        func_02089908();
    }
}

void Unk_020e0d98::func_02089908() {
    if (unk_59 != 0) {
        unk_38 = 1;
    } else {
        unk_38 = 2;
    }
    unk_34 = 3;
}

void Unk_020e0d98::func_020898c0() {
    if (unk_59 == 0) {
        unk_48 -= 11;
        s32 d;
        if (unk_5a != 0) {
            d = -11;
        } else {
            d = 11;
        }
        unk_4c += d;
    }
    unk_38--;
    if (unk_38 <= 0) {
        func_02089554();
        func_02089a1c();
    }
}

s32 Unk_020e0d98::func_020898bc() { return unk_34; }

Unk_02089270 *Unk_020e0d98::func_020898b8() { return &unk_0c; }

s32 Unk_020e0d98::func_0208989c() { return unk_50 + (unk_48 + (unk_3c + func_02089f68())); }

s32 Unk_020e0d98::func_02089884() { return unk_4c + (unk_40 + func_02089f64()); }

s32 Unk_020e0d98::func_02089880() { return unk_3c; }

s32 Unk_020e0d98::func_0208987c() { return unk_40; }

s32 Unk_020e0d98::func_02089868() { return unk_0c.func_02089244() * 8 + 0x18; }

void Unk_020e0d98::func_020897fc() {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_55 = 0;
    unk_57 = 0;
    unk_58 = 0;
    unk_59 = 0;
    unk_5a = 0;
    unk_5b = 0;
    unk_5c = 0;
    func_0205113c((StrBuf *)&unk_60);
    func_0205113c((StrBuf *)&unk_88);
    unk_b8 = 0;
    func_02089554();
}

void Unk_020e0d98::func_020897b0() {
    unk_0c.func_02089268((Unk_02089270_Tbl *)data_020d5ce4);
    unk_0c.func_02089264(1);
    unk_0c.func_02089260(0);
    unk_20.func_02089268((Unk_02089270_Tbl *)data_020d5cec);
    unk_20.func_02089264(1);
    unk_20.func_02089260(0);
}

void Unk_020e0d98::func_020896dc() {
    u32 w0;
    u32 w1;
    u32 n;
    s32 hi;
    s32 lo;
    if (unk_b0 != NULL) {
        w0 = unk_b0->func_0c();
    } else {
        w0 = 0;
    }
    if (unk_b4 != NULL) {
        u32 t1 = unk_b4->func_0c();
        w1 = t1;
    } else {
        w1 = 0;
    }
    n = (w0 + 7) >> 3;
    n = n > ((w1 + 7) >> 3) ? n : ((w1 + 7) >> 3);
    hi = unk_0c.func_02089240()->unk_04 - 1;
    lo = n - 1;
    if (lo < 0) {
        hi = 0;
    } else if (lo <= hi) {
        hi = lo;
    }
    unk_0c.func_02089258(hi, 0);
    unk_20.func_02089258(hi, 0);
    if (unk_5c != 0) {
        u32 full = n * 8;
        if (unk_b0 != NULL) {
            unk_b0->unk_30 = full > w0 ? (full - w0) >> 1 : 0;
        }
        if (unk_b4 != NULL) {
            unk_b4->unk_30 = full > w1 ? (full - w1) >> 1 : 0;
        }
    } else {
        if (unk_b0 != NULL) {
            unk_b0->unk_30 = 0;
        }
        if (unk_b4 != NULL) {
            unk_b4->unk_30 = 0;
        }
    }
}

void Unk_020e0d98::func_02089588() {
    BOOL two;
    if (unk_b8 == 2) {
        two = TRUE;
    } else {
        two = FALSE;
    }
    if (unk_b0 == NULL) {
        unk_b0 = func_020a8054(0x41, 0x14, 2);
        if (unk_b0 != NULL) {
            unk_b0->unk_2c = 4;
            Unk_02050288 *t = unk_b0;
            t->unk_10 = (u32)((StrBuf *)&unk_60)->data();
            unk_b0->unk_58 = 1;
            if (unk_56 != 0) {
                unk_b0->unk_50 = 2;
            }
            if (two) {
                unk_b0->unk_28 = (Unk_02050288_Font *)data_021c4924;
            } else {
                unk_b0->unk_28 = (Unk_02050288_Font *)data_021c4910;
            }
            unk_b0->unk_55 = 1;
            unk_b0->unk_39 = 0;
            unk_b0->unk_38 = 3;
            unk_b0->func_02050c90();
        }
    }
    if (unk_b4 == NULL && two) {
        unk_b4 = func_020a8054(0x61, 0x14, 2);
        if (unk_b4 != NULL) {
            unk_b4->unk_2c = 4;
            Unk_02050288 *t = unk_b4;
            t->unk_10 = (u32)((StrBuf *)&unk_88)->data();
            unk_b4->unk_58 = 1;
            if (unk_56 != 0) {
                unk_b4->unk_50 = 2;
            }
            unk_b4->unk_28 = (Unk_02050288_Font *)data_021c4924;
            unk_b4->unk_55 = 1;
            unk_b4->unk_39 = 0;
            unk_b4->unk_38 = 3;
            unk_b4->func_02050c90();
        }
    }
}

void Unk_020e0d98::func_02089554() {
    if (unk_b0 != NULL) {
        func_020a7fd8(unk_b0);
        unk_b0 = NULL;
    }
    if (unk_b4 != NULL) {
        func_020a7fd8(unk_b4);
        unk_b4 = NULL;
    }
}

void Unk_020e0d98::func_02089508() {
    if (unk_57 != 0) {
        s32 w = unk_0c.func_02089244() * 4 + 12;
        s32 c = unk_3c + unk_48;
        s32 lo = c - w + 0x80;
        s32 hi = w + c - 0x80;
        if (lo < 0) {
            unk_50 = -lo;
        } else if (hi > 0) {
            unk_50 = -hi;
        } else {
            unk_50 = 0;
        }
    } else {
        unk_50 = 0;
    }
}

