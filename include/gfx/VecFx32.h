#ifndef GFX_VECFX32_H
#define GFX_VECFX32_H

#include "types.h"

// The game's vector and point types.
//
// VecFx32 / VecFx16: the NitroSDK fixed-point vectors (s32/s16 members; the NNS_G3d / G3 / VEC_ APIs take them).
// The C units with their own `long` base typedefs keep their typedef'd copies. Plain V3 / V3Arr views: gfx/V3.h.
struct VecFx32 {
    /* 0x0 */ s32 x, y, z;
};

struct VecFx16 {
    /* 0x0 */ s16 x, y, z;
};

// VecFx32 with inline constructors / destructor. The members matter only to the compiler (a user-declared
// constructor, copy constructor or destructor changes how mwcc builds, copies and returns these objects), so every
// placeholder copy that declared them was folded into the variant with the same kind of members; constructor
// overloads a unit does not call change nothing.
// - VecFx32Ctor: empty default constructor and (x, y, z).
struct VecFx32Ctor {
    /* 0x0 */ s32 x, y, z;
    VecFx32Ctor() {}
    VecFx32Ctor(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

// - VecFx32CtorDtor: VecFx32Ctor plus an empty inline destructor.
struct VecFx32CtorDtor {
    /* 0x0 */ s32 x, y, z;
    VecFx32CtorDtor() {}
    VecFx32CtorDtor(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~VecFx32CtorDtor() {}
};

// - VecFx32Copy: VecFx32Ctor plus a member-wise inline copy constructor.
struct VecFx32Copy {
    /* 0x0 */ s32 x, y, z;
    VecFx32Copy() {}
    VecFx32Copy(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    VecFx32Copy(const VecFx32Copy &o) { x = o.x; y = o.y; z = o.z; }
};

// - VecFx32CopyDtor: VecFx32Copy plus an empty inline destructor.
struct VecFx32CopyDtor {
    /* 0x0 */ s32 x, y, z;
    VecFx32CopyDtor() {}
    VecFx32CopyDtor(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    VecFx32CopyDtor(const VecFx32CopyDtor &o) { x = o.x; y = o.y; z = o.z; }
    ~VecFx32CopyDtor() {}
};

// 2D points. Vec2: an (x, y) pair (screen positions, unit / block grid coordinates, offsets). VecXZ: a ground-plane
// (x, z) pair of world coordinates.
struct Vec2 {
    /* 0x0 */ s32 x, y;
};

struct VecXZ {
    /* 0x0 */ s32 x, z;
};

#endif
