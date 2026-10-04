#ifndef NPC_NPCOBSTACLEPROBE_H
#define NPC_NPCOBSTACLEPROBE_H

#include "types.h"

// 2-byte NPC obstacle probe, NpcActor::obstacleProbe (unk_0201a334.cpp part of src/main/unk_020119cc.cpp; ctor
// 0x0201a8bc).

class Character;

class NpcObstacleProbe {
public:
    /* 0x0 */ u8 blockedBits;
    /* 0x1 */ u8 pad_01;

    NpcObstacleProbe();
    void probe(Character *scene);
    void clear();
};

#endif
