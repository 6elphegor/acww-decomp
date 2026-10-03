// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0225f1cc_Cfg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    void *(*unk_18)(u32);
    void (*unk_1c)(void *);
    s32 unk_20;
    u32 unk_24;
    u32 unk_28;
    s32 unk_2c;
    s32 unk_30;
    s32 unk_34;
};

struct Unk_ov065_0225f210_G {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    u32 unk_14;
    u32 unk_18;
    void *unk_1c;
    u32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_0225f634_Params {
    s8 unk_00;
    s8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[0x12];
};

extern "C" {
extern Unk_ov065_0225f1cc_Cfg *data_ov065_0228e9a0;
extern u32 data_ov065_0228e9a4;
extern u32 data_ov065_0228e9a8;
extern u32 data_ov065_0228e9ac;
extern void *data_ov065_0228e9b0;
extern Unk_ov065_0225f210_G data_ov065_0228e9b4;

// other TUs of this overlay
extern u32 data_ov065_0228ebd8;
extern u32 data_ov065_0228eba4;
extern u32 data_ov065_0228ebc0;
extern u32 data_ov065_0228ebfc[2];
extern Unk_ov065_0225f634_Params data_ov065_0228b3dc;
extern Unk_ov065_0225f634_Params data_ov065_0228b3f4;

// main module
void func_02000b44(u32);
void *MI_CpuFill8(void *, s32, u32);
s32 _s32_div_f(s32, s32);

s32 func_ov065_0226abb0(void);
void func_ov065_0226498c(s32);
void func_ov065_0226ab40(void *);
void func_ov065_022649fc(void *);
void func_ov065_02264a48(void *);
void func_ov065_0226459c(void);
void func_ov065_022608a4(void);
s32 func_ov065_0225f560(s32);
s32 func_ov065_0225f84c(Unk_ov065_0225f634_Params *);

BOOL func_ov065_0225f1a0(void);
void func_ov065_0225f1bc(void);
void func_ov065_0225f1cc(void);
void func_ov065_0225f210(void);
s32 func_ov065_0225f314(void);
s32 func_ov065_0225f344(Unk_ov065_0225f1cc_Cfg *);
}

extern "C" {
void *data_ov065_0228e9b0;
u32 data_ov065_0228e9ac;
u32 data_ov065_0228e9a8;
u32 data_ov065_0228e9a4;
Unk_ov065_0225f1cc_Cfg *data_ov065_0228e9a0;
Unk_ov065_0225f210_G data_ov065_0228e9b4;

s32 func_ov065_0225f344(Unk_ov065_0225f1cc_Cfg *cfg)
{
    func_02000b44(0x2000bd4);
    if (data_ov065_0228e9a0 != NULL) {
        return 0;
    }
    data_ov065_0228e9a0 = cfg;
    func_ov065_0225f210();
    return func_ov065_0225f314();
}

s32 func_ov065_0225f314(void)
{
    s32 r = func_ov065_0225f560(data_ov065_0228e9a0->unk_20);
    if (r >= 0) {
        data_ov065_0228e9b0 = (void *)func_ov065_0225f84c(&data_ov065_0228b3f4);
    }
    return r;
}

void func_ov065_0225f210(void)
{
    Unk_ov065_0225f210_G *g = &data_ov065_0228e9b4;
    Unk_ov065_0225f1cc_Cfg *c = data_ov065_0228e9a0;
    s32 a;
    s32 b;
    MI_CpuFill8(g, 0, 0x30);
    g->unk_04 = (void *)c->unk_18;
    g->unk_08 = (void *)c->unk_1c;
    g->unk_10 = (void *)func_ov065_0225f1a0;
    g->unk_14 = 0;
    g->unk_18 = 0;
    g->unk_2c = data_ov065_0228e9a4;
    if (c->unk_24 != 0) {
        g->unk_20 = c->unk_24;
    } else {
        g->unk_20 = 0x4000;
    }
    if (c->unk_28 != 0) {
        g->unk_1c = (void *)c->unk_28;
    } else {
        g->unk_1c = data_ov065_0228e9a0->unk_18(g->unk_20);
    }
    a = c->unk_30;
    if (a == 0) {
        a = 0x240;
    }
    b = c->unk_34;
    if (b == 0) {
        b = 0x10c0;
    }
    g->unk_24 = a - 0x28;
    data_ov065_0228b3dc.unk_02 = b;
    data_ov065_0228b3dc.unk_04 = _s32_div_f(b, 2);
    data_ov065_0228ebd8 = 0;
    if (c->unk_00 != 0) {
        data_ov065_0228e9ac = 1;
        g->unk_00 = 0;
        g->unk_0c = (void *)func_ov065_0225f1bc;
        g->unk_28 = data_ov065_0228e9a8;
    } else {
        data_ov065_0228e9ac = 0;
        g->unk_00 = 1;
        g->unk_0c = (void *)func_ov065_0225f1cc;
    }
    {
        s32 t = c->unk_2c;
        if (t == 0) {
            t = 0xb;
        }
        func_ov065_0226498c(t);
    }
    func_ov065_0226ab40((void *)func_ov065_0226459c);
    func_ov065_022649fc((void *)func_ov065_022608a4);
    func_ov065_02264a48(g);
}

void func_ov065_0225f1cc(void)
{
    Unk_ov065_0225f1cc_Cfg *c = data_ov065_0228e9a0;
    data_ov065_0228ebd8 = c->unk_04;
    data_ov065_0228eba4 = c->unk_08;
    data_ov065_0228ebc0 = c->unk_0c;
    data_ov065_0228ebfc[0] = c->unk_10;
    data_ov065_0228ebfc[1] = c->unk_14;
    data_ov065_0228e9ac |= 2;
}

void func_ov065_0225f1bc(void)
{
    data_ov065_0228e9ac |= 2;
}

BOOL func_ov065_0225f1a0(void)
{
    if (func_ov065_0226abb0()) {
        return TRUE;
    }
    return FALSE;
}
}
