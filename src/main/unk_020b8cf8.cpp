#include "types.h"

extern "C" void func_020639e8(void *dst, const void *fmt, ...);
extern "C" BOOL func_020641b4(void *a, void *b, s32 c);

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c() : unk_00(0x1100) {}
    ~Unk_0203442c();
};

extern "C" BOOL func_020b8cf8(void *dst, Unk_0203442c *p) {
    s32 idx;
    BOOL ok = FALSE;
    u16 v = p->unk_00;
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
        if (func_020641b4(buf, dst, -1)) {
            return TRUE;
        }
        return FALSE;
    }
    static Unk_0203442c def;
    return func_020b8cf8(dst, &def);
}
