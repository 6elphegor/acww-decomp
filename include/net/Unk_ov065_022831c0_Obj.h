#ifndef NET_UNK_OV065_022831C0_OBJ_H
#define NET_UNK_OV065_022831C0_OBJ_H

#include "types.h"

// GameSpy socket object, its socket data, host entry and sockaddr view (ov065_057); used by
// unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

struct Unk_ov065_022831c0_Sock {
    /* 0x00 */ s32 searchType;
    /* 0x04 */ s32 sock;
    /* 0x08 */ char *inputBuffer;
    /* 0x0c */ s32 inputBufferCapacity;
};

struct Unk_ov065_022831c0_Obj {
    /* 0x00 */ s32 type;
    /* 0x04 */ Unk_ov065_022831c0_Sock *data;
    /* 0x08 */ s32 isBlocking;
    /* 0x0c */ s32 callbackFunc;
    /* 0x10 */ s32 callbackParam;
    /* 0x14 */ s32 state;
    /* 0x18 */ s32 id;
};

struct Unk_ov065_022831c0_Host {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 **addrList;
};

struct Unk_ov065_022831c0_Addr {
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

#endif
