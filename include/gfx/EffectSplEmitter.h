#ifndef GFX_EFFECTSPLEMITTER_H
#define GFX_EFFECTSPLEMITTER_H

#include "types.h"

// SPL particle emitter as seen by the field effect code, and the effect pool entry that owns one.
// Members defined in src/main/unk_02090268.cpp; the pool (EffectSplPool, EffectSplEntry_*) is in unk_0208f268.cpp.

struct P;
struct SPLResource;
class EffectEmitterEntry;
class EffectSplEmitter;

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

typedef void (*EffectSplEmitterCallback)(EffectSplEmitter *emitter, s32 flag);

// Layout as pokeheartgold's SPLEmitter (include/library/spl_emitter.h) without p_next/p_prev list words in front of the
// particle lists' two-word heads and without gen_num: radius (0x44) scales the spawn position and length (0x48) the
// axis offset in the autoload_2 generator (unk_020fc984.cpp), simpleCollisionY (0x5c) is 0x80000000 when off, and the
// callback at 0x78 is called with flag 1 after the first spawn (EffectCb_AlignFirstParticle).
class EffectSplEmitter {
public:
    s32 spawnLandingEffects(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    s32 Effect_SpawnParticleLandings(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);
    void initKind02();

#ifdef HOST64
    // the 64-bit layout (tools/host_view_layout.py: the members at their places in SplRealEmitter)
    u8 pad_00[0x10];  // DS +0x0 [0x8]
    P * particles;  // DS +0x8
    s32 particleCount;  // DS +0xc
    u8 hpad_0[0x4];
    u8 pad_10[0x10];  // DS +0x10 [0x8]
    SPLResource * resource;  // DS +0x18
    u32 stateFlags;  // DS +0x1c
    s32 posX;  // DS +0x20
    s32 posY;  // DS +0x24
    s32 posZ;  // DS +0x28
    u8 pad_2c[0x10];  // DS +0x2c [0x10]
    Unk_020932bc_V16 axis;  // DS +0x3c
    u8 pad_42[0x2];  // DS +0x42 [0x2]
    s32 radius;  // DS +0x44
    s32 length;  // DS +0x48
    s32 initVelMagPos;  // DS +0x4c
    s32 initVelMagAxis;  // DS +0x50
    s32 baseScale;  // DS +0x54
    u16 particleLife;  // DS +0x58
    u16 color;  // DS +0x5a
    s32 simpleCollisionY;  // DS +0x5c
    u8 pad_60[0x8];  // DS +0x60 [0x8]
    u8 genInterval;  // DS +0x68
    u8 baseAlpha;  // DS +0x69
    u8 pad_6a[0x12];  // DS +0x6a [0xe]
    EffectSplEmitterCallback callback;  // DS +0x78
    u8 pad_7c[0x8];  // DS +0x7c [0x4]
    u8 tintVariant;  // DS +0x80
    u8 hpad_1[0x7];
#else
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ P *particles;
    /* 0x0c */ s32 particleCount;
    /* 0x10 */ u8 pad_10[8];
    /* 0x18 */ SPLResource *resource;
    /* 0x1c */ u32 stateFlags;
    /* 0x20 */ s32 posX, posY, posZ;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ Unk_020932bc_V16 axis;
    /* 0x42 */ u8 pad_42[2];
    /* 0x44 */ s32 radius;           // SPLEmitter radius
    /* 0x48 */ s32 length;           // SPLEmitter length
    /* 0x4c */ s32 initVelMagPos;    // SPLEmitter init_vel_mag_pos
    /* 0x50 */ s32 initVelMagAxis;   // SPLEmitter init_vel_mag_axis
    /* 0x54 */ s32 baseScale;        // SPLEmitter base_scl
    /* 0x58 */ u16 particleLife;     // SPLEmitter ptcl_life
    /* 0x5a */ u16 color;
    /* 0x5c */ s32 simpleCollisionY; // SPLEmitter simple_collision_y
    /* 0x60 */ u8 pad_60[8];
    /* 0x68 */ u8 genInterval;       // SPLEmitter etc.gen_intvl (FlowerFx_InitByColor sets 2)
    /* 0x69 */ u8 baseAlpha;         // etc.base_alp; fade: updateKind56Fade sets life * 6
    /* 0x6a */ u8 pad_6a[0xe];
    /* 0x78 */ EffectSplEmitterCallback callback;
    /* 0x7c */ u8 pad_7c[4];
    /* 0x80 */ u8 tintVariant;
#endif
};

class EffectEmitterEntry {
public:
    // the update callbacks (EffectEmitterCbs::unk_04): nonzero while the emitter lives
    s32 updateLanding5F();
    s32 updateLanding1F1E();
    s32 updateLanding1F1D();
    s32 updateLanding1F1EB();
    BOOL updateKind59();
    BOOL updateKind56Fade();
    BOOL updateKind56Main();
    s32 updateKind54B();
    void initAxisUpForward();
    s32 updateLanding(s32 id1, void *d1, s32 id2, void *d2, s32 id3, void *d3, s32 id4, void *d4);

    /* 0x00 */ s32 resourceId;
    /* 0x04 */ EffectEmitterTag tag;
    /* 0x08 */ u8 isActive;
    /* 0x09 */ u8 emitterIndex;
    /* 0x0a */ u8 userIndex;  // scratch byte for the owner's callbacks (e.g. ov003 TreeLeafFx: record index)
    /* 0x0c */ EffectSplEmitter *emitter;
    /* 0x10 */ EffectEmitterCbs callbacks;
};

#endif // GFX_EFFECTSPLEMITTER_H
