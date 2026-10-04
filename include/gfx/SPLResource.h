#ifndef GFX_SPLRESOURCE_H
#define GFX_SPLRESOURCE_H

#include "types.h"
#include "gfx/VecFx32.h"

// SPL particle library: an emitter resource (SPLResource, EffectSplEmitter+0x18) and the start of its base block
// (SPLResBase). Names and layout as pokeheartgold include/library/spl_resource.h (p_base at 0, p_chld at 0x14; base
// flag word at 0, emitter base position at 4). The autoload_2 particle units view the same data as ResB / Rh
// (gfx/SplRes.h); the field effect units as Unk_02093dc8_Ptr / Unk_02093dc8_Root (gfx/Unk_02093dc8_Obj.h).

struct SPLResBase {
    /* 0x00 */ u32 flag; // SPLResBaseFlag
    /* 0x04 */ VecFx32 pos;
};

struct SPLResource {
    /* 0x00 */ SPLResBase *p_base;
};

#endif // GFX_SPLRESOURCE_H
