#ifndef GFX_CACHEDMODEL_H
#define GFX_CACHEDMODEL_H

// Model with a cached resource tag at 0x98 (0x9c bytes). Defined in src/main/unk_02053848.cpp.
#include "types.h"
#include "gfx/Model.h"

class CachedModel : public Model {
public:
    CachedModel();
    virtual ~CachedModel();
    BOOL release(void);
    BOOL allocJointRecord(void *heap);
    void setFromFile(void *a);
    BOOL loadWithSharedTex(void *a, void *b, void *c);
    BOOL loadCached(void *a, void *b);
    BOOL loadWithTex(void *res, void *name, void *tex, void *d, u32 *e, s32 f);
    BOOL load(void *res, void *name);
    BOOL loadWithTexKeyed(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag);
    BOOL loadKeyed(void *res, void *name, u32 tag);

    /* 0x98 */ u32 unk_98;
};

#endif
