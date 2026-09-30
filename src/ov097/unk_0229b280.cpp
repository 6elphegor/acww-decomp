#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
void func_02061168(u16 *out, u16 *in, s32 n);
s32 func_0204b2d4(u16 *p);
s32 func_02042c64(s32 a, s32 b);
u16 *func_020342cc(void *a, s32 b, s32 c, s32 d);
u16 *func_02034250(void *a, s32 b, s32 c, s32 d);
u32 func_020b0f54();
s32 func_ov004_02233f08(void *out, void *in, s32 n);
s32 func_ov004_02235028(s32 p);
BOOL func_ov002_02201700(u8 *p, u32 a, u32 b);
}

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();
    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_ov002_02201194 {
public:
    Unk_ov002_02201194();
    ~Unk_ov002_02201194();
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

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

// Vtable 0x0229aea8 (ov096 class; ov097 functions are free functions on it)
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    void func_ov096_02294ed4();

    /* 0x91 */ u8 unk_91[0x25];
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7[0xc4 - 0xb7];
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 unk_c8[0x27f0 - 0xc8];
    /* 0x27f0 */ u8 unk_27f0[0x114];
};

extern "C" {
void func_ov096_0229865c(class Unk_ov096_0229aea8 *self);
void func_ov096_02298334(class Unk_ov096_0229aea8 *self, s32 a, s32 b, s32 c);
u16 func_ov096_02297b9c(class Unk_ov096_0229aea8 *self, u32 a);
void func_ov096_022980a0(class Unk_ov096_0229aea8 *self, u32 k, u32 x, u32 y);
void func_ov096_0229806c(class Unk_ov096_0229aea8 *self, u32 a);
}

extern "C" BOOL func_ov097_0229b280();

static inline BOOL Unk_ov097_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" void func_ov097_0229b4a4(Unk_ov096_0229aea8 *self) {
    if (!func_ov097_0229b280()) {
        func_ov096_0229865c(self);
        func_ov096_02298334(self, 23, 0xff, 1);
    } else {
    u16 v0;
    volatile u16 v1;
    u32 k = self->unk_b6;
    v0 = func_ov096_02297b9c(self, k);
    self->func_ov096_02294ed4();
    v1 = *func_02034250(&v0, 0, 1, 1);
    BOOL r = FALSE;
    u32 x = v1;
    u32 y = v1;
    if (y >= 0x1144 && x <= 0x1187) {
        r = TRUE;
    }
    if (r) {
        func_ov096_022980a0(self, k, x, 0);
    } else {
        func_ov096_0229806c(self, k);
    }
    func_ov096_0229865c(self);
    }
}

extern "C" void func_ov097_0229b414(Unk_ov096_0229aea8 *self) {
    if (!func_ov097_0229b280()) {
        func_ov096_0229865c(self);
        func_ov096_02298334(self, 24, 0xff, 1);
    } else {
    u16 v0;
    volatile u16 v1;
    u32 k = self->unk_b6;
    v0 = func_ov096_02297b9c(self, k);
    self->func_ov096_02294ed4();
    v1 = *func_020342cc(&v0, 0, 1, 1);
    BOOL r = FALSE;
    u32 x = v1;
    u32 y = v1;
    if (y >= 0x1100 && x <= 0x1143) {
        r = TRUE;
    }
    if (r) {
        func_ov096_022980a0(self, k, x, 0);
    } else {
        func_ov096_0229806c(self, k);
    }
    func_ov096_0229865c(self);
    }
}

extern "C" void func_ov097_0229b3a4(Unk_ov096_0229aea8 *self, s32 a) {
    if (func_ov097_0229b280()) {
        volatile u16 v = a;
        BOOL r = FALSE;
        u32 x = v;
        u32 y = v;
        if (y >= 0x1144 && x <= 0x1187) {
            r = TRUE;
        }
        if (r) {
            func_ov002_02201700(self->unk_27f0, 0xc, 0x13);
        } else if (x >= 0x1100 && x <= 0x1143) {
            func_ov002_02201700(self->unk_27f0, 0xb, 0x12);
        }
    }
}

extern "C" s32 func_ov097_0229b2bc(Unk_ov096_0229aea8 *self, s32 a) {
    u16 in = a;
    u16 v;
    s32 out;
    func_02061168(&v, &in, 0);
    if (func_0204b2d4(&v)) {
        switch (func_ov004_02233f08(&out, &v, 1)) {
        case 0:
            func_ov096_0229865c(self);
            func_ov096_02298334(self, 3, 0xff, 0);
            func_0200402c(0x73);
            return 0;
        case 1:
            func_ov096_0229865c(self);
            func_ov096_02298334(self, 5, 0xff, 1);
            func_0200402c(0x73);
            return 0;
        case 2:
            func_ov096_0229865c(self);
            func_ov096_02298334(self, 3, 0xff, 0);
            func_0200402c(0x73);
            return 0;
        default:
            func_ov004_02235028(out);
            break;
        }
    } else {
    self->unk_c4 = func_02042c64(data_020cbb18->unk_64, a);
    if (self->unk_c4 == -1) {
        func_ov096_0229865c(self);
        func_ov096_02298334(self, 3, 0xff, 0);
        func_0200402c(0x73);
        return 0;
    }
    return 2;
    }
    return 1;
}

extern "C" BOOL func_ov097_0229b280() {
    Unk_020cbb18 *g = data_020cbb18;
    if (g->func_02072e44()) {
        if (g->unk_64 != 0 || func_020b0f54() > 1) {
            return FALSE;
        }
    } else if (func_020b0f54() > 1) {
        return FALSE;
    }
    return TRUE;
}

