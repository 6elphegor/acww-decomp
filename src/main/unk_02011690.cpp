#include "types.h"

struct HudObjGfx {
    u8 unk_00[0x255];
    u8 unk_255;

    const char *getPalettePath(s32 mode);
};

extern "C" {
s32 Hud_GetSceneHudKind(void);
}

const char *HudObjGfx::getPalettePath(s32 mode) {
    if (mode >= 4) mode = Hud_GetSceneHudKind();
    const char *b = "/a_mes/a_mes_ten0_obj_ncl.bin";
    const char *a = "/a_mes/a_mes_ten1_obj_ncl.bin";
    const char *c = "/a_mes/a_mes_ten2_obj_ncl.bin";
    const char *r = "/a_mes/a_mes_obj_ncl.bin";
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}
