#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u32 data_021f482c;
extern char data_ov119_022958a0[];
extern char data_ov119_022958b8[];
extern char data_ov119_022958d0[];
extern char data_ov119_022958e4[];
extern char data_ov119_022958fc[];
extern char data_ov119_02295910[];
extern char data_ov119_02295924[];
extern char data_ov119_02295938[];
extern char data_ov119_02295950[];
extern char data_ov119_02295968[];
extern char data_ov119_02295980[];

void func_ov119_02294c5c();
BOOL func_0206e61c();
void func_0206e63c();
BOOL func_0206ef0c();
BOOL func_0206e5dc();
u32 func_0206e5bc();
u32 func_0206ed38(u32 a);
BOOL func_0208d4fc(void *p);
s32 func_020b87d0(void *p);
void *func_020ed174(void *p);
void func_020ed188();
void func_ov090_02291964(void *p);
void func_ov090_02291a88(void *p);
u8 func_ov090_02291a38(u8 a);
u8 func_ov090_02291a58(u8 a);
s32 func_ov090_02291aa0();
void func_ov090_02291d8c(void *p, u8 idx);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
s32 func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02002654(void *a, u32 b, s32 c);
BOOL func_020641b4(void *a, void *b, s32 c);

BOOL func_ov002_022019d0(void *p, u32 idx, void *q, u8 flag);
s32 func_ov002_022014c0(void *p, u32 a, u32 b);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
s32 func_ov002_02201b58(void *p);
s32 func_ov002_02201b04(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, void *c);
void func_ov002_022020fc(void *p);
void func_ov002_02202b68(void *p);
BOOL func_ov002_022028f0(void *p);
}

class Unk_ov119_sub_02202640 {
public:
    virtual ~Unk_ov119_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov119_sub_020b8800 {
public:
    u32 unk_00[0x24 / 4];
};

class Unk_ov002_022044e4;

// Vtable 0x022044e4
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();

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

class Unk_ov119_02295840;
typedef void (Unk_ov119_02295840::*Unk_ov119_02295840_Fn)();

// Vtable 0x02295840
class Unk_ov119_02295840 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov119_02295840();

    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // in other ranges
    void func_ov119_02292dc0(u32 mask);
    void func_ov119_02292dd0(u32 mask);
    BOOL func_ov119_02292de0(u32 mask);
    void func_ov119_02292ea4();
    u8 func_ov119_02292f8c(u32 idx);
    void func_ov119_02292f98();
    u8 func_ov119_02293010(s32 idx);
    void func_ov119_0229305c(u32 s);
    void func_ov119_02293328();
    BOOL func_ov119_02293674();
    void func_ov119_0229371c();
    BOOL func_ov119_02293744();
    void func_ov119_02293784();
    BOOL func_ov119_02293828();
    void func_ov119_022939cc();
    u32 func_ov119_02293ab8(u32 a, u32 b);
    s32 func_ov119_02293b48();
    BOOL func_ov119_02293f68(u32 a);
    void func_ov119_02294188();
    void func_ov119_022941a8();
    void func_ov119_022941c8();
    void func_ov119_022941e8();
    void func_ov119_02294244();
    void func_ov119_022942a4();
    void func_ov119_022942f0();
    void func_ov119_02294364();
    void func_ov119_022944cc();
    void func_ov119_0229453c();
    void func_ov119_022945a4();
    void func_ov119_022945d4();
    void func_ov119_022945f0();
    void func_ov119_02294608();
    void func_ov119_02294634();
    void func_ov119_02294670();
    void func_ov119_022946b4();
    void func_ov119_022946f4();
    void func_ov119_02294718();
    void func_ov119_02294734();
    void func_ov119_02294770();
    void func_ov119_022947a4();
    void func_ov119_02294804();
    void func_ov119_02294840();

    // this range
    void func_ov119_02294894();
    void func_ov119_02294930();
    void func_ov119_02294958();
    void func_ov119_02294990();
    void func_ov119_022949bc();
    void func_ov119_02294a44();
    void func_ov119_02294af0();
    void func_ov119_02294b54();
    void func_ov119_02294bcc();
    void func_ov119_02294c90();
    void func_ov119_02294c98();
    void func_ov119_02294cb4();
    void func_ov119_02294ccc();
    void func_ov119_02294d00();
    void func_ov119_02294d3c();
    void func_ov119_02294de8();
    void func_ov119_02294e3c();
    void func_ov119_02294e88();
    void func_ov119_02294ee8();
    void func_ov119_02294f4c();
    void func_ov119_02294fa8();
    BOOL func_ov119_02294fbc(s32 idx);
    BOOL func_ov119_02294ffc();
    void func_ov119_02295110();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ s16 unk_9a;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[12];
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u32 unk_b4;
    /* 0xb8 */ u32 unk_b8;
    /* 0xbc */ u8 unk_bc[0x20];
    /* 0xdc */ u8 unk_dc[0x300];
    /* 0x3dc */ u8 unk_3dc[0x4c0];
    /* 0x89c */ u8 unk_89c[0xd4];
    /* 0x970 */ Unk_ov119_sub_02202640 unk_970;
    /* 0x9d4 */ u16 unk_9d4[0x800];
    /* 0x19d4 */ void *unk_19d4;
    /* 0x19d8 */ u8 unk_19d8[0x80];
    /* 0x1a58 */ Unk_ov119_sub_020b8800 unk_1a58[3];
};

static inline BOOL Unk_ov119_02294a44_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02294894() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (func_ov002_022009d4()) {
        func_ov119_02294364();
        func_ov002_02200a58(1);
    } else {
        u32 r4 = func_ov002_022009c8();
        u8 f = func_ov119_02292de0(0x10);
        if (func_ov002_022019d0(unk_dc, r4, &unk_ae, f)) {
            func_ov119_022942a4();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(&unk_970);
                func_ov002_02200a58(7);
            } else if (k & 2) {
                func_ov119_02294244();
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294930() {
    if (func_0208d4fc(&unk_970)) {
        func_ov119_02294188();
        func_ov002_02200a58(2);
    }
}

void Unk_ov119_02295840::func_ov119_02294958() {
    if (func_0208d4fc(&unk_970)) {
        s32 r = func_ov119_02293b48();
        switch (r) {
        case 1:
            break;
        case 2:
            func_ov119_022941a8();
            break;
        default:
            func_ov119_022941a8();
            break;
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294990() {
    if (!func_ov002_022028f0(&unk_970)) {
        func_ov002_02200a58(unk_9f);
        func_ov119_02295110();
    }
}

void Unk_ov119_02295840::func_ov119_022949bc() {
    if (func_ov002_022009d4()) {
        func_ov119_022945f0();
    } else {
        u32 r = func_ov002_022009c8();
        if (func_ov119_02293f68(r)) {
            func_ov119_022942f0();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov119_022941c8();
            } else if (k & 0x100) {
                func_ov119_02294fbc(func_ov090_02291a38(6));
            } else if (k & 0x200) {
                func_ov119_02294fbc(func_ov090_02291a58(6));
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294a44() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (func_ov002_02200a14(1)) {
        func_ov119_022941e8();
        func_ov002_02200a58(6);
    } else if (Unk_ov119_02294a44_Both()) {
        s32 r5 = func_ov002_022014c0(unk_dc, data_021ef5f0, data_021ef5ec);
        if (r5 >= 0) {
            if (!(func_ov119_02292de0(0x10) && r5 == 0)) {
                func_ov002_02201aa0(unk_dc, r5, 1);
                unk_ad = func_ov119_02292f8c(r5);
                func_ov002_02200a58(0xb);
            }
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294af0() {
    if (func_ov002_02200a14(1)) {
        func_ov119_022945d4();
    } else if (Unk_ov119_02294a44_Both()) {
        u32 r = func_ov119_02293ab8(data_021ef5f0, data_021ef5ec);
        if (r != 0x17) {
            unk_a0 = r;
            func_ov119_02293b48();
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294b54() {
    u32 r4 = data_021f482c;
    func_0200261c(data_ov119_022958a0, r4, 8, 0xc0, 0xc0, 0x15d);
    func_0200261c(data_ov119_022958b8, r4, 8, 0x1a0, 0x1a0, 0x1df);
    func_020026c4(data_ov119_022958d0, r4, 8, 4, 4, 10);
    func_020641b4(data_ov119_022958e4, unk_19d8, 0x20);
}

void Unk_ov119_02295840::func_ov119_02294bcc() {
    u32 r4 = data_021f482c;
    func_020026c4(data_ov119_022958fc, r4, 6, 1, 1, 5);
    func_020641b4(data_ov119_02295910, unk_19d8 + 0x20, 0x20);
    func_0200261c(data_ov119_02295924, r4, 6, 0x11, 0x11, 0x89);
    func_02002654(data_ov119_02295938, r4, 6);
    func_020641b4(data_ov119_02295950, unk_9d4, 0x800);
    func_020641b4(data_ov119_02295968, unk_9d4 + 0x400, 0x800);
}

void Unk_ov119_02295840::func_ov119_02294c90() { func_ov119_02294cb4(); }

void Unk_ov119_02295840::func_ov119_02294c98() {
    func_ov119_02294ccc();
    unk_970.vfunc_0c();
}

void Unk_ov119_02295840::func_ov119_02294cb4() {
    func_ov119_022939cc();
    func_ov002_02201b58(unk_dc);
}

void Unk_ov119_02295840::func_ov119_02294ccc() {
    func_ov119_0229453c();
    func_020b87d0(&unk_1a58[0]);
    func_020b87d0(&unk_1a58[1]);
    func_020b87d0(&unk_1a58[2]);
}

void Unk_ov119_02295840::func_ov119_02294d00() {
    func_ov002_02201b04(unk_dc);
    func_ov119_0229453c();
    func_020b87d0(&unk_1a58[0]);
    func_020b87d0(&unk_1a58[1]);
    func_020b87d0(&unk_1a58[2]);
}

void Unk_ov119_02295840::func_ov119_02294d3c() {
    if (!func_ov119_02293828()) {
        if (func_ov119_02293744()) {
            func_ov119_0229371c();
            func_ov090_02291964(func_020ed174(this));
        }
    } else {
        if (func_ov119_02293674()) {
            func_ov090_02291964(func_020ed174(this));
        }
    }
    unk_9e = 0;
    unk_98 = 0;
    unk_a0 = 8;
    unk_19d4 = unk_9d4;
    unk_9a = -1;
    unk_9c = 0xff;
    unk_af = 0;
    unk_b0 = 7;
    unk_b8 = 5;
    func_ov119_02292f98();
    func_ov002_02202310(unk_dc, 3, 1, data_ov119_02295980);
    func_ov119_02293784();
}

void Unk_ov119_02295840::func_ov119_02294de8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov119_02292dc0(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov119_02295840::func_ov119_02294e3c() {
    func_ov119_02294364();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(4);
    unk_94 = func_ov002_02200920();
}

void Unk_ov119_02295840::func_ov119_02294e88() {
    if (func_ov119_02292de0(8)) {
        func_ov119_02292dc0(8);
        func_ov119_02293328();
    }
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov119_022945a4();
    }
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov119_02295840::func_ov119_02294ee8() {
    func_ov002_022008e0(0xa, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_ov119_02292dd0(1);
    unk_94 = func_ov002_02200920();
    func_ov119_02292dd0(8);
    func_ov002_02200a50(2);
}

void Unk_ov119_02295840::func_ov119_02294f4c() {
    func_ov119_02294c5c();
    func_ov119_02294bcc();
    func_ov119_02294b54();
    func_ov119_022944cc();
    func_ov002_022020fc(unk_dc);
    u32 v;
    if (func_0206e5dc()) {
        v = func_0206ed38(func_0206e5bc());
    } else {
        v = 0;
    }
    func_ov119_0229305c(func_ov119_02293010(v));
    func_ov002_02200a50(1);
    func_ov119_02294ee8();
}

void Unk_ov119_02295840::func_ov119_02294fa8() {
    func_ov090_02291a88(func_020ed174(this));
}

BOOL Unk_ov119_02295840::func_ov119_02294fbc(s32 idx) {
    void *o = func_020ed174(this);
    if (idx != -1 && idx != 6) {
        func_ov090_02291d8c(o, (u8)idx);
        unk_8c = 3;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov119_02295840::func_ov119_02294ffc() {
    func_0206e63c();
    if (func_0206e61c()) {
        switch (unk_8d) {
        case 0:
        case 2:
        case 4:
        case 5:
        case 8:
        case 14:
        case 15:
            return func_ov119_02294fbc(7);
        }
    }
    if (unk_8d != 0 && unk_8d != 2) {
        return FALSE;
    }
    s32 r5 = -1;
    if (func_0206ef0c()) {
        r5 = func_ov090_02291aa0();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 2) {
            r5 = 7;
        } else if (k & 0x800) {
            r5 = 0;
        } else if (k & 0x400) {
            r5 = 5;
        } else if (k & 4) {
            r5 = 4;
        }
    }
    return func_ov119_02294fbc(r5);
}

BOOL Unk_ov119_02295840::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov119_02295840::vfunc_58() { return TRUE; }

BOOL Unk_ov119_02295840::vfunc_54() { return TRUE; }

BOOL Unk_ov119_02295840::vfunc_50() {
    if (func_ov119_02294ffc()) {
        return TRUE;
    }
    func_ov119_02294c98();
    func_ov119_02295110();
    func_ov119_02294c90();
    return TRUE;
}

void Unk_ov119_02295840::func_ov119_02295110() {
    static Unk_ov119_02295840_Fn tbl[18] = {
        &Unk_ov119_02295840::func_ov119_02294af0, &Unk_ov119_02295840::func_ov119_02294a44,
        &Unk_ov119_02295840::func_ov119_022949bc, &Unk_ov119_02295840::func_ov119_02294990,
        &Unk_ov119_02295840::func_ov119_02294958, &Unk_ov119_02295840::func_ov119_02294930,
        &Unk_ov119_02295840::func_ov119_02294894, &Unk_ov119_02295840::func_ov119_02294840,
        &Unk_ov119_02295840::func_ov119_02294804, &Unk_ov119_02295840::func_ov119_022947a4,
        &Unk_ov119_02295840::func_ov119_02294770, &Unk_ov119_02295840::func_ov119_02294734,
        &Unk_ov119_02295840::func_ov119_02294718, &Unk_ov119_02295840::func_ov119_022946f4,
        &Unk_ov119_02295840::func_ov119_022946b4, &Unk_ov119_02295840::func_ov119_02294670,
        &Unk_ov119_02295840::func_ov119_02294634, &Unk_ov119_02295840::func_ov119_02294608};
    (this->*tbl[unk_8d])();
}

extern "C" void func_ov119_02294c5c() {
    func_02002398(6, 2);
    func_02002398(4, 2);
    func_0200226c(6, 0, 0, 0);
    func_0200226c(4, 0, 0, 0);
}

