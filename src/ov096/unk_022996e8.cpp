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
void func_020ed174(void *p);
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;

void func_ov094_02292640(void *p, u32 a);
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
    // in range
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
    void func_ov096_02299e44();
    void func_ov096_02299e54();
    void func_ov096_02299e74();
    void func_ov096_02299eb0();
    void func_ov096_02299ee4();
    void func_ov096_02299eec();
    void func_ov096_02299f08();
    void func_ov096_02299f48();

    // out of range
    void func_ov096_0229a39c(s32 a);
    s32 func_ov096_022976f8(u32 a);
    void func_ov096_02298504(s32 a);
    void func_ov096_0229849c(u32 a);
    void func_ov096_02294dac(u32 a);
    s32 func_ov096_02294dbc(u32 a);
    void func_ov096_02295c2c();
    void func_ov096_02295c60();
    void func_ov096_0229862c();
    void func_ov096_02294fac();
    void func_ov096_02294fd4();
    void func_ov096_02297358(u32 a, u32 b);
    void func_ov096_02297548();
    void func_ov096_02297804();
    u32 func_ov096_02297fb8(s32 a, s32 b, s32 c);
    u32 func_ov096_0229821c(s32 a, s32 b, s32 c);
    s32 func_ov096_02297f6c();
    void func_ov096_022983cc(u32 a, u32 b);
    void func_ov096_0229865c();
    void func_ov096_02297750(s32 a);
    s32 func_ov096_0229795c(s32 a, u32 b);
    s32 func_ov096_022982e0(u32 a);
    s32 func_ov096_022982f0(u32 a);
    void func_ov096_02294ed4();
    void func_ov096_02298110(s32 a);
    s32 func_ov096_02297e94(s32 a, s32 b);
    s32 func_ov096_02297170();
    s32 func_ov096_022971dc();
    u32 func_ov096_02296fb8();
    void func_ov096_02296d5c();
    void func_ov096_0229713c();
    s32 func_ov096_02296c30(s32 a);
    void func_ov096_02296cac();
    s32 func_ov096_02297f20(s32 a, s32 b);
    s32 func_ov096_02294dd0();
    void func_ov096_02294e08();
    s32 func_ov096_02295ba4();
    void func_ov096_02295734(u32 a, s32 b);
    s32 func_ov096_0229770c();
    void func_ov096_0229a4cc();
    void func_ov096_0229867c();
    s32 func_ov096_02297e5c(s32 a, s32 b);
    s32 func_ov096_02297de0(s32 a, s32 b);
    s32 func_ov096_02297e7c(s32 a, s32 b);
    void func_ov096_02294e84();
    void func_ov096_02297658();
    void func_ov096_022982fc();
    void func_ov096_02297160();

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

extern "C" {
void func_ov094_02292398();
}

static inline BOOL Unk_ov096_02299778_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

class Unk_ov096_02299eec_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

// ---------------------------------------------------------------------------------------------

void Unk_ov096_0229aea8::func_ov096_022996e8() {
    if (func_0206e61c()) {
        func_ov096_0229a39c(7);
        func_ov094_02292640(unk_de0, 0);
    } else if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
        func_ov094_02292640(unk_de0, 0);
    } else if (func_ov096_022976f8(4)) {
        func_ov096_02298504(0x25);
        unk_9c = -8;
        unk_a0 = -8;
        func_ov096_0229849c(0x25);
        func_ov096_02294dac(0x4000);
        func_ov094_02292640(unk_de0, unk_bf);
    }
}

void Unk_ov096_0229aea8::func_ov096_02299778() {
    if (func_0206e61c()) {
        func_ov096_02295c2c();
    } else if (func_ov002_02200a14(1)) {
        func_ov096_0229862c();
    } else if (Unk_ov096_02299778_Both()) {
        s32 t = func_ov002_022014ac(unk_24fc, data_021ef5f0, data_021ef5ec);
        if (t >= 0) {
            func_ov002_02201a3c(unk_24fc, t);
            unk_be = func_ov002_0220144c(unk_24fc, unk_bd, (u8)t);
            func_ov002_02200a58(0x23);
        } else {
            func_ov096_02295c2c();
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299820() {
    if (func_0206e61c()) {
        func_ov096_02294fac();
    } else if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(0x17);
    } else if (func_ov002_02203e24(unk_2b14)) {
        func_ov096_02294fd4();
    }
}

void Unk_ov096_0229aea8::func_ov096_02299868() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
    } else {
        func_ov096_02297548();
        func_ov096_02297804();
        s32 t = func_ov096_02297fb8(unk_a4 + 8, unk_a8 + 8, 0);
        if (t != 0x26) {
            if (data_021f4770 == 0) {
                if (func_ov096_02297f6c() == 0) {
                    func_ov096_022983cc(unk_b4, 4);
                }
                func_ov094_02292398();
                func_ov096_0229865c();
            } else {
                func_ov096_02297750(t);
            }
        } else if (data_021f4770 == 0) {
            func_ov096_022983cc(unk_b4, 4);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299908() {
    if (func_0206e61c()) {
        func_ov096_02297358(unk_b4, 1);
        func_ov096_0229a39c(7);
        return;
    }
    func_ov096_02297548();
    func_ov096_02297804();
    s32 x = unk_a4 + 8;
    s32 y = unk_a8 + 8;
    s32 t = func_ov096_0229821c(x, y, 0);
    if (t == 0x26) {
        t = func_ov096_02297fb8(x, y, 0);
    }
    if (t != 0x26) {
        if (data_021f4770 == 0) {
            if (func_ov096_0229795c(t, unk_b4) == 0) {
                if (func_ov096_022982e0(t)) {
                    func_ov096_02294ed4();
                }
                func_ov096_02298110(t);
                if (unk_8d == 5) {
                    func_ov096_0229865c();
                }
                if (func_ov096_022982f0(t) == 0 && func_ov096_022982e0(t) == 0) {
                    return;
                }
                func_ov094_02292398();
            } else {
                func_ov096_022983cc(unk_b4, 4);
            }
        } else {
            func_ov096_02297750(t);
        }
    } else {
        t = func_ov096_02297e94(x, y);
        if (t != 0x26) {
            if (data_021f4770 == 0) {
                if ((u8)(t + 0xde) <= 1) {
                    if (func_ov096_02297170() == 0) {
                        func_ov096_022983cc(unk_b4, 4);
                    } else if (func_ov096_022971dc()) {
                        func_ov096_0229865c();
                    }
                } else if (t == 0x24) {
                    unk_c0 = func_ov096_02296fb8();
                    u32 v = unk_c0;
                    if (v < 1) {
                        func_ov096_02296d5c();
                    } else if (v == 1) {
                        func_ov096_022983cc(unk_b4, 4);
                    } else {
                        func_ov096_0229713c();
                    }
                } else if (t == 0x25) {
                    if (func_ov096_02296c30(0)) {
                        func_ov096_02296cac();
                    } else {
                        func_ov096_022983cc(unk_b4, 4);
                    }
                } else {
                    func_ov096_022983cc(unk_b4, 4);
                }
            } else {
                func_ov096_02297750(t);
            }
        } else if (func_ov096_02297f20(x, y)) {
            if (data_021f4770 == 0) {
                if (func_ov096_02294dd0()) {
                    func_ov096_02294e08();
                    func_ov096_0229865c();
                } else {
                    func_ov096_022983cc(unk_b4, 4);
                }
            } else {
                func_ov096_02297750(0x21);
            }
        } else if (data_021f4770 == 0) {
            func_ov096_022983cc(unk_b4, 4);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299b18() {
    if (func_ov002_022017b4(unk_24fc)) {
        if (func_0206e61c()) {
            func_ov096_02295c60();
        } else if (func_ov002_02200a14(1)) {
            func_ov096_02295c60();
        } else if (Unk_ov096_02299778_Both()) {
            s32 t = func_ov002_022014c0(unk_24fc, data_021ef5f0, data_021ef5ec);
            if (t >= 0) {
                if (func_ov096_02294dbc(0x40000) == 0 || t != 0) {
                    unk_bb = *((u8 *)this + t + 0x27f5);
                    s32 u = func_ov096_02295ba4();
                    func_ov002_02201aa0(unk_24fc, t, u);
                    func_ov002_02200a58(0x1e);
                }
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299bd8() {
    if (func_ov002_02200680(unk_23c0)) {
        if (unk_c2 != 0) {
            unk_c2 = unk_c2 - 1;
        } else {
            func_ov096_02295734(unk_b2, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299c20() {
    if (func_0206e61c()) {
        func_ov002_02200a58(4);
    } else if (data_021f4770 == 0) {
        func_ov002_02200a58(4);
    } else if (func_ov096_02294dbc(4)) {
        if (func_ov096_0229770c()) {
            func_ov096_0229849c(unk_b2);
            func_ov002_02202064(unk_24fc, 0);
            func_ov002_022006e4(unk_23c0, 1);
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299c90() {
    if (data_021f4770 == 0) {
        if (func_ov096_02294dbc(0x10000)) {
            func_ov002_02200a58(0);
            func_ov002_022006a4(unk_23c0, 0x3c);
        } else {
            func_ov002_02200a58(3);
            func_ov096_0229a4cc();
        }
        return;
    }
    if (func_ov096_02294dbc(4) == 0) goto stop;
    if (func_ov096_0229770c()) {
        func_ov096_0229849c(unk_b2);
        return;
    }
    if (func_ov096_02294dbc(0x10000) != 0) goto stop;
    if (func_ov002_02200680(unk_23c0) == 0) goto stop;
    if (unk_c2 != 0) {
        unk_c2 = unk_c2 - 1;
    } else {
        func_ov096_02295734(unk_b2, 1);
        func_ov002_02200a58(2);
    }
    return;
stop:
    func_ov002_022006c0(unk_23c0);
}

void Unk_ov096_0229aea8::func_ov096_02299d4c() {
    if (func_ov002_02200a14(1)) {
        unk_b5 = 0;
        func_ov096_0229867c();
    } else if (Unk_ov096_02299778_Both()) {
        u8 a = data_021ef5f0;
        u8 b = data_021ef5ec;
        s32 t = func_ov096_0229821c(a, b, 1);
        if (t != 0x26) {
            func_ov096_02298504(t);
            return;
        }
        t = func_ov096_02297fb8(a, b, 1);
        if (t != 0x26) {
            func_ov096_02298504(t);
            return;
        }
        if (func_ov096_02297e5c(a, b)) {
            func_ov096_02295734(0x25, 0);
            return;
        }
        switch (func_ov096_02297de0(a, b)) {
        case 1:
            func_ov096_02295734(0x27, 0);
            break;
        case 2:
            func_ov002_02200a58(9);
            func_ov094_02292640(unk_de0, unk_bf);
            break;
        default:
            if (func_ov096_02297e7c(a, b)) {
                func_ov096_02295734(0x24, 0);
            }
            break;
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_02299e44() {
    func_ov094_02292ae0(unk_de0);
}

void Unk_ov096_0229aea8::func_ov096_02299e54() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov096_0229aea8::func_ov096_02299e74() {
    func_ov096_02294e84();
    func_ov002_02201b58(unk_24fc);
    func_ov094_02292aa4(unk_de0);
    if (func_ov002_0220071c(unk_23c0)) {
        func_ov096_02297658();
    }
}

void Unk_ov096_0229aea8::func_ov096_02299eb0() {
    func_ov096_022982fc();
    func_ov094_02292acc(unk_de0);
    func_ov094_022939a0(unk_358);
    func_ov094_0229462c(unk_db8);
}

void Unk_ov096_0229aea8::func_ov096_02299ee4() {
    func_ov096_02299e74();
}

void Unk_ov096_0229aea8::func_ov096_02299eec() {
    func_ov096_02299eb0();
    ((Unk_ov096_02299eec_Obj *)unk_2498)->vfunc_0c();
}

void Unk_ov096_0229aea8::func_ov096_02299f08() {
    func_ov096_022982fc();
    func_ov094_02292a80(unk_de0);
    func_ov094_02293998(unk_358);
    func_ov002_02201b04(unk_24fc);
    func_0206d394(unk_2904);
}

void Unk_ov096_0229aea8::func_ov096_02299f48() {
    unk_94 = 0;
    func_ov094_022939c0(unk_358, 2);
    func_ov094_02294644(unk_db8, 2);
    func_ov094_02292d30(unk_de0, 6);
    unk_b3 = 0x26;
    func_ov002_022006ac(unk_23c0, 2);
    func_ov002_022027a4(unk_2480);
    func_ov096_02297160();
    unk_b5 = func_0206ec48();
    func_ov002_02202310(unk_24fc, 3, 1, 0);
    func_ov002_022017c4(unk_24fc);
    func_0206d39c(unk_2904, 3);
    unk_c2 = 0;
    func_020ed174(this);
    if (func_ov090_02291934()) {
        func_ov096_02294dac(0x80000);
    }
}
