#ifndef NET_GSGPCALLBACKARGS_H
#define NET_GSGPCALLBACKARGS_H

#include "types.h"

// GP callback argument records (GP SDK gp.h *Arg / *Match types; this GP version has no namespaceID in
// GsGpProfileSearchMatch): search results (src/ov065/unk_ov065_02281a5c.cpp), buddy messages
// (unk_ov065_0227cd34.cpp, unk_ov065_02280c08.cpp) and the records GsGp_CallCallback frees (unk_ov065_0227df0c.cpp).

struct GsGpBuddyMessage {
    /* 0x0 */ s32 profileId;
    /* 0x4 */ s32 date;
    /* 0x8 */ char *message;
};

struct GsGpBuddyRequest {
    /* 0x0 */ s32 profileId;
    /* 0x4 */ s32 date;
    /* 0x8 */ char reason[0x401];
};

struct GsGpBuddyStatusChange {
    /* 0x0 */ s32 profileId;
    /* 0x4 */ s32 date;
    /* 0x8 */ s32 index;
};

struct GsGpGameInvite {
    /* 0x0 */ s32 profileId;
    /* 0x4 */ s32 productId;
    /* 0x8 */ char location[0x100];
};

struct GsGpTransferEvent {
    /* 0x00 */ s32 transfer;
    /* 0x04 */ s32 type;
    /* 0x08 */ s32 index;
    /* 0x0c */ s32 num;
    /* 0x10 */ char *message;
};

struct GsGpProfileSearchMatch {
    /* 0x00 */ s32 profileId;
    /* 0x04 */ char nick[0x1f];
    /* 0x23 */ char uniqueNick[0x15];
    /* 0x38 */ char firstName[0x1f];
    /* 0x57 */ char lastName[0x1f];
    /* 0x76 */ char email[0x33];
    /* 0xa9 */ u8 pad_a9[3];
};

struct GsGpIsValidEmailResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 isValid;
};

struct GsGpUserNicksResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 numNicks;
    /* 0x3c */ char **nicks;
    /* 0x40 */ char **uniqueNicks;
};

struct GsGpFindPlayerMatch {
    /* 0x000 */ s32 profileId;
    /* 0x004 */ char nick[0x1f];
    /* 0x023 */ u8 pad_23;
    /* 0x024 */ s32 statusCode;
    /* 0x028 */ char statusString[0x100];
};

struct GsGpFindPlayersResponse {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 productId;
    /* 0x8 */ s32 numMatches;
    /* 0xc */ GsGpFindPlayerMatch *matches;
};

struct GsGpReverseBuddiesResponse {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 numProfiles;
    /* 0x8 */ GsGpProfileSearchMatch *profiles;
};

struct GsGpCheckResponse {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 profileId;
};


struct GsGpSuggestUniqueNickResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 numNicks;
    /* 0x08 */ char **nicks;
};

struct GsGpProfileSearchResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 numMatches;
    /* 0x08 */ s32 moreStatus;
    /* 0x0c */ GsGpProfileSearchMatch *matches;
};

struct GsGpError {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 errorCode;
    /* 0x8 */ void *errorString;
    /* 0xc */ s32 isFatal;
};

struct GsGpConnectResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 profileId;
    /* 0x08 */ u8 pad_08[0x18];
};

#endif
