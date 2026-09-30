#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
BOOL func_0206e61c();
BOOL func_0208d4fc(void *p);
BOOL func_0208d534(void *p);
void func_0200402c(s32 a);
extern u16 data_021f47d8[];
extern u8 data_021f4770;

void func_ov094_02292380();
void func_ov094_02292398();
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
s32 func_ov090_02291a38(s32 a);
s32 func_ov090_02291a58(s32 a);
void func_ov002_02201a3c(void *p, s32 a);
s32 func_ov002_0220144c(void *p, u32 a, u32 b);
s32 func_ov002_022019d0(void *p, s32 a, void *b, u32 c);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02202b68(void *p);
s32 func_ov002_02203f78(void *p, s32 a);
s32 func_ov002_02203f28(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202d00(void *p, s32 a);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_022028fc(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_022006e4(void *p, s32 a);
void func_ov002_022006c0(void *p);
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
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    s32 func_ov002_022009c8();
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
    // in range
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

    // out of range
    void func_ov096_02295c2c();
    void func_ov096_02295c60();
    void func_ov096_02298644();
    void func_ov096_02296804();
    void func_ov096_02296898();
    void func_ov096_02294fac();
    void func_ov096_02294fd4();
    void func_ov096_02294dac(u32 a);
    s32 func_ov096_02294dbc(u32 a);
    void func_ov096_02294d9c(u32 a);
    void func_ov096_0229751c();
    void func_ov096_02297284(u32 a);
    void func_ov096_022975d4();
    void func_ov096_0229725c(u32 a);
    void func_ov096_022974b8(u32 a, u32 b);
    void func_ov096_022983cc(u32 a, u32 b);
    void func_ov096_02298430(u32 a);
    void func_ov096_022966e8();
    void func_ov096_022966a8();
    void func_ov096_02297834(u32 a);
    s32 func_ov096_02295ba4();
    void func_ov096_022967a0();
    void func_ov096_02296854();
    s32 func_ov096_02295020(s32 a, s32 b);
    void func_ov096_02297358(u32 a, u32 b);
    s32 func_ov096_02297c10(u32 a);
    void func_ov096_02296638(u32 a);
    void func_ov096_022965f0(u32 a);
    void func_ov096_022986b0();
    s32 func_ov096_02294dd0();
    void func_ov096_02294ed4();
    s32 func_ov096_022982c0(u32 a);
    s32 func_ov096_02296fb8();
    s32 func_ov096_02296c30(s32 a);
    s32 func_ov096_022979f0(u32 a, u32 b, u32 c);
    s32 func_ov096_022982e0(u32 a);
    s32 func_ov096_022982f0(u32 a);
    s32 func_ov096_022982d0(u32 a);
    u32 func_ov096_02297b9c(u32 a);
    u32 func_ov096_02297b48(u32 a);
    s32 func_ov096_022969bc(u16 *a, u32 b, u16 *c, u32 d);
    s32 func_ov096_0229826c(u32 a);
    s32 func_ov096_02297940(u32 a);
    void func_ov096_02295734(u32 a, s32 b);
    void func_ov096_022966c8();
    s32 func_ov096_0229a39c(s32 a);
    void func_ov096_0229a4cc();

    /* 0x094 */ u8 unk_94[0xa4 - 0x94];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ u16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd;
    /* 0x0be */ u8 unk_be;
    /* 0x0bf */ u8 unk_bf;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1[0x358 - 0xc1];
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

// ---------------------------------------------------------------------------------------------

void Unk_ov096_0229aea8::func_ov096_02298dac() {
    if (func_0208d4fc(unk_2498)) {
        func_ov002_02201a3c(unk_24fc, unk_bc);
        unk_be = func_ov002_0220144c(unk_24fc, unk_bd, unk_bc);
        func_ov002_02200a58(0x23);
    }
}

void Unk_ov096_0229aea8::func_ov096_02298dfc() {
    if (func_0206e61c()) {
        func_ov096_02295c2c();
    } else if (func_ov002_022009d4()) {
        func_ov096_02298644();
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov002_022019d0(unk_24fc, t, &unk_bc, 0)) {
            func_ov096_02296804();
        }
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov002_02202b68(unk_2498);
            func_ov002_02200a58(0x1a);
        } else if (k & 2) {
            func_ov096_02295c2c();
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02298e84() {
    if (func_0208d4fc(unk_2498)) {
        func_ov096_02294fd4();
    }
}

void Unk_ov096_0229aea8::func_ov096_02298ea4() {
    if (func_0206e61c()) {
        func_ov096_02294fac();
    } else if (func_0206e61c()) {
        func_ov096_02294fd4();
        func_ov096_02294dac(0x20000);
    } else {
        if (func_0208d534(unk_2498) == 0) {
            s32 a = func_ov002_02203f78(unk_2b14, 1);
            s32 b = func_ov002_02203f28(unk_2b14, 1);
            func_ov002_02202a40(unk_2498, a, b);
            func_ov002_02202d00(unk_2498, 1);
        }
        if (func_ov002_022009d4()) {
            func_ov096_02296898();
            func_ov002_02200a58(7);
        } else {
            u32 k = data_021f47d8[1];
            if ((k & 1) || (k & 2)) {
                func_ov002_02202b68(unk_2498);
                func_ov002_02200a58(0x18);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02298f64() {
    if (func_0208d4fc(unk_2498)) {
        func_ov002_02200a58(unk_ba);
    }
    if (func_ov002_02202928(unk_2498)) {
        if (func_ov096_02294dbc(0x40)) {
            func_ov096_02294d9c(0x40);
            func_ov094_02292380();
        }
        func_ov096_0229751c();
    }
}

void Unk_ov096_0229aea8::func_ov096_02298fb4() {
    if (func_ov002_022028fc(unk_2498) == 0) {
        func_ov096_02297284(unk_b7);
        func_ov096_02294dac(0x40);
        func_ov002_02200a58(0x16);
        func_ov096_022975d4();
    } else {
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov096_0229aea8::func_ov096_02298ffc() {
    if (func_ov002_02202928(unk_2498) == 0) {
        u32 a = unk_b7;
        u32 b = unk_b5;
        if (b == a) {
            func_ov096_0229725c(a);
            if (func_ov096_02294dbc(0x2000)) {
                func_ov096_022974b8(unk_ae, 0);
                func_ov096_022983cc(unk_b9, 4);
                func_ov096_02294d9c(0x2000);
            }
        } else {
            func_ov096_022983cc(a, 4);
        }
        if (unk_8d == 0x14) {
            func_ov096_022975d4();
            func_ov002_02200a58(0xa);
            func_ov094_02292398();
        }
    } else {
        func_ov096_0229751c();
    }
}

void Unk_ov096_0229aea8::func_ov096_02299090() {
    if (func_0208d4fc(unk_2498)) {
        func_ov002_02200a58(unk_ba);
    }
    func_ov096_0229751c();
}

void Unk_ov096_0229aea8::func_ov096_022990bc() {
    if (func_ov002_02202928(unk_2498)) {
        func_ov096_02298430(unk_b5);
        func_ov002_02200a58(0x13);
    }
}

void Unk_ov096_0229aea8::func_ov096_022990ec() {
    if (func_0208d4fc(unk_2498)) {
        func_ov096_022966e8();
        func_ov002_02200a58(0xa);
    }
}

void Unk_ov096_0229aea8::func_ov096_02299114() {
    if (func_0208d4fc(unk_2498)) {
        if (func_ov096_0229a39c(unk_b5 - 0x19) == 0) {
            func_ov096_022966a8();
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299148() {
    if (func_ov002_022028f0(unk_2498) == 0) {
        func_ov002_02200a58(unk_ba);
        if ((u8)(unk_ba + 0xf6) <= 2) {
            func_ov096_02297834(unk_b5);
        }
        func_ov096_0229a4cc();
    }
    func_ov096_0229751c();
}

void Unk_ov096_0229aea8::func_ov096_02299198() {
    if (func_0208d4fc(unk_2498)) {
        unk_bb = *((u8 *)this + unk_bc + 0x27f5);
        s32 u = func_ov096_02295ba4();
        func_ov002_02201aa0(unk_24fc, unk_bc, u);
        func_ov002_02200a58(0x1e);
    }
}

void Unk_ov096_0229aea8::func_ov096_022991ec() {
    if (func_0206e61c()) {
        func_ov096_02295c60();
    } else if (func_ov002_022009d4()) {
        func_ov096_02295c60();
    } else {
        s32 t = func_ov002_022009c8();
        u8 f = func_ov096_02294dbc(0x40000);
        if (func_ov002_022019d0(unk_24fc, t, &unk_bc, f)) {
            func_ov096_02296804();
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                func_ov002_02202b68(unk_2498);
                func_ov002_02200a58(0xe);
            } else if (k & 2) {
                func_ov096_022967a0();
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299288() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020(t, 2)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            func_ov002_022006e4(unk_23c0, 0);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                if (func_ov096_02297c10(unk_b5)) {
                    func_ov096_02296638(unk_b5);
                } else {
                    func_ov096_022965f0(unk_b5);
                }
            } else if (k & 2) {
                func_ov096_02296638(unk_b4);
            } else {
                func_ov096_0229751c();
                func_ov002_022006c0(unk_23c0);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299340() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020(t, 1)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            func_ov002_022006e4(unk_23c0, 0);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                if (unk_b5 == 0x21) {
                    if (func_ov096_02294dd0() == 0) {
                        return;
                    }
                    func_ov096_02294ed4();
                    func_ov096_02296638(unk_b5);
                } else if (func_ov096_022982c0(unk_b5)) {
                    u32 b = unk_b5;
                    if (b == 0x24) {
                        unk_c0 = func_ov096_02296fb8();
                        func_ov096_02296638(unk_b5);
                    } else if (b == 0x22) {
                        func_ov096_02294ed4();
                        func_ov096_02296638(unk_b5);
                    } else if (b == 0x25) {
                        if (func_ov096_02296c30(1) == 0 && unk_b4 == 0x25) {
                            func_0200402c(0x2a);
                        } else {
                            func_ov096_02294ed4();
                            func_ov096_02296638(unk_b5);
                        }
                    }
                } else if (func_ov096_022979f0(unk_b5, unk_ac, unk_b0) == 0) {
                    if (func_ov096_022982e0(unk_b5)) {
                        func_ov096_02294ed4();
                    }
                    if (func_ov096_022982f0(unk_b5)) {
                        u16 v;
                        u32 w;
                        v = func_ov096_02297b9c(unk_b5);
                        w = func_ov096_02297b48(unk_b5);
                        if (func_ov096_022969bc(&unk_ac, unk_b0, &v, w) == 0) {
                            func_ov094_02293494(unk_358, func_ov096_0229826c(unk_b5), v, w);
                        }
                    }
                    if (func_ov096_02297b9c(unk_b5) == 0xfff1) {
                        func_ov096_02296638(unk_b5);
                    } else {
                        if (unk_b9 != 0x26 && func_ov096_02296c30(1)) {
                            unk_b9 = unk_b5;
                            unk_ae = unk_ac;
                        }
                        func_ov096_022965f0(unk_b5);
                    }
                }
            } else {
                if (k & 2) {
                    if (func_ov096_02297940(unk_b4) == 0) {
                        func_ov096_02296638(unk_b4);
                    } else {
                        u32 v = unk_b9;
                        if (v != 0x26) {
                            u32 o = unk_b4;
                            unk_b4 = v;
                            func_ov096_02296638(unk_b4);
                            unk_b9 = o;
                            func_ov096_02294dac(0x2000);
                        }
                    }
                }
                func_ov096_0229751c();
                func_ov002_022006c0(unk_23c0);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022995b0() {
    if (func_ov002_022009d4()) {
        func_ov096_022986b0();
        func_ov002_022006e4(unk_23c0, 1);
    } else {
        s32 t = func_ov002_022009c8();
        if (func_ov096_02295020(t, 0)) {
            func_ov096_022975d4();
            func_ov096_02296854();
            func_ov002_022006e4(unk_23c0, 0);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                if (func_ov096_022982f0(unk_b5) || func_ov096_022982e0(unk_b5)) {
                    if (func_ov096_02297c10(unk_b5) == 0) {
                        func_ov096_02295734(unk_b5, 0);
                    }
                } else if (func_ov096_022982d0(unk_b5)) {
                    func_ov096_022966c8();
                } else if (unk_b5 == 0x25) {
                    func_ov096_02295734(0x25, 0);
                } else if (unk_b5 == 0x24) {
                    func_ov096_02295734(0x24, 0);
                }
            } else if (k & 0x100) {
                func_ov096_0229a39c(func_ov090_02291a38(0));
            } else if (k & 0x200) {
                func_ov096_0229a39c(func_ov090_02291a58(0));
            } else if (k & 2) {
                func_ov096_0229a39c(7);
            } else {
                func_ov002_022006c0(unk_23c0);
            }
        }
    }
}
