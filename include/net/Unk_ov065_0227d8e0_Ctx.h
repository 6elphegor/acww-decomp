#ifndef NET_UNK_OV065_0227D8E0_CTX_H
#define NET_UNK_OV065_0227D8E0_CTX_H

#include "types.h"

// GameSpy Presence connection (callback-queue view), its handle, output buffer, callback list and callback
// argument records (src/ov065/unk_ov065_0227df0c.cpp, unk_ov065_0227d96c.cpp, unk_ov065_0227cd34.cpp
// namespace Nf, unk_ov065_0227e160.cpp namespace Na).

struct Unk_ov065_0227d8e0_Buf {
    /* 0x0 */ char *buffer;
    /* 0x4 */ s32 capacity;
    /* 0x8 */ s32 length;
    /* 0xc */ s32 pos;
};

struct Unk_ov065_0227d8e0_Pair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
};

struct Unk_ov065_0227e0e8_Wrap {
    /* 0x0 */ Unk_ov065_0227d8e0_Pair callback;
};

struct Unk_ov065_0227d8e0_Node {
    /* 0x00 */ void (*unk_00)(void *, void *, s32);
    /* 0x04 */ s32 param;
    /* 0x08 */ void *arg;
    /* 0x0c */ s32 argType;
    /* 0x10 */ void *operationId;
    /* 0x14 */ Unk_ov065_0227d8e0_Node *next;
};

struct Unk_ov065_0227d8e0_Ctx {
    /* 0x000 */ u8 pad_000[0x198];
    /* 0x198 */ s32 sessKey;
    /* 0x19c */ s32 userId;
    /* 0x1a0 */ s32 profileId;
    /* 0x1a4 */ Unk_ov065_0227e0e8_Wrap callbacks[6];
    /* 0x1d4 */ s32 cmSocket;
    /* 0x1d8 */ s32 connectState;
    /* 0x1dc */ char *recvBuffer;
    /* 0x1e0 */ u8 pad_1e0[0x1ec - 0x1e0];
    /* 0x1ec */ char *inputBuffer;
    /* 0x1f0 */ u8 pad_1f0[4];
    /* 0x1f4 */ Unk_ov065_0227d8e0_Buf outputBuffer;
    /* 0x204 */ s32 peerSocket;
    /* 0x208 */ u8 pad_208[0x418 - 0x208];
    /* 0x418 */ s32 errorCode;
    /* 0x41c */ s32 fatalError;
    /* 0x420 */ u8 pad_420[4];
    /* 0x424 */ void *operationList;
    /* 0x428 */ u8 pad_428[0x434 - 0x428];
    /* 0x434 */ void *peerList;
    /* 0x438 */ Unk_ov065_0227d8e0_Node *callbackList;
    /* 0x43c */ Unk_ov065_0227d8e0_Node *callbackListTail;
    /* 0x440 */ void *profileUpdateBuffer;
    /* 0x444 */ u8 pad_444[0x450 - 0x444];
    /* 0x450 */ void *userUpdateBuffer;
};

struct Unk_ov065_0227d8e0_Handle {
    /* 0x0 */ Unk_ov065_0227d8e0_Ctx *connection;
};

struct Unk_ov065_0227d8e0_Arg {
    /* 0x00 */ u8 pad_00[0x10];
    /* 0x10 */ char *authSig;
};

struct Unk_ov065_0227dfd8_D3 {
    /* 0x00 */ u8 pad_00[0x38];
    /* 0x38 */ s32 numNicks;
    /* 0x3c */ s32 *nicks;
    /* 0x40 */ s32 *uniqueNicks;
};

struct Unk_ov065_0227dfd8_D4 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

struct Unk_ov065_0227dfd8_D9 {
    /* 0x0 */ s32 unk_00;
    /* 0x4 */ s32 numNicks;
    /* 0x8 */ s32 *nicks;
};

struct Unk_ov065_0227e0e8_G {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ void *id;
};

struct Unk_ov065_0227e160_Cb {
    /* 0x0 */ s32 result;
    /* 0x4 */ s32 errorCode;
    /* 0x8 */ void *errorString;
    /* 0xc */ s32 isFatal;
};

#endif
