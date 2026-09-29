#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL func_020510d8(StrBuf *dst, StrBuf *src);
void func_0205113c(StrBuf *buf);
void func_020033e4();
void func_02003770();
void func_0208a5a4();
void func_0208de68();
void func_02003780();
void func_020033f4();
void func_0208de78();
void func_0208a5b4();
void func_0208a5c4();
void func_0208de88();
void func_02003404();
void func_02003790();
void func_020037a0();
void func_02003414();
void func_0208de8c();
void func_0208a5d4();
BOOL func_0208f024();
BOOL func_0208f010();
void func_0201190c(u32 a, u32 b, u32 c);
void func_0201192c(u32 a, u32 b);
void func_02011900(u32 a);
s32 func_0201188c();
BOOL func_020118f4();
BOOL func_0208c094(void *p);
void func_0208c0c4(void *p);
BOOL func_0208c0b4(void *p);
void func_0208c0cc(void *p);
void func_0208cd90(void *p);
void func_0208cd88(void *p);
BOOL func_0208cd78(void *p);
void func_0208aa50(void *p);
void func_0208aa48(void *p);
BOOL func_0208aa38(void *p);
void func_0208b038(void *p);
BOOL func_0208b018(void *p);
void func_0208b040(void *p);
}

extern u8 data_020e416c;

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

// Vtable 0x020e0f80, created by the factory func_0208a094
class Unk_020e0f80 : public Unk_020d8c7c {
public:
    Unk_020e0f80();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e0f80();
};

// State machine (methods are state handlers in a member-pointer table at 0x020e0dcc)
class Unk_0208a0ac {
public:
    void func_0208a0ac();
    void func_0208a108();
    void func_0208a150();
    void func_0208a1c0();
    void func_0208a218();
    void func_0208a230();
    void func_0208a24c();
    void func_0208a254();
    void func_0208a2a4();
    void func_0208a2ac();
    void func_0208a328();
    void func_0208a3bc();
    void func_0208a3ec();

    /* 0x000 */ s32 unk_00;
    /* 0x004 */ s32 unk_04;
    /* 0x008 */ u32 unk_08[0x32];
    /* 0x0d0 */ u32 unk_d0[0x35];
    /* 0x1a4 */ u32 unk_1a4[0x40];
    /* 0x2a4 */ u32 unk_2a4[0x1c];
    /* 0x314 */ u8 unk_314;
    /* 0x315 */ u8 unk_315;
    /* 0x316 */ u8 unk_316;
};

static inline BOOL Unk_0208a150_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e0d98 (callers before callees)

void Unk_020e0d98::func_020899f0() {
    if (unk_54 != 0) {
        unk_54 = 0;
        func_02089588();
        func_020896dc();
        func_020899bc();
    }
}

void Unk_020e0d98::func_020899bc() {
    if (unk_59 != 0) {
        unk_38 = 1;
        unk_48 = 0;
        unk_4c = 0;
    } else {
        unk_38 = 3;
        unk_48 = -5;
        s32 v = -5;
        if (unk_5a == 0) {
            v = 5;
        }
        unk_4c = v;
    }
    unk_34 = 1;
}

void Unk_020e0d98::func_02089a1c() { unk_34 = 0; }

BOOL Unk_020e0d98::func_02089a24() {
    BOOL r = unk_34 == 2 ? TRUE : FALSE;
    if (r) {
        unk_55 = 1;
    }
    return r;
}

BOOL Unk_020e0d98::func_02089a40() {
    BOOL r = unk_34 == 0 ? TRUE : FALSE;
    if (r) {
        unk_54 = 1;
    }
    return r;
}

void Unk_020e0d98::func_02089a5c(s32 flag) {
    Unk_02050288 *p = unk_b0;
    if (p) {
        p->unk_10 = (u32)unk_60.vfunc_0c();
        unk_b0->func_02050c90();
    }
    p = unk_b4;
    if (p) {
        p->unk_10 = (u32)unk_88.vfunc_0c();
        unk_b4->func_02050c90();
    }
    if (flag) {
        func_020896dc();
    }
}

void Unk_020e0d98::func_02089ab0(u8 v) { unk_57 = v; }
void Unk_020e0d98::func_02089ab8() { unk_5c = 1; }

void Unk_020e0d98::func_02089ac0(StrBuf *src) {
    func_020510d8((StrBuf *)&unk_60, src);
    unk_b8 = 1;
}

void Unk_020e0d98::func_02089ad8(s32 a, s32 b) {
    unk_3c = a;
    unk_40 = b;
}

void Unk_020e0d98::func_02089ae0() { unk_5b = 0; }
void Unk_020e0d98::func_02089ae8() { unk_5b = 1; }
void Unk_020e0d98::func_02089af0() { unk_5a = 0; }
void Unk_020e0d98::func_02089af8() { unk_5a = 1; }
void Unk_020e0d98::func_02089b00() { unk_59 = 1; }
void Unk_020e0d98::func_02089b08() { unk_58 = 0; }
void Unk_020e0d98::func_02089b10() { unk_58 = 1; }

typedef void (Unk_020e0d98::*Unk_020e0d98_Fn)();

void Unk_020e0d98::vfunc_0c() {
    static Unk_020e0d98_Fn tbl[4] = {&Unk_020e0d98::func_020899f0, &Unk_020e0d98::func_0208994c,
                                     &Unk_020e0d98::func_02089924, &Unk_020e0d98::func_020898c0};
    (this->*tbl[unk_34])();
    if (unk_34 != 0) {
        unk_0c.func_02089140();
        unk_20.func_02089140();
        func_02089508();
    }
}

void Unk_020e0d98::vfunc_08() {
    if (unk_34 != 0) {
        void *h0 = unk_0c.func_02089248();
        void *h1 = unk_20.func_02089248();
        s32 base = func_0208989c();
        s32 base2 = func_02089884();
        s32 x0 = base + unk_0c.func_02089228(-1);
        s32 y0 = base2 + unk_0c.func_02089210(-1);
        s32 x1 = base + unk_20.func_02089228(-1);
        s32 y1 = base2 + unk_20.func_02089210(-1);
        if (unk_56 != 0) {
            func_02087e70(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                func_02087e70(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                func_02087e70(0, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    func_02087e70(0, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            func_02087e70(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            if (unk_5b != 0) {
                func_02087e70(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_58 != 0) {
                func_02087e70(1, h0, x0, y0, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                if (unk_5b != 0) {
                    func_02087e70(1, h1, x1, y1, -1, unk_44, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
}

Unk_020e0d98::~Unk_020e0d98() { func_02089554(); }

Unk_020e0d98::Unk_020e0d98(s32 flag)
    : unk_34(0), unk_38(0), unk_3c(0), unk_40(0), unk_44(-1), unk_48(0), unk_4c(0), unk_50(0), unk_54(0),
      unk_55(0), unk_56(flag), unk_57(0), unk_58(0), unk_59(0), unk_5a(0), unk_5b(0), unk_5c(0), unk_b0(0),
      unk_b4(0), unk_b8(0) {
    func_020897b0();
    func_02089a1c();
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e0d80 and Unk_020e0db4

u8 *Unk_020e0d80::vfunc_0c() { return (u8 *)this + 4; }
u32 Unk_020e0d80::vfunc_08() { return 0x21; }
Unk_020e0d80::~Unk_020e0d80() {}
Unk_020e0d80::Unk_020e0d80() { func_0205113c((StrBuf *)this); }

s32 Unk_020e0db4::func_02089f64() { return unk_08; }
s32 Unk_020e0db4::func_02089f68() { return unk_04; }
void Unk_020e0db4::vfunc_10(s32 a, s32 b) {
    unk_04 = a + 0x80;
    unk_08 = b + 0x60;
}
Unk_020e0db4::~Unk_020e0db4() {}
Unk_020e0db4::Unk_020e0db4() {
    unk_04 = 0x80;
    unk_08 = 0x60;
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_020e0f80

BOOL Unk_020e0f80::vfunc_24() {
    func_020033e4();
    func_02003770();
    func_0208a5a4();
    func_0208de68();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_18() {
    func_02003780();
    func_020033f4();
    func_0208de78();
    func_0208a5b4();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_0c() {
    func_0208a5c4();
    func_0208de88();
    func_02003404();
    func_02003790();
    return TRUE;
}

BOOL Unk_020e0f80::vfunc_00() {
    func_020037a0();
    func_02003414();
    func_0208de8c();
    func_0208a5d4();
    return TRUE;
}

Unk_020e0f80::~Unk_020e0f80() {}
Unk_020e0f80::Unk_020e0f80() {}

extern "C" Unk_020e0f80 *func_0208a094() { return new Unk_020e0f80(); }

// ---------------------------------------------------------------------------------------------------------------------
// Unk_0208a0ac

void Unk_0208a0ac::func_0208a0ac() {
    BOOL r = FALSE;
    if (unk_316 != 0) {
        if (func_0208f024()) {
            r = TRUE;
        }
    } else {
        if (func_0208f010()) {
            r = TRUE;
        }
    }
    if (r) {
        unk_316 = unk_316 == 0 ? 1 : 0;
        if (unk_04 == 3) {
            func_0201190c(unk_316, 1, 1);
        }
    }
}

void Unk_0208a0ac::func_0208a108() {
    s32 r = func_0201188c();
    if (r == 1) {
        if (func_020118f4()) {
            func_0208a328();
        } else {
            func_0208a3bc();
        }
    } else if (r == 2) {
        func_0208a2a4();
    } else if (r == 3) {
        func_0208a24c();
    } else {
        func_0208a3ec();
    }
}

void Unk_0208a0ac::func_0208a150() {
    if (func_0201188c() != 0) {
        if (Unk_0208a150_IsOne(data_020e416c)) {
            if (func_0208c094(unk_d0)) {
                func_0208c0c4(unk_d0);
                if (func_0208c0b4(unk_d0)) {
                    func_0208cd90(unk_08);
                }
            } else {
                func_0208cd88(unk_08);
                if (func_0208cd78(unk_08)) {
                    func_0208c0cc(unk_d0);
                }
            }
        }
    }
}

void Unk_0208a0ac::func_0208a1c0() {
    if (unk_314 != 0 || unk_315 != 0) {
        func_0208aa50(unk_2a4);
    } else {
        func_0208aa48(unk_2a4);
        if (func_0208aa38(unk_2a4)) {
            func_0201192c(4, 1);
            func_0208a108();
        }
    }
    func_0208a150();
}

void Unk_0208a0ac::func_0208a218() {
    func_0201192c(3, 1);
    unk_04 = 5;
}

void Unk_0208a0ac::func_0208a230() {
    func_0208aa50(unk_2a4);
    func_0208a150();
}

void Unk_0208a0ac::func_0208a24c() { unk_04 = 4; }

void Unk_0208a0ac::func_0208a254() {
    if (unk_314 != 0 || unk_315 != 0) {
        func_0208b038(unk_1a4);
        if (func_0208b018(unk_1a4)) {
            func_0208a218();
        }
    } else {
        func_0208b040(unk_1a4);
    }
    func_0208a150();
}

void Unk_0208a0ac::func_0208a2a4() { unk_04 = 3; }

void Unk_0208a0ac::func_0208a2ac() {
    BOOL r5;
    if (unk_314 != 0 || unk_315 != 0) {
        r5 = TRUE;
    } else {
        r5 = FALSE;
    }
    BOOL r0 = func_0208c094(unk_d0);
    if (r5 || r0) {
        func_0208c0c4(unk_d0);
        if (func_0208c0b4(unk_d0)) {
            if (r5) {
                func_0208a218();
            } else {
                func_02011900(0);
                func_0201192c(4, 1);
                func_0208a3bc();
            }
        }
    } else {
        func_0208c0cc(unk_d0);
    }
}
