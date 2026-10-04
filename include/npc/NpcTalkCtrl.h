#ifndef NPC_NPCTALKCTRL_H
#define NPC_NPCTALKCTRL_H

#include "types.h"

struct Unk_02013b10_Ctx;

// 0x10-byte NPC talk controller (turn-and-talk state machine). Defined in main, unk_020119cc.cpp (the unk_02013b10.cpp
// part, 0x02013b10..0x02014234). NpcActor's fields from 0x628 follow its talkCtrl at 0x618.
class NpcTalkCtrl {
public:
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s16 turnAngle;
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 requestedState;
    /* 0x0a */ u8 step;
    /* 0x0b */ u8 clearActorFlagOnEnd;
    /* 0x0c */ u8 keepCamera;
    /* 0x0d */ u8 stopAction;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;

    void mainState2(Unk_02013b10_Ctx *ctx);
    void state2Step1(Unk_02013b10_Ctx *ctx);
    void state2Step0(Unk_02013b10_Ctx *ctx);
    void setupState2(Unk_02013b10_Ctx *ctx);
    void mainState0(Unk_02013b10_Ctx *ctx);
    void state0Step2(Unk_02013b10_Ctx *ctx);
    void state0Step1(Unk_02013b10_Ctx *ctx);
    void state0Step0(Unk_02013b10_Ctx *ctx);
    void setupState0(Unk_02013b10_Ctx *ctx);
    void endTalk(Unk_02013b10_Ctx *ctx);
    void startTalkMessage(Unk_02013b10_Ctx *ctx);
    void updateSpeakerMouth(Unk_02013b10_Ctx *ctx);
    void update(Unk_02013b10_Ctx *ctx);
    void applyRequest(Unk_02013b10_Ctx *ctx);
    BOOL request(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g);
    BOOL requestState4(u32 c, s32 d, s16 e, u8 g);
    BOOL requestTalk(u8 f, u8 g);
    BOOL requestTurnAndTalk(s16 d, s16 e, u8 g);
    BOOL isBusy();
    void reset();
};

#endif
