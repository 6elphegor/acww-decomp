// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov067_0226198c_S {
    u8 pad_0000[0xe8];
    u32 unk_e8;
    u8 pad_ec[0x5760 - 0xec];
    u8 unk_5760[0x190];
    u32 unk_58f0;
};

extern "C" {
extern Unk_ov067_0226198c_S *data_ov067_02262268;
u32 *func_ov067_0225f8f4(void *a, u32 b, s32 c, s32 d);
s32 func_ov067_0225f8e4(void *a, void *b);
}

#pragma thumb off
extern "C" {

void func_ov067_0226198c(void) {
    u32 *r;
    r = func_ov067_0225f8f4(data_ov067_02262268->unk_5760, data_ov067_02262268->unk_58f0, 0, 0);
    if (r == NULL) {
        r = func_ov067_0225f8f4(data_ov067_02262268->unk_5760, 0, 0, 1);
    }
    func_ov067_0225f8e4(data_ov067_02262268->unk_5760, r);
    data_ov067_02262268->unk_e8 = *r;
}

}
#pragma thumb reset
