// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_02208594_Fn)(void *, s32, u32);

extern "C" {
extern void GX_LoadBG1Scr(void *, s32, u32);
extern void GX_LoadBG1Char(void *, s32, u32);
extern void DC_FlushRange(void *, u32);
extern void MIi_CpuCopyFast(void *, void *, u32);
extern u32 func_ov001_0220c5c8();
extern void *func_ov001_02224074(void *, void *, u32);
extern void func_ov001_02224038(void *);
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225dd8(s32, s32);
extern void func_ov001_02226fdc(s32, s32);
extern void func_ov001_02227094(s32, void *, s32, s32);
extern u8 *func_ov001_0221e8b4();
extern s32 func_ov001_02208594(void *a, Unk_ov001_02208594_Fn fn);
extern u8 *func_ov001_022085e0(u8 *p);
s32 func_ov001_0220891c(s32 n);
void func_ov001_02208890(s32 a);
extern void *data_ov001_0222a7e0[20];
extern u8 *data_ov001_0222ddd4;
}

#pragma thumb off

extern "C" void func_ov001_02208990() {
    data_ov001_0222ddd4 = (u8 *)func_ov001_02225dd8(0xc0, 4);
    func_ov001_02208594((void *)"char/jbBgHl.ncg.l", GX_LoadBG1Char);
    switch (func_ov001_0220c5c8()) {
    case 0:
        func_ov001_02208594(data_ov001_0222a7e0[0], GX_LoadBG1Scr);
        break;
    case 1:
        func_ov001_02208594(data_ov001_0222a7e0[1], GX_LoadBG1Scr);
        break;
    }
}

extern "C" void func_ov001_0220897c() {
    func_ov001_02225d58(&data_ov001_0222ddd4);
}

extern "C" s32 func_ov001_0220891c(s32 n) {
    void *h = func_ov001_02224074(func_ov001_022085e0((u8 *)data_ov001_0222a7e0[n]), 0, 4);
    MIi_CpuCopyFast(h, data_ov001_0222ddd4, 0xc0);
    func_ov001_02224038(h);
    func_ov001_02227094(1, (void *)func_ov001_02208890, 0, 0x78);
}

extern "C" void func_ov001_022088f8() {
    func_ov001_0220891c(func_ov001_0221e8b4()[0xf4] + 5);
}

extern "C" void func_ov001_022088d4() {
    func_ov001_0220891c(func_ov001_0221e8b4()[0xf4] + 2);
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" char data_ov001_0222a638[];
extern "C" void *data_ov001_0222a7e0[20];
extern "C" char data_ov001_0222a6a8[];
extern "C" char data_ov001_0222a768[];
extern "C" char data_ov001_0222a6c0[];
extern "C" char data_ov001_0222a738[];
extern "C" char data_ov001_0222a798[];
extern "C" char data_ov001_0222a720[];
extern "C" char data_ov001_0222a708[];
extern "C" char data_ov001_0222a64c[];
extern "C" char data_ov001_0222a678[];
extern "C" char data_ov001_0222a750[];
extern "C" char data_ov001_0222a780[];
extern "C" char data_ov001_0222a610[];
extern "C" char data_ov001_0222a660[];
extern "C" char data_ov001_0222a7c8[];
extern "C" char data_ov001_0222a6f0[];
extern "C" char data_ov001_0222a6d8[];
extern "C" char data_ov001_0222a690[];
extern "C" char data_ov001_0222a624[];
extern "C" char data_ov001_0222a7b0[];

extern "C" void func_ov001_02208890(s32 a) {
    DC_FlushRange(data_ov001_0222ddd4, 0xc0);
    GX_LoadBG1Scr(data_ov001_0222ddd4, 0, 0xc0);
    func_ov001_02226fdc(1, a);
}

#pragma thumb reset

// Declarations for data defined further down (definition order sets the data layout)
extern "C" char data_ov001_0222a638[];
extern "C" void *data_ov001_0222a7e0[20];
extern "C" char data_ov001_0222a6a8[];
extern "C" char data_ov001_0222a768[];
extern "C" char data_ov001_0222a6c0[];
extern "C" char data_ov001_0222a738[];
extern "C" char data_ov001_0222a798[];
extern "C" char data_ov001_0222a720[];
extern "C" char data_ov001_0222a708[];
extern "C" char data_ov001_0222a64c[];
extern "C" char data_ov001_0222a678[];
extern "C" u8 *data_ov001_0222ddd4;
extern "C" char data_ov001_0222a750[];
extern "C" char data_ov001_0222a780[];
extern "C" char data_ov001_0222a610[];
extern "C" char data_ov001_0222a660[];
extern "C" char data_ov001_0222a7c8[];
extern "C" char data_ov001_0222a6f0[];
extern "C" char data_ov001_0222a6d8[];
extern "C" char data_ov001_0222a690[];
extern "C" char data_ov001_0222a624[];
extern "C" char data_ov001_0222a7b0[];

extern "C" char data_ov001_0222a638[] = "char/jb4HlWep.nsc.l";

extern "C" void *data_ov001_0222a7e0[20] = {
    data_ov001_0222a6a8,
    data_ov001_0222a610,
    data_ov001_0222a750,
    data_ov001_0222a768,
    data_ov001_0222a780,
    data_ov001_0222a738,
    data_ov001_0222a6f0,
    data_ov001_0222a720,
    data_ov001_0222a64c,
    data_ov001_0222a678,
    data_ov001_0222a638,
    data_ov001_0222a624,
    data_ov001_0222a6d8,
    data_ov001_0222a7c8,
    data_ov001_0222a708,
    data_ov001_0222a660,
    data_ov001_0222a7b0,
    data_ov001_0222a6c0,
    data_ov001_0222a798,
    data_ov001_0222a690,
};

extern "C" char data_ov001_0222a6a8[] = "char/jb2HlWiFi.nsc.l";

extern "C" char data_ov001_0222a768[] = "char/jb3HlList2.nsc.l";

extern "C" char data_ov001_0222a6c0[] = "char/jb5HlInfo.nsc.l";

extern "C" char data_ov001_0222a738[] = "char/jb4HlSet1.nsc.l";

extern "C" char data_ov001_0222a798[] = "char/jb5HlErase.nsc.l";

extern "C" char data_ov001_0222a720[] = "char/jb4HlSet3.nsc.l";

extern "C" char data_ov001_0222a708[] = "char/jb4HlDns0.nsc.l";

extern "C" char data_ov001_0222a64c[] = "char/jb4HlUsb.nsc.l";

extern "C" char data_ov001_0222a678[] = "char/jb4HlSsid.nsc.l";

extern "C" u8 *data_ov001_0222ddd4 = 0;

extern "C" char data_ov001_0222a750[] = "char/jb3HlList1.nsc.l";

extern "C" char data_ov001_0222a780[] = "char/jb3HlList3.nsc.l";

extern "C" char data_ov001_0222a610[] = "char/jb2HlAp.nsc.l";

extern "C" char data_ov001_0222a660[] = "char/jb4HlDns1.nsc.l";

extern "C" char data_ov001_0222a7c8[] = "char/jb4HlGateway.nsc.l";

extern "C" char data_ov001_0222a6f0[] = "char/jb4HlSet2.nsc.l";

extern "C" char data_ov001_0222a6d8[] = "char/jb4HlMask.nsc.l";

extern "C" char data_ov001_0222a690[] = "char/jb5HlMove.nsc.l";

extern "C" char data_ov001_0222a624[] = "char/jb4HlIp.nsc.l";

extern "C" char data_ov001_0222a7b0[] = "char/jb5HlOption.nsc.l";
