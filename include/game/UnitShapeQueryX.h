#ifndef GAME_UNITSHAPEQUERYX_H
#define GAME_UNITSHAPEQUERYX_H

#include "types.h"

// main's UnitShapeQuery, declared in its label spelling UnitShapeQueryX (C1 0x02031600, D1 0x020315f4, D0 0x020315dc,
// D2 0x020315d0, getUnitShape 0x020315cc; main, unk_0202fa70.cpp). Base of FieldObjectShapeQuery (ov003) and others.
struct UnitShapeQueryX {
    UnitShapeQueryX();
    virtual ~UnitShapeQueryX();
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};

#endif
