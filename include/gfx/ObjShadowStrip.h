#ifndef GFX_OBJSHADOWSTRIP_H
#define GFX_OBJSHADOWSTRIP_H

#include "types.h"
#include "game/Vec3.h"

struct ObjShadowTexture;

// 0x34-byte textured ground shadow strip of field objects (rock, sign, tree shadows).
// Defined in src/main/unk_020abea8.cpp; func_020ac1e0 (0x020ac1e0) is a second constructor returning this.
class ObjShadowStrip {
public:
    void release(s32 heap);
    void draw(Vec3 *pos);
    BOOL build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    ObjShadowStrip();
    ~ObjShadowStrip();
    ObjShadowStrip *func_020ac1e0();

    /* 0x00 */ Vec3 basePos;
    /* 0x0c */ s32 halfWidth;
    /* 0x10 */ s32 cullExtent;
    /* 0x14 */ u32 numRows;
    /* 0x18 */ s32 cachedZ;
    /* 0x1c */ s32 *rowDepths;
    /* 0x20 */ s32 texLeftS;
    /* 0x24 */ s32 texRightS;
    /* 0x28 */ s32 *rowTexT;
    /* 0x2c */ Vec3 *rowVertices;
    /* 0x30 */ ObjShadowTexture *texture;
};

#endif
