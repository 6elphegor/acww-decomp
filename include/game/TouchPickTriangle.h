#ifndef GAME_TOUCHPICKTRIANGLE_H
#define GAME_TOUCHPICKTRIANGLE_H

// Pickable triangle of the TouchPicker (linked through next; 0x44 bytes) and the box made of ten of them.
// Methods defined in src/main/unk_020b6b44.cpp.
#include "types.h"
#include "game/CollisionTriangleX.h"

struct Vec3;

struct TouchPickTriangle : CollisionTriangleX {
    TouchPickTriangle();
    ~TouchPickTriangle();
    static void *operator new(unsigned long, void *p) { return p; }   // ov009 builds them in place
    BOOL setupCurved(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL setup(Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    /* 0x38 */ TouchPickTriangle *next;
    /* 0x3c */ s32 kind;
    /* 0x40 */ u8 index;
};

struct TouchPickBox {
    TouchPickBox();
    ~TouchPickBox();
    BOOL build(Vec3 *pos, s32 w, s32 h, s32 d, s32 angle, s32 e, u8 f);
    /* 0x000 */ TouchPickTriangle triangles[10];
};

#endif
