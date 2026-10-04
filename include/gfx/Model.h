#ifndef GFX_MODEL_H
#define GFX_MODEL_H

#include "types.h"
#include "gfx/Mtx43.h"

// 3D model instance (0x98 bytes): an NNS G3D render object at 0x08, the model resource at 0x5c, its texture/palette
// key, a 4x3 base matrix at 0x64 and the texture VRAM slot. Defined in src/main/unk_02055200.cpp (ctor 0x02055704);
// base of CachedModel.
struct Unk_020553f8_Res;
struct Unk_02054584_Data;

// Declaration-only twin of Model's real base Unk_020dbe14 (vtable 0x020dbe0c, defined in src/main/unk_02055200.cpp
// after Model): the original vtable order there is the heapsort of the declaration order twin, Model, Unk_020dbe14.
// symbols.txt gives the twin's C2/D2 names as labels of the real functions.
class Unk_020dbe14b {
public:
    Unk_020dbe14b();
    virtual ~Unk_020dbe14b();
};

class Model : public Unk_020dbe14b {
public:
    Model();
    virtual ~Model();
    void setAlpha(u32 v);
    void setPolygonId(u32 v);
    void setInitCallback(s32 a, s32 b);
    void setCallback(s32 a, s32 b, s32 c, s32 d, s32 e);
    void *getRenderObj();
    void draw();
    void applyTransform(s32 *p);
    void drawNoGeCmd();
    void drawScaled(s32 *p);
    void drawShapesDirect(s32 *p);
    BOOL clearResource();
    BOOL setResource(Unk_020553f8_Res *a, u32 b);
    BOOL setResourceAndBind(Unk_020553f8_Res *a, u32 b);
    void initRenderObj();
    void reset();

    /* 0x04 */ u16 modelFlags;
    /* 0x06 */ u16 unk_06;
    union {
        /* 0x08 */ u8 unk_08[0x2c]; // NNSG3dRenderObj (0x54 bytes, up to 0x5c)
        struct {
            /* 0x08 */ u32 renderObj; // NNSG3dRenderObj::flag
            /* 0x0c */ u8 *renderResMdl;
            /* 0x10 */ u8 pad_10[8];
            /* 0x18 */ Unk_02054584_Data *renderAnmJnt;
            /* 0x1c */ s32 unk_1c;
            /* 0x20 */ Unk_02054584_Data *renderAnmVis;
            /* 0x24 */ u8 pad_24[0x10];
        };
    };
    /* 0x34 */ s32 renderUserPtr;
    union {
        /* 0x38 */ u8 unk_38[0x24];
        struct {
            /* 0x38 */ u8 pad_38[4];
            /* 0x3c */ void *renderJntRecord;
            /* 0x40 */ u8 pad_40[0x1c];
        };
    };
    /* 0x5c */ Unk_020553f8_Res *resMdl;
    /* 0x60 */ u32 resTex;
    union {
        /* 0x64 */ Mtx43 mtx;
        struct {
            /* 0x64 */ u8 unk_64[0x24];
            /* 0x88 */ u8 baseTrans[0xc];
        };
    };
    /* 0x94 */ u32 texVramSlot;
};

#endif
