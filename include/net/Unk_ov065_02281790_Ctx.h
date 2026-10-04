#ifndef NET_UNK_OV065_02281790_CTX_H
#define NET_UNK_OV065_02281790_CTX_H

#include "types.h"
#include "net/Unk_ov065_02281974_Pair.h"

// GP profile/search operations: buddy status, profile element, search connection, operation node, connection view, lookup key
// (src/ov065/unk_ov065_0228176c.cpp, src/ov065/unk_ov065_02281a5c.cpp).

struct Unk_ov065_02281790_Sub {
    /* 0x0 */ s32 buddyIndex;
    /* 0x4 */ s32 status;
    /* 0x8 */ void *statusString;
    /* 0xc */ void *locationString;
};

struct Unk_ov065_02281790_Elem {
    /* 0x00 */ s32 profileId;
    /* 0x04 */ s32 userId;
    /* 0x08 */ Unk_ov065_02281790_Sub *buddyStatus;
    /* 0x0c */ s32 infoCache;
    /* 0x10 */ void *authSig;
    /* 0x14 */ s32 requestCount;
    /* 0x18 */ void *peerSig;
};

struct Unk_ov065_02281790_Conn {
    /* 0x000 */ s32 searchType;
    /* 0x004 */ s32 sock;
    /* 0x008 */ char *inputBuffer;
    /* 0x00c */ u8 pad_0c[0x18 - 0x0c];
    /* 0x018 */ char *outputBuffer;
    /* 0x01c */ u8 pad_1c[0x28 - 0x1c];
    /* 0x028 */ char nick[0x1f];
    /* 0x047 */ char uniqueNick[0x15];
    /* 0x05c */ char email[0x33];
    /* 0x08f */ char firstName[0x1f];
    /* 0x0ae */ char lastName[0x1f];
    /* 0x0cd */ char password[0x1f];
    /* 0x0ec */ char cdKey[0x130 - 0xec];
    /* 0x130 */ s32 icqUin;
    /* 0x134 */ s32 skip;
    /* 0x138 */ s32 productId;
    /* 0x13c */ s32 isProcessing;
    /* 0x140 */ s32 isFinished;
};

struct Unk_ov065_02281790_Node {
    /* 0x00 */ s32 type;
    /* 0x04 */ Unk_ov065_02281790_Conn *data;
    /* 0x08 */ Unk_ov065_02281790_Sub *unk_08;
    /* 0x0c */ Unk_ov065_02281974_Nest unk_0c;
    /* 0x14 */ s32 state;
    /* 0x18 */ s32 id;
    /* 0x1c */ s32 result;
    /* 0x20 */ Unk_ov065_02281790_Node *next;
};

struct Unk_ov065_02281790_Ctx {
    /* 0x000 */ u8 pad_000[0x198];
    /* 0x198 */ s32 sessKey;
    /* 0x19c */ u8 pad_19c[4];
    /* 0x1a0 */ s32 profileId;
    /* 0x1a4 */ u8 pad_1a4[0x210 - 0x1a4];
    /* 0x210 */ s32 numSearches;
    /* 0x214 */ u8 pad_214[0x418 - 0x214];
    /* 0x418 */ s32 errorCode;
    /* 0x41c */ u8 pad_41c[0x424 - 0x41c];
    /* 0x424 */ Unk_ov065_02281790_Node *operationList;
    /* 0x428 */ void *profileTable;
    /* 0x42c */ s32 numProfiles;
    /* 0x430 */ s32 numBuddies;
    /* 0x434 */ u8 pad_434[0x46c - 0x434];
    /* 0x46c */ s32 productId;
    /* 0x470 */ s32 namespaceId;
};

struct Unk_ov065_02281790_L1 {
    /* 0x0 */ s32 a;
    /* 0x4 */ Unk_ov065_02281790_Node *r;
};

#endif
