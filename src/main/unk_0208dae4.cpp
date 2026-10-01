#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_0203e2f4();
s32 func_020b50e8();
s32 func_02095134(s32 v);
void func_021145cc(void *p, u32 size);
void func_02111df8(void *p, u32 src, u32 size);
void func_02111d90(void *p, u32 src, u32 size);
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
void func_020a7bd8(void *p);
}

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct Unk_0208e13c_Rec { u32 unk_00; u32 unk_04; };
extern Unk_0208e13c_Rec data_020d5b0c[];
extern u16 data_021ceb00[];
extern u8 data_020cf6ec[];
extern u32 data_020cf6f0[];
extern u8 data_020cf6e8[];
extern s32 data_020cf708[];
extern s32 data_020cf6f8[];

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
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

class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 flag);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d9d4();
    void func_0208dae4(s32 v);
    void func_0208dae8(s32 x, s32 y);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class Unk_020e1064 : public Unk_020e0db4 {
public:
    Unk_020e1064();
    virtual ~Unk_020e1064();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208ddb8();
    void func_0208ddd8();
    void func_0208de10();
    void func_0208de30();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
};

extern Unk_020e1064 data_021ceadc;

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208dff4();
    void func_0208e074();
    void func_0208e08c();
    BOOL func_0208e110();
    s32 func_0208e138();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *outx, s32 *outy);
    void func_0208e288(s32 x, s32 y);
    void func_0208e290();
    void func_0208e2c8();
    void func_0208e2d0();
    void func_0208e2d8();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ Unk_02050288 *unk_48;
    /* 0x4c */ StrBuf unk_4c;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e1028

void Unk_020e1028::func_0208dae4(s32 v) { unk_44 = v; }
void Unk_020e1028::func_0208dae8(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void Unk_020e1028::vfunc_0c() {
    if (unk_3c != 0) {
        unk_14.func_02089140();
        unk_28.func_02089140();
    }
}

void Unk_020e1028::vfunc_08() {
    if (unk_3c != 0) {
        void *h0 = unk_14.func_02089248();
        void *h1 = unk_28.func_02089248();
        s32 a = unk_14.func_02089228(-1);
        s32 b = unk_14.func_02089210(-1);
        s32 c = unk_28.func_02089228(-1);
        s32 d = unk_28.func_02089210(-1);
        s32 bx = unk_0c + func_02089f68();
        s32 by = unk_10 + func_02089f64();
        if (unk_40 != 0) {
            func_02087e70(0, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(0, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(1, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020e1028::~Unk_020e1028() {
}

Unk_020e1028::Unk_020e1028(u32 flag) : unk_0c(0), unk_10(0) {
    unk_3c = 0;
    unk_40 = flag;
    unk_44 = -1;
    func_0208d9d4();
}

// ---------------------------------------------------------------------------------------------------------------------
// free function

extern "C" BOOL func_0208dd48() {
    BOOL a, b, c;
    long d, e;
    s32 v;
    a = data_021c5384 == 0 ? TRUE : FALSE;
    b = func_0203e2f4() == 0 ? TRUE : FALSE;
    c = func_020b50e8() == 6 ? TRUE : FALSE;
    v = func_02095134(4);
    d = (u32)(v - 8) <= 7 ? TRUE : FALSE;
    e = (u32)(v - 0x24) <= 8 ? TRUE : FALSE;
    if (a && b && !c && !d && !e) {
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e1064

void Unk_020e1064::func_0208ddb8() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        unk_20 = 0;
    }
}

void Unk_020e1064::func_0208ddd8() {
    if (func_0208dd48() == 0) {
        unk_20 = 3;
        unk_0c.func_02089268(data_020d4694);
        unk_0c.func_02089264(1);
        unk_0c.func_020891bc();
    }
}

void Unk_020e1064::func_0208de10() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        unk_20 = 2;
    }
}

void Unk_020e1064::func_0208de30() {
    if (func_0208dd48() != 0) {
        unk_20 = 1;
        unk_0c.func_02089268(data_020d468c);
        unk_0c.func_02089264(1);
        unk_0c.func_020891bc();
    }
}

void Unk_020e1064::vfunc_0c() {
    typedef void (Unk_020e1064::*Fn)();
    static Fn tbl[4] = {&Unk_020e1064::func_0208de30, &Unk_020e1064::func_0208de10, &Unk_020e1064::func_0208ddd8, &Unk_020e1064::func_0208ddb8};
    (this->*tbl[unk_20])();
}

void Unk_020e1064::vfunc_08() {
    if (unk_20 != 0) {
        void *h = unk_0c.func_02089248();
        s32 x = func_02089f68() + unk_0c.func_02089228(-1);
        s32 y = func_02089f64() + unk_0c.func_02089210(-1);
        func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

Unk_020e1064::~Unk_020e1064() {
}

Unk_020e1064::Unk_020e1064() {
    unk_20 = 0;
}

extern "C" void func_0208de68() { data_021ceadc.vfunc_08(); }
extern "C" void func_0208de78() { data_021ceadc.vfunc_0c(); }
extern "C" void func_0208de88() {}
extern "C" void func_0208de8c() { data_021ceadc.unk_20 = 0; }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e1098

void Unk_020e1098::func_0208dff4() {
    if (unk_6d == 0) {
        if (unk_68 != data_021ceb00[unk_18]) {
            unk_6d = 1;
        }
    }
    if (unk_6d != 0) {
        u32 n = data_020cf6ec[unk_18] * 2;
        func_021145cc(&unk_68, 2);
        func_02111df8(&unk_68, n, 2);
        func_02111d90(&unk_68, n, 2);
        data_021ceb00[unk_18] = unk_68;
        unk_6d = 0;
    }
}

void Unk_020e1098::func_0208e074() {
    if (unk_48 != NULL) {
        func_020a7fd8(unk_48);
        unk_48 = NULL;
    }
}

void Unk_020e1098::func_0208e08c() {
    if (unk_48 == NULL) {
        unk_48 = func_020a8054(data_020cf6f0[unk_18], 6, 2);
        if (unk_48 != NULL) {
            unk_48->unk_2c = 4;
            Unk_02050288 *t = unk_48;
            t->unk_10 = (u32)unk_4c.data();
            if (unk_6a != 0) {
                unk_48->unk_50 = 2;
            }
            unk_48->unk_55 = 1;
            unk_48->func_02050c44();
            unk_48->unk_39 = 0;
            unk_48->unk_38 = data_020cf6ec[unk_18];
            unk_48->func_02050c90();
            unk_6d = 1;
        }
    }
}

BOOL Unk_020e1098::func_0208e110() {
    if (unk_1c.func_020891d8() && unk_30.func_020891d8()) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_020e1098::func_0208e138() { return unk_44; }

void Unk_020e1098::func_0208e13c(s32 v) {
    s32 i = data_020cf6e8[unk_18] + data_020cf708[v];
    s32 j = i + 1;
    s32 k = data_020cf6f8[v];
    unk_44 = v;
    unk_1c.func_02089268(&data_020d5b0c[i]);
    unk_1c.func_02089264(k);
    unk_1c.func_020891bc();
    unk_30.func_02089268(&data_020d5b0c[v ? j : j]);
    unk_30.func_02089264(k);
    unk_30.func_020891bc();
    if (v == 1) {
        unk_1c.func_02089260(0);
        unk_30.func_02089260(0);
    }
    if (v == 0) {
        func_0208e074();
    } else {
        func_0208e08c();
        unk_68 = unk_44 == 2 ? 0x7d5f : 0x50c0;
        unk_6d = 1;
    }
}

void Unk_020e1098::func_0208e1fc(s32 *outx, s32 *outy) {
    s32 x = 0;
    s32 y = x;
    if (unk_44 == 2) {
        x = unk_1c.func_02089228(-1) - unk_1c.func_02089228(0);
        y = unk_1c.func_02089210(-1) - unk_1c.func_02089210(0);
    } else if (unk_44 == 3) {
        x = unk_1c.func_02089228(0) - unk_1c.func_02089228(-1);
        y = unk_1c.func_02089210(0) - unk_1c.func_02089210(-1);
    }
    *outx = x;
    *outy = y;
}

void Unk_020e1098::func_0208e288(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void Unk_020e1098::func_0208e290() {
    func_020a7bd8(&unk_4c);
    Unk_02050288 *o = unk_48;
    if (o != NULL) {
        o->unk_10 = (u32)unk_4c.data();
        unk_48->func_02050c44();
        unk_48->func_02050c90();
        unk_6d = 1;
    }
}

void Unk_020e1098::func_0208e2c8() { unk_6c = 0; }
void Unk_020e1098::func_0208e2d0() { unk_6c = 1; }
void Unk_020e1098::func_0208e2d8() { unk_6b = 1; }

void Unk_020e1098::vfunc_0c() {
    if (unk_44 != 0) {
        unk_1c.func_02089140();
        unk_30.func_02089140();
    }
}

void Unk_020e1098::vfunc_08() {
    if (unk_44 != 0) {
        void *h0 = unk_1c.func_02089248();
        void *h1 = unk_30.func_02089248();
        s32 a = unk_1c.func_02089228(-1);
        s32 b = unk_1c.func_02089210(-1);
        s32 c = unk_30.func_02089228(-1);
        s32 d = unk_30.func_02089210(-1);
        s32 bx = unk_0c + func_02089f68();
        s32 by = unk_10 + func_02089f64();
        s32 x0 = bx + a;
        s32 y0 = by + b;
        s32 x1 = bx + c;
        s32 y1 = by + d;
        BOOL show = unk_6c == 0 ? TRUE : FALSE;
        if (unk_6a != 0) {
            func_02087e70(0, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                func_02087e70(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                func_02087e70(0, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    func_02087e70(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            func_02087e70(1, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                func_02087e70(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                func_02087e70(1, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    func_02087e70(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
    func_0208dff4();
}

