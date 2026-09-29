#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern u8 data_020d5d34[];
extern u8 data_021ceb58[];
extern u8 data_020cf71c[];
extern u8 data_020cf718[];
extern u16 data_020cf720[];
extern u32 *data_020d5d0c[];
void func_02087e70(u32 a, u32 h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_020016a4(u32 a);
s32 func_020016cc(u32 a);
s32 func_02001564(u32 a);
s32 func_02001554(u32 a);
s32 func_02003ff4(u32 a, u32 b);
void func_02004008(u32 a);
}
extern "C" u64 func_01ffa6b4(void);

struct Unk_0208e9d4_Ptr {
    u8 pad[0xc];
    u16 unk_0c;
};
extern "C" Unk_0208e9d4_Ptr *data_021eda68;

class Unk_020cbb18 {
public:
    BOOL func_02072e44();
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void *func_02089248();
    void func_02089268(void *p);
    void func_02089264(s32 v);
    void func_020891bc();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
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
    void func_0208e074();
    void func_0208e13c();

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

class Unk_020e10f8 : public Unk_020e0db4 {
public:
    Unk_020e10f8();
    virtual ~Unk_020e10f8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208e7c0();
    void func_0208e798();
    void func_0208e870();
    void func_0208e8b0();
    void func_0208e8d0();
    void func_0208e8dc();
    void func_0208e8ec();
    void func_0208e8fc();
    void func_0208e904();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u64 unk_30;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
};

class Unk_020e10dc : public Unk_020e0db4 {
public:
    virtual ~Unk_020e10dc();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_0208eb9c();
    void func_0208ebcc();
    void func_0208ebe8();
    void func_0208ec10();
    void func_0208ec34();
    void func_0208ec48();
    void func_0208ec50(s32 a, s32 b);
    void func_0208ec58();
    void func_0208ec68();
    void func_0208ec78();
    void func_0208ec7c();

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ u8 unk_20;
};

extern "C" Unk_020e10f8 data_021ceb38;

extern "C" {
void func_0208e928();
void func_0208e938();
void func_0208e948();
void func_0208e958();
}

class Unk_020e1114 : public Unk_020d8c7c {
public:
    Unk_020e1114();
    virtual ~Unk_020e1114();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
};

BOOL Unk_020e1114::vfunc_24() {
    func_0208e928();
    return TRUE;
}
BOOL Unk_020e1114::vfunc_18() {
    func_0208e938();
    return TRUE;
}
BOOL Unk_020e1114::vfunc_0c() {
    func_0208e948();
    return TRUE;
}
BOOL Unk_020e1114::vfunc_00() {
    func_0208e958();
    return TRUE;
}

Unk_020e1114::~Unk_020e1114() {}
Unk_020e1114::Unk_020e1114() {}

extern "C" Unk_020e1114 *func_0208e780() { return new Unk_020e1114(); }

extern "C" void func_0208e928() { data_021ceb38.func_0208e8dc(); }
extern "C" void func_0208e938() { data_021ceb38.func_0208e8ec(); }
extern "C" void func_0208e948() { data_021ceb38.func_0208e8fc(); }
extern "C" void func_0208e958() { data_021ceb38.func_0208e904(); }

extern "C" void func_0208e968() { data_021ceb58[0x19] = 1; }

extern "C" void func_0208e974() {
    if (data_021ceb38.unk_20 != 0) {
        func_020016a4(0x10);
        func_020016cc(4);
        func_02001564(4);
    }
    data_021ceb58[0x19] = 0;
}

extern "C" void func_0208e9a8() {
    if (data_021ceb38.unk_20 != 0) {
        func_020016a4(0x10);
        func_02001564(4);
    }
    data_021ceb58[0x19] = 0;
}

extern "C" void func_0208e9d4(u32 i) {
    if (data_021eda68->unk_0c != 5) {
        data_021ceb38.unk_28 = data_020cf71c[i];
    }
}

extern "C" void func_0208e9f4(u32 i) {
    u32 t = data_021eda68->unk_0c;
    BOOL e = data_020cbb18->func_02072e44();
    if (t != 5 && e) {
        data_021ceb38.unk_24 = data_020cf718[i];
    }
}

// ---- Unk_020e1098 ----
Unk_020e1098::~Unk_020e1098() {
    func_0208e074();
}

Unk_020e1098::Unk_020e1098(u8 a, s32 b) : unk_0c(0), unk_10(0), unk_14(-1), unk_18(b), unk_44(0), unk_48(0) {
    unk_68 = 0x50c0;
    unk_6a = a;
    unk_6b = 0;
    unk_6c = 0;
    unk_6d = 0;
    func_0208e13c();
}

// ---- Unk_020e1080 ----
u32 Unk_020e1080::vfunc_08() { return 9; }
u8 *Unk_020e1080::vfunc_0c() { return (u8 *)this + 0x12; }
Unk_020e1080::~Unk_020e1080() {}
Unk_020e1080::Unk_020e1080() { func_020a7c3c(); }

// ---- Unk_020e10f8 ----
void Unk_020e10f8::func_0208e8dc() { vfunc_08(); }
void Unk_020e10f8::func_0208e8ec() { vfunc_0c(); }
void Unk_020e10f8::func_0208e8fc() { func_0208e8d0(); }

void Unk_020e10f8::func_0208e904() {
    func_0208e798();
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_38 = 0;
    unk_39 = 0;
}

typedef void (Unk_020e10f8::*Unk_020e10f8_Fn)();

void Unk_020e10f8::vfunc_0c() {
    static Unk_020e10f8_Fn tbl[2] = {&Unk_020e10f8::func_0208e8b0, &Unk_020e10f8::func_0208e7c0};
    (this->*tbl[unk_20])();
}

void Unk_020e10f8::vfunc_08() {
    if (unk_38 != 0) {
        if (unk_39 == 0) {
            s32 x = func_02089f68();
            s32 y = func_02089f64();
            u32 h = (u32)unk_0c.func_02089248();
            func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            func_02087e70(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
        }
    }
}

Unk_020e10f8::~Unk_020e10f8() {}

Unk_020e10f8::Unk_020e10f8() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_38(0), unk_39(0) {}

void Unk_020e10f8::func_0208e7c0() {
    u64 now = func_01ffa6b4();
    if (now >= unk_30) {
        if (unk_2c == 0) {
            unk_30 = now + 0x1991b;
            unk_38 = 1;
            unk_2c = 1;
        } else if (unk_2c == 1) {
            unk_30 = now + 0x1991b;
            unk_38 = 0;
            unk_2c = 2;
        } else if (unk_2c == 2) {
            unk_30 = now + 0x1991b;
            unk_38 = 1;
            unk_2c = 3;
        } else if (unk_2c == 3) {
            unk_30 = now + 0x4cb51;
            unk_38 = 0;
            unk_2c = 0;
        }
    }
    if (unk_28 > 0) {
        unk_28--;
        if (unk_28 <= 0) {
            func_02001554(4);
            func_0208e8d0();
        }
    }
}

void Unk_020e10f8::func_0208e798() {
    unk_0c.func_02089268(data_020d5d34);
    unk_0c.func_02089264(1);
    unk_0c.func_020891bc();
}

void Unk_020e10f8::func_0208e870() {
    unk_20 = 1;
    unk_28 = 0;
    func_020016a4(0x10);
    func_02001564(4);
    u64 t = func_01ffa6b4();
    unk_2c = 1;
    unk_30 = t + 0x1991b;
    unk_38 = 1;
}

void Unk_020e10f8::func_0208e8b0() {
    if (unk_24 > 0) {
        unk_24--;
        if (unk_24 <= 0) {
            func_0208e870();
        }
    }
}

void Unk_020e10f8::func_0208e8d0() {
    unk_20 = 0;
    unk_24 = 0;
    unk_38 = 0;
}

// ---- Unk_020e10dc ----
void Unk_020e10dc::func_0208ec58() { vfunc_08(); }
void Unk_020e10dc::func_0208ec68() { vfunc_0c(); }
void Unk_020e10dc::func_0208ec78() {}
void Unk_020e10dc::func_0208ec7c() { func_0208ec48(); }

typedef void (Unk_020e10dc::*Unk_020e10dc_Fn)();

void Unk_020e10dc::vfunc_0c() {
    static Unk_020e10dc_Fn tbl[2] = {&Unk_020e10dc::func_0208ec34, &Unk_020e10dc::func_0208ebe8};
    unk_10 += 0x1111;
    (this->*tbl[unk_0c])();
}

void Unk_020e10dc::vfunc_08() {
    if (unk_0c != 0) {
        s32 x = unk_14 + func_02089f68();
        s32 y = unk_18 + func_02089f64();
        u32 h0 = *data_020d5d0c[0];
        u32 h1 = *data_020d5d0c[4];
        func_02087e70(0, h0, x, y, -1, -1, 0x1000, 0x1000, unk_10, -1, 0, 0);
        func_02087e70(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        if (unk_12 != 0) {
            func_02087e70(0, h0, x, y, -1, -1, 0x1000, 0x1000, unk_10, 2, 0, 0);
            func_02087e70(0, h1, x, y, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
        }
    }
}

Unk_020e10dc::~Unk_020e10dc() {
    func_0208eb9c();
}

void Unk_020e10dc::func_0208ebe8() {
    if (unk_13 == 0) {
        func_0208eb9c();
        if (unk_12 != 0) {
            func_02001554(4);
        }
        func_0208ec48();
    }
}

void Unk_020e10dc::func_0208ec10() {
    unk_0c = 1;
    func_0208ebcc();
    if (unk_12 != 0) {
        func_020016a4(0x10);
        func_02001564(4);
    }
}

void Unk_020e10dc::func_0208ec34() {
    if (unk_13 != 0) {
        func_0208ec10();
    }
}

void Unk_020e10dc::func_0208ec50(s32 a, s32 b) {
    unk_14 = a;
    unk_18 = b;
}

void Unk_020e10dc::func_0208eb9c() {
    u16 v = data_020cf720[unk_1c];
    if (unk_20 != 0) {
        unk_20 = 0;
        func_02003ff4(v, 1);
    }
}

void Unk_020e10dc::func_0208ebcc() {
    u16 v = data_020cf720[unk_1c];
    unk_20 = 1;
    func_02004008(v);
}

void Unk_020e10dc::func_0208ec48() { unk_0c = 0; }
