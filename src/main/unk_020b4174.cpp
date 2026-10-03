#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
void func_0200145c(s32 x);
void func_02001504(u32 x);
void func_020014cc(u32 x);
void func_0200158c(u32 x);
void func_020015a0(u32 x);
void func_020020b8(u32 x);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_0200261c(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void func_02002654(const char *path, void *heap, u32 a);
void func_020026c4(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
void func_0200402c(u32 x);
void func_020040cc(void);
void func_0205c170(void);
void func_0205c18c(u32 a, u32 b);
void func_0205369c(void);
void func_02053780(void);
void func_02078370(void);
void func_0207835c(void);
void func_02097564(void);
void func_0209d624(void *p);
void func_0209d70c(void *p, u32 x);
void _ZN12Unk_0209da4413func_0209df9cEv(void *p);
BOOL _ZN12Unk_0209ea5013func_0209eb48Ev(void *p);
void func_0209f224(u32 x);
void func_020a06ec(void);
u32 func_020a071c(void);
u32 func_020a0a7c(u32 a, void *p);
void func_020b4f78(void *p, u32 x);
void func_020b4968(u32 a, u32 b);
u8 *func_020b4934(void);
void func_020b83e0(void);
void func_020b8494(void);
u64 OS_GetTick(void);
void GX_SetBankForSubBG(u32 x);
void GX_SetBankForBG(u32 x);
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *ptr);
void MI_CpuCopy8(const void *src, void *dst, u32 size);

extern u32 data_020dc520;
extern void *data_021f482c;
extern u8 data_021d7350;
extern u8 data_021ed32c;
}

// Intermediate game-state class with an inline constructor that sets flags
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020e2988() {}
};

class Unk_020e3fe4 : public Unk_020e2988 {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();

    void func_020b41cc();
    void func_020b4248();
    void func_020b42b8();

    /* 0x50 */ u8 unk_50;
    /* 0x51 */ volatile u8 unk_51;
    /* 0x54 */ u64 unk_54;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 unk_5d;
    /* 0x5e */ u8 unk_5e;
    /* 0x5f */ u8 unk_5f;
    /* 0x60 */ void *unk_60;
    /* 0x64 */ void *unk_64;
    /* 0x68 */ void *unk_68;
};

extern "C" Unk_020e3fe4 *func_020b459c(void) { return new Unk_020e3fe4; }

BOOL Unk_020e3fe4::vfunc_00() {
    data_020dc520 = 3;
    func_020040cc();
    unk_50 = 0;
    unk_60 = data_021f482c;
    unk_64 = func_020e8608(unk_60, 0x15fe0);
    unk_68 = func_020e8608(unk_60, 0x15fe0);
    return TRUE;
}

BOOL Unk_020e3fe4::vfunc_0c() {
    func_020e85fc(unk_60, unk_64);
    func_020e85fc(unk_60, unk_68);
    return TRUE;
}

BOOL Unk_020e3fe4::vfunc_18() {
    switch (unk_5f) {
    case 0:
        if (unk_50 == 1) unk_5f = 1;
        break;
    case 1: {
        u32 r = func_020a0a7c(0, unk_64);
        if (r != 3) {
            unk_5c = r;
            unk_5f = 2;
        }
        break;
    }
    case 2: {
        u32 r = func_020a0a7c(1, unk_68);
        if (r != 3) {
            unk_5d = r;
            unk_5f = 3;
        }
        break;
    }
    }
    switch (unk_50) {
    case 0:
        func_020b42b8();
        func_0200145c(-16);
        unk_50 = 1;
        unk_51 = 0x10;
        func_0200402c(0x88c);
        break;
    case 1:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            func_0200145c(-unk_51);
        } else {
            unk_50 = 2;
            unk_54 = OS_GetTick();
        }
        break;
    case 2: {
        u64 now = OS_GetTick();
        if (unk_5f < 5) {
            if (unk_5f < 3) break;
            func_020b4248();
            func_020b41cc();
            unk_5f = 5;
        }
        if (now - unk_54 < 0x7fd88) break;
        unk_50 = 3;
        unk_51 = 0x10;
        break;
    }
    case 3:
        if (unk_51 != 0) {
            unk_51 = unk_51 - 1;
            func_0200145c(unk_51 - 0x10);
        } else {
            func_02001504(0);
            func_020014cc(0);
            unk_50 = 4;
            func_020b4f78(func_020b4934(), 0x2c);
            func_020b4968(3, 2);
        }
        break;
    }
    return TRUE;
}

void Unk_020e3fe4::func_020b42b8() {
    func_02053780();
    func_020b83e0();
    func_020b8494();
    func_0205369c();
    GX_SetBankForBG(0x20);
    GX_SetBankForSubBG(0x80);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xffcfffef;
    *(volatile u32 *)0x4001000 = *(volatile u32 *)0x4001000 & 0xffcfffef;
    func_020015a0(0);
    func_0200158c(0);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xc7ffffff;
    func_0200226c(6, 0, 0, 0);
    func_0200226c(2, 0, 0, 0);
    void *heap = data_021f482c;
    func_0200261c("menu/nin/nin.bch", heap, 6, 0, 0, 0x2ff);
    func_020026c4("menu/nin/ninE.bpl", heap, 6, 0, 0, 0);
    func_02002654("menu/nin/nin.bsc", heap, 6);
    func_0200261c("menu/nin/arrE.bch", heap, 2, 0, 0, 0x13f);
    func_020026c4("menu/nin/arrE.bpl", heap, 2, 0, 0, 0);
    func_02002654("menu/nin/arrE.bsc", heap, 2);
    func_020020b8(6);
    func_020020b8(2);
}

void Unk_020e3fe4::func_020b4248() {
    if (unk_5c == 1 || unk_5d == 1) {
        unk_5e = 1;
    } else if (unk_5c != 0 && unk_5d != 0) {
        unk_5e = 4;
    } else {
        u32 r;
        if (unk_5c != 0) {
            r = 1;
        } else if (unk_5d != 0) {
            r = 0;
        } else {
            r = func_020a071c();
        }
        if (r == 0) {
            MI_CpuCopy8(unk_64, &data_021d7350, 0x15fe0);
        } else {
            MI_CpuCopy8(unk_68, &data_021d7350, 0x15fe0);
        }
        unk_5e = 0;
    }
}

void Unk_020e3fe4::func_020b41cc() {
    func_0205c18c(0x5000, 0);
    if (unk_5e == 4 || unk_5e == 1) {
        if (unk_5e == 4) {
            if (!_ZN12Unk_0209ea5013func_0209eb48Ev(&data_021ed32c)) func_0209f224(1);
        }
        if (unk_5e == 4) func_020a06ec();
        _ZN12Unk_0209da4413func_0209df9cEv(&data_021d7350);
        func_02097564();
        func_02078370();
        func_0209d70c(&data_021d7350, 3);
    } else {
        func_0209d70c(&data_021d7350, 4);
    }
    func_0209d624(&data_021d7350);
    func_0207835c();
    func_0205c170();
}


