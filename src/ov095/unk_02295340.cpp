#include "types.h"

struct Unk_ov095_02292360 {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
};

extern u32 data_ov095_0229553c[];
extern u32 data_ov095_02295494[];
extern u32 data_ov095_022954cc[];
extern u32 data_ov095_02295504[];

extern "C" {
void func_ov095_022950f4(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02294fb4(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02294ebc(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02294dc0(Unk_ov095_02292360 *s, u32 a, u32 b);
void func_ov095_02292368(Unk_ov095_02292360 *s, u32 a);

void func_ov095_02295340(Unk_ov095_02292360 *s, s32 i) {
    s->unk_0c &= ~(1 << i);
    switch (s->unk_02) {
    case 0: func_ov095_022950f4(s, data_ov095_0229553c[i], 0xc); break;
    case 1: func_ov095_02294fb4(s, data_ov095_02295494[i], 0xc); break;
    case 2: func_ov095_02294ebc(s, data_ov095_022954cc[i], 0xc); break;
    case 3: func_ov095_02294dc0(s, data_ov095_02295504[i], 0xc); break;
    }
    func_ov095_02292368(s, 1);
}

void func_ov095_022953c0(Unk_ov095_02292360 *s, s32 i) {
    s->unk_0c |= (1 << i);
    switch (s->unk_02) {
    case 0: func_ov095_022950f4(s, data_ov095_0229553c[i], 0xe); break;
    case 1: func_ov095_02294fb4(s, data_ov095_02295494[i], 0xe); break;
    case 2: func_ov095_02294ebc(s, data_ov095_022954cc[i], 0xe); break;
    case 3: func_ov095_02294dc0(s, data_ov095_02295504[i], 0xe); break;
    }
    func_ov095_02292368(s, 1);
}

BOOL func_ov095_02295440(Unk_ov095_02292360 *s, s32 i) {
    u32 v = s->unk_0c;
    if ((v & (1 << i)) != 0) return TRUE;
    return FALSE;
}
}
