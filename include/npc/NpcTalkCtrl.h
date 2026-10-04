#ifndef NPC_NPCTALKCTRL_H
#define NPC_NPCTALKCTRL_H

#include "types.h"

struct Unk_02013b10_Ctx;
struct Unk_020133cc_Player;

// 0x10-byte NPC talk controller (turn-and-talk state machine), NpcActor::talkCtrl (+0x618). Defined in main,
// unk_020119cc.cpp (the unk_02013b10.cpp part, 0x02013b10..0x02014254; empty C1 0x02014254, D1 label 0x02014250 =
// NpcTalkCtrl_Destroy). NpcActor's fields from 0x628 follow it.
class NpcTalkCtrl {
public:
    NpcTalkCtrl();
    ~NpcTalkCtrl();

    /* 0x00 */ s32 act07Variant;
    /* 0x04 */ s16 turnSpeed;
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
    // talk states 1, 3 and 4 (0x020135ec..0x02013b10; their argument is the TU-local NpcActor view Unk_020133cc_Player)
    void mainState4(Unk_020133cc_Player* p);
    void state4Step0(Unk_020133cc_Player* p);
    void setupState4(Unk_020133cc_Player* p);
    void mainState3(Unk_020133cc_Player* p);
    void setupState3(Unk_020133cc_Player* p);
    void mainState1(Unk_020133cc_Player* p);
    void state1Step2(Unk_020133cc_Player* p);
    void state1Step1(Unk_020133cc_Player* p);
    void state1Step0(Unk_020133cc_Player* p);
    void setupState1(Unk_020133cc_Player* p);
};

#endif
