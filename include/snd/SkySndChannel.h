#ifndef SND_SKYSNDCHANNEL_H
#define SND_SKYSNDCHANNEL_H

#include "types.h"
#include "gfx/VecFx32.h"
#include "snd/SndEnvChannel.h"


// Sky sound channel: 0xc-byte sound-environment channel (no fields of its own), vtable 0x0213b968 (dsd label
// data_0213b970). The virtual overrides are in autoload_2, unk_020f30fc.cpp, which keeps its own copy (class
// declaration order sets that file's vtable order). main's sky file (unk_020b8d9c.cpp) keeps an array of 8 in
// SkySePlayer and calls SndEnvChannel's call wrappers (0x02003c30..0x02003cbc) on them.
class SkySndChannel : public SndEnvChannel {
public:
    virtual void vfunc_00();                // 0x020f3120
    virtual void requestSustained(u32 v);   // 0x020f3114
    virtual void request(u32 v);            // 0x020f3108
    virtual void update(VecFx32 *pos);         // 0x020f30fc
};

#endif
