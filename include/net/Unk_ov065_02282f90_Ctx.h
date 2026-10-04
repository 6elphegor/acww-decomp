#ifndef NET_UNK_OV065_02282F90_CTX_H
#define NET_UNK_OV065_02282F90_CTX_H

#include "types.h"
#include "net/GsGpSearch.h"

// GsGpContext view (error string as a char array, error code) and its handle (search-manager / "rn" helpers); used by
// unk_ov065_02281a5c.cpp, unk_ov065_02283304.cpp and unk_ov065_02283720.cpp.

struct Unk_ov065_02282f90_Ctx {
    /* 0x00 */ char errorString[0x100];
    /* 0x100 */ u8 pad_100[0x418 - 0x100];
    /* 0x418 */ s32 errorCode;
};

struct Unk_ov065_02282f90_Handle {
    /* 0x00 */ Unk_ov065_02282f90_Ctx *connection;
};

#endif
