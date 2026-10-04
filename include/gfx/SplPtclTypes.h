#ifndef GFX_SPLPTCLTYPES_H
#define GFX_SPLPTCLTYPES_H

// Small records of the SPL-style particle manager used by the particle emitter / field handlers
// (src/autoload_2/unk_020fc984.cpp and its companion unk_020fe5c0.cpp; declarations only).
#include "types.h"

struct P;

// particle list (head + count)
struct PList {
    /* 0x0 */ P *head;
    /* 0x4 */ s32 count;
};

// scale animation record (rec14 of the emitter resource)
struct SclRec {
    /* 0x0 */ u8 p0[4];
    /* 0x4 */ s16 sc;
};

// "random" field parameters
struct RandF {
    /* 0x0 */ s16 x, y, z;
    /* 0x6 */ u16 intv;
};

// "spin" field parameters
struct SpinF {
    /* 0x0 */ u16 angle;
    /* 0x2 */ u16 axis;
};

#endif // GFX_SPLPTCLTYPES_H
