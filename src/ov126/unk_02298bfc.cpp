#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_ov126_02299b60[];
extern u8 data_ov126_02299b74[];
extern u8 data_ov126_02299b8c[];
extern u32 data_021f482c;
extern u8 *data_020cbb18;

void func_0200402c(u32 v);
void func_0200261c(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_0206fc44(void *p);
void func_020a7c3c(void *p);
void func_020b3544(s32 a, void *p);
void func_0206f9fc(void *p, s32 a);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0205125c(void *p, s32 a);
s32 func_020512f8(void *p, u32 a);
void func_0206ecc8(void *p, u32 a);
void func_0206ecf8(s32 a);
s32 func_0206ed38();
u32 func_0206ed50();
s32 func_0206e5cc();
BOOL func_0206e61c();
void func_0206e63c();
void *func_02076cf0(void *p);
void func_02076cf4(void *p);
void *func_02076e1c(void *p);
BOOL func_020e9c78(u32 a, void *b);
void *func_020ed174(void *p);
void func_020ed188(void *p);
BOOL func_02072e88(void *g, s32 v);
s32 func_020eaf18();
void func_ov090_02291964();
void func_ov090_02291d8c(void *p, s32 v);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
void func_ov095_02293cc0(void *p);
BOOL func_ov095_02293990(void *p);
BOOL func_ov095_02294324(void *p);
void func_ov095_02294358(void *p, s32 a);
void func_ov095_022943b4(void *p, s32 a);
void func_ov095_022943dc(void *p, void *q);
void func_ov095_022943f8(void *p, s32 a);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
s32 func_ov095_02294648(void *p, s32 a, s32 b, s32 c);
void func_ov095_0229483c(void *p, s32 a);
void func_ov111_02296840(void *p);
void func_ov115_022968ec(void *p, s32 a);
s32 func_ov124_02296c30(void *p);
void func_ov124_02296d2c(void *p, s32 a);
void func_ov002_02202640(void *p);
void func_ov002_02203900(void *p);
void func_ov002_02203920(void *p);
void func_ov002_02203370(void *p, s32 a);
}

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
    void func_ov002_0220085c(s32 a, s32 b);
    void func_ov002_02200874(s32 a, s32 b);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

// Embedded polymorphic sub-object at +0x3e64 (vfunc_0c is called by func_ov126_02298ea4)
class Unk_ov126_02298ea4_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

static inline BOOL Unk_ov126_02298c4c_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

// Vtable 0x02299ae8
class Unk_ov126_02299ae8 : public Unk_ov002_022044e4 {
public:
    // callees in other groups (return types chosen to match call sites)
    void func_ov126_02298064();
    void func_ov126_02298238(u32 v);
    void func_ov126_02298314();
    void func_ov126_02298358();
    void func_ov126_02298570();
    void func_ov126_022985fc();
    void func_ov126_0229861c();
    BOOL func_ov126_022981cc();
    void func_ov126_02297168(s32 v);
    void func_ov126_02297178(s32 v);
    BOOL func_ov126_02297188(u32 v);
    void func_ov126_022971fc();
    void func_ov126_0229755c();
    void *func_ov126_02297614();
    void func_ov126_02297994();
    void func_ov126_02297a0c();
    BOOL func_ov126_02297a5c();
    void func_ov126_02297b38();
    s32 func_ov126_02297ed4();
    void func_ov126_02299570();

    // in range
    void func_ov126_02298bfc();
    void func_ov126_02298c4c();
    void func_ov126_02298cf8();
    void func_ov126_02298db8();
    void func_ov126_02298e20();
    void func_ov126_02298e58();
    void func_ov126_02298e6c();
    void func_ov126_02298e9c();
    void func_ov126_02298ea4();
    void func_ov126_02298ec0();
    void func_ov126_02298ef4();
    void func_ov126_022990d0();
    void func_ov126_022990fc();
    void func_ov126_02299120();
    void func_ov126_02299150();
    void func_ov126_0229916c();
    void func_ov126_02299190();
    void func_ov126_022991e0();
    void func_ov126_022991fc();
    void func_ov126_02299280();
    void func_ov126_022992d0();
    void func_ov126_022993cc();
    void func_ov126_022993fc();
    void func_ov126_0229945c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
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
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u32 unk_b0[(0x144 - 0xb0) / 4];
    /* 0x144 */ u32 unk_144[(0x3d00 - 0x144) / 4];
    /* 0x3d00 */ u32 unk_3d00[(0x3e64 - 0x3d00) / 4];
    /* 0x3e64 */ u32 unk_3e64[(0x3ec8 - 0x3e64) / 4];
    /* 0x3ec8 */ u32 unk_3ec8[(0x4088 - 0x3ec8) / 4];
    /* 0x4088 */ u32 unk_4088[(0x40a8 - 0x4088) / 4];
    /* 0x40a8 */ u32 unk_40a8[4];
};

#define C Unk_ov126_02299ae8


void C::func_ov126_02298bfc() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(0);
    } else {
        u8 old = unk_a8;
        func_ov126_02298238(data_021ef5f0);
        if (old != unk_a8) {
            func_ov126_02298064();
            func_ov126_02297b38();
            func_0200402c(0x15);
        }
    }
}

void C::func_ov126_02298c4c() {
    if (func_ov002_02200a14(1)) {
        func_ov126_0229861c();
        return;
    }
    BOOL r4 = func_ov095_02294324(unk_144);
    if (Unk_ov126_02298c4c_Both()) {
        if (!func_ov126_02297a5c()) {
            if (!func_ov126_022981cc()) {
                if (func_ov095_02293990(unk_144)) {
                    func_ov095_02294648(unk_144, 8, 6, 1);
                    func_ov126_02297b38();
                } else if (data_021ef5ec >= 0x48) {
                    if (!r4) {
                        s32 r = func_ov126_02297ed4();
                        if (r != 0) {
                            if (r == 1) {
                                func_ov002_02200a58(2);
                            }
                        }
                    }
                }
            }
        }
    }
}

void C::func_ov126_02298cf8() {
    func_ov095_02293cc0(unk_144);
    func_ov115_022968ec(unk_b0, 6);
    func_020026c4(data_ov126_02299b60, (void *)data_021f482c, 8, 5, 5, 5);
    func_ov002_02203920(unk_3d00);
    if (func_ov126_02297188(0x100)) {
        u32 buf[0x44 / 4];
        func_0206fcc8(buf);
        func_020a7c3c(buf);
        func_020b3544(0, buf);
        if (func_0206ed50() == 0x12) {
            func_0206f9fc(unk_3ec8, 0x80);
        } else {
            func_0206f9fc(unk_3ec8, 0x66);
        }
        func_0206fb9c(unk_3ec8, 8, 0x1c0, 6, 0xf, 0, 0);
        func_0206fab4(unk_3ec8, 0, 0);
        func_0206fca8(buf);
    }
}

void C::func_ov126_02298db8() {
    func_ov124_02296d2c(unk_b0, 4);
    func_0200261c(data_ov126_02299b74, (void *)data_021f482c, 4, 0x13d, 0x13d, 0x1e9);
    func_ov095_022943dc(unk_144, data_ov126_02299b8c);
    func_ov126_02298358();
    func_ov095_022943b4(unk_144, 6);
    func_ov095_022943f8(unk_144, 6);
}

void C::func_ov126_02298e20() {
    func_020015b8(0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void C::func_ov126_02298e9c() {
    func_ov126_02298e58();
}

void C::func_ov126_02298ea4() {
    func_ov126_02298e6c();
    ((Unk_ov126_02298ea4_Sub *)unk_3e64)->vfunc_0c();
}

void C::func_ov126_02298ec0() {
    func_ov111_02296840(unk_b0);
    func_ov095_02294438(unk_144);
    func_ov002_02203900(unk_3d00);
    func_0206fc44(unk_3ec8);
}

void C::func_ov126_02298ef4() {
    unk_a4 = 0;
    unk_a0 = 0;
    u32 r5 = func_0206ed50();
    switch (r5) {
    case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: case 0x10: case 0x11: case 0x12:
    case 0x13: case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x1a:
        unk_ad = 2;
        break;
    case 0x19:
    case 0x1b:
        func_ov126_02297178(0x20);
        unk_ad = 0;
        break;
    }
    switch (unk_ad) {
    case 0:
        func_ov095_02294478(unk_144, 5);
        break;
    case 1:
    case 2:
        func_ov095_02294478(unk_144, 4);
        break;
    case 3:
        func_ov095_02294478(unk_144, 3);
        break;
    }
    switch (func_ov124_02296c30(unk_b0)) {
    case 0:
        unk_a6 = 0x10;
        unk_ab = 0x50;
        unk_ac = 0xb8;
        unk_af = 0x68;
        break;
    case 1:
        unk_a6 = 0x8;
        unk_ab = 0x60;
        unk_ac = 0xa0;
        unk_af = 0x40;
        break;
    case 2:
        unk_a6 = 0x20;
        unk_ab = 0x30;
        unk_ac = 0xd0;
        unk_af = 0xa0;
        break;
    case 3:
        unk_a6 = 0x4;
        unk_ab = 0x68;
        unk_ac = 0x90;
        unk_af = 0x28;
        break;
    case 4:
        unk_a6 = 0xa;
        unk_ab = 0x58;
        unk_ac = 0xa8;
        unk_af = 0x50;
        break;
    }
    func_0205125c(unk_4088, 0x20);
    func_0205125c(unk_40a8, 0x20);
    func_ov126_0229755c();
    if (func_020512f8(unk_4088, unk_a6) == 0) {
        func_0205125c(unk_4088, 0x20);
    }
    if (r5 == 0x10 || r5 == 0x18 || r5 == 0x19 || r5 == 0x12) {
        func_ov126_02297178(0x100);
    }
}

void C::func_ov126_022990d0() {
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0);
    unk_94 = func_ov002_02200920();
}

void C::func_ov126_022990fc() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov126_022985fc();
    }
}

void C::func_ov126_02299120() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        func_ov126_02297a0c();
        func_ov002_02200a50(0xb);
    }
}

void C::func_ov126_02299150() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(0xa);
}

void C::func_ov126_0229916c() {
    if (func_ov002_02200908(-1)) {
        func_ov002_02200a60(2);
        func_ov126_02298570();
    }
}

void C::func_ov126_02299190() {
    if (func_ov002_022008fc(-1)) {
        func_ov002_02200874(0, 0);
        if (func_ov126_02297188(0x40)) {
            func_ov002_02203370(unk_3d00, 0x87);
        } else {
            func_ov002_02203370(unk_3d00, 0x22);
        }
        func_ov002_02200a50(8);
    }
}

void C::func_ov126_022991e0() {
    func_ov002_0220085c(0, 0);
    func_ov002_02200a50(7);
}

void C::func_ov126_022991fc() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov126_02297168(1);
        func_ov002_02200a60(5);
        if (func_ov126_02297188(0x40)) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
            func_ov126_022971fc();
            func_0206ecc8(unk_4088, unk_a6);
            s32 t = func_0206ed50();
            if (t != 0x18 && t != 0x19 && t != 0x1a) {
            } else {
                func_020ed174(this);
                func_ov090_02291964();
            }
        }
    } else {
        func_ov126_022990d0();
    }
}

void C::func_ov126_02299280() {
    void *r4 = func_ov126_02297614();
    s32 r6 = func_0206ed38();
    if (func_020e9c78(r6, func_02076e1c(func_02076cf0(r4)))) {
        func_ov002_022008c4(0xa, 0, 0, 0x30);
        func_ov126_022990d0();
        func_ov002_02200a50(5);
    }
}

void C::func_ov126_022992d0() {
    func_ov126_02297168(2);
    u32 r5 = func_0206ed50();
    if (r5 >= 0x18 && r5 <= 0x1b) {
        void *r6 = func_020ed174(this);
        switch (r5) {
        case 0x18:
        case 0x1a:
            func_ov090_02291d8c(r6, 6);
            if (!func_ov126_02297188(0x40)) {
                func_0206e5cc();
            }
            break;
        case 0x19:
            if (func_ov126_02297188(0x40)) {
                func_ov090_02291d8c(r6, 0xc);
            } else {
                func_ov090_02291d8c(r6, 6);
                func_0206e5cc();
                if (func_02072e88(data_020cbb18, ((s32 *)data_020cbb18)[0x64 / 4])) {
                    s32 t = func_020eaf18();
                    if (t == 3) goto yes;
                    if (t == 4) {
                    yes:
                        func_ov002_02200a50(4);
                        func_ov126_02299280();
                        return;
                    }
                }
            }
            break;
        case 0x1b:
            if (func_ov126_02297188(0x40)) {
                func_ov090_02291d8c(r6, 0xe);
            } else {
                func_ov090_02291d8c(r6, 0xa);
            }
            break;
        }
    } else {
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    }
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov126_022990d0();
    func_ov002_02200a50(5);
}

void C::func_ov126_022993cc() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov126_022985fc();
        func_ov126_02298314();
    }
    func_ov126_022990d0();
}

void C::func_ov126_022993fc() {
    func_ov095_0229483c(unk_144, 6);
    func_ov126_02298cf8();
    func_ov126_02297b38();
    func_ov126_02297a0c();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(4);
    func_020020b8(6);
    func_ov126_022990d0();
    func_ov126_02297178(1);
    func_ov002_02200a50(2);
}

void C::func_ov126_0229945c() {
    func_ov126_02298e20();
    func_ov126_02298db8();
    func_ov002_02200a50(1);
}

BOOL C::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL C::vfunc_58() {
    return TRUE;
}

BOOL C::vfunc_54() {
    return TRUE;
}

BOOL C::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 r5 = func_0206ed50();
        switch (r5) {
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
            switch (unk_8d) {
            case 0: case 1: case 2: case 4: case 6: case 7: case 9: case 10: case 11: case 12: case 13: case 14:
                func_ov126_02297168(2);
                func_ov126_02297994();
                func_ov090_02291d8c(func_020ed174(this), 7);
                func_ov126_02297178(0x40);
                func_ov002_022008c4(0xa, 0, 0, 0x30);
                func_ov126_022990d0();
                func_ov002_02200a50(5);
                func_ov002_02200a60(1);
                if (r5 == 0x19 || r5 == 0x1b) {
                    func_02076cf4(func_ov126_02297614());
                }
                break;
            case 3:
            case 5:
            case 8:
                break;
            }
            break;
        }
    }
    func_ov126_02298ea4();
    func_ov126_02299570();
    func_ov126_02298e9c();
    return TRUE;
}

void C::func_ov126_02298e6c() {
    func_ov126_02297168(0x10);
    func_ov111_02296840(unk_b0);
    func_ov002_02203900(unk_3d00);
    func_0206fc44(unk_3ec8);
}

void C::func_ov126_02298e58() {
    func_ov095_02294358(unk_144, 6);
}
