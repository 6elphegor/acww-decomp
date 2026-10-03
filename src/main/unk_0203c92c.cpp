#include "types.h"

extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}

// ---- flag object at 0x021c3264
struct Unk_0203c92c_Bits0 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b23 : 2;
};
struct Unk_0203c92c_Bits1 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
};
class PlayerOptions {
public:
    PlayerOptions();
    ~PlayerOptions();
    void markTalkVoiceChanged();
    void markStereoChanged();
    void markHiraganaChanged();
    BOOL isTalkVoiceChanged();
    BOOL isStereoChanged();
    BOOL isHiraganaChanged();
    void reset();
    void setTalkVoice(u32 v);
    u32 getTalkVoice();
    void clearStereo();
    void setStereo();
    BOOL isStereo();
    void clearHiragana();
    void setHiragana();
    BOOL isHiragana();
    void resetValues();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

PlayerOptions sPlayerOptions;
extern "C" void PlayerOptions_CopyOut(void *src, void *dst);
extern "C" void PlayerOptions_CopyIn(void *dst, void *src);
extern "C" void PlayerOptions_OnDestruct();
extern "C" void PlayerOptions_OnConstruct();

extern "C" {
void PlayerData_GetCurrent();
}

extern "C" {
PlayerOptions *_ZN10PlayerData13func_02098668Ev();
}

extern "C" {
PlayerOptions *PlayerOptions_Get();
}

extern "C" {
s32 PlayerOptions_IsHiragana();
}

extern "C" {
s32 PlayerOptions_IsStereo();
}

extern "C" {
u32 PlayerOptions_GetTalkVoice();
}
extern "C" PlayerOptions *PlayerOptions_Get() { return &sPlayerOptions; }

extern "C" BOOL PlayerOptions_IsHiragana() { return sPlayerOptions.isHiragana(); }

extern "C" void PlayerOptions_SetHiragana(s32 x) {
    if (x == 1) sPlayerOptions.setHiragana();
    else sPlayerOptions.clearHiragana();
    sPlayerOptions.markHiraganaChanged();
}

extern "C" BOOL PlayerOptions_IsStereo() { return sPlayerOptions.isStereo(); }

extern "C" void PlayerOptions_SetStereo(s32 x) {
    if (x == 1) sPlayerOptions.setStereo();
    else sPlayerOptions.clearStereo();
    sPlayerOptions.markStereoChanged();
}

extern "C" u32 PlayerOptions_GetTalkVoice() { return sPlayerOptions.getTalkVoice(); }

extern "C" void PlayerOptions_SetTalkVoice(u32 v) {
    sPlayerOptions.setTalkVoice(v);
    sPlayerOptions.markTalkVoiceChanged();
}

extern "C" void PlayerOptions_Commit() {
    PlayerOptions *r5, *r4;
    u8 l;
    PlayerData_GetCurrent();
    r5 = _ZN10PlayerData13func_02098668Ev();
    r4 = PlayerOptions_Get();
    if (r4->isHiraganaChanged()) {
        if (PlayerOptions_IsHiragana() == 1) r5->setHiragana();
        else r5->clearHiragana();
    }
    if (r4->isStereoChanged()) {
        if (PlayerOptions_IsStereo() == 1) r5->setStereo();
        else r5->clearStereo();
    }
    if (r4->isTalkVoiceChanged()) {
        r5->setTalkVoice(PlayerOptions_GetTalkVoice());
    }
    PlayerOptions_CopyOut(r5, &l);
    r4->reset();
    PlayerOptions_CopyIn(r4, &l);
}

extern "C" void PlayerOptions_OnConstruct() {}

extern "C" void PlayerOptions_ConstructInPlayer() {}

extern "C" void PlayerOptions_DestructInPlayer() {}

extern "C" void PlayerOptions_OnDestruct() {}

void PlayerOptions::resetValues() {
    clearHiragana();
    clearStereo();
    setTalkVoice(0);
}

extern "C" void PlayerOptions_CopyOut(void *src, void *dst) { MI_CpuCopy8(src, dst, 1); }

extern "C" void PlayerOptions_CopyIn(void *dst, void *src) { MI_CpuCopy8(src, dst, 1); }

BOOL PlayerOptions::isHiragana() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b0) return TRUE;
    return FALSE;
}

void PlayerOptions::setHiragana() { unk_00 = (unk_00 & ~1) | 1; }

void PlayerOptions::clearHiragana() { unk_00 &= ~1; }

BOOL PlayerOptions::isStereo() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b1) return TRUE;
    return FALSE;
}

void PlayerOptions::setStereo() { unk_00 |= 2; }

void PlayerOptions::clearStereo() { unk_00 &= ~2; }

u32 PlayerOptions::getTalkVoice() { return ((Unk_0203c92c_Bits0 *)&unk_00)->b23; }

void PlayerOptions::setTalkVoice(u32 v) {
    unk_00 = (unk_00 & ~0xc) | (((u8)v & 3) << 2);
}

PlayerOptions::PlayerOptions() { PlayerOptions_OnConstruct(); }

PlayerOptions::~PlayerOptions() { PlayerOptions_OnDestruct(); }

void PlayerOptions::reset() {
    resetValues();
    unk_01 &= ~1;
    unk_01 &= ~2;
    unk_01 &= ~4;
}

BOOL PlayerOptions::isHiraganaChanged() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b0) return TRUE;
    return FALSE;
}

BOOL PlayerOptions::isStereoChanged() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b1) return TRUE;
    return FALSE;
}

BOOL PlayerOptions::isTalkVoiceChanged() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b2) return TRUE;
    return FALSE;
}

void PlayerOptions::markHiraganaChanged() { unk_01 = (unk_01 & ~1) | 1; }

void PlayerOptions::markStereoChanged() { unk_01 |= 2; }

void PlayerOptions::markTalkVoiceChanged() { unk_01 |= 4; }

