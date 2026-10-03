#include "types.h"

extern "C" {
s32 func_02065578();
void Letter_Clear(void *p);
void _ZN6LetterD1Ev(void *p);
void _ZN6LetterC1Ev(void *p);
void LostChildRecord_Destruct(void *p);
void LostChildRecord_Construct(void *p);
void VillagerTransfer_DestructVillager(void *p);
void VillagerTransfer_ConstructVillager(void *p);
void func_020b0a30(void *p);
void _ZN12Unk_020b0a60D1Ev(void *p);
void _ZN12Unk_020b0a60C1Ev(void *p);
void MI_CpuFill8(void *p, s32 v, u32 n);
}

extern u8 data_021e7f8c[];

struct Unk_0208f238_Bits {
    u8 b0 : 1;
};

// Player-slot style record, 0x84c bytes (ctor 0x0208f238, dtor 0x0208f204)
class Unk_0208f238 {
public:
    Unk_0208f238();
    ~Unk_0208f238();
    void *func_0208f148();
    void *func_0208f154();
    u32 func_0208f15c();
    void func_0208f168();
    void func_0208f174();
    void *func_0208f18c();
    u32 func_0208f198();
    void func_0208f1a8(u32 v);
    s32 func_0208f1c0();
    u32 getChecksum();
    void setChecksum(u32 v);

    /* 0x000 */ u8 unk_000[0xf4];
    /* 0x0f4 */ u8 unk_0f4;
    /* 0x0f5 */ u8 unk_0f5[0x47];
    /* 0x13c */ u8 unk_13c[0x700];
    /* 0x83c */ u8 unk_83c;
    /* 0x83d */ u8 unk_83d;
    /* 0x83e */ u8 unk_83e[0xc];
    /* 0x84a */ u16 unk_84a;
};

class Unk_021cebb8 {
public:
    Unk_021cebb8();
    ~Unk_021cebb8();
    Unk_0208f238 unk_00[3];
};

Unk_021cebb8 data_021cebb8;

extern "C" void *func_0208f0b0(s32 i);
extern "C" void *func_0208f0e8(s32 i);

Unk_0208f238::Unk_0208f238() {
    _ZN6LetterC1Ev(this);
    _ZN12Unk_020b0a60C1Ev((u8 *)this + 0xf4);
    VillagerTransfer_ConstructVillager((u8 *)this + 0x13c);
    LostChildRecord_Construct((u8 *)this + 0x83e);
}

Unk_0208f238::~Unk_0208f238() {
    LostChildRecord_Destruct((u8 *)this + 0x83e);
    VillagerTransfer_DestructVillager((u8 *)this + 0x13c);
    _ZN12Unk_020b0a60D1Ev((u8 *)this + 0xf4);
    _ZN6LetterD1Ev(this);
}

extern "C" void func_0208f200() {}

extern "C" void func_0208f1dc(void *p) {
    MI_CpuFill8(p, 0, 0x84c);
    Letter_Clear(p);
    func_020b0a30((u8 *)p + 0xf4);
}

void Unk_0208f238::setChecksum(u32 v) { unk_84a = v; }

u32 Unk_0208f238::getChecksum() { return unk_84a; }

s32 Unk_0208f238::func_0208f1c0() { return 1; }

void Unk_0208f238::func_0208f1a8(u32 v) { unk_83d = (unk_83d & ~1) | (v & 1); }

u32 Unk_0208f238::func_0208f198() { return ((Unk_0208f238_Bits *)&unk_83d)->b0; }

void *Unk_0208f238::func_0208f18c() { return unk_83e; }

void Unk_0208f238::func_0208f174() {
    s32 v = unk_83c + 1;
    if (v > 5) {
        v = 5;
    }
    unk_83c = v;
}

void Unk_0208f238::func_0208f168() { unk_83c = 0; }

u32 Unk_0208f238::func_0208f15c() { return unk_83c; }

extern "C" void func_0208f158() {}

void *Unk_0208f238::func_0208f154() { return &unk_0f4; }

void *Unk_0208f238::func_0208f148() { return unk_13c; }

Unk_021cebb8::Unk_021cebb8() {}

Unk_021cebb8::~Unk_021cebb8() {}

extern "C" void *func_0208f0e8(s32 i) { return &data_021cebb8.unk_00[i]; }

extern "C" void *func_0208f0b0(s32 i) {
    switch (i) {
    case 1:
        return func_0208f0e8(0);
    case 2:
        return func_0208f0e8(1);
    case 3:
        return func_0208f0e8(2);
    default:
        return data_021e7f8c;
    }
}

