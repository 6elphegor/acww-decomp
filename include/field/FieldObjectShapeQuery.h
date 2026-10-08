#ifndef FIELD_FIELDOBJECTSHAPEQUERY_H
#define FIELD_FIELDOBJECTSHAPEQUERY_H

#include "types.h"
#include "game/UnitShapeQueryX.h"

// Unit-shape query over the field objects (bss object sFieldObjectShapeQuery, src/main/unk_020b0e60.cpp). Defined in
// ov003, unk_ov003_022192b4.cpp (key function getUnitShape); the destructor is inline.
class FieldObjectShapeQuery : public UnitShapeQueryX {
public:
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
    virtual ~FieldObjectShapeQuery() {}
};

#endif
