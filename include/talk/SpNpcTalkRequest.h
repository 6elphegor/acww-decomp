#ifndef TALK_SPNPCTALKREQUEST_H
#define TALK_SPNPCTALKREQUEST_H

#include "types.h"
#include "talk/Unk_020d7710.h"

// Talk request base of the special NPCs' talk objects (SpNpc*Talk; vtable 0x020d8b30, no members of its own).
// Defined in src/main/unk_0202e26c.cpp.
class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

#endif
