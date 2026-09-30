#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void func_020021b8(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void func_020021fc(s32 a, s32 b, s32 c);
void func_0200402c(s32 a);
void func_0206e020();
BOOL func_0206e2f4();
BOOL func_0206e308();
void func_0206ef28();
void func_0206ef3c();
void func_0206f290(void *p);
void func_0206f2b0(void *p);
void func_02001564(s32 a);
void func_02001750(s32 a);
s32 func_02001580();
void func_020016bc(s32 a);
void func_020016cc(s32 a);
void func_0200152c(s32 a);
void func_02001724(s32 a, s32 b);
void func_020016b0(s32 a);
void func_0200151c(s32 a);
void func_02001554(s32 a);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *func_020ed174(void *p);
void func_020ed0d8(void *p, u32 v);
void func_020ed03c(void *p, u32 v);

extern void *data_021c6210;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
}

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    u8 unk_00[0x14];
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

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 flag);
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    s32 func_020898bc();
    BOOL func_02089a24();
    BOOL func_02089a40();
    void func_02089ab0(u8 v);
    void func_02089ab8();

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
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ Unk_02050288 *unk_b0;
    /* 0xb4 */ Unk_02050288 *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// Vtable 0x02204468
class Unk_ov002_02204468 : public Unk_020e0d98 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();

    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006ac(s32 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// Sub-object at +0x70 of Unk_ov002_022044e4 (window / mask helper)
class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();

    void func_ov002_02200d04(s32 v);
    void func_ov002_02200d08(s32 a);
    void func_ov002_02200d78(s32 a, s32 b, s32 c);
    void func_ov002_02200dd8(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e18(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_02200f54(s32 a);
    void func_ov002_022011ec();
    BOOL func_ov002_022011cc();
    void func_ov002_02200fa8(s32 a);
    void func_ov002_02200fe0(s32 a);
    BOOL func_ov002_0220102c(s32 a);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();

    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

// Sub-object at +0x50 of Unk_ov002_022044e4 (pad input)
class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();

    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_022044e4;
typedef void (Unk_ov002_022044e4::*Unk_ov002_02200a68_Fn)();

// Vtable 0x022044e4
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
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();

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

// ---------------------------------------------------------------- Unk_ov002_02204468

BOOL Unk_ov002_02204468::func_ov002_02200680() {
    if (func_020898bc() == 2 || func_020898bc() == 1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_02204468::func_ov002_022006a4(u8 v) { unk_be = v; }

void Unk_ov002_02204468::func_ov002_022006ac(s32 v) { unk_44 = v; }

void Unk_ov002_02204468::func_ov002_022006b0() { unk_bd = 0; }

void Unk_ov002_02204468::func_ov002_022006b8() { unk_bd = 1; }

void Unk_ov002_02204468::func_ov002_022006c0() {
    unk_be = 0;
    if (unk_bd != 0) {
        unk_bc = 1;
    }
    unk_bd = 0;
}

BOOL Unk_ov002_02204468::func_ov002_022006e4(s32 a) {
    unk_be = 0;
    if (a != 0) {
        func_ov002_022006b0();
    }
    if (func_020898bc() == 0) {
        unk_bc = 0;
        return TRUE;
    }
    unk_bc = 4;
    return FALSE;
}

s32 Unk_ov002_02204468::func_ov002_0220071c() {
    s32 r = 0;
    if (unk_be != 0) {
        unk_be = unk_be - 1;
        if (unk_be == 0) {
            if (unk_bc == 3) {
                func_ov002_022006e4(r);
            }
        }
    }
    switch (unk_bc) {
    case 1:
        if (func_020898bc() != 0) {
            func_02089a24();
        } else {
            r = 1;
            unk_bc = 2;
        }
        break;
    case 2:
        if (func_02089a40() != 0) {
            unk_bc = 3;
        }
        break;
    case 4:
        if (func_020898bc() == 0 || func_02089a24() != 0) {
            unk_bc = 0;
        }
        break;
    }
    Unk_020e0d98::vfunc_0c();
    return r;
}

Unk_ov002_02204468::~Unk_ov002_02204468() {}

Unk_ov002_02204468::Unk_ov002_02204468() : Unk_020e0d98(0) {
    unk_bc = 0;
    func_02089ab0(1);
    func_02089ab8();
    unk_bd = 0;
    unk_be = 0;
}

// ---------------------------------------------------------------- Unk_ov002_02201194

void Unk_ov002_02201194::func_ov002_02200d04(s32 v) { unk_10 = v; }

void Unk_ov002_02201194::func_ov002_02200d08(s32 a) {
    s32 x0 = 0;
    s32 y0 = 0;
    s32 x1 = 0xff;
    s32 y1 = 0xc0;
    switch (unk_18) {
    case 0:
        y0 = unk_0c - unk_14;
        if (y0 < 0) {
            y0 = x0;
        }
        break;
    case 1:
        y1 = unk_14 + 0xc0 - unk_0c;
        if (y1 > 0xbf) {
            y1 = 0xbf;
        }
        break;
    case 2:
        x1 = 0xff - unk_0c;
        if (x1 < 1) {
            x1 = 1;
        }
        break;
    case 3:
        x0 = unk_0c;
        if (x0 > 0xfe) {
            x0 = 0xfe;
        }
        break;
    }
    func_020021b8(a, x0, y0, x1, y1);
}

void Unk_ov002_02201194::func_ov002_02200d78(s32 a, s32 b, s32 c) {
    switch (unk_18) {
    case 0:
        func_020021fc(a, -b, -(unk_0c + c));
        break;
    case 1:
        func_020021fc(a, -b, unk_0c - c);
        break;
    case 2:
        func_020021fc(a, unk_0c - b, -c);
        break;
    case 3:
        func_020021fc(a, -(unk_0c + b), -c);
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200dd8(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec();
    unk_0c = 0;
    switch (unk_18) {
    case 0:
    case 1:
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200e18(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec();
    switch (unk_18) {
    case 0:
    case 1:
        unk_0c = 0xc0;
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_0c = 0x100;
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    func_02001564(1);
    func_02001750(0x1f);
    if (func_02001580() & 2) {
        func_020016bc(a);
    } else {
        func_020016cc(~a & 0x1f);
    }
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    func_02001564(1);
    func_02001750(0x1f);
    func_020016cc(~a & 0x1f);
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    func_0200152c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~a & 0x1f);
    func_ov002_02200d08(2);
}

void Unk_ov002_02201194::func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    func_0200152c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~a & 0x1f);
    func_ov002_02200d08(2);
}

BOOL Unk_ov002_02201194::func_ov002_02200f54(s32 a) {
    if (func_ov002_022011cc()) {
        switch (a) {
        case 0:
            func_0200151c(1);
            break;
        case 1:
            func_02001554(1);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_02200fe0(a);
        break;
    default:
        func_ov002_02200fa8(a);
        break;
    }
    return FALSE;
}

// ---------------------------------------------------------------- Unk_ov002_022044e4

void *Unk_ov002_022044e4::operator new(unsigned long size) {
    void *p = func_020e8618(data_021c6210, size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void Unk_ov002_022044e4::operator delete(void *p) { func_020e85fc(data_021c6210, p); }

void Unk_ov002_022044e4::func_ov002_02200840(s32 a, s32 b, s32 c) { unk_70.func_ov002_02200d78(a, b, c); }

void Unk_ov002_022044e4::func_ov002_02200850(s32 v) { unk_70.func_ov002_02200d04(v); }

void Unk_ov002_022044e4::func_ov002_0220085c(s32 a, s32 mode) {
    if (a == 0) {
        a = 3;
    }
    unk_70.func_ov002_02200dd8(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_02200874(s32 a, s32 mode) {
    if (a == 0) {
        a = 4;
    }
    unk_70.func_ov002_02200e18(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    unk_70.func_ov002_02200e58(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    unk_70.func_ov002_02200ea4(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    unk_70.func_ov002_02200edc(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    unk_70.func_ov002_02200f18(a, b, mode, dist);
}

BOOL Unk_ov002_022044e4::func_ov002_022008fc(s32 a) { return unk_70.func_ov002_02200f54(a); }

BOOL Unk_ov002_022044e4::func_ov002_02200908(s32 a) { return unk_70.func_ov002_0220102c(a); }

s32 Unk_ov002_022044e4::func_ov002_02200914() { return unk_70.func_ov002_02201124(); }

s32 Unk_ov002_022044e4::func_ov002_02200920() { return unk_70.func_ov002_02201140(); }

void Unk_ov002_022044e4::func_ov002_02200970(s32 a, s32 b, s32 c) { unk_50.func_ov002_02201240(a, b, c); }

void Unk_ov002_022044e4::func_ov002_02200980() { unk_50.func_ov002_02201240(8, 1, 7); }

BOOL Unk_ov002_022044e4::func_ov002_02200998() { return unk_50.func_ov002_0220129c(); }

BOOL Unk_ov002_022044e4::func_ov002_022009a4() { return unk_50.func_ov002_022012b0(); }

BOOL Unk_ov002_022044e4::func_ov002_022009b0() { return unk_50.func_ov002_022012c4(); }

BOOL Unk_ov002_022044e4::func_ov002_022009bc() { return unk_50.func_ov002_022012d8(); }

u32 Unk_ov002_022044e4::func_ov002_022009c8() { return unk_50.func_ov002_022012ec(); }

static inline BOOL Unk_ov002_022009d4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::func_ov002_022009d4() {
    if (Unk_ov002_022009d4_Both()) {
        func_0206ef3c();
        func_0200402c(0x866);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::func_ov002_02200a14(s32 a) {
    if ((data_021f47d8[1] & 0xfff) != 0) {
        func_0206ef28();
        func_0200402c(0x866);
        if (a != 0) {
            func_0200402c(0x3b);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_18() {
    static Unk_ov002_02200a68_Fn tbl[6] = {
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_48,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_4c,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_50,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_54,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_58,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_5c,
    };
    unk_50.func_ov002_022012f8();
    (this->*tbl[unk_8f])();
    return TRUE;
}

BOOL Unk_ov002_022044e4::vfunc_48() {
    if (func_0206e308()) {
        func_ov002_02200a60(1);
    }
    if (func_0206e2f4()) {
        func_0206e020();
        func_ov002_02200a60(5);
    }
    return TRUE;
}

BOOL Unk_ov002_022044e4::vfunc_20() { return Unk_020d8c7c_Base::vfunc_20(); }

BOOL Unk_ov002_022044e4::vfunc_1c() {
    if (Unk_020d8c7c_Base::vfunc_1c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_14(s32 a) {
    if (a == 2) {
        func_0206f290(&unk_64);
    }
    return Unk_020d8c7c_Base::vfunc_14(a);
}

BOOL Unk_ov002_022044e4::vfunc_10() {
    if (Unk_020d8c7c_Base::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_022044e4::vfunc_08(s32 a) {
    func_0206f2b0(&unk_64);
    if (a == 2) {
        void *p = func_020ed174(this);
        if (p != 0) {
            u8 *q = (u8 *)p;
            func_020ed0d8(this, (u16)(*(u16 *)(q + 0x34) + 1));
            func_020ed03c(this, (u16)(*(u16 *)(q + 0x44) + 1));
        }
    }
    Unk_020d8c7c::vfunc_08(a);
}

BOOL Unk_ov002_022044e4::vfunc_04() {
    if (!Unk_020d8c7c_Base::vfunc_04()) {
        return FALSE;
    }
    unk_90 = *(s32 *)&unk_04[4];
    unk_6c = this;
    unk_50.func_ov002_02201240(8, 1, 7);
    return TRUE;
}

BOOL Unk_ov002_022044e4::vfunc_5c() { return TRUE; }
BOOL Unk_ov002_022044e4::vfunc_58() { return TRUE; }
BOOL Unk_ov002_022044e4::vfunc_54() { return TRUE; }
BOOL Unk_ov002_022044e4::vfunc_50() { return TRUE; }
BOOL Unk_ov002_022044e4::vfunc_4c() { return TRUE; }

void Unk_ov002_022044e4::func_ov002_02200a50(u8 v) { unk_8c = v; }
void Unk_ov002_022044e4::func_ov002_02200a58(u8 v) { unk_8d = v; }
void Unk_ov002_022044e4::func_ov002_02200a60(u8 v) { unk_8f = v; }

Unk_ov002_022044e4::~Unk_ov002_022044e4() {}

Unk_ov002_022044e4::Unk_ov002_022044e4() : unk_64(0), unk_68(0) {}
