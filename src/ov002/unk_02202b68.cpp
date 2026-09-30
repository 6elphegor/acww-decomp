#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public Unk_020d9218 {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 flag);
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_020898c0();
    void func_02089924();
    void func_0208994c();
    void func_020899bc();
    void func_020899f0();
    void func_02089a1c();
    BOOL func_02089a24();
    BOOL func_02089a40();
    void func_02089a5c(s32 flag);
    void func_02089ab0(u8 v);
    void func_02089ab8();
    void func_02089ac0(StrBuf *src);
    void func_02089ad8(s32 a, s32 b);
    void func_02089ae0();
    void func_02089ae8();
    void func_02089af0();
    void func_02089af8();
    void func_02089b00();
    void func_02089b08();
    void func_02089b10();
    void func_02089508();
    void func_02089554();
    void func_02089588();
    void func_020896dc();
    void func_020897b0();
    s32 func_02089884();
    s32 func_0208989c();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ Unk_02089270 unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ u8 unk_58;
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ u8 unk_5a;
    /* 0x5b */ u8 unk_5b;
    /* 0x5c */ u8 unk_5c;
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ Unk_02050288 *unk_b0;
    /* 0xb4 */ Unk_02050288 *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d4fc_dummy();
    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d538(s32 idx);
    void func_0208d580(s32 idx);
    void func_0208d60c(s32 a, s32 b);
    void func_0208d63c();
    void func_0208d644();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ Unk_02089270 unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};


class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 flag);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d9a8();
    s32 func_0208d9d0();
    void func_0208d9d4(s32 idx);
    void func_0208da58(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

extern "C" {
void func_0200402c(u32 a);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_0200261c(char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void func_02002654(char *buf, void *h, s32 x);
void func_020026c4(char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
}
extern void *data_021f482c;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_ov002_0220444c[];
extern u8 data_ov002_02204440[];
extern u8 data_ov002_02204434[];
extern u8 data_ov002_022047cc[];
extern u8 data_ov002_022047fc[];
extern u8 data_ov002_022046fc[];
extern u8 data_ov002_022046e4[];
extern char data_ov002_02204660[];
extern char data_ov002_02204678[];
extern char data_ov002_02204690[];

class Unk_ov002_022027d0 {
public:
    Unk_ov002_022027d0();
    ~Unk_ov002_022027d0();
    void func_ov002_022027a4();

    /* 0x00 */ u32 unk_00;
};

class Unk_ov002_0220464c : public Unk_020e100c {
public:
    Unk_ov002_0220464c(BOOL flag);
    virtual ~Unk_ov002_0220464c();
    virtual void vfunc_0c();

    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    s32 func_ov002_022028c8();
    s32 func_ov002_022028a0();
    void func_ov002_02202a40(s32 x, s32 y);

    /* 0x4c */ Unk_ov002_022027d0 unk_4c;
};

class Unk_ov002_0220464c_Derived : public Unk_ov002_0220464c {
public:
    Unk_ov002_0220464c_Derived();
    virtual void vfunc_0c();
};

// ------------------------------------------------------------------------------------
void Unk_ov002_0220464c::func_ov002_02202b68() {
    switch (func_0208d534()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        func_0208d580(2);
        break;
    case 7:
    case 8:
    case 9:
        func_0208d580(8);
        break;
    case 13:
    case 14:
    case 15:
        func_0208d580(0xe);
        break;
    case 16:
    case 17:
    case 18:
        func_0208d580(0x11);
        break;
    case 4:
    case 5:
    case 6:
    case 10:
    case 11:
    case 12:
    default:
        func_0208d580(8);
        break;
    }
}

void Unk_ov002_0220464c::func_ov002_02202be0() {
    if (func_0208d534() == 1) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a + 0xc, b - 0x18);
    } else if (func_0208d534() == 7) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a - 4, b - 0x18);
    }
    func_ov002_02202d00(0xd);
}

void Unk_ov002_0220464c::func_ov002_02202c40() {
    if (func_0208d534() == 7) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a - 0x10, b);
    } else if (func_0208d534() == 0xd) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a - 0xc, b + 0x18);
    }
    func_ov002_02202d00(1);
}

void Unk_ov002_0220464c::func_ov002_02202ca0() {
    if (func_0208d534() == 1) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a + 0x10, b);
    } else if (func_0208d534() == 0xd) {
        s32 a = func_ov002_022028c8();
        s32 b = func_ov002_022028a0();
        func_ov002_02202a40(a + 4, b + 0x18);
    }
    func_ov002_02202d00(7);
}

void Unk_ov002_0220464c::func_ov002_02202d00(s32 idx) {
    if (idx != func_0208d534() || idx == 6 || idx == 0xc) {
        func_0208d580(idx);
    }
}

Unk_ov002_0220464c::~Unk_ov002_0220464c() {
}

Unk_ov002_0220464c::Unk_ov002_0220464c(BOOL flag) : Unk_020e100c(flag) {
    func_0208d580(0);
    unk_4c.func_ov002_022027a4();
    unk_28 = 0;
    func_0208d644();
}

extern "C" void func_ov002_02202dd4(s32 a, void *b) {
    void *h = data_021f482c;
    char buf[0x20];
    func_020639e8(buf, data_ov002_02204660, a);
    func_0200261c(buf, h, (s32)b, 0x10, 0x10, 0x74);
    func_020639e8(buf, data_ov002_02204678, a);
    func_02002654(buf, h, (s32)b);
    func_020639e8(buf, data_ov002_02204690, a, a);
    func_020026c4(buf, h, (s32)b, 0xc, 0xc, 0xe);
}

extern "C" void func_ov002_02202e48() { func_0200402c(0x33); }
extern "C" void func_ov002_02202e54() { func_0200402c(0x19); }

class Unk_ov002_022046b0 : public Unk_020e1028 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();

    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202ea8();
    s32 func_ov002_02202ebc();
    s32 func_ov002_02202ed0();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

s32 Unk_ov002_022046b0::func_ov002_02202e60() {
    s32 a, b;
    func_0208da58(&a, &b);
    s32 t = func_ov002_02202ea8();
    return b + t + 7;
}

s32 Unk_ov002_022046b0::func_ov002_02202e84() {
    s32 a, b;
    func_0208da58(&a, &b);
    s32 t = func_ov002_02202ebc();
    return a + t + 7;
}

s32 Unk_ov002_022046b0::func_ov002_02202ea8() {
    return unk_10 + func_02089f64();
}

s32 Unk_ov002_022046b0::func_ov002_02202ebc() {
    return unk_0c + func_02089f68();
}

s32 Unk_ov002_022046b0::func_ov002_02202ed0() {
    if (func_0208d9d0() == 3) {
        if (func_0208d9a8()) {
            func_ov002_02202f0c();
        }
    }
}

void Unk_ov002_022046b0::func_ov002_02202ef4() { func_0208d9d4(3); }
void Unk_ov002_022046b0::func_ov002_02202f00() { func_0208d9d4(2); }
void Unk_ov002_022046b0::func_ov002_02202f0c() { func_0208d9d4(1); }

BOOL Unk_ov002_022046b0::func_ov002_02202f18(s32 x, s32 y) {
    s32 dx = x - func_ov002_02202ebc();
    s32 dy = y - func_ov002_02202ea8();
    BOOL r;
    if (dx < 0 || dx > 0x10) {
        r = FALSE;
    } else if (dy < 0 || dy > 0x10) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

Unk_ov002_022046b0::~Unk_ov002_022046b0() {
}

Unk_ov002_022046b0::Unk_ov002_022046b0() : Unk_020e1028(0) {
    func_0208d9d4(0);
}

class Unk_ov002_02203ab8 {
public:
    void func_ov002_02203ab8();
    void func_ov002_02203ac4();
    void func_ov002_02203ad0();
    void func_ov002_02203adc();
    void func_ov002_02203ae8();
    void func_ov002_02203af4();
    void func_ov002_02203c0c();
    void func_ov002_02203cc4(s32 v);
    void func_ov002_02203cf8(void *p, s32 a, s32 b);

    /* 0x00 */ u32 unk_00[20];
};

class Unk_ov002_022039d8 : public Unk_020e0d98 {
public:
    void func_ov002_022039d8();
    void func_ov002_022039f8(s32 x, s32 a, s32 b);
};

class Unk_ov002_02202fac {
public:
    void func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
    s32 func_ov002_02203000(s32 idx);
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_0220306c();
    void func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    BOOL func_ov002_0220314c(s32 idx, s32 x, s32 y);
    void func_ov002_02203268();
    void func_ov002_02203274(s32 x);
    void func_ov002_022032b0(s32 x);
    void func_ov002_022032ec(s32 x);
    void func_ov002_02203328();
    void func_ov002_02203370(s32 x);
    void func_ov002_022033ac();
    void func_ov002_022033ec(s32 x);
    void func_ov002_02203458(s32 x);

    /* 0x000 */ u32 unk_00;
    /* 0x004 */ Unk_ov002_02203ab8 unk_04[2];
    /* 0x0a4 */ Unk_ov002_022039d8 unk_a4;
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 unk_161;
};

void Unk_ov002_02202fac::func_ov002_02202fac(s32 idx) {
    unk_04[func_ov002_02203000(idx)].func_ov002_02203ab8();
}

void Unk_ov002_02202fac::func_ov002_02202fc8(s32 idx) {
    unk_04[func_ov002_02203000(idx)].func_ov002_02203ac4();
}

void Unk_ov002_02202fac::func_ov002_02202fe4(s32 idx) {
    unk_04[func_ov002_02203000(idx)].func_ov002_02203ad0();
}

s32 Unk_ov002_02202fac::func_ov002_02203000(s32 idx) {
    if (idx == -1) {
        idx = unk_161;
    }
    return data_ov002_0220444c[idx];
}

void Unk_ov002_02202fac::func_ov002_0220301c() {
    unk_a4.func_02089b08();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].func_ov002_02203adc();
    }
}

void Unk_ov002_02202fac::func_ov002_02203044() {
    unk_a4.func_02089b10();
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].func_ov002_02203ae8();
    }
}

void Unk_ov002_02202fac::func_ov002_0220306c() {
    unk_04[func_ov002_02203000(-1)].func_ov002_02203c0c();
}

void Unk_ov002_02202fac::func_ov002_0220308c() {
    unk_04[func_ov002_02203000(-1)].func_ov002_02203af4();
}

void Unk_ov002_02202fac::func_ov002_022030ac(u8 v) {
    unk_161 = v;
}

s32 Unk_ov002_02202fac::func_ov002_022030b8(s32 idx) {
    if (idx == -1) {
        idx = unk_161;
    }
    s32 v = data_ov002_02204440[idx];
    switch (unk_160) {
    case 8:
        v -= 0x1e;
        break;
    case 0xc:
        v -= 0x20;
        break;
    case 0xd:
        v -= 0xe;
        break;
    }
    return v;
}

s32 Unk_ov002_02202fac::func_ov002_022030f4(s32 idx) {
    if (idx == -1) {
        idx = unk_161;
    }
    return data_ov002_02204434[idx];
}

BOOL Unk_ov002_02202fac::func_ov002_02203110(s32 idx) {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    switch (unk_160) {
    case 8:
        y += 0x1e;
        break;
    case 0xc:
        y += 0x20;
        break;
    case 0xd:
        y += 0xe;
        break;
    }
    return func_ov002_0220314c(idx, x, y);
}

BOOL Unk_ov002_02202fac::func_ov002_0220314c(s32 idx, s32 x, s32 y) {
    switch (idx) {
    case 1:
        if (x >= 0xc0 && y >= 0x95 && y < 0xa5) {
            return TRUE;
        }
        return FALSE;
    case 2:
        if (x >= 0xc0 && y >= 0xa9 && y < 0xb9) {
            return TRUE;
        }
        return FALSE;
    case 0:
        if (x >= 0x52 && x <= 0xba && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x38 && x <= 0x68) {
            return TRUE;
        }
        return FALSE;
    case 4:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x98 && x <= 0xc8) {
            return TRUE;
        }
        return FALSE;
    case 5:
        if (y >= 0xac && y <= 0xc0 && x >= 0 && x <= 0x40) {
            return TRUE;
        }
        return FALSE;
    case 6:
        if (y >= 0xac && y <= 0xc0 && x >= 0xc0 && x <= 0x100) {
            return TRUE;
        }
        return FALSE;
    case 7:
        if (y >= 0xac && y <= 0xc0 && x >= 0x78 && x <= 0xb8) {
            return TRUE;
        }
        return FALSE;
    case 8:
        if (x >= 0x6a && x <= 0xbc && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 9:
        if (x >= 0xc0 && y >= 0 && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    default:
        return FALSE;
    }
}

void Unk_ov002_02202fac::func_ov002_02203268() {
    unk_a4.func_02089ae8();
}

void Unk_ov002_02202fac::func_ov002_02203274(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 0x12);
    unk_a4.func_02089ae8();
    func_ov002_022033ac();
    unk_160 = 0xd;
}

void Unk_ov002_02202fac::func_ov002_022032b0(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 0x2a);
    unk_a4.func_02089ae8();
    func_ov002_022033ac();
    unk_160 = 0xc;
}

void Unk_ov002_02202fac::func_ov002_022032ec(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 0x22);
    unk_a4.func_02089ae0();
    func_ov002_022033ac();
    unk_160 = 0xb;
}

void Unk_ov002_02202fac::func_ov002_02203328() {
    unk_04[0].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[0].func_ov002_02203cc4(0x15);
    unk_04[1].func_ov002_02203cf8(data_ov002_022047fc, 6, 2);
    unk_04[1].func_ov002_02203cc4(0x19);
    unk_160 = 0xa;
}

void Unk_ov002_02202fac::func_ov002_02203370(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 4);
    unk_a4.func_02089ae0();
    func_ov002_022033ac();
    unk_160 = 9;
}

void Unk_ov002_02202fac::func_ov002_022033ac() {
    unk_04[0].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[0].func_ov002_02203cc4(4);
    unk_04[1].func_ov002_02203cf8(data_ov002_022047fc, 6, 2);
    unk_04[1].func_ov002_02203cc4(0x13);
}

void Unk_ov002_02202fac::func_ov002_022033ec(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 0x11);
    unk_a4.func_02089ae0();
    unk_04[0].func_ov002_02203cf8(data_ov002_022046fc, 4, 1);
    unk_04[0].func_ov002_02203cc4(4);
    unk_04[1].func_ov002_02203cf8(data_ov002_022046e4, 4, 1);
    unk_04[1].func_ov002_02203cc4(0x13);
    unk_160 = 8;
}

void Unk_ov002_02202fac::func_ov002_02203458(s32 x) {
    unk_a4.func_ov002_022039d8();
    unk_a4.func_ov002_022039f8(x, 0x80, 4);
    unk_a4.func_02089ae0();
    unk_04[0].func_ov002_02203cf8(data_ov002_022046fc, 4, 1);
    unk_04[0].func_ov002_02203cc4(4);
    unk_04[1].func_ov002_02203cf8(data_ov002_022046e4, 4, 1);
    unk_04[1].func_ov002_02203cc4(0x13);
    unk_160 = 7;
}
