#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov105_02298594;

class Unk_ov105_Vt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

namespace Unk_ov105_Ns {
extern "C" s32 func_ov094_02292398(s32 a);
}

extern "C" {
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern s32 data_021f482c;
extern char data_ov105_022985f4[];
extern u8 data_ov105_02298614[];
extern u8 data_ov105_02298638[];

s32 func_0206ef0c();
void func_0200402c(s32 a);
void func_0206d394(void *a);
void func_0206d39c(void *a, s32 b);
void func_02065c94(void *a);
void func_02065e70(void *a, void *b);
s32 func_02065578(void *a);
void func_02065af0(void *a);
void func_0206d2e0(void *a, void *b, s32 c, s32 d, s32 e);
void func_0209750c();
s32 func_02097a04();
void *func_02096f88(s32 a, s32 b);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002654(void *a, s32 b, s32 c);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);

s32 func_ov002_022008fc(void *a, s32 b);
s32 func_ov002_02200908(void *a, s32 b);
s32 func_ov002_02200914(void *a);
s32 func_ov002_02200920(void *a);
void func_ov002_02200840(void *a, s32 b, s32 c, s32 d);
void func_ov002_02200874(void *a, s32 b, s32 c);
void func_ov002_0220085c(void *a, s32 b, s32 c);
void func_ov002_022008c4(void *a, s32 b, s32 c, s32 d, s32 e);
void func_ov002_022008e0(void *a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov002_02200a14(void *a, s32 b);
void func_ov002_02200a58(void *a, s32 b);
void func_ov002_02200a60(void *a, s32 b);
void func_ov002_02200a50(void *a, s32 b);
void func_ov002_022006e4(void *a, s32 b);
void func_ov002_022006c0(void *a);
void func_ov002_022006a4(void *a, s32 b);
s32 func_ov002_02200680(void *a);
s32 func_ov002_0220071c(void *a);
void func_ov002_022027a4(void *a);
s32 func_ov002_022017b4(void *a);
s32 func_ov002_022014c0(void *a, s32 b, s32 c);
void func_ov002_02201aa0(void *a, s32 b, s32 c);
s32 func_ov002_02203e24(void *a);
void func_ov002_02202064(void *a, s32 b);
void func_ov002_02201b58(void *a);
void func_ov002_02201b04(void *a);
void func_ov002_02203900(void *a);
void func_ov002_02203920(void *a);
void func_ov002_02203510(void *a, s32 b);
void func_ov002_022032ec(void *a, s32 b);
s32 func_ov002_02203110(void *a, s32 b);
void func_ov002_02202310(void *a, s32 b, s32 c, s32 d);
void func_ov002_02203ec8(void *a, s32 b);

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

struct Unk_ov105_0229760c_Rec {
    u8 b[0xf4];
};

class Unk_ov105_02298594 : public Unk_ov002_022044e4 {
public:
    // same-class callees outside this group
    void func_ov105_02294dd8(s32 a);
    void func_ov105_02294de8(s32 a);
    BOOL func_ov105_02294df8(s32 a);
    void func_ov105_02294e64();
    void func_ov105_02294e80();
    void func_ov105_02294ea4();
    BOOL func_ov105_02294ef0(s32 a, s32 b);
    void func_ov105_02294f48();
    void func_ov105_02294f84();
    void func_ov105_02295120();
    void func_ov105_0229514c();
    void func_ov105_022951c8();
    void func_ov105_02295594(s32 a, s32 b);
    void func_ov105_02295668();
    BOOL func_ov105_02295dc8();
    void func_ov105_02295c7c();
    void func_ov105_02295d4c();
    void func_ov105_02295e0c(s32 a);
    void func_ov105_02295e48();
    BOOL func_ov105_02295f20(s32 a);
    void *func_ov105_02296054(s32 a);
    BOOL func_ov105_02296108(s32 a);
    s32 func_ov105_02296154(s32 a, s32 b, s32 c);
    void func_ov105_02296234();
    void func_ov105_022962e4(s32 a, s32 b);
    void func_ov105_02296428(s32 a);
    void func_ov105_02296498(s32 a);
    void func_ov105_02296534();
    void func_ov105_022965cc();
    void func_ov105_022965ec();
    void func_ov105_02297b5c();
    void func_ov105_02297c70();
    void func_ov105_02297d18();

    // this group
    void func_ov105_022970f0();
    void func_ov105_022971ac();
    void func_ov105_022971e0();
    void func_ov105_02297274();
    void func_ov105_022972bc();
    void func_ov105_02297318();
    void func_ov105_022973c4();
    void func_ov105_0229745c();
    void func_ov105_02297488();
    void func_ov105_022974dc();
    void func_ov105_02297524();
    void func_ov105_0229755c();
    void func_ov105_0229759c();
    void func_ov105_022975a4();
    void func_ov105_022975c0();
    void func_ov105_0229760c();
    void func_ov105_022976f8();
    void func_ov105_02297724();
    void func_ov105_0229774c();
    void func_ov105_02297774();
    void func_ov105_02297794();
    void func_ov105_022977c0();
    void func_ov105_022977f0();
    void func_ov105_02297818();
    void func_ov105_02297834();
    void func_ov105_02297854();
    void func_ov105_02297880();
    void func_ov105_022978a0();
    void func_ov105_022978a8();
    void func_ov105_022978ec();
    void func_ov105_02297914();
    void func_ov105_0229794c();
    void func_ov105_02297978();
    void func_ov105_022979b8();

    /* 0x0094 */ s32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s32 unk_a0;
    /* 0x00a4 */ u8 pad_a4[0xac - 0xa4];
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ u8 pad_b4[0x29c - 0xb4];
    /* 0x029c */ u8 unk_29c;
    /* 0x029d */ u8 unk_29d;
    /* 0x029e */ u8 unk_29e;
    /* 0x029f */ u8 unk_29f;
    /* 0x02a0 */ u8 pad_2a0[2];
    /* 0x02a2 */ u8 unk_2a2;
    /* 0x02a3 */ u8 unk_2a3;
    /* 0x02a4 */ u8 pad_2a4[2];
    /* 0x02a6 */ u8 unk_2a6;
    /* 0x02a7 */ u8 pad_2a7;
    /* 0x02a8 */ u8 unk_2a8;
    /* 0x02a9 */ u8 unk_2a9;
    /* 0x02aa */ u8 pad_2aa;
    /* 0x02ab */ u8 unk_2ab;
    /* 0x02ac */ u8 pad_2ac[0x2e4 - 0x2ac];
    /* 0x02e4 */ u8 unk_2e4[0xd44 - 0x2e4];
    /* 0x0d44 */ u8 unk_d44[0xd6c - 0xd44];
    /* 0x0d6c */ u8 unk_d6c[0x234c - 0xd6c];
    /* 0x234c */ u8 unk_234c[0x240c - 0x234c];
    /* 0x240c */ u8 unk_240c[0x2424 - 0x240c];
    /* 0x2424 */ Unk_ov105_Vt unk_2424;
    /* 0x2428 */ u8 pad_2428[0x2488 - 0x2428];
    /* 0x2488 */ u8 unk_2488[0x2781 - 0x2488];
    /* 0x2781 */ u8 unk_2781[0x2890 - 0x2781];
    /* 0x2890 */ u8 unk_2890[0x2aa0 - 0x2890];
    /* 0x2aa0 */ u8 unk_2aa0[0x2b10 - 0x2aa0];
    /* 0x2b10 */ Unk_ov105_0229760c_Rec unk_2b10[0x4b];
    /* 0x728c */ u8 unk_728c[0x20];
};

static inline BOOL Unk_ov105_022973c4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void Unk_ov105_02298594::func_ov105_022970f0() {
    if (func_ov002_022017b4(unk_2488)) {
        if (func_ov002_02200a14(this, 1)) {
            func_ov105_02295668();
        } else if (Unk_ov105_022973c4_Both()) {
            s32 r = func_ov002_022014c0(unk_2488, data_021ef5f0, data_021ef5ec);
            if (r >= 0) {
                if (func_ov105_02294df8(0x800) && r == 0) {
                } else {
                    s32 t;
                    unk_2a6 = unk_2781[r];
                    t = 1;
                    if (unk_2a6 == 2) {
                        t = 0;
                        func_0200402c(0x24);
                    }
                    func_ov002_02201aa0(unk_2488, r, t);
                    func_ov002_02200a58(this, 0x17);
                }
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_022971ac() {
    if (func_ov002_02200a14(this, 1)) {
        func_ov002_02200a58(this, 9);
    } else if (func_ov002_02203e24(unk_2aa0)) {
        func_ov105_022951c8();
    }
}

void Unk_ov105_02298594::func_ov105_022971e0() {
    s32 a, b, r;
    func_ov105_02295c7c();
    func_ov105_02295e48();
    a = unk_ac + 8;
    b = unk_b0 + 0x18;
    r = func_ov105_02296154(a, b, 0);
    if (r != 0x41) {
        if (data_021f4770 == 0) {
            s32 q;
            if (func_ov105_02295f20(r) || (q = func_ov105_02296108(r)) == 0) {
                func_ov105_022962e4(unk_29f, a);
            } else {
                Unk_ov105_Ns::func_ov094_02292398(q);
                func_ov105_022965cc();
            }
        } else {
            func_ov105_02295e0c(r);
        }
    } else if (data_021f4770 == 0) {
        func_ov105_022962e4(unk_29f, a);
    }
}

void Unk_ov105_02298594::func_ov105_02297274() {
    if (func_ov002_02200680(unk_234c)) {
        if (unk_2ab != 0) {
            unk_2ab--;
        } else {
            func_ov105_02295594(unk_29d, 1);
            func_ov002_02200a58(this, 2);
        }
    }
}

void Unk_ov105_02298594::func_ov105_022972bc() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(this, 6);
    } else if (func_ov105_02294df8(4)) {
        if (func_ov105_02295dc8()) {
            func_ov105_02296428(unk_29d);
            func_ov002_02202064(unk_2488, 0);
            func_ov002_022006e4(unk_234c, 1);
        }
    }
}

void Unk_ov105_02298594::func_ov105_02297318() {
    if (data_021f4770 == 0) {
        if (func_ov105_02294df8(4)) {
            func_ov002_02200a58(this, 3);
            func_ov105_02297d18();
        } else {
            func_ov002_02200a58(this, 0);
            func_ov002_022006a4(unk_234c, 0x3c);
        }
    } else {
        if (func_ov105_02294df8(4)) {
            if (func_ov105_02295dc8()) {
                func_ov105_02296428(unk_29d);
                return;
            }
            if (func_ov002_02200680(unk_234c)) {
                if (unk_2ab != 0) {
                    unk_2ab--;
                } else {
                    func_ov105_02295594(unk_29d, 1);
                    func_ov002_02200a58(this, 2);
                }
                return;
            }
        }
        func_ov002_022006c0(unk_234c);
    }
}

void Unk_ov105_02298594::func_ov105_022973c4() {
    if (func_ov002_02200a14(this, 1)) {
        func_ov105_022965ec();
    } else {
        if (Unk_ov105_022973c4_Both()) {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec + 0x10;
            s32 r = func_ov105_02296154(x, y, 1);
            if (r != 0x41) {
                func_ov105_02296498(r);
            } else if (func_ov002_02203110(unk_728c, 9)) {
                func_ov105_02295120();
            } else if (func_ov105_02294ef0(x, y)) {
                func_ov105_02294ea4();
            }
        }
    }
}

void Unk_ov105_02298594::func_ov105_0229745c() {
    func_ov094_02292ae0(unk_d6c);
    func_ov002_02203920(unk_728c);
    func_ov002_02203510(unk_728c, 0x21);
}

void Unk_ov105_02298594::func_ov105_02297488() {
    s32 h = data_021f482c;
    func_020026c4(data_ov105_022985f4, h, 4, 4, 4, 4);
    func_02002654(data_ov105_02298614, h, 4);
    func_0200261c(data_ov105_02298638, h, 4, 0x1e2, 0x1e2, 0x227);
}

void Unk_ov105_02298594::func_ov105_022974dc() {
    func_ov094_02292d1c(unk_d6c, 0);
}

extern "C" void func_ov105_022974f0() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov105_02298594::func_ov105_0229759c() {
    func_ov105_02297524();
}

void Unk_ov105_02298594::func_ov105_02297524() {
    func_ov002_02201b58(unk_2488);
    func_ov094_02292aa4(unk_d6c);
    if (func_ov002_0220071c(unk_234c)) {
        func_ov105_02295d4c();
    }
}

void Unk_ov105_02298594::func_ov105_0229755c() {
    func_ov105_02296234();
    func_ov094_02292acc(unk_d6c);
    func_ov094_022939a0(unk_2e4);
    func_ov094_0229462c(unk_d44);
    func_ov002_02203900(unk_728c);
}

void Unk_ov105_02298594::func_ov105_022975a4() {
    func_ov105_0229755c();
    unk_2424.vfunc_0c();
}

void Unk_ov105_02298594::func_ov105_022975c0() {
    func_ov105_02296234();
    func_ov094_02292a80(unk_d6c);
    func_ov094_02293998(unk_2e4);
    func_ov002_02201b04(unk_2488);
    func_0206d394(unk_2890);
    func_ov002_02203900(unk_728c);
}

void Unk_ov105_02298594::func_ov105_0229760c() {
    s32 i;
    unk_94 = 0;
    func_ov094_022939c0(unk_2e4, 2);
    func_ov094_02294644(unk_d44, 1);
    func_ov094_02292d30(unk_d6c, 6);
    unk_29e = 0x41;
    func_ov002_022027a4(unk_240c);
    unk_29c = 0;
    unk_2a2 = 0x1a;
    func_ov002_02202310(unk_2488, 3, 0, 0);
    func_0206d39c(unk_2890, 3);
    i = 0;
    unk_2a8 = 0;
    for (; i < 0x4b; i++) {
        func_02065c94(&unk_2b10[i]);
    }
    func_0209750c();
    s32 q = func_02097a04();
    if (q) {
        u8 *p = (u8 *)func_02096f88(q, 0);
        for (i = 0; i < 0x4b; i++) {
            func_02065e70(&unk_2b10[i], p);
            p += 0xf4;
        }
    }
    func_ov105_0229514c();
    unk_2ab = 0;
}

void Unk_ov105_02298594::func_ov105_022976f8() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        func_ov105_022965cc();
    }
    unk_9c = func_ov002_02200920(this);
}

void Unk_ov105_02298594::func_ov105_02297724() {
    func_ov002_02200874(this, 0, 0);
    func_ov002_02203510(unk_728c, 0x21);
    func_ov002_02200a50(this, 0x15);
}

void Unk_ov105_02298594::func_ov105_0229774c() {
    if (func_ov002_022008fc(this, -1)) {
        func_ov105_02297724();
    }
    unk_9c = func_ov002_02200920(this);
}

void Unk_ov105_02298594::func_ov105_02297774() {
    func_ov105_02294e64();
    func_ov002_0220085c(this, 0, 0);
    func_ov002_02200a50(this, 0x13);
}

void Unk_ov105_02298594::func_ov105_02297794() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        func_ov105_02296534();
    }
    unk_9c = func_ov002_02200920(this);
}

void Unk_ov105_02298594::func_ov105_022977c0() {
    func_ov105_02294e80();
    func_ov002_02200874(this, 0, 0);
    func_ov002_022032ec(unk_728c, 0x22);
    func_ov002_02200a50(this, 0x11);
}

void Unk_ov105_02298594::func_ov105_022977f0() {
    if (func_ov002_022008fc(this, -1)) {
        func_ov105_022977c0();
    }
    unk_9c = func_ov002_02200920(this);
}

void Unk_ov105_02298594::func_ov105_02297818() {
    func_ov002_0220085c(this, 0, 0);
    func_ov002_02200a50(this, 0xf);
}

void Unk_ov105_02298594::func_ov105_02297834() {
    func_ov002_02200840(this, 4, 0, -16);
    unk_a0 = func_ov002_02200914(this);
}

void Unk_ov105_02298594::func_ov105_02297854() {
    func_ov002_02200840(this, 6, 0, -16);
    unk_98 = func_ov002_02200920(this);
    unk_9c = func_ov002_02200920(this);
}

void Unk_ov105_02298594::func_ov105_02297880() {
    func_ov002_02200840(this, 3, 0, 0);
    func_ov002_02200840(this, 4, 0, 0);
}

void Unk_ov105_02298594::func_ov105_022978a0() {
    func_ov105_02297b5c();
}

void Unk_ov105_02298594::func_ov105_022978a8() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(4);
        if (unk_2a9 != 0) {
            unk_2a9--;
        } else {
            func_ov105_02294f84();
            func_ov002_02200a50(this, 0xd);
        }
    } else {
        func_ov105_02297834();
    }
}

void Unk_ov105_02298594::func_ov105_022978ec() {
    func_ov105_02294f48();
    func_ov002_02200a50(this, 0xc);
    unk_2a9 = 4;
    func_ov105_022978a8();
}

void Unk_ov105_02298594::func_ov105_02297914() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov105_02294dd8(0x80);
        func_ov105_02297c70();
    } else {
        func_ov105_02297880();
    }
}

void Unk_ov105_02298594::func_ov105_0229794c() {
    func_ov002_022008c4(this, 3, 0, 0, 0x30);
    func_ov105_02297880();
    func_ov002_02200a50(this, 0xa);
}

void Unk_ov105_02298594::func_ov105_02297978() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(this, 5);
        } else {
            func_ov002_02200a58(this, 9);
        }
    } else {
        func_ov105_02297880();
    }
}

void Unk_ov105_02298594::func_ov105_022979b8() {
    void *p = func_ov105_02296054(unk_2a3);
    switch (func_02065578(p)) {
    case 2:
    case 5:
    case 7:
        func_ov105_02294de8(0x1000);
        break;
    }
    func_02065af0(p);
    func_0206d2e0(unk_2890, p, 3, 4, 1);
    func_ov002_022008e0(this, 3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov105_02297880();
    func_ov002_02200a50(this, 8);
    func_ov002_02203ec8(unk_2aa0, 0x88);
    func_ov105_02294de8(0x80);
}
