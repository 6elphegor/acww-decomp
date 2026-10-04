#ifndef NET_UNK_OV065_02282F90_CONN_H
#define NET_UNK_OV065_02282F90_CONN_H

#include "types.h"

// GameSpy search-server connection (ov065_057 TCP connect / parse helpers 0x02282f90..0x02283868): error context,
// handle and search connection; used by unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

struct Unk_ov065_02282f90_Ctx {
    /* 0x00 */ char errorString[0x100];
    /* 0x100 */ u8 pad_100[0x418 - 0x100];
    /* 0x418 */ s32 errorCode;
};

struct Unk_ov065_02282f90_Handle {
    /* 0x00 */ Unk_ov065_02282f90_Ctx *connection;
};

struct Unk_ov065_02282f90_Conn {
    /* 0x00 */ s32 searchType;
    /* 0x04 */ s32 sock;
    /* 0x08 */ s32 inputBuffer;
    /* 0x0c */ s32 inputBufferCapacity;
    /* 0x10 */ s32 inputBufferLength;
    /* 0x14 */ s32 inputBufferPos;
    /* 0x18 */ char *outputBuffer;
    /* 0x1c */ s32 outputBufferCapacity;
    /* 0x20 */ s32 outputBufferLength;
    /* 0x24 */ s32 outputBufferPos;
    /* 0x28 */ char nick[0x1f];
    /* 0x47 */ char uniqueNick[0x15];
    /* 0x5c */ char email[0x33];
    /* 0x8f */ char firstName[0x1f];
    /* 0xae */ char lastName[0x1f];
    /* 0xcd */ u8 pad_cd[0x130 - 0xcd];
    /* 0x130 */ s32 icqUin;
    /* 0x134 */ s32 skip;
    /* 0x138 */ s32 productId;
    /* 0x13c */ s32 isProcessing;
    /* 0x140 */ s32 isFinished;
};

#endif
