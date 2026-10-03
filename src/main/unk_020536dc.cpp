#include "types.h"

extern "C" {
extern volatile u32 data_021c5384;
void Oam_FlushBuffers();
void Oam_LoadBuffers();
void func_02041220();
void func_020027c4();
void func_02001d04();
void func_0200187c();
void func_02041290();
void Oam_ResetBuffers();
void func_02002870();
void func_02001db8();
void func_02001dbc();
void func_02002918();
void func_020e82b8();
void func_0204142c();
void GX_SetBankForLCDC(s32);
void func_02002898();
void func_02001e7c();
void func_020b83e0();
void func_020b8494();
void GX_DisableBankForLCDC();
void MIi_CpuClearFast(u32, void *, u32);
void func_02053780();
}

struct Unk_020536dc_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

extern "C" {
struct Unk_02053830_Obj {
    u8 pad[0x1ac];
    u32 f1ac;
    u32 f1b0;
};
}

extern "C" {
Unk_020536dc_Obj *data_021c5388;
}

extern "C" void func_02053830(Unk_02053830_Obj *o)
{
    o->f1b0 = 0;
    o->f1ac = o->f1b0;
}

extern "C" void func_020537a4()
{
    volatile u32 b, a, c;
    func_020e82b8();
    func_02053780();
    func_0204142c();
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xfffffdf1) | 0x20e;
    GX_SetBankForLCDC(0x1f7);
    a = 0;
    MIi_CpuClearFast(a, (void *)0x6800000, 0x84000);
    GX_DisableBankForLCDC();
    b = 0xc0;
    MIi_CpuClearFast(b, (void *)0x7000000, 0x400);
    c = 0;
    MIi_CpuClearFast(c, (void *)0x5000000, 0x400);
    func_02002898();
    func_02001e7c();
    func_020b83e0();
    func_020b8494();
}

extern "C" void func_02053780()
{
    data_021c5388 = 0;
    data_021c5384 = 0;
    func_02001dbc();
    func_02002918();
}

extern "C" void func_0205377c()
{
}

extern "C" void func_02053754()
{
    Oam_ResetBuffers();
    if (data_021c5388) {
        data_021c5388->vfunc_00();
    }
    func_02002870();
    func_02001db8();
}

extern "C" void func_02053750()
{
}

extern "C" void func_02053730()
{
    if (data_021c5388) {
        data_021c5388->vfunc_04();
    }
    func_02041290();
}

extern "C" void func_020536dc()
{
    u32 v = data_021c5384;
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xffff7fff) | (v << 15);
    Oam_FlushBuffers();
    Oam_LoadBuffers();
    func_02041220();
    func_020027c4();
    func_02001d04();
    if (data_021c5388) {
        data_021c5388->vfunc_08();
    }
    func_0200187c();
}
