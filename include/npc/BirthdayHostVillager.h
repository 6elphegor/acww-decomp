#ifndef NPC_BIRTHDAYHOSTVILLAGER_H
#define NPC_BIRTHDAYHOSTVILLAGER_H

// The villager who hosts a birthday party in their house (ov004; 0xa68 bytes) and its talk request member at 0x89c.
// Defined in src/ov004/unk_ov004_02214948.cpp.
#include "types.h"
#include "actor/VillagerActor.h"
#include "talk/VillagerTalk.h"
#include "talk/TalkStartMsg.h"

class BirthdayHostVillager;

class BirthdayHostVillagerTalk : public VillagerTalk {
public:
    BirthdayHostVillagerTalk() {}
    virtual void onMessageStart(u32 attr);
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);
    virtual void update();
    virtual void onTaskDone(u32 id);

    void attachOwner(BirthdayHostVillager *owner);
    void *getFriendship();
    void addFriendship(s32 v);
    BOOL isLikedGift(u16 *p);
    void *getPlayerMemory();
    void setReceivedGift();
    u32 hasReceivedGift();
    void setTalked();
    BOOL isNotTalkedYet();
    void setPartyGreeted();
    BOOL isPartyNotGreeted();

    /* 0x1a0 */ BirthdayHostVillager *villager;
};

typedef BOOL (BirthdayHostVillager::*Unk_ov004_0224c034_Fn)();

class BirthdayHostVillager : public VillagerActor {
public:
    BirthdayHostVillager() : returnGift(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL updateAct();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();

    BOOL drawModel();
    void func_ov004_02215b9c();
    BOOL changeAct(s32 idx);
    void execAct();
    BOOL setupAct00();

    void mainAct0D();
    BOOL setupAct0D();
    void mainAct0C();
    BOOL setupAct0C();
    void mainAct0B();
    BOOL setupAct0B();
    void mainAct0A();
    BOOL setupAct0A();
    void mainAct09();
    BOOL setupAct09();
    void mainAct08();
    BOOL setupAct08();
    void mainAct07();
    BOOL setupAct07();
    void mainAct06();
    BOOL setupAct06();
    void mainAct05();
    BOOL setupAct05();
    void mainAct04();
    BOOL setupAct04();
    void mainAct03();
    BOOL setupAct03();
    void mainAct02();
    BOOL setupAct02();
    void mainAct01();
    BOOL setupAct01();
    void mainAct00();

    /* 0x894 */ s32 act;
    /* 0x898 */ u8 talkMelodyPlayed;
    /* 0x899 */ u8 pad_899[3];
    /* 0x89c */ BirthdayHostVillagerTalk talk;
    /* 0xa40 */ Unk_ov004_0224c034_Fn drawFn;
    /* 0xa48 */ u16 returnGift;
    /* 0xa4a */ u8 approachTimer;
    /* 0xa4b */ u8 emotionTimer;
    /* 0xa4c */ s16 walkAngle;
    /* 0xa4e */ u16 walkTimer;
    /* 0xa50 */ s32 waypoint[3];
    /* 0xa5c */ s32 walkTarget[3];
};

#endif
