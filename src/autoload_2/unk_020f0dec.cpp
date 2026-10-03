// mwcc-flags: -nothumb -O4,p
// RC_020f0dec: autoload_2 0x020f0dec-0x020f0fb4 (8 functions) + bss 0x021f5b80-0x021f5bf8 (autoload_3) + main .init
// 0x020c6080-0x020c6094 / .ctor 0x020d1f50-0x020d1f54 (its __sinit). mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape: the sound/BGM manager SndMgr and its one object gSndMgr, a
// file-scope object with an out-of-line constructor, which mwcc builds in the file's __sinit (main .init 0x020c6080: a tail call of
// the C1 constructor 0x020f0f70; the C2 is unreferenced and dead-stripped). Every member keeps its symbols.txt name (aliases.txt).
// Extent: the text and the 0x78-byte object are certain; the 4-byte bss words before it (0x021f5b48-0x021f5b7c, used only by
// SndMgr_PlayTalkVoice and G006 0x020ef150-0x020f0dec) are equal-or-smaller objects, so they may belong to this file too (then G006, and
// perhaps SndMgr_PlayTalkVoice, are this file's first part); nothing in the data decides it, so the unit takes only what is proven.
#include "types.h"

class SndMgr {
public:
    SndMgr();                                // C1 0x020f0f70
    void init(u32 a, u32 b, u32 c);          // 0x020f0e68
    void update();                           // 0x020f0e3c
    void volumeOff();                        // 0x020f0e2c
    void volumeOn();                         // 0x020f0e1c
    void setOutputMode(u32 v);                     // 0x020f0e08
    void startOutputEffect();                        // 0x020f0df8
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
SndMgr gSndMgr;

extern "C" {
void Fatal_Trap(void); // Thumb, in main: fatal stop
void *NNS_SndHeapCreate(u32 a, u32 b);
void Snd_InitSystem(u32 a, u32 b, u32 c, u32 d);
u32 func_0211d6e0(void);
void func_0210b280(u32 a);
void NNS_SndSetMasterVolume(u32 a);
void *Snd_GetHeap(void);
void func_0210e8bc(u32 a, void *b);
void func_0210e6ac(void *p);
void Snd_LoadGroup(u32 a);
void Snd_InitHandle(void *p);
u32 OS_GetTick(void);
void Snd_Main(void);
void SndMgr_UpdateVoice(SndMgr *self);
void SndMgr_UpdateTrackRamps(SndMgr *self);
void SndMgr_UpdateVolumeRamps(SndMgr *self);
void Snd_StartOutputEffect(u32 a);
void func_0210ee4c(u32 a);
void NNS_SndCaptureStopEffect(SndMgr *self);
}

SndMgr::SndMgr() {
    unk_54 = OS_GetTick();
    unk_58 = 0x5d588b65;
    unk_5c = 0x00269ec3;
    unk_4d = 0;
    unk_60 = 0;
    unk_62 = 0;
}

void SndMgr::init(u32 a, u32 b, u32 c) {
    unk_28 = NULL;
    if (unk_28 != NULL) Fatal_Trap();
    unk_28 = NNS_SndHeapCreate(a, 0x339c);
    if (unk_28 == NULL) Fatal_Trap();
    Snd_InitSystem(a + 0x339c, b - 0x339c, c, 0);
    func_0210b280(func_0211d6e0() - 1);
    unk_50 = 1;
    startOutputEffect();
    NNS_SndSetMasterVolume(127);
    func_0210e8bc(10, Snd_GetHeap());
    func_0210e6ac(&unk_34);
    Snd_LoadGroup(0);
    Snd_InitHandle(&unk_48);
    Snd_InitHandle(&unk_38);
    Snd_InitHandle(&unk_3c);
    Snd_InitHandle(&unk_40);
    unk_00 = 0;
    unk_64 = 0;
    unk_68 = 0;
    unk_6c = -1;
    unk_6e = 0;
    unk_70 = 0;
    unk_71 = 0;
}

void SndMgr::update() {
    Snd_Main();
    SndMgr_UpdateVoice(this);
    SndMgr_UpdateTrackRamps(this);
    SndMgr_UpdateVolumeRamps(this);
}

void SndMgr::volumeOff() {
    NNS_SndSetMasterVolume(0);
}

void SndMgr::volumeOn() {
    NNS_SndSetMasterVolume(127);
}

void SndMgr::setOutputMode(u32 v) {
    unk_50 = v;
    func_0210ee4c(unk_50);
}

void SndMgr::startOutputEffect() {
    Snd_StartOutputEffect(unk_50);
}

void SndMgr::stopAll() {
    NNS_SndCaptureStopEffect(this);
}
