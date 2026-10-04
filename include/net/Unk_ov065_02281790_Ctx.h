#ifndef NET_UNK_OV065_02281790_CTX_H
#define NET_UNK_OV065_02281790_CTX_H

#include "types.h"
#include "net/gpiOperation.h"
#include "net/gpiSearch.h"
#include "net/gpiProfile.h"
#include "net/Unk_ov065_0227c538_Node.h"

// GPIConnection view of the profile/search code (sessKey, numSearches, operation list, profile table)
// (src/ov065/unk_ov065_0228176c.cpp, src/ov065/unk_ov065_02281a5c.cpp).

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
    /* 0x424 */ GPIOperation *operationList;
    /* 0x428 */ void *profileTable;
    /* 0x42c */ s32 numProfiles;
    /* 0x430 */ s32 numBuddies;
    /* 0x434 */ u8 pad_434[0x46c - 0x434];
    /* 0x46c */ s32 productId;
    /* 0x470 */ s32 namespaceId;
};

#endif
