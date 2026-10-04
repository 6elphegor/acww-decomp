#ifndef NPC_VILLAGERMOOD_H
#define NPC_VILLAGERMOOD_H

#include "types.h"

class VillagerMood;
class VillagerTalk;

typedef void (VillagerMood::*Unk_0201c078_State)(VillagerTalk *s);

// Mood state of a villager (member at 0x838 of VillagerActor): current / pending mood and the mood animation and
// effect sequence. Constructor / destructor are VillagerMood_Construct / VillagerMood_Destruct; all members are
// defined in src/main/unk_0201c050.cpp.
class VillagerMood {
public:
    VillagerMood();
    ~VillagerMood();
    void update(VillagerTalk *s);
    void updateMoodAnim(VillagerTalk *s, s32 next);
    BOOL startMoodAnim(VillagerTalk *s, u32 idx);
    BOOL isMoodAnimStart(VillagerTalk *s);
    void updateMood3Effects(VillagerTalk *s);
    BOOL beginMood3Effects(VillagerTalk *s);
    void playMood3Effect(VillagerTalk *s);
    void updateMood2Effects(VillagerTalk *s);
    BOOL beginMood2Effects(VillagerTalk *s);
    void playMood2Effect(VillagerTalk *s);
    void updateMood1Effects(VillagerTalk *s);
    BOOL beginMood1Effects(VillagerTalk *s);
    void playMood1EffectB(VillagerTalk *s);
    void playMood1EffectA(VillagerTalk *s);
    BOOL isMoodAnim(VillagerTalk *s);
    BOOL effectsEnabled();
    void disableEffects();
    void enableEffects();
    void updateSoundPos(VillagerTalk *s);
    void playMoodEffect(VillagerTalk *s, u32 a, u32 b);
    void requestApply();
    void addMood(u32 a, s32 b);
    void clearPending();
    void setMoodAnimation(VillagerTalk *s, u32 mode);
    BOOL isActive();
    void stop();
    void start();
    void reset();

    /* 0x00 */ u8 pad_00[0x40];
    /* 0x40 */ u8 currentMood;
    /* 0x44 */ s32 effectMood;
    /* 0x48 */ u8 effectFrame;
    /* 0x4c */ Unk_0201c078_State effectFn;
    /* 0x54 */ u8 pendingMood;
    /* 0x56 */ u16 pendingTime;
    /* 0x58 */ u8 applyRequested;
    /* 0x59 */ u8 active;
    /* 0x5a */ u8 effectsOn;
    /* 0x5b */ u8 severeSickness;
};

#endif // NPC_VILLAGERMOOD_H
