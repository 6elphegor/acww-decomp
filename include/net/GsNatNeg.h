#ifndef NET_GSNATNEG_H
#define NET_GSNATNEG_H

#include "types.h"

// GameSpy NAT negotiation client (ov065, GsNatNeg_*; servers natneg1/natneg2.gs.nintendowifi.net port 27901):
// the negotiator (elements of sGsNatNegList), its callbacks, the packets it sends and the receive copies; used by
// unk_ov065_02285778.cpp, unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct Unk_ov065_02286c74_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

// Called when the negotiator's state advances (state, userData).
typedef void (*GsNatNegProgressCallback)(s32 state, void *user);
// Called once at the end: result (0 success, 1/2 timeouts, 3 server error), socket, peer address, userData.
typedef void (*GsNatNegCompletedCallback)(s32 code, s32 fd, void *arg, void *user);

struct GsNatNegotiator {
    /* 0x00 */ s32 negSock;
    /* 0x04 */ s32 gameSock;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ s32 clientIndex;
    /* 0x10 */ s32 state;
    /* 0x14 */ s32 initAcked[3];
    /* 0x20 */ s32 retryCount;
    /* 0x24 */ s32 maxRetries;
    /* 0x28 */ u32 retryTime;
    /* 0x2c */ u32 peerIp;
    /* 0x30 */ u16 peerPort;
    /* 0x32 */ u8 gotPeerPing;
    /* 0x33 */ u8 sentGotPeerPing;
    /* 0x34 */ GsNatNegProgressCallback progressCallback;
    /* 0x38 */ GsNatNegCompletedCallback completedCallback;
    /* 0x3c */ void *userData;
};

struct Unk_ov065_02286bb4_Magic {
    /* 0x00 */ u8 b[6];
};

// Peer ping (type 7) / connect ack (type 6) packet: magic fd fc 1e 66 6a b2, version 2, type, cookie; the
// address fields are accessed as u32/u16 through casts.
struct GsNatNegPacket {
    /* 0x00 */ u8 magic[6];
    /* 0x06 */ u8 version;
    /* 0x07 */ u8 type;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ u8 peerIp;
    /* 0x0d */ u8 clientIndex;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ u8 peerPort;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 gotPeerPing;
    /* 0x13 */ u8 finished;
    /* 0x14 */ u8 unk_14;
};

// Init packet (type 0), sent once per port type to the two natneg servers.
struct GsNatNegInitPacket {
    /* 0x00 */ u8 magic[6];
    /* 0x06 */ u8 version;
    /* 0x07 */ u8 type;
    /* 0x08 */ u32 cookie;
    /* 0x0c */ u8 portType;
    /* 0x0d */ u8 clientIndex;
    /* 0x0e */ u8 useGamePort;
    /* 0x0f */ u8 localIp0;
    /* 0x10 */ u8 localIp1;
    /* 0x11 */ u8 localIp2;
    /* 0x12 */ u8 localIp3;
    /* 0x13 */ u8 localPortHi;
    /* 0x14 */ u8 localPortLo;
    /* 0x15 */ char name[0x43];
};

// Receive copies: connect (type 5) / peer ping (type 7) packets ...
struct GsNatNegConnectPktBuf {
    /* 0x00 */ u8 b[0x14];
};

// ... and server replies (init ack type 1, address check type 2).
struct GsNatNegReplyPktBuf {
    /* 0x00 */ u8 b[0x15];
};

#endif
