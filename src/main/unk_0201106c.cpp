#include "types.h"

extern "C" {
void func_021145cc(void *p, u32 size);
void func_02111c6c(void *p, u32 src, u32 size);
void func_02111c0c(void *p, u32 src, u32 size);
void *func_020e8594(u32 size);
void func_020e8558(void *p);
BOOL func_02119a28(void *self, const void *path);
BOOL func_02119848(void *self, u32 off, s32 z);
s32 func_021198b4(void *self, void *dst, u32 size);
BOOL func_021199e0(void *self);
}

// Defined in the neighbouring unit (U012).
class Unk_02011580 {
public:
    const void *func_02011640(s32 k);
};

// The class's other methods (0x02011410, 0x02011550, 0x02011568, ...) are defined in other units.
class Unk_0201106c {
public:
    void func_0201106c();
    void func_02011074();
    BOOL func_020110bc(s32 alt);
    void func_02011158();
    void func_02011160();
    BOOL func_020111b0(s32 alt);
    void func_02011258(s32 which);
    BOOL func_020112dc(s32 alt);
    void func_0201137c(s32 which);
    void func_02011408();
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

extern const char data_020c6c68[];
const char data_020c6c68[] = "/a_mes/a_mes_ten2_obj_ncg.bin";

u32 data_020d6f68[5] = {0x28c0, 0x100, 0x140, 0x180, 0x1c0};

void Unk_0201106c::func_02011408() {
    func_02011550();
}

void Unk_0201106c::func_0201137c(s32 which) {
    BOOL w, f1, f2;
    u32 src;
    s32 i;
    func_021145cc(unk_4c, 0x500);
    w = which == 0;
    f1 = w || which == 1;
    f2 = w || which == 2;
    src = 0x1000;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x280;
        if (f1) func_02111c6c(p, src, 0x280);
        if (f2) func_02111c0c(p, src, 0x280);
    }
}

BOOL Unk_0201106c::func_020112dc(s32 alt) {
    BOOL a = func_02119a28(this, alt != 0 ? data_020c6c68 : ((Unk_02011580 *)this)->func_02011640(2));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    ok = TRUE;
    if (alt != 0) {
        src = 0;
    } else {
        src = 0x180;
    }
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!func_02119848(this, src, z1)) ok = z2;
        if (func_021198b4(this, unk_50 + i * 0x100, 0x100) == ~z4) ok = z3;
    }
    BOOL r = func_021199e0(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void Unk_0201106c::func_02011258(s32 which) {
    BOOL w, f1, f2;
    u32 src;
    s32 i;
    func_021145cc(unk_50, 0x200);
    w = which == 0;
    f1 = w || which == 1;
    f2 = w || which == 2;
    src = 0x1180;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_50 + i * 0x100;
        if (f1) func_02111c6c(p, src, 0x100);
        if (f2) func_02111c0c(p, src, 0x100);
    }
}

BOOL Unk_0201106c::func_020111b0(s32 alt) {
    BOOL a = func_02119a28(this, alt != 0 ? data_020c6c68 : ((Unk_02011580 *)this)->func_02011640(4));
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)func_020e8594(0x200);
    ok = TRUE;
    if (alt != 0) {
        src = 0x200;
    } else {
        src = 0x2300;
    }
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!func_02119848(this, src, z1)) ok = z2;
        if (func_021198b4(this, unk_4c + i * 0x100, 0x100) == ~z4) ok = z3;
    }
    BOOL r = func_021199e0(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void Unk_0201106c::func_02011160() {
    u32 src;
    s32 i;
    func_021145cc(unk_4c, 0x200);
    src = 0x3300;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x100;
        func_02111c6c(p, src, 0x100);
        func_02111c0c(p, src, 0x100);
    }
}

void Unk_0201106c::func_02011158() {
    func_02011550();
}

BOOL Unk_0201106c::func_020110bc(s32 alt) {
    BOOL a = func_02119a28(this, alt == 0 ? ((Unk_02011580 *)this)->func_02011640(1) : data_020c6c68);
    BOOL ok;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u32 src;
    s32 i;
    unk_4c = (u8 *)func_020e8594(0x80);
    ok = TRUE;
    src = data_020d6f68[alt];
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        if (!func_02119848(this, src, z1)) ok = z2;
        if (func_021198b4(this, unk_4c + i * 0x40, 0x40) == ~z4) ok = z3;
    }
    BOOL r = func_021199e0(this);
    if (a && ok && r) return TRUE;
    return FALSE;
}

void Unk_0201106c::func_02011074() {
    u32 src;
    s32 i;
    func_021145cc(unk_4c, 0x80);
    src = 0x38c0;
    for (i = 0; (u32)i < 2; i++, src += 0x400) {
        u8 *p = unk_4c + i * 0x40;
        func_02111c6c(p, src, 0x40);
        func_02111c0c(p, src, 0x40);
    }
}

void Unk_0201106c::func_0201106c() {
    func_02011550();
}
