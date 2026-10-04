#ifndef NET_UNK_OV065_0227F324_REC_H
#define NET_UNK_OV065_0227F324_REC_H

#include "types.h"
#include "net/gpiInfo.h"
#include "net/gpiProfile.h"

// 0xf0-byte block used to copy a GPIInfoCache in one go (gpiSetInfoCache, src/ov065/unk_ov065_0227f2a4.cpp).

struct Unk_ov065_0227f324_Copy {
    /* 0x00 */ s64 v[30];
};

#endif
