#ifndef GFX_MODEL_H
#define GFX_MODEL_H

#include "types.h"
#include "gfx/Mtx43.h"
#include "uptr.h"
#include "nnsys/g3d_rt.h"

// 3D model instance (0x98 bytes): an NNS G3D render object at 0x08, the model resource at 0x5c, its texture/palette
// key, a 4x3 base matrix at 0x64 and the texture VRAM slot. Defined in src/main/unk_02055200.cpp (ctor 0x02055704);
// base of CachedModel.
struct NNSG3dResMdl;
struct NNSG3dResTex;
struct NNSG3dAnmObj;
struct NNSG3dRS;
class TexVramSlot;

// Declaration-only twin of Model's real base ModelBase (vtable 0x020dbe0c, defined in src/main/unk_02055200.cpp
// after Model): the original vtable order there is the heapsort of the declaration order twin, Model, ModelBase.
// symbols.txt gives the twin's C2/D2 names as labels of the real functions.
class ModelBaseDecl {
public:
    ModelBaseDecl();
    virtual ~ModelBaseDecl();
};

class Model : public ModelBaseDecl {
public:
    Model();
    virtual ~Model();
    void setAlpha(u32 v);
    void setPolygonId(u32 v);
    void setInitCallback(void (*fn)(NNSG3dRS *), void *user);
    // fn runs at SBC command cmd (timing: before / during / after it), addr: the SBC address it applies at (NULL: all)
    void setCallback(void (*fn)(NNSG3dRS *), s32 cmd, s32 timing, void *user, u8 *addr);
    void *getRenderObj();
    void draw();
    void applyTransform(s32 *p);
    void drawNoGeCmd();
    void drawScaled(s32 *p);
    void drawShapesDirect(s32 *p);
    BOOL clearResource();
    BOOL setResource(NNSG3dResMdl *a, NNSG3dResTex *b);
    BOOL setResourceAndBind(NNSG3dResMdl *a, NNSG3dResTex *b);
    void initRenderObj();
    void reset();

    /* 0x04 */ u16 modelFlags;
    /* 0x06 */ u16 unk_06;
    // the render object by its real layout (include/nnsys/g3d_rt.h: pointers), the names at its members
    union {
        u8 unk_08[sizeof(G3dRenderObj)];
        G3dRenderObj ro;
        struct {
            u32 renderObj;              // flag
            u8 *renderResMdl;           // resMdl
            void *pad_10[2];            // anmMat, funcBlendMat
            NNSG3dAnmObj *renderAnmJnt; // anmJnt
            sptr unk_1c;                // funcBlendJnt
            NNSG3dAnmObj *renderAnmVis; // anmVis
            void *pad_24[2];            // funcBlendVis, cbFunc
            u8 pad_24b[4];              // cbCmd, cbTiming
            void *pad_28;               // cbInitFunc
            void *renderUserPtr;        // ptrUser
            u8 *pad_30;                 // ptrUserSbc
            void *renderJntRecord;      // recJntAnm
        };
    };
    /* 0x5c */ NNSG3dResMdl *resMdl;
    /* 0x60 */ NNSG3dResTex *resTex;
    union {
        /* 0x64 */ Mtx43 mtx;
        struct {
            /* 0x64 */ u8 unk_64[0x24];
            /* 0x88 */ u8 baseTrans[0xc];
        };
    };
    /* 0x94 */ TexVramSlot *texVramSlot;
};

// Model members reached by their DS offsets from a Model's storage (code that keeps the model as raw storage): the
// DS expression there, the member on hosts
#define MODEL_AT_MTX(p) (((Model *)(p))->mtx)
#define MODEL_AT_RESMDL(p) ((u32)(uptr)((Model *)(p))->resMdl)

#endif
