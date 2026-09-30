#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_ov125_022983c4[];
extern u8 data_ov125_022983d0[];
s32 func_0200402c(s32 a);
void func_0206ed2c(u32 a);
void func_0206ecf8(u32 a);
s32 func_0206ed50();
BOOL func_0206ef00();
BOOL func_0206ef0c();
BOOL func_0208d534(void *p);
void func_0208d538(void *p, u32 a);
s32 func_0209750c();
s32 func_020986d4(s32 a);
s32 func_02071c68(s32 a, u32 b);
s32 func_02071e04(s32 a);
s32 func_02071f5c(s32 a, void *b);
s32 func_02062510(void *p);
s32 func_020624c0(void *p);
s32 func_02089f44(void *p);
s32 func_02089f30(void *p);
s32 func_02089ad8(void *p, s32 a, s32 b);
s32 func_02089ac0(void *p, void *q);
s32 func_02050ff8(void *p, void *q);
void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, u32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 i);
u32 func_ov002_02201a70(void *p);
void func_ov002_02201700(void *p, u32 a, u32 b);
void func_ov002_022016e4(void *p, u32 a);
void func_ov002_0220160c(void *p, void *q, u32 a);
void func_ov002_02202278(void *p, s32 a, s32 b);
void func_ov002_02202098(void *p, u32 a);
void func_ov002_022006e4(void *p, u32 a);
void func_ov002_022006b8(void *p);
BOOL func_ov002_02203110(void *p, u32 a);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, u32 a);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
}

class Unk_ov125_sub_02202454 {
public:
    ~Unk_ov125_sub_02202454();
    u32 unk_00[0x300 / 4];
};
class Unk_ov125_sub_022007e8 {
public:
    ~Unk_ov125_sub_022007e8();
    u32 unk_00[0xc0 / 4];
};
class Unk_ov125_sub_02202640 {
public:
    virtual ~Unk_ov125_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};
class Unk_ov125_sub_02203968 {
public:
    ~Unk_ov125_sub_02203968();
    u32 unk_00[0x10 / 4];
};
// ov124 class (see ov124_000), size 0x94
class Unk_ov124_02296840 {
public:
    ~Unk_ov124_02296840();
    u32 unk_00[0x94 / 4];
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

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200980();

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

// Vtable 0x02298478
class Unk_ov125_02298478 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov125_02298478();

    void func_ov125_0229710c(u32 mask);
    void func_ov125_0229711c(u32 mask);
    BOOL func_ov125_0229712c(u32 mask);
    BOOL func_ov125_02297144(void *pad);
    BOOL func_ov125_02297228(u32 lo, u32 hi, u32 to);
    BOOL func_ov125_02297250(u32 lo, u32 hi, u32 to);
    BOOL func_ov125_02297278(u32 lo, u32 hi);
    BOOL func_ov125_022972ac(u32 lo, u32 hi);
    void func_ov125_022972e8();
    void func_ov125_02297308();
    void func_ov125_02297354();
    void func_ov125_02297388();
    void func_ov125_022973ec();
    void func_ov125_02297440();
    void func_ov125_022974b8();
    s32 func_ov125_022974dc();
    s32 func_ov125_022974f4();
    void func_ov125_0229753c();
    void func_ov125_02297590();
    void func_ov125_022975e4();
    u32 func_ov125_02297644(u32 i);
    void func_ov125_02297650();
    void func_ov125_022976c4();
    void func_ov125_022976fc();
    u32 func_ov125_02297784();
    s32 func_ov125_02297800(u32 i);
    s32 func_ov125_0229780c(u32 i);
    void func_ov125_02297818();
    void func_ov125_02297858();
    void func_ov125_02297878();
    void func_ov125_022978a4();
    void func_ov125_022978bc();
    void func_ov125_02297920();
    void func_ov125_02297940();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ Unk_ov124_02296840 unk_94;
    /* 0x128 */ Unk_ov125_sub_02202454 unk_128;
    /* 0x428 */ Unk_ov125_sub_022007e8 unk_428;
    /* 0x4e8 */ Unk_ov125_sub_02202640 unk_4e8;
    /* 0x54c */ Unk_ov125_sub_02203968 unk_54c;
    /* 0x55c */ u8 unk_55c[0x158];
    /* 0x6b4 */ u16 unk_6b4;
    /* 0x6b6 */ u8 unk_6b6;
    /* 0x6b7 */ u8 unk_6b7;
    /* 0x6b8 */ u8 unk_6b8;
    /* 0x6b9 */ u8 unk_6b9;
    /* 0x6ba */ u8 unk_6ba;
    /* 0x6bb */ u8 unk_6bb;
};

// ---------------------------------------------------------------------------------------------

Unk_ov125_02298478::~Unk_ov125_02298478() {}

void Unk_ov125_02298478::func_ov125_0229710c(u32 mask) { unk_6b4 = unk_6b4 & ~mask; }

void Unk_ov125_02298478::func_ov125_0229711c(u32 mask) { unk_6b4 = unk_6b4 | mask; }

BOOL Unk_ov125_02298478::func_ov125_0229712c(u32 mask) {
    if (unk_6b4 & mask) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297144(void *pad) {
    u32 prev = unk_6b8;
    func_ov125_0229710c(0xc);
    if (func_ov002_0220126c(pad)) {
        if (!func_ov125_02297278(0, 3)) {
            func_ov125_02297278(4, 7);
        }
    } else if (func_ov002_0220125c(pad)) {
        if (!func_ov125_022972ac(0, 3)) {
            func_ov125_022972ac(4, 7);
        }
    }
    if (!func_ov125_0229712c(0xc)) {
        if (func_ov002_0220128c(pad)) {
            if (!func_ov125_02297250(4, 7, 0)) {
                if (unk_6b8 == 8) {
                    unk_6b8 = 7;
                    func_ov002_02202c40(&unk_4e8);
                }
            }
        } else if (func_ov002_0220127c(pad)) {
            if (!func_ov125_02297228(0, 3, 4)) {
                u32 t = unk_6b8;
                if (t >= 4 && t <= 7) {
                    unk_6b8 = 8;
                    func_ov002_02202ca0(&unk_4e8);
                }
            }
        }
    }
    if (prev != unk_6b8) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297228(u32 lo, u32 hi, u32 to) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        unk_6b8 = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297250(u32 lo, u32 hi, u32 to) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        unk_6b8 = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_02297278(u32 lo, u32 hi) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        if (v == lo) {
            unk_6b8 = hi;
            func_ov125_0229711c(4);
        } else {
            unk_6b8 = v - 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov125_02298478::func_ov125_022972ac(u32 lo, u32 hi) {
    u32 v = unk_6b8;
    if (v >= lo && v <= hi) {
        if (v == hi) {
            func_ov125_0229711c(8);
            unk_6b8 = lo;
        } else {
            unk_6b8 = v + 1;
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_ov125_02298478::func_ov125_022972e8() {
    func_ov002_02202a78(&unk_4e8);
    unk_4e8.vfunc_0c();
}

void Unk_ov125_02298478::func_ov125_02297308() {
    unk_6ba = 0;
    s32 a = func_ov002_022014a4(&unk_128);
    s32 b = func_ov002_02201498(&unk_128, unk_6ba);
    func_ov002_02202a40(&unk_4e8, a, b);
    func_ov002_02202d00(&unk_4e8, 7);
}

void Unk_ov125_02298478::func_ov125_02297354() {
    s32 a = func_ov125_022974f4();
    s32 b = func_ov125_022974dc();
    func_ov002_02202a40(&unk_4e8, a, b);
    func_ov002_02202d00(&unk_4e8, 1);
}

void Unk_ov125_02298478::func_ov125_02297388() {
    unk_6b9 = 1;
    unk_6ba = func_ov002_02201a70(&unk_128);
    s32 a = func_ov002_022014a4(&unk_128);
    s32 b = func_ov002_02201498(&unk_128, unk_6ba);
    func_ov002_02202a40(&unk_4e8, a, b);
    func_0208d538(&unk_4e8, 8);
    func_ov002_02200a58(8);
}

void Unk_ov125_02298478::func_ov125_022973ec() {
    s32 a = func_ov002_022014a4(&unk_128);
    s32 b = func_ov002_02201498(&unk_128, unk_6ba);
    func_ov002_02202a18(&unk_4e8, a, b, 2);
    unk_6bb = unk_8d;
    func_ov002_02200a58(5);
}

void Unk_ov125_02298478::func_ov125_02297440() {
    if (func_ov125_0229712c(2)) {
        s32 a = func_ov125_022974f4();
        s32 b = func_ov125_022974dc();
        func_ov002_02202a40(&unk_4e8, a, b);
        func_ov125_0229710c(2);
    } else {
        s32 a = func_ov125_022974f4();
        s32 b = func_ov125_022974dc();
        func_ov002_022029e8(&unk_4e8, a, b, 3, 1);
        unk_6bb = unk_8d;
        func_ov002_02200a58(5);
    }
}

void Unk_ov125_02298478::func_ov125_022974b8() {
    func_ov002_02202d00(&unk_4e8, 0);
    unk_4e8.vfunc_0c();
}

s32 Unk_ov125_02298478::func_ov125_022974dc() { return func_ov125_02297800(unk_6b8) - 0xb; }

s32 Unk_ov125_02298478::func_ov125_022974f4() {
    s32 t = func_ov125_0229780c(unk_6b8);
    if (func_ov125_0229712c(8)) {
        t += 0x100;
    } else if (func_ov125_0229712c(4)) {
        t -= 0x100;
    }
    t += 0xb;
    return t;
}

void Unk_ov125_02298478::func_ov125_0229753c() {
    s32 a = func_ov125_022974f4();
    s32 b = func_ov125_022974dc();
    func_ov002_02202a40(&unk_4e8, a, b);
    if (unk_6b8 == 8) {
        func_ov002_02202d00(&unk_4e8, 7);
    } else {
        func_ov002_02202d00(&unk_4e8, 1);
    }
    func_ov125_022972e8();
}

void Unk_ov125_02298478::func_ov125_02297590() {
    switch (unk_6b9) {
    case 0:
        func_0206ed2c(unk_6b7);
        func_0206ecf8(1);
        unk_8c = 3;
        func_ov002_022006e4(&unk_428, 1);
        func_ov002_02200a60(1);
        break;
    case 1:
    default:
        func_ov125_02297858();
        break;
    }
}

void Unk_ov125_02298478::func_ov125_022975e4() {
    func_ov002_0220160c(&unk_128, (u8 *)this + 0x41c, 0);
    s32 a = func_ov125_0229780c(unk_6b7) - 0x18;
    s32 b = func_ov125_02297800(unk_6b7) - 0x10;
    func_ov002_02202278(&unk_128, a, b);
    func_ov002_02202098(&unk_128, 0);
    func_ov002_02200a58(7);
}

u32 Unk_ov125_02298478::func_ov125_02297644(u32 i) { return *((u8 *)this + i + 0x421); }

void Unk_ov125_02298478::func_ov125_02297650() {
    func_ov002_022016e4((u8 *)this + 0x41c, 1);
    switch (func_0206ed50()) {
    case 5:
    case 8:
    case 9:
        func_ov002_02201700((u8 *)this + 0x41c, 0x91, 0);
        break;
    case 4:
    case 7:
    case 10:
        func_ov002_02201700((u8 *)this + 0x41c, 0x72, 0);
        break;
    default:
        func_ov002_02201700((u8 *)this + 0x41c, 0x28, 0);
        break;
    }
    func_ov002_02201700((u8 *)this + 0x41c, 2, 1);
}

void Unk_ov125_02298478::func_ov125_022976c4() {
    u32 v = unk_6b8;
    if (v <= 7) {
        unk_6b6 = v;
        func_ov002_022006b8(&unk_428);
    } else {
        func_ov002_022006e4(&unk_428, 1);
    }
}

void Unk_ov125_02298478::func_ov125_022976fc() {
    u8 a[0x20];
    u8 b[0x28];
    s32 x = func_ov125_02297800(unk_6b6);
    x -= 0x84;
    if (func_0206ef00()) {
        x -= 0xa;
    }
    func_02089ad8(&unk_428, func_ov125_0229780c(unk_6b6) - 0x78, x);
    func_02062510(a);
    func_02071f5c(func_02071e04(func_02071c68(func_020986d4(func_0209750c()), unk_6b6)), a);
    func_02089f44(b);
    func_02050ff8(b, a);
    func_02089ac0(&unk_428, b);
    func_02089f30(b);
    func_020624c0(a);
}

u32 Unk_ov125_02298478::func_ov125_02297784() {
    u8 i;
    if (func_ov002_02203110(&unk_54c, 9)) {
        return 8;
    }
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    s32 xlo = x - 0x10;
    s32 xhi = x + 0x10;
    s32 ylo = y - 0x10;
    s32 yhi = y + 0x10;
    for (i = 0; i < 8; i++) {
        s32 a = func_ov125_0229780c(i);
        if (xlo < a && a < xhi) {
            s32 b = func_ov125_02297800(i);
            if (ylo < b && b < yhi) {
                return i;
            }
        }
    }
    return 9;
}

s32 Unk_ov125_02298478::func_ov125_02297800(u32 i) { return data_ov125_022983d0[i] - 0x10; }

s32 Unk_ov125_02298478::func_ov125_0229780c(u32 i) { return data_ov125_022983c4[i]; }

void Unk_ov125_02298478::func_ov125_02297818() {
    func_ov125_022974b8();
    func_ov002_022006e4(&unk_428, 1);
    func_ov125_0229711c(0x10);
    unk_8c = 3;
    func_0206ecf8(0);
    func_ov002_02200a60(1);
    func_0200402c(0x28);
}

void Unk_ov125_02298478::func_ov125_02297858() {
    if (func_0206ef0c()) {
        func_ov125_022978a4();
    } else {
        func_ov125_02297878();
    }
}

void Unk_ov125_02298478::func_ov125_02297878() {
    unk_6b6 = 9;
    func_ov125_0229753c();
    func_ov002_02200980();
    func_ov125_022976c4();
    func_ov002_02200a58(2);
}

void Unk_ov125_02298478::func_ov125_022978a4() {
    func_ov125_022974b8();
    func_ov002_02200a58(0);
}

void Unk_ov125_02298478::func_ov125_022978bc() {
    if (func_ov002_0220308c(&unk_54c)) {
        if (func_0208d534(&unk_4e8)) {
            s32 a = func_ov002_0220306c(&unk_54c);
            s32 b = func_ov002_022030f4(&unk_54c, -1);
            s32 c = func_ov002_022030b8(&unk_54c, -1);
            func_ov002_02202a40(&unk_4e8, a + b, a + c);
        }
    } else {
        func_ov125_02297818();
    }
}

void Unk_ov125_02298478::func_ov125_02297920() {
    if (func_ov002_022017a4(&unk_128)) {
        func_ov125_02297590();
    }
}

void Unk_ov125_02298478::func_ov125_02297940() {
    if (func_ov002_02201a28(&unk_128)) {
        func_ov002_02202064(&unk_128, 0);
        if (func_0208d534(&unk_4e8)) {
            func_ov125_02297354();
        }
        func_ov002_02200a58(9);
    }
}
