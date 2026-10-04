#ifndef NET_UNK_OV065_0225FAF4_SESS_H
#define NET_UNK_OV065_0225FAF4_SESS_H

#include "types.h"

// Socket core types of ov065 (src/ov065/unk_ov065_0225fdf0.cpp and unk_ov065_0225f5c8.cpp): UDP receive queue
// node, allocator config, pipe context, receive ring, socket session and the connect command job.

struct Unk_ov065_0225faf4_Sess;

struct SockUdpRecvNode {
    /* 0x0 */ SockUdpRecvNode *next;
    /* 0x4 */ u16 len;
    /* 0x6 */ u16 remotePort;
    /* 0x8 */ u32 remoteAddr;
    /* 0xc */ u8 data[4];
};

struct Unk_ov065_0225faf4_Alloc {
    /* 0x00 */ void *pad[6];
    /* 0x18 */ SockUdpRecvNode *(*alloc)(u32);
    /* 0x1c */ void (*free)(void *);
};

struct Unk_ov065_0225faf4_Ctx {
    /* 0x000 */ u8 pad_00[0xc4];
    /* 0x0c4 */ Unk_ov065_0225faf4_Sess *ipSocket;
    /* 0x0c8 */ u8 pad_c8[0x18];
    /* 0x0e0 */ u8 mutex[0x18];
    /* 0x0f8 */ s32 pos;
    /* 0x0fc */ u16 limit;
    /* 0x0fe */ s8 lock;
    /* 0x0ff */ u8 pad_ff;
    /* 0x100 */ SockUdpRecvNode *volatile tail;
    /* 0x104 */ SockUdpRecvNode *head;
    /* 0x108 */ u16 used;
    /* 0x10a */ u16 cap;
    /* 0x10c */ u8 queue[4];
};

struct Unk_ov065_022603bc_Rx {
    /* 0x000 */ u8 pad_00[0x102];
    /* 0x102 */ u16 ringRead;
    /* 0x104 */ u8 pad_104[4];
};

struct Unk_ov065_0225faf4_Sess {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 ipState;
    /* 0x09 */ u8 pad_09;
    /* 0x0a */ u16 localPort;
    /* 0x0c */ u8 pad_0c[0xc];
    /* 0x18 */ u16 remotePort;
    /* 0x1a */ u16 boundRemotePort;
    /* 0x1c */ u32 remoteAddr;
    /* 0x20 */ u32 boundRemoteAddr;
    /* 0x24 */ u8 pad_24[0x1c];
    /* 0x40 */ u8 *rxBuf;
    /* 0x44 */ s32 rxLen;
    /* 0x48 */ s32 txBufSize;
    /* 0x4c */ u8 *txBuf;
    /* 0x50 */ u8 pad_50[0x14];
    /* 0x64 */ Unk_ov065_0225faf4_Ctx *recvPipe;
    /* 0x68 */ Unk_ov065_022603bc_Rx *sendPipe;
    /* 0x6c */ s32 result;
    /* 0x70 */ volatile s16 flags;
    /* 0x72 */ s8 blocking;
    /* 0x73 */ s8 sockType;
    /* 0x74 */ u16 boundPort;
    /* 0x76 */ u16 peerPort;
    /* 0x78 */ u32 peerAddr;
};

struct Unk_ov065_0225faf4_Job {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_ov065_0225faf4_Sess *sock;
    /* 0x08 */ u32 replyQueue;
    /* 0x0c */ s8 sockType;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ u16 localPort;
    /* 0x12 */ u16 remotePort;
    /* 0x14 */ void *remoteAddr;
};

#endif
