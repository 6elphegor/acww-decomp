#ifndef NET_DWCNETCHANNELTABLE_H
#define NET_DWCNETCHANNELTABLE_H

#include "types.h"
#include "net/DwcNetChannel.h"

// DWC data channel table sDwcNetChannels (0x614: 32 channels, callbacks, max chunk size)
// (src/ov065/unk_ov065_02277140.cpp, src/ov065/unk_ov065_022723b8.cpp namespace F0227702c).

struct DwcNetChannelTable {
    /* 0x000 */ DwcNetChannel channels[32];
    /* 0x600 */ void (*sendDoneCallback)(...);
    /* 0x604 */ void (*recvCallback)(...);
    /* 0x608 */ void (*recvTimeoutCallback)(...);
    /* 0x60c */ void (*pingCallback)(...);
    /* 0x610 */ u16 maxChunkSize;
    /* 0x612 */ u16 unk_612;
};

#endif
