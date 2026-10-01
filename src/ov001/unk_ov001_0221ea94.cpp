// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_021145cc(void *, u32);
s32 func_02111ad4(void *, u32, u32);
s32 func_ov001_02224038(void *);
void *func_ov001_022085e0(u32);
s32 func_ov001_02224074(void *, void *, u32);
s32 func_ov001_02226fdc(s32, s32);
s32 func_ov001_02227094(s32, void *, s32, s32);

void func_ov001_0221ea94(s32 a);
void func_ov001_0221eae4(u32 i);
}

char data_ov001_0222b46c[] = "char/jtTop.nsc.l";
char data_ov001_0222b480[] = "char/jtStep1.nsc.l";
char data_ov001_0222b494[] = "char/jtStep2.nsc.l";
char data_ov001_0222b4a8[] = "char/jtStep3.nsc.l";
char data_ov001_0222b4bc[] = "char/jtOption.nsc.l";
char *data_ov001_0222b4d0[5] = { data_ov001_0222b480, data_ov001_0222b494, data_ov001_0222b4a8, data_ov001_0222b4bc, data_ov001_0222b46c };
u8 *data_ov001_0222def8;

void func_ov001_0221eae4(u32 i)
{
    void *p = func_ov001_022085e0((u32)data_ov001_0222b4d0[i]);
    data_ov001_0222def8 = (u8 *)func_ov001_02224074(p, 0, 4);
    func_ov001_02227094(1, (void *)func_ov001_0221ea94, 0, 0x78);
}

void func_ov001_0221ea94(s32 a)
{
    func_021145cc(data_ov001_0222def8, 0x600);
    func_02111ad4(data_ov001_0222def8, 0, 0x600);
    func_ov001_02224038(data_ov001_0222def8);
    func_ov001_02226fdc(1, a);
}

