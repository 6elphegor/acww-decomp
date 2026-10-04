#ifndef SND_UNK_0213B9C4_H
#define SND_UNK_0213B9C4_H

#include "types.h"
#include "snd/SndSeEmitter.h"

// Sound-effect emitter with vtable 0x0213b9c4 (= SndSeEmitterKind2, C1 0x020f3e50 in autoload_2). Its destructor D1
// is emitted in ov009 (src/ov009/unk_ov009_0225b880.cpp, by hand); the building SE emitter there holds one by value.
class Unk_0213b9c4 : public SndSeEmitter {
public:
    Unk_0213b9c4();
    virtual ~Unk_0213b9c4();
};

#endif
