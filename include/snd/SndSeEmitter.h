#ifndef SND_SNDSEEMITTER_H
#define SND_SNDSEEMITTER_H

#include "types.h"

// sound handle (functions in unk_020ede18.cpp, plain C names): the non-polymorphic second base of SndSeEmitter, at +4
struct SndHandle {
    /* 0x00 */ u8 pad00[0x30];
    /* 0x30 */ void (*volCb)(SndHandle *h, s32 idx);
    /* 0x34 */ u8 pad34[4];
};

// 0x44-byte sound-effect emitter (channel object base), vtable 0x0213b9a0 (dsd label data_0213b9a8).
// Defined in autoload_2, unk_020f30fc.cpp (key function ~SndSeEmitter); main / ov003 / ov004 / ov068 call its C1 and D1
// as func_020f440c / func_020f43fc.
class SndSeEmitter : public SndHandle {
public:
    SndSeEmitter();                             // C1 0x020f440c, C2 0x020f4424
    virtual ~SndSeEmitter();                    // D2 0x020f43c8, D0 0x020f43d8, D1 0x020f43fc
    virtual void init();                        // 0x020f4394
    virtual void update(void *src);             // 0x020f4380
    virtual void stop();                        // 0x020f4144
    void stopEffects();                         // 0x020f4100
    BOOL playHeld(s32 id, s32 c, s16 d);        // 0x020f4158
    BOOL playOneShot(s32 id, s32 c, s16 d);     // 0x020f41fc
    u16 nextAlternateId(u16 s);                 // 0x020f3f38
    void playAlternate(u16 s);                  // 0x020f3f10

    /* 0x3c */ u16 h3c;
    /* 0x3e */ u8 b3e;
    /* 0x3f */ u8 b3f;
    /* 0x40 */ u8 b40;
};

#endif
