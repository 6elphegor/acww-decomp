#ifndef SND_SNDSEEMITTERKIND99_H
#define SND_SNDSEEMITTERKIND99_H

#include "types.h"
#include "snd/SndSeEmitterKind1.h"

// SndSeEmitterKind1 variant (vtable 0x0213b984; PlayerActor::seEmitterLocal). Defined in autoload_2,
// src/autoload_2/unk_020f30fc.cpp: C1 0x020f3ee4, key function ~SndSeEmitterKind99 (D0 0x020f3e7c, D1 0x020f3eb4).
class SndSeEmitterKind99 : public SndSeEmitterKind1 {
public:
    SndSeEmitterKind99();                   // C1 0x020f3ee4
    virtual ~SndSeEmitterKind99();          // D0 0x020f3e7c, D1 0x020f3eb4
};

#endif
