#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_020e416c;
extern u8 data_021ef360[];
extern u8 data_021d7352[];
extern u8 data_ov120_02295070[];
extern u8 data_ov120_02295088[];
extern u8 data_ov120_022950a4[];
extern u8 data_ov120_022950c0[];
extern u8 data_ov120_022950d8[];
extern u8 data_ov120_022950f0[];
extern u8 data_ov120_02295108[];
extern u8 data_ov120_02295120[];
extern u32 data_021f482c;
extern u32 data_ov120_02295140;
extern u8 data_ov120_022951e0[];
extern u8 data_ov120_0229514c[];
extern s32 *func_020947f0(s32 v);
extern void func_020b4934();
extern s32 *func_020b5010(void *p);
void func_020026c4(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0200261c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void func_020641b4(void *a, void *b, u32 c);
void func_020024f0(void *a, u32 b, u32 c, u32 d);
void func_0206ee80(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_020021fc(u32 a, u32 b, u32 c);
void func_020021a0(u32 a);
void func_020020b8(u32 a);
s32 func_020b86c0(void *a, void *b, u32 c, u32 d, u32 e);
void func_020b87d0(void *p);
void func_02063888(void *p);
void func_020638d0(void *a, void *b);
void func_02063870(void *p);
void func_020b3544(u32 a, void *b);
void func_0206fb9c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_0206f9fc(void *a, u32 b);
void func_0206fab4(void *a, u32 b, u32 c);
void func_ov117_02292408(void *a, void *b);
void func_ov117_02292cac();
void *func_020e8618(void *a, u32 b);
void func_020e85fc(void *a, void *b);
void func_02135558(void *a, void *b, void *c);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
void func_0208d9d4(void *p, s32 v);
s32 func_0208d9a8(void *p);
s32 func_0208d4fc(void *p);
s32 func_ov002_022028f0(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
BOOL func_ov002_02202f18(void *p, u32 a, u32 b);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

// 0x40-byte element with out-of-line dtor func_0206fca8 (defined elsewhere)
class Unk_ov120_sub_0206fca8 {
public:
    ~Unk_ov120_sub_0206fca8();
    u32 unk_00[0x40 / 4];
};

// sub-object at +0x438 (dtor func_ov002_02202f70), 0x48 bytes
class Unk_ov120_sub_02202f70 {
public:
    virtual ~Unk_ov120_sub_02202f70();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x44 / 4];
};

// sub-object at +0x480 (virtual dtor func_ov002_02202640), 0x64 bytes
class Unk_ov120_sub_02202640 {
public:
    virtual ~Unk_ov120_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// 3-byte record, ctor func_ov120_02292de4, dtor func_ov120_02292de0
class Unk_ov120_02292de0 {
public:
    Unk_ov120_02292de0();
    ~Unk_ov120_02292de0();
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

// Vtable 0x022044e4 (declaration copied from ov099_000; sub-objects opaque)
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
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    BOOL func_ov002_02200a14(u32 v);
    s32 func_ov002_022008fc(u32 v);
    s32 func_ov002_02200908(u32 v);
    u32 func_ov002_02200920();
    void func_ov002_02200840(u32 a, u32 b, u32 c);
    void func_ov002_022008c4(u32 a, u32 b, u32 c, u32 d);
    void func_ov002_022008e0(u32 a, u32 b, u32 c, u32 d);

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

// Vtable 0x02295010
class Unk_ov120_02295010 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov120_02295010();

    void func_ov120_02292de8(u32 mask);
    void func_ov120_02292df8(u32 mask);
    BOOL func_ov120_02292e08(u32 mask);
    void func_ov120_02292e1c();
    s32 func_ov120_02292e7c();
    BOOL func_ov120_02292f44(u32 v);
    void func_ov120_02293090();
    void func_ov120_022930b0();
    void func_ov120_022930d0();
    void func_ov120_022930f0();
    void func_ov120_02293168();
    s32 func_ov120_0229318c();
    s32 func_ov120_022931dc();
    void func_ov120_02293230();
    void func_ov120_022932a8();
    void func_ov120_022932c4();
    void func_ov120_022932e8();
    BOOL func_ov120_02293374();
    void func_ov120_022933f0();
    void func_ov120_02293440();
    BOOL func_ov120_0229348c();
    void func_ov120_022934e0();
    BOOL func_ov120_02293590();
    void func_ov120_0229359c(u32 v);
    void func_ov120_022935ac(u32 v);
    void func_ov120_022935c8();
    void func_ov120_02293fc4();
    void func_ov120_0229400c();
    void func_ov120_02294024();
    void func_ov120_02294078();
    void func_ov120_022940a4();
    void func_ov120_022940dc();
    void func_ov120_02294100();
    void func_ov120_02294144();
    void func_ov120_0229418c();
    void func_ov120_022941b8();
    void func_ov120_02294290();
    void func_ov120_022942c0();
    void func_ov120_0229433c();
    void func_ov120_0229439c();
    void func_ov120_02294428();
    void func_ov120_022944d8();
    void func_ov120_0229450c();
    void func_ov120_02294514();
    void func_ov120_02294540();
    void func_ov120_0229460c();
    void func_ov120_02294614();
    void func_ov120_02294634();
    void func_ov120_0229470c();
    void func_ov120_0229476c();
    void func_ov120_022947c0();
    void func_ov120_0229489c();
    void func_ov120_022949a8();
    void func_ov120_02294a04();
    void func_ov120_02293f08();
    void func_ov120_022938d0(void *p);
    void func_ov120_02293df4();
    void *func_ov120_02293dc0();
    void func_ov120_02293cfc();
    u8 func_ov120_02293838(u8 a, u8 b);
    s32 func_ov120_02293898();
    s32 func_ov120_02293ac0();

    // out-of-range callees (declarations only)
    u32 func_ov120_0229364c(u8 v);
    void func_ov120_0229371c(u8 v);
    void func_ov120_02293784(u8 v);
    s32 func_ov120_02293b0c();
    s32 func_ov120_02293b28();
    void func_ov120_02293bd4();
    void func_ov120_02293bec();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[2];
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5;
    /* 0xa6 */ u8 unk_a6;
    /* 0xa7 */ u8 unk_a7;
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0[0x24];
    /* 0xd4 */ u8 unk_d4[0x24];
    /* 0xf8 */ Unk_ov120_sub_0206fca8 unk_f8[13];
    /* 0x438 */ Unk_ov120_sub_02202f70 unk_438;
    /* 0x480 */ Unk_ov120_sub_02202640 unk_480;
    /* 0x4e4 */ u8 unk_4e4[0x800];
    /* 0xce4 */ u8 unk_ce4[0xa00];
    /* 0x16e4 */ u8 unk_16e4[0x600];
    /* 0x1ce4 */ u8 unk_1ce4[0x81a];
    /* 0x24fe */ Unk_ov120_02292de0 unk_24fe[3];
    /* 0x2507 */ Unk_ov120_02292de0 unk_2507[14];
};


class Unk_ov117_02292c88 {
public:
    Unk_ov117_02292c88();
    ~Unk_ov117_02292c88();
    void func_ov117_02292c88();
    u32 unk_00[0x30 / 4];
};


static inline BOOL IsZero(u8 v) {
    if (v == 0) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov120_022942c0_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

struct Unk_ov120_02294634_V {
    s32 x, y, z;
};

void Unk_ov120_02295010::func_ov120_02293fc4() {
    func_0208d9d4(&unk_438, 1);
    func_ov120_02293230();
    func_ov002_02200980();
    if (func_ov120_02292e08(0x800)) {
        func_ov002_02200a58(9);
    } else {
        func_ov002_02200a58(2);
    }
}

void Unk_ov120_02295010::func_ov120_0229400c() {
    func_ov120_02293168();
    func_ov002_02200a58(0);
}

void Unk_ov120_02295010::func_ov120_02294024() {
    u32 v = data_021f47d8[1];
    BOOL r = TRUE;
    if ((v & 1) != 0) goto call;
    if ((v & 0x400) != 0) goto call;
    if ((v & 2) != 0) goto call;
    if (data_021f4770 == 0 || data_021f4774 == 0) r = FALSE;
    if (r) {
    call:
        func_ov120_022949a8();
    }
}

void Unk_ov120_02295010::func_ov120_02294078() {
    if (func_0208d9a8(&unk_438)) {
        func_ov120_022930b0();
        func_ov120_02292de8(0x1000);
    }
}

void Unk_ov120_02295010::func_ov120_022940a4() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_0208d9d4(&unk_438, 3);
        func_ov002_02200a58(8);
    } else {
        func_ov120_022933f0();
    }
}

void Unk_ov120_02295010::func_ov120_022940dc() {
    if (func_0208d9a8(&unk_438)) {
        func_ov002_02200a58(7);
    }
}

void Unk_ov120_02295010::func_ov120_02294100() {
    if (func_0208d4fc(&unk_480)) {
        func_ov120_02293090();
        if (func_ov120_02292e08(0x800)) {
            func_ov002_02200a58(9);
        } else {
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov120_02295010::func_ov120_02294144() {
    if (func_0208d4fc(&unk_480)) {
        s32 r = func_ov120_02292e7c();
        if (r == 1) {
        } else if (r == 2) {
            func_ov120_022935ac(0);
            unk_a3 = 0xff;
            func_ov120_022930b0();
        } else {
            func_ov120_022930b0();
        }
    }
}

void Unk_ov120_02295010::func_ov120_0229418c() {
    if (func_ov002_022028f0(&unk_480) == 0) {
        func_ov002_02200a58(unk_aa);
        func_ov120_02294a04();
    }
}

void Unk_ov120_02295010::func_ov120_022941b8() {
    if (func_ov002_022009d4()) {
        func_ov120_0229400c();
        return;
    }
    if (func_ov120_02292f44(func_ov002_022009c8())) {
        if (func_ov120_02292e08(8)) {
            if (unk_ab >= 2 && unk_ab <= 7) {
                func_ov120_0229359c(unk_98 & ~0xf);
            }
        }
        func_ov120_022930f0();
        return;
    }
    u32 k = data_021f47d8[1];
    if ((k & 1) != 0) {
        func_ov120_022930d0();
    } else if ((k & 0x800) != 0) {
        func_ov120_02293784(0);
        func_ov120_0229371c(0xe);
        if (unk_ab >= 2 && unk_ab <= 7) {
            func_ov120_02292e1c();
        }
        unk_ac = func_ov120_02293838(unk_ad, unk_ae);
        func_ov120_02292df8(0x800);
        func_ov002_02200a58(9);
        func_ov120_022930f0();
    }
}

void Unk_ov120_02295010::func_ov120_02294290() {
    if (data_021f4770 == 0) {
        func_0208d9d4(&unk_438, 3);
        func_ov120_0229400c();
    }
    func_ov120_02293440();
}

void Unk_ov120_02295010::func_ov120_022942c0() {
    if (func_ov002_02200a14(1)) {
        func_ov120_02293fc4();
        return;
    }
    if (Unk_ov120_022942c0_Both()) {
        if (func_ov120_02293374() == 0) {
            if (func_ov120_0229348c()) {
                func_0208d9d4(&unk_438, 2);
                func_ov002_02200a58(1);
            } else if (func_ov120_02293898() == 0) {
                s32 t = func_ov120_02293ac0();
                if (t != 0) {
                    return;
                }
            }
        }
    }
}

void Unk_ov120_02295010::func_ov120_0229433c() {
    u32 h = data_021f482c;
    func_020026c4(data_ov120_02295070, h, 8, 6, 6, 0xe);
    func_0200261c(data_ov120_02295088, h, 8, 0xc0, 0xc0, 0xff);
    func_0200261c(data_ov120_022950a4, h, 8, 0x180, 0x180, 0x1ff);
}

void Unk_ov120_02295010::func_ov120_0229439c() {
    u32 h = data_021f482c;
    void *p = func_020e8618((void *)h, 0x2000);
    static Unk_ov117_02292c88 obj;
    obj.func_ov117_02292c88();
    func_ov117_02292408(p, &obj);
    func_02002438(p, 4, 0x60, 0x60, 0x15f);
    func_ov120_022938d0(&obj);
    func_020e85fc((void *)h, p);
}

void Unk_ov120_02295010::func_ov120_02294428() {
    u32 h = data_021f482c;
    func_020026c4(data_ov120_022950c0, h, 4, 1, 1, 0xf);
    func_0200261c(data_ov120_022950d8, h, 4, 0x11, 0x11, 0x5f);
    func_0200261c(data_ov120_022950f0, h, 4, 0x230, 0x230, 0x25f);
    func_020641b4(data_ov120_02295108, unk_4e4, 0x800);
    func_020024f0(unk_4e4, 4, 0x800, 0);
    func_020641b4(data_ov120_02295120, unk_1ce4, 0x800);
    func_0206ee80(unk_1ce4, 0x13, 0, 0x1c, 1, 4);
}

void Unk_ov120_02295010::func_ov120_022944d8() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov120_02295010::func_ov120_0229450c() {
    func_ov120_02294540();
}

void Unk_ov120_02295010::func_ov120_02294514() {
    func_ov120_0229460c();
    unk_438.vfunc_0c();
    unk_480.vfunc_0c();
}

void Unk_ov120_02295010::func_ov120_02294540() {
    if (func_ov120_02293590()) {
        func_ov120_022934e0();
        func_020021fc(6, 0, unk_98 - 0x50);
        if (unk_a3 != (unk_98 >> 4)) {
            func_ov120_02292df8(0x80);
        }
    }
    func_ov120_022932e8();
    if (func_ov120_02292e08(0x80)) {
        func_ov120_02293f08();
        func_ov120_02292de8(0x80);
    }
    if (func_ov120_02292e08(0x20)) {
        if (func_020b86c0(unk_d4, unk_4e4, 4, 0x800, 0)) {
            func_ov120_02292de8(0x20);
        }
    }
    if (func_ov120_02292e08(2)) {
        if (func_020b86c0(unk_b0, unk_ce4, 6, 0x800, 0)) {
            func_ov120_02292de8(2);
        }
    }
}

void Unk_ov120_02295010::func_ov120_0229460c() {
    func_ov120_02293df4();
}

void Unk_ov120_02295010::func_ov120_02294614() {
    func_ov120_02293df4();
    func_020b87d0(unk_b0);
    func_020b87d0(unk_d4);
}

void Unk_ov120_02295010::func_ov120_02294634() {
    volatile Unk_ov120_02294634_V v;
    unk_a0 = 0;
    unk_9c = 0;
    unk_98 = 0;
    unk_9a = 0;
    unk_a4 = 0;
    unk_94 = 0;
    unk_a7 = 0;
    unk_ab = 0;
    unk_ad = 0x58;
    unk_ae = 0x70;
    unk_ac = 0xe;
    func_ov120_02293784(0);
    func_ov120_02293cfc();
    if (IsZero(data_020e416c)) {
        s32 *p = func_020947f0(4);
        v.x = p[0];
        v.y = p[1];
        v.z = p[2];
    } else {
        func_020b4934();
        s32 *p = func_020b5010(data_021ef360);
        v.x = p[0];
        v.y = p[1];
        v.z = p[2];
    }
    s32 z = (v.z + 0x800) >> 12;
    s32 x = (v.x + 0x800) >> 12;
    unk_9e = x - 8;
    unk_9f = z + 13;
    func_0208d9d4(&unk_438, 1);
}

void Unk_ov120_02295010::func_ov120_0229470c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov120_02292de8(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0x50 - unk_98);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov120_02295010::func_ov120_0229476c() {
    func_ov120_02293168();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov002_02200a50(6);
    unk_94 = func_ov002_02200920();
}

void Unk_ov120_02295010::func_ov120_022947c0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        unk_ac = 8;
        unk_ad = unk_2507[unk_ac].unk_00;
        unk_ae = unk_2507[unk_ac].unk_01;
        if (*(volatile u8 *)&unk_ae > 4) {
            unk_ae = *(volatile u8 *)&unk_ae - 4;
        } else {
            unk_ae = 0;
        }
        if (*(volatile u8 *)&unk_ad < 0xfc) {
            unk_ad = *(volatile u8 *)&unk_ad + 4;
        } else {
            unk_ad = 0xff;
        }
        func_ov120_02292df8(0x800);
        func_ov120_02293fc4();
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov120_02295010::func_ov120_0229489c() {
    u32 buf[8];
    func_ov120_0229433c();
    func_02063888(buf);
    func_020638d0(data_021d7352, buf);
    func_020b3544(0, buf);
    void *q = func_ov120_02293dc0();
    func_0206fb9c(q, 8, 0x1ab, 0x12, 0xf, 0, 0);
    func_0206f9fc(q, 0xa9);
    func_0206fab4(q, 1, 0);
    func_02063870(buf);
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov120_02292df8(4);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(4);
}
