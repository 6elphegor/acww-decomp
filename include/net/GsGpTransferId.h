#ifndef NET_GSGPTRANSFERID_H
#define NET_GSGPTRANSFERID_H

#include "types.h"

// GP file-transfer id (cf. GameSpy GP SDK gpiTransfer.h GPITransferID), printed by GsGpPeer_SendTransferHeader
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct GsGpTransferId {
    /* 0x0 */ s32 profileId;
    /* 0x4 */ s32 count;
    /* 0x8 */ s32 time;
};

#endif
