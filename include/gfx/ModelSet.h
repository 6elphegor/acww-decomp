#ifndef GFX_MODELSET_H
#define GFX_MODELSET_H

#include "types.h"

class CachedModel;

// 0x10-byte polymorphic model set (vtable 0x020dbd3c): all models of one .nsbmd file as CachedModels plus their
// 16-byte names; ModelSet_Load / ModelSet_Find / ModelSet_Release and ctor/dtor in main (src/main/unk_02053848.cpp).
// Embedded by value in FieldObjectManager (ov003) and the ov004 room objects.
class ModelSet {
public:
    /* 0x04 */ u32 numModels;
    /* 0x08 */ CachedModel *models;
    /* 0x0c */ u8 *modelNames;
    ModelSet();
    virtual ~ModelSet();
};

#endif
