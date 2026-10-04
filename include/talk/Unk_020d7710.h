#ifndef TALK_UNK_020D7710_H
#define TALK_UNK_020D7710_H

#include "types.h"
#include "talk/ActorTalkRequest.h"

struct TalkSubSceneParams;

// The task / sub-scene half of ActorTalkRequest (same object and vtable 0x020d770c; symbols.txt names the members at
// 0x02014d90..0x02015624 and the shared ctor/dtor after this class). Tasks: sub-scene (menus), close / reopen the talk
// window, give an item. Base of the SpNpc*Talk / VillagerTalk requests. Defined in src/main/unk_020119cc.cpp.
class Unk_020d7710 : public ActorTalkRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onTaskDone(u32 id);

    BOOL giveItemWait();
    BOOL giveItemStart();
    BOOL requestGiveItem(u16 *item, u32 kind, u32 mode, u32 variant);
    BOOL taskCloseWindow();
    BOOL closeWindowWait();
    BOOL closeWindowStart();
    BOOL requestCloseWindow(u32 mode);
    BOOL taskReopenWindow();
    BOOL requestReopenWindow();
    BOOL taskSubScene();
    BOOL subSceneWait();
    BOOL subSceneOpen();
    BOOL subSceneCloseWindow();
    void setSubSceneKind2(u32 a, u32 b, u32 c, u8 d);
    void setMenu12Arg(u32 a, u32 b);
    void setSelectionList(u32 a, u32 b, u32 c);
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
    void setSubSceneKind(u32 a, u32 b);
    void setPocketFilter(u32 a, u32 b, u32 c);
    void setPocketItem(u32 a, u32 b, u32 c);
    BOOL openSubScene(s32 type);
    void runTask();
    BOOL isTaskRunning();
    BOOL startTask(s32 id);
    void initSubSceneParams(TalkSubSceneParams *p);
    void resetTasks();
    void makePlayerTurnTo(u8 *actor);
    void makePlayerLookAt(u8 *actor);
};

#endif
