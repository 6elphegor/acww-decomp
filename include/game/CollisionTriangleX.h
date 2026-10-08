#ifndef GAME_COLLISIONTRIANGLEX_H
#define GAME_COLLISIONTRIANGLEX_H

// Second name of the collision triangle (game/CollisionTriangle.h; the same functions, defined in
// src/main/unk_0202e9d4.cpp). symbols.txt gives these names as labels (vtable 0x020d8cc4, base-object destructor D2
// 0x0202f620, constructor C2 0x0202f64c); the derived triangles (FloorTriangle, TriangleTrigger, TouchPickTriangle)
// are built on it. On the host it is the same class.
#include "game/CollisionTriangle.h"

typedef CollisionTriangle CollisionTriangleX;

#endif
