#ifndef ACTOR_VILLAGERACTOR_H
#define ACTOR_VILLAGERACTOR_H

#include "types.h"
#include "actor/NpcActor.h"
#include "npc/VillagerClothModel.h"
#include "talk/VillagerTalk.h"
#include "npc/NpcResHandleView.h"
#include "npc/VillagerMood.h"

// Base of the town villagers (0x894 bytes). Defined in src/main/unk_0201c050.cpp (ctor, dtor, vtable, overrides
// 0x0202daf8..).
struct Unk_0202bd3c_Arr;

class VillagerActor : public NpcActor {
public:
    VillagerActor();
    virtual ~VillagerActor();
    virtual BOOL onCreate();
    virtual BOOL preCreate();
    virtual BOOL onDelete();
    virtual BOOL preDelete();
    virtual void *getVillagerData();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 a);
    virtual u32 getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual u16 getSpecies();
    virtual void setShirt(u16 *p, BOOL flag);
    virtual void addMood(u32 a, s32 b);
    /* 0xa8 */ virtual BOOL isPickable();
    /* 0xac */ virtual BOOL vfunc_ac();
    /* 0xb0 */ virtual BOOL consumeFleaRemoved();
    /* 0xb4 */ virtual s32 canAcceptPartnerInvite();
    /* 0xb8 */ virtual s32 acceptPartnerInvite(u32 idx); // FieldVillager's override takes the index
    /* 0xbc */ virtual s32 endPartnerTalk();

    BOOL isFlag834();
    void clearFlag834();
    void setFlag834();
    BOOL loadAnimSet();
    s32 getSpeciesOrNone();
    void attachVillagerData();
    // errand catch plans (insect / fish shown to the player), defined in unk_0201c050.cpp among the talk topics
    void updateCatchPlans(u8 *a, void *b, u32 c);
    void updateFishCatchPlan(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr);

    /* 0x640 */ u8 eventKind;
    /* 0x644 */ u32 talkPartnerId;
    /* 0x648 */ u8 invitedByPartner;
    /* 0x64c */ VillagerClothModel clothModel;
    /* 0x680 */ VillagerTalk villagerTalk;
    /* 0x820 */ u8 habitTopicKind; // which habit topic set the villager talks about next (random 0/1, toggled)
    /* 0x821 */ u8 pad_821[3];
    /* 0x824 */ VillagerAnimHeapHandle animHeapHandle;
    /* 0x82c */ void *villagerData;
    /* 0x830 */ void *villagerState;
    /* 0x834 */ u8 unk_834;
    /* 0x838 */ VillagerMood mood;
};

#endif
