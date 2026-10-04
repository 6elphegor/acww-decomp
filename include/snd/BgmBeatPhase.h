#ifndef SND_BGMBEATPHASE_H
#define SND_BGMBEATPHASE_H

#include "types.h"

// 0x14-byte BGM beat/phase state: member at +0x14 of BgmBeatSync (autoload_2, unk_020f7a5c.cpp, constructor 0x020f8134,
// also constructed by ov068 as func_020f8134). Byte names from ov068's reads of the sequence variables.
class BgmBeatPhase {
public:
    BgmBeatPhase();

    /* 0x00 */ s8 seqVar4;
    /* 0x01 */ s8 trackAnim;
    /* 0x02 */ s8 seqVar0;
    /* 0x03 */ s8 seqVar2;
    /* 0x04 */ s8 seqVar3;
    /* 0x05 */ u8 pad_05[3];
    /* 0x08 */ s32 beatFrame;
    /* 0x0c */ s32 loopFrame20;
    /* 0x10 */ s32 loopFrame32;
};

#endif
