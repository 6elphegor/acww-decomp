#ifndef TOWN_TOWNMAPMARKERS_H
#define TOWN_TOWNMAPMARKERS_H

// The 17 icon markers of the town map (houses, shops, landmarks). ctor/dtor at 0x02292cb0 and the
// TownMapMarkers_* functions are in src/ov117/unk_ov117_02292360.cpp.
#include "types.h"

struct TownMapMarker {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
    /* 0x4 */ u8 z;
};

struct TownMapMarkers {
    /* 0x00 */ TownMapMarker e[17];
    TownMapMarkers();
    ~TownMapMarkers();
};

#endif
