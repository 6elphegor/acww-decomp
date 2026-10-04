#ifndef FIELD_FIELDGROUNDBACKDROP_H
#define FIELD_FIELDGROUNDBACKDROP_H

// Ground backdrop model of the field (0x02217b10-0x02217be8): a cached model plus its resource; follows the camera.
// Defined in src/ov003/unk_ov003_02217b10.cpp.
#include "types.h"
#include "gfx/CachedModel.h"

struct NNSG3dResMdl;

class FieldGroundBackdrop {
public:
    FieldGroundBackdrop();
    ~FieldGroundBackdrop();
    BOOL followCamera();
    BOOL init();
    void clear();

    /* 0x00 */ CachedModel model;
    /* 0x9c */ NNSG3dResMdl *modelRes;
};

#endif // FIELD_FIELDGROUNDBACKDROP_H
