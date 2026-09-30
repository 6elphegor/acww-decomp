#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov106_02298180;

class Unk_ov106_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern s32 data_021f482c;
extern u8 data_ov106_022981e0[];
extern u8 data_ov106_02298200[];
extern u8 data_ov106_02298224[];

s32 func_0206e61c();
void func_0206e63c();
s32 func_0206ef0c();
void func_0206ecf8(s32 a);
void func_0209750c();
s32 func_020979d8();
u8 *func_020970b8(s32 a, s32 b);
void func_02096914(void *a, s32 b);
void func_02065c94(void *a);
void func_02065e70(void *a, void *b);
void func_02065af0(s32 a);
void func_0206d2e0(void *a, s32 b, s32 c, s32 d, s32 e);
void func_0206d394(void *a);
void func_0206d39c(void *a, s32 b);
s32 func_020ed174(void *a);
void func_020ed188(void *a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002654(void *a, s32 b, s32 c);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);

s32 func_ov002_02200680(void *a);
s32 func_ov002_022008fc(void *a, s32 b);
s32 func_ov002_02200908(void *a, s32 b);
s32 func_ov002_02200914(void *a);
s32 func_ov002_02200920(void *a);
void func_ov002_02200840(void *a, s32 b, s32 c, s32 d);
void func_ov002_022008c4(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_022008e0(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_02200850(void *a, s32 b);
s32 func_ov002_02200a14(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_02200a50(void *a, s32 b);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006c0(void *a);
void func_ov002_022006a4(void *a, s32 b);
s32 func_ov002_0220071c(void *a);
void func_ov002_022027a4(void *a);
void func_ov002_02202064(void *a, s32 b);
s32 func_ov002_02203110(void *a, s32 b);
void func_ov002_02203920(void *a);
void func_ov002_02203510(void *a, s32 b);
void func_ov002_02203900(void *a);
void func_ov002_02203ec8(void *a, s32 b);
void func_ov002_02201b58(void *a);
void func_ov002_02201b04(void *a);
void func_ov002_02202310(void *a, s32 b, s32 c, s32 d);

void func_ov094_02292ae0(void *a);
void func_ov094_02292d1c(void *a, s32 b);
void func_ov094_02292aa4(void *a);
void func_ov094_02292acc(void *a);
void func_ov094_022939a0(void *a);
void func_ov094_0229462c(void *a);
void func_ov094_02292a80(void *a);
void func_ov094_02293998(void *a);
void func_ov094_022939c0(void *a, s32 b);
void func_ov094_02294644(void *a, s32 b);
void func_ov094_02292d30(void *a, s32 b);
void func_ov094_022937a0(void *a);
void func_ov094_02293d2c(void *a);
void func_ov094_02293cf0(void *a, void *b);
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

    /* 0x50 */ u8 unk_50[0x3c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91[3];
};


typedef void (Unk_ov106_02298180::*Unk_ov106_02298180_Fn)();

class Unk_ov106_02298180 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // same-class callees outside this group
    void func_ov106_02294dfc(s32 a);
    void func_ov106_02294e0c(s32 a);
    BOOL func_ov106_02294e1c(s32 a);
    void func_ov106_02294e30();
    void func_ov106_02295250(s32 a, s32 b);
    void func_ov106_02295708();
    BOOL func_ov106_02295a44();
    void func_ov106_022959c4();
    void func_ov106_02295bbc();
    s32 func_ov106_02295c70(s32 a);
    s32 func_ov106_02295cc4(s32 a);
    s32 func_ov106_02295d9c(s32 a, s32 b, s32 c);
    void func_ov106_02295e68();
    void func_ov106_02296078(s32 a);
    void func_ov106_022960c0(s32 a);
    void func_ov106_022961f0();
    void func_ov106_02296210();
    void func_ov106_02297a44();

    // this group
    void func_ov106_02297130();
    void func_ov106_02297178();
    void func_ov106_022971e8();
    void func_ov106_02297294();
    void func_ov106_02297314();
    void func_ov106_02297340();
    void func_ov106_02297394();
    void func_ov106_022973dc();
    void func_ov106_02297414();
    void func_ov106_02297450();
    void func_ov106_02297458();
    void func_ov106_02297474();
    void func_ov106_022974bc();
    void func_ov106_02297594();
    void func_ov106_022975b4();
    void func_ov106_022975e0();
    void func_ov106_02297600();
    void func_ov106_02297658();
    void func_ov106_02297684();
    void func_ov106_022976c4();
    void func_ov106_02297744();
    void func_ov106_022977a0();
    void func_ov106_022977f0();
    void func_ov106_02297850();
    void func_ov106_0229789c();
    void func_ov106_022978fc();
    void func_ov106_0229796c();

    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 pad_a4[0xb4 - 0xa4];
    /* 0x00b4 */ u8 unk_b4;
    /* 0x00b5 */ u8 unk_b5;
    /* 0x00b6 */ u8 unk_b6;
    /* 0x00b7 */ u8 pad_b7;
    /* 0x00b8 */ u8 unk_b8;
    /* 0x00b9 */ u8 unk_b9;
    /* 0x00ba */ u8 pad_ba[5];
    /* 0x00bf */ u8 unk_bf;
    /* 0x00c0 */ u8 pad_c0[0xf8 - 0xc0];
    /* 0x00f8 */ u8 unk_f8[0xb58 - 0xf8];
    /* 0x0b58 */ u8 unk_b58[0x28];
    /* 0x0b80 */ u8 unk_b80[0x2160 - 0xb80];
    /* 0x2160 */ u8 unk_2160[0xc0];
    /* 0x2220 */ u8 unk_2220[0x18];
    /* 0x2238 */ Unk_ov106_Vt unk_2238;
    /* 0x223c */ u8 pad_223c[0x229c - 0x223c];
    /* 0x229c */ u8 unk_229c[0x26a4 - 0x229c];
    /* 0x26a4 */ u8 unk_26a4[0x28b4 - 0x26a4];
    /* 0x28b4 */ u8 unk_28b4[0x2924 - 0x28b4];
    /* 0x2924 */ u8 unk_2924[0xa * 0xf4];
    /* 0x32ac */ u8 pad_32ac[0x3c34 - 0x32ac];
    /* 0x3c34 */ u8 unk_3c34[0x40];
};

static inline BOOL Unk_ov106_02297294_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void Unk_ov106_02298180::func_ov106_02297130() {
    if (func_ov002_02200680(unk_2160)) {
        if (unk_bf != 0) {
            unk_bf--;
        } else {
            func_ov106_02295250(unk_b5, 1);
            func_ov002_02200a58(this, 2);
        }
    }
}

void Unk_ov106_02298180::func_ov106_02297178() {
    if (func_0206e61c()) {
        func_ov002_02200a58(this, 6);
    } else if (data_021f4770 == 0) {
        func_ov002_02200a58(this, 6);
    } else if (func_ov106_02294e1c(4) && func_ov106_02295a44()) {
        func_ov106_02296078(unk_b5);
        func_ov002_02202064(unk_229c, 0);
        func_ov002_022006e4(unk_2160, 1);
    }
}

void Unk_ov106_02298180::func_ov106_022971e8() {
    if (data_021f4770 == 0) {
        if (func_ov106_02294e1c(4)) {
            func_ov002_02200a58(this, 3);
            func_ov106_02297a44();
        } else {
            func_ov002_02200a58(this, 0);
            func_ov002_022006a4(unk_2160, 0x3c);
        }
    } else {
        if (func_ov106_02294e1c(4)) {
            if (func_ov106_02295a44()) {
                func_ov106_02296078(unk_b5);
                return;
            }
            if (func_ov002_02200680(unk_2160)) {
                if (unk_bf != 0) {
                    unk_bf--;
                } else {
                    func_ov106_02295250(unk_b5, 1);
                    func_ov002_02200a58(this, 2);
                }
                return;
            }
        }
        func_ov002_022006c0(unk_2160);
    }
}

void Unk_ov106_02298180::func_ov106_02297294() {
    if (func_ov002_02200a14(this, 1)) {
        func_ov106_02296210();
    } else {
        if (Unk_ov106_02297294_Both()) {
            s32 r = func_ov106_02295d9c(data_021ef5f0, data_021ef5ec + 0x10, 1);
            if (r != 0x20) {
                func_ov106_022960c0(r);
            } else if (func_ov002_02203110(unk_3c34, 9)) {
                func_ov106_02294e30();
            }
        }
    }
}

void Unk_ov106_02298180::func_ov106_02297314() {
    func_ov094_02292ae0(unk_b80);
    func_ov002_02203920(unk_3c34);
    func_ov002_02203510(unk_3c34, 0x88);
}

void Unk_ov106_02298180::func_ov106_02297340() {
    s32 h = data_021f482c;
    func_020026c4(data_ov106_022981e0, h, 4, 4, 4, 4);
    func_02002654(data_ov106_02298200, h, 4);
    func_0200261c(data_ov106_02298224, h, 4, 0x1e2, 0x1e2, 0x227);
}

void Unk_ov106_02298180::func_ov106_02297394() {
    func_ov094_02292d1c(unk_b80, 0);
}

extern "C" void func_ov106_022973a8() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov106_02298180::func_ov106_02297450() {
    func_ov106_022973dc();
}

void Unk_ov106_02298180::func_ov106_022973dc() {
    func_ov002_02201b58(unk_229c);
    func_ov094_02292aa4(unk_b80);
    if (func_ov002_0220071c(unk_2160)) {
        func_ov106_022959c4();
    }
}

void Unk_ov106_02298180::func_ov106_02297414() {
    func_ov106_02295e68();
    func_ov094_02292acc(unk_b80);
    func_ov094_022939a0(unk_f8);
    func_ov094_0229462c(unk_b58);
    func_ov002_02203900(unk_3c34);
}

void Unk_ov106_02298180::func_ov106_02297458() {
    func_ov106_02297414();
    unk_2238.vfunc_0c();
}

void Unk_ov106_02298180::func_ov106_02297474() {
    func_ov106_02295e68();
    func_ov094_02292a80(unk_b80);
    func_ov094_02293998(unk_f8);
    func_ov002_02201b04(unk_229c);
    func_0206d394(unk_26a4);
    func_ov002_02203900(unk_3c34);
}

void Unk_ov106_02298180::func_ov106_022974bc() {
    s32 i;
    u8 *p;
    unk_94 = 0;
    func_ov094_022939c0(unk_f8, 2);
    func_ov094_02294644(unk_b58, 1);
    func_ov094_02292d30(unk_b80, 6);
    unk_b6 = 0x20;
    func_ov002_022027a4(unk_2220);
    unk_b4 = 0;
    unk_b8 = 0xb;
    func_ov002_02202310(unk_229c, 3, 0, 0);
    func_0206d39c(unk_26a4, 3);
    for (i = 0; i < 10; i++) {
        func_02065c94(unk_2924 + i * 0xf4);
    }
    func_0209750c();
    p = func_020970b8(func_020979d8(), 0);
    for (i = 0; i < 10; i++) {
        func_02065e70(unk_2924 + i * 0xf4, p);
        p += 0xf4;
    }
    func_ov106_02294e0c(0x4000);
    unk_bf = 0;
}

void Unk_ov106_02298180::func_ov106_02297594() {
    func_ov002_02200840(this, 4, 0, -16);
    unk_9c = func_ov002_02200914(this);
}

void Unk_ov106_02298180::func_ov106_022975b4() {
    func_ov002_02200840(this, 6, 0, -16);
    unk_98 = func_ov002_02200920(this);
    unk_a0 = func_ov002_02200920(this);
}

void Unk_ov106_02298180::func_ov106_022975e0() {
    func_ov002_02200840(this, 3, 0, 0);
    func_ov002_02200840(this, 4, 0, 0);
}

void Unk_ov106_02298180::func_ov106_02297600() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov106_02294dfc(0x80);
        if (func_ov106_02294e1c(0x8000)) {
            func_ov002_02200a60(this, 5);
            func_ov106_02294dfc(1);
        } else {
            func_ov106_0229796c();
        }
    } else {
        func_ov106_022975e0();
    }
}

void Unk_ov106_02298180::func_ov106_02297658() {
    func_ov002_022008c4(this, 3, 0, 0, 0x30);
    func_ov106_022975e0();
    func_ov002_02200a50(this, 10);
}

void Unk_ov106_02298180::func_ov106_02297684() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(this, 5);
        } else {
            func_ov002_02200a58(this, 9);
        }
    } else {
        func_ov106_022975e0();
    }
}

void Unk_ov106_02298180::func_ov106_022976c4() {
    s32 t = func_ov106_02295cc4(unk_b9);
    func_ov106_02295c70(t);
    func_02065af0(t);
    func_0206d2e0(unk_26a4, t, 3, 4, 1);
    func_ov002_022008e0(this, 3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov106_022975e0();
    func_ov002_02200a50(this, 8);
    func_ov002_02203ec8(unk_28b4, 0x88);
    func_ov106_02294e0c(0x80);
}

void Unk_ov106_02298180::func_ov106_02297744() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(6);
        func_ov106_02294dfc(2);
        if (func_ov106_02294e1c(0x100)) {
            func_ov002_02200a50(this, 7);
            func_ov106_022976c4();
        } else {
            func_ov106_02294dfc(1);
            func_ov002_02200a60(this, 5);
        }
    } else {
        func_ov106_022975b4();
    }
}

void Unk_ov106_02298180::func_ov106_022977a0() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(4);
        func_ov106_02294dfc(0x200);
        func_ov002_022008c4(this, 8, 0, 0, 0x30);
        func_ov002_02200a50(this, 6);
        func_ov106_02297744();
    } else {
        func_ov106_02297594();
    }
}

void Unk_ov106_02298180::func_ov106_022977f0() {
    func_ov002_022006e4(unk_2160, 1);
    func_ov106_02295708();
    if (!func_ov106_02294e1c(0x100)) {
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    }
    func_ov002_022008c4(this, 2, 0, 2, 0x30);
    func_ov002_02200850(this, 0xc0);
    func_ov002_02200a50(this, 5);
}

void Unk_ov106_02298180::func_ov106_02297850() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        if (func_ov106_02294e1c(0x4000)) {
            func_ov106_02294dfc(0x4000);
            func_ov002_02200a58(this, 0x24);
        } else {
            func_ov106_022961f0();
        }
    }
    func_ov106_02297594();
}

void Unk_ov106_02298180::func_ov106_0229789c() {
    s32 r = func_ov002_02200908(this, 0);
    func_ov106_022975b4();
    if (r != 0) {
        func_ov106_02297340();
        func_ov002_022008e0(this, 2, 0, 2, 0x30);
        func_ov002_02200850(this, 0xc0);
        func_020020b8(4);
        func_ov106_02294e0c(0x200);
        func_ov106_02297594();
        func_ov002_02200a50(this, 3);
    }
}

void Unk_ov106_02298180::func_ov106_022978fc() {
    func_ov106_02297314();
    func_ov094_022937a0(unk_f8);
    func_ov094_02293d2c(unk_b58);
    func_ov094_02293cf0(unk_b58, unk_2924);
    func_ov106_02295bbc();
    func_ov002_022008e0(this, 8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(this, 2);
    func_ov106_02294e0c(1);
    func_ov106_02294e0c(2);
    func_ov106_022975b4();
}

void Unk_ov106_02298180::func_ov106_0229796c() {
    func_ov106_022973a8();
    func_ov106_02297394();
    func_ov002_02200a50(this, 1);
}

BOOL Unk_ov106_02298180::vfunc_5c() {
    func_0206ecf8(1);
    func_02096914(unk_2924, 10);
    func_0209750c();
    u8 *p = func_020970b8(func_020979d8(), 0);
    s32 i = 0;
    u8 *q = unk_2924;
    for (; i < 10; i++) {
        func_02065e70(p, q + i * 0xf4);
        p += 0xf4;
    }
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_58() {
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_54() {
    return TRUE;
}

BOOL Unk_ov106_02298180::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 s = unk_8d;
        if (s == 0 || s == 1 || s == 7) {
            func_ov106_02295708();
            func_ov106_02294e30();
            func_ov002_022006e4(unk_2160, 0);
            return TRUE;
        }
    }
    func_ov106_02297458();
    func_ov106_02297a44();
    func_ov106_02297450();
    return TRUE;
}
