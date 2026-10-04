#ifndef GAME_COLLISIONCYLINDER_H
#define GAME_COLLISIONCYLINDER_H

// Vertical collision cylinder (x/z circle plus height; 0x14 bytes). CollisionCylinder's methods are in
// src/main/unk_0202e9d4.cpp; CollisionCylinderX is the second name symbols.txt gives the same functions
// (labels in src/main/unk_0202fa70.cpp, base of TouchPickCylinder). Its destructor names are the ones local objects need:
// D1 0x0202fdb4 (src/main/unk_020b6b44.cpp and unk_020b705c.cpp build a CollisionCylinderX on the stack and use the two
// clip functions of 0x0202e9d4 through their CollisionCylinderX labels).
#include "types.h"
#include "game/CollisionCircle.h"

class CollisionCylinder : public CollisionCircle {
public:
    /* 0x10 */ s32 cylinderHeight;

    BOOL clipSegmentSideBounded(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL clipSegmentCaps(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    ~CollisionCylinder();
    CollisionCylinder(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    CollisionCylinder();
};

class CollisionCylinderX : public CollisionCircle {
public:
    /* 0x10 */ s32 cylinderHeight;

    BOOL clipSegmentSideBounded(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);   // label, 0x0202f7b8
    BOOL clipSegmentCaps(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);          // label, 0x0202f968
    BOOL clipSegmentSide(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL clipSegmentTop(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL landOnTop(Unk_0202f660_V3 *out, Unk_0202f660_V3 *a);
    BOOL pushOut(Unk_0202f660_V3 *pos, s32 r);
    void setCylinder(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    ~CollisionCylinderX();                  // D2 0x0202fda4, D1 0x0202fdb4
    CollisionCylinderX(Unk_0202f660_V3 *pos, s32 radius, s32 height);
    CollisionCylinderX();
};

#endif
