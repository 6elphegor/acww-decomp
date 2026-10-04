#ifndef GFX_POOLEDMODEL_H
#define GFX_POOLEDMODEL_H

// Model resource loaded into a ModelSlot of a ModelSlotPool (0x40 bytes). Defined in src/main/unk_0209c08c.cpp
// (0x0209c0ac..0x0209c140).
#include "types.h"
#include "gfx/ModelResource.h"

class ModelSlot;

class PooledModel {
public:
    PooledModel();
    ~PooledModel();
    void *getModel();
    void unload();
    void reset();
    s32 loadFromSlot(ModelSlot *e, const char *name);

    /* 0x00 */ ModelResource resource;
    /* 0x34 */ u8 isLoaded;
    /* 0x38 */ void *slot;
    /* 0x3c */ void *unk_3c;
};

#endif
