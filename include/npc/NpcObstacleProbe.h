#ifndef NPC_NPCOBSTACLEPROBE_H
#define NPC_NPCOBSTACLEPROBE_H

#include "types.h"

// NPC obstacle probe (unk_0201a334.cpp part of src/main/unk_020119cc.cpp) and Unk_0201a8bc, the 2-byte NpcActor
// member type named after its constructor (0x0201a8bc).

struct Unk_0201a334_Scene;

class NpcObstacleProbe {
public:
    u8 blockedBits;

    void probe(Unk_0201a334_Scene *scene);
    void clear();
    void func_0201a8bc();
};

struct Unk_0201a8bc : NpcObstacleProbe {
    /* 0x1 */ u8 pad_01;
    Unk_0201a8bc();
};

#endif
