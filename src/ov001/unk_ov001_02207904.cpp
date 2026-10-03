// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02207904_Oam {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_02207904_S1 {
    u32 unk_00;
    Unk_ov001_02207904_Oam *unk_04;
    u8 unk_08;
    u8 unk_09;
};

typedef void (*Unk_ov001_02207904_Task)(u32);

extern "C" const u16 data_ov001_02229b38[2] = {0xe6, 0x8b};
extern "C" const u8 data_ov001_02229b34[4] = {0x0e, 0x04, 0x05, 0x00};
extern "C" Unk_ov001_02207904_S1 *data_ov001_0222dd84 = 0;

extern "C" {
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
void *func_ov001_02225db0(u32, u32);
void func_ov001_02224b9c(u32, u32, void *);
void *func_ov001_02224b60(u32, u32);
void func_ov001_02226fd0(u32, u32);
u32 func_ov001_02227094(u32, Unk_ov001_02207904_Task, u32, u32);
void func_ov001_022267c8(void *);
void func_ov001_02225d58(void *);
void func_ov001_02207904(u32 task);
void func_ov001_02207904(u32 task);
}

#pragma thumb off

extern "C" void func_ov001_02207a40(u32 idx) {
    Unk_ov001_02207904_S1 *n = (Unk_ov001_02207904_S1 *)func_ov001_02225db0(0xc, 4);
    data_ov001_0222dd84 = n;
    n->unk_08 = idx;
    data_ov001_0222dd84->unk_04 = (Unk_ov001_02207904_Oam *)func_ov001_02224b60(0, 0x47);
    data_ov001_0222dd84->unk_04->h4 = (data_ov001_0222dd84->unk_04->h4 & ~0xc00) | 0x400;
    Unk_ov001_02207904_Oam *o = data_ov001_0222dd84->unk_04;
    o->w0 = o->w0 & ~0xc00;
    o->h4 = (o->h4 & ~0xf000) | (data_ov001_02229b34[idx] << 12);
    o = data_ov001_0222dd84->unk_04;
    o->w0 = (o->w0 & 0xfe00ff00) | (data_ov001_02229b38[1] & 0xff) | ((data_ov001_02229b38[0] & 0x1ff) << 16);
    data_ov001_0222dd84->unk_00 = func_ov001_02227094(1, func_ov001_02207904, 0, 0x78);
}

extern "C" void func_ov001_022079fc(u32 task) {
    func_ov001_02226fd0(1, data_ov001_0222dd84->unk_00);
    func_ov001_022267c8(data_ov001_0222dd84->unk_04);
    func_ov001_02225d58(&data_ov001_0222dd84);
}

extern "C" void func_ov001_02207904(u32 task) {
    data_ov001_0222dd84->unk_09 = FX_ModS32(data_ov001_0222dd84->unk_09 + 1, 0x28);
    s32 id = FX_DivS32(data_ov001_0222dd84->unk_09, 5) + 0x47;
    func_ov001_02224b9c(0, id, data_ov001_0222dd84->unk_04);
    data_ov001_0222dd84->unk_04->h4 = (data_ov001_0222dd84->unk_04->h4 & ~0xc00) | 0x400;
    Unk_ov001_02207904_S1 *d = data_ov001_0222dd84;
    u32 t = data_ov001_02229b34[d->unk_08];
    Unk_ov001_02207904_Oam *o = d->unk_04;
    o->w0 = o->w0 & ~0xc00;
    o->h4 = (o->h4 & ~0xf000) | (t << 12);
    o = data_ov001_0222dd84->unk_04;
    o->w0 = (o->w0 & 0xfe00ff00) | (data_ov001_02229b38[1] & 0xff) | ((data_ov001_02229b38[0] & 0x1ff) << 16);
}

#pragma thumb reset
