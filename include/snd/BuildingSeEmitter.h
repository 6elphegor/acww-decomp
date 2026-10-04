#ifndef SND_BUILDINGSEEMITTER_H
#define SND_BUILDINGSEEMITTER_H

#include "types.h"
#include "snd/Unk_0213b9c4.h"
#include "game/Unk_ov009_0225b880_Vec3.h"

// Positional sound-effect emitter of a building actor (BuildingActor::unk_234, 0x44 bytes). Defined in
// src/ov009/unk_ov009_0225b880.cpp (0x0225b894..0x0225b964).
class BuildingSeEmitter {
public:
    BuildingSeEmitter();

    void playSeHeld(u32 a);
    void playSe(u32 a);
    void deactivate();
    void setPosition(Unk_ov009_0225b880_Vec3 *v);
    void activate();

    /* 0x00 */ Unk_0213b9c4 emitter; // the active flag is emitter.b40 (0x40)
};

#endif // SND_BUILDINGSEEMITTER_H
