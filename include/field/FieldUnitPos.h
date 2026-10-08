#ifndef FIELD_FIELDUNITPOS_H
#define FIELD_FIELDUNITPOS_H

// A field unit (x, z): the copyable position the field object, item effect and tree functions of ov003 take by value
// (src/ov003/unk_ov003_022192b4.cpp: Tree_RequestShake, FieldItemFx_Start*, ...). The copy constructor is part of
// the type: such an object is passed by reference to a temporary copy, as the callers in other files rely on.
#include "types.h"
#include "gfx/VecFx32.h"

struct FieldUnitPos {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 z;
    FieldUnitPos() {}
    FieldUnitPos(s32 a, s32 b) { x = a; z = b; }
    FieldUnitPos(const FieldUnitPos &o) { x = o.x; z = o.z; }
    FieldUnitPos(const VecXZ &o) { x = o.x; z = o.z; }
    bool operator==(const FieldUnitPos &o) const { return x == o.x && z == o.z; }
};

#endif
