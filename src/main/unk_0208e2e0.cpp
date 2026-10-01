#include "types.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    void func_020891bc();
    BOOL func_020891d8();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    void *func_02089248();
    void func_02089260(s32 v);
    void func_02089264(s32 v);
    void func_02089268(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
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

// Nine-byte buffer view; data at +0x12.
class Unk_020e1080 : public Unk_020e2a78 {
public:
    Unk_020e1080();
    virtual ~Unk_020e1080();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x12 */ u8 unk_12[9];
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u8 a, s32 b);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208dff4();
    void func_0208e074();
    void func_0208e13c(s32 v);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ Unk_02089270 unk_1c;
    /* 0x30 */ Unk_02089270 unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ Unk_020e1080 unk_4c;
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

Unk_020e1080::Unk_020e1080() { func_020a7c3c(); }

Unk_020e1080::~Unk_020e1080() {}

// ---- Unk_020e1080 ----
u32 Unk_020e1080::vfunc_08() { return 9; }

u8 *Unk_020e1080::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020e1098::Unk_020e1098(u8 a, s32 b) : unk_0c(0), unk_10(0), unk_14(-1), unk_18(b), unk_44(0), unk_48(0) {
    unk_68 = 0x50c0;
    unk_6a = a;
    unk_6b = 0;
    unk_6c = 0;
    unk_6d = 0;
    func_0208e13c(0);
}

Unk_020e1098::~Unk_020e1098() {
    func_0208e074();
}

void Unk_020e1098::vfunc_08() {
    if (unk_44 != 0) {
        void *h0 = unk_1c.func_02089248();
        void *h1 = unk_30.func_02089248();
        s32 a = unk_1c.func_02089228(-1);
        s32 b = unk_1c.func_02089210(-1);
        s32 c = unk_30.func_02089228(-1);
        s32 d = unk_30.func_02089210(-1);
        s32 bx = unk_0c + func_02089f68();
        s32 by = unk_10 + func_02089f64();
        s32 x0 = bx + a;
        s32 y0 = by + b;
        s32 x1 = bx + c;
        s32 y1 = by + d;
        BOOL show = unk_6c == 0 ? TRUE : FALSE;
        if (unk_6a != 0) {
            func_02087e70(0, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                func_02087e70(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                func_02087e70(0, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    func_02087e70(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            func_02087e70(1, h0, x0, y0, unk_14, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                func_02087e70(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (unk_6b != 0) {
                func_02087e70(1, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    func_02087e70(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
    func_0208dff4();
}

// ---- Unk_020e1098 ----
void Unk_020e1098::vfunc_0c() {
    if (unk_44 != 0) {
        unk_1c.func_02089140();
        unk_30.func_02089140();
    }
}

