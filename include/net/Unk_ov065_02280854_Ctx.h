#ifndef NET_UNK_OV065_02280854_CTX_H
#define NET_UNK_OV065_02280854_CTX_H

#include "types.h"

// GP connection view with the operation list, its operation node and the connection handle
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_02280854_Node {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 data;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 callbackParam;
    /* 0x14 */ s32 state;
    /* 0x18 */ s32 id;
    /* 0x1c */ s32 result;
    /* 0x20 */ Unk_ov065_02280854_Node *next;
};

struct Unk_ov065_02280854_Ctx {
    /* 0x000 */ u8 pad_000[0x20c];
    /* 0x20c */ s32 nextOperationId;
    /* 0x210 */ s32 numSearches;
    /* 0x214 */ u8 pad_214[0x418 - 0x214];
    /* 0x418 */ s32 errorCode;
    /* 0x41c */ u8 pad_41c[8];
    /* 0x424 */ Unk_ov065_02280854_Node *operationList;
};

struct Unk_ov065_02280854_H {
    /* 0x0 */ Unk_ov065_02280854_Ctx *connection;
};

#endif
