#ifndef NET_GP_H
#define NET_GP_H

#include "types.h"

// GameSpy Presence public types (GP SDK gp.h): the GPConnection handle, GPBuddyStatus and the callback argument
// records (*Arg / *Match; this older GP has no namespaceID in GPProfileSearchMatch): search results
// (src/ov065/unk_ov065_02281a5c.cpp), buddy messages (unk_ov065_0227cd34.cpp, unk_ov065_02280c08.cpp) and the records
// gpiCallCallback frees (unk_ov065_0227df0c.cpp).

struct GPRecvBuddyMessageArg {
    /* 0x0 */ s32 profile;
    /* 0x4 */ s32 date;
    /* 0x8 */ char *message;
};

struct GPRecvBuddyRequestArg {
    /* 0x0 */ s32 profile;
    /* 0x4 */ s32 date;
    /* 0x8 */ char reason[0x401];
};

struct GPRecvBuddyStatusArg {
    /* 0x0 */ s32 profile;
    /* 0x4 */ s32 date;
    /* 0x8 */ s32 index;
};

struct GPRecvGameInviteArg {
    /* 0x0 */ s32 profile;
    /* 0x4 */ s32 productID;
    /* 0x8 */ char location[0x100];
};

struct GPTransferCallbackArg {
    /* 0x00 */ s32 transfer;
    /* 0x04 */ s32 type;
    /* 0x08 */ s32 index;
    /* 0x0c */ s32 num;
    /* 0x10 */ char *message;
};

struct GPProfileSearchMatch {
    /* 0x00 */ s32 profile;
    /* 0x04 */ char nick[0x1f];
    /* 0x23 */ char uniquenick[0x15];
    /* 0x38 */ char firstname[0x1f];
    /* 0x57 */ char lastname[0x1f];
    /* 0x76 */ char email[0x33];
    /* 0xa9 */ u8 pad_a9[3];
};

struct GPIsValidEmailResponseArg {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 isValid;
};

struct GPGetUserNicksResponseArg {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 numNicks;
    /* 0x3c */ char **nicks;
    /* 0x40 */ char **uniquenicks;
};

struct GPFindPlayerMatch {
    /* 0x000 */ s32 profile;
    /* 0x004 */ char nick[0x1f];
    /* 0x023 */ u8 pad_23;
    /* 0x024 */ s32 status;
    /* 0x028 */ char statusString[0x100];
};

struct GPFindPlayersResponseArg {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 productID;
    /* 0x8 */ s32 numMatches;
    /* 0xc */ GPFindPlayerMatch *matches;
};

struct GPGetReverseBuddiesResponseArg {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 numProfiles;
    /* 0x8 */ GPProfileSearchMatch *profiles;
};

struct GPCheckResponseArg {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 profile;
};


struct GPSuggestUniqueNickResponseArg {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 numSuggestedNicks;
    /* 0x08 */ char **suggestedNicks;
};

struct GPProfileSearchResponseArg {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 numMatches;
    /* 0x08 */ s32 more;
    /* 0x0c */ GPProfileSearchMatch *matches;
};

struct GPErrorArg {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 errorCode;
    /* 0x8 */ void *errorString;
    /* 0xc */ s32 fatal;
};

struct GPConnectResponseArg {
    /* 0x00 */ s32 result;
    /* 0x04 */ s32 profile;
    /* 0x08 */ u8 pad_08[0x18];
};

// GP buddy status (GameSpy GPBuddyStatus without quietModeFlags, 0x210) filled by gpGetBuddyStatus (DwcFriend_GetStatus etc. in src/ov065/unk_ov065_02270e34.cpp,
// DwcMatch_ConnectToFriendServer in src/ov065/unk_ov065_0226fc18.cpp; also src/ov065/unk_ov065_022723b8.cpp).

struct GPBuddyStatus {
    /* 0x000 */ u32 profile;
    /* 0x004 */ u32 status;
    /* 0x008 */ char statusString[0x100];
    /* 0x108 */ char locationString[0x100];
    /* 0x208 */ u32 ip;
    /* 0x20c */ s32 port;
};

// GPConnection, the handle every gp*/gpi* function takes as GPConnection * (DwcControl::gpConnection, pointed to by the
// login and friend controls): the SDK declares it as void * and casts it to GPIConnection * in each function; here it is
// typed, so GPConnection * is GPIConnection ** (net/gpi.h).
struct GPIConnection;
typedef GPIConnection *GPConnection;

#endif
