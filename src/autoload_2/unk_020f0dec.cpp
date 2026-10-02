// mwcc-flags: -nothumb -O4,p
// G009a: autoload_2 0x020f0dec-0x020f0fb4 (8 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// The sound/BGM manager (object data_021f5b80, "SndMgr"): five tiny wrappers, the per-frame update (0x020f0e3c),
// the initialiser (0x020f0e68) and the constructor (0x020f0f70, called from main's __sinit 0x020c6080).
// PARTIAL unit: only extern "C" functions under their symbols.txt names, no data, all callees extern.
#include "types.h"

struct SndMgr {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 unk_04[0x24];
    /* 0x28 */ void *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u8 unk_4c;
    /* 0x4d */ u8 unk_4d;
    /* 0x4e */ u8 unk_4e[2];
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 unk_60;
    /* 0x61 */ u8 unk_61;
    /* 0x62 */ u8 unk_62;
    /* 0x63 */ u8 unk_63;
    /* 0x64 */ u16 unk_64;
    /* 0x66 */ u16 unk_66;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s16 unk_6c;
    /* 0x6e */ u16 unk_6e;
    /* 0x70 */ u8 unk_70;
    /* 0x71 */ u8 unk_71;
};

extern "C" {
void func_0206d49c(void); // Thumb, in main: fatal stop
void *func_0210bfe8(u32 a, u32 b);
void func_020edbbc(u32 a, u32 b, u32 c, u32 d);
u32 func_0211d6e0(void);
void func_0210b280(u32 a);
void func_020f0df8(SndMgr *self);
void func_021095ec(u32 a);
void *func_020edc88(void);
void func_0210e8bc(u32 a, void *b);
void func_0210e6ac(void *p);
void func_020ed9c8(u32 a);
void func_020eda60(void *p);
u32 func_01ffa6b4(void);
void func_020edb14(void);
void func_020ef728(SndMgr *self);
void func_020effd4(SndMgr *self);
void func_020efe70(SndMgr *self);
void func_020edb74(u32 a);
void func_0210ee4c(u32 a);
void func_0210b31c(SndMgr *self);
}

extern "C" SndMgr *func_020f0f70(SndMgr *self) {
    self->unk_54 = func_01ffa6b4();
    self->unk_58 = 0x5d588b65;
    self->unk_5c = 0x00269ec3;
    self->unk_4d = 0;
    self->unk_60 = 0;
    self->unk_62 = 0;
    return self;
}

extern "C" void func_020f0e68(SndMgr *self, u32 a, u32 b, u32 c) {
    self->unk_28 = NULL;
    if (self->unk_28 != NULL) func_0206d49c();
    self->unk_28 = func_0210bfe8(a, 0x339c);
    if (self->unk_28 == NULL) func_0206d49c();
    func_020edbbc(a + 0x339c, b - 0x339c, c, 0);
    func_0210b280(func_0211d6e0() - 1);
    self->unk_50 = 1;
    func_020f0df8(self);
    func_021095ec(127);
    func_0210e8bc(10, func_020edc88());
    func_0210e6ac(&self->unk_34);
    func_020ed9c8(0);
    func_020eda60(&self->unk_48);
    func_020eda60(&self->unk_38);
    func_020eda60(&self->unk_3c);
    func_020eda60(&self->unk_40);
    self->unk_00 = 0;
    self->unk_64 = 0;
    self->unk_68 = 0;
    self->unk_6c = -1;
    self->unk_6e = 0;
    self->unk_70 = 0;
    self->unk_71 = 0;
}

extern "C" void func_020f0e3c(SndMgr *self) {
    func_020edb14();
    func_020ef728(self);
    func_020effd4(self);
    func_020efe70(self);
}

extern "C" void func_020f0e2c(void) {
    func_021095ec(0);
}

extern "C" void func_020f0e1c(void) {
    func_021095ec(127);
}

extern "C" void func_020f0e08(SndMgr *self, u32 v) {
    self->unk_50 = v;
    func_0210ee4c(self->unk_50);
}

extern "C" void func_020f0df8(SndMgr *self) {
    func_020edb74(self->unk_50);
}

extern "C" void func_020f0dec(SndMgr *self) {
    func_0210b31c(self);
}
