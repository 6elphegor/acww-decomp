#ifndef ACTOR_VILLAGERACTOR_H
#define ACTOR_VILLAGERACTOR_H

#include "types.h"
#include "actor/NpcActor.h"
#include "npc/Unk_0202d7f4.h"
#include "npc/Unk_0202d5e8.h"
#include "npc/NpcResHandleView.h"
#include "npc/VillagerMood.h"

// Base of the town villagers (0x894 bytes). Defined in src/main/unk_0201c050.cpp (ctor, dtor, vtable, overrides
// 0x0202daf8..). The member at 0x680 is a VillagerTalk plus one byte (npc/Unk_0202d5e8.h).
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

    /* 0x640 */ u8 eventKind;
    /* 0x644 */ u32 talkPartnerId;
    /* 0x648 */ u8 invitedByPartner;
    /* 0x64c */ Unk_0202d7f4 clothModel;
    /* 0x680 */ Unk_0202d5e8 villagerTalk;
    /* 0x824 */ VillagerAnimHeapHandle animHeapHandle;
    /* 0x82c */ void *villagerData;
    /* 0x830 */ void *villagerState;
    /* 0x834 */ u8 unk_834;
    /* 0x838 */ VillagerMood mood;
};

#endif
