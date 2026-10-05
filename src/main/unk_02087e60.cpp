#include "types.h"

// TU139: 0x02087e60-0x02087e70. The height table (.rodata 0x020cf588-0x020cf5b8) and its accessor.

extern "C" {
extern const s32 sOamObjWidths[12];
}

extern "C" const s32 sOamObjWidths[12] = {8, 0x10, 0x20, 0x40, 0x10, 0x20, 0x20, 0x40, 8, 8, 0x10, 0x20};

extern "C" s32 Oam_GetWidth(s32 a, s32 b) {
    return sOamObjWidths[b + (a << 2)];
}
