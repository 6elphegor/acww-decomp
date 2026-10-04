#ifndef NET_GSGPPROFILE_H
#define NET_GSGPPROFILE_H

#include "types.h"

// GP profile list entry (cf. GameSpy GP SDK gpiProfile.h GPIProfile, older version without buddyStatusInfo / block list) and its
// buddy status (GsGpBuddyStatusInfo); kept in GsGpContext.profileTable (src/ov065/unk_ov065_0228176c.cpp gpiProfile.c).

struct GsGpInfoCache;

struct GsGpBuddyStatusInfo {
    /* 0x00 */ s32 buddyIndex;
    /* 0x04 */ s32 status;
    /* 0x08 */ char *statusString;
    /* 0x0c */ char *locationString;
    /* 0x10 */ s32 ip;
    /* 0x14 */ s32 port;
};

struct GsGpProfile {
    /* 0x00 */ s32 profileId;
    /* 0x04 */ s32 userId;
    /* 0x08 */ GsGpBuddyStatusInfo *buddyStatus;
    /* 0x0c */ GsGpInfoCache *infoCache;
    /* 0x10 */ char *authSig;
    /* 0x14 */ s32 requestCount;
    /* 0x18 */ char *peerSig;
};

struct GsGpFindBuddyArgs {
    /* 0x0 */ s32 index;
    /* 0x4 */ GsGpProfile *profile;
};

#endif
