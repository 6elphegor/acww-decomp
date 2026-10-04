#ifndef TALK_UNK_02015B54_H
#define TALK_UNK_02015B54_H

#include "types.h"

// Talk/message tag handler base (ctor 0x02015b54); base of Unk_020d7710 / ActorTalkRequest
// (src/ov004/unk_ov004_02214948.cpp, src/ov004/unk_ov004_02215f04.cpp). Virtual order = vtable slots.

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1(u32 a);
    virtual void onActionTag2(u32 a);
    virtual void onActionTag3(u32 a);
    virtual void onActionTag4(u32 a);
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(void *arg);
    virtual void runDeferred();
    virtual void update();
    virtual void onTaskDone();
};

#endif
