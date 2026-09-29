#include "text/Unk_02050288.h"

extern "C" {
extern u32 data_020ca638;

s32 func_02050cb4(Unk_02050288_Font *font, s32 c) {
    BOOL ok = FALSE; s32 result = ~ok;
    u32 i;
    u32 idx;
    s32 v;
    s32 neg;
    u32 count;
    if (font->unk_0c != NULL && c <= 7 && c >= 1) {
        ok = TRUE;
    }
    if (ok) {
        result = func_02050cb4(font->unk_0c, c + 0x20);
        if (result != -1) {
            result |= data_020ca638;
        }
    } else {
        count = font->unk_00->unk_00;
        i = 0;
        neg = ~i;
        for (; i < count; i++) {
            v = neg;
            if ((i & 0x80000000) != 0) {
                Unk_02050288_Font *sec = ((volatile Unk_02050288_Font *)font)->unk_0c;
                idx = i & 0x7fffffff;
                if (idx < sec->unk_00->unk_00) {
                    v = sec->unk_04[idx].unk_00;
                }
            } else if (i < count) {
                v = font->unk_04[i].unk_00;
            }
            if (v == c) {
                result = i;
                break;
            }
        }
    }
    return result;
}
}
