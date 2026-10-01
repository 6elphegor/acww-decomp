#include "types.h"

struct Unk_02011580 {
    u8 unk_00[0x255];
    u8 unk_255;

    const char *func_02011690(s32 mode);
};

extern "C" {
s32 func_0201188c(void);
}

const char *Unk_02011580::func_02011690(s32 mode) {
    if (mode >= 4) mode = func_0201188c();
    const char *b = "/a_mes/a_mes_ten0_obj_ncl.bin";
    const char *a = "/a_mes/a_mes_ten1_obj_ncl.bin";
    const char *c = "/a_mes/a_mes_ten2_obj_ncl.bin";
    const char *r = "/a_mes/a_mes_obj_ncl.bin";
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}
