#ifndef NET_UNK_OV065_02281BF4_RES_H
#define NET_UNK_OV065_02281BF4_RES_H

#include "types.h"

// GP search results: profile record, match entry and the callback result records
// (src/ov065/unk_ov065_0228176c.cpp, src/ov065/unk_ov065_02281a5c.cpp).

struct Unk_ov065_02281bf4_Rec {
    /* 0x00 */ s32 profileId;
    /* 0x04 */ char nick[0x1f];
    /* 0x23 */ char uniqueNick[0x15];
    /* 0x38 */ char firstName[0x1f];
    /* 0x57 */ char lastName[0x1f];
    /* 0x76 */ char email[0x33];
    /* 0xa9 */ u8 pad_a9[3];
};

struct Unk_ov065_02281bf4_Res2 {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 isValid;
};

struct Unk_ov065_02281bf4_Res3 {
    /* 0x00 */ s32 result;
    /* 0x04 */ char email[0x34];
    /* 0x38 */ s32 numNicks;
    /* 0x3c */ char **nicks;
    /* 0x40 */ char **uniqueNicks;
};

struct Unk_ov065_02281bf4_Ent {
    /* 0x000 */ s32 profileId;
    /* 0x004 */ char nick[0x1f];
    /* 0x023 */ u8 pad_23;
    /* 0x024 */ s32 statusCode;
    /* 0x028 */ char statusString[0x100];
};

struct Unk_ov065_02281bf4_Res4 {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 productId;
    /* 0x8 */ s32 numMatches;
    /* 0xc */ Unk_ov065_02281bf4_Ent *matches;
};

struct Unk_ov065_02281bf4_Res7 {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 numProfiles;
    /* 0x8 */ Unk_ov065_02281bf4_Rec *profiles;
};

struct Unk_ov065_02281bf4_Res5 {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 profileId;
};

#endif
