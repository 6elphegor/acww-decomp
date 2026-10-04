#ifndef NET_GSGPCONNECTION_H
#define NET_GSGPCONNECTION_H

#include "types.h"

// GameSpy GP connection handle: the holder passed to every GsGp_* call (DwcControl::gpConnection, pointed to by the
// login and friend controls) and the part of the connection object the friend code reads (last status sent).
// src/ov065/unk_ov065_0226fc18.cpp, unk_ov065_02270e34.cpp, unk_ov065_022723b8.cpp.

struct Unk_ov065_0229080c_Big {
    /* 0x000 */ u8 unk_00[0x214];
    /* 0x214 */ s32 lastStatus;
    /* 0x218 */ u8 lastStatusString[0x100];
    /* 0x318 */ u8 lastLocationString[0x100];
};

struct GsGpConnection {
    /* 0x0 */ Unk_ov065_0229080c_Big *connection;
};

#endif
