#ifndef NPC_NPCOBSTACLEPROBE_H
#define NPC_NPCOBSTACLEPROBE_H

#include "types.h"

// 2-byte NPC obstacle probe, NpcActor::obstacleProbe (unk_0201a334.cpp part of src/main/unk_020119cc.cpp; ctor
// 0x0201a8bc).

struct Unk_0201a334_Scene;

class NpcObstacleProbe {
public:
    /* 0x0 */ u8 blockedBits;
    /* 0x1 */ u8 pad_01;

    NpcObstacleProbe();
    void probe(Unk_0201a334_Scene *scene);
    void clear();
};

#endif
