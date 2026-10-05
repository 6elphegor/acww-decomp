#ifndef SND_SNDSEEMITTERKIND1_H
#define SND_SNDSEEMITTERKIND1_H

#include "types.h"
#include "snd/SndSeEmitter.h"

// 0x44-byte sound-effect emitter with a volume callback (vtable _ZTV17SndSeEmitterKind1 0x020d6f4c in main). The
// constructor (C1 0x020f4080, C2 0x020f40c0) and onVolume are defined in autoload_2, unk_020f30fc.cpp. The class has no
// key function: its destructor is implicit/inline in the original, so the vtable and D1 0x02004b48 / D0 0x02010fa4 are
// link-once, emitted by main's unk_02004558.cpp and autoload_2. Here the destructor is declared out of line so that
// users do not emit link-once copies of their own; those two units (and main 0202e2d4 / 020119cc / 0201c050, whose inlined NpcActor
// destructors need it) define it inline after including this header.
// The NPC actor files (main, ov004, ov045..ov088) hold one by value as NpcActor::seEmitter.
class SndSeEmitterKind1 : public SndSeEmitter {
public:
    SndSeEmitterKind1();                            // C1 0x020f4080, C2 0x020f40c0
    virtual ~SndSeEmitterKind1();                   // D1 0x02004b48, D0 0x02010fa4 (link-once, main)
    static void onVolume(SndHandle *h, s32 idx);    // 0x020f4010

    /* 0x40 */ u8 volume;   // percent of the volume onVolume sets (NNS_SndPlayerSetVolume(volume * 40 / 100))
};

#endif
