#ifndef GAME_STARSKYVIEW_H
#define GAME_STARSKYVIEW_H

// Star-sky (constellation) view work area, 0x2838 bytes; ctor/dtor at 0x02292aac (ov128/ov129 scene overlays).
#include "types.h"

class StarSkyView {
public:
    StarSkyView();
    ~StarSkyView();
    /* 0x0000 */ u32 unk_00[0x2838 / 4];
};

#endif
