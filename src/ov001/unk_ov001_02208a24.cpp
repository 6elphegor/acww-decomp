// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02208a24_Reg { u32 w0; u16 h4; };
struct Unk_ov001_02208a24_Obj { Unk_ov001_02208a24_Reg *reg; u32 unk_04; s8 unk_08; };

extern "C" {
extern void func_ov001_02224b9c(s32, u32, u32);
extern void func_ov001_02226fd0(s32, u32);
extern void func_ov001_022267c8(u32);
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225dd8(s32, s32);
extern Unk_ov001_02208a24_Reg *func_ov001_02224b60(s32, s32);
extern u32 func_ov001_02227094(s32, void *, s32, s32);
extern u32 func_0211f800();
extern u32 func_0211f73c();
void func_ov001_02208a24();
extern Unk_ov001_02208a24_Obj *data_ov001_0222ddd8;
}

extern "C" const u16 data_ov001_02229bcc[2] = {0xe5, 0x26};
extern "C" const u8 data_ov001_02229bd0[2][4] = {{0x18, 0x17, 0x16, 0x15}, {0x5f, 0x5e, 0x5d, 0x5c}};
extern "C" {
Unk_ov001_02208a24_Obj *data_ov001_0222ddd8;
}

#pragma thumb off

extern "C" void func_ov001_02208b4c(s32 a) {
    if (data_ov001_0222ddd8 != NULL) {
        return;
    }
    data_ov001_0222ddd8 = (Unk_ov001_02208a24_Obj *)func_ov001_02225dd8(0xc, 4);
    data_ov001_0222ddd8->unk_08 = a;
    data_ov001_0222ddd8->reg = func_ov001_02224b60(0, data_ov001_02229bd0[a][0]);
    data_ov001_0222ddd8->reg->w0 = (data_ov001_0222ddd8->reg->w0 & 0xfe00ff00) | (data_ov001_02229bcc[1] & 0xff) | ((data_ov001_02229bcc[0] & 0x1ff) << 16);
    data_ov001_0222ddd8->reg->h4 = (data_ov001_0222ddd8->reg->h4 & ~0xc00) | 0x800;
    data_ov001_0222ddd8->unk_04 = func_ov001_02227094(0, (void *)func_ov001_02208a24, 0, 0x78);
}

extern "C" void func_ov001_02208af8() {
    if (data_ov001_0222ddd8 == 0) return;
    func_ov001_02226fd0(0, data_ov001_0222ddd8->unk_04);
    func_ov001_022267c8((u32)data_ov001_0222ddd8->reg);
    func_ov001_02225d58(&data_ov001_0222ddd8);
}

extern "C" void func_ov001_02208a24() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 saved = *ime;
    u32 x = 0;
    *ime = 0;
    if (func_0211f800() != 0x8000) x = func_0211f73c();
    *ime;
    *ime = saved;
    const u8 *q = (const u8 *)data_ov001_02229bd0 + data_ov001_0222ddd8->unk_08 * 4;
    func_ov001_02224b9c(0, q[x], (u32)data_ov001_0222ddd8->reg);
    const u16 *p = data_ov001_02229bcc;
    Unk_ov001_02208a24_Reg *r = data_ov001_0222ddd8->reg;
    r->w0 = (r->w0 & 0xfe00ff00) | (p[1] & 0xff) | ((p[0] & 0x1ff) << 16);
    r = data_ov001_0222ddd8->reg;
    r->h4 = (r->h4 & ~0xc00) | 0x800;
}

#pragma thumb reset
