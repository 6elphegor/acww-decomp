#ifndef SYS_UNK_0209D498_TIME_H
#define SYS_UNK_0209D498_TIME_H

#include "types.h"

// 8-byte date/time record filled by Clock_GetDateTime (0x0209d498, main).
struct Unk_0209d498_Time {
    /* 0x0 */ u8 b0, b1, b2, b3, b4, b5, b6, b7;
};

#endif
