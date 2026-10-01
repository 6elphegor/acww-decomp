#include "types.h"

extern "C" {
void func_021145cc(void *p, u32 size);
void func_02111c6c(void *p, u32 src, u32 size);
void func_02111c0c(void *p, u32 src, u32 size);
void func_02111df8(void *p, u32 src, u32 size);
void func_02111d90(void *p, u32 src, u32 size);
void *func_020e8594(u32 size);
void func_020e8558(void *p);
BOOL func_02119a28(void *self, const void *path);
BOOL func_02119848(void *self, u32 off, s32 z);
s32 func_021198b4(void *self, void *dst, u32 size);
BOOL func_021199e0(void *self);
s32 func_0201188c(void);
}

struct Unk_02011580 {
    u8 unk_00[0x48];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x200];
    s32 unk_250;
    u8 unk_254;
    u8 unk_255;

    Unk_02011580();
    ~Unk_02011580();
    BOOL func_02011580();
    BOOL func_020115e0(s32 mode);
    const char *func_02011640(s32 mode);
    const char *func_02011690(s32 mode);
};

class Unk_0201106c {
public:
    BOOL func_02011410(s32 k);
    void func_020114b0(s32 which);
    void func_020114f0(s32 which);
    void func_02011550();
    void func_02011568();

    u8 unk_00[0x48];
    u8 *unk_48;
    u8 *unk_4c;
    u8 unk_50[0x200];
};

const char *Unk_02011580::func_02011640(s32 mode) {
    if (mode >= 4) mode = func_0201188c();
    const char *b = "/a_mes/a_mes_ten0_obj_ncg.bin";
    const char *a = "/a_mes/a_mes_ten1_obj_ncg.bin";
    const char *c = "/a_mes/a_mes_ten3_obj_ncg.bin";
    const char *r = "/a_mes/a_mes_obj_ncg.bin";
    if (mode == 2) r = a;
    else if (mode == 3) r = b;
    else if (unk_255 != 0) r = c;
    return r;
}

BOOL Unk_02011580::func_020115e0(s32 mode) {
    void *r6 = (void *)func_02119a28(this, func_02011690(mode));
    BOOL ok;
    unk_48 = (s32)func_020e8594(0x180);
    if (unk_48 != 0) {
        ok = func_021198b4(this, (void *)unk_48, 0x180) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = func_021199e0(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_48 != 0) return TRUE;
    return FALSE;
}

BOOL Unk_02011580::func_02011580() {
    void *r6 = (void *)func_02119a28(this, func_02011640(4));
    BOOL ok;
    unk_4c = (s32)func_020e8594(0x3000);
    if (unk_4c != 0) {
        ok = func_021198b4(this, (void *)unk_4c, 0x3000) != -1 ? TRUE : FALSE;
    } else {
        ok = FALSE;
    }
    s32 r0 = func_021199e0(this);
    if (r6 != 0 && ok != 0 && r0 != 0 && unk_4c != 0) return TRUE;
    return FALSE;
}

void Unk_0201106c::func_02011568() {
    if (unk_48 != NULL) {
        func_020e8558(unk_48);
        unk_48 = NULL;
    }
}

void Unk_0201106c::func_02011550() {
    if (unk_4c != NULL) {
        func_020e8558(unk_4c);
        unk_4c = NULL;
    }
}

void Unk_0201106c::func_020114f0(s32 which) {
    u8 *base;
    u8 *p2;
    func_021145cc(unk_48, 0x180);
    base = unk_48;
    p2 = base + 0x160;
    if ((u32)which <= 1) {
        func_02111df8(base, 0x80, 0x100);
        func_02111df8(p2, 0x1e0, 0x20);
    }
    if (which == 0 || which == 2) {
        func_02111d90(base, 0x80, 0x100);
        func_02111d90(p2, 0x1e0, 0x20);
    }
}

void Unk_0201106c::func_020114b0(s32 which) {
    func_021145cc(unk_4c, 0x3000);
    if ((u32)which <= 1) {
        func_02111c6c(unk_4c, 0x1000, 0x3000);
    }
    if (which == 0 || which == 2) {
        func_02111c0c(unk_4c, 0x1000, 0x3000);
    }
}

BOOL Unk_0201106c::func_02011410(s32 k) {
    BOOL a = func_02119a28(this, ((Unk_02011580 *)this)->func_02011640(k));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)func_020e8594(0x500);
    ok = TRUE;
    if (unk_4c != NULL) {
        src = z1;
        for (i = 0; (u32)i < 2; i++, src += 0x400) {
            if (!func_02119848(this, src, z1)) ok = z2;
            if (func_021198b4(this, unk_4c + i * 0x280, 0x280) == ~z4) ok = z3;
        }
    }
    BOOL r = func_021199e0(this);
    if (a && ok && r && unk_4c != NULL) return TRUE;
    return FALSE;
}

