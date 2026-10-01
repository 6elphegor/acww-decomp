#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
BOOL func_020510d8(StrBuf *dst, StrBuf *src);
}

extern "C" {
void func_0205113c(StrBuf *buf);
}

extern "C" {
void func_020033e4();
}

extern "C" {
void func_02003770();
}

extern "C" {
void func_0208a5a4();
}

extern "C" {
void func_0208de68();
}

extern "C" {
void func_02003780();
}

extern "C" {
void func_020033f4();
}

extern "C" {
void func_0208de78();
}

extern "C" {
void func_0208a5b4();
}

extern "C" {
void func_0208a5c4();
}

extern "C" {
void func_0208de88();
}

extern "C" {
void func_02003404();
}

extern "C" {
void func_02003790();
}

extern "C" {
void func_020037a0();
}

extern "C" {
void func_02003414();
}

extern "C" {
void func_0208de8c();
}

extern "C" {
void func_0208a5d4();
}

extern "C" {
BOOL func_0208f024();
}

extern "C" {
BOOL func_0208f010();
}

extern "C" {
void func_0201190c(u32 a, u32 b, u32 c);
}

extern "C" {
void func_0201192c(u32 a, u32 b);
}

extern "C" {
void func_02011900(u32 a);
}

extern "C" {
s32 func_0201188c();
}

extern "C" {
BOOL func_020118f4();
}

extern "C" {
BOOL func_0208c094(void *p);
}

extern "C" {
void func_0208c0c4(void *p);
}

extern "C" {
BOOL func_0208c0b4(void *p);
}

extern "C" {
void func_0208c0cc(void *p);
}

extern "C" {
void func_0208cd90(void *p);
}

extern "C" {
void func_0208cd88(void *p);
}

extern "C" {
BOOL func_0208cd78(void *p);
}

extern "C" {
void func_0208aa50(void *p);
}

extern "C" {
void func_0208aa48(void *p);
}

extern "C" {
BOOL func_0208aa38(void *p);
}

extern "C" {
void func_0208b038(void *p);
}

extern "C" {
BOOL func_0208b018(void *p);
}

extern "C" {
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

typedef void (Unk_020e0d98::*Unk_020e0d98_Fn)();

Unk_020e0db4::Unk_020e0db4() {
    unk_04 = 0x80;
    unk_08 = 0x60;
}

Unk_020e0db4::~Unk_020e0db4() {}

