#ifndef NET_SSLSESSION_H
#define NET_SSLSESSION_H

#include "types.h"

// SSL session (resumable): element of sSslSessionCache[4] (SslSession_FindById / FindByPeer / Add,
// src/ov065/unk_ov065_022671a0.cpp), the session an SslConnection points to, and sSslNoSession (empty one).
// The handshake writes the pre-master secret (version major/minor + 46 random bytes) into masterSecret and the
// key derivation replaces it with the master secret (src/ov065/unk_ov065_02264d0c.cpp).

struct SslSession {
    /* 0x00 */ u8 sessionId[0x20];
    /* 0x20 */ u8 masterSecret[0x30];
    /* 0x50 */ u32 lastUsed;
    /* 0x54 */ u32 peerAddr;
    /* 0x58 */ u16 peerPort;
    /* 0x5a */ u8 inUse;
    /* 0x5b */ u8 pad_5b;
};

#endif
