#ifndef SND_UNK_0213B954_H
#define SND_UNK_0213B954_H

#include "types.h"
#include "snd/SndEnvChannel.h"

// 0x10-byte sound-environment channel, vtable 0x0213b94c (dsd label data_0213b954). Its vfunc_00 override (0x020f312c)
// is in autoload_2, unk_020f30fc.cpp, which keeps its own copy (class declaration order sets that file's vtable order).
// ov003 / ov004 construct it inline.
class Unk_0213b954 : public SndEnvChannel {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();                // 0x020f312c

    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 pad_0f;
};

#endif
