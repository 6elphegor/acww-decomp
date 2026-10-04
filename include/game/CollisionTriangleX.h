#ifndef GAME_COLLISIONTRIANGLEX_H
#define GAME_COLLISIONTRIANGLEX_H

// Second name of the collision triangle (game/CollisionTriangle.h; the same functions and vtable 0x020d8cc4, defined
// in src/main/unk_0202e9d4.cpp). symbols.txt gives these names as labels. The derived triangles (FloorTriangle,
// TriangleTrigger, TouchPickTriangle) are built on it: with this naming the base-object destructor that their
// destructors call (D2) is 0x0202f620, and the base-object constructor (C2) is 0x0202f64c.
#include "types.h"
#include "game/Unk_0202f2ac_V3.h"

class CollisionTriangleX {
public:
    CollisionTriangleX();                   // C2 0x0202f64c
    CollisionTriangleX(Unk_0202f660_V3 *a, Unk_0202f660_V3 *b, Unk_0202f660_V3 *c, Unk_0202f660_V3 *d);
    ~CollisionTriangleX();                  // D2 0x0202f620, D1 0x0202f62c
    virtual BOOL pushOutFace(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL pushBackCrossing(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL pushOutEdges(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual BOOL collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    /* 0x04 */ Unk_0202f2ac_V3 vertex0;
    /* 0x10 */ Unk_0202f2ac_V3 vertex1;
    /* 0x1c */ Unk_0202f2ac_V3 vertex2;
    /* 0x28 */ Unk_0202f2ac_V3 normal;
    /* 0x34 */ s32 offset;
    BOOL intersectLine(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);
    s32 distanceTo(Unk_0202f2ac_V3 *p);
    BOOL containsXZ(Unk_0202f2ac_V3 *p);
    BOOL set(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, Unk_0202f2ac_V3 *c, Unk_0202f2ac_V3 *d);
};

#endif
