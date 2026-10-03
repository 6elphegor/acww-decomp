// mwcc-flags: -nothumb -O4,p
// RC_020f0dec: autoload_2 0x020f0dec-0x020f0fb4 (8 functions) + bss 0x021f5b80-0x021f5bf8 (autoload_3) + main .init
// 0x020c6080-0x020c6094 / .ctor 0x020d1f50-0x020d1f54 (its __sinit). mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape: the sound/BGM manager SndMgr and its one object data_021f5b80, a
// file-scope object with an out-of-line constructor, which mwcc builds in the file's __sinit (main .init 0x020c6080: a tail call of
// the C1 constructor 0x020f0f70; the C2 is unreferenced and dead-stripped). Every member keeps its symbols.txt name (aliases.txt).
// Extent: the text and the 0x78-byte object are certain; the 4-byte bss words before it (0x021f5b48-0x021f5b7c, used only by
// func_020ee98c and G006 0x020ef150-0x020f0dec) are equal-or-smaller objects, so they may belong to this file too (then G006, and
// perhaps func_020ee98c, are this file's first part); nothing in the data decides it, so the unit takes only what is proven.
#include "types.h"

class SndMgr {
public:
    SndMgr();                                // C1 0x020f0f70
    void init(u32 a, u32 b, u32 c);          // 0x020f0e68
    void update();                           // 0x020f0e3c
    void volumeOff();                        // 0x020f0e2c
    void volumeOn();                         // 0x020f0e1c
    void setMode(u32 v);                     // 0x020f0e08
    void applyMode();                        // 0x020f0df8
    void stopAll();                          // 0x020f0dec

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
    /* 0x72 */ u8 unk_72[6];
};

// the sound manager (C linkage name as in symbols.txt; other files use data_021f5bbc / bc0 / be0 = members at +0x3c / +0x40 / +0x60,
// recorded as linker-script names by renames.txt)
SndMgr data_021f5b80;

extern "C" {
void func_0206d49c(void); // Thumb, in main: fatal stop
void *func_0210bfe8(u32 a, u32 b);
void func_020edbbc(u32 a, u32 b, u32 c, u32 d);
u32 func_0211d6e0(void);
void func_0210b280(u32 a);
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

SndMgr::SndMgr() {
    unk_54 = func_01ffa6b4();
    unk_58 = 0x5d588b65;
    unk_5c = 0x00269ec3;
    unk_4d = 0;
    unk_60 = 0;
    unk_62 = 0;
}

void SndMgr::init(u32 a, u32 b, u32 c) {
    unk_28 = NULL;
    if (unk_28 != NULL) func_0206d49c();
    unk_28 = func_0210bfe8(a, 0x339c);
    if (unk_28 == NULL) func_0206d49c();
    func_020edbbc(a + 0x339c, b - 0x339c, c, 0);
    func_0210b280(func_0211d6e0() - 1);
    unk_50 = 1;
    applyMode();
    func_021095ec(127);
    func_0210e8bc(10, func_020edc88());
    func_0210e6ac(&unk_34);
    func_020ed9c8(0);
    func_020eda60(&unk_48);
    func_020eda60(&unk_38);
    func_020eda60(&unk_3c);
    func_020eda60(&unk_40);
    unk_00 = 0;
    unk_64 = 0;
    unk_68 = 0;
    unk_6c = -1;
    unk_6e = 0;
    unk_70 = 0;
    unk_71 = 0;
}

void SndMgr::update() {
    func_020edb14();
    func_020ef728(this);
    func_020effd4(this);
    func_020efe70(this);
}

void SndMgr::volumeOff() {
    func_021095ec(0);
}

void SndMgr::volumeOn() {
    func_021095ec(127);
}

void SndMgr::setMode(u32 v) {
    unk_50 = v;
    func_0210ee4c(unk_50);
}

void SndMgr::applyMode() {
    func_020edb74(unk_50);
}

void SndMgr::stopAll() {
    func_0210b31c(this);
}
