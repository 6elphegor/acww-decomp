#include "types.h"

// TU048: 0x0203eb60-0x0203eb78. Dispatch through a table of six handlers (.data 0x020d96d4-0x020d96ec).

typedef s32 (*Unk_0203eb60_Fn)(u8 *, s32);

extern "C" {
s32 func_0203e7d0(u8 *p, s32 x);
s32 func_0203e8d4(u8 *p, s32 x);
s32 func_0203e8e0(u8 *p, s32 x);
s32 func_0203e8ec(u8 *p, s32 x);
}

extern "C" Unk_0203eb60_Fn data_020d96d4[6] = {
    func_0203e8ec, func_0203e8e0, func_0203e8e0, func_0203e8d4, func_0203e7d0, func_0203e7d0,
};

extern "C" s32 func_0203eb60(u8 *p, s32 x) {
    data_020d96d4[*p](p, x);
}
