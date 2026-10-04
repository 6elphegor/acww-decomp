#ifndef NET_GPITRANSFER_H
#define NET_GPITRANSFER_H

#include "types.h"

// GP file-transfer id (cf. GameSpy GP SDK gpiTransfer.h GPITransferID), printed by gpiPeerStartTransferMessage
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct GPITransferID {
    /* 0x0 */ s32 profileid;
    /* 0x4 */ s32 count;
    /* 0x8 */ s32 time;
};

#endif
