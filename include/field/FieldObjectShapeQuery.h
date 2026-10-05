#ifndef FIELD_FIELDOBJECTSHAPEQUERY_H
#define FIELD_FIELDOBJECTSHAPEQUERY_H

#include "types.h"
#include "game/UnitShapeQueryX.h"

// Unit-shape query over the field objects (bss object sFieldObjectShapeQuery). Defined in ov003, unk_ov003_022192b4.cpp
// (key function getUnitShape 0x0221fd44, vtable _ZTV21FieldObjectShapeQuery 0x02232c00). The destructor is inline in the
// original: its D1 (0x020b2c38) is emitted by main's unk_020b0e60.cpp, which keeps its own copy with the inline
// destructor; D0 0x02219294 is a separate ov003 unit.
class FieldObjectShapeQuery : public UnitShapeQueryX {
public:
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
    virtual ~FieldObjectShapeQuery();
};

#endif
