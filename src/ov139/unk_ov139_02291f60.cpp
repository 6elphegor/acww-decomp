#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Declarations from other files

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

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

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[14];
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

// String buffer wrapping a text renderer at +0x3c (size 0x40)
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    s32 func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ void *unk_3c;
};

// Menu layer (size 0xbc)
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

    void func_02089ad8(s32 a, s32 b);
    void func_02089ae8();

    /* 0x0c */ u8 unk_0c[0xb0];
};

class Unk_ov002_02204770 : public Unk_020e0d98 {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void vfunc_10(s32 a, s32 b);

    void func_ov002_022039d8();
    void func_ov002_022039f8(u8 a, s32 b, s32 c);
};

// Button/sound helper (size 0x24)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8670(u32 a, u8 b, u32 c);
    void func_020b87d0(void);

    /* 0x04 */ u8 unk_04[0x20];
};

extern "C" {
extern u32 data_021f482c;
extern u8 data_ov139_02292820[];
extern u8 data_ov139_02292834[];
extern u8 data_ov139_02292848[];
extern u8 data_ov139_0229285c[];
extern u8 data_ov139_0229286c[];
extern u8 data_ov139_0229287c[];
extern u32 data_ov139_02292680[];

s32 func_0200261c(u32 p0, u32 p1, u32 p2, s32 p3, s32 e, s32 f);
s32 func_020026c4(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void func_0206f994(Unk_020e2a78 *dst, const void *s, s32 len);
void func_0206f9fc(void *a, u8 v);
BOOL func_020a78a4(void *, const void *, s32);
u8 func_020b3544(u32 idx, Unk_020e2a78 *other);
BOOL func_020641b4(void *a, void *b, s32 c);
void func_02115e48(void *dst, void *src, u32 n);
}

// ---------------------------------------------------------------------------------------------------------------------

class Unk_ov139_02291f60 {
public:
    Unk_ov139_02291f60();
    ~Unk_ov139_02291f60();

    void func_ov139_02291f60(u32 m);
    void func_ov139_02291f70(u32 m);
    BOOL func_ov139_02291f80(u32 m);
    u32 func_ov139_02291f98(s32 i);
    void func_ov139_02291fa4(s32 i, u8 *str, u8 pal);
    void func_ov139_0229200c(s32 i, u8 *str, u8 pal);
    Unk_020e0488 *func_ov139_02292104();
    void func_ov139_0229212c();
    void func_ov139_02292154(s32 i);
    void func_ov139_0229217c(s32 i, u8 *str);
    void func_ov139_022921ac();
    void func_ov139_022922a0(s32 a, s32 x, s32 n, s32 e);
    void func_ov139_0229237c();
    void func_ov139_022923dc();
    void func_ov139_02292410();
    void func_ov139_02292480(s32 a, s32 b);
    void func_ov139_02292498();
    void func_ov139_022924d8();
    void func_ov139_022924f4();
    void func_ov139_02292510(u8 id, u8 v);

    /* 0x000 */ Unk_ov002_02204770 unk_00;
    /* 0x0bc */ Unk_020e0488 unk_bc[20];
    /* 0x5bc */ Unk_020e45f8 unk_5bc;
    /* 0x5e0 */ u16 unk_5e0[16];
    /* 0x600 */ u16 unk_600[16];
    /* 0x620 */ u16 unk_620;
    /* 0x622 */ u8 unk_622;
    /* 0x623 */ u8 unk_623;
};

void Unk_ov139_02291f60::func_ov139_02291f60(u32 m) { unk_620 &= ~m; }

void Unk_ov139_02291f60::func_ov139_02291f70(u32 m) { unk_620 |= m; }

BOOL Unk_ov139_02291f60::func_ov139_02291f80(u32 m) {
    if (unk_620 & m) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov139_02291f60::func_ov139_02291f98(s32 i) { return data_ov139_02292680[i]; }

void Unk_ov139_02291f60::func_ov139_02291fa4(s32 i, u8 *str, u8 pal) {
    Unk_020e0488 *t = func_ov139_02292104();
    if (str == NULL) {
        t->func_020a7c3c();
    } else {
        func_0206f994(t, str, 8);
    }
    u32 a = i * 16 + 0x1d2;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->func_0206fb9c(unk_622, a, 8, x, y, 0);
    t->func_0206fab4(1, 0);
}

void Unk_ov139_02291f60::func_ov139_0229200c(s32 i, u8 *str, u8 pal) {
    Unk_020e0488 *t = func_ov139_02292104();
    static Unk_020dd374 sA;
    static Unk_020dd38c sB;
    if (str == NULL) {
        t->func_020a7c3c();
    } else {
        func_020a78a4(&sA, str, 8);
        sB.func_020a7aa0(&sA, 0, 0);
        func_020b3544(0, &sB);
        func_0206f9fc(t, 0x66);
    }
    u32 a = i * 0x14 + 0x11e;
    u8 x = 0xf;
    u8 y = 0xe;
    if (pal != 0xff) {
        x = pal;
        y = 0xf;
    }
    t->func_0206fb9c(unk_622, a, 0xa, x, y, 0);
    t->func_0206fab4(1, 0);
}

Unk_020e0488 *Unk_ov139_02291f60::func_ov139_02292104() {
    if (unk_623 >= 0x14) {
        return &unk_bc[19];
    }
    unk_623++;
    return &unk_bc[unk_623 - 1];
}

void Unk_ov139_02291f60::func_ov139_0229212c() {
    s32 i;
    unk_623 = 0;
    for (i = 0; i < 0x14; i++) {
        unk_bc[i].func_0206fc44();
    }
}

void Unk_ov139_02291f60::func_ov139_02292154(s32 i) {
    u8 t = 0xe - i;
    func_ov139_0229200c(i, NULL, t);
    func_ov139_02291fa4(i, NULL, t);
}

void Unk_ov139_02291f60::func_ov139_0229217c(s32 i, u8 *str) {
    u8 t = 0xe - i;
    func_ov139_0229200c(i, str, t);
    func_ov139_02291fa4(i, str + 8, t);
}

void Unk_ov139_02291f60::func_ov139_022921ac() {
    Unk_020e0488 *t;
    t = func_ov139_02292104();
    func_0206f9fc(t, 0x65);
    t->func_0206fb9c(8, 0x93, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xc2);
    t->func_0206fb9c(8, 0x8d, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xc1);
    t->func_0206fb9c(8, 0x99, 6, 0xf, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xbc);
    t->func_0206fb48(8, 0xcd, 6, 0xe, 0, 0);
    t->func_0206fab4(1, 0);
    t = func_ov139_02292104();
    func_0206f9fc(t, 0xbd);
    t->func_0206fb48(8, 0xed, 6, 0xe, 0, 0);
    t->func_0206fab4(1, 0);
}

void Unk_ov139_02291f60::func_ov139_022922a0(s32 a, s32 x, s32 n, s32 e) {
    u16 c1 = unk_5e0[15];
    s32 r1 = (u8)(c1 & 0x1f);
    s32 g1 = (u8)((c1 & 0x3e0) >> 5);
    s32 b1 = (u8)((c1 & 0x7c00) >> 10);
    s32 d = n - x;
    u16 c2 = unk_5e0[e];
    u32 v = (u8)(((u8)(c2 & 0x1f) * x + r1 * d) / n);
    u32 g = (u8)(((u8)((c2 & 0x3e0) >> 5) * x + g1 * d) / n) << 24;
    u32 b = (u8)(((u8)((c2 & 0x7c00) >> 10) * x + b1 * d) / n);
    v |= g >> 19;
    unk_600[(u8)(0xe - a)] = (b << 10) | v;
    func_ov139_02291f70(1);
}

void Unk_ov139_02291f60::func_ov139_0229237c() {
    u32 h = data_021f482c;
    func_0200261c((u32)data_ov139_02292820, h, 8, 0x80, 0x80, 0xff);
    func_0200261c((u32)data_ov139_02292834, h, 8, 0x160, 0x160, 0x1ff);
    func_020026c4((u32)data_ov139_02292848, h, 8, 4, 4, 0xd);
}

void Unk_ov139_02291f60::func_ov139_022923dc() {
    s32 i;
    for (i = 0; i < 6; i++) {
        func_ov139_0229200c(i, NULL, 0xe);
        func_ov139_02291fa4(i, NULL, 0xe);
    }
}

void Unk_ov139_02291f60::func_ov139_02292410() {
    u32 h = data_021f482c;
    func_0200261c((u32)data_ov139_0229285c, h, unk_622, 0x11, 0x11, 0x36);
    func_020026c4((u32)data_ov139_0229286c, h, unk_622, 1, 1, 8);
    func_020641b4(data_ov139_0229287c, unk_5e0, 0x20);
    func_02115e48(unk_5e0, unk_600, 0x20);
}

void Unk_ov139_02291f60::func_ov139_02292480(s32 a, s32 b) {
    unk_00.func_02089ad8(a, b);
    unk_00.vfunc_08();
}

void Unk_ov139_02291f60::func_ov139_02292498() {
    if (func_ov139_02291f80(1)) {
        if (unk_5bc.func_020b8670((u32)unk_600, unk_622, 7)) {
            func_ov139_02291f60(1);
        }
    }
}

void Unk_ov139_02291f60::func_ov139_022924d8() {
    func_ov139_0229212c();
    unk_5bc.func_020b87d0();
}

void Unk_ov139_02291f60::func_ov139_022924f4() {
    func_ov139_0229212c();
    unk_5bc.func_020b87d0();
}

void Unk_ov139_02291f60::func_ov139_02292510(u8 id, u8 v) {
    unk_622 = id;
    unk_620 = 0;
    unk_00.func_ov002_022039d8();
    unk_00.func_ov002_022039f8(v, 0x90, 0x18);
    unk_00.func_02089ae8();
}

Unk_ov139_02291f60::~Unk_ov139_02291f60() {}

Unk_ov139_02291f60::Unk_ov139_02291f60() {}
