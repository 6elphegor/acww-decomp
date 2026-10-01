#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_0203e2f4();
s32 func_020b50e8();
s32 func_02095134(s32 v);
}

extern s32 data_021c5384;
extern u8 data_020d4694[];
extern u8 data_020d468c[];

struct Unk_02089270_Tbl;

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
    void func_02089268(Unk_02089270_Tbl *v);

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

    void func_0208d9d4(s32 idx);
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

class Unk_020e1064 {
public:
    void func_0208ddb8();
    void func_0208ddd8();
    void func_0208de10();
    void func_0208de30();

    /* 0x00 */ u8 unk_00[0x0c];
    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
};

extern "C" BOOL func_0208dd48();

void Unk_020e1064::func_0208de30() {
    if (func_0208dd48() != 0) {
        unk_20 = 1;
        unk_0c.func_02089268((Unk_02089270_Tbl *)data_020d468c);
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

void Unk_020e1064::func_0208ddd8() {
    if (func_0208dd48() == 0) {
        unk_20 = 3;
        unk_0c.func_02089268((Unk_02089270_Tbl *)data_020d4694);
        unk_0c.func_02089264(1);
        unk_0c.func_020891bc();
    }
}

void Unk_020e1064::func_0208ddb8() {
    unk_0c.func_02089140();
    if (unk_0c.func_020891d8()) {
        unk_20 = 0;
    }
}

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

Unk_020e1028::Unk_020e1028(u32 flag) : unk_0c(0), unk_10(0) {
    unk_3c = 0;
    unk_40 = flag;
    unk_44 = -1;
    func_0208d9d4(0);
}

Unk_020e1028::~Unk_020e1028() {
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

void Unk_020e1028::vfunc_0c() {
    if (unk_3c != 0) {
        unk_14.func_02089140();
        unk_28.func_02089140();
    }
}

void Unk_020e1028::func_0208dae8(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void Unk_020e1028::func_0208dae4(s32 v) { unk_44 = v; }

