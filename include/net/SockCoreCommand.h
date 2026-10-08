#ifndef NET_SOCKCORECOMMAND_H
#define NET_SOCKCORECOMMAND_H

#include "types.h"

// Socket command message (handler, socket, reply queue, open parameters), used by
// src/ov065/unk_ov065_0225f5c8.cpp and unk_ov065_0225f378.cpp.

struct SockCoreSocket;

// One message of the socket core's pool (SockCore_CreateMsgPool): 0x2c bytes on the DS, every view of it below (and
// Unk_ov065_02260488_Node / _Msg of unk_ov065_0225fdf0.cpp) fits; fields are at most pointer-sized, so twice that
// on a 64-bit host.
#define SOCK_MSG_SIZE ((u32)(0x2c * sizeof(void *) / 4))

struct SockCoreCommand {
    /* 0x00 */ s32 (*handler)(SockCoreCommand *);
    /* 0x04 */ SockCoreSocket *sock;
    /* 0x08 */ void *replyQueue;
    /* 0x0c */ s8 sockType;
    /* 0x0d */ s8 blocking;
    /* 0x0e */ u8 unk_0e[2];
    /* 0x10 */ u16 localPort;
    /* 0x14 */ u32 *outPort;
    /* 0x18 */ u32 *outAddr;
};

// Connect command (SockCore_PostConnect / SockCore_CmdConnect): the same message with the connect payload.
struct Unk_ov065_0225faf4_Job {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ SockCoreSocket *sock;
    /* 0x08 */ void *replyQueue;
    /* 0x0c */ s8 sockType;
    /* 0x0d */ u8 pad_0d[3];
    /* 0x10 */ u16 localPort;
    /* 0x12 */ u16 remotePort;
    /* 0x14 */ u32 remoteAddr;  // IPv4 address
};

#ifdef __cplusplus
static_assert(sizeof(SockCoreCommand) <= SOCK_MSG_SIZE, "SockCoreCommand: a pool message");
static_assert(sizeof(Unk_ov065_0225faf4_Job) <= SOCK_MSG_SIZE, "Unk_ov065_0225faf4_Job: a pool message");
#endif

#endif
