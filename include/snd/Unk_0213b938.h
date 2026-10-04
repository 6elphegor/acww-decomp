#ifndef SND_UNK_0213B938_H
#define SND_UNK_0213B938_H

#include "types.h"
#include "snd/SndEnvChannel.h"

// 0x10-byte sound-environment channel, vtable 0x0213b930 (dsd label data_0213b938). Its vfunc_00 override (0x020f3138)
// is in autoload_2, unk_020f30fc.cpp, which keeps its own copy (class declaration order sets that file's vtable order).
// main constructs it inline (the music player's envSndChannel, unk_020b8d9c.cpp / unk_020c00c0.cpp).
class Unk_0213b938 : public SndEnvChannel {
public:
    Unk_0213b938() {}
    virtual void vfunc_00();                // 0x020f3138

    /* 0x0c */ u8 unk_0c[4];
};

#endif
