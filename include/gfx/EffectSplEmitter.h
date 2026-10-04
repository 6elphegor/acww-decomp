#ifndef GFX_EFFECTSPLEMITTER_H
#define GFX_EFFECTSPLEMITTER_H

#include "types.h"

// SPL particle emitter as seen by the field effect code, and the effect pool entry that owns one.
// Members defined in src/main/unk_02090268.cpp; the pool (EffectSplPool, EffectSplEntry_*) is in unk_0208f268.cpp.

struct Unk_02093998_Node;
struct Unk_0209355c_Ref;
class EffectEmitterEntry;

struct Unk_020932bc_V16 {
    /* 0x0 */ s16 x, y, z;
    void Set(s32 a, s32 b, s32 c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct EffectEmitterTag {
    /* 0x0 */ u8 poolIndex;
    /* 0x1 */ u8 group;
    /* 0x2 */ u8 emitterIndex;
    /* 0x3 */ u8 unk_03;
};

struct EffectEmitterCbs {
    /* 0x0 */ s32 (*unk_00)(EffectEmitterEntry *);
    /* 0x4 */ s32 (*unk_04)(EffectEmitterEntry *);
};

class EffectSplEmitter {
public:
    s32 spawnLandingEffects(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    s32 Effect_SpawnParticleLandings(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    void initKind02();

    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ Unk_02093998_Node *particles;
    /* 0x0c */ s32 particleCount;
    /* 0x10 */ u8 pad_10[8];
    /* 0x18 */ Unk_0209355c_Ref *resource;
    /* 0x1c */ u32 stateFlags;
    /* 0x20 */ s32 posX, posY, posZ;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ Unk_020932bc_V16 axis;
    /* 0x42 */ u8 pad_42[0x18];
    /* 0x5a */ u16 color;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 pad_60[8];
    /* 0x68 */ u8 unk_68;  // set to 2 by FlowerFx_InitByColor (petal effect kind 1)
    /* 0x69 */ u8 pad_69[0x17];
    /* 0x80 */ u8 tintVariant;
};

class EffectEmitterEntry {
public:
    void updateLanding5F();
    void updateLanding1F1E();
    void updateLanding1F1D();
    void updateLanding1F1EB();
    void initAxisUpForward();
    s32 updateLanding(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);

    /* 0x00 */ s32 resourceId;
    /* 0x04 */ EffectEmitterTag tag;
    /* 0x08 */ u8 isActive;
    /* 0x09 */ u8 emitterIndex;
    /* 0x0c */ EffectSplEmitter *emitter;
    /* 0x10 */ EffectEmitterCbs callbacks;
};

#endif // GFX_EFFECTSPLEMITTER_H
