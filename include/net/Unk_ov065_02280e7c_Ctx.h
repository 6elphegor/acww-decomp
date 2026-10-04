#ifndef NET_UNK_OV065_02280E7C_CTX_H
#define NET_UNK_OV065_02280E7C_CTX_H

#include "types.h"

// GP peer-to-peer connection: peer node, connection view, buddy entry, callback pair and send state (gpiPeer.c)
// (src/ov065/unk_ov065_02280c08.cpp, src/ov065/unk_ov065_0228176c.cpp).

struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_02280e7c_Node {
    /* 0x00 */ s32 peerState;
    /* 0x04 */ s32 isOutgoing;
    /* 0x08 */ s32 sock;
    /* 0x0c */ s32 profileId;
    /* 0x10 */ s32 expireTime;
    /* 0x14 */ s32 nackCount;
    /* 0x18 */ char *inputBuffer;
    /* 0x1c */ s32 inputBufferCapacity;
    /* 0x20 */ s32 inputBufferLength;
    /* 0x24 */ s32 inputBufferPos;
    /* 0x28 */ char *outputBuffer;
    /* 0x2c */ s32 outputBufferCapacity;
    /* 0x30 */ s32 outputBufferLength;
    /* 0x34 */ s32 outputBufferPos;
    /* 0x38 */ Unk_ov065_022786bc_Vec *messageQueue;
    /* 0x3c */ Unk_ov065_02280e7c_Node *next;
};

struct Unk_ov065_02280e7c_Ctx {
    /* 0x000 */ u8 pad_000[0x110];
    /* 0x110 */ char nick[0x67];
    /* 0x177 */ char password[0x29];
    /* 0x1a0 */ s32 profileId;
    /* 0x1a4 */ u8 pad_1a4[0x18];
    /* 0x1bc */ s32 buddyMessageCallback;
    /* 0x1c0 */ s32 buddyMessageParam;
    /* 0x1c4 */ u8 pad_1c4[0x40];
    /* 0x204 */ s32 peerSocket;
    /* 0x208 */ u8 pad_208[0x22c];
    /* 0x434 */ Unk_ov065_02280e7c_Node *peerList;
};

struct Unk_ov065_02280e7c_Ent {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 buddyStatus;
    /* 0x0c */ s32 infoCache;
    /* 0x10 */ s32 authSig;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ char *unk_18;
};

struct Unk_ov065_02280e7c_Pair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
    Unk_ov065_02280e7c_Pair() {}
    Unk_ov065_02280e7c_Pair(s32 a, s32 b) { func = a; param = b; }
};

struct Unk_ov065_02280e7c_Pair2 {
    /* 0x0 */ Unk_ov065_02280e7c_Pair p;
};

struct Unk_ov065_02280e7c_Sub {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 sendPos;
    /* 0x10 */ s32 msgType;
    /* 0x14 */ s32 msgOffset;
};

#endif
