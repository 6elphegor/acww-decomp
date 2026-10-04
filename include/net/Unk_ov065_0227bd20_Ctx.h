#ifndef NET_UNK_OV065_0227BD20_CTX_H
#define NET_UNK_OV065_0227BD20_CTX_H

#include "types.h"

// GameSpy Presence (GsGp_*) view of the GP connection (Unk_ov065_0227c538_Ctx), its handle and buddy status records
// (src/ov065/unk_ov065_0227bd20.cpp namespace Nb).

struct Unk_ov065_0227bd20_Ctx {
    /* 0x000 */ u8 pad_000[0x100];
    /* 0x100 */ s32 infoCaching;
    /* 0x104 */ u8 pad_104[4];
    /* 0x108 */ s32 simulation;
    /* 0x10c */ u8 pad_10c[0x198 - 0x10c];
    /* 0x198 */ s32 sessKey;
    /* 0x19c */ u8 pad_19c[0x1d8 - 0x19c];
    /* 0x1d8 */ s32 connectState;
    /* 0x1dc */ u8 pad_1dc[0x1f4 - 0x1dc];
    /* 0x1f4 */ char outputBuffer[0x14];
    /* 0x208 */ s32 peerPort;
    /* 0x20c */ s32 nextOperationId;
    /* 0x210 */ s32 numSearches;
    /* 0x214 */ s32 lastStatus;
    /* 0x218 */ char lastStatusString[0x100];
    /* 0x318 */ char lastLocationString[0x100];
    /* 0x418 */ u8 pad_418[0x430 - 0x418];
    /* 0x430 */ s32 numBuddies;
};

struct Unk_ov065_0227bd20_Handle {
    /* 0x0 */ Unk_ov065_0227bd20_Ctx *connection;
};

struct Unk_ov065_0227c05c_Src {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 status;
    /* 0x08 */ char *statusString;
    /* 0x0c */ char *locationString;
    /* 0x10 */ s32 ip;
    /* 0x14 */ s32 port;
};

struct Unk_ov065_0227c05c_Ent {
    /* 0x00 */ s32 profileId;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Unk_ov065_0227c05c_Src *buddyStatus;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
};

struct Unk_ov065_0227c05c_Out {
    /* 0x000 */ s32 profileId;
    /* 0x004 */ s32 status;
    /* 0x008 */ char statusString[0x100];
    /* 0x108 */ char locationString[0x100];
    /* 0x208 */ s32 ip;
    /* 0x20c */ s32 port;
};

struct Unk_ov065_0227c400_Buf {
    /* 0x000 */ u32 v[0x81];
};

struct Unk_ov065_0227c4b0_Args {
    /* 0x0 */ s32 v[4];
};

#endif
