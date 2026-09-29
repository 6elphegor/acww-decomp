#include "types.h"

struct Unk_0204a754 {
    Unk_0204a754();
    ~Unk_0204a754();
};

struct Unk_0204a758 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void func_0204a758();
};

struct Unk_0204a768 {
    u8 unk_00[0x18];
    Unk_0204a754 unk_18;
    Unk_0204a768();
};

Unk_0204a754::Unk_0204a754() {}
Unk_0204a754::~Unk_0204a754() {}

void Unk_0204a758::func_0204a758() {
    unk_00 = 0;
    unk_04 = 0;
    unk_00 = -1;
    unk_04 = -1;
    unk_08 = -1;
}

Unk_0204a768::Unk_0204a768() {}

extern "C" {
BOOL func_0204a7d0(u16 *p);
BOOL func_0204a800(u16 *p);
BOOL func_0204a830(u16 *p);
BOOL func_0204a860(u16 *p);
BOOL func_0204a890(u16 *p);
BOOL func_0204a8c0(u16 *p);
BOOL func_0204a8f0(u16 *p);
BOOL func_0204a920(u16 *p);
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi);
s32 func_0204aa24(u16 *p);
BOOL func_0204aab0(u16 *p);
BOOL func_0204aaa4(u16 *p);
BOOL func_0204aa98(u16 *p);
BOOL func_0204aa60(u16 *p);
BOOL func_0204aa28(u16 *p);
BOOL func_0204aabc(u16 *p);
BOOL func_0204aaf4(u16 *p);
BOOL func_0204ab18(u16 *p);
BOOL func_0204ab24(u16 *p);
BOOL func_0204ab30(u16 *p);
BOOL func_0204ab3c(u16 *p);
BOOL func_0204ab74(u16 *p);
BOOL func_0204ab80(u16 *p);
BOOL func_0204ab8c(u16 *p);
BOOL func_0204ab98(u16 *p);
BOOL func_0204abec(u16 *p);
BOOL func_0204ac18(u16 *p);
BOOL func_0204ac24(u16 *p);
BOOL func_0204ac30(u16 *p);
BOOL func_0204ac54(u16 *p);
BOOL func_0204ac64(u16 *p);
BOOL func_0204ac70(u16 *p);
BOOL func_0204aca4(u16 *p);
BOOL func_0204acd8(u16 *p);
BOOL func_0204ad58(u16 *p);
BOOL func_0204ad64(u16 *p);
BOOL func_0204ad70(u16 *p);
BOOL func_0204ad7c(u16 *p);
BOOL func_0204ad88(u16 *p);
BOOL func_0204adf0(u16 *p);
BOOL func_0204ae58(u16 *p);
BOOL func_0204ae64(u16 *p);
BOOL func_0204ae74(u16 *p);
BOOL func_0204ae80(u16 *p);
BOOL func_0204ae90(u16 *p);
BOOL func_0204ae9c(u16 *p);
BOOL func_0204aea8(u16 *p);
BOOL func_0204aeb4(u16 *p);
BOOL func_0204aec0(u16 *p);
BOOL func_0204af90(u16 *p);
BOOL func_0204afe4(u16 *p);
BOOL func_0204b038(u16 *p);
BOOL func_0204b08c(u16 *p);

u16 func_0204a780(u32 x) { if (x < 0x20) return x + 0x13a8; return 0x13a8; }
u16 func_0204a798(u32 x) { if (x < 0x44) return x + 0x1100; return 0x1100; }
u16 func_0204a7b0(u32 x) { if (x < 0x20) return x + 0x1380; return 0x1380; }
u16 func_0204a948(u32 x) { if (x < 0x40) return x + 0x1431; return 0x1431; }
u16 func_0204a97c(u32 x) { if (x < 0x44) return x + 0x1144; return 0x1144; }
u16 func_0204a994(u32 x) { if (x < 0x40) return x + 0x13c8; return 0x13c8; }
u16 func_0204a9ac(u32 x) { if (x < 0x38) return x + 0x12b0; return 0x12b0; }
u16 func_0204a960(u32 x) { if (x < 0x100) return x + 0x11a8; return 0x11a8; }

static inline BOOL Unk_0204a7d0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

BOOL func_0204a7c8(u16 *p) { return func_0204a7d0(p); }
BOOL func_0204a7d0(u16 *p) { if (Unk_0204a7d0_R(p, 0x13a8, 0x13c7)) return TRUE; return FALSE; }
BOOL func_0204a7f8(u16 *p) { return func_0204a800(p); }
BOOL func_0204a800(u16 *p) { if (Unk_0204a7d0_R(p, 0x1100, 0x1143)) return TRUE; return FALSE; }
BOOL func_0204a828(u16 *p) { return func_0204a830(p); }
BOOL func_0204a830(u16 *p) { if (Unk_0204a7d0_R(p, 0x1380, 0x139f)) return TRUE; return FALSE; }
BOOL func_0204a858(u16 *p) { return func_0204a860(p); }
BOOL func_0204a860(u16 *p) { if (Unk_0204a7d0_R(p, 0x1000, 0x10ff)) return TRUE; return FALSE; }
BOOL func_0204a888(u16 *p) { return func_0204a890(p); }
BOOL func_0204a890(u16 *p) { if (Unk_0204a7d0_R(p, 0x1431, 0x1470)) return TRUE; return FALSE; }
BOOL func_0204a8b8(u16 *p) { return func_0204a8c0(p); }
BOOL func_0204a8c0(u16 *p) { if (Unk_0204a7d0_R(p, 0x11a8, 0x12a7)) return TRUE; return FALSE; }
BOOL func_0204a8e8(u16 *p) { return func_0204a8f0(p); }
BOOL func_0204a8f0(u16 *p) { if (Unk_0204a7d0_R(p, 0x1144, 0x1187)) return TRUE; return FALSE; }
BOOL func_0204a918(u16 *p) { return func_0204a920(p); }
BOOL func_0204a920(u16 *p) { if (Unk_0204a7d0_R(p, 0x13c8, 0x1407)) return TRUE; return FALSE; }
void func_0204a9c4(u16 *p, u32 v) { *p = v; }
void func_0204ad94(u16 *p, u32 v) { *p = v; }
BOOL func_0204a9c8(u16 *p) {
    BOOL r = FALSE;
    if (func_0204ab3c(p) || func_0204aabc(p) || func_0204aa28(p)) {
        r = TRUE;
    } else {
        switch (func_0204aa24(p)) {
        case 0x1a: case 0x1d: case 0x1e: case 0x88: case 0xa4:
            r = TRUE;
        }
    }
    return r;
}
s32 func_0204aa24(u16 *p) { return *p; }
BOOL func_0204aa28(u16 *p) { if (func_0204aab0(p) || func_0204aaa4(p) || func_0204aa98(p) || func_0204aa60(p)) return TRUE; return FALSE; }
BOOL func_0204aa60(u16 *p) { if (func_0204aa84(p, 0x9c, 0xa3) || *p == 0xa5) return TRUE; return FALSE; }
BOOL func_0204aa84(u16 *p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }

BOOL func_0204aa98(u16 *p) { return func_0204aa84(p, 0x96, 0x9b); }
BOOL func_0204aaa4(u16 *p) { return func_0204aa84(p, 0x90, 0x95); }
BOOL func_0204aab0(u16 *p) { return func_0204aa84(p, 0x8a, 0x8f); }
BOOL func_0204aabc(u16 *p) { if (func_0204ab30(p) || func_0204ab24(p) || func_0204ab18(p) || func_0204aaf4(p)) return TRUE; return FALSE; }
BOOL func_0204aaf4(u16 *p) { if (func_0204aa84(p, 0x12, 0x19) || *p == 0x1c) return TRUE; return FALSE; }
BOOL func_0204ab18(u16 *p) { return func_0204aa84(p, 0xc, 0x11); }
BOOL func_0204ab24(u16 *p) { return func_0204aa84(p, 0x6, 0xb); }
BOOL func_0204ab30(u16 *p) { return func_0204aa84(p, 0x0, 0x5); }
BOOL func_0204ab3c(u16 *p) { if (func_0204ab98(p) || func_0204ab8c(p) || func_0204ab80(p) || func_0204ab74(p)) return TRUE; return FALSE; }
BOOL func_0204ab74(u16 *p) { return func_0204aa84(p, 0x80, 0x87); }
BOOL func_0204ab80(u16 *p) { return func_0204aa84(p, 0x7a, 0x7f); }
BOOL func_0204ab8c(u16 *p) { return func_0204aa84(p, 0x74, 0x79); }
BOOL func_0204ab98(u16 *p) { return func_0204aa84(p, 0x6e, 0x73); }
s32 func_0204aba4(u16 *p) {
    s32 r = -1;
    if (func_0204abec(p)) {
        if (func_0204acd8(p)) r = 1;
        else if (func_0204aca4(p)) r = 2;
        else if (func_0204ac70(p)) r = 3;
        else r = 4;
    }
    return r;
}
BOOL func_0204abec(u16 *p) { if (func_0204ac30(p) || func_0204ac24(p) || func_0204ac18(p)) return TRUE; return FALSE; }

BOOL func_0204ac18(u16 *p) { return func_0204aa84(p, 0xd0, 0xd3); }
BOOL func_0204ac24(u16 *p) { return func_0204aa84(p, 0x62, 0x65); }
BOOL func_0204ac30(u16 *p) { if (func_0204ac64(p) || func_0204ac54(p)) return TRUE; return FALSE; }
BOOL func_0204ac54(u16 *p) { return func_0204aa84(p, 0xff, 0x102); }
BOOL func_0204ac64(u16 *p) { return func_0204aa84(p, 0x2b, 0x2e); }
BOOL func_0204ac70(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2d: case 0x64: case 0xd2: case 0x101:
        r = TRUE;
    }
    return r;
}
BOOL func_0204aca4(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2c: case 0x63: case 0xd1: case 0x100:
        r = TRUE;
    }
    return r;
}
BOOL func_0204acd8(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2b: case 0x62: case 0xd0: case 0xff:
        r = TRUE;
    }
    return r;
}
s32 func_0204ad08(u16 *p) {
    s32 r = 0;
    if (func_0204ad88(p)) {
    } else if (func_0204ad7c(p)) r = 1;
    else if (func_0204ad70(p)) r = 2;
    else if (func_0204ad64(p)) r = 3;
    else if (func_0204ad58(p)) r = 4;
    return r;
}
BOOL func_0204ad58(u16 *p) { return func_0204aa84(p, 0x4f, 0x56); }
BOOL func_0204ad64(u16 *p) { return func_0204aa84(p, 0x2f, 0x36); }
BOOL func_0204ad70(u16 *p) { return func_0204aa84(p, 0x47, 0x4e); }
BOOL func_0204ad7c(u16 *p) { return func_0204aa84(p, 0x3f, 0x46); }
BOOL func_0204ad88(u16 *p) { return func_0204aa84(p, 0x37, 0x3e); }
s32 func_0204ad98(u16 *p) {
    s32 r = -1;
    if (func_0204adf0(p)) {
        if (func_0204b08c(p)) r = 0;
        else if (func_0204b038(p)) r = 1;
        else if (func_0204afe4(p)) r = 2;
        else if (func_0204af90(p)) r = 3;
        else r = 4;
    }
    return r;
}
BOOL func_0204adf0(u16 *p) {
    if (func_0204aec0(p) || func_0204aeb4(p) || func_0204aea8(p) || func_0204ae9c(p) || func_0204ae90(p) || func_0204ae80(p) || func_0204ae74(p) || func_0204ae64(p) || func_0204ae58(p)) return TRUE;
    return FALSE;
}
BOOL func_0204ae58(u16 *p) { return func_0204aa84(p, 0xc8, 0xcf); }
BOOL func_0204ae64(u16 *p) { if (*p == 0x6d) return TRUE; return FALSE; }
BOOL func_0204ae74(u16 *p) { return func_0204aa84(p, 0x6a, 0x6c); }
BOOL func_0204ae80(u16 *p) { if (*p == 0x69) return TRUE; return FALSE; }
BOOL func_0204ae90(u16 *p) { return func_0204aa84(p, 0x66, 0x68); }
BOOL func_0204ae9c(u16 *p) { return func_0204aa84(p, 0x57, 0x5b); }
BOOL func_0204aea8(u16 *p) { return func_0204aa84(p, 0x2f, 0x56); }
BOOL func_0204aeb4(u16 *p) { return func_0204aa84(p, 0x5d, 0x61); }
BOOL func_0204aec0(u16 *p) { return func_0204aa84(p, 0x26, 0x2a); }
BOOL func_0204aecc(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x36: case 0x3e: case 0x46: case 0x4e: case 0x56: case 0xcf:
        r = TRUE;
    }
    return r;
}
BOOL func_0204af08(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x2a: case 0x33: case 0x3b: case 0x43: case 0x4b:
    case 0x53: case 0x5b: case 0x61:
    case 0x66: case 0x67: case 0x68: case 0x69: case 0x6a: case 0x6b: case 0x6c: case 0x6d:
    case 0xcc:
        r = TRUE;
        break;
    }
    return r;
}
BOOL func_0204af90(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x29: case 0x32: case 0x3a: case 0x42: case 0x4a: case 0x52: case 0x5a: case 0x60: case 0xcb:
        r = TRUE;
    }
    return r;
}
BOOL func_0204afe4(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x28: case 0x31: case 0x39: case 0x41: case 0x49: case 0x51: case 0x59: case 0x5f: case 0xca:
        r = TRUE;
    }
    return r;
}
BOOL func_0204b038(u16 *p) {
    BOOL r = FALSE;
    switch (func_0204aa24(p)) {
    case 0x27: case 0x30: case 0x38: case 0x40: case 0x48: case 0x50: case 0x58: case 0x5e: case 0xc9:
        r = TRUE;
    }
    return r;
}
}
