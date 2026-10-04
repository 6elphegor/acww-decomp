#ifndef SND_SNDENVCHANNEL_H
#define SND_SNDENVCHANNEL_H

#include "types.h"
#include "gfx/VecFx32.h"


// sound sequence handle (one word; functions in unk_020ede18.cpp and the NNS sound library, plain C names)
struct SndSeqHandle {
    /* 0x0 */ void *p;
};

// 0xc-byte sound-environment channel, base vtable 0x0213b914 (dsd label data_0213b91c). Key function vfunc_00 and all
// virtuals are in autoload_2, unk_020f30fc.cpp; main / ov003 / ov004 construct it with the inline constructor. The derived
// Unk_0213b938 objects are 0x10 bytes (their own fields at 0x0c); CreatureSndChannel and SkySndChannel add nothing (main's
// sky file keeps arrays of SkySndChannel with a 0xc stride).
class SndEnvChannel {
public:
    SndEnvChannel() {}
    virtual void vfunc_00();                // 0x020f3700 reset
    virtual void vfunc_04();                // 0x020f36dc stop and release
    virtual void requestSustained(u32 v);   // 0x020f369c
    virtual void request(u32 v);            // 0x020f365c
    virtual void update(VecFx32 *pos);         // 0x020f3144 update

    // non-virtual wrappers of the slots, defined in main (src/main/unk_020039ec.cpp); the relative versions subtract
    // the camera eye position first
    void callRelease();
    void callRequest(void *a);
    void callRequestSustained(void *a);
    void callUpdate(void *a);
    void callUpdateRelative(VecFx32 *pos);
    void callReset();

    /* 0x04 */ SndSeqHandle h;
    /* 0x08 */ u16 v;
    /* 0x0a */ u8 flags;
};

#endif
