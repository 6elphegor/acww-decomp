#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov102_02297520;

class Unk_ov102_Vt {
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
extern char data_ov102_02297610[];
extern u8 data_ov102_0229762c[];
extern u8 data_ov102_02297650[];

void func_ov102_02296b10();
s32 func_0206e61c();
void func_0206e63c();
s32 func_0206ef00();
s32 func_0206ec04();
void func_0209750c();
void func_020979b0();
s32 func_02039d74();
void func_02116048(void *a, void *b, u32 c);
s32 func_020ed174(void *a);
void func_020ed188();
s32 func_020639e8(char *buf, char *fmt, ...);
void func_0208d538(void *a, s32 b);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002654(void *a, s32 b, s32 c);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov092_02291ce4(s32 a, s32 b, s32 c);

s32 func_ov002_022008fc(void *a, s32 b);
s32 func_ov002_02200908(void *a, s32 b);
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
void func_ov094_02292398(s32 a);
void func_ov094_02293764(void *a, s32 b);
void func_ov094_022937a0(void *a);
void func_ov094_02293d2c(void *a);
void func_ov094_022941f8(void *a, s32 b);
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

typedef void (Unk_ov102_02297520::*Unk_ov102_02297520_Fn)();

class Unk_ov102_02297520 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // same-class callees outside this group
    void func_ov102_02294d48(s32 a);
    void func_ov102_02294d58(s32 a);
    BOOL func_ov102_02294d68(s32 a);
    void func_ov102_02294dd8();
    BOOL func_ov102_02294e24(s32 x, s32 y);
    void func_ov102_02294f20(s32 a);
    void func_ov102_02294f80(s32 a);
    void func_ov102_02294ff4();
    void func_ov102_02295610();
    void func_ov102_02295720(s32 a);
    void func_ov102_022957f8();
    void func_ov102_02295840();
    void func_ov102_02295918();
    void func_ov102_022959b8_();
    BOOL func_ov102_022959b8();
    void func_ov102_022959fc(s32 a);
    void func_ov102_02295a34();
    void func_ov102_02295b70_();
    BOOL func_ov102_02295b70(s32 a);
    void func_ov102_02295bac();
    s32 func_ov102_02295d18();
    s32 func_ov102_02295de0(s32 a);
    s32 func_ov102_02295e3c(s32 a, s32 b, s32 c);
    void func_ov102_02295f30();
    void func_ov102_02295fc8(s32 a, s32 b);
    void func_ov102_02296110(s32 a);
    void func_ov102_02296174(s32 a);
    void func_ov102_02296200();
    void func_ov102_02296220();
    void func_ov102_02296279();
    void func_ov102_022962b9();
    void func_ov102_022962f1();
    void func_ov102_0229634d();
    void func_ov102_022963a1();
    void func_ov102_022963e9();
    void func_ov102_02296441();
    void func_ov102_02296471();
    void func_ov102_022964a1();
    void func_ov102_022964e1();
    void func_ov102_02296551();
    void func_ov102_022965a1();
    void func_ov102_02296705();

    // this group
    void func_ov102_0229688c();
    void func_ov102_02296964();
    void func_ov102_022969bc();
    void func_ov102_02296a54();
    void func_ov102_02296a64();
    void func_ov102_02296ab0();
    void func_ov102_02296afc();
    void func_ov102_02296b44();
    void func_ov102_02296b70();
    void func_ov102_02296ba4();
    void func_ov102_02296bac();
    void func_ov102_02296bc8();
    void func_ov102_02296bf0();
    void func_ov102_02296c84();
    void func_ov102_02296c8c();
    void func_ov102_02296ce4();
    void func_ov102_02296d0c();
    void func_ov102_02296d5c();
    void func_ov102_02296dc8();
    void func_ov102_02296dec();
    void func_ov102_02296e40();
    void func_ov102_02296ed0();
    void func_ov102_02296f18();
    void func_ov102_02296f98();
    void func_ov102_02296fb4();
    void func_ov102_02297078();

    /* 0x0094 */ u8 pad_94[0xcc - 0x94];
    /* 0x00cc */ u8 unk_cc[0xa60];
    /* 0x0b2c */ u8 unk_b2c[0x28];
    /* 0x0b54 */ u8 unk_b54[0x15e0];
    /* 0x2134 */ u8 unk_2134[0xc0];
    /* 0x21f4 */ u8 unk_21f4[0x18];
    /* 0x220c */ Unk_ov102_Vt unk_220c;
    /* 0x2210 */ u8 pad_2210[0x23f8 - 0x2210];
    /* 0x23f8 */ s32 unk_23f8;
    /* 0x23fc */ s32 unk_23fc;
    /* 0x2400 */ s32 unk_2400;
    /* 0x2404 */ u8 pad_2404[8];
    /* 0x240c */ s32 unk_240c;
    /* 0x2410 */ s32 unk_2410;
    /* 0x2414 */ u8 unk_2414[0xb4];
    /* 0x24c8 */ u8 pad_24c8[3];
    /* 0x24cb */ u8 unk_24cb;
    /* 0x24cc */ u8 unk_24cc;
    /* 0x24cd */ u8 unk_24cd;
    /* 0x24ce */ u8 unk_24ce;
    /* 0x24cf */ u8 pad_24cf[2];
    /* 0x24d1 */ u8 unk_24d1;
    /* 0x24d2 */ u8 pad_24d2[2];
    /* 0x24d4 */ u8 unk_24d4;
    /* 0x24d5 */ u8 unk_24d5;
    /* 0x24d6 */ u8 unk_24d6;
};

static inline BOOL Unk_ov102_022969bc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void Unk_ov102_02297520::func_ov102_0229688c() {
    if (func_0206e61c()) {
        func_ov102_02295720(unk_24ce);
        func_ov102_02295610();
        func_ov002_022006e4(unk_2134, 0);
        func_ov102_02294f20(0);
    } else {
        s32 a, r;
        func_ov102_02295840();
        func_ov102_02295a34();
        a = unk_2410 + 8;
        r = func_ov102_02295e3c(unk_240c + 8, a, 0);
        if (r != 0x25) {
            if (data_021f4770 == 0) {
                if (func_ov102_02295b70(r)) {
                    func_ov102_02295fc8(unk_24ce, a);
                } else {
                    s32 q = func_ov102_02295de0(r);
                    if (q == 0) {
                        func_ov102_02295fc8(unk_24ce, a);
                    } else {
                        func_ov094_02292398(q);
                        func_ov102_02296200();
                    }
                }
            } else {
                func_ov102_022959fc(r);
            }
        } else if (data_021f4770 == 0) {
            func_ov102_02295fc8(unk_24ce, a);
        }
    }
}

void Unk_ov102_02297520::func_ov102_02296964() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(this, 0);
        func_ov002_022006a4(unk_2134, 0x3c);
    } else if (func_ov102_02294d68(4) && func_ov102_022959b8()) {
        func_ov102_02296110(unk_24cc);
    } else {
        func_ov002_022006c0(unk_2134);
    }
}

void Unk_ov102_02297520::func_ov102_022969bc() {
    if (func_ov002_02200a14(this, 1)) {
        func_ov102_02296220();
    } else {
        if (Unk_ov102_022969bc_Both()) {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec;
            s32 r = func_ov102_02295e3c(x, y, 1);
            if (r != 0x25) {
                func_ov102_02296174(r);
            } else if (x >= 0xc8 && x <= 0xf8 && y >= 0x68 && y <= 0x78) {
                func_ov102_02294f20(1);
            } else if (func_ov102_02294e24(x, y)) {
                func_ov102_02294dd8();
            }
        }
    }
}

void Unk_ov102_02297520::func_ov102_02296a54() {
    func_ov094_02292ae0(unk_b54);
}

void Unk_ov102_02297520::func_ov102_02296a64() {
    char buf[0x24];
    s32 h = data_021f482c;
    func_020639e8(buf, data_ov102_02297610, unk_24d6);
    func_020026c4(buf, h, 4, 3, 3, 5);
    s32 r = func_ov102_02295d18();
    func_ov094_02293764(unk_cc, r);
}

void Unk_ov102_02297520::func_ov102_02296ab0() {
    s32 h = data_021f482c;
    func_02002654(data_ov102_0229762c, h, 4);
    func_0200261c(data_ov102_02297650, h, 4, 0x1b9, 0x1b9, 0x238);
    func_ov102_02294f80(0);
}

void Unk_ov102_02297520::func_ov102_02296afc() {
    func_ov094_02292d1c(unk_b54, 0);
}

extern "C" void func_ov102_02296b10() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov102_02297520::func_ov102_02296ba4() {
    func_ov102_02296b44();
}

void Unk_ov102_02297520::func_ov102_02296b44() {
    func_ov094_02292aa4(unk_b54);
    if (func_ov002_0220071c(unk_2134)) {
        func_ov102_02295918();
    }
}

void Unk_ov102_02297520::func_ov102_02296b70() {
    func_ov102_02295f30();
    func_ov094_02292acc(unk_b54);
    func_ov094_022939a0(unk_cc);
    func_ov094_0229462c(unk_b2c);
    func_ov102_02294ff4();
}

void Unk_ov102_02297520::func_ov102_02296bac() {
    func_ov102_02296b70();
    unk_220c.vfunc_0c();
}

void Unk_ov102_02297520::func_ov102_02296bc8() {
    func_ov102_02295f30();
    func_ov094_02292a80(unk_b54);
    func_ov094_02293998(unk_cc);
    func_ov102_02294ff4();
}

void Unk_ov102_02297520::func_ov102_02296bf0() {
    unk_23f8 = 0;
    func_ov094_022939c0(unk_cc, 1);
    func_ov094_02294644(unk_b2c, 2);
    func_ov094_02292d30(unk_b54, 6);
    unk_24cd = 0x25;
    func_ov002_022027a4(unk_21f4);
    unk_24cb = 0;
    unk_24d1 = 0;
    unk_24d4 = 0;
    func_0209750c();
    func_020979b0();
    func_02116048((void *)func_02039d74(), unk_2414, 0xb4);
    func_0206ec04();
    unk_24d6 = 0;
}

void Unk_ov102_02297520::func_ov102_02296c84() {
    func_ov102_02296e40();
}

void Unk_ov102_02297520::func_ov102_02296c8c() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(4);
        if (unk_24d5 != 0) {
            unk_24d5--;
        } else {
            func_ov102_02296fb4();
            func_ov002_02200a50(this, 9);
        }
    } else {
        func_ov002_02200840(this, 4, 0, 0);
        unk_2400 = func_ov002_02200920(this);
    }
}

void Unk_ov102_02297520::func_ov102_02296ce4() {
    func_ov102_02296dec();
    func_ov002_02200a50(this, 8);
    unk_24d5 = 4;
    func_ov102_02296c8c();
}

void Unk_ov102_02297520::func_ov102_02296d0c() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(6);
        func_ov002_02200a60(this, 5);
        func_ov102_02294d48(1);
        func_ov102_02294d48(2);
    } else {
        func_ov002_02200840(this, 6, 0, 0);
    }
    unk_23fc = func_ov002_02200920(this);
}

void Unk_ov102_02297520::func_ov102_02296d5c() {
    if (func_ov002_022008fc(this, 0)) {
        func_020021a0(4);
        func_ov102_02294d48(0x80);
        func_ov002_022008c4(this, 8, 0, 0, 0x30);
        func_ov002_02200840(this, 6, 0, 0);
        func_ov002_02200a50(this, 6);
        func_ov102_02296d0c();
    } else {
        func_ov002_02200840(this, 4, 0, 0);
        unk_2400 = func_ov002_02200920(this);
    }
}

void Unk_ov102_02297520::func_ov102_02296dc8() {
    func_ov102_02296dec();
    func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    func_ov002_02200a50(this, 5);
}

void Unk_ov102_02297520::func_ov102_02296dec() {
    func_ov002_022006e4(unk_2134, 1);
    func_ov102_02295610();
    func_ov002_022008c4(this, 2, 4, 1, 0x30);
    func_ov002_02200850(this, 0x90);
    func_ov002_02200840(this, 4, 0, 0);
    unk_2400 = func_ov002_02200920(this);
}

void Unk_ov102_02297520::func_ov102_02296e40() {
    if (func_ov002_02200908(this, 0)) {
        func_ov002_02200a60(this, 2);
        func_ov102_02296200();
        func_ov102_02294d48(0x40);
        if (unk_24cb != 0 && func_0206ef00()) {
            if (unk_24d1 < 0x1e || unk_24d1 > 0x23) {
                func_0208d538(&unk_220c, 4);
            }
            unk_220c.vfunc_0c();
            func_ov102_022957f8();
            func_ov002_02200a58(this, 4);
        }
    }
    func_ov002_02200840(this, 4, 0, 0);
    unk_2400 = func_ov002_02200920(this);
}

void Unk_ov102_02297520::func_ov102_02296ed0() {
    s32 r = func_ov002_02200908(this, 0);
    func_ov002_02200840(this, 6, 0, 0);
    unk_23fc = func_ov002_02200920(this);
    if (r != 0) {
        func_ov102_02296ab0();
        func_ov102_02296fb4();
        func_ov002_02200a50(this, 3);
    }
}

void Unk_ov102_02297520::func_ov102_02296f18() {
    func_ov102_02296a54();
    func_ov094_022937a0(unk_cc);
    func_ov102_02295bac();
    func_ov094_02293d2c(unk_b2c);
    func_ov094_022941f8(unk_b2c, 0xf);
    func_ov002_022008e0(this, 8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(this, 6, 0, 0);
    func_ov002_02200a50(this, 2);
    func_ov102_02294d58(1);
    func_ov102_02294d58(2);
    unk_23fc = func_ov002_02200920(this);
}

void Unk_ov102_02297520::func_ov102_02296f98() {
    func_ov102_02296b10();
    func_ov102_02296afc();
    func_ov002_02200a50(this, 1);
}

void Unk_ov102_02297520::func_ov102_02296fb4() {
    func_ov102_02296a64();
    func_ov002_022008e0(this, 2, 0, 1, 0x30);
    func_ov002_02200850(this, 0x90);
    func_ov102_02294d58(0x80);
    func_020020b8(4);
    func_ov002_02200840(this, 4, 0, 0);
    unk_2400 = func_ov002_02200920(this);
}

BOOL Unk_ov102_02297520::vfunc_5c() {
    func_020ed188();
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_58() {
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_54() {
    return TRUE;
}

BOOL Unk_ov102_02297520::vfunc_50() {
    func_0206e63c();
    if (func_0206e61c()) {
        u32 s = unk_8d;
        if (s == 0 || s == 1 || s == 3) {
            func_ov102_02295610();
            func_ov002_022006e4(unk_2134, 0);
            func_ov102_02294f20(0);
        }
    }
    func_ov102_02296bac();
    func_ov102_02297078();
    func_ov102_02296ba4();
    return TRUE;
}

void Unk_ov102_02297520::func_ov102_02297078() {
    static Unk_ov102_02297520_Fn tbl[16] = {
        &Unk_ov102_02297520::func_ov102_022969bc, &Unk_ov102_02297520::func_ov102_02296964,
        &Unk_ov102_02297520::func_ov102_0229688c, &Unk_ov102_02297520::func_ov102_02296705,
        &Unk_ov102_02297520::func_ov102_022965a1, &Unk_ov102_02297520::func_ov102_02296551,
        &Unk_ov102_02297520::func_ov102_022964e1, &Unk_ov102_02297520::func_ov102_022964a1,
        &Unk_ov102_02297520::func_ov102_02296471, &Unk_ov102_02297520::func_ov102_02296441,
        &Unk_ov102_02297520::func_ov102_022963e9, &Unk_ov102_02297520::func_ov102_022963a1,
        &Unk_ov102_02297520::func_ov102_0229634d, &Unk_ov102_02297520::func_ov102_022962f1,
        &Unk_ov102_02297520::func_ov102_022962b9, &Unk_ov102_02297520::func_ov102_02296279};
    (this->*tbl[unk_8d])();
}
