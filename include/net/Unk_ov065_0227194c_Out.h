#ifndef NET_UNK_OV065_0227194C_OUT_H
#define NET_UNK_OV065_0227194C_OUT_H

#include "types.h"

// Buddy status output of DwcFriend_GetBuddyStatus / GsGp_GetBuddyStatus (src/ov065/unk_ov065_02270e34.cpp).

struct Unk_ov065_0227194c_Out {
    /* 0x000 */ u32 profileId;
    /* 0x004 */ u32 status;
    /* 0x008 */ char statusString[0x100];
    /* 0x108 */ char locationString[0x108];
};

#endif
