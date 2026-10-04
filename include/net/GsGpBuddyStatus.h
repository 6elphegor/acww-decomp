#ifndef NET_GSGPBUDDYSTATUS_H
#define NET_GSGPBUDDYSTATUS_H

#include "types.h"

// GP buddy status (GameSpy GPBuddyStatus without quietModeFlags, 0x210) filled by GsGp_GetBuddyStatus (DwcFriend_GetStatus etc. in src/ov065/unk_ov065_02270e34.cpp,
// DwcMatch_ConnectToFriendServer in src/ov065/unk_ov065_0226fc18.cpp; also src/ov065/unk_ov065_022723b8.cpp).

struct GsGpBuddyStatus {
    /* 0x000 */ u32 profileId;
    /* 0x004 */ u32 status;
    /* 0x008 */ char statusString[0x100];
    /* 0x108 */ char locationString[0x100];
    /* 0x208 */ u32 ip;
    /* 0x20c */ s32 port;
};

#endif
