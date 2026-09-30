#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_02065e70(void *dst, void *src);
u32 func_020655d0(void *p);
s32 func_02065578(void *p);
void func_02089ad8(void *p, s32 x, s32 y);
BOOL func_0206ef00();
s32 func_0204be70(u16 *p);

void *func_ov094_0229433c(void *p, s32 a);
void func_ov094_022942f4(void *p, s32 a);
void func_ov094_0229341c(void *p, u32 a, u32 b);
void func_ov094_0229313c(void *p, s32 a, s32 b);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *c);
void func_ov094_02293638(void *p, void *q, s32 a);
void func_ov094_02294420(void *p, void *q, s32 a);
void func_ov094_0229357c(void *p, s32 a);
void func_ov094_022943a4(void *p, s32 a);
void func_ov094_0229248c(void *p, s32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_02292484(void *p);
void func_ov094_022943f8(void *p);
void func_ov094_0229359c(void *p, s32 a);
void func_ov094_022935dc(void *p);
void func_ov094_022943bc(void *p, s32 a);
BOOL func_ov094_02292414(u32 a);
BOOL func_ov094_022924c4(u32 a);

s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);
void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);

extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5c8;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
}

class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();
    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

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

    void func_ov002_02200a58(u8 v);

    /* 0x50 */ Unk_ov002_022013a0 unk_50;
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_02201194 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x0229aea8
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    // in range
    s32 func_ov096_022971dc();
    s32 func_ov096_0229725c(u32 a);
    void func_ov096_02297284(u32 a);
    void func_ov096_022972ec(u32 f);
    void func_ov096_02297358(u32 k, u32 f);
    void func_ov096_022973a0(u32 a);
    void func_ov096_022973cc(u32 a);
    void func_ov096_0229741c(u32 a);
    void func_ov096_02297460(u32 a);
    void func_ov096_022974b8(u32 a, u32 b);
    void func_ov096_022974f4();
    void func_ov096_0229751c();
    void func_ov096_02297548();
    void func_ov096_02297574();
    void func_ov096_022975d4();
    void func_ov096_02297658();
    BOOL func_ov096_022976f8(s32 v);
    BOOL func_ov096_0229770c();
    void func_ov096_02297750(u32 a);
    void func_ov096_02297804();
    void func_ov096_02297834(u32 a);
    void func_ov096_022978ac();
    s32 func_ov096_022978d0(u32 a);
    s32 func_ov096_022978f8(u32 a);
    s32 func_ov096_02297910(u32 a);
    s32 func_ov096_02297940(u32 a);
    s32 func_ov096_0229795c(u32 a, u32 b);
    s32 func_ov096_022979f0(u32 a, u32 b, u32 c);

    // out of range (other groups)
    BOOL func_ov096_02297170();
    void func_ov096_02297160();
    s32 func_ov096_0229652c(u32 a);
    void func_ov096_0229865c();
    void func_ov096_02298334(s32 a, s32 b, s32 c);
    void func_ov096_02294d9c(s32 a);
    BOOL func_ov096_02294dbc(u32 a);
    u32 func_ov096_02297b9c(u32 a);
    u32 func_ov096_02297b48(u32 a);
    void *func_ov096_02297b14(u32 a);
    BOOL func_ov096_02297c10(u32 a);
    s32 func_ov096_02297d50(u32 a);
    s32 func_ov096_02297cc0(u32 a);
    void func_ov096_02297f3c(u32 a, void *p);
    s32 func_ov096_02297f6c(u32 a);
    s32 func_ov096_02298110(u32 a);
    void func_ov096_022980a0(u32 k, u32 x, u32 y);
    s32 func_ov096_02298008(u32 a);
    s32 func_ov096_0229806c(u32 a);
    BOOL func_ov096_022982f0(u32 a);
    BOOL func_ov096_022982e0(u32 a);
    BOOL func_ov096_022982d0(u32 a);
    BOOL func_ov096_022982c0(u32 a);
    s32 func_ov096_0229826c(u32 a);
    void func_ov096_02296bb8(u32 a);
    void func_ov096_02296d18();
    s32 func_ov096_02296c30(s32 a);
    s32 func_ov096_02296fb8();
    s32 func_ov096_02296c18();
    s32 func_ov096_022969bc(u16 *a, u32 b, u16 *c, u32 d);

    /* 0x91 */ u8 unk_91[0xb];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u16 unk_ac;
    /* 0xae */ u8 unk_ae[2];
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6[3];
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba[0x358 - 0xba];
    /* 0x358 */ u8 unk_358[0xdb8 - 0x358];
    /* 0xdb8 */ u8 unk_db8[0xde0 - 0xdb8];
    /* 0xde0 */ u8 unk_de0[0x23c0 - 0xde0];
    /* 0x23c0 */ u8 unk_23c0[0x2480 - 0x23c0];
    /* 0x2480 */ u8 unk_2480[0x2498 - 0x2480];
    /* 0x2498 */ u8 unk_2498[0x2b98 - 0x2498];
    /* 0x2b98 */ u8 unk_2b98[0x2c8c - 0x2b98];
    /* 0x2c8c */ u8 unk_2c8c[0x100];
};

static inline BOOL Unk_ov096_022979f0_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

s32 Unk_ov096_0229aea8::func_ov096_022971dc() {
    if (!func_ov096_02297170()) {
        func_ov096_0229865c();
        func_ov096_02298334(9, 0xff, 1);
        func_ov096_022972ec(1);
        return 0;
    }
    s32 r = func_ov096_0229652c(unk_ac);
    if (r == 0) {
        func_ov096_022972ec(1);
        return 0;
    }
    if (r == 1) {
        func_ov096_02297160();
        return 1;
    }
    if (r == 2) {
        func_ov002_02200a58(0x28);
        func_ov096_02294d9c(0x1000);
        return 0;
    }
    func_ov096_022972ec(1);
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_0229725c(u32 a) {
    s32 r;
    switch (unk_b1) {
    case 2:
        r = func_ov096_02298110(a);
        break;
    case 1:
        r = func_ov096_02297f6c(a);
        break;
    default:
        r = 0;
        break;
    }
    return r;
}

void Unk_ov096_0229aea8::func_ov096_02297284(u32 a) {
    switch (unk_b1) {
    case 1:
        func_02065e70(unk_2c8c, unk_2b98);
        func_ov096_022973cc(a);
        func_ov096_02297f3c(a, unk_2c8c);
        break;
    case 2: {
        u32 x = unk_ac;
        u32 y = unk_b0;
        func_ov096_022973a0(a);
        func_ov096_022980a0(a, x, y);
        break;
    }
    }
}

void Unk_ov096_0229aea8::func_ov096_022972ec(u32 f) {
    if (func_ov096_02297940(unk_b4) == 0) {
        func_ov096_02297358(unk_b4, f);
    } else if (unk_b9 != 0x26) {
        u32 a = func_ov096_02297b9c(unk_b9);
        u32 b = func_ov096_02297b48(unk_b9);
        func_ov096_02297358(unk_b9, 1);
        func_ov096_022980a0(unk_b4, a, b);
        unk_b9 = 0x26;
    }
}

void Unk_ov096_0229aea8::func_ov096_02297358(u32 k, u32 f) {
    switch (unk_b1) {
    case 1:
        func_ov096_02297f3c(k, unk_2b98);
        break;
    case 2:
        func_ov096_022980a0(k, unk_ac, unk_b0);
        break;
    }
    if (f != 0) {
        func_ov096_02297160();
    }
}

void Unk_ov096_0229aea8::func_ov096_022973a0(u32 a) {
    if (func_ov096_022982f0(a) || func_ov096_022982e0(a)) {
        func_ov096_02297460(a);
    }
}

void Unk_ov096_0229aea8::func_ov096_022973cc(u32 a) {
    if (func_ov096_022982f0(a)) {
        func_ov096_02297460(a);
    } else if (func_ov096_022982e0(a)) {
        func_ov096_0229741c(a);
    } else if (a == 0x25) {
        func_ov096_02297460(a);
        func_ov096_02296bb8(unk_ac);
    }
}

void Unk_ov096_0229aea8::func_ov096_0229741c(u32 a) {
    s32 r = func_ov096_02298008(a);
    unk_b1 = 1;
    void *p = func_ov094_0229433c(unk_db8, r);
    func_02065e70(unk_2b98, p);
    func_ov094_022942f4(unk_db8, r);
}

void Unk_ov096_0229aea8::func_ov096_02297460(u32 a) {
    unk_b1 = 2;
    unk_ac = func_ov096_02297b9c(a);
    unk_b0 = func_ov096_02297b48(a);
    func_ov096_0229806c(a);
    func_ov094_0229341c(unk_358, unk_ac, unk_b0);
    func_ov096_02296d18();
}

void Unk_ov096_0229aea8::func_ov096_022974b8(u32 a, u32 b) {
    unk_b1 = 2;
    unk_ac = a;
    unk_b0 = b;
    func_ov094_0229341c(unk_358, unk_ac, unk_b0);
    func_ov096_02296d18();
}

void Unk_ov096_0229aea8::func_ov096_022974f4() {
    unk_a4 = func_ov002_02202710(unk_2480);
    unk_a8 = func_ov002_02202708(unk_2480);
}

void Unk_ov096_0229aea8::func_ov096_0229751c() {
    unk_a4 = func_ov002_022028c8(unk_2498) - 2;
    unk_a8 = func_ov002_022028a0(unk_2498) - 4;
}

void Unk_ov096_0229aea8::func_ov096_02297548() {
    unk_a4 = unk_9c + data_021ef5f0;
    unk_a8 = unk_a0 + data_021ef5ec;
}

void Unk_ov096_0229aea8::func_ov096_02297574() {
    if (func_ov096_02294dbc(0x40) == 0) {
        if (unk_b1 != 0) {
            if (unk_b1 == 2) {
                func_ov094_0229313c(unk_358, unk_a4, unk_a8);
            } else if (unk_b1 == 1) {
                func_ov094_0229405c(unk_db8, unk_a4, unk_a8, unk_2b98);
            }
        }
    }
}

void Unk_ov096_0229aea8::func_ov096_022975d4() {
    if (func_ov096_022982f0(unk_b5) || func_ov096_022982e0(unk_b5)) {
        if (func_ov096_02297c10(unk_b5)) {
            func_ov002_022006b0(unk_23c0);
        } else {
            unk_b3 = unk_b5;
            func_ov002_022006b8(unk_23c0);
        }
    }
    if (func_ov096_022982d0(unk_b5) || func_ov096_022982c0(unk_b5)) {
        func_ov002_022006b0(unk_23c0);
    }
}

void Unk_ov096_0229aea8::func_ov096_02297658() {
    s32 x = func_ov096_02297d50(unk_b3) - 0x6d;
    s32 y = func_ov096_02297cc0(unk_b3) - 0x78;
    if (func_0206ef00()) {
        y -= 8;
    }
    func_02089ad8(unk_23c0, x, y);
    if (func_ov096_022982f0(unk_b3)) {
        s32 s = func_ov096_0229826c(unk_b3);
        func_ov094_02293638(unk_358, unk_23c0, s);
    } else if (func_ov096_022982e0(unk_b3)) {
        s32 s = func_ov096_02298008(unk_b3);
        func_ov094_02294420(unk_db8, unk_23c0, s);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_022976f8(s32 v) {
    if (data_021ef5c8 >= v) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov096_0229aea8::func_ov096_0229770c() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_02297750(u32 a) {
    if (func_ov096_022982f0(a)) {
        func_ov094_0229357c(unk_358, func_ov096_0229826c(a));
    } else if (func_ov096_022982e0(a)) {
        func_ov094_022943a4(unk_db8, func_ov096_02298008(a));
    } else if (func_ov096_022982c0(a)) {
        switch (a) {
        case 0x25:
            func_ov094_0229357c(unk_358, 0x21);
            break;
        case 0x22:
        case 0x23:
            func_ov094_0229248c(unk_de0, 0);
            break;
        case 0x24:
            func_ov094_0229248c(unk_de0, 1);
            break;
        }
    } else if (a == 0x21) {
        func_ov094_0229357c(unk_358, 0x22);
    }
}

void Unk_ov096_0229aea8::func_ov096_02297804() {
    func_ov094_0229358c(unk_358);
    func_ov094_022943b0(unk_db8);
    func_ov094_02292484(unk_de0);
}

void Unk_ov096_0229aea8::func_ov096_02297834(u32 a) {
    if (func_ov096_022982f0(a)) {
        s32 s = func_ov096_0229826c(a);
        func_ov094_022943f8(unk_db8);
        func_ov094_0229359c(unk_358, s);
    } else if (func_ov096_022982e0(a)) {
        s32 s = func_ov096_02298008(a);
        func_ov094_022935dc(unk_358);
        func_ov094_022943bc(unk_db8, s);
    } else {
        func_ov094_022935dc(unk_358);
        func_ov094_022943f8(unk_db8);
    }
}

void Unk_ov096_0229aea8::func_ov096_022978ac() {
    func_ov094_022935dc(unk_358);
    func_ov094_022943f8(unk_db8);
}

s32 Unk_ov096_0229aea8::func_ov096_022978d0(u32 a) {
    if (a == 2) {
        return 0;
    }
    if (a == 0) {
        return 1;
    }
    if (a == 1) {
        return func_ov096_02296c30(0);
    }
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_022978f8(u32 a) {
    if (a == 1) {
        return func_ov096_02297170();
    }
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_02297910(u32 a) {
    if (a == 0) {
        return 1;
    }
    if (a == 2) {
        return 0;
    }
    if (a == 1) {
        if (func_ov096_02296fb8() != 1) {
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 Unk_ov096_0229aea8::func_ov096_02297940(u32 a) {
    return func_ov096_022979f0(a, unk_ac, unk_b0);
}

s32 Unk_ov096_0229aea8::func_ov096_0229795c(u32 a, u32 b) {
    s32 r = func_ov096_022979f0(a, unk_ac, unk_b0);
    if (r == 0) {
        u16 t = func_ov096_02297b9c(a);
        if (t == 0xfff1) {
            return 0;
        }
        u32 v = func_ov096_02297b48(a);
        if (b == 0x25) {
            u16 t2 = unk_ac;
            r = func_ov096_022969bc(&t2, unk_b0, &t, v);
            if ((u32)(r - 2) <= 1) {
                return 6;
            }
            if (t == 0xfff1) {
                return 0;
            }
        }
        r = func_ov096_022979f0(b, t, v);
    }
    return r;
}

s32 Unk_ov096_0229aea8::func_ov096_022979f0(u32 a, u32 b, u32 c) {
    u16 tmp = 0xfff1;
    if (func_ov096_022982f0(a)) {
        return 0;
    }
    if (func_ov096_022982e0(a)) {
        if (func_ov096_02297c10(a)) {
            return 6;
        }
        if (c == 1) {
            return 5;
        }
        if (c == 2) {
            return 1;
        }
        void *p = func_ov096_02297b14(a);
        if (func_020655d0(p) != 0xfff1) {
            return 3;
        }
        s32 s = func_02065578(p);
        if (s == 7 || s == 8 || func_ov094_02292414(b)) {
            return 2;
        }
        if (func_ov094_022924c4(b)) {
            return 4;
        }
        tmp = b;
        if (Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd) && unk_b4 == 0x25) {
            return 5;
        }
        return 0;
    }
    if (a == 0x25) {
        if (c != 0) {
            return 6;
        }
        tmp = b;
        if (!Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd)) {
            return 6;
        }
        s32 t = 0x1869f - func_ov096_02296c18();
        if (t < func_0204be70(&tmp)) {
            return 6;
        }
        return 0;
    }
    switch (a) {
    case 0x24:
        return 6;
    }
    return 6;
}
