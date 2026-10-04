#ifndef TALK_TALKMSGREQUEST_H
#define TALK_TALKMSGREQUEST_H

#include "types.h"
#include "talk/MsgRequest.h"

class MsgString;
class MsgString9;
class TalkWindowState;

// Talk-window message request (vtable 0x020ddce8, 0x44 bytes): MsgRequest plus the speaker name and the talk window it
// is attached to; the notification slots are called by TalkWindowState / TalkWindowMsg / the talk parsers.
// Defined in src/main/unk_02065e88.cpp (0x02065e88..0x0206609c), which keeps its own copy (speakerName is a
// MsgString9 by value there, laid out on that unit's 0xc-byte MsgString view; nameKind at 0x2c is its attr form).
// Slot parameters are the ones the talk window passes; symbols.txt names TalkMsgRequest's empty bodies without them,
// the parameterised names are alias labels. Slot 0x0c is vfunc_s0c (alias label of TalkMsgRequest::vfunc_0c) so that
// classes that also derive from ProcBase (BuildingActor, FtrActor, RoomObjActor users ...) do not override both
// slots 0x0c (ProcBase::vfunc_0c) at once.
class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();                // 0x08
    virtual const char *vfunc_s0c();        // 0x0c message directory ("/script/ENG/message")
    virtual void onMessageStart(u32 attr);  // 0x10 (attr: message attribute byte 6)
    virtual void onMessageEnd(u32 attr);    // 0x14 (attr: message attribute byte 7)
    virtual void onChoice(u32 attr);        // 0x18 (attr: chosen entry's attribute byte 7)
    virtual void onSignalTag(s32 id);       // 0x1c
    virtual void onActionTag0();            // 0x20
    virtual void onActionTag1(u32 arg);     // 0x24
    virtual void onActionTag2(u32 arg);     // 0x28
    virtual void onActionTag3(u32 arg);     // 0x2c
    virtual void onActionTag4(u32 arg);     // 0x30
    virtual void onConditionTag();          // 0x34
    virtual void onEventTag(u32 id);        // 0x38
    virtual void onTag09_0();               // 0x3c
    virtual void onTag09_1();               // 0x40
    virtual void onTag09_2();               // 0x44
    virtual void onTag09_3();               // 0x48
    virtual void onTag09_4();               // 0x4c
    virtual void onTag09_5();               // 0x50
    virtual void onTag09_6();               // 0x54
    virtual void onTag09_7();               // 0x58
    virtual void onTag09_8();               // 0x5c
    virtual void onTag09_9();               // 0x60
    virtual void onScannedTag(u32 tag);     // 0x64
    virtual u32 getSpeakerData();           // 0x68
    virtual s32 getVoiceType();             // 0x6c
    virtual void onWindowClose();           // 0x70
    virtual void onTalkEnd();               // 0x74

    void detachWindow();
    void attachWindow(u32 v);
    u32 getNameKind();
    u32 isNoSpeakerName();
    MsgString9 *getSpeakerName();
    void changeSpeakerName(MsgString *p, u32 v);
    void setNoSpeakerName(u32 v);
    void setSpeakerNameStr(MsgString *p, u32 v);
    void setSpeakerName(u8 *p, u32 v);

    /* 0x20 */ u32 speakerName[0xc / 4];    // MsgString9 (its text buffer reaches into pad_30)
    /* 0x2c */ u32 nameKind;
    /* 0x30 */ u8 pad_30[0xc];
    /* 0x3c */ TalkWindowState *unk_3c;     // talk window this request is attached to (attachWindow)
    /* 0x40 */ u8 unk_40;                   // no speaker name (setNoSpeakerName)
    // 0x41: end of data. mwcc places a derived class's first members in the tail padding (BuildingActor: u16 at
    // +0x42), so this class must not declare padding of its own here.
};

#endif
