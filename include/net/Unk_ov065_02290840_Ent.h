#ifndef NET_UNK_OV065_02290840_ENT_H
#define NET_UNK_OV065_02290840_ENT_H

#include "types.h"

// DWC matchmaking user key entry (sDwcMatchUserKeys[], 0x738 bytes = 0x9a entries; src/ov065/unk_ov065_022723b8.cpp).

struct Unk_ov065_02290840_Ent {
    /* 0x00 */ u8 keyId;
    /* 0x01 */ u8 isString;
    /* 0x02 */ u8 unk_02[6];
    /* 0x08 */ s32 *value;
};

#endif
