// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_027e0000[];
void func_ov001_022270b4(s32);
s32 func_01ff80e0(s32);
s32 func_01ff8128(s32);
void func_01ff8228(u32);
void func_01ff81a8(s32);
s32 func_01ffa328(s32);
void func_01ffa404(s32, void *);
void func_01ffa314(s32);
void func_ov001_022265ac();
void func_ov001_022265e0();
void func_ov001_0222662c();
}

extern "C" u32 data_ov001_0222df68 = 0;
extern "C" u32 data_ov001_0222df6c = 0;

#pragma thumb off

void func_ov001_0222662c()
{
    data_ov001_0222df6c = *(volatile u32 *)0x4000210;
    func_01ff8228(0x40018);
    func_01ff8128(1);
    data_ov001_0222df68 = func_01ffa328(1);
    func_01ffa404(1, (void *)func_ov001_022265ac);
    func_01ff81a8(1);
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 1;
    func_01ffa314(1);
}

void func_ov001_022265e0()
{
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 0;
    func_01ff8228(data_ov001_0222df6c);
    func_01ffa404(1, (void *)data_ov001_0222df68);
}

void func_ov001_022265ac()
{
    func_ov001_022270b4(1);
    u32 *g = (u32 *)data_027e0000;
    g += 0xc00;
    g[0x3fe] |= 1;
}

