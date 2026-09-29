// mwcc-version: 1.2/sp2 (see README: the game compiler emits sp2-style adjuster thunks)
#include "types.h"

extern "C" {
s32 func_020952e0(s32 v);
void *func_020974a0(void);
s32 func_020987ec(void *p);
s32 func_02098814(void *p);
s32 func_02098840(void *p);
u16 *func_02098714(void *p);
u16 *func_0209872c(void *p);
s32 func_0209888c(void *p);
s32 func_0209411c(void);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_02010d20(void *p);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010dbc(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void func_02010e68(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
BOOL func_020729bc(void *p, s32 v);
BOOL func_02095180(s32 a, s32 b);
BOOL func_020947f0(s32 a);
s32 func_0202ffdc(void);
void func_02094420(s32 *p);
void *func_020b4934(void);
BOOL func_020b4b68(void *a, s32 b, s32 *c, s32 *d);
void func_02094400(s32 *p);
BOOL func_0209c7a4(s32 v);
BOOL func_020b52d0(void);
void func_0203d76c(void);
void func_0203da7c(void);
s32 func_020951ec(s32 v);
void func_0203daa0(s32 a, s32 b);
extern void *data_020cbb18;
}

extern "C" s32 func_02010c74(void *p) {
    func_020987ec(func_02010d20(p));
}
extern "C" s32 func_02010c88(void *p) {
    func_02098814(func_02010d20(p));
}
extern "C" s32 func_02010c9c(void *p) {
    func_02098840(func_02010d20(p));
}
extern "C" void func_02010cb0(u16 *out, void *p) {
    void *r = func_02010d20(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *func_02098714(r);
    }
}
extern "C" void func_02010cd4(u16 *out, void *p) {
    void *r = func_02010d20(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *func_0209872c(r);
    }
}
extern "C" BOOL func_02010cf8(void *p) {
    void *r = func_02010d20(p);
    BOOL result = FALSE;
    if (r != NULL) {
        func_0209888c(r);
        if (func_0209411c()) {
            result = TRUE;
        } else {
            result = FALSE;
        }
    }
    return result;
}
extern "C" void *func_02010d20(void *p) {
    if (func_020952e0(*(s32 *)((u8 *)p + 0x7fc)) < 7) {
        return func_020974a0();
    }
    return NULL;
}
extern "C" s32 func_02010d44(s32 a, s32 b) {
    return func_02010d5c(a, b, 0x8f);
}
extern "C" s32 func_02010d50(s32 a, s32 b) {
    return func_02010d5c(a, b, 0x9c);
}
extern "C" s32 func_02010d5c(s32 a, s32 b, s32 c) {
    s32 v = a - c;
    if (v < b) v = b;
    return v;
}
extern "C" s32 func_02010d68(s32 a, s32 b) {
    s32 v = a + 0x93;
    if (v > b) v = b;
    return v;
}
extern "C" s32 func_02010d74(s16 *p, s32 target) {
    return func_02010dbc(p, target, 0x666, 0xbb8000, 0xc0000);
}
extern "C" s32 func_02010d98(s16 *p, s32 target) {
    return func_02010dbc(p, target, 0x800, 0x1770000, 0xc0000);
}
extern "C" s32 func_02010dbc(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    s32 d, t, c;
    if (cur == target) {
        return 0;
    }
    c = cur << 12;
    t = target << 12;
    d = t - c;
    if (d < 0) d = -d;
    s32 step;
    if (d > 0x8000000) {
        step = func_01ffcb0c(rate, 0x10000000 - d);
    } else {
        step = func_01ffcb0c(rate, d);
    }
    if (step <= minstep) {
        *p = target;
        return 0;
    }
    if (step > maxstep) step = maxstep;
    s32 v;
    if (t >= c) {
        if (d > 0x8000000) v = c - step;
        else v = c + step;
    } else {
        if (d > 0x8000000) v = c + step;
        else v = c - step;
    }
    *p = v >> 12;
    return (s16)(target - *p);
}
extern "C" void func_02010e48(s32 *p, s32 target) {
    func_02010e68(p, target, 0xe66, 0x1ec, 0x31);
}
extern "C" void func_02010e68(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    if (cur == target) return;
    s32 d = target - cur;
    s32 ad = d < 0 ? -d : d;
    if (ad < minstep) {
        *p = target;
        return;
    }
    s32 v = func_01ffcb0c(d, rate);
    s32 av = v < 0 ? -v : v;
    if (av > maxstep) {
        if (v >= 0) *p += maxstep;
        else *p -= maxstep;
    } else if (av < minstep) {
        if (v >= 0) *p += minstep;
        else *p -= minstep;
    } else {
        *p += v;
    }
}

extern "C" void func_02010ed8(s32 a) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    if (func_020729bc(data_020cbb18, a) && !func_02095180(0xb, a) && !func_02095180(0x13, a) &&
        !func_02095180(5, a) && func_020947f0(4)) {
        sp4 = func_0202ffdc();
        if (sp4 != -1) {
            func_02094420(&sp4);
            if (func_020b4b68(func_020b4934(), sp4, &sp8, &sp0)) {
                func_02094400(&sp8);
                if (sp8 == 1 || sp8 == 2 || sp8 == 4 || func_0209c7a4(sp4)) {
                    if (func_020b52d0()) {
                        func_0203d76c();
                    }
                    func_0203da7c();
                } else {
                    func_0203daa0(func_020951ec(4), sp4);
                }
            }
        }
    }
}

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
extern u8 data_020c6c68[];
extern u32 data_020d6f68[];
}

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
    const void *func_02011640(s32 k);

    u8 unk_00[0x48];
    u8 *unk_48;
    u8 *unk_4c;
    u8 unk_50[0x200];
};

void Unk_0201106c::func_0201106c() {
    func_02011550();
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

BOOL Unk_0201106c::func_020110bc(s32 alt) {
    BOOL a = func_02119a28(this, alt == 0 ? func_02011640(1) : data_020c6c68);
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
void Unk_0201106c::func_02011158() {
    func_02011550();
}
void Unk_0201106c::func_02011550() {
    if (unk_4c != NULL) {
        func_020e8558(unk_4c);
        unk_4c = NULL;
    }
}
void Unk_0201106c::func_02011568() {
    if (unk_48 != NULL) {
        func_020e8558(unk_48);
        unk_48 = NULL;
    }
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

BOOL Unk_0201106c::func_020111b0(s32 alt) {
    BOOL a = func_02119a28(this, alt != 0 ? data_020c6c68 : func_02011640(4));
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

BOOL Unk_0201106c::func_020112dc(s32 alt) {
    BOOL a = func_02119a28(this, alt != 0 ? data_020c6c68 : func_02011640(2));
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

void Unk_0201106c::func_02011408() {
    func_02011550();
}

BOOL Unk_0201106c::func_02011410(s32 k) {
    BOOL a = func_02119a28(this, func_02011640(k));
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

void Unk_0201106c::func_020114b0(s32 which) {
    func_021145cc(unk_4c, 0x3000);
    if ((u32)which <= 1) {
        func_02111c6c(unk_4c, 0x1000, 0x3000);
    }
    if (which == 0 || which == 2) {
        func_02111c0c(unk_4c, 0x1000, 0x3000);
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

struct Unk_0203e7a4 {
    virtual ~Unk_0203e7a4();
    u8 unk_04[0xe8];
};
struct Unk_020d6e6c {
    Unk_020d6e6c();
    virtual ~Unk_020d6e6c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_70();
    u8 unk_04[0x80];
};
// Vtable at 0x020d6dd8 (primary) and 0x020d6e6c (secondary base at +0xec).
class Unk_020d6df4 : public Unk_0203e7a4, public Unk_020d6e6c {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *p);
    Unk_020d6df4();
    virtual ~Unk_020d6df4();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    u8 unk_170[0xb2c];
};
Unk_020d6df4::~Unk_020d6df4() {}
void Unk_020d6df4::vfunc_10() {}
void Unk_020d6df4::vfunc_14() {}
void Unk_020d6df4::vfunc_18() {}
void Unk_020d6df4::vfunc_70() {}

extern "C" void func_02010f88() {
    new Unk_020d6df4();
}

struct Unk_020f43c8_Base {
    virtual ~Unk_020f43c8_Base();
};
struct Unk_020d6f54 : Unk_020f43c8_Base {
    u8 unk_04[0x4c];
    virtual ~Unk_020d6f54();
};
Unk_020d6f54::~Unk_020d6f54() {}
