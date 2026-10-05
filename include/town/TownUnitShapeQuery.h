#ifndef TOWN_TOWNUNITSHAPEQUERY_H
#define TOWN_TOWNUNITSHAPEQUERY_H

#include "types.h"
#include "game/UnitShapeQueryX.h"

// 4-byte unit-shape query over the town map (vtable _ZTV18TownUnitShapeQuery 0x020e3dc4). Defined in main,
// unk_020b0e60.cpp (getUnitShape 0x020b2610, D0 0x020b2718, D1 0x020b2738, C2/C1 0x020b2750).
class TownUnitShapeQuery : public UnitShapeQueryX {
public:
    TownUnitShapeQuery();
    virtual ~TownUnitShapeQuery();
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, volatile s32 x, volatile s32 y);
};

#endif
