#ifndef SND_CREATURESNDCHANNEL_H
#define SND_CREATURESNDCHANNEL_H

#include "types.h"
#include "snd/SndEnvChannel.h"

// 0x10-byte sound-environment channel, vtable 0x0213b94c (dsd label data_0213b954). Its vfunc_00 override (0x020f312c)
// is in autoload_2, unk_020f30fc.cpp, which keeps its own copy (class declaration order sets that file's vtable order).
// ov003 / ov004 construct it inline: the creature sounds of Insect (ov003, seEmitter) and AquariumFrog (ov004, croakSound).
class CreatureSndChannel : public SndEnvChannel {
public:
    CreatureSndChannel() {}
    virtual void vfunc_00();                // 0x020f312c

    /* 0x0c */ u16 interval;
    /* 0x0e */ u8 repeatCount;
    /* 0x0f */ u8 pad_0f;
};

#endif
