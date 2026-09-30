#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (main module)

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// String buffer wrapping a text renderer (Unk_02050288) at +0x3c
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();

    /* 0x00 */ u8 unk_00[0x14];
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

    BOOL func_02089a24();
    BOOL func_02089a40();
    void func_02089ac0(StrBuf *src);
    void func_02089ad8(s32 a, s32 b);
    void func_02089b00();

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

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes

// 8-byte animation record
struct Unk_ov002_02203c5c_Rec {
    u32 unk_00;
    u32 unk_04 : 10;
    u32 unk_04_hi : 22;
};

extern "C" {
extern u8 data_ov002_0220442c[];
extern u8 data_ov002_02204430[];
extern Unk_ov002_02203c5c_Rec data_ov002_02204784[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047a4[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047cc[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047fc[];
extern Unk_ov002_02203c5c_Rec data_ov002_0220482c[];

void func_0206f9fc(void *a, u8 v);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void func_02111d90(void *p, u32 a, u32 b);
}

// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();

    u32 func_ov002_02203c0c();
    void func_ov002_02203c1c();
    void func_ov002_02203c28(u32 m);
    void func_ov002_02203c38(u32 m);
    BOOL func_ov002_02203c48(u32 m);
    void func_ov002_02203c5c(u8 a, u8 b);
    void func_ov002_02203ca4(u8 v);
    void func_ov002_02203cc4(u8 v);
    void func_ov002_02203ce4(u8 v);
    void func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);
    void func_ov002_02203ab8();
    void func_ov002_02203ac4();
    void func_ov002_02203ad0();
    void func_ov002_02203adc();
    void func_ov002_02203ae8();
    BOOL func_ov002_02203af4();
    void func_ov002_02203b30(s32 x, s32 y, s32 c);

    /* 0x04 */ Unk_020e0488 unk_04;
    /* 0x44 */ Unk_ov002_02203c5c_Rec *unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
};

// Menu, vtable 0x02204770
class Unk_ov002_02204770 : public Unk_020e0d98 {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void vfunc_10(s32 a, s32 b);

    void func_ov002_022039d8();
    void func_ov002_022039f8(u8 a, s32 b, s32 c);
};

// Owner, vtable 0x022046cc
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    virtual ~Unk_ov002_022046cc();

    void func_ov002_022034c4(u8 v);
    void func_ov002_02203510(s32 v);
    void func_ov002_02203548();
    void func_ov002_02203590();
    void func_ov002_022035d8();
    void func_ov002_02203608();
    void func_ov002_02203650();
    void func_ov002_02203698();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();

    /* 0x004 */ Unk_ov002_022046dc unk_04[2];
    /* 0x0a4 */ Unk_ov002_02204770 unk_a4;
    /* 0x160 */ u8 unk_160;
};

// Base of the 0x0220471c / 0x02204738 classes (defined in another group)
class Unk_ov002_02204754 {
public:
    Unk_ov002_02204754(s32 a, s32 b);
    virtual ~Unk_ov002_02204754();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
};

class Unk_ov002_0220471c : public Unk_ov002_02204754 {
public:
    Unk_ov002_0220471c();
    virtual ~Unk_ov002_0220471c();
};

class Unk_ov002_02204738 : public Unk_ov002_02204754 {
public:
    virtual ~Unk_ov002_02204738();
};

// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov002_022046cc::func_ov002_022034c4(u8 v) {
    unk_04[1].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_04[0].func_ov002_02203cf8(data_ov002_022047fc, 6, 2);
    unk_04[0].func_ov002_02203cc4(v);
    unk_160 = 6;
}

void Unk_ov002_022046cc::func_ov002_02203510(s32 v) {
    unk_04[1].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[1].func_ov002_02203cc4(v);
    unk_160 = 5;
}

void Unk_ov002_022046cc::func_ov002_02203548() {
    unk_04[1].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_04[0].func_ov002_02203cf8(data_ov002_022047fc, 6, 2);
    unk_04[0].func_ov002_02203cc4(0x65);
    unk_160 = 4;
}

void Unk_ov002_022046cc::func_ov002_02203590() {
    unk_04[1].func_ov002_02203cf8(data_ov002_022047cc, 6, 2);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_04[0].func_ov002_02203cf8(data_ov002_022047fc, 6, 2);
    unk_04[0].func_ov002_02203cc4(0x65);
    unk_160 = 3;
}

void Unk_ov002_022046cc::func_ov002_022035d8() {
    unk_04[1].func_ov002_02203cf8(data_ov002_02204784, 6, 1);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_160 = 1;
}

void Unk_ov002_022046cc::func_ov002_02203608() {
    unk_04[0].func_ov002_02203cf8(data_ov002_0220482c, 0xc, 3);
    unk_04[0].func_ov002_02203cc4(0x20);
    unk_04[1].func_ov002_02203cf8(data_ov002_02204784, 6, 1);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_160 = 2;
}

void Unk_ov002_022046cc::func_ov002_02203650() {
    unk_04[0].func_ov002_02203cf8(data_ov002_022047a4, 8, 2);
    unk_04[0].func_ov002_02203cc4(2);
    unk_04[1].func_ov002_02203cf8(data_ov002_02204784, 6, 1);
    unk_04[1].func_ov002_02203cc4(0x21);
    unk_160 = 2;
}

void Unk_ov002_022046cc::func_ov002_02203698() { unk_160 = 0; }

void Unk_ov002_022046cc::func_ov002_022036a4(s32 a) {
    switch (unk_160) {
    case 0:
        break;
    case 1:
        unk_04[1].func_ov002_02203b30(0, a + 0xac, -1);
        break;
    case 2:
        unk_04[0].func_ov002_02203b30(0, a + 0xac, -1);
        unk_04[1].func_ov002_02203b30(0, a + 0xac, -1);
        break;
    case 3:
        unk_04[1].func_ov002_02203b30(0x3c, a + 0x35, -1);
        unk_04[0].func_ov002_02203b30(0x3c, a + 0x48, -1);
        break;
    case 4:
        unk_04[1].func_ov002_02203b30(0x3c, a + 0x4c, -1);
        unk_04[0].func_ov002_02203b30(-0x7c, a + 0x4c, -1);
        break;
    case 5:
        unk_04[1].func_ov002_02203b30(0x3c, a + 0x4c, -1);
        break;
    case 6:
        unk_04[1].func_ov002_02203b30(0x3c, a + 0x4c, -1);
        unk_04[0].func_ov002_02203b30(-0xc, a + 0x4c, -1);
        break;
    case 7:
    case 9:
    case 10: {
        if (unk_160 != 10) {
            unk_a4.func_02089ad8(0, -(a >> 2));
            unk_a4.vfunc_08();
        }
        s32 b = a >> 2;
        if (unk_160 == 7) {
            unk_04[0].func_ov002_02203b30(0, b, -1);
            unk_04[1].func_ov002_02203b30(0, b, -1);
        } else {
            unk_04[0].func_ov002_02203b30(-0x50, b + 0x44, -1);
            unk_04[1].func_ov002_02203b30(0x10, b + 0x44, -1);
        }
        break;
    }
    case 8: {
        s32 t = -(a >> 2);
        if (unk_160 != 10) {
            unk_a4.func_02089ad8(0, t - 8);
            unk_a4.vfunc_08();
        }
        a = (a >> 1) - 0x1e;
        unk_04[0].func_ov002_02203b30(0, a, -1);
        unk_04[1].func_ov002_02203b30(0, a, -1);
        break;
    }
    case 11: {
        s32 b = a >> 1;
        unk_a4.func_02089ad8(0, -b);
        unk_a4.vfunc_08();
        unk_04[0].func_ov002_02203b30(-0x50, b + 0x44, -1);
        unk_04[1].func_ov002_02203b30(0x10, b + 0x44, -1);
        break;
    }
    case 12: {
        s32 b = a >> 1;
        unk_a4.func_02089ad8(0, -b);
        unk_a4.vfunc_08();
        unk_04[0].func_ov002_02203b30(-0x50, b + 0x24, -1);
        unk_04[1].func_ov002_02203b30(0x10, b + 0x24, -1);
        break;
    }
    case 13: {
        s32 b = a >> 1;
        unk_a4.func_02089ad8(0, -b);
        unk_a4.vfunc_08();
        unk_04[0].func_ov002_02203b30(-0x50, b + 0x36, -1);
        unk_04[1].func_ov002_02203b30(0x10, b + 0x36, -1);
        break;
    }
    }
}

void Unk_ov002_022046cc::func_ov002_02203900() {
    for (s32 i = 0; i < 2; i++) {
        unk_04[i].func_ov002_02203c1c();
    }
}

extern "C" void func_ov002_02203920() { func_02111d90(data_ov002_02204430, 0x1c, 4); }

Unk_ov002_022046cc::~Unk_ov002_022046cc() {}

Unk_ov002_022046cc::Unk_ov002_022046cc() { unk_160 = 0; }

void Unk_ov002_02204770::func_ov002_022039d8() {
    func_02089a24();
    vfunc_0c();
    vfunc_0c();
}

void Unk_ov002_02204770::func_ov002_022039f8(u8 a, s32 b, s32 c) {
    vfunc_10(b, c);
    func_02089ad8(0, 0);
    Unk_020e0488 t;
    func_0206f9fc(&t, a);
    func_02089ac0((StrBuf *)&t);
    func_02089b00();
    func_02089a40();
    vfunc_0c();
    vfunc_0c();
}

void Unk_ov002_02204770::vfunc_10(s32 a, s32 b) { Unk_020e0db4::vfunc_10(a - 0x80, b - 0x60); }

Unk_ov002_02204770::~Unk_ov002_02204770() {}

Unk_ov002_02204770::Unk_ov002_02204770() : Unk_020e0d98(0) { func_02089b00(); }

void Unk_ov002_022046dc::func_ov002_02203ab8() { func_ov002_02203c48(4); }
void Unk_ov002_022046dc::func_ov002_02203ac4() { func_ov002_02203c28(4); }
void Unk_ov002_022046dc::func_ov002_02203ad0() { func_ov002_02203c38(4); }
void Unk_ov002_022046dc::func_ov002_02203adc() { func_ov002_02203c28(2); }
void Unk_ov002_022046dc::func_ov002_02203ae8() { func_ov002_02203c38(2); }

BOOL Unk_ov002_022046dc::func_ov002_02203af4() {
    if (unk_49 == 0) {
        func_ov002_02203c5c(0xe, 0);
    }
    if (unk_49 + 1 < 3) {
        unk_49++;
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
}

void Unk_ov002_022046dc::func_ov002_02203b30(s32 x, s32 y, s32 c) {
    u32 off = func_ov002_02203c0c();
    s32 pal = -1;
    if (func_ov002_02203c48(4)) {
        pal = 2;
    }
    s32 yy = y + 0x60 + off;
    s32 xx = x + 0x80 + off;
    func_02087e70(1, unk_44, xx, yy, pal, c, 0x1000, 0x1000, 0, -1, 0, 0);
    if (func_ov002_02203c48(2)) {
        func_02087e70(1, unk_44, xx, yy, -1, c, 0x1000, 0x1000, 0, 2, 0, 0);
    }
    if (!func_ov002_02203c48(1)) {
        if (unk_49 + 1 != 3) {
            x += 0x83;
            y += 0x63;
            func_02087e70(1, unk_44 + unk_4a, x, y, 1, c, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

u32 Unk_ov002_022046dc::func_ov002_02203c0c() { return data_ov002_0220442c[unk_49]; }

void Unk_ov002_022046dc::func_ov002_02203c1c() { unk_04.func_0206fc44(); }

void Unk_ov002_022046dc::func_ov002_02203c28(u32 m) { unk_4c = unk_4c & ~m; }

void Unk_ov002_022046dc::func_ov002_02203c38(u32 m) { unk_4c = unk_4c | m; }

BOOL Unk_ov002_022046dc::func_ov002_02203c48(u32 m) {
    if ((unk_4c & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_022046dc::func_ov002_02203c5c(u8 a, u8 b) {
    func_0206f9fc(&unk_04, unk_4b);
    unk_04.func_0206fb9c(8, unk_44->unk_04, unk_48, a, b, 0);
    unk_04.func_0206fab4(1, 0);
}

void Unk_ov002_022046dc::func_ov002_02203ca4(u8 v) {
    func_ov002_02203ce4(v);
    unk_49 = 0;
    func_ov002_02203c38(1);
}

void Unk_ov002_022046dc::func_ov002_02203cc4(u8 v) {
    func_ov002_02203ce4(v);
    unk_49 = 0;
    func_ov002_02203c28(1);
}

void Unk_ov002_022046dc::func_ov002_02203ce4(u8 v) {
    unk_4b = v;
    func_ov002_02203c5c(0xf, 0);
}

void Unk_ov002_022046dc::func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b) {
    unk_44 = p;
    unk_48 = a;
    unk_4a = b;
}

Unk_ov002_022046dc::~Unk_ov002_022046dc() { unk_04.func_0206fc44(); }

Unk_ov002_022046dc::Unk_ov002_022046dc() {
    unk_44 = 0;
    unk_49 = 0;
    unk_4c = 0;
}

Unk_ov002_0220471c::~Unk_ov002_0220471c() {}

Unk_ov002_0220471c::Unk_ov002_0220471c() : Unk_ov002_02204754(1, 0) {}

Unk_ov002_02204738::~Unk_ov002_02204738() {}
