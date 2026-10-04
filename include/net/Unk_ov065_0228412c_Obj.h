#ifndef NET_UNK_OV065_0228412C_OBJ_H
#define NET_UNK_OV065_0228412C_OBJ_H

#include "types.h"

// GameSpy TCP listen/connection object with callbacks (ov065_058); used by unk_ov065_02283720.cpp and
// unk_ov065_02283f34.cpp.

struct Unk_ov065_0228412c_Obj {
    /* 0x00 */ s32 sock;
    /* 0x04 */ s32 localIp;
    /* 0x08 */ s32 localPort;
    /* 0x0c */ s32 connections;
    /* 0x10 */ s32 closedConnections;
    /* 0x14 */ s32 freePending;
    /* 0x18 */ s32 hasError;
    /* 0x1c */ s32 callbackLevel;
    /* 0x20 */ s32 connectAttemptCallback;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 (*unk_28)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    /* 0x2c */ s32 (*unk_2c)(Unk_ov065_0228412c_Obj *, Unk_ov065_0228412c_Obj *, s32, s32, s32, s32, s32);
    /* 0x30 */ s32 (*unk_30)(Unk_ov065_0228412c_Obj *, s32, s32, s32, s32);
};

#endif
