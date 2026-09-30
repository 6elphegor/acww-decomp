#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u16 data_021f47d8[];
void func_0200402c(u32 v);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
void func_02094860();
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022029e8(void *p, s32 a, s32 b, u32 c, u32 d);
void func_ov002_02202d00(void *p, u32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov095_022953c0(void *s, s32 a);
void func_ov095_02295340(void *s, s32 a);
void func_ov095_022942c0(void *s);
void func_ov095_02294250(void *s, s32 a);
void func_ov095_02294358(void *s, s32 a);
s32 func_ov095_02294648(void *s, s32 a, s32 b, s32 c);
s32 func_ov095_02292580(void *s);
s32 func_ov095_02292544(void *s);
void func_ov095_022924f0(void *s);
BOOL func_ov095_02295440(void *s, s32 i);
void func_ov095_02294d40(void *s, s32 i);
void func_ov095_02293da8(void *s);
void func_ov095_02294318(void *s);
s32 func_ov095_02292404(void *s);
s32 func_ov095_02294864(void *s, s32 a, u32 b);
s32 func_ov095_02294a44(void *s, s32 a, s32 b);
s32 func_ov095_02295194(void *s);
u8 func_ov095_02293f2c(void *s, void *buf, u32 a, u32 b, u32 c, void *d);
void func_ov095_02293dc0(void *s);
BOOL func_ov095_022939f8(void *s);
s32 func_ov095_02293dc8(void *s, u32 a, u32 b);
BOOL func_ov095_0229423c(void *s, u32 a);
void func_ov095_02293938(void *s, u32 a);
BOOL func_ov095_02295264(void *s);
BOOL func_ov095_02295258(void *s);
}

class Unk_ov111_sub_020e0488 {
public:
    ~Unk_ov111_sub_020e0488();
    u32 unk_00[0x40 / 4];
};

class Unk_ov111_sub_020d917c {
public:
    ~Unk_ov111_sub_020d917c();
    u32 unk_00[0x34 / 4];
};

class Unk_ov111_sub_022043e8 {
public:
    ~Unk_ov111_sub_022043e8();
    u32 unk_00[0x108 / 4];
};

class Unk_ov111_sub_02202640 {
public:
    virtual ~Unk_ov111_sub_02202640();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

// Message buffer (see src/main/unk_0206c714.cpp / src/ov045/unk_02258de0.cpp)
class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    u8 unk_04[10];
};

// vtable 0x02298a30, data at +0xe, 0x20 bytes
class Unk_ov111_02298a30 : public Unk_020e2a60 {
public:
    virtual ~Unk_ov111_02298a30() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_0e[0x20];
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

enum Unk_ov111_022970cc_Status { UNK_OV111_ST_0 = 0, UNK_OV111_ST_1 = 1, UNK_OV111_ST_2 = 2, UNK_OV111_ST_3 = 3 };

// Vtable 0x02298a48
class Unk_ov111_02298a48 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov111_02298a48();

    void func_ov111_02296958(u32 mask);
    void func_ov111_02296968(u32 mask);
    BOOL func_ov111_02296978(u32 mask);
    void func_ov111_0229698c();
    void func_ov111_02296a24();
    void func_ov111_02296a30(u32 a);
    void func_ov111_02296a44();
    void func_ov111_02296a6c();
    void func_ov111_02296a8c();
    void func_ov111_02296aac();
    void func_ov111_02296b04();
    void func_ov111_02296b78();
    void func_ov111_02296b9c();
    BOOL func_ov111_02296bec();
    BOOL func_ov111_02296c28();
    BOOL func_ov111_02296c88();
    BOOL func_ov111_02296cf0();
    BOOL func_ov111_02296d4c();
    s32 func_ov111_02296dd0(void *pad);
    void func_ov111_02296e64();
    BOOL func_ov111_02296e7c();
    u32 func_ov111_02296ea4();
    void func_ov111_02296ec0();
    void func_ov111_02296ef0();
    void func_ov111_02296f34(u32 v);
    void func_ov111_02296f58();
    BOOL func_ov111_02296f9c();
    BOOL func_ov111_02296ffc();
    BOOL func_ov111_02297044();
    s32 func_ov111_02297070();
    s32 func_ov111_022970cc(u32 x);

    // out-of-range callees (declarations only)
    void func_ov111_02297224();
    void func_ov111_02297230();
    void func_ov111_022972fc();
    void func_ov111_022973a0();
    void func_ov111_0229741c();
    void func_ov111_02297498();
    BOOL func_ov111_02297558(Unk_ov111_022970cc_Status s);
    s32 func_ov111_022975ec(u8 v);
    void func_ov111_02297650();
    void func_ov111_022976bc();
    void func_ov111_02297bb0(u32 a, Unk_ov111_022970cc_Status s);
    void func_ov111_02297bec();
    void func_ov111_0229844c(u32 a, u32 b);

    /* 0x91 */ u8 unk_91[7];
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ u8 unk_9b;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6[6];
    /* 0xac */ u8 unk_ac[0x23e8 - 0xac];
    /* 0x23e8 */ Unk_ov111_sub_020e0488 unk_23e8[2];
    /* 0x2468 */ u8 unk_2468[0x3c68 - 0x2468];
    /* 0x3c68 */ Unk_ov111_sub_020d917c unk_3c68;
    /* 0x3c9c */ Unk_ov111_02298a30 unk_3c9c;
    /* 0x3ccc */ Unk_ov111_sub_02202640 unk_3ccc;
    /* 0x3d30 */ Unk_ov111_sub_022043e8 unk_3d30;
};

// ---------------------------------------------------------------------------------------------

Unk_ov111_02298a48::~Unk_ov111_02298a48() {}

u32 Unk_ov111_02298a30::vfunc_08() { return 0x20; }
u8 *Unk_ov111_02298a30::vfunc_0c() { return (u8 *)this + 0xe; }

void Unk_ov111_02298a48::func_ov111_02296958(u32 mask) { unk_a4 = unk_a4 & ~mask; }

void Unk_ov111_02298a48::func_ov111_02296968(u32 mask) { unk_a4 = unk_a4 | mask; }

BOOL Unk_ov111_02298a48::func_ov111_02296978(u32 mask) {
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov111_02298a48::func_ov111_0229698c() {
    func_ov095_022953c0(unk_ac, 0);
    if (func_ov111_02296e7c()) {
        func_ov095_02295340(unk_ac, 0xb);
    } else {
        func_ov095_022953c0(unk_ac, 0xb);
    }
    if (func_ov111_02296978(8)) {
        func_ov095_02295340(unk_ac, 0xc);
    } else {
        func_ov095_022953c0(unk_ac, 0xc);
    }
    if (func_ov111_02296e7c()) {
        func_ov095_022942c0(unk_ac);
        func_ov095_02295340(unk_ac, 6);
    } else if (unk_9e == 0) {
        func_ov095_022942c0(unk_ac);
    } else {
        func_ov095_02294250(unk_ac, func_ov111_02296ea4());
    }
}

void Unk_ov111_02298a48::func_ov111_02296a24() { func_ov095_02294358(unk_ac, 6); }

void Unk_ov111_02298a48::func_ov111_02296a30(u32 a) { func_ov095_02294648(unk_ac, a, 6, 1); }

void Unk_ov111_02298a48::func_ov111_02296a44() {
    func_ov002_02202a78(&unk_3ccc);
    unk_3ccc.vfunc_0c();
    func_ov002_02200a58(3);
}

void Unk_ov111_02298a48::func_ov111_02296a6c() {
    func_ov002_02202af0(&unk_3ccc);
    func_ov002_02200a58(7);
}

void Unk_ov111_02298a48::func_ov111_02296a8c() {
    func_ov002_02202b68(&unk_3ccc);
    func_ov002_02200a58(5);
}

void Unk_ov111_02298a48::func_ov111_02296aac() {
    if (func_ov111_02296978(2)) {
        func_ov002_02202a40(&unk_3ccc, unk_a1 + 0x18, 0x28);
    } else {
        s32 a = func_ov095_02292580(unk_ac);
        s32 b = func_ov095_02292544(unk_ac);
        func_ov002_02202a40(&unk_3ccc, a, b);
    }
    unk_3ccc.vfunc_0c();
}

void Unk_ov111_02298a48::func_ov111_02296b04() {
    if (func_ov111_02296978(2)) {
        func_ov002_022029e8(&unk_3ccc, unk_a1 + 0x18, 0x28, 3, 1);
        unk_98 = 9;
    } else {
        s32 a = func_ov095_02292580(unk_ac);
        s32 b = func_ov095_02292544(unk_ac);
        func_ov002_022029e8(&unk_3ccc, a, b, 2, 1);
        unk_98 = 3;
    }
    func_ov002_02200a58(4);
}

void Unk_ov111_02298a48::func_ov111_02296b78() {
    func_ov002_02202d00(&unk_3ccc, 0);
    unk_3ccc.vfunc_0c();
}

void Unk_ov111_02298a48::func_ov111_02296b9c() {
    func_ov111_02296958(2);
    func_ov095_022924f0(unk_ac);
    s32 a = func_ov095_02292580(unk_ac);
    s32 b = func_ov095_02292544(unk_ac);
    func_ov002_02202a40(&unk_3ccc, a, b);
    func_ov002_02202d00(&unk_3ccc, 1);
    func_ov111_02296a44();
}

BOOL Unk_ov111_02298a48::func_ov111_02296bec() {
    if ((data_021f47d8[1] & 8) == 0) {
        return FALSE;
    }
    if (func_ov111_02296ffc()) {
        func_ov111_02296b78();
        func_ov002_02200a58(0xd);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296c28() {
    if ((data_021f47d8[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(unk_ac, 0xb)) {
        return FALSE;
    }
    func_ov111_022970cc(0x118);
    func_ov095_02294d40(unk_ac, 0xdb);
    unk_98 = unk_8d;
    func_ov002_02200a58(0xb);
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296c88() {
    if ((data_021f47d8[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(unk_ac, 0xc)) {
        return FALSE;
    }
    func_ov111_022970cc(0x119);
    func_ov095_02294d40(unk_ac, 0xdc);
    func_ov111_02296aac();
    unk_98 = unk_8d;
    func_ov002_02200a58(0xc);
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296cf0() {
    if ((data_021f47d8[1] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(unk_ac);
    if (func_ov111_02297558(UNK_OV111_ST_0)) {
        func_ov095_02294318(unk_ac);
        unk_98 = unk_8d;
        func_ov002_02200a58(8);
    } else {
        func_ov111_0229844c(7, 0);
    }
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296d4c() {
    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    s32 r4 = func_ov095_02292404(unk_ac);
    if (r4 == -1) {
        return FALSE;
    }
    if (func_ov095_02294864(unk_ac, r4, 8) == 0x106) {
        if (func_ov111_02296ffc()) {
            func_ov002_02202b68(&unk_3ccc);
            func_ov002_02200a58(0xd);
            return TRUE;
        }
        return FALSE;
    }
    func_ov095_02294d40(unk_ac, r4);
    func_ov111_02296a8c();
    return TRUE;
}

s32 Unk_ov111_02298a48::func_ov111_02296dd0(void *pad) {
    if (pad == 0) {
        return 0;
    }
    if (func_ov002_0220126c(pad)) {
        if (*(volatile u8 *)&unk_9e != 0) {
            unk_9e = *(volatile u8 *)&unk_9e - 1;
            return 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (*(volatile u8 *)&unk_9e + 1 <= func_020512e0(unk_3c9c.unk_0e, 0x20)) {
            unk_9e = *(volatile u8 *)&unk_9e + 1;
            return 1;
        }
        return 4;
    }
    if (func_ov002_0220128c(pad)) {
        return 2;
    }
    if (func_ov002_0220127c(pad)) {
        return 3;
    }
    return 0;
}

void Unk_ov111_02298a48::func_ov111_02296e64() {
    unk_9f = 0;
    unk_a0 = 0;
    func_ov111_02296958(1);
}

BOOL Unk_ov111_02298a48::func_ov111_02296e7c() {
    if (!func_ov111_02296978(1) || unk_9f == unk_a0) {
        return FALSE;
    }
    return TRUE;
}

u32 Unk_ov111_02298a48::func_ov111_02296ea4() {
    if (unk_9e == 0) {
        return 0;
    }
    return unk_3c9c.unk_0e[unk_9e - 1];
}

void Unk_ov111_02298a48::func_ov111_02296ec0() {
    unk_a1 = func_02051348(unk_3c9c.unk_0e, unk_9e);
    unk_9c = 0x10;
    func_ov111_0229698c();
}

void Unk_ov111_02298a48::func_ov111_02296ef0() {
    unk_a1 = func_ov095_02293f2c(unk_ac, unk_3c9c.unk_0e, 0x20, 0xa0, unk_a1, &unk_9e);
    unk_9c = 0x10;
    func_ov111_0229698c();
}

void Unk_ov111_02298a48::func_ov111_02296f34(u32 v) {
    unk_a1 = v - 0x18;
    func_ov111_02296ef0();
    func_ov095_02293dc0(unk_ac);
    func_ov111_022976bc();
}

void Unk_ov111_02298a48::func_ov111_02296f58() {
    s32 v = data_021ef5f0;
    if (v < 0x18) {
        v = 0x18;
    }
    if (v >= 0xc8) {
        v = 0xc7;
    }
    func_ov111_02296f34(v);
    if (unk_a0 != unk_9e) {
        func_0200402c(0x15);
    }
    unk_a0 = unk_9e;
}

BOOL Unk_ov111_02298a48::func_ov111_02296f9c() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b < 0x24 || b >= 0x3c) {
        return FALSE;
    }
    if (a < 0x10 || a >= 0xc8) {
        return FALSE;
    }
    if (a < 0x18) {
        a = 0x18;
    }
    func_ov111_02296f34(a);
    func_ov111_02296968(1);
    unk_9f = unk_9e;
    unk_a0 = unk_9e;
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296ffc() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (func_020512e0(unk_3c9c.unk_0e, 0x20) == 0) {
        func_ov111_02297224();
    } else {
        func_02094860();
        func_0200402c(0x32);
        func_ov111_02297650();
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov111_02298a48::func_ov111_02297044() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (func_ov095_022939f8(unk_ac)) {
        return func_ov111_02296ffc();
    }
    return FALSE;
}

s32 Unk_ov111_02298a48::func_ov111_02297070() {
    func_ov095_02295194(unk_ac);
    s32 r4 = func_ov095_02294a44(unk_ac, data_021ef5f0, data_021ef5ec);
    if (r4 == -1) {
        return 0;
    }
    s32 r6 = func_ov111_022970cc(func_ov095_02294864(unk_ac, r4, 8));
    func_ov095_02294d40(unk_ac, r4);
    func_ov095_02294318(unk_ac);
    return r6;
}

s32 Unk_ov111_02298a48::func_ov111_022970cc(u32 x) {
    Unk_ov111_022970cc_Status r = UNK_OV111_ST_1;
    s32 t = func_ov095_02293dc8(unk_ac, x, 6);
    if (t != 0) {
        func_ov111_022976bc();
        return t;
    }
    if (func_ov095_0229423c(unk_ac, x)) {
        switch (x - 0x100) {
        case 0:
            func_ov111_02297558(r);
            break;
        case 3:
            func_ov111_02297498();
            r = UNK_OV111_ST_2;
            break;
        case 4:
            func_ov111_0229741c();
            r = UNK_OV111_ST_2;
            break;
        case 5:
            func_ov111_022973a0();
            r = UNK_OV111_ST_2;
            break;
        case 6:
            break;
        case 24:
            func_ov111_022972fc();
            r = UNK_OV111_ST_2;
            break;
        case 25:
            func_ov111_02297230();
            r = UNK_OV111_ST_2;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            func_ov111_0229844c(x - 0x10a, 0);
            r = UNK_OV111_ST_2;
            break;
        case 27:
        case 28:
        case 29:
        case 30:
            if (unk_a2 != 0) {
                return 0;
            }
            func_ov095_02293938(unk_ac, x);
            func_ov111_02297bec();
            func_ov111_02296a6c();
            r = UNK_OV111_ST_3;
            break;
        default:
            return 0;
        }
    } else {
        s32 r6 = func_ov111_022975ec((u8)x);
        if (func_ov095_02295264(unk_ac)) {
            func_ov111_02297bb0(0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(unk_ac)) {
            func_ov111_02297bb0(0x1c, r);
            return 4;
        }
        if (r6 == 0) {
            func_ov111_02297224();
        }
    }
    return r;
}
