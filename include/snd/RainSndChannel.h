#ifndef SND_RAINSNDCHANNEL_H
#define SND_RAINSNDCHANNEL_H

#include "types.h"
#include "snd/SndEnvChannel.h"

// Rain sound channel: 0x10-byte sound-environment channel, vtable 0x0213b930 (dsd label data_0213b938). Its vfunc_00
// override (0x020f3138) is in autoload_2, unk_020f30fc.cpp, which keeps its own copy (class declaration order sets that
// file's vtable order). main constructs it inline (unk_020b8d9c.cpp / unk_020c00c0.cpp). The sky process
// (SkyProc::envSndChannel) plays the rain loop on it: RainSe_* in unk_020b8d9c.cpp set the volume from the weather level,
// request sRainSeIds[sky kind] and fade the volume.
class RainSndChannel : public SndEnvChannel {
public:
    RainSndChannel() {}
    virtual void vfunc_00();                // 0x020f3138

    /* 0x0c */ s32 volume;
};

#endif
