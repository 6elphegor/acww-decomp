#ifndef NET_UNK_OV065_02285630_ITEM_H
#define NET_UNK_OV065_02285630_ITEM_H

#include "types.h"

// SSL/TLS-like handshake state machine records (ov065_061 0x02285630..0x02285eb8): message item, serial view,
// peer socket view and byte buffer; used by unk_ov065_02283f34.cpp and unk_ov065_02285778.cpp.

struct Unk_ov065_02285630_Item {
    /* 0x00 */ s32 offset;
    /* 0x04 */ s32 len;
    /* 0x08 */ s32 type;
    /* 0x0c */ u16 serialNumber;
    /* 0x0e */ u16 unk_0e;
};

struct Unk_ov065_02285630_Item8 {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u16 serialNumber;
};

struct Unk_ov065_02285630_Peer {
    /* 0x00 */ u8 pad_00[0x20];
    /* 0x20 */ s32 connectAttemptCallback;
};

struct Unk_ov065_02285630_Buf {
    /* 0x00 */ u8 *data;
    /* 0x04 */ s32 size;
};

#endif
