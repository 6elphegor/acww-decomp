#ifndef GAME_STARSKYVIEW_H
#define GAME_STARSKYVIEW_H

// Star-sky (constellation) view work area, 0x2838 bytes; ctor/dtor at 0x02292aac, StarSky_* functions in ov127
// (src/ov127/unk_ov127_02291f60.cpp), member of the ov128/ov129 scene menus.
#include "types.h"
#include "gfx/BgVramTask.h"

class StarSkyView {
public:
    StarSkyView();
    ~StarSkyView();
    /* 0x0000 */ BgVramTask screenTask;      // uploads skyScreenWork (StarSky_Update)
    /* 0x0024 */ u8 skyScreen[0x1000];       // menu/star/bg.bsc with the constellation lines drawn in
    /* 0x1024 */ u16 skyScreenWork[0x800];   // skyScreen with the clipped rows blanked, uploaded
    /* 0x2024 */ u16 scopeScreen[0x400];     // menu/star/b_scp_bg.bsc (telescope frame)
    /* 0x2824 */ s16 scrollX;
    /* 0x2826 */ s16 scrollY;
    /* 0x2828 */ s16 overscroll;
    /* 0x282a */ s16 targetScrollX;
    /* 0x282c */ s16 targetScrollY;
    /* 0x282e */ s16 clipRows;
    /* 0x2830 */ u16 flags;
    /* 0x2832 */ u8 skyLayer;
    /* 0x2833 */ u8 scopeLayer;
    /* 0x2834 */ u8 activeArrow;
    /* 0x2835 */ u8 bounceDir;
    /* 0x2836 */ u8 bounceTimer;
};

#endif
