#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
u32 func_02051348(void *p, u32 a);
BOOL func_020512f8(void *p, u32 a);
void func_ov002_02202fe4(void *p, s32 a);
void func_ov002_02202fc8(void *p, s32 a);
BOOL func_ov002_02202fac(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
BOOL func_ov002_02203110(void *p, s32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_022028f0(void *p);
s32 func_ov002_0220288c(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02204394(void *p, void *q, u32 a, u32 b);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_0208d534(void *p);
BOOL func_0208d4fc(void *p);
void func_0200402c(u32 a);
s32 func_0206ed50();
BOOL func_0206ef0c();
void func_ov095_022951e4(void *p);
void func_ov095_022953c0(void *p, s32 a);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, s32 a);
void func_ov095_02294324(void *p);
BOOL func_ov095_022942e8(void *p);
void func_ov095_02293da8(void *p);
s32 func_ov095_02294a40(void *p);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
s32 func_ov095_02292404(void *p);
void func_ov095_02294318(void *p);
void func_ov095_02295194(void *p);
void func_ov095_02293dc0(void *p);
void func_ov095_02292ab8(void *p, s32 a);
s32 func_ov095_02292458(void *p, s32 a);
extern u8 data_021edb68;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);

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




class Unk_ov126_02299ae8 : public Unk_ov002_022044e4 {
public:
    void func_ov126_022982a8();
    u32 func_ov126_022982e8();
    void func_ov126_02298304(u32 v);
    void func_ov126_02298314();
    void func_ov126_02298358();
    BOOL func_ov126_02298430();
    BOOL func_ov126_02298470();
    void func_ov126_022984c0(s32 a);
    void func_ov126_02298570();
    void func_ov126_02298590();
    void func_ov126_022985a8();
    void func_ov126_022985c0(u32 v, u32 w);
    void func_ov126_022985fc();
    void func_ov126_0229861c();
    void func_ov126_02298638();
    void func_ov126_02298650();
    void func_ov126_02298680();
    void func_ov126_022986ec();
    void func_ov126_0229871c();
    void func_ov126_0229874c();
    void func_ov126_022987b0();
    void func_ov126_022987d8();
    void func_ov126_02298834();
    void func_ov126_022988bc();
    void func_ov126_022988e8();
    void func_ov126_02298944();
    void func_ov126_02298964();
    void func_ov126_02298a44();
    void func_ov126_02298a5c();
    void func_ov126_02298b2c();
    void func_ov126_02298ba0();

    // callees outside this group
    void func_ov126_02297168(u32 m);
    void func_ov126_02297178(u32 m);
    BOOL func_ov126_02297188(u32 m);
    void func_ov126_0229810c();
    BOOL func_ov126_02298124();
    s32 func_ov126_0229814c(s32 a);
    void func_ov126_02297994();
    void func_ov126_02297ac8();
    void func_ov126_022979b8();
    void func_ov126_02297858();
    void func_ov126_02297878();
    BOOL func_ov126_0229778c();
    BOOL func_ov126_022976bc();
    BOOL func_ov126_02297720();
    BOOL func_ov126_02297698();
    BOOL func_ov126_022977e8();
    BOOL func_ov126_02297c4c(s32 a);
    void func_ov126_022978c4();
    s32 func_ov126_02297d94(s32 a);
    void func_ov126_02297b38();
    void func_ov126_02297920();
    void func_ov126_02298064();
    void func_ov126_02298098();
    void func_ov126_02299570();

    /* 0x091 */ u8 unk_91[7];
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u32 unk_9c;
    /* 0x0a0 */ u8 unk_a0[4];
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u8 unk_a6;
    /* 0x0a7 */ u8 unk_a7;
    /* 0x0a8 */ u8 unk_a8;
    /* 0x0a9 */ u8 unk_a9;
    /* 0x0aa */ u8 unk_aa;
    /* 0x0ab */ u8 unk_ab;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af[0x144 - 0xaf];
    /* 0x144 */ u8 unk_144[0x3d00 - 0x144];
    /* 0x3d00 */ u8 unk_3d00[0x3e64 - 0x3d00];
    /* 0x3e64 */ u8 unk_3e64[0x3f80 - 0x3e64];
    /* 0x3f80 */ u8 unk_3f80[0x4088 - 0x3f80];
    /* 0x4088 */ u8 unk_4088[0x40];
};

typedef Unk_ov126_02299ae8 C;

void C::func_ov126_022982a8() {
    unk_98 = unk_ab;
    unk_9c = 0x28;
    unk_98 = unk_98 + (u8)func_02051348(unk_4088, unk_a8);
}

u32 C::func_ov126_022982e8() {
    if (unk_a8 == 0) return 0;
    return *((u8 *)this + (unk_a8 - 1) + 0x4088);
}

void C::func_ov126_02298304(u32 v) {
    unk_a8 = v;
    unk_a7 = 0x10;
}

void C::func_ov126_02298314() {
    func_ov126_02297178(2);
    unk_98 = unk_ab;
    unk_9c = 0x28;
    func_ov126_02298304(0);
    func_ov126_0229810c();
    func_ov095_022951e4(unk_144);
    func_ov126_02298358();
}

void C::func_ov126_02298358() {
    if (unk_ad == 0 || unk_ad == 2) {
        if (func_020512f8(unk_4088, unk_a6) == 0) {
            func_ov002_02202fe4(unk_3d00, 6);
        } else {
            func_ov002_02202fc8(unk_3d00, 6);
        }
    }
    func_ov095_022953c0(unk_144, 0);
    if (func_ov126_02298124()) {
        func_ov095_02295340(unk_144, 0xb);
    } else {
        func_ov095_022953c0(unk_144, 0xb);
    }
    if (func_ov126_02297188(8)) {
        func_ov095_02295340(unk_144, 0xc);
    } else {
        func_ov095_022953c0(unk_144, 0xc);
    }
    if (func_ov126_02298124()) {
        func_ov095_022942c0(unk_144);
        func_ov095_02295340(unk_144, 6);
    } else if (unk_a8 == 0) {
        func_ov095_022942c0(unk_144);
    } else {
        func_ov095_02294250(unk_144, func_ov126_022982e8());
    }
}

BOOL C::func_ov126_02298430() {
    switch (unk_ad) {
    case 0:
        func_ov126_02297994();
        func_ov126_022984c0(1);
        return TRUE;
    case 1:
        func_ov126_02297994();
        func_ov126_022984c0(0);
        return TRUE;
    default:
        func_ov126_02297ac8();
        return FALSE;
    }
}

BOOL C::func_ov126_02298470() {
    if (func_ov002_02202fac(unk_3d00, 6)) {
        func_ov126_02297ac8();
        return FALSE;
    }
    if (unk_ad == 0 || unk_ad == 2) {
        func_ov126_02297994();
        func_ov126_022984c0(0);
        return TRUE;
    }
    func_ov126_02297ac8();
    return FALSE;
}

void C::func_ov126_022984c0(s32 a) {
    if (a == 0) {
        func_ov002_022030ac(unk_3d00, 6);
        if (unk_ad == 1) {
            func_ov126_02297178(0x40);
        } else {
            func_ov126_02297168(0x40);
        }
    } else {
        func_ov002_022030ac(unk_3d00, 7);
        func_ov126_02297178(0x40);
    }
    if (func_ov126_02297188(0x20)) {
        if (func_ov126_02297188(0x40)) {
            func_0200402c(0x2a);
        } else if (func_0206ed50() == 0x19) {
            func_0200402c(0x27);
        } else {
            func_0200402c(0x29);
        }
    } else if (func_ov126_02297188(0x40)) {
        func_0200402c(0x28);
    } else {
        func_0200402c(0x27);
    }
    unk_8c = 3;
    func_ov002_02200a58(0xf);
}

void C::func_ov126_02298570() {
    if (func_0206ef0c()) {
        func_ov126_022985a8();
    } else {
        func_ov126_02298590();
    }
}

void C::func_ov126_02298590() {
    func_ov002_02200980();
    func_ov002_02200a58(5);
}

void C::func_ov126_022985a8() {
    func_ov126_02297994();
    func_ov002_02200a58(3);
}

void C::func_ov126_022985c0(u32 v, u32 w) {
    u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = v;
    func_ov002_02204394(unk_3f80, buf, w, 0);
    func_ov002_02200a58(0x10);
    func_ov126_02297994();
}

void C::func_ov126_022985fc() {
    if (func_0206ef0c()) {
        func_ov126_02298638();
    } else {
        func_ov126_0229861c();
    }
}

void C::func_ov126_0229861c() {
    func_ov002_02200980();
    func_ov126_022979b8();
    func_ov002_02200a58(4);
}

void C::func_ov126_02298638() {
    func_ov126_02297994();
    func_ov002_02200a58(0);
}

void C::func_ov126_02298650() {
    func_ov095_02294324(unk_144);
    if (func_ov002_02204234(unk_3f80, 1)) {
        func_ov126_022985fc();
    }
}

void C::func_ov126_02298680() {
    if (func_ov002_0220308c(unk_3d00)) {
        if (func_0208d534(unk_3e64)) {
            s32 a = func_ov002_0220306c(unk_3d00);
            s32 b = func_ov002_022030f4(unk_3d00, -1);
            s32 c = func_ov002_022030b8(unk_3d00, -1);
            func_ov002_02202a40(unk_3e64, a + b, a + c);
        }
    } else {
        func_ov126_02297994();
        func_ov002_02200a60(1);
    }
}

void C::func_ov126_022986ec() {
    if ((data_021f47d8[0] & 0x100) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02298358();
    }
}

void C::func_ov126_0229871c() {
    if ((data_021f47d8[0] & 0x200) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02298358();
    }
}

void C::func_ov126_0229874c() {
    if ((data_021f47d8[0] & 2) == 0) {
        func_ov002_02200a58(unk_ae);
    } else if (func_ov095_022942e8(unk_144)) {
        func_ov095_02293da8(unk_144);
        if (func_ov126_02297c4c(0)) {
            if (func_ov126_02297188(0x80)) {
                func_ov126_022978c4();
            }
        } else {
            func_ov126_02298430();
        }
    }
}

void C::func_ov126_022987b0() {
    if (func_0208d4fc(unk_3e64)) {
        func_ov126_02297858();
        func_ov002_02200a58(4);
    }
}

void C::func_ov126_022987d8() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov126_02297878();
    } else if (func_ov095_022942e8(unk_144)) {
        s32 t = func_ov095_02294a40(unk_144);
        s32 r = func_ov095_02294864(unk_144, t, 8);
        func_ov126_02297d94(r);
        func_ov095_02294d40(unk_144, t);
    }
}

void C::func_ov126_02298834() {
    if (func_0208d4fc(unk_3e64)) {
        s32 t = func_ov095_02292404(unk_144);
        s32 r = func_ov126_02297d94(func_ov095_02294864(unk_144, t, 8));
        if (r == 1 && (data_021f47d8[0] & 1) != 0) {
            func_ov095_02294318(unk_144);
            func_ov002_02200a58(0xa);
            func_ov095_02294d40(unk_144, t);
        } else if (r == 4) {
            func_ov095_02295194(unk_144);
        } else if (r != 3) {
            func_ov126_02297878();
        }
    }
}

void C::func_ov126_022988bc() {
    if (func_ov002_022028f0(unk_3e64) == 0) {
        func_ov002_02200a58(unk_ae);
        func_ov126_02299570();
    }
}

void C::func_ov126_022988e8() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov002_02200a58(6);
    } else if (func_ov126_0229814c(func_ov002_022009c8()) == 1) {
        func_ov095_02293dc0(unk_144);
        func_ov126_02298064();
        func_ov126_022982a8();
        func_ov126_02297b38();
        func_ov126_022978c4();
        func_0200402c(0x15);
    }
}

void C::func_ov126_02298944() {
    func_ov126_02297168(0x80);
    func_ov002_02200a58(4);
    func_ov126_02297920();
}

void C::func_ov126_02298964() {
    if (func_ov002_022009d4()) {
        func_ov126_02298638();
    } else {
        s32 r = func_ov126_0229814c(func_ov002_022009c8());
        switch (r) {
        case 1:
            func_ov095_02293dc0(unk_144);
            func_ov126_0229810c();
            func_ov126_022982a8();
            func_ov126_02297b38();
            func_ov126_022978c4();
            func_0200402c(0xb);
            break;
        case 2:
            func_ov095_02292ab8(unk_144, func_ov002_0220288c(unk_3e64));
            func_ov126_02298944();
            break;
        default: {
            u32 old = unk_a8;
            if (func_ov126_0229778c()) {
                if (old != unk_a8) {
                    func_ov126_022978c4();
                }
            } else if (func_ov126_022976bc()) {
            } else if (func_ov126_02297720()) {
            } else if (func_ov126_02297698()) {
            } else if ((data_021f47d8[1] & 1) != 0) {
                func_ov002_02200a58(7);
                func_ov126_02298098();
            }
        }
        }
    }
}

void C::func_ov126_02298a44() {
    if (func_ov002_022009d4()) {
        func_ov126_022985a8();
    }
}

void C::func_ov126_02298a5c() {
    if (func_ov002_022009d4()) {
        func_ov126_02298638();
    } else {
        switch (func_ov095_02292458(unk_144, func_ov002_022009c8())) {
        case 1:
            func_ov002_02202c40(unk_3e64);
            func_ov126_02297920();
            break;
        case 2:
            func_ov002_02202be0(unk_3e64);
            func_ov126_02297920();
            break;
        case 3:
            func_ov002_02202ca0(unk_3e64);
            func_ov126_02297920();
            break;
        case 4:
            func_ov002_02202c40(unk_3e64);
            func_ov126_02297178(0x80);
            func_ov002_02200a58(6);
            func_ov126_02297920();
            break;
        case 0:
        default:
            if (func_ov126_022977e8()) { return; }
            if (func_ov126_0229778c()) { return; }
            if (func_ov126_022976bc()) { return; }
            if (func_ov126_02297720()) { return; }
            if (func_ov126_02297698()) { return; }
        }
    }
}

void C::func_ov126_02298b2c() {
    if (func_ov002_02200a14(1)) {
        func_ov126_02298590();
    } else if (func_ov002_02203110(unk_3d00, 3)) {
        func_ov002_022030ac(unk_3d00, 3);
        unk_8c = 3;
        func_ov002_02200a58(0xf);
    } else if (func_ov002_02203110(unk_3d00, 4)) {
        func_ov002_022030ac(unk_3d00, 4);
        unk_8c = 9;
        func_ov002_02200a58(0xf);
    }
}

void C::func_ov126_02298ba0() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(unk_144)) {
        s32 t = func_ov095_02294a40(unk_144);
        s32 r = func_ov095_02294864(unk_144, t, 8);
        func_ov126_02297d94(r);
        func_ov095_02294d40(unk_144, t);
    }
}
