#ifndef NET_UNK_OV065_02277418_REC_H
#define NET_UNK_OV065_02277418_REC_H

#include "types.h"

// DWC peer transport: per-connection send/receive state, frame header and LCG state
// (src/ov065/unk_ov065_02277140.cpp, src/ov065/unk_ov065_022723b8.cpp namespace F0227702c).

struct Unk_ov065_02277418_Rec {
    /* 0x00 */ u8 *sendData;
    /* 0x04 */ u8 *recvBuffer;
    /* 0x08 */ s32 recvBufSize;
    /* 0x0c */ s32 sentBytes;
    /* 0x10 */ s32 recvBytes;
    /* 0x14 */ s32 sendSize;
    /* 0x18 */ s32 recvSize;
    /* 0x1c */ u8 isSending;
    /* 0x1d */ u8 recvState;
    /* 0x1e */ u8 prevRecvState;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u16 unk_20;
    /* 0x22 */ u16 recvType;
    /* 0x24 */ u32 lastRecvTick;
    /* 0x28 */ u32 lastRecvTickHi;
    /* 0x2c */ u32 timeoutMs;
};

struct Unk_ov065_0227762c_Hdr {
    /* 0x0 */ u32 dataSize;
    /* 0x4 */ u16 frameType;
    /* 0x6 */ u8 magic[2];
};

struct Unk_ov065_022778b0_Rng {
    /* 0x00 */ u64 value;
    /* 0x08 */ u64 multiplier;
    /* 0x10 */ u64 increment;
};

#endif
