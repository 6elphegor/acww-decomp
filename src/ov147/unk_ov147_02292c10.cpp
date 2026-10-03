// ov147 second translation unit (0x02292c10..0x022930bc): the object at scene+0xac and its helpers.
#include "types.h"

extern "C" {
extern s16 data_02135f44[];

void G2x_SetBlendAlpha_(u32 a, s32 b, s32 c, s32 d, s32 e);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020014e4(s32 a);
u32 func_02001510(s32 a);
void func_020014f4(s32 a);
void func_020017e4(s32 a, s32 b);
void DC_FlushRange(void *p, u32 size);
void func_0211199c(void *p, u32 a, u32 size);
void GX_LoadBGPltt(void *p, u32 a, u32 size);
void func_0211165c(void *p, u32 a, u32 size);
void FS_OpenFile();
void func_021198b4(void *a, void *b, u32 size);
void FS_CloseFile(void *a);
void FS_InitFile(void *a);
void *func_020e8594(u32 size);
s32 func_020e8558(void *p);
void func_ov147_02292d6c();
void func_ov147_02292e74(s32 a);
void func_ov147_02292d34();
void func_ov147_02292d60();
void func_ov147_02292e00(void *a, void *b, void *c);
void func_ov147_02292e28(void *a, void *b, void *c);
void func_ov147_02292e4c(void *a, void *b, void *c);
void func_ov147_02292da4(void *p);
void func_ov147_02292dc4(void *p);
void func_ov147_02292de0(void *p);
void *func_ov147_02292f4c(u32 size);
s32 func_ov147_02292f38(void *p);
}

class Unk_ov147_022935e8 {
public:
    Unk_ov147_022935e8();
    virtual ~Unk_ov147_022935e8();
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;

    void func_ov147_02292c10();
    void func_ov147_02292c40();
    void func_ov147_02292c68();
    void func_ov147_02292c90();
    void func_ov147_02292c9c();
    void func_ov147_02292cb4();
    void func_ov147_02292cc0();
    void func_ov147_02292cdc();
    BOOL func_ov147_02292f54();
    void func_ov147_02292fc8();
    BOOL func_ov147_02292fd4();
    void func_ov147_02292fe8();
    void func_ov147_02292ff0(s32 v);
    void func_ov147_02292ff4();
    void func_ov147_02293068();
    void func_ov147_0229306c();
};

Unk_ov147_022935e8::Unk_ov147_022935e8() {
}

Unk_ov147_022935e8::~Unk_ov147_022935e8() {
}

void Unk_ov147_022935e8::func_ov147_0229306c() {
    unk_04 = 0;
    unk_08 = 2;
    unk_18 = 0;
    unk_0c = 2;
    func_ov147_02292fc8();
    func_ov147_02292cb4();
}

void Unk_ov147_022935e8::func_ov147_02293068() {
}

void Unk_ov147_022935e8::func_ov147_02292ff4() {
    typedef void (Unk_ov147_022935e8::*Fn)();
    static Fn tbl[3] = { &Unk_ov147_022935e8::func_ov147_02292c9c, &Unk_ov147_022935e8::func_ov147_02292c68, &Unk_ov147_022935e8::func_ov147_02292c10 };
    (this->*tbl[unk_04])();
}

void Unk_ov147_022935e8::func_ov147_02292ff0(s32 v) {
    unk_0c = v;
}

void Unk_ov147_022935e8::func_ov147_02292fe8() {
    unk_0c = 2;
}

BOOL Unk_ov147_022935e8::func_ov147_02292fd4() {
    if (unk_08 == 2 && unk_04 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov147_022935e8::func_ov147_02292fc8() {
    s32 z = 0;
    unk_10 = z;
    unk_14 = z;
    unk_1c = z;
}

BOOL Unk_ov147_022935e8::func_ov147_02292f54() {
    BOOL same = (unk_0c == 2) ? TRUE : FALSE;
    if (same) {
        unk_1c = 1;
        unk_14 = 0;
    }
    if (unk_1c) {
        unk_10 = unk_10 - 1;
        if (unk_10 <= 0) {
            unk_1c = 0;
        }
    } else {
        unk_10 = unk_10 + 1;
        if (unk_10 >= 10) {
            unk_10 = 10;
            unk_14 = unk_14 + 1;
            if (unk_14 > 5) {
                unk_1c = 1;
                unk_14 = 0;
            }
        }
    }
    BOOL r0 = FALSE;
    if (unk_10 > 0) {
    } else if (same) {
        r0 = TRUE;
    } else if (unk_08 != unk_0c) {
        r0 = TRUE;
    }
    return r0;
}

extern "C" void *func_ov147_02292f4c(u32 size) {
    return func_020e8594(size);
}

extern "C" s32 func_ov147_02292f38(void *p) {
    if (p) {
        func_020e8558(p);
    }
}

extern "C" void func_ov147_02292e74(s32 idx) {
    char ncg[28] = "/a_mes/a_mes_ttl_bg_ncg.bin";
    const char *paths[2] = { "/a_mes/a_mes_ttl_a0_bg_nsc.bin", "/a_mes/a_mes_ttl_b0_bg_nsc.bin" };
    char ncl[28] = "/a_mes/a_mes_ttl_bg_ncl.bin";
    u32 file[19];
    void *m;
    FS_InitFile(file);
    m = func_ov147_02292f4c(0x9e0);
    if (m) {
        func_ov147_02292e4c(file, ncg, m);
        func_ov147_02292de0(m);
        func_ov147_02292f38(m);
    }
    m = func_ov147_02292f4c(0x20);
    if (m) {
        func_ov147_02292e28(file, ncl, m);
        func_ov147_02292dc4(m);
        func_ov147_02292f38(m);
    }
    m = func_ov147_02292f4c(0x800);
    if (m) {
        func_ov147_02292e00(file, (void *)paths[idx], m);
        func_ov147_02292da4(m);
        func_ov147_02292f38(m);
    }
}

extern "C" void func_ov147_02292e4c(void *a, void *b, void *c) {
    FS_OpenFile();
    func_021198b4(a, c, 0x9e0);
    FS_CloseFile(a);
}

extern "C" void func_ov147_02292e28(void *a, void *b, void *c) {
    FS_OpenFile();
    func_021198b4(a, c, 0x20);
    FS_CloseFile(a);
}

extern "C" void func_ov147_02292e00(void *a, void *b, void *c) {
    FS_OpenFile();
    func_021198b4(a, c, 0x800);
    FS_CloseFile(a);
}

extern "C" void func_ov147_02292de0(void *p) {
    DC_FlushRange(p, 0x9e0);
    func_0211165c(p, 0, 0x9e0);
}

extern "C" void func_ov147_02292dc4(void *p) {
    DC_FlushRange(p, 0x20);
    GX_LoadBGPltt(p, 0x20, 0x20);
}

extern "C" void func_ov147_02292da4(void *p) {
    DC_FlushRange(p, 0x800);
    func_0211199c(p, 0, 0x800);
}

extern "C" void func_ov147_02292d6c() {
    volatile u16 *r = (volatile u16 *)0x400000e;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x700;
    *r = *r & ~0x40;
    func_020017e4(0, 0);
}

extern "C" void func_ov147_02292d60() { func_020014f4(8); }

extern "C" void func_ov147_02292d34() {
    volatile u32 *r = (volatile u32 *)0x4000000;
    u32 v = func_02001510(func_020014e4(8));
    *r = (*r & 0xffffe0ff) | (v << 8);
}

void Unk_ov147_022935e8::func_ov147_02292cdc() {
    s32 t = _s32_div_f(unk_10 << 12, 10);
    s32 a = (s16)(t << 2);
    u32 i = ((u16)a >> 4) * 2;
    s32 v = data_02135f44[i];
    s32 b = (v * 16 + 0x800) >> 12;
    if (b < 0) {
        b = 0;
    } else if (b > 16) {
        b = 16;
    }
    G2x_SetBlendAlpha_(0x4000050, 8, 0x21, b, 16 - b);
}

void Unk_ov147_022935e8::func_ov147_02292cc0() { G2x_SetBlendAlpha_(0x4000050, 0, 0x20, 0x10, 0); }

void Unk_ov147_022935e8::func_ov147_02292cb4() {
    unk_04 = 0;
    unk_08 = 2;
}

void Unk_ov147_022935e8::func_ov147_02292c9c() {
    s32 t = unk_0c;
    if (t != 2) {
        unk_08 = t;
        func_ov147_02292c90();
    }
}

void Unk_ov147_022935e8::func_ov147_02292c90() {
    unk_04 = 1;
    unk_18 = 5;
}

void Unk_ov147_022935e8::func_ov147_02292c68() {
    if (unk_08 != unk_0c) {
        func_ov147_02292cb4();
    } else {
        unk_18 = unk_18 - 1;
        if (unk_18 > 0) {
        } else {
            func_ov147_02292c40();
        }
    }
}

void Unk_ov147_022935e8::func_ov147_02292c40() {
    unk_04 = 2;
    func_ov147_02292fc8();
    func_ov147_02292d6c();
    func_ov147_02292e74(unk_08);
    func_ov147_02292d60();
    func_ov147_02292cdc();
}

void Unk_ov147_022935e8::func_ov147_02292c10() {
    s32 r = func_ov147_02292f54();
    func_ov147_02292cdc();
    if (r != 0) {
        func_ov147_02292cc0();
        func_ov147_02292d34();
        func_ov147_02292cb4();
    }
}

