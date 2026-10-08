#ifndef TOWN_TOWNMAPMARKERS_H
#define TOWN_TOWNMAPMARKERS_H

// The 17 icon markers of the town map (houses, shops, landmarks), and the town map image built from the block map
// (4 x 4 acres of 4bpp tiles plus the markers). ctor/dtor at 0x02292cb0 and the TownMapMarkers_* / TownMapImage_*
// functions are in src/ov117/unk_ov117_02292360.cpp.
#include "types.h"

struct TownMapMarker {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
    /* 0x4 */ u8 z;
};

class TownMapMarkers {
public:
    /* 0x00 */ TownMapMarker e[17];
    TownMapMarkers();
    ~TownMapMarkers();
};

// One acre of the town map: 8 x 8 tiles of 4bpp pixels
class TownMapAcreImage {
public:
    u8 b[0x200];
    TownMapAcreImage();
    ~TownMapAcreImage();
};

class TownMapImage {
public:
    /* 0x0000 */ TownMapAcreImage tile[16];
    /* 0x2000 */ TownMapMarkers icons;
    TownMapImage();
};

#endif
