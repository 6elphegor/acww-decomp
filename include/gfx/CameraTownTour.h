#ifndef GFX_CAMERATOWNTOUR_H
#define GFX_CAMERATOWNTOUR_H

#include "types.h"
#include "gfx/VecFx32.h"

// Town tour camera mode of ov068 (Camera::townTour at 0x21c, the mode parameter block): the camera visits the town's
// buildings in turn (src/ov068/unk_ov068_0226647c.cpp), holding on each for holdTimer frames.
struct CameraTownTourState {
    /* 0x00 */ u16 holdTimer;
    /* 0x02 */ s16 buildingIndex;  // into sTownTourBuildings / sTownTourOffsets
    /* 0x04 */ VecFx32 building;   // the building's position
    /* 0x10 */ VecFx32 *offset;    // the look-at offset from it
    /* 0x14 */ s32 speed;
};

#endif
