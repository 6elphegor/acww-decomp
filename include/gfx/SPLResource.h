#ifndef GFX_SPLRESOURCE_H
#define GFX_SPLRESOURCE_H

#include "types.h"
#include "gfx/VecFx32.h"

// SPL particle library: an emitter resource (SPLResource, EffectSplEmitter+0x18) and the start of its base block
// (SPLResBase). Names and layout as pokeheartgold include/library/spl_resource.h (p_base at 0, p_chld at 0x14; base
// flag word at 0, emitter base position at 4). The autoload_2 particle units view the same data as ResB / Rh
// (gfx/SplRes.h). tintFlags (0x50) is read by EffectSpl_ApplySceneTint (src/main/unk_0208f268.cpp).

struct SPLResBase {
    /* 0x00 */ u32 flag; // SPLResBaseFlag
    /* 0x04 */ VecFx32 pos;
    /* 0x10 */ u8 pad_10[0x40];
    /* 0x50 */ u8 tintFlags; // bit 7: tint by scene light; 6: ground season colour, 5: tint variant, 3: season tint
};

struct SPLResource {
    /* 0x00 */ SPLResBase *p_base;
};

#endif // GFX_SPLRESOURCE_H
