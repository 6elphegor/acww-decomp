#include "types.h"

extern "C" void func_020639e8(void *dst, const void *fmt, ...);
extern "C" BOOL File_LoadToBuffer(void *a, void *b, s32 c);

struct ItemId {
    u16 id;
    ItemId() : id(0x1100) {}
    ~ItemId();
};

extern "C" BOOL Wallpaper_LoadTexture(void *dst, ItemId *p) {
    s32 idx;
    BOOL ok = FALSE;
    u16 v = p->id;
    if (v >= 0x1100 && v <= 0x1143) {
        ok = TRUE;
    }
    if (ok) {
        idx = v - 0x1100;
    } else {
        idx = -1;
    }
    if (idx != -1) {
        u8 buf[0x20];
        func_020639e8(buf, "/wall/wall_%d.nsbtx", idx);
        if (File_LoadToBuffer(buf, dst, -1)) {
            return TRUE;
        }
        return FALSE;
    }
    static ItemId def;
    return Wallpaper_LoadTexture(dst, &def);
}
