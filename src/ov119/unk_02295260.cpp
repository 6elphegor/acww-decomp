#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020ed174();
void func_020b8800(void *p);
void func_0206fca8(void *p);
void func_020ed188(void *p);
void func_ov090_02291d2c();
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
BOOL func_0206ef00();
struct Unk_ov119_02295588 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};
extern Unk_ov119_02295588 data_ov119_02295588;
extern u8 data_ov119_02295660[];
extern u8 *data_ov119_02295648[];
extern u8 data_ov119_02295778[];
extern u8 data_ov119_022957d8[];
extern u8 data_ov119_022957a8[];
}

class Unk_ov119_sub_02202454 {
public:
    Unk_ov119_sub_02202454();
    ~Unk_ov119_sub_02202454();
    void func_ov002_02201b28();
    u8 unk_00[0x300];
};

class Unk_ov119_sub_0206fca8 {
public:
    Unk_ov119_sub_0206fca8();
    ~Unk_ov119_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

class Unk_ov119_sub_02077160 {
public:
    Unk_ov119_sub_02077160();
    ~Unk_ov119_sub_02077160();
    u32 unk_00[0xd4 / 4];
};

class Unk_ov119_sub_02202640 {
public:
    Unk_ov119_sub_02202640();
    virtual ~Unk_ov119_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

class Unk_ov119_sub_020b8800 {
public:
    Unk_ov119_sub_020b8800();
    u32 unk_00[0x24 / 4];
};

class Unk_ov119_sub_022043e8 {
public:
    Unk_ov119_sub_022043e8();
    ~Unk_ov119_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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

// Vtable 0x02295840, size 0x1bcc
class Unk_ov119_02295840 : public Unk_ov002_022044e4 {
public:
    Unk_ov119_02295840() : unk_dc(), unk_3dc(), unk_89c(), unk_970(), unk_1a58(), unk_1ac4() {}
    virtual ~Unk_ov119_02295840();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();

    BOOL func_ov119_02292de0(u32 mask);
    void func_ov119_02294ccc();
    void func_ov119_02294cb4();
    void func_ov119_02294d00();
    void func_ov119_02294d3c();
    void func_ov119_02294f4c();
    void func_ov119_02294ee8();
    void func_ov119_02294e88();
    void func_ov119_02294e3c();
    void func_ov119_02294de8();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u8 *unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ s16 unk_9a;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e[2];
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[12];
    /* 0xad */ u8 unk_ad[3];
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1[0xdc - 0xb1];
    /* 0x0dc */ Unk_ov119_sub_02202454 unk_dc;
    /* 0x3dc */ Unk_ov119_sub_0206fca8 unk_3dc[0x13];
    /* 0x89c */ Unk_ov119_sub_02077160 unk_89c;
    /* 0x970 */ Unk_ov119_sub_02202640 unk_970;
    /* 0x9d4 */ u8 unk_9d4[0x1a58 - 0x9d4];
    /* 0x1a58 */ Unk_ov119_sub_020b8800 unk_1a58[3];
    /* 0x1ac4 */ Unk_ov119_sub_022043e8 unk_1ac4;
};

typedef void (Unk_ov119_02295840::*Unk_ov119_02295840_Fn)();

BOOL Unk_ov119_02295840::vfunc_4c() {
    static Unk_ov119_02295840_Fn tbl[5] = {
        &Unk_ov119_02295840::func_ov119_02294f4c, &Unk_ov119_02295840::func_ov119_02294ee8,
        &Unk_ov119_02295840::func_ov119_02294e88, &Unk_ov119_02295840::func_ov119_02294e3c,
        &Unk_ov119_02295840::func_ov119_02294de8};
    func_ov119_02294ccc();
    (this->*tbl[unk_8c])();
    func_ov119_02294cb4();
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_24() {
    u8 *p = unk_94 + 0x60;
    s32 i;
    if (!func_ov119_02292de0(1)) {
        return TRUE;
    }
    unk_dc.func_ov002_02201b28();
    if (func_0206ef00()) {
        unk_970.func_ov002_02202844();
    }
    func_02087e70(1, data_ov119_02295660, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    for (i = 0; i < 6; i++) {
        func_02087e70(1, data_ov119_02295648[i], 0x80, (s32)p, i == unk_9d ? 5 : 4, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    func_02087e70(1, data_ov119_02295778, 0x80, (s32)p, unk_b0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    s32 x = 0x80;
    switch (unk_9c) {
    case 4:
        for (i = 0; i < 12; i++) {
            data_ov119_02295588.unk_04 = (data_ov119_02295588.unk_04 & 0xfffffc00) | (u16)(unk_a1[i] * 2 + 0x1a0) & 0x3ff;
            func_02088730(1, &data_ov119_02295588, x, (s32)p, -1, 2, 0);
            x += 14;
        }
        func_02087e70(1, data_ov119_022957d8, 0x80, (s32)p, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    case 5:
        break;
    default:
        if (unk_9a != -1) {
            func_02087e70(1, data_ov119_022957a8, x, (s32)(p + unk_9a * 16 - 16), -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_0c() {
    func_020ed174();
    func_ov090_02291d2c();
    func_ov119_02294d00();
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_00() {
    func_ov119_02294d3c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

extern "C" Unk_ov119_02295840 *func_ov119_022954e8() { return new Unk_ov119_02295840(); }

Unk_ov119_02295840::~Unk_ov119_02295840() {}
