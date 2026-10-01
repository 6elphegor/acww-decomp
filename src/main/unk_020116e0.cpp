#include "types.h"

// TU014-TU017 (one original file): 0x020116e0-0x020119cc. The file owns the global Unk_02011580 object
// (.bss, autoload_3 0x021bdb74-0x021bddd8: registration record + object), which __sinit constructs, and a
// lookup table in .rodata (0x020c6c88-0x020c6cbc).

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
    void func_020116e8(u32 v);
    void func_02011718(u32 v);
    void func_02011748(u32 a, u32 b, u32 c);
    void func_02011788(u32 a, u32 b);
    void func_02011800(u32 a);
};

// Methods of the same object under the class name of an earlier unit (0x0201106c-0x020116e0); called by
// their symbols.txt names.
extern "C" {
void func_02119d78(void *p);
void *_ZN12Unk_0201106c13func_02011568Ev(void *p);
void *_ZN12Unk_0201106c13func_02011550Ev(void *p);
void _ZN12Unk_0201106c13func_0201106cEv(void *p);
void _ZN12Unk_0201106c13func_02011074Ev(void *p);
s32 _ZN12Unk_0201106c13func_020110bcEi(void *p, u32 v);
void _ZN12Unk_0201106c13func_02011158Ev(void *p);
void _ZN12Unk_0201106c13func_02011160Ev(void *p);
s32 _ZN12Unk_0201106c13func_020111b0Ei(void *p, u32 v);
void _ZN12Unk_0201106c13func_02011258Ei(void *p, u32 v);
s32 _ZN12Unk_0201106c13func_020112dcEi(void *p, u32 v);
void _ZN12Unk_0201106c13func_020114f0Ei(void *p, u32 v);
void _ZN12Unk_0201106c13func_020114b0Ei(void *p, u32 v);
s32 _ZN12Unk_0201106c13func_02011410Ei(void *p, u32 v);
void _ZN12Unk_0201106c13func_0201137cEi(void *p, u32 v);
void _ZN12Unk_0201106c13func_02011408Ev(void *p);
s32 func_0208f010(void);
s32 func_020b50e8(void);
s32 func_02038f00(void);
void func_02115fb4(void *dst, u32 v, u32 n);
s32 func_0201188c(void);
void func_020116e0(void *p);

extern const u8 data_020c6c88[0x34];
}

Unk_02011580 data_021bdb80;

extern "C" const u8 data_020c6c88[0x34] = {
    1, 2, 2, 2, 2, 2, 0, 1, 1, 3, 3, 1, 0, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    3, 3, 3, 3, 3, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
};

Unk_02011580::Unk_02011580() {
    unk_48 = 0;
    unk_4c = 0;
    unk_250 = 3;
    unk_254 = 0;
    unk_255 = 0;
    func_02115fb4(&unk_50, 0, 0x200);
}

Unk_02011580::~Unk_02011580() {
    _ZN12Unk_0201106c13func_02011568Ev(this);
    _ZN12Unk_0201106c13func_02011550Ev(this);
}

extern "C" void func_0201195c(void) {
    data_021bdb80.func_02011800(0);
    func_02038f00();
}

extern "C" void func_02011940(void) {
    data_021bdb80.func_02011800(2);
    func_02038f00();
}

extern "C" void func_0201192c(u32 a, u32 b) { data_021bdb80.func_02011788(a, b); }

extern "C" void func_0201190c(u32 a, u32 b, u32 c) { data_021bdb80.func_02011748(a, b, c); }

extern "C" void func_02011900(u8 v) { data_021bdb80.unk_255 = v; }

extern "C" u8 func_020118f4(void) { return data_021bdb80.unk_255; }

extern "C" void func_020118e4(u32 a) { data_021bdb80.func_02011718(a); }

extern "C" void func_020118d4(u32 a) { data_021bdb80.func_020116e8(a); }

extern "C" void func_020118a4(void) {
    Unk_02011580 *p = &data_021bdb80;
    if (data_021bdb80.unk_250 != 3) {
        _ZN12Unk_0201106c13func_02011258Ei(p, p->unk_250);
        p->unk_250 = 3;
    }
}

extern "C" s32 func_0201188c(void) { return data_020c6c88[func_020b50e8()]; }

extern "C" u8 func_02011880(void) { return data_021bdb80.unk_254; }

extern "C" void func_02011874(void) { data_021bdb80.unk_254 = 1; }

extern "C" void func_02011868(void) { data_021bdb80.unk_254 = 0; }

void Unk_02011580::func_02011800(u32 a) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (p->func_020115e0(4)) _ZN12Unk_0201106c13func_020114f0Ei(p, a);
    _ZN12Unk_0201106c13func_02011568Ev(p);
    if (p->func_02011580()) _ZN12Unk_0201106c13func_020114b0Ei(p, a);
    _ZN12Unk_0201106c13func_02011550Ev(p);
    if (func_0201188c() == 2) {
        if (func_0208f010()) func_02011748(1, 0, a);
    }
}

void Unk_02011580::func_02011788(u32 a, u32 b) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (p->func_020115e0(a)) _ZN12Unk_0201106c13func_020114f0Ei(p, b);
    _ZN12Unk_0201106c13func_02011568Ev(p);
    if (_ZN12Unk_0201106c13func_02011410Ei(p, a)) _ZN12Unk_0201106c13func_0201137cEi(p, b);
    _ZN12Unk_0201106c13func_02011408Ev(p);
    if (a == 2 || (a == 4 && func_0201188c() == 2)) {
        if (func_0208f010()) func_02011748(1, 0, b);
    }
}

void Unk_02011580::func_02011748(u32 a, u32 b, u32 c) {
    s32 r;
    func_020116e0(&data_021bdb80);
    r = _ZN12Unk_0201106c13func_020112dcEi(&data_021bdb80, a);
    if (b != 0) {
        unk_250 = c;
    } else if (r != 0) {
        _ZN12Unk_0201106c13func_02011258Ei(&data_021bdb80, c);
    }
}

void Unk_02011580::func_02011718(u32 v) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (_ZN12Unk_0201106c13func_020111b0Ei(p, v)) _ZN12Unk_0201106c13func_02011160Ev(p);
    _ZN12Unk_0201106c13func_02011158Ev(this);
}

void Unk_02011580::func_020116e8(u32 v) {
    Unk_02011580 *p = &data_021bdb80;
    func_020116e0(p);
    if (_ZN12Unk_0201106c13func_020110bcEi(p, v)) _ZN12Unk_0201106c13func_02011074Ev(p);
    _ZN12Unk_0201106c13func_0201106cEv(this);
}

extern "C" void func_020116e0(void *p) { func_02119d78(p); }
