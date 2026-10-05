#ifndef NET_IPSOCKET_H
#define NET_IPSOCKET_H

#include "types.h"
#include "sys/OSThread.h"

// IP socket (TCP/UDP endpoint of the ov065 IP stack). The stack keeps the socket a thread works on in that thread's
// OSThread specific[0]; the TCP/UDP code finds it through OSi_ThreadInfo (data_021fcc2c: current / list)
// (src/ov065/unk_ov065_02261638.cpp, unk_ov065_02264d0c.cpp, unk_ov065_022671a0.cpp).

struct IpSocket;
struct SslConnection;

// UDP receive hook (IpSoc_SetUdpCallback); Udp_Input drops the data when it returns non-zero.
typedef s32 (*IpSocketUdpCallback)(u8 *, u32, IpSocket *);

struct IpSocket {
    /* 0x00 */ OSThread *ownerThread;
    /* 0x04 */ u32 waitReason;
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 useSsl;
    /* 0x0a */ u16 localPort;
    /* 0x0c */ SslConnection *sslCtx;
    /* 0x10 */ u32 handshakeTime;
    /* 0x14 */ u32 localAddr;
    /* 0x18 */ u16 remotePort;
    /* 0x1a */ u16 boundRemotePort;
    /* 0x1c */ u32 remoteAddr;
    /* 0x20 */ u32 boundRemoteAddr;
    /* 0x24 */ u32 recvNext;
    /* 0x28 */ u32 sendNext;
    /* 0x2c */ u16 peerWindow;
    /* 0x2e */ u16 peerMss;
    /* 0x30 */ u32 ackedSeq;
    /* 0x34 */ u32 rxSegmentCount;
    /* 0x38 */ IpSocketUdpCallback udpCallback;
    /* 0x3c */ u32 rxBufSize;
    /* 0x40 */ u8 *rxBuf;
    /* 0x44 */ u32 rxLen;
    /* 0x48 */ u32 txBufSize;
    /* 0x4c */ u8 *txBuf;
    /* 0x50 */ u32 rxAuxBufSize; // socket-core buffers (SockCore_InitLayout)
    /* 0x54 */ u8 *rxAuxBuf;
    /* 0x58 */ u32 pendingTxBufSize;
    /* 0x5c */ u8 *pendingTx;
    /* 0x60 */ u32 pendingTxLen;
};

#endif
