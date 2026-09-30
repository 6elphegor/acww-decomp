#include "types.h"

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    s32 func_02089244();

    /* 0x00 */ u8 unk_00[0x14];
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

    s32 func_02089868();
    s32 func_0208987c();
    s32 func_02089880();
    void func_02089b10();

    /* 0x0c */ u8 unk_0c[0xb0];
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u32 flag);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208e13c(s32 v);
    void func_0208e288(s32 x, s32 y);
    void func_0208e2d0();
    void func_0208e2d8();

    /* 0x0c */ u8 unk_0c[0x62];
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

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

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_02050288;

class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

// Element of the 5-entry array at +0x28 of Unk_ov002_02204558 (0x48 bytes)
class Unk_ov002_02204568 : public Unk_020e0488 {
public:
    Unk_ov002_02204568();
    virtual ~Unk_ov002_02204568() {}

    void func_ov002_022024f8(u32 a, u16 b, u8 c, u8 d);
    void func_ov002_02202520(s32 v);

    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
};

// Sub-objects of Unk_ov002_02204558 (defined elsewhere)
class Unk_ov002_02204738 : public Unk_020e1098 {
public:
    Unk_ov002_02204738();
    ~Unk_ov002_02204738();
};

class Unk_ov002_02204770 : public Unk_020e0d98 {
public:
    Unk_ov002_02204770();
    ~Unk_ov002_02204770();

    void func_ov002_022039d8();
    void func_ov002_022039f8(s32 a, s32 b, s32 c);
};

class Unk_ov002_022044b4 {
public:
    Unk_ov002_022044b4();
    ~Unk_ov002_022044b4();

    u8 unk_00[0x20];
};

// Scroll/move helper embedded at +0x4c of Unk_ov002_02202d98
class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    virtual ~Unk_ov002_02204604();

    BOOL func_ov002_02202674();
    void func_ov002_02202694(s32 x, s32 y, s32 n);
    void func_ov002_022026c4(s32 x, s32 y, s32 n);
    void func_ov002_022026f4(s32 x, s32 y);
    void func_ov002_02202700();
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
};

// Intermediate base of the vtables 0x02204614 / 0x02204630 / 0x0220464c
class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    Unk_ov002_02202d98(BOOL flag);
    ~Unk_ov002_02202d98();
    virtual void vfunc_0c();

    void func_ov002_02202844();
    s32 func_ov002_02202878();
    s32 func_ov002_0220288c();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_0220298c(s32 x, s32 y, s32 n, u8 e);
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a18(s32 x, s32 y, s32 n);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a6c(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();

    /* 0x4c */ Unk_ov002_02204604 unk_4c;
};

class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
};

class Unk_ov002_02204630 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();
};

// Menu/selection object, vtable 0x02204558 (vptr only base, size >= 0x2d8)
class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    virtual ~Unk_ov002_02204558();

    void func_ov002_02202200(Unk_020e0d98 *p);
    void func_ov002_02202278(s32 a, s32 b);
    void func_ov002_02202294(s32 a, s32 b);
    void func_ov002_0220229c(s32 a, s32 b);
    s32 func_ov002_022022e0(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 unk_1a;
    /* 0x1b */ u8 unk_1b;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ const char *unk_24;
    /* 0x28 */ Unk_ov002_02204568 unk_28[5];
    /* 0x190 */ Unk_ov002_02204738 unk_190;
    /* 0x200 */ Unk_ov002_02204770 unk_200;
    /* 0x2bc */ Unk_ov002_022044b4 unk_2bc;
};

extern "C" {
extern u8 data_ov002_022045dc[];
extern u32 data_021f482c;
u8 *func_020641ec(const char *path, u32 heap, s32 a, s32 b);
void func_020e85fc(u32 heap, void *buf);
void func_0200402c(s32 v);
s32 func_ov002_02201ca4(void *);
s32 func_ov002_02201cb0(void *);
void func_ov002_02202190(void *, s32, s32);
void func_ov002_022021d8(void *, s32, s32);
s32 func_02133150(s32 a, s32 b);
}

Unk_ov002_02204604::Unk_ov002_02204604() {}
Unk_ov002_02204604::~Unk_ov002_02204604() {}

BOOL Unk_ov002_02204604::func_ov002_02202674() {
    BOOL r = FALSE;
    BOOL m = TRUE;
    if (unk_15 != 2 && unk_15 != 3) {
        m = FALSE;
    }
    if (m && unk_14 != 0) {
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_02133150(s32 a, s32 b);

void Unk_ov002_02204604::func_ov002_02202694(s32 x, s32 y, s32 n) {
    if (n == 1) {
        func_ov002_022026c4(x, y, 1);
    } else {
        unk_15 = 3;
        s32 t = x << 4;
        unk_0c = (t - unk_04) >> 1;
        y = y << 4;
        unk_10 = (y - unk_08) >> 1;
        unk_14 = n;
    }
}

void Unk_ov002_02204604::func_ov002_022026c4(s32 x, s32 y, s32 n) {
    unk_15 = 2;
    x = x << 4;
    unk_0c = (x - unk_04) / n;
    y = y << 4;
    unk_10 = (y - unk_08) / n;
    unk_14 = n;
}

void Unk_ov002_02204604::func_ov002_022026f4(s32 x, s32 y) {
    unk_04 = x << 4;
    unk_08 = y << 4;
}

void Unk_ov002_02204604::func_ov002_02202700() {
    unk_15 = 1;
}

s32 Unk_ov002_02204604::func_ov002_02202708() {
    return unk_08 >> 4;
}

s32 Unk_ov002_02204604::func_ov002_02202710() {
    return unk_04 >> 4;
}

BOOL Unk_ov002_02204604::func_ov002_02202718() {
    if (unk_15 != 2 && unk_15 != 3) {
        return TRUE;
    }
    if (unk_14 != 0) {
        unk_14--;
        switch (unk_15) {
        case 2:
            unk_04 += unk_0c;
            unk_08 += unk_10;
            break;
        case 3:
            unk_04 += unk_0c;
            unk_08 += unk_10;
            if (unk_14 > 1) {
                unk_0c >>= 1;
                unk_10 >>= 1;
            }
            break;
        }
        while (unk_04 < 0) {
            unk_04 += 0x1000;
        }
        while (unk_04 > 0x1000) {
            unk_04 -= 0x1000;
        }
    }
    if (unk_14 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_02204604::func_ov002_022027a4() {
    unk_15 = 0;
}

// ---- Unk_ov002_02204568 ----

Unk_ov002_02204568::Unk_ov002_02204568() {
    unk_42 = 3;
    unk_40 = 0;
    unk_43 = 1;
    unk_44 = 9;
}

void Unk_ov002_02204568::func_ov002_022024f8(u32 a, u16 b, u8 c, u8 d) {
    unk_42 = a;
    unk_40 = b;
    unk_43 = c;
    unk_44 = d;
}

void Unk_ov002_02204568::func_ov002_02202520(s32 v) {
    u8 x = unk_43;
    if (v >= 0) {
        x = v & 0xf;
    }
    func_0206fb9c(unk_42, unk_40, 0xd, x, unk_44, 0);
}

// ---- Unk_ov002_02204558 ----

Unk_ov002_02204558::Unk_ov002_02204558() {}

Unk_ov002_02204558::~Unk_ov002_02204558() {}

void Unk_ov002_02204558::func_ov002_02202200(Unk_020e0d98 *p) {
    unk_19 = 0;
    s32 x = p->func_02089880() + 0x80;
    s32 y = p->func_0208987c() + 0x60;
    s32 h = func_ov002_02201ca4(this);
    s32 hw = p->func_02089868() >> 1;
    s32 r = x + hw;
    if (r > 0x100) {
        x -= r - 0x100;
    } else {
        r = x - hw;
        if (r < 0) {
            x -= r;
        }
    }
    x -= 2;
    x -= func_ov002_02201cb0(this) >> 1;
    s32 t = y - h;
    if (t < 10) {
        y += 0x10;
    } else {
        y = t;
    }
    func_ov002_02202190(this, x, y);
}

void Unk_ov002_02204558::func_ov002_02202278(s32 a, s32 b) {
    b -= func_ov002_02201ca4(this);
    func_ov002_02202190(this, a, b);
}

void Unk_ov002_02204558::func_ov002_02202294(s32 a, s32 b) {
    func_ov002_02202190(this, a, b);
}

void Unk_ov002_02204558::func_ov002_0220229c(s32 a, s32 b) {
    s32 w = func_ov002_02201cb0(this);
    s32 h = func_ov002_02201ca4(this);
    s32 x = a - w + 0x20;
    if (x > 0) {
        unk_19 = 1;
    } else {
        x = a - 0x10;
        unk_19 = 0;
    }
    s32 y = b - h - 4;
    if (y < 10) {
        y = 10;
    }
    func_ov002_022021d8(this, x, y);
}

s32 Unk_ov002_02204558::func_ov002_022022e0(s32 a, s32 b) {
    a += 0x80;
    b += 0x60;
    s32 w = func_ov002_02201cb0(this);
    s32 h = func_ov002_02201ca4(this);
    a -= w >> 1;
    b -= h >> 1;
    func_ov002_022021d8(this, a, b);
}

void Unk_ov002_02204558::func_ov002_02202310(s32 a, s32 b, const char *path) {
    unk_1a = a;
    unk_10 = b;
    unk_08 = 0;
    unk_0c = 0;
    unk_16 = 0;
    unk_17 = 0;
    unk_18 = 0;
    unk_19 = 0;
    unk_1b = 0xd;
    unk_1c = 5;
    if (path == 0) {
        unk_24 = (const char *)data_ov002_022045dc;
    } else {
        unk_24 = path;
    }
    u32 heap = data_021f482c;
    u8 *buf = func_020641ec(unk_24, heap, -4, 0);
    unk_04 = *(u16 *)(buf + 0x44) & 0x3ff;
    func_020e85fc(heap, buf);
    u16 v = unk_04;
    s32 i;
    for (i = 0; i < 5; i++) {
        unk_28[i].func_ov002_022024f8(a, v, 1, 9);
        v += 0x1a;
    }
    unk_190.vfunc_10(0x60, 0x8c);
    unk_190.func_0208e288(0, 0);
    unk_190.func_0208e2d0();
    unk_190.func_0208e2d8();
    unk_190.func_0208e13c(1);
    unk_200.func_ov002_022039d8();
    unk_200.func_ov002_022039f8(0x1f, 0x80, 0xc);
    unk_200.func_02089b10();
    unk_14 = 0;
}

// ---- Unk_ov002_02202d98 and derived ----

Unk_ov002_02204614::Unk_ov002_02204614() : Unk_ov002_02202d98(FALSE) {}
Unk_ov002_02204614::~Unk_ov002_02204614() {}
Unk_ov002_02204630::Unk_ov002_02204630() : Unk_ov002_02202d98(TRUE) {}
Unk_ov002_02204630::~Unk_ov002_02204630() {}

void Unk_ov002_02202d98::vfunc_0c() {
    unk_4c.func_ov002_02202718();
    s32 x = unk_4c.func_ov002_02202710();
    s32 y = unk_4c.func_ov002_02202708();
    func_ov002_02202a6c(x, y);
    if (func_0208d4fc()) {
        if (func_0208d534() == 5) {
            func_0208d580(1);
        } else if (func_0208d534() == 0xb) {
            func_0208d580(7);
        }
    }
    Unk_020e100c::vfunc_0c();
}

void Unk_ov002_02202d98::func_ov002_02202844() {
    Unk_020e100c::vfunc_08();
    s32 old = unk_20;
    if (old + func_02089f68() > 0xe0) {
        unk_20 -= 0x100;
        Unk_020e100c::vfunc_08();
        unk_20 = old;
    }
}

s32 Unk_ov002_02202d98::func_ov002_02202878() {
    return unk_24 + func_02089f64();
}

s32 Unk_ov002_02202d98::func_ov002_0220288c() {
    return unk_20 + func_02089f68();
}

s32 Unk_ov002_02202d98::func_ov002_022028a0() {
    s32 t = unk_0c.func_02089210(-1);
    return t + (unk_24 + func_02089f64());
}

s32 Unk_ov002_02202d98::func_ov002_022028c8() {
    s32 t = unk_0c.func_02089228(-1);
    return t + (unk_20 + func_02089f68());
}

BOOL Unk_ov002_02202d98::func_ov002_022028f0() {
    return unk_4c.func_ov002_02202674();
}

BOOL Unk_ov002_02202d98::func_ov002_022028fc() {
    s32 t = func_0208d534();
    if (t == 6 || t == 0xc) {
        if (unk_0c.func_02089244() == 2) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov002_02202d98::func_ov002_02202928() {
    switch (func_0208d534()) {
    case 4:
    case 10:
        if (unk_0c.func_02089244() >= 4) {
            return TRUE;
        }
        return FALSE;
    case 5:
    case 11:
        if (unk_0c.func_02089244() < 3) {
            return TRUE;
        }
        return FALSE;
    case 6:
    case 12:
        return TRUE;
    case 7:
    case 8:
    case 9:
    default:
        return FALSE;
    }
}

void Unk_ov002_02202d98::func_ov002_0220298c(s32 x, s32 y, s32 n, u8 e) {
    s32 dx = x - (unk_20 + func_02089f68());
    func_0200402c(0xb);
    if (dx >= -0x30 && dx <= 0x30) {
        s32 dy = y - (unk_24 + func_02089f64());
        if (dy >= -0x30 && dy <= 0x30) {
            n = e;
        }
    }
    unk_4c.func_ov002_02202694(x, y, n);
}

void Unk_ov002_02202d98::func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f) {
    if (f != 0) {
        func_0200402c(0xb);
    }
    unk_4c.func_ov002_02202694(x, y, n);
}

void Unk_ov002_02202d98::func_ov002_02202a18(s32 x, s32 y, s32 n) {
    func_0200402c(0xb);
    unk_4c.func_ov002_022026c4(x, y, n);
}

void Unk_ov002_02202d98::func_ov002_02202a40(s32 x, s32 y) {
    unk_4c.func_ov002_02202700();
    unk_4c.func_ov002_022026f4(x, y);
    func_ov002_02202a6c(x, y);
}

void Unk_ov002_02202d98::func_ov002_02202a78() {
    switch (func_0208d534()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        func_0208d580(1);
        break;
    case 7:
    case 8:
    case 9:
        func_0208d580(7);
        break;
    case 13:
    case 14:
    case 15:
        func_0208d580(0xd);
        break;
    case 16:
    case 17:
    case 18:
        func_0208d580(0x10);
        break;
    default:
        func_0208d580(9);
        break;
    }
}

void Unk_ov002_02202d98::func_ov002_02202af0() {
    switch (func_0208d534()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        func_0208d580(3);
        break;
    case 7:
    case 8:
    case 9:
        func_0208d580(9);
        break;
    case 13:
    case 14:
    case 15:
        func_0208d580(0xf);
        break;
    case 16:
    case 17:
    case 18:
        func_0208d580(0x12);
        break;
    default:
        func_0208d580(9);
        break;
    }
}

void Unk_ov002_02202d98::func_ov002_02202a6c(s32 x, s32 y) {
    func_0208d60c(x - 0x80, y - 0x60);
}
