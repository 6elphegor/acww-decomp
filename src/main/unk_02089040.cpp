#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_02002d74(s32 v);
void func_02088cc0(void *p);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
void func_0205113c(StrBuf *buf);
void func_02089118(void);
}

// Small object with a list link (global list head data_021ce638); vtable 0x020e0d08
class Unk_020e0d08 {
public:
    virtual void *vfunc_00() = 0;
    virtual BOOL vfunc_04() = 0;
    virtual void vfunc_08();
    ~Unk_020e0d08();
    Unk_020e0d08();

    void func_02089040();
    void func_0208905c();
    void func_02089078(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g);
    s32 func_02089098();
    BOOL func_020890b0(s32 a);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

extern Unk_020e0d08 *data_021ce638;

// vtable 0x020e0d1c
class Unk_020e0d1c : public Unk_020e0d08 {
public:
    virtual void *vfunc_00();
    virtual BOOL vfunc_04();

    /* 0x40 */ u32 unk_40[1];
};

// vtable 0x020e0d30
class Unk_020e0d30 : public Unk_020e0d08 {
public:
    virtual void *vfunc_00();
    virtual BOOL vfunc_04();

    /* 0x40 */ u32 unk_40[1];
    /* 0x44 */ u32 unk_44[1];
};

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

// Animation cursor over a table of 12-byte records (fixed-point frame position)
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

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
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

extern u32 data_020cf5c8[];
extern u32 data_020cf5b8[];
extern u8 data_020d5b0c[];
extern u8 data_020d5ce4[];
extern u8 data_020d5cec[];
extern u8 data_021c4924[];
extern u8 data_021c4910[];

// Two-cursor menu/sprite object; vtable 0x020e0d44 (ctor 0x020894c0)
class Unk_020e0d44 : public Unk_020e0db4 {
public:
    Unk_020e0d44(u8 flag);
    virtual ~Unk_020e0d44();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_02089284();
    s32 func_020892ac();
    void func_020892b0(s32 idx);
    void func_02089320(s32 x, s32 y);
    void func_02089328();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ Unk_02089270 unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x41 */ u8 unk_41;
};

// Text window state object; vtable 0x020e0d98 (ctor 0x02089e60), 0xbc bytes
class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 a);
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
    void func_02089a1c();

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
    /* 0x60 */ u32 unk_60[10];
    /* 0x88 */ u32 unk_88[10];
    /* 0xb0 */ Unk_02050288 *unk_b0;
    /* 0xb4 */ Unk_02050288 *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_020e0d08::func_02089040() {
    func_0208905c();
    unk_38 = data_021ce638;
    data_021ce638 = this;
}

void Unk_020e0d08::func_0208905c() {
    unk_38 = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_3c = 0;
    unk_2c = 0;
    unk_28 = 0;
    unk_0e = 0;
    unk_0f = 0xff;
}

void Unk_020e0d08::func_02089078(s32 a, s32 b, s32 c, s32 d, u32 e, u8 f, s32 g) {
    unk_04 = a;
    unk_08 = b;
    unk_1c = c;
    unk_20 = d;
    unk_0c = e;
    unk_0d = f;
    unk_34 = g;
}

s32 Unk_020e0d08::func_02089098() {
    if (unk_2c != 0) {
        return func_02002d74(unk_2c);
    }
    return 0;
}

BOOL Unk_020e0d08::func_020890b0(s32 a) {
    if (unk_3c != 0) {
        s32 t = func_020e7b98(unk_10, unk_18);
        if (func_020e780c(t, (s16)(a + 0x8000)) <= 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_020e0d08::vfunc_08() {}

Unk_020e0d08::~Unk_020e0d08() {}

Unk_020e0d08::Unk_020e0d08() {
    func_0208905c();
}

extern "C" void func_02089118(void) { data_021ce638 = 0; }
extern "C" void func_02089124(void) { func_02089118(); }

void *Unk_020e0d1c::vfunc_00() { return &unk_40; }
BOOL Unk_020e0d1c::vfunc_04() { return FALSE; }
void *Unk_020e0d30::vfunc_00() { return &unk_44; }
BOOL Unk_020e0d30::vfunc_04() { func_02088cc0(this); }

void Unk_02089270::func_02089140() {
    if (unk_10 == 0) {
        unk_08 = unk_08 + unk_0c;
        s32 f = unk_08 >> 12;
        if (f >= unk_00->unk_00[unk_04].unk_04) {
            unk_08 = 0;
            s32 n = unk_00->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 >= n) {
                unk_04 = 0;
            }
        }
    } else {
        unk_08 = unk_08 + unk_0c;
        Unk_02089270_Tbl *t = unk_00;
        s32 f = unk_08 >> 12;
        if (f >= t->unk_00[unk_04].unk_04) {
            s32 n = t->unk_04;
            unk_04 = unk_04 + 1;
            if (unk_04 < n) {
                unk_08 = 0;
            } else {
                unk_04 = n - 1;
            }
        }
    }
}

void Unk_02089270::func_020891bc() {
    unk_0c = 0x1000;
    func_02089258(0, 0);
}

void Unk_02089270::func_020891d0() { unk_0c = 0; }

BOOL Unk_02089270::func_020891d8() {
    BOOL r = FALSE;
    if (unk_10 == 1) {
        Unk_02089270_Tbl *t = unk_00;
        s32 i = unk_04;
        if (i >= t->unk_04 - 1) {
            s32 f = unk_08 >> 12;
            if (f >= t->unk_00[i].unk_04 - 1) {
                r = TRUE;
            }
        }
    }
    return r;
}

s32 Unk_02089270::func_02089210(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_0a;
}

s32 Unk_02089270::func_02089228(s32 v) {
    if (v < 0) {
        v = unk_04;
    }
    return unk_00->unk_00[v].unk_08;
}

Unk_02089270_Tbl *Unk_02089270::func_02089240() { return unk_00; }
s32 Unk_02089270::func_02089244() { return unk_04; }
void *Unk_02089270::func_02089248() { return unk_00->unk_00[unk_04].unk_00; }

void Unk_02089270::func_02089258(s32 a, s32 b) {
    unk_04 = a;
    unk_08 = b;
}

void Unk_02089270::func_02089260(s32 v) { unk_0c = v; }
void Unk_02089270::func_02089264(s32 v) { unk_10 = v; }
void Unk_02089270::func_02089268(Unk_02089270_Tbl *v) { unk_00 = v; }

BOOL Unk_020e0d44::func_02089284() {
    if (unk_0c.func_020891d8() && unk_20.func_020891d8()) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_020e0d44::func_020892ac() { return unk_34; }

enum Unk_020892b0_E { Unk_020892b0_E0 = 0 };
void Unk_020e0d44::func_020892b0(s32 idx) {
    Unk_020892b0_E a;
    Unk_020892b0_E b;
    u32 c;
    a = (Unk_020892b0_E)data_020cf5c8[idx];
    if (unk_40 != 0) {
        a = (Unk_020892b0_E)(a + 6);
    }
    b = (Unk_020892b0_E)(a + 1);
    c = data_020cf5b8[idx];
    unk_34 = idx;
    unk_0c.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + a * 8));
    unk_0c.func_02089264(c);
    unk_0c.func_020891bc();
    unk_20.func_02089268((Unk_02089270_Tbl *)(data_020d5b0c + b * 8));
    unk_20.func_02089264(c);
    unk_20.func_020891bc();
}

void Unk_020e0d44::func_02089320(s32 x, s32 y) {
    unk_38 = x;
    unk_3c = y;
}

void Unk_020e0d44::func_02089328() { unk_40 = 1; }

void Unk_020e0d44::vfunc_0c() {
    if (unk_34 != 0) {
        unk_0c.func_02089140();
        unk_20.func_02089140();
    }
}

void Unk_020e0d44::vfunc_08() {
    if (unk_34 != 0) {
        void *a = unk_0c.func_02089248();
        void *b = unk_20.func_02089248();
        s32 ox0 = unk_0c.func_02089228(-1);
        s32 oy0 = unk_0c.func_02089210(-1);
        s32 ox1 = unk_20.func_02089228(-1);
        s32 oy1 = unk_20.func_02089210(-1);
        s32 x = unk_38 + func_02089f68();
        s32 y = unk_3c + func_02089f64();
        if (unk_41 != 0) {
            func_02087e70(0, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(0, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(1, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020e0d44::~Unk_020e0d44() {}

Unk_020e0d44::Unk_020e0d44(u8 flag) {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_41 = flag;
    func_020892b0(0);
}

// ---------------------------------------------------------------------------------------------------------------------

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
            t->unk_10 = (u32)((StrBuf *)unk_60)->data();
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
            t->unk_10 = (u32)((StrBuf *)unk_88)->data();
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

void Unk_020e0d98::func_020897b0() {
    unk_0c.func_02089268((Unk_02089270_Tbl *)data_020d5ce4);
    unk_0c.func_02089264(1);
    unk_0c.func_02089260(0);
    unk_20.func_02089268((Unk_02089270_Tbl *)data_020d5cec);
    unk_20.func_02089264(1);
    unk_20.func_02089260(0);
}

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
    func_0205113c((StrBuf *)unk_60);
    func_0205113c((StrBuf *)unk_88);
    unk_b8 = 0;
    func_02089554();
}

s32 Unk_020e0d98::func_02089868() { return unk_0c.func_02089244() * 8 + 0x18; }
s32 Unk_020e0d98::func_0208987c() { return unk_40; }
s32 Unk_020e0d98::func_02089880() { return unk_3c; }
s32 Unk_020e0d98::func_02089884() { return unk_4c + (unk_40 + func_02089f64()); }
s32 Unk_020e0d98::func_0208989c() { return unk_50 + (unk_48 + (unk_3c + func_02089f68())); }
Unk_02089270 *Unk_020e0d98::func_020898b8() { return &unk_0c; }
s32 Unk_020e0d98::func_020898bc() { return unk_34; }

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

void Unk_020e0d98::func_02089908() {
    if (unk_59 != 0) {
        unk_38 = 1;
    } else {
        unk_38 = 2;
    }
    unk_34 = 3;
}

void Unk_020e0d98::func_02089924() {
    if (unk_55 != 0) {
        unk_55 = 0;
        func_02089908();
    }
}

void Unk_020e0d98::func_02089944() { unk_34 = 2; }

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

// Cursor ctor/dtor and 0x020890f4/0x02089100 are defined last so they are not inlined
Unk_02089270::Unk_02089270() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0x1000;
    unk_10 = 0;
}

Unk_02089270::~Unk_02089270() {}
