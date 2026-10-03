#include "types.h"

// Fixed 0x29 byte string holder (vtable and constructors live in the next unit)
class Unk_020e0470 {
public:
    s32 func_0206f828();

    /* 0x00 */ u8 pad_00[0x0e];
    /* 0x0e */ u8 unk_0e[0x29];
};

extern "C" {
extern u8 data_020de390;
s32 func_020512e0(const u8 *str, s32 len);

void func_0206f4d8(u8 *p, u32 x);
void CommSub_StartCountdown(u8 *p, u32 x);
void func_0206f4f0(u8 *p, u32 x);
void func_0206f56c(u8 *p, u32 x);
void func_0206f5a0(u8 *p, u32 x);
void func_0206f5ac(u8 *p, u32 x);
void func_0206f650(u8 *p, u32 x);
void func_0206f668(u8 *p, u32 x);
void func_0206f6b8(u8 *p, u32 x);
void func_0206f6fc(u8 *p, u32 x);
void func_0206f770(u8 *p, u32 x);
void func_0206f7d0(u8 *p, u32 x);

typedef void (*Unk_0206f804_Fn)(u8 *, u32);
}

Unk_0206f804_Fn data_020de3a8[24] = {
    func_0206f7d0, func_0206f770, func_0206f6fc, func_0206f6b8, func_0206f6b8, func_0206f6fc,
    func_0206f668, func_0206f650, func_0206f5ac, func_0206f5a0, func_0206f5a0, func_0206f5a0,
    func_0206f56c, func_0206f4f0, func_0206f4f0, func_0206f4f0, func_0206f4f0, func_0206f4f0,
    CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, CommSub_StartCountdown, func_0206f4d8,
};

s32 Unk_020e0470::func_0206f828() { return func_020512e0(unk_0e, 0x29); }

extern "C" void func_0206f81c() { data_020de390 = 0x18; }

extern "C" void func_0206f804(u8 *p, u32 x) { data_020de3a8[p[0]](p, x); }
