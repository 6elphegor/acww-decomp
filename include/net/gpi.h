#ifndef NET_GPI_H
#define NET_GPI_H

#include "types.h"
#include "net/Unk_ov065_0227c538_Node.h"
#include "net/gpiPeer.h"
#include "net/gpiCallback.h"

// GameSpy Presence connection (cf. GameSpy GP SDK gpi.h GPIConnection, older TCP-peer version). Initialised in
// src/ov065/unk_ov065_0227c6f0.cpp (gpiInitialize); also used by
// unk_ov065_0227bd20.cpp, unk_ov065_0227cd34.cpp (namespaces Nc, Nd), unk_ov065_0227f2a4.cpp, unk_ov065_0227e160.cpp.

struct GPIConnection {
    /* 0x000 */ u8 errorString;
    /* 0x001 */ u8 pad_001[0xff];
    /* 0x100 */ s32 infoCaching;
    /* 0x104 */ s32 infoCachingBuddyOnly;
    /* 0x108 */ s32 simulation;
    /* 0x10c */ s32 firewall;
    /* 0x110 */ char nick[0x1f];
    /* 0x12f */ char uniquenick[0x15];
    /* 0x144 */ char email[0x33];
    /* 0x177 */ char password[0x1f];
    /* 0x196 */ u8 pad_196[0x2];
    /* 0x198 */ s32 sessKey;
    /* 0x19c */ s32 userid;
    /* 0x1a0 */ s32 profileid;
    /* 0x1a4 */ GPICallback callbacks[6];
    /* 0x1d4 */ s32 cmSocket;
    /* 0x1d8 */ s32 connectState;
    /* 0x1dc */ char *recvBuffer;
    /* 0x1e0 */ s32 recvBufferCapacity;
    /* 0x1e4 */ s32 recvBufferLength;
    /* 0x1e8 */ s32 recvBufferPos;
    /* 0x1ec */ char *inputBuffer;
    /* 0x1f0 */ s32 inputBufferSize;
    /* 0x1f4 */ char *outputBuffer;
    /* 0x1f8 */ s32 outputBufferCapacity;
    /* 0x1fc */ s32 outputBufferLength;
    /* 0x200 */ s32 outputBufferPos;
    /* 0x204 */ s32 peerSocket;
    /* 0x208 */ s32 peerPort;
    /* 0x20c */ s32 nextOperationID;
    /* 0x210 */ s32 numSearches;
    /* 0x214 */ s32 lastStatus;
    /* 0x218 */ u8 lastStatusString;
    /* 0x219 */ u8 pad_219[0xff];
    /* 0x318 */ u8 lastLocationString;
    /* 0x319 */ u8 pad_319[0xff];
    /* 0x418 */ s32 errorCode;
    /* 0x41c */ s32 fatalError;
    /* 0x420 */ s32 diskCache;
    /* 0x424 */ Unk_ov065_0227c538_Node *operationList;
    /* 0x428 */ void *profileTable;
    /* 0x42c */ s32 numProfiles;
    /* 0x430 */ s32 numBuddies;
    /* 0x434 */ GPIPeer *peerList;
    /* 0x438 */ s32 callbackList;
    /* 0x43c */ s32 lastCallback;
    /* 0x440 */ char *profileUpdateBuffer;
    /* 0x444 */ s32 profileUpdateBufferCapacity;
    /* 0x448 */ s32 profileUpdateBufferLength;
    /* 0x44c */ s32 profileUpdateBufferPos;
    /* 0x450 */ char *userUpdateBuffer;
    /* 0x454 */ s32 userUpdateBufferCapacity;
    /* 0x458 */ s32 userUpdateBufferLength;
    /* 0x45c */ s32 userUpdateBufferPos;
    /* 0x460 */ char *unk_460;
    /* 0x464 */ s32 unk_464;
    /* 0x468 */ s32 unk_468;
    /* 0x46c */ s32 productID;
    /* 0x470 */ s32 namespaceID;
    /* 0x474 */ u8 pad_474[0x1c];
};

#endif
