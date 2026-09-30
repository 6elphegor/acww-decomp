#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206e61c();
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_0206d394(void *p);
void func_0206d39c(void *p, s32 a);
s32 func_0206ec48();
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

void func_ov094_02292640(void *p, u32 a);
void *func_020ed174(void *p);
BOOL func_0206ef0c();
void func_020ed188(void *p);
void func_ov090_02291a88(void *p);
void func_ov090_02291a90(void *p);
s32 func_ov090_02291aa0();
void func_ov090_02291d8c(void *p, u8 idx);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02065af0();
void func_0206d2e0(void *p, void *q, s32 a, s32 b, s32 c);
void func_0206e63c();
void func_ov002_02203ec8(void *p, s32 a);
void func_ov094_022937a0(void *p);
void func_ov094_02293d2c(void *p);
void func_ov094_02292c08(void *p);
void func_ov094_02292c84(void *p, s32 a);
extern u16 data_021f47d8[];
void func_ov094_02292ae0(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_0229462c(void *p);
void func_ov094_02292a80(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939c0(void *p, s32 a);
void func_ov094_02294644(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
s32 func_ov090_02291934();
s32 func_ov002_022014ac(void *p, u32 a, u32 b);
s32 func_ov002_022014c0(void *p, u32 a, u32 b);
void func_ov002_02201a3c(void *p, s32 a);
s32 func_ov002_0220144c(void *p, u32 a, u32 b);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
s32 func_ov002_022017b4(void *p);
s32 func_ov002_02200680(void *p);
void func_ov002_02202064(void *p, s32 x);
void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006a4(void *p, s32 a);
void func_ov002_022006c0(void *p);
void func_ov002_02201b58(void *p);
s32 func_ov002_0220071c(void *p);
void func_ov002_02201b04(void *p);
void func_ov002_022006ac(void *p, s32 a);
void func_ov002_022027a4(void *p);
void func_ov002_02202310(void *p, s32 a, s32 b, s32 c);
void func_ov002_022017c4(void *p);
s32 func_ov002_02203e24(void *p);
}

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
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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
};


class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov096_0229aea8();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // in range
    void func_ov096_0229a000();
    void func_ov096_0229a014();
    void func_ov096_0229a094();
    void func_ov096_0229a0d0();
    void func_ov096_0229a120();
    void func_ov096_0229a1a4();
    void func_ov096_0229a204();
    void func_ov096_0229a254();
    void func_ov096_0229a28c();
    void func_ov096_0229a2f8();
    void func_ov096_0229a32c();
    void func_ov096_0229a360();
    BOOL func_ov096_0229a39c(s32 a);
    BOOL func_ov096_0229a3ec();
    void func_ov096_0229a4cc();

    // out of range
    void func_ov096_02294d9c(u32 a);
    void func_ov096_02294dac(u32 a);
    s32 func_ov096_02294dbc(u32 a);
    void func_ov096_02294ed4();
    void *func_ov096_02294f9c();
    s32 func_ov096_02296898();
    void func_ov096_0229865c();
    void func_ov096_02299e44();
    void func_ov096_02299e54();
    void func_ov096_02299e74();
    void func_ov096_02299eb0();
    void func_ov096_02299ee4();
    void func_ov096_02299eec();
    void func_ov096_022986cc();
    void func_ov096_02298768();
    void func_ov096_02298804();
    void func_ov096_02298870();
    void func_ov096_022988b8();
    void func_ov096_022988d0();
    void func_ov096_02298934();
    void func_ov096_0229895c();
    void func_ov096_0229898c();
    void func_ov096_02298a14();
    void func_ov096_02298aa0();
    void func_ov096_02298b34();
    void func_ov096_02298b54();
    void func_ov096_02298b74();
    void func_ov096_02298bdc();
    void func_ov096_02298c10();
    void func_ov096_02298c30();
    void func_ov096_02298c9c();
    void func_ov096_02298cd8();
    void func_ov096_02298d34();
    void func_ov096_02298dac();
    void func_ov096_02298dfc();
    void func_ov096_02298e84();
    void func_ov096_02298ea4();
    void func_ov096_02298f64();
    void func_ov096_02298fb4();
    void func_ov096_02298ffc();
    void func_ov096_02299090();
    void func_ov096_022990bc();
    void func_ov096_022990ec();
    void func_ov096_02299114();
    void func_ov096_02299148();
    void func_ov096_02299198();
    void func_ov096_022991ec();
    void func_ov096_02299288();
    void func_ov096_02299340();
    void func_ov096_022995b0();
    void func_ov096_022996e8();
    void func_ov096_02299778();
    void func_ov096_02299820();
    void func_ov096_02299868();
    void func_ov096_02299908();
    void func_ov096_02299b18();
    void func_ov096_02299bd8();
    void func_ov096_02299c20();
    void func_ov096_02299c90();
    void func_ov096_02299d4c();
    void func_ov098_0229b280();
    void func_ov098_0229b2b0();
    void func_ov098_0229b2d8();
    void func_ov098_0229b344();
    void func_ov098_0229b36c();
    void func_ov098_0229b44c();
    void func_ov098_0229b468();
    void func_ov098_0229b580();
    void func_ov098_0229b5d4();
    void func_ov098_0229b8ac();
    void func_ov098_0229b9e4();

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u8 unk_ac[0xb2 - 0xac];
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6[0xbb - 0xb6];
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ volatile u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3[0x358 - 0xc3];
    /* 0x358 */ u8 unk_358[0xdb8 - 0x358];
    /* 0xdb8 */ u8 unk_db8[0xde0 - 0xdb8];
    /* 0xde0 */ u8 unk_de0[0x23c0 - 0xde0];
    /* 0x23c0 */ u8 unk_23c0[0x2480 - 0x23c0];
    /* 0x2480 */ u8 unk_2480[0x2498 - 0x2480];
    /* 0x2498 */ u8 unk_2498[0x24fc - 0x2498];
    /* 0x24fc */ u8 unk_24fc[0x27f0 - 0x24fc];
    /* 0x27f0 */ u8 unk_27f0[0x2904 - 0x27f0];
    /* 0x2904 */ u8 unk_2904[0x2b14 - 0x2904];
    /* 0x2b14 */ u8 unk_2b14[0x100];
};

typedef void (Unk_ov096_0229aea8::*Unk_ov096_0229aea8_Fn)();

// ---------------------------------------------------------------------------------------------

void Unk_ov096_0229aea8::func_ov096_0229a000() {
    func_ov090_02291a88(func_020ed174(this));
}

void Unk_ov096_0229aea8::func_ov096_0229a014() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov096_02294d9c(0x100);
        void *r4 = func_020ed174(this);
        if (func_ov096_02294dbc(0x20000)) {
            func_ov002_02200a60(5);
            func_ov096_02294d9c(1);
        } else {
            func_ov090_02291a90(r4);
            func_ov096_0229a360();
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a094() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(0xa);
}

void Unk_ov096_0229aea8::func_ov096_0229a0d0() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(7);
        } else {
            func_ov002_02200a58(0x17);
        }
    } else {
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200840(4, 0, 0);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a120() {
    void *r4 = func_ov096_02294f9c();
    func_02065af0();
    func_0206d2e0(unk_2904, r4, 3, 4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_ov002_02200840(3, 0, 0);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200a50(8);
    func_ov002_02203ec8(unk_2b14, 0x88);
    func_ov096_02294dac(0x100);
}

void Unk_ov096_0229aea8::func_ov096_0229a1a4() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov096_02294d9c(2);
        if (func_ov096_02294dbc(0x80)) {
            func_ov002_02200a50(7);
        } else {
            func_ov002_02200a60(5);
            func_ov096_02294d9c(1);
        }
    } else {
        func_ov002_02200840(6, 0, 0);
    }
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a204() {
    func_ov002_022006e4(unk_23c0, 1);
    func_ov096_02296898();
    func_ov002_022008c4(8, 0, 0, 0x30);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(6);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a254() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov096_0229865c();
    }
    func_ov002_02200840(6, 0, 0);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a28c() {
    func_ov094_022937a0(unk_358);
    func_ov094_02293d2c(unk_db8);
    func_ov002_022008e0(8, 3, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200a50(4);
    func_ov096_02294dac(1);
    func_ov096_02294dac(2);
    unk_98 = func_ov002_02200920();
}

void Unk_ov096_0229aea8::func_ov096_0229a2f8() {
    func_ov096_02299e44();
    func_ov002_02200a50(3);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a28c();
        func_ov096_02294d9c(0x80000);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a32c() {
    func_ov094_02292c08(unk_de0);
    func_ov002_02200a50(2);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a2f8();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229a360() {
    func_ov096_02299e54();
    func_ov094_02292c84(unk_de0, 1);
    func_ov002_02200a50(1);
    if (func_ov096_02294dbc(0x80000) == 0) {
        func_ov096_0229a32c();
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_0229a39c(s32 a) {
    void *o = func_020ed174(this);
    if (a != -1) {
        if (a != 0) {
            func_ov090_02291d8c(o, (u8)a);
            unk_8c = 5;
            func_ov002_02200a60(1);
            if (a != 7) {
                func_ov096_02294ed4();
            }
            func_ov096_02294d9c(0x80);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov096_0229aea8::func_ov096_0229a3ec() {
    func_0206e63c();
    if (func_0206e61c()) {
        if (unk_8d == 0 || unk_8d == 1 || unk_8d == 0xa) {
            return func_ov096_0229a39c(7);
        }
    }
    if (unk_8d != 0 && unk_8d != 0xa) {
        return FALSE;
    }
    s32 t = -1;
    if (func_0206ef0c()) {
        t = func_ov090_02291aa0();
    } else {
        u16 v = data_021f47d8[1];
        if (v & 0x800) {
            t = 7;
        } else if (v & 0x400) {
            t = 5;
        } else if (v & 4) {
            t = 4;
        }
    }
    return func_ov096_0229a39c(t);
}

BOOL Unk_ov096_0229aea8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov096_0229aea8::vfunc_58() { return TRUE; }

BOOL Unk_ov096_0229aea8::vfunc_54() { return TRUE; }

BOOL Unk_ov096_0229aea8::vfunc_50() {
    if (func_ov096_0229a3ec()) {
        return TRUE;
    }
    func_ov096_02299eec();
    func_ov096_0229a4cc();
    func_ov096_02299ee4();
    return TRUE;
}

void Unk_ov096_0229aea8::func_ov096_0229a4cc() {
    static Unk_ov096_0229aea8_Fn tbl[58] = {
        &Unk_ov096_0229aea8::func_ov096_02299d4c,
        &Unk_ov096_0229aea8::func_ov096_02299c90,
        &Unk_ov096_0229aea8::func_ov096_02299c20,
        &Unk_ov096_0229aea8::func_ov096_02299bd8,
        &Unk_ov096_0229aea8::func_ov096_02299b18,
        &Unk_ov096_0229aea8::func_ov096_02299908,
        &Unk_ov096_0229aea8::func_ov096_02299868,
        &Unk_ov096_0229aea8::func_ov096_02299820,
        &Unk_ov096_0229aea8::func_ov096_02299778,
        &Unk_ov096_0229aea8::func_ov096_022996e8,
        &Unk_ov096_0229aea8::func_ov096_022995b0,
        &Unk_ov096_0229aea8::func_ov096_02299340,
        &Unk_ov096_0229aea8::func_ov096_02299288,
        &Unk_ov096_0229aea8::func_ov096_022991ec,
        &Unk_ov096_0229aea8::func_ov096_02299198,
        &Unk_ov096_0229aea8::func_ov096_02299148,
        &Unk_ov096_0229aea8::func_ov096_02299114,
        &Unk_ov096_0229aea8::func_ov096_022990ec,
        &Unk_ov096_0229aea8::func_ov096_022990bc,
        &Unk_ov096_0229aea8::func_ov096_02299090,
        &Unk_ov096_0229aea8::func_ov096_02298ffc,
        &Unk_ov096_0229aea8::func_ov096_02298fb4,
        &Unk_ov096_0229aea8::func_ov096_02298f64,
        &Unk_ov096_0229aea8::func_ov096_02298ea4,
        &Unk_ov096_0229aea8::func_ov096_02298e84,
        &Unk_ov096_0229aea8::func_ov096_02298dfc,
        &Unk_ov096_0229aea8::func_ov096_02298dac,
        &Unk_ov096_0229aea8::func_ov096_02298d34,
        &Unk_ov096_0229aea8::func_ov096_02298cd8,
        &Unk_ov096_0229aea8::func_ov096_02298c9c,
        &Unk_ov096_0229aea8::func_ov096_02298c30,
        &Unk_ov096_0229aea8::func_ov096_02298c10,
        &Unk_ov096_0229aea8::func_ov096_02298bdc,
        &Unk_ov096_0229aea8::func_ov096_02298b74,
        &Unk_ov096_0229aea8::func_ov096_02298b54,
        &Unk_ov096_0229aea8::func_ov096_02298b34,
        &Unk_ov096_0229aea8::func_ov096_02298aa0,
        &Unk_ov096_0229aea8::func_ov096_02298a14,
        &Unk_ov096_0229aea8::func_ov096_0229898c,
        &Unk_ov096_0229aea8::func_ov096_0229895c,
        &Unk_ov096_0229aea8::func_ov096_02298768,
        &Unk_ov096_0229aea8::func_ov096_022986cc,
        &Unk_ov096_0229aea8::func_ov096_02298934,
        &Unk_ov096_0229aea8::func_ov096_022988d0,
        &Unk_ov096_0229aea8::func_ov098_0229b8ac,
        &Unk_ov096_0229aea8::func_ov098_0229b5d4,
        &Unk_ov096_0229aea8::func_ov098_0229b580,
        &Unk_ov096_0229aea8::func_ov096_022988b8,
        &Unk_ov096_0229aea8::func_ov098_0229b9e4,
        &Unk_ov096_0229aea8::func_ov096_02298870,
        &Unk_ov096_0229aea8::func_ov096_02298804,
        &Unk_ov096_0229aea8::func_ov098_0229b468,
        &Unk_ov096_0229aea8::func_ov098_0229b44c,
        &Unk_ov096_0229aea8::func_ov098_0229b36c,
        &Unk_ov096_0229aea8::func_ov098_0229b344,
        &Unk_ov096_0229aea8::func_ov098_0229b2d8,
        &Unk_ov096_0229aea8::func_ov098_0229b2b0,
        &Unk_ov096_0229aea8::func_ov098_0229b280};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov096_0229aea8::vfunc_4c() {
    static Unk_ov096_0229aea8_Fn tbl[11] = {
        &Unk_ov096_0229aea8::func_ov096_0229a360,
        &Unk_ov096_0229aea8::func_ov096_0229a32c,
        &Unk_ov096_0229aea8::func_ov096_0229a2f8,
        &Unk_ov096_0229aea8::func_ov096_0229a28c,
        &Unk_ov096_0229aea8::func_ov096_0229a254,
        &Unk_ov096_0229aea8::func_ov096_0229a204,
        &Unk_ov096_0229aea8::func_ov096_0229a1a4,
        &Unk_ov096_0229aea8::func_ov096_0229a120,
        &Unk_ov096_0229aea8::func_ov096_0229a0d0,
        &Unk_ov096_0229aea8::func_ov096_0229a094,
        &Unk_ov096_0229aea8::func_ov096_0229a014};
    func_ov096_02299eb0();
    (this->*tbl[unk_8c])();
    func_ov096_02299e74();
    return TRUE;
}
