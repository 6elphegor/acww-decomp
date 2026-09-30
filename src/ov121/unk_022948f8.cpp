#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_ov090_02291d2c();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
BOOL func_0206ef00();
struct Unk_ov121_02294c80 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};
extern Unk_ov121_02294c80 data_ov121_02294c80;
extern u8 data_ov121_02294d40[];
}


class Unk_ov121_sub_02200800 {
public:
    Unk_ov121_sub_02200800();
    virtual ~Unk_ov121_sub_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov121_sub_02202640 {
public:
    Unk_ov121_sub_02202640();
    virtual ~Unk_ov121_sub_02202640();
    virtual void vfunc_08();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov121_sub_022043e8 {
public:
    Unk_ov121_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov121_sub_02202454 {
public:
    Unk_ov121_sub_02202454();
    void func_ov002_02201b28();
    u8 unk_00[0x300];
};

class Unk_ov121_sub_020b85f8 {
public:
    Unk_ov121_sub_020b85f8();
    u32 unk_00[0x38 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x02294d68, size 0x107c
class Unk_ov121_02294d68 : public Unk_ov002_022044e4 {
public:
    Unk_ov121_02294d68() : unk_2d8(), unk_398(), unk_3fc(), unk_504(), unk_804() {}
    virtual ~Unk_ov121_02294d68();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov121_0229241c(u32 mask);
    void func_ov121_02292a74();
    void func_ov121_02293700();
    s32 func_ov121_02293900(u32 i);
    s32 func_ov121_02293918(u32 i);
    void func_ov121_02294394();
    void func_ov121_02294328();
    void func_ov121_022943bc();
    void func_ov121_02294420();
    void func_ov121_022945c8();
    void func_ov121_02294590();
    void func_ov121_02294550();
    void func_ov121_02294514();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ u8 unk_98[0xa4 - 0x98];
    /* 0xa4 */ s16 unk_a4;
    /* 0xa6 */ s16 unk_a6;
    /* 0xa8 */ u8 unk_a8[6];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0[0x2d8 - 0xb0];
    /* 0x2d8 */ Unk_ov121_sub_02200800 unk_2d8;
    /* 0x398 */ Unk_ov121_sub_02202640 unk_398;
    /* 0x3fc */ Unk_ov121_sub_022043e8 unk_3fc;
    /* 0x504 */ Unk_ov121_sub_02202454 unk_504;
    /* 0x804 */ Unk_ov121_sub_020b85f8 unk_804[2];
    /* 0x874 */ u8 unk_874[0x1074 - 0x874];
    /* 0x1074 */ u8 unk_1074[8];
};

typedef void (Unk_ov121_02294d68::*Unk_ov121_02294d68_Fn)();

BOOL Unk_ov121_02294d68::vfunc_4c() {
    static Unk_ov121_02294d68_Fn tbl[4] = {
        &Unk_ov121_02294d68::func_ov121_022945c8, &Unk_ov121_02294d68::func_ov121_02294590,
        &Unk_ov121_02294d68::func_ov121_02294550, &Unk_ov121_02294d68::func_ov121_02294514};
    func_ov121_02294394();
    (this->*tbl[unk_8c])();
    func_ov121_02294328();
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_24() {
    u8 *p = unk_94;
    u32 i;
    s32 j;
    s32 *zero = 0;
    if (!func_ov121_0229241c(1)) {
        return TRUE;
    }
    unk_2d8.vfunc_08();
    if (func_0206ef00()) {
        unk_398.func_ov002_02202844();
    }
    unk_504.func_ov002_02201b28();
    if (func_ov121_0229241c(4)) {
        if (func_0206ef00()) {
            func_ov121_02292a74();
        } else {
            func_ov121_02293700();
        }
        u8 *q = unk_1074;
        u8 s = unk_ae;
        data_ov121_02294c80.unk_04 = (data_ov121_02294c80.unk_04 & 0xfffffc00) | (u16)(q[s] * 4 + 0xc0) & 0x3ff;
        func_02088730(1, &data_ov121_02294c80, unk_a4, unk_a6, q[s] + 4, 2, 0);
    }
    if (func_ov121_0229241c(8)) {
        u8 k = unk_af;
        s32 y = (s32)(p + func_ov121_02293900(k));
        s32 x = func_ov121_02293918(k);
        func_02087e70(1, data_ov121_02294d40, x, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    i = 0;
    for (j = 0; j < 8; j++) {
        if (func_ov121_0229241c(4) && i == unk_ae) {
        } else {
            u8 *e = (u8 *)this + j;
            data_ov121_02294c80.unk_04 = (data_ov121_02294c80.unk_04 & 0xfffffc00) | (u16)(e[0x1074] * 4 + 0xc0) & 0x3ff;
            s32 y, pal;
            pal = e[0x1074] + 4;
            y = (s32)(p + func_ov121_02293900(i));
            s32 x = func_ov121_02293918(i);
            func_02088730(1, &data_ov121_02294c80, x, y, pal, 2, zero);
        }
        i = (u8)(i + 1);
    }
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_0c() {
    func_020ed174();
    func_ov090_02291d2c();
    func_ov121_022943bc();
    return TRUE;
}

BOOL Unk_ov121_02294d68::vfunc_00() {
    func_ov121_02294420();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov121_02294d68 *func_ov121_02294b5c() { return new Unk_ov121_02294d68(); }

Unk_ov121_02294d68::~Unk_ov121_02294d68() {}
