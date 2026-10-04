#ifndef NET_UNK_OV065_02290F78_H
#define NET_UNK_OV065_02290F78_H

#include "types.h"
#include "net/Unk_ov065_02277418_Rec.h"

// DWC-like send/receive channel table (ov065_039: 32 channels, callbacks, max chunk size)
// (src/ov065/unk_ov065_02277140.cpp, src/ov065/unk_ov065_022723b8.cpp namespace F0227702c).

struct Unk_ov065_02290f78 {
    /* 0x000 */ Unk_ov065_02277418_Rec channels[32];
    /* 0x600 */ void (*unk_600)(...);
    /* 0x604 */ void (*unk_604)(...);
    /* 0x608 */ void (*unk_608)(...);
    /* 0x60c */ void (*unk_60c)(...);
    /* 0x610 */ u16 maxChunkSize;
    /* 0x612 */ u16 unk_612;
};

#endif
