#ifndef NET_UNK_OV065_0226B3C4_REC_H
#define NET_UNK_OV065_0226B3C4_REC_H

#include "types.h"

// Opaque 4-byte key and 0xc0-byte AP record buffers of the WifiAp search code (src/ov065/unk_ov065_0226b3c4.cpp).

struct Unk_ov065_0226b3c4_Key {
    /* 0x0 */ u8 info[4];
};

struct Unk_ov065_0226b3c4_Rec {
    /* 0x00 */ u8 unk_00[0xc0];
};

#endif
