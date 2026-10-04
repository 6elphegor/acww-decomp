#ifndef NET_UNK_OV065_0225F378_OBJ_H
#define NET_UNK_OV065_0225F378_OBJ_H

#include "types.h"

// Socket object of the ov065 socket core, its receive/send pipes and creation parameters. Defined in
// src/ov065/unk_ov065_0225f5c8.cpp (SockCore_Create etc.); also used by src/ov065/unk_ov065_0225f378.cpp and
// (Params) src/ov065/unk_ov065_0225f1a0.cpp.

struct Unk_ov065_0225f5c8_T {
    /* 0x0 */ u16 stackSize;
    /* 0x2 */ u8 priority;
    /* 0x3 */ u8 msgQueueSize;
};

struct Unk_ov065_0225f634_Params {
    /* 0x00 */ s8 sockType;
    /* 0x01 */ s8 blocking;
    /* 0x02 */ u16 rxBufSize;
    /* 0x04 */ u16 rxConsumeLimit;
    /* 0x06 */ u16 txBufSize;
    /* 0x08 */ u16 rxAuxBufSize;
    /* 0x0a */ u16 pendingTxBufSize;
    /* 0x0c */ u16 sendRingSize;
    /* 0x0e */ u16 udpQueueCap;
    /* 0x10 */ Unk_ov065_0225f5c8_T recvThread;
    /* 0x14 */ Unk_ov065_0225f5c8_T sendThread;
};

struct Unk_ov065_0225f618_Pair {
    /* 0x0 */ void *size;
    /* 0x4 */ u32 buf;
};

struct Unk_ov065_0225f378_Obj;

struct Unk_ov065_0225f634_Sub1 {
    /* 0x00 */ u8 unk_00[0xe0];
    /* 0xe0 */ u8 mutex[0x18];
    /* 0xf8 */ u32 pos;
    /* 0xfc */ u16 limit;
    /* 0xfe */ u8 unk_fe[0x0c];
    /* 0x10a */ u16 cap;
    /* 0x10c */ u32 queue;
    /* 0x110 */ u32 queueTail;
    /* 0x114 */ u8 threadArea[4];
};

struct Unk_ov065_0225f634_Sub2 {
    /* 0x00 */ u8 unk_00[0xe0];
    /* 0xe0 */ u8 unk_e0[0x18];
    /* 0xf8 */ Unk_ov065_0225f618_Pair ring;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u32 spaceWaitQueue;
    /* 0x108 */ u32 spaceWaitQueueTail;
    /* 0x10c */ Unk_ov065_0225f378_Obj *owner;
    /* 0x110 */ u8 threadArea[4];
};

struct Unk_ov065_0225f378_Obj {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08[0x34];
    /* 0x3c */ Unk_ov065_0225f618_Pair rxBuffer;
    /* 0x44 */ u8 unk_44[4];
    /* 0x48 */ Unk_ov065_0225f618_Pair txBuffer;
    /* 0x50 */ Unk_ov065_0225f618_Pair rxAuxBuffer;
    /* 0x58 */ Unk_ov065_0225f618_Pair pendingTxBuffer;
    /* 0x60 */ u8 unk_60[4];
    /* 0x64 */ Unk_ov065_0225f634_Sub1 *recvPipe;
    /* 0x68 */ Unk_ov065_0225f634_Sub2 *sendPipe;
    /* 0x6c */ s32 result;
    /* 0x70 */ s16 flags;
    /* 0x72 */ s8 blocking;
    /* 0x73 */ s8 sockType;
    /* 0x74 */ u16 boundPort;
    /* 0x76 */ u8 unk_76[10];
    /* 0x80 */ u8 pipeArea[4];
};

#endif
