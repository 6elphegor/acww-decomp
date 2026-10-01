#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021edb68;

void func_020ed174(void *p);
BOOL func_0206e61c();
BOOL func_0206ef00();
BOOL func_0206ef0c();
s32 func_ov090_02291a78(s32 a);
s32 func_ov090_02291964();
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_0206f9fc(void *o, u32 x);
void func_0206fb9c(void *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0206fab4(void *o, s32 a, s32 b);
void func_0206fc44(void *o);
void *func_02076cf0(void *p);
void *func_02076e1c(void *p);
BOOL func_020e9bb0(u32 a);
BOOL func_020e9c78(u32 a, void *b);
}

class Unk_ov119_02295840;

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
    BOOL func_0208d534();
    void func_0208d538(s32 a);

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x970 sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();

    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    s32 func_ov002_02202878();
    s32 func_ov002_0220288c();

    u8 unk_4b[0x64 - 0x4b];
};

// +0xdc sub-object (declaration from src/ov002/unk_02200fa8.cpp, fields opaque)
class Unk_ov002_022013ac {
public:
    u8 unk_00[0x2f4];

    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};

extern "C" {
BOOL func_ov002_02201a28(Unk_ov002_022013ac *self);
u8 func_ov002_02201a70(Unk_ov002_022013ac *self, s32 x);
void func_ov002_02201aa0(Unk_ov002_022013ac *self, s32 a, s32 b);
void func_ov002_02202064(Unk_ov002_022013ac *self, s32 x);
}

// +0x1ac4 sub-object
class Unk_ov002_022040ec {
public:
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u8 unk_00[0x108];
};

struct Unk_ov119_02293f68_Elem {
    u8 unk_00[0x40];
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
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
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

// Vtable 0x02295840
class Unk_ov119_02295840 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov119_02295840();

    void func_ov119_02292ea4();
    void func_ov119_02292dd0(u32 mask);
    BOOL func_ov119_02292de0(u32 mask);
    void func_ov119_02292f20();
    u8 func_ov119_02292f8c(s32 v);
    void func_ov119_0229305c(u8 v);
    void func_ov119_022930d4();
    void func_ov119_0229371c();
    u8 *func_ov119_02293810();
    BOOL func_ov119_02293828();
    void func_ov119_02293844(s32 v);
    void func_ov119_02293c08(u8 v);
    s32 func_ov119_02293e5c();
    s32 func_ov119_02293ed0();

    BOOL func_ov119_02293f68(u32 keys);
    void func_ov119_02294188();
    void func_ov119_022941a8();
    void func_ov119_022941c8();
    void func_ov119_022941e8();
    void func_ov119_02294244();
    void func_ov119_022942a4();
    void func_ov119_022942f0();
    void func_ov119_02294364();
    s32 func_ov119_02294388();
    s32 func_ov119_022943c0();
    void func_ov119_022943fc();
    void func_ov119_0229448c(u32 id);
    void func_ov119_022944cc();
    void *func_ov119_02294504();
    void func_ov119_0229453c();
    void func_ov119_02294568(u8 v);
    void func_ov119_022945a4();
    void func_ov119_022945d4();
    void func_ov119_022945f0();
    void func_ov119_02294608();
    void func_ov119_02294634();
    void func_ov119_02294670();
    void func_ov119_022946b4();
    void func_ov119_022946f4();
    void func_ov119_02294718();
    void func_ov119_02294734();
    void func_ov119_02294770();
    void func_ov119_022947a4();
    void func_ov119_02294804();
    void func_ov119_02294840();

    /* 0x091 */ u8 unk_91[9];
    /* 0x09a */ s16 unk_9a;
    /* 0x09c */ u8 unk_9c;
    /* 0x09d */ u8 unk_9d;
    /* 0x09e */ volatile u8 unk_9e;
    /* 0x09f */ u8 unk_9f;
    /* 0x0a0 */ volatile u8 unk_a0;
    /* 0x0a1 */ u8 unk_a1[0xc];
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ volatile u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2[2];
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ s32 unk_b8;
    /* 0x0bc */ u8 unk_bc[0xdc - 0xbc];
    /* 0x0dc */ Unk_ov002_022013ac unk_dc;
    /* 0x3d0 */ u8 unk_3d0[0x3dc - 0x3d0];
    /* 0x3dc */ Unk_ov119_02293f68_Elem unk_3dc[0x13];
    /* 0x89c */ u8 unk_89c[0x970 - 0x89c];
    /* 0x970 */ Unk_ov002_02204630 unk_970;
    /* 0x9d4 */ u8 unk_9d4[0x1ac4 - 0x9d4];
    /* 0x1ac4 */ Unk_ov002_022040ec unk_1ac4;
};

// ---------------------------------------------------------------------------------------------

BOOL Unk_ov119_02295840::func_ov119_02293f68(u32 keys) {
    u32 old = unk_a0;
    if (keys == 0) {
        return FALSE;
    }
    if (old <= 7) {
        if (func_ov002_0220127c(keys)) {
            if (unk_a0 + 1 < unk_af) {
                unk_a0 = unk_a0 + 1;
            }
        } else if (func_ov002_0220128c(keys)) {
            if (unk_a0 != 0) {
                unk_a0 = unk_a0 - 1;
            } else {
                unk_a0 = 0x14;
            }
        } else if (func_ov002_0220125c(keys)) {
            s32 t = unk_970.func_ov002_02202878();
            if (t > 0x94) {
                unk_a0 = 0x16;
            } else {
                t -= 0x35;
                if (t < 0) t = 0;
                t >>= 4;
                if (t >= 6) t = 5;
                unk_a0 = t + 8;
            }
        }
    } else if (old >= 0xe && old <= 0x15) {
        if (func_ov002_0220126c(keys)) {
            if (unk_a0 > 0xe) {
                unk_a0 = unk_a0 - 1;
            }
        } else if (func_ov002_0220125c(keys)) {
            if (unk_a0 < 0x15) {
                unk_a0 = unk_a0 + 1;
            }
        } else if (func_ov002_0220127c(keys)) {
            s32 t = unk_970.func_ov002_0220288c();
            if (unk_af != 0 && t < 0x80) {
                unk_a0 = 0;
            } else {
                unk_a0 = 8;
            }
        }
    } else if (old >= 8 && old <= 0xd) {
        if (func_ov002_0220128c(keys)) {
            if (unk_a0 > 8) {
                unk_a0 = unk_a0 - 1;
            } else {
                unk_a0 = 0x14;
            }
        } else if (func_ov002_0220127c(keys)) {
            if (unk_a0 < 0xd) {
                unk_a0 = unk_a0 + 1;
            } else {
                unk_a0 = 0x16;
            }
        } else if (func_ov002_0220126c(keys)) {
            if (unk_af != 0) {
                s32 t = unk_970.func_ov002_02202878();
                t -= 0x30;
                if (t < 0) t = 0;
                t >>= 4;
                s32 n = unk_af;
                if (t >= n) t = n - 1;
                unk_a0 = t;
            }
        }
    } else if (old == 0x16) {
        if (func_ov002_0220128c(keys)) {
            unk_a0 = 0xd;
        }
        if (func_ov002_0220126c(keys)) {
            u32 n = unk_af;
            if (n != 0) {
                unk_a0 = n - 1;
            }
        }
    }
    if (old != unk_a0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov119_02295840::func_ov119_02294188() {
    unk_970.func_ov002_02202a78();
    Unk_020e100c *p = &unk_970;
    p->vfunc_0c();
}

void Unk_ov119_02295840::func_ov119_022941a8() {
    unk_970.func_ov002_02202af0();
    func_ov002_02200a58(5);
}

void Unk_ov119_02295840::func_ov119_022941c8() {
    unk_970.func_ov002_02202b68();
    func_ov002_02200a58(4);
}

void Unk_ov119_02295840::func_ov119_022941e8() {
    if (func_ov119_02292de0(0x10)) {
        unk_ae = 2;
    } else {
        unk_ae = 0;
    }
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    unk_970.func_ov002_02202a40(a, b);
    unk_970.func_ov002_02202d00(7);
}

void Unk_ov119_02295840::func_ov119_02294244() {
    unk_ad = 10;
    unk_ae = func_ov002_02201a70(&unk_dc, 1);
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    unk_970.func_ov002_02202a40(a, b);
    unk_970.func_0208d538(8);
    func_ov002_02200a58(0xb);
}

void Unk_ov119_02295840::func_ov119_022942a4() {
    s32 a = unk_dc.func_ov002_022014a4();
    s32 b = unk_dc.func_ov002_02201498(unk_ae);
    unk_970.func_ov002_02202a18(a, b, 2);
    unk_9f = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov119_02295840::func_ov119_022942f0() {
    u32 v = unk_a0;
    if (v <= 7) {
        unk_970.func_ov002_02202ca0();
    } else if (v >= 0xe && v <= 0x15) {
        unk_970.func_ov002_02202be0();
    } else {
        unk_970.func_ov002_02202c40();
    }
    s32 a = func_ov119_022943c0();
    s32 b = func_ov119_02294388();
    unk_970.func_ov002_022029e8(a, b, 3, 1);
    unk_9f = unk_8d;
    func_ov002_02200a58(3);
}

void Unk_ov119_02295840::func_ov119_02294364() {
    unk_970.func_ov002_02202d00(0);
    Unk_020e100c *p = &unk_970;
    p->vfunc_0c();
}

s32 Unk_ov119_02295840::func_ov119_02294388() {
    u32 v = unk_a0;
    if (v <= 7) {
        return v * 16 + 0x38;
    }
    if (v >= 0xe && v <= 0x15) {
        return 8;
    }
    if (v >= 8 && v <= 0xd) {
        return (v - 8) * 16 + 0x3f;
    }
    if (v == 0x16) {
        return 0xaa;
    }
    return 0x60;
}

s32 Unk_ov119_02295840::func_ov119_022943c0() {
    u32 v = unk_a0;
    if (v <= 7) {
        return 0x20;
    }
    if (v >= 0xe && v <= 0x15) {
        return func_ov090_02291a78(v - 0xe);
    }
    if (v >= 8 && v <= 0xd) {
        return 0xd6;
    }
    if (v == 0x16) {
        return 0xdb;
    }
    return 0x80;
}

void Unk_ov119_02295840::func_ov119_022943fc() {
    u32 c = unk_a0;
    if (c <= 7) {
        s32 n = unk_af;
        if (n == 0) {
            unk_a0 = 8;
        } else if (n <= (s32)c) {
            unk_a0 = n - 1;
        }
    }
    s32 a = func_ov119_022943c0();
    s32 b = func_ov119_02294388();
    unk_970.func_ov002_02202a40(a, b);
    u32 v = unk_a0;
    if (v <= 7) {
        unk_970.func_ov002_02202d00(7);
    } else if (v >= 0xe && v <= 0x15) {
        unk_970.func_ov002_02202d00(0xd);
    } else {
        unk_970.func_ov002_02202d00(1);
    }
    func_ov119_02294188();
}

void Unk_ov119_02295840::func_ov119_0229448c(u32 id) {
    void *e = func_ov119_02294504();
    func_0206f9fc(e, id);
    func_0206fb9c(e, 8, 0x160, 0xd, 0xf, 0, 0);
    func_0206fab4(e, 1, 0);
}

void Unk_ov119_02295840::func_ov119_022944cc() {
    void *e = func_ov119_02294504();
    func_0206f9fc(e, 0xd6);
    func_0206fb9c(e, 8, 0xca, 6, 0xf, 0, 0);
    func_0206fab4(e, 1, 0);
}

void *Unk_ov119_02295840::func_ov119_02294504() {
    if (unk_9e >= 0x13) {
        return &unk_3dc[0x12];
    }
    unk_9e = unk_9e + 1;
    return &unk_3dc[unk_9e - 1];
}

void Unk_ov119_02295840::func_ov119_0229453c() {
    s32 i;
    i = 0;
    unk_9e = i;
    for (i = 0; i < 0x13; i++) {
        func_0206fc44(&unk_3dc[i]);
    }
}

void Unk_ov119_02295840::func_ov119_02294568(u8 v) {
    volatile u8 buf[1];
    buf[0] = data_021edb68;
    buf[0] = v;
    unk_1ac4.func_ov002_02204394((u8 *)buf, 1, 0);
    func_ov002_02200a58(0xd);
    func_ov119_02294364();
}

void Unk_ov119_02295840::func_ov119_022945a4() {
    unk_9a = -1;
    func_ov119_02292dd0(4);
    if (func_0206ef0c()) {
        func_ov119_022945f0();
    } else {
        func_ov119_022945d4();
    }
}

void Unk_ov119_02295840::func_ov119_022945d4() {
    func_ov119_022943fc();
    func_ov002_02200980();
    func_ov002_02200a58(2);
}

void Unk_ov119_02295840::func_ov119_022945f0() {
    func_ov119_02294364();
    func_ov002_02200a58(0);
}

void Unk_ov119_02295840::func_ov119_02294608() {
    if (func_020e9bb0(unk_b4)) {
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_02294634() {
    u8 *base = func_ov119_02293810();
    void *r = func_02076e1c(func_02076cf0(base + unk_b4 * 0x1c));
    if (func_020e9c78(unk_b4, r)) {
        func_ov119_02293c08(unk_b4);
    }
}

void Unk_ov119_02295840::func_ov119_02294670() {
    if (unk_b8 < 5) {
        unk_b8 = unk_b8 + 1;
        func_ov119_02293844(unk_b8);
    } else if (func_0206ef0c()) {
        func_ov119_022945f0();
    } else {
        func_ov119_022941a8();
    }
}

void Unk_ov119_02295840::func_ov119_022946b4() {
    if (unk_b8 > 0) {
        unk_b8 = unk_b8 - 1;
        func_ov119_02293844(unk_b8);
    } else {
        func_ov119_0229305c(unk_9d);
        func_ov002_02200a58(0xf);
    }
}

void Unk_ov119_02295840::func_ov119_022946f4() {
    if (unk_1ac4.func_ov002_02204234(1)) {
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_02294718() {
    if (unk_dc.func_ov002_022017a4()) {
        func_ov119_02292f20();
    }
}

void Unk_ov119_02295840::func_ov119_02294734() {
    if (func_ov002_02201a28(&unk_dc)) {
        func_ov002_02202064(&unk_dc, 0);
        if (unk_970.func_0208d534()) {
            func_ov119_02294364();
        }
        func_ov002_02200a58(0xc);
    }
}

void Unk_ov119_02295840::func_ov119_02294770() {
    if (unk_dc.func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov119_022941e8();
            func_ov002_02200a58(6);
        } else {
            func_ov002_02200a58(1);
        }
    }
}

void Unk_ov119_02295840::func_ov119_022947a4() {
    if (unk_b1 != 0) {
        unk_b1 = 0;
        func_ov119_0229371c();
        func_020ed174(this);
        func_ov090_02291964();
        if (func_ov119_02293828()) {
            if (!func_020e9bb0(unk_b4)) {
                func_ov002_02200a58(0x11);
            }
        }
    } else {
        func_ov119_02292dd0(2);
        func_ov119_022930d4();
        func_ov119_022945a4();
    }
}

void Unk_ov119_02295840::func_ov119_02294804() {
    if (unk_b1 != 0) {
        unk_b1 = unk_b1 - 1;
    } else {
        func_ov119_02294364();
        if (unk_a0 == 0x16) {
            func_ov119_02293ed0();
        } else {
            func_ov119_02293e5c();
        }
    }
}

void Unk_ov119_02295840::func_ov119_02294840() {
    if (func_0206e61c()) {
        func_ov119_02292ea4();
    } else if (unk_970.func_0208d4fc()) {
        func_ov002_02201aa0(&unk_dc, unk_ae, 1);
        unk_ad = func_ov119_02292f8c(unk_ae);
        func_ov002_02200a58(0xb);
    }
}
