#ifndef NET_GSQR_H
#define NET_GSQR_H

#include "types.h"

// GameSpy query and reporting client (ov065, GsQr_*; heartbeats to %s.master.gs.nintendowifi.net port 27900): the
// reporting context (GsQr_Init, the default instance data_ov065_0228e1c0), its packet and key buffers and the
// callback types; used by unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct GsQrBuffer {
    /* 0x00 */ u8 data[0x800];
    /* 0x800 */ s32 len;
};

struct GsQrKeyBuffer {
    /* 0x00 */ u8 keys[0x100];
    /* 0x100 */ s32 numKeys;
};

struct Unk_ov065_02287fcc_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

// Section 0 (server) key value: (key, buffer, userData).
typedef void (*GsQrServerKeyCallback)(u32, GsQrBuffer *, void *);
// Section 1/2 (player/team) key value: (key, index, buffer, userData).
typedef void (*GsQrIndexedKeyCallback)(u32, s32, GsQrBuffer *, void *);
// Fills the key list of a section: (section, keys, userData).
typedef void (*GsQrKeyListCallback)(s32, GsQrKeyBuffer *, void *);
// Row count of section 1/2: (section, userData).
typedef s32 (*GsQrCountCallback)(s32, void *);
// Master server error: (code, message, userData).
typedef void (*GsQrAddErrorCallback)(s32, const char *, void *);
// Public address seen by the master: (ip, port, userData).
typedef void (*GsQrPublicAddressCallback)(u32, u32, void *);
// NAT negotiation request from a client message: (cookie, userData).
typedef s32 (*GsQrNatNegCallback)(u32, void *);
// Other client messages: (data, len, userData).
typedef s32 (*GsQrClientMessageCallback)(u8 *, s32, void *);

struct GsQrContext {
    /* 0x00 */ s32 sock;
    /* 0x04 */ char gameName[0x40];
    /* 0x44 */ char secretKey[0x40];
    /* 0x84 */ u8 instanceKey[4];
    /* 0x88 */ GsQrServerKeyCallback serverKeyCallback;
    /* 0x8c */ GsQrIndexedKeyCallback playerKeyCallback;
    /* 0x90 */ GsQrIndexedKeyCallback teamKeyCallback;
    /* 0x94 */ GsQrKeyListCallback keyListCallback;
    /* 0x98 */ GsQrCountCallback countCallback;
    /* 0x9c */ GsQrAddErrorCallback addErrorCallback;
    /* 0xa0 */ GsQrNatNegCallback natNegCallback;
    /* 0xa4 */ GsQrClientMessageCallback clientMessageCallback;
    /* 0xa8 */ GsQrPublicAddressCallback publicAddressCallback;
    /* 0xac */ u32 lastHeartbeatTime;
    /* 0xb0 */ u32 lastKeepAliveTime;
    /* 0xb4 */ s32 stateChangePending;
    /* 0xb8 */ s32 masterState;
    /* 0xbc */ s32 isPublic;
    /* 0xc0 */ s32 localPort;
    /* 0xc4 */ s32 ownsSocket;
    /* 0xc8 */ s32 natNegEnabled;
    /* 0xcc */ Unk_ov065_02287fcc_Sa masterAddr;
    /* 0xd4 */ s32 rawPacketCallback;
    /* 0xd8 */ s32 recentMessageKeys[10];
    /* 0x100 */ s32 messageKeyIndex;
    /* 0x104 */ u32 publicIp;
    /* 0x108 */ u16 publicPort;
    /* 0x10c */ void *userData;
};

#endif
