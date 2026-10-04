#ifndef ACTOR_CHARAFACEANIMWORKREF_H
#define ACTOR_CHARAFACEANIMWORKREF_H

#include "types.h"

// One-byte slot handle into the face-animation work heaps (CharaFaceAnimWorkPool). Defined in src/main/unk_0205d1f8.cpp.
struct CharaFaceAnimWorkRef {
    /* 0x00 */ u8 v;
    CharaFaceAnimWorkRef();
    ~CharaFaceAnimWorkRef();
    void *getHeap();
    void assign(u32 x);
};

#endif
