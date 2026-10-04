#ifndef NET_UNK_OV065_0227F324_REC_H
#define NET_UNK_OV065_0227F324_REC_H

#include "types.h"
#include "net/GsGpInfoCache.h"
#include "net/GsGpProfile.h"

// 0xf0-byte block used to copy a GsGpInfoCache in one go (GsGp_CacheProfileInfo, src/ov065/unk_ov065_0227f2a4.cpp).

struct Unk_ov065_0227f324_Copy {
    /* 0x00 */ s64 v[30];
};

#endif
