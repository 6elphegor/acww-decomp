#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 n, u32 a, u32 b, u32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_020ed188();
void *func_020ed174(void *p);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;

void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_022006a4(void *p, s32 a);
BOOL func_ov002_0220071c(void *p);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *b, s32 c);
void func_ov002_02201b58(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_022017b4(void *p);
BOOL func_ov002_02200680(void *p);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02203900(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203510(void *p, s32 a);

void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02294644(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_022937a0(void *p);
void func_ov094_02293d2c(void *p);
}

class Unk_ov002_022044e4;

static inline BOOL Unk_ov108_022961d8_Both()
{
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x220c sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    BOOL func_ov002_022028f0();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);

    u8 unk_4b[0x64 - 0x4b];
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
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
    /* 0x91 */ u8 unk_91[3];
};


class Unk_ov108_02296b58;
typedef void (Unk_ov108_02296b58::*Unk_ov108_02296b58_Fn)();

class Unk_ov108_02296b58 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov108_02296b58();

    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // state handlers (member-pointer table)
    void func_ov108_02295b0c();
    void func_ov108_02295b44();
    void func_ov108_02295b64();
    void func_ov108_02295bb4();
    void func_ov108_02295bf0();
    void func_ov108_02295c28();
    void func_ov108_02295c6c();
    void func_ov108_02295cb4();
    void func_ov108_02295d08();
    void func_ov108_02295d38();
    void func_ov108_02295d68();
    void func_ov108_02295d90();
    void func_ov108_02295dc0();
    void func_ov108_02295e0c();
    void func_ov108_02295a84();
    void func_ov108_02295e5c();
    void func_ov108_02295ed8();
    void func_ov108_02295f74();
    void func_ov108_02296048();
    void func_ov108_022960e0();
    void func_ov108_02296174();
    void func_ov108_022961bc();
    void func_ov108_022961d8();
    void func_ov108_0229626c();

    void func_ov108_022962ec();
    void func_ov108_02296310();
    void func_ov108_02296324();
    void func_ov108_02296344();
    void func_ov108_0229637c();
    void func_ov108_022963bc();
    void func_ov108_022963c4();
    void func_ov108_022963e0();
    void func_ov108_02296420();
    void func_ov108_022964a0();
    void func_ov108_022964ec();
    void func_ov108_0229654c();
    void func_ov108_02296588();
    void func_ov108_0229660c();
    void func_ov108_0229665c();

    // callees outside this group
    void func_ov108_02294f28();
    void func_ov108_02295198();
    void func_ov108_02295134();
    BOOL func_ov108_02294db0(s32 a, s32 b);
    void func_ov108_02295498();
    void func_ov108_022951ec();
    BOOL func_ov108_02295614(u32 a);
    void func_ov108_02295038(u32 a);
    void func_ov108_02294fec(u32 a);
    void func_ov108_02295a68();
    BOOL func_ov108_02295648(u32 a);
    BOOL func_ov108_02295830(u32 a);
    void func_ov108_02295074();
    void func_ov108_02294ec4(u32 a, s32 b);
    void func_ov108_02295254();
    void func_ov108_02295850();
    void func_ov108_02295400();
    BOOL func_ov108_02294d9c(s32 a);
    void func_ov108_0229542c();
    void func_ov108_02295588();
    s32 func_ov108_022957cc(s32 a, s32 b, s32 c);
    BOOL func_ov108_02295780(u32 a);
    void func_ov108_022958c0(u32 a, s32 b);
    void func_ov108_02295a0c();
    void func_ov108_02295558(s32 a);
    void func_ov108_02295a2c();
    void func_ov108_02295974(s32 a);
    void func_ov108_022954ec();
    void func_ov108_02294d7c(s32 a);
    void func_ov108_02294d8c(s32 a);
    void func_ov108_0229567c();
    void func_ov108_02295840();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 unk_9c[0xa4 - 0x9c];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[0x294 - 0xac];
    /* 0x294 */ u8 unk_294;
    /* 0x295 */ u8 unk_295;
    /* 0x296 */ u8 unk_296;
    /* 0x297 */ u8 unk_297;
    /* 0x298 */ u8 unk_298;
    /* 0x299 */ u8 unk_299[3];
    /* 0x29c */ u8 unk_29c;
    /* 0x29d */ u8 unk_29d;
    /* 0x29e */ u8 unk_29e;
    /* 0x29f */ u8 unk_29f[0x2d8 - 0x29f];
    /* 0x2d8 */ u8 unk_2d8[0xd38 - 0x2d8];
    /* 0xd38 */ u8 unk_d38[0xd60 - 0xd38];
    /* 0xd60 */ u8 unk_d60[0x2340 - 0xd60];
    /* 0x2340 */ u8 unk_2340[0x2400 - 0x2340];
    /* 0x2400 */ u8 unk_2400[0x2418 - 0x2400];
    /* 0x2418 */ Unk_ov002_02204630 unk_2418;
    /* 0x247c */ u8 unk_247c[0x2775 - 0x247c];
    /* 0x2775 */ u8 unk_2775[0x2884 - 0x2775];
    /* 0x2884 */ u8 unk_2884[0x10];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov108_02296b58::func_ov108_02295e5c() {
    if (func_ov002_022009d4()) {
        func_ov108_02294f28();
    } else if (func_ov002_022019d0(unk_247c, func_ov002_022009c8(), &unk_29d, 0)) {
        func_ov108_02295198();
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            unk_2418.func_ov002_02202b68();
            func_ov002_02200a58(9);
        } else if ((f & 2) != 0) {
            func_ov108_02295134();
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295ed8() {
    if (func_ov108_02294db0(func_ov002_022009c8(), 1)) {
        func_ov108_02295498();
        func_ov108_022951ec();
        func_ov002_022006e4(unk_2340, 0);
    } else {
        u16 f = data_021f47d8[1];
        if ((f & 1) != 0) {
            if (func_ov108_02295614(unk_298)) {
                func_ov108_02295038(unk_298);
            } else {
                func_ov108_02294fec(unk_298);
            }
        } else if ((f & 2) != 0) {
            func_ov108_02295038(unk_297);
        } else {
            func_ov108_02295400();
            func_ov002_022006c0(unk_2340);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02295f74() {
    if (func_ov002_022009d4()) {
        func_ov108_02295a68();
        func_ov002_022006e4(unk_2340, 1);
    } else if (func_ov108_02294db0(func_ov002_022009c8(), 0)) {
        func_ov108_02295498();
        func_ov108_022951ec();
        func_ov002_022006e4(unk_2340, 0);
    } else if (func_ov108_02295648(unk_298) == 0 && (data_021f47d8[1] & 1) != 0) {
        if (func_ov108_02295830(unk_298)) {
            if (func_ov108_02295614(unk_298) == 0) {
                func_ov108_02294ec4(unk_298, 0);
            }
        } else {
            func_ov108_02295074();
        }
    } else if ((data_021f47d8[1] & 2) != 0) {
        func_ov108_02295254();
        func_ov108_02295850();
        func_ov002_022006e4(unk_2340, 0);
    } else {
        func_ov002_022006c0(unk_2340);
    }
}

void Unk_ov108_02296b58::func_ov108_02296048() {
    if (func_ov002_022017b4(unk_247c)) {
        if (func_ov002_02200a14(1)) {
            func_ov108_02294f28();
        } else if (Unk_ov108_022961d8_Both()) {
            s32 r = func_ov002_022014c0(unk_247c, data_021ef5f0, data_021ef5ec);
            if (r >= 0) {
                func_ov002_02201aa0(unk_247c, r, 1);
                unk_29c = unk_2775[r];
                func_ov002_02200a58(0x14);
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022960e0() {
    func_ov108_0229542c();
    func_ov108_02295588();
    s32 r = func_ov108_022957cc(unk_a4 + 8, unk_a8 + 8, 0);
    if (r != 0x16) {
        if (data_021f4770 == 0) {
            if (func_ov108_02295648(r) != 0 || func_ov108_02295780(r) == 0) {
                func_ov108_022958c0(unk_297, 4);
            } else {
                func_ov108_02295a0c();
            }
        } else {
            func_ov108_02295558(r);
        }
    } else {
        if (data_021f4770 == 0) {
            func_ov108_022958c0(unk_297, 4);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_02296174() {
    if (func_ov002_02200680(unk_2340)) {
        if (unk_29e != 0) {
            unk_29e--;
        } else {
            func_ov108_02294ec4(unk_295, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022961bc() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(5);
    }
}

void Unk_ov108_02296b58::func_ov108_022961d8() {
    if (data_021f4770 == 0) {
        if (func_ov108_02294d9c(4)) {
            func_ov002_02200a58(3);
            func_ov108_0229665c();
        } else {
            func_ov002_02200a58(0);
            func_ov002_022006a4(unk_2340, 0x3c);
        }
    } else {
        if (func_ov108_02294d9c(4) && func_ov002_02200680(unk_2340)) {
            if (unk_29e != 0) {
                unk_29e--;
            } else {
                func_ov108_02294ec4(unk_295, 1);
                func_ov002_02200a58(2);
            }
        } else {
            func_ov002_022006c0(unk_2340);
        }
    }
}

void Unk_ov108_02296b58::func_ov108_0229626c() {
    if (func_ov002_02200a14(1)) {
        func_ov108_02295a2c();
    } else {
        if (Unk_ov108_022961d8_Both()) {
            s32 r = func_ov108_022957cc(data_021ef5f0, data_021ef5ec + 0x10, 1);
            if (r != 0x16) {
                func_ov108_02295974(r);
            } else {
                if (func_ov002_02203110(unk_2884, 9)) {
                    func_ov108_02295850();
                }
            }
        }
    }
}

void Unk_ov108_02296b58::func_ov108_022962ec() {
    func_ov094_02292ae0(unk_d60);
    func_ov002_02203920(unk_2884);
}

void Unk_ov108_02296b58::func_ov108_02296310() {
    func_ov094_02292d1c(unk_d60, 0);
}

void Unk_ov108_02296b58::func_ov108_02296324() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov108_02296b58::func_ov108_02296344() {
    func_ov002_02201b58(unk_247c);
    func_ov094_02292aa4(unk_d60);
    if (func_ov002_0220071c(unk_2340)) {
        func_ov108_022954ec();
    }
}

void Unk_ov108_02296b58::func_ov108_0229637c() {
    func_ov108_02295840();
    func_ov094_02292acc(unk_d60);
    func_ov094_022939a0(unk_2d8);
    func_ov094_0229462c(unk_d38);
    func_ov002_02203900(unk_2884);
}

void Unk_ov108_02296b58::func_ov108_022963bc() {
    func_ov108_02296344();
}

void Unk_ov108_02296b58::func_ov108_022963c4() {
    func_ov108_0229637c();
    unk_2418.vfunc_0c();
}

void Unk_ov108_02296b58::func_ov108_022963e0() {
    func_ov108_02295840();
    func_ov094_02292a80(unk_d60);
    func_ov094_02293998(unk_2d8);
    func_ov002_02201b04(unk_247c);
    func_ov002_02203900(unk_2884);
}

void Unk_ov108_02296b58::func_ov108_02296420() {
    unk_94 = 0;
    func_ov094_022939c0(unk_2d8, 2);
    func_ov094_02294644(unk_d38, 2);
    func_ov094_02292d30(unk_d60, 6);
    unk_296 = 0x16;
    func_ov002_022027a4(unk_2400);
    unk_294 = 0;
    unk_298 = 0xb;
    func_ov002_02202310(unk_247c, 3, 1, 0);
    unk_29e = 0;
}

void Unk_ov108_02296b58::func_ov108_022964a0() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov108_02294d7c(2);
        func_ov108_02294d7c(1);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, -16);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_022964ec() {
    func_ov002_022006e4(unk_2340, 1);
    func_ov108_02295254();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(4);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_0229654c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov108_02295a0c();
    }
    func_ov002_02200840(6, 0, -16);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_02296588() {
    func_ov108_022962ec();
    func_ov002_02203510(unk_2884, 0x65);
    func_ov094_022937a0(unk_2d8);
    func_ov094_02293d2c(unk_d38);
    func_ov108_0229567c();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, -16);
    func_ov002_02200a50(2);
    func_ov108_02294d8c(1);
    func_ov108_02294d8c(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov108_02296b58::func_ov108_0229660c() {
    func_ov108_02296324();
    func_ov108_02296310();
    func_ov002_02200a50(1);
}

BOOL Unk_ov108_02296b58::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov108_02296b58::vfunc_58() { return TRUE; }

BOOL Unk_ov108_02296b58::vfunc_54() { return TRUE; }

BOOL Unk_ov108_02296b58::vfunc_50() {
    func_ov108_022963c4();
    func_ov108_0229665c();
    func_ov108_022963bc();
    return TRUE;
}

void Unk_ov108_02296b58::func_ov108_0229665c() {
    static Unk_ov108_02296b58_Fn tbl[24] = {
        &Unk_ov108_02296b58::func_ov108_0229626c, &Unk_ov108_02296b58::func_ov108_022961d8,
        &Unk_ov108_02296b58::func_ov108_022961bc, &Unk_ov108_02296b58::func_ov108_02296174,
        &Unk_ov108_02296b58::func_ov108_022960e0, &Unk_ov108_02296b58::func_ov108_02296048,
        &Unk_ov108_02296b58::func_ov108_02295f74, &Unk_ov108_02296b58::func_ov108_02295ed8,
        &Unk_ov108_02296b58::func_ov108_02295e5c, &Unk_ov108_02296b58::func_ov108_02295e0c,
        &Unk_ov108_02296b58::func_ov108_02295dc0, &Unk_ov108_02296b58::func_ov108_02295d90,
        &Unk_ov108_02296b58::func_ov108_02295d68, &Unk_ov108_02296b58::func_ov108_02295d38,
        &Unk_ov108_02296b58::func_ov108_02295d08, &Unk_ov108_02296b58::func_ov108_02295cb4,
        &Unk_ov108_02296b58::func_ov108_02295c6c, &Unk_ov108_02296b58::func_ov108_02295c28,
        &Unk_ov108_02296b58::func_ov108_02295bf0, &Unk_ov108_02296b58::func_ov108_02295bb4,
        &Unk_ov108_02296b58::func_ov108_02295b64, &Unk_ov108_02296b58::func_ov108_02295b44,
        &Unk_ov108_02296b58::func_ov108_02295b0c, &Unk_ov108_02296b58::func_ov108_02295a84};
    (this->*tbl[unk_8d])();
}
