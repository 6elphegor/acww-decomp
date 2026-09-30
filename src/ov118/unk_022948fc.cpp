#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02002398(s32 a, s32 b);
s32 func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void *func_020ed174(void *p);
void func_020ed188(void *p);
BOOL func_0206ef00();
BOOL func_0206ef0c();
BOOL func_0206e63c();
BOOL func_0206e61c();
void *func_020947f0(s32 a);
s32 func_020b4934();
void *func_020b5010(void *p);
void func_02063888(void *p);
void func_02063870(void *p);
void func_020638d0(void *a, void *b);
void func_020b3544(s32 a, void *p);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206f9fc(void *p, u32 x);
void func_0206fab4(void *p, s32 a, s32 b);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL func_ov090_02291934();
void func_ov090_02291d8c(void *p, u8 x);
s32 func_ov090_02291aa0();
extern u8 data_020e416c;
extern u8 data_021ef360[];
extern u16 data_021f47d8[];
extern u8 data_021d7352[];
extern u8 data_ov118_02295570[];
extern u8 data_ov118_02295530[];
extern u8 data_ov118_02295550[];
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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();

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

// 0x24-byte helper objects at +0xb4 / +0xd8 (ctor func_020b8800)
class Unk_ov118_020b8800 {
public:
    BOOL func_020b86c0(void *buf, s32 n, u32 size, s32 z);
    s32 func_020b87d0();
    u32 unk_00[0x24 / 4];
};

// sub-object at +0x43c (ctor func_ov002_02202f70), 0x48 bytes
class Unk_ov118_ov002_02202f70 {
public:
    virtual ~Unk_ov118_ov002_02202f70();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208d9d4(s32 a);
    void func_0208dae8(u32 a, u32 b);
    s32 func_ov002_02202e84();
    s32 func_ov002_02202e60();
    u32 unk_04[0x44 / 4];
};

// sub-object at +0x484 (ctor func_ov002_02202640), 0x64 bytes
class Unk_ov118_ov002_02202640 {
public:
    virtual ~Unk_ov118_ov002_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    void func_ov002_02202a40(s32 a, s32 b);
    u32 unk_04[0x60 / 4];
};

// 3-byte table entry (array member with empty dtor func_ov118_02292df8)
struct Unk_ov118_Entry {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
};

class Unk_ov118_022955c8;
typedef void (Unk_ov118_022955c8::*Unk_ov118_022955c8_Fn)();

// Vtable 0x022955c8
class Unk_ov118_022955c8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov118_022955c8();

    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // helpers in other groups
    void func_ov118_02292e00(u32 m);
    void func_ov118_02292e10(u32 m);
    BOOL func_ov118_02292e20(u32 m);
    void func_ov118_022932ec();
    BOOL func_ov118_02293794();
    void func_ov118_022936e4();
    void func_ov118_02293498();
    void func_ov118_02293994(s32 a);
    void func_ov118_02293c3c(u32 a, s32 b, u8 c, s32 d, s32 e);
    void func_ov118_02293e14();
    void func_ov118_02293f24();
    void *func_ov118_02293ff0();
    void func_ov118_02294024();
    void func_ov118_02294138();
    void func_ov118_02294228();
    void func_ov118_02294270();
    void func_ov118_02294764();
    void func_ov118_022947c4();
    void func_ov118_02294814();
    void func_ov118_0229482c();
    void func_ov118_0229484c();

    // state-table targets (0x8d table)
    void func_ov118_022946d4();
    void func_ov118_0229468c();
    void func_ov118_0229463c();
    void func_ov118_02294534();
    void func_ov118_02294508();
    void func_ov118_022944c0();
    void func_ov118_0229447c();
    void func_ov118_02294458();
    void func_ov118_02294420();
    void func_ov118_022943f4();
    void func_ov118_02294288();

    // state-table targets (0x8c table); some are in this range
    void func_ov118_02294dc4();
    void func_ov118_02294d98();
    void func_ov118_02294d6c();
    void func_ov118_02294d38();
    void func_ov118_02294d1c();
    void func_ov118_02294c60();
    void func_ov118_02294c00();
    void func_ov118_02294bac();
    void func_ov118_02294b4c();

    // in range
    void func_ov118_022948fc();
    void func_ov118_02294930();
    void func_ov118_02294938();
    void func_ov118_02294964();
    void func_ov118_02294a30();
    void func_ov118_02294a38();
    void func_ov118_02294a58();
    BOOL func_ov118_02294df8(s32 x);
    BOOL func_ov118_02294e38();
    void func_ov118_02294f14();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u16 unk_9a;
    /* 0x9c */ u16 unk_9c;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1[2];
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 unk_a5[3];
    /* 0xa8 */ u8 unk_a8;
    /* 0xa9 */ u8 unk_a9;
    /* 0xaa */ u8 unk_aa[2];
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2[2];
    /* 0xb4 */ Unk_ov118_020b8800 unk_b4;
    /* 0xd8 */ Unk_ov118_020b8800 unk_d8;
    /* 0xfc */ u8 unk_fc[0x340];
    /* 0x43c */ Unk_ov118_ov002_02202f70 unk_43c;
    /* 0x484 */ Unk_ov118_ov002_02202640 unk_484;
    /* 0x4e8 */ u8 unk_4e8[0x800];
    /* 0xce8 */ u8 unk_ce8[0x800];
    /* 0x14e8 */ u8 unk_14e8[0x3000];
    /* 0x44e8 */ u8 unk_44e8[0x80];
    /* 0x4568 */ Unk_ov118_Entry unk_4568[3];
    /* 0x4571 */ Unk_ov118_Entry unk_4571[14];
};

void Unk_ov118_022955c8::func_ov118_022948fc() {
    func_02002398(4, 2);
    func_02002398(6, 2);
    func_0200226c(4, 0, 0, 0);
    func_0200226c(6, 0, 0, 0);
}

void Unk_ov118_022955c8::func_ov118_02294930() {
    func_ov118_02294964();
}

void Unk_ov118_022955c8::func_ov118_02294938() {
    func_ov118_02294a30();
    unk_43c.vfunc_0c();
    unk_484.vfunc_0c();
}

void Unk_ov118_022955c8::func_ov118_02294964() {
    if (func_ov118_02293794()) {
        func_ov118_022936e4();
        func_020021fc(6, 0, unk_98 - 0x50);
        if (unk_a3 != (unk_98 >> 4)) {
            func_ov118_02292e10(0x80);
        }
    }
    func_ov118_02293498();
    if (func_ov118_02292e20(0x80)) {
        func_ov118_02294138();
        func_ov118_02292e00(0x80);
    }
    if (func_ov118_02292e20(0x20)) {
        if (unk_d8.func_020b86c0(unk_4e8, 4, 0x800, 0)) {
            func_ov118_02292e00(0x20);
        }
    }
    if (func_ov118_02292e20(2)) {
        if (unk_b4.func_020b86c0(unk_ce8, 6, 0x800, 0)) {
            func_ov118_02292e00(2);
        }
    }
}

void Unk_ov118_022955c8::func_ov118_02294a30() {
    func_ov118_02294024();
}

void Unk_ov118_022955c8::func_ov118_02294a38() {
    func_ov118_02294024();
    unk_b4.func_020b87d0();
    unk_d8.func_020b87d0();
}

struct Unk_ov118_02294a58_Vec {
    s32 x, y, z;
};

static inline BOOL Unk_ov118_02294a58_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

void Unk_ov118_022955c8::func_ov118_02294a58() {
    volatile Unk_ov118_02294a58_Vec v;
    Unk_ov118_02294a58_Vec *p;
    unk_a0 = 0;
    unk_9c = 0;
    unk_98 = 0;
    unk_9a = 0;
    unk_a4 = 0;
    unk_94 = 0;
    unk_a8 = 0;
    unk_ac = 8;
    unk_ae = 0x58;
    unk_af = 0x70;
    unk_ad = 0xe;
    func_ov118_02293994(0);
    func_ov118_02293f24();
    if (Unk_ov118_02294a58_IsZero(data_020e416c)) {
        p = (Unk_ov118_02294a58_Vec *)func_020947f0(4);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    } else {
        func_020b4934();
        p = (Unk_ov118_02294a58_Vec *)func_020b5010(data_021ef360);
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
    }
    s32 z = (v.z + 0x800) >> 12;
    unk_9e = ((v.x + 0x800) >> 12) - 8;
    unk_9f = z + 13;
    unk_43c.func_0208d9d4(1);
    func_020ed174(this);
    if (func_ov090_02291934()) {
        func_ov118_02292e10(0x2000);
    }
}

void Unk_ov118_022955c8::func_ov118_02294b4c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_020021a0(6);
        func_ov118_02292e00(4);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(6, 0, 0x50 - unk_98);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov118_022955c8::func_ov118_02294bac() {
    func_ov118_022932ec();
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov002_02200a50(8);
    unk_94 = func_ov002_02200920();
}

void Unk_ov118_022955c8::func_ov118_02294c00() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov118_02294270();
        } else {
            func_ov118_02294228();
        }
    }
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    unk_94 = func_ov002_02200920();
}

void Unk_ov118_022955c8::func_ov118_02294c60() {
    u32 buf[8];
    func_ov118_02294764();
    func_02063888(buf);
    func_020638d0(data_021d7352, buf);
    func_020b3544(0, buf);
    void *o = func_ov118_02293ff0();
    func_0206fb9c(o, 8, 0x1ab, 0x12, 0xf, 0, 0);
    func_0206f9fc(o, 0xa9);
    func_0206fab4(o, 1, 0);
    func_02063870(buf);
    func_ov002_022008e0(0xa, 3, 0, 0x30);
    func_020020b8(4);
    func_ov002_02200840(4, 0, 0);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0x50 - unk_98);
    func_ov118_02292e10(4);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(6);
}

void Unk_ov118_022955c8::func_ov118_02294d1c() {
    func_ov118_02293e14();
    func_ov118_02294138();
    func_ov002_02200a50(5);
}

void Unk_ov118_022955c8::func_ov118_02294d38() {
    func_ov118_022947c4();
    func_ov002_02200a50(4);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d1c();
        func_ov118_02292e00(0x2000);
    }
}

void Unk_ov118_022955c8::func_ov118_02294d6c() {
    func_ov118_02294814();
    func_ov002_02200a50(3);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d38();
    }
}

void Unk_ov118_022955c8::func_ov118_02294d98() {
    func_ov118_0229482c();
    func_ov002_02200a50(2);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d6c();
    }
}

void Unk_ov118_022955c8::func_ov118_02294dc4() {
    func_ov118_022948fc();
    func_ov118_0229484c();
    func_ov002_02200a50(1);
    if (!func_ov118_02292e20(0x2000)) {
        func_ov118_02294d98();
    }
}

BOOL Unk_ov118_022955c8::func_ov118_02294df8(s32 x) {
    void *r = func_020ed174(this);
    if (x != -1 && x != 5) {
        func_ov090_02291d8c(r, (u8)x);
        unk_8c = 7;
        func_ov002_02200a60(1);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov118_022955c8::func_ov118_02294e38() {
    func_0206e63c();
    if (func_0206e61c()) {
        return func_ov118_02294df8(7);
    }
    if (unk_8d != 0 && unk_8d != 3 && unk_8d != 10) {
        return FALSE;
    }
    s32 r = -1;
    if (func_0206ef0c()) {
        r = func_ov090_02291aa0();
    } else {
        u16 k = data_021f47d8[1];
        if ((k & 0x400) != 0 || (k & 2) != 0) {
            r = 7;
        } else if ((k & 0x800) != 0) {
            r = 0;
        } else if ((k & 4) != 0) {
            r = 4;
        }
    }
    return func_ov118_02294df8(r);
}

BOOL Unk_ov118_022955c8::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov118_022955c8::vfunc_58() { return TRUE; }

BOOL Unk_ov118_022955c8::vfunc_54() { return TRUE; }

BOOL Unk_ov118_022955c8::vfunc_50() {
    if (func_ov118_02294e38()) {
        return TRUE;
    }
    func_ov118_02294938();
    func_ov118_02294f14();
    func_ov118_02294930();
    return TRUE;
}

void Unk_ov118_022955c8::func_ov118_02294f14() {
    static Unk_ov118_022955c8_Fn tbl[11] = {
        &Unk_ov118_022955c8::func_ov118_022946d4,
        &Unk_ov118_022955c8::func_ov118_0229468c,
        &Unk_ov118_022955c8::func_ov118_0229463c,
        &Unk_ov118_022955c8::func_ov118_02294534,
        &Unk_ov118_022955c8::func_ov118_02294508,
        &Unk_ov118_022955c8::func_ov118_022944c0,
        &Unk_ov118_022955c8::func_ov118_0229447c,
        &Unk_ov118_022955c8::func_ov118_02294458,
        &Unk_ov118_022955c8::func_ov118_02294420,
        &Unk_ov118_022955c8::func_ov118_022943f4,
        &Unk_ov118_022955c8::func_ov118_02294288};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov118_022955c8::vfunc_4c() {
    static Unk_ov118_022955c8_Fn tbl[9] = {
        &Unk_ov118_022955c8::func_ov118_02294dc4,
        &Unk_ov118_022955c8::func_ov118_02294d98,
        &Unk_ov118_022955c8::func_ov118_02294d6c,
        &Unk_ov118_022955c8::func_ov118_02294d38,
        &Unk_ov118_022955c8::func_ov118_02294d1c,
        &Unk_ov118_022955c8::func_ov118_02294c60,
        &Unk_ov118_022955c8::func_ov118_02294c00,
        &Unk_ov118_022955c8::func_ov118_02294bac,
        &Unk_ov118_022955c8::func_ov118_02294b4c};
    func_ov118_02294a30();
    (this->*tbl[unk_8c])();
    func_ov118_02294964();
    return TRUE;
}

BOOL Unk_ov118_022955c8::vfunc_24() {
    u32 base = unk_94 + 0x60;
    s32 i;
    if (func_ov118_02292e20(4)) {
        if (func_ov118_02292e20(8)) {
            unk_43c.func_0208dae8(0x67, (unk_94 - 0x12) + unk_a4);
        }
        if (func_0206ef00()) {
            if (func_ov118_02292e20(0x1000)) {
                s32 a = unk_43c.func_ov002_02202e84();
                s32 b = unk_43c.func_ov002_02202e60();
                unk_484.func_ov002_02202a40(a, b);
            }
            unk_484.func_ov002_02202844();
        }
        func_02087e70(1, data_ov118_02295570, 0x80, base, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        s32 x0, x1;
        if (func_ov118_02292e20(1)) {
            x1 = 0xc;
            x0 = 0xd;
        } else {
            x1 = 0xb;
            x0 = 0xe;
        }
        func_02087e70(1, data_ov118_02295530, 0x80, base, x0, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov118_02295550, 0x80, base, x1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        if (func_0206ef00() && func_ov118_02292e20(0x800)) {
            u32 t = unk_ad;
            if (t != 0xe) {
                u8 *e = (u8 *)this + t * 3;
                if (e[0x4573] != 0xc) {
                    func_ov118_02293c3c(e[0x4571], unk_94 + e[0x4572], 0xb, 0, -1);
                }
            }
        }
        unk_b1 = (unk_b1 + 1) & 0xf;
        if ((unk_b1 & 0xc) != 0) {
            func_ov118_02293c3c(unk_9e, unk_9f + unk_94, 0xa, 0, -1);
        }
        for (i = 0; i < 3; i++) {
            u8 *e = (u8 *)this + i * 3;
            u32 c = e[0x456a];
            if (c != 0xc) {
                func_ov118_02293c3c(e[0x4568], unk_94 + e[0x4569], c & 0x7f, (c & 0x80) != 0 ? 1 : 0, -1);
            }
        }
        for (i = 0; i < 14; i++) {
            u8 *e = (u8 *)this + i * 3;
            u8 *q = e + 0x4573;
            if (*q != 0xc) {
                s32 f;
                if (i == unk_a9 && !func_ov118_02292e20(0x100)) {
                    f = 8;
                } else {
                    f = -1;
                }
                func_ov118_02293c3c(e[0x4571], unk_94 + e[0x4572], *q, 0, f);
            }
        }
        if (func_ov118_02292e20(8)) {
            unk_43c.vfunc_08();
        }
    }
    return TRUE;
}
