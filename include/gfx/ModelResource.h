#ifndef GFX_MODELRESOURCE_H
#define GFX_MODELRESOURCE_H

#include "types.h"
#include "gfx/TexVramTask.h"

// Loaded model / texture file pair with its VRAM upload task. Defined in src/main/unk_0205500c.cpp
// (0x0205500c..0x02055200); held by value in PooledModel (main) and the ov004 model loaders.
class TexVramSlot;

class ModelResource {
public:
    u32 fileData;
    void *fileHeap;
    void *model;
    void *texture;
    TexVramTask texVramTask;
    u8 loadState;
    u8 unk_31;

    ModelResource();
    virtual ~ModelResource();
    u32 loadTexture(void *a, TexVramSlot *b, void *c);
    u32 loadModel(void *res, TexVramSlot *b, void *tex, void *heap);
    void release(void);
    void *getTexture(void);
    void *getModel(void);
};

#endif
