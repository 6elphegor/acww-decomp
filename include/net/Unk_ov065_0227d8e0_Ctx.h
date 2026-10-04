#ifndef NET_UNK_OV065_0227D8E0_CTX_H
#define NET_UNK_OV065_0227D8E0_CTX_H

#include "types.h"
#include "net/GsGpCallbackArgs.h"
#include "net/GsGpBuffer.h"
#include "net/GsGpCallbackPair.h"
#include "net/GsGpProfile.h"
#include "net/GsGpOperation.h"

// GsGpContext view of gpiCallback/gpiBuffer code (output buffer as a GsGpBuffer, callback list), the handle that points
// to it, and the callback wrapper (src/ov065/unk_ov065_0227df0c.cpp, unk_ov065_0227d96c.cpp, unk_ov065_0227cd34.cpp
// namespace Nf, unk_ov065_0227e160.cpp namespace Na).

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
    /* 0x1f4 */ GsGpBuffer outputBuffer;
    /* 0x204 */ s32 peerSocket;
    /* 0x208 */ u8 pad_208[0x418 - 0x208];
    /* 0x418 */ s32 errorCode;
    /* 0x41c */ s32 fatalError;
    /* 0x420 */ u8 pad_420[4];
    /* 0x424 */ void *operationList;
    /* 0x428 */ u8 pad_428[0x434 - 0x428];
    /* 0x434 */ void *peerList;
    /* 0x438 */ GsGpQueuedCallback *callbackList;
    /* 0x43c */ GsGpQueuedCallback *callbackListTail;
    /* 0x440 */ void *profileUpdateBuffer;
    /* 0x444 */ u8 pad_444[0x450 - 0x444];
    /* 0x450 */ void *userUpdateBuffer;
};

struct Unk_ov065_0227d8e0_Handle {
    /* 0x0 */ Unk_ov065_0227d8e0_Ctx *connection;
};

#endif
