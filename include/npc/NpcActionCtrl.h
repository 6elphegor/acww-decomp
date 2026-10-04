#ifndef NPC_NPCACTIONCTRL_H
#define NPC_NPCACTIONCTRL_H

#include "types.h"

struct NpcActionEntry;
struct Unk_02006d14;

// Parameters of one NPC action request (0x34 bytes), current and pending copies inside NpcActionCtrl.
struct NpcActionParams {
    s32 animId, waypointX, waypointZ, destX, destZ, act07Variant;
    s16 targetAngle, turnSpeed;
    u16 blendFrames, animStartFrame;
    u8 animPlayMode, emotionId;
    u16 item;
    s32 handOverKind, handOverPartner;
    u8 handOverMode;
    s32 handOverVariant;
    void *clear();
    void copyFrom(NpcActionParams *src);
};

// 0xb4-byte NPC action controller (current/pending action, talking state, emotion). Member of every NPC actor.
// Defined in src/main/unk_020119cc.cpp (0x02019020..0x02019858).
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    void mainAct02(u8 *o);
    s32 setupAct02(u8 *o);
    void mainAct01(u8 *o);
    s32 setupAct01(u8 *o);
    void mainAct00();
    s32 setupAct00(u8 *o);
    void postUpdate(u8 *arg);
    void update(u8 *arg);
    void func_02019468_dummy();
    void setActionDone(s32 v);
    void applyPendingAction(u8 *arg);
    void clearTalking();
    void setTalking();
    void requestTalkingOff();
    void requestTalkingOn();
    BOOL requestTakeItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL requestGiveItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL requestPlayAnim(s32 a, s32 b, u32 c, u16 s0, u16 s1);
    void requestStand(u32 a, u16 b);
    BOOL requestEmotion(s32 a, u8 b, u16 c);
    BOOL requestAct07(s32 a, s32 b, s32 c, s32 d, u16 e);
    BOOL requestAction(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6);
    void setPendingAction(s32 a, s32 b);
    void clearPendingAction();
    void changeAction(u8 *o, s32 idx, s32 state);
    NpcActionParams *getCurParams();
    BOOL isActionDone();
    u8 getEmotionId();
    s32 getAction();
    void startAction(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4);
    void func_02019854();
    // Actions 0x0e..0x15 (unk_02016a44 part of src/main/unk_020119cc.cpp, 0x02016a44..0x02017d74); act0EStep00 is
    // still the view method Unk_02017d74::act0EStep00, act0EStepNN are defined by their mangled names. The
    // Unk_02006d14 argument is the TU-local NpcActor view of unk_020119cc.cpp, not the player.
    BOOL setupAct15(Unk_02006d14 *o);
    BOOL postAct14(Unk_02006d14 *o);
    BOOL setupAct14(Unk_02006d14 *o);
    s32 requestAct14(s32 a, u16 *p);
    void postAct13(Unk_02006d14 *o);
    void mainAct13(Unk_02006d14 *o);
    void act13Step0(Unk_02006d14 *o);
    BOOL setupAct13(Unk_02006d14 *o);
    void mainAct12(Unk_02006d14 *o);
    void act12Step1();
    void act12Step0();
    BOOL setupAct12(Unk_02006d14 *o);
    void mainAct11(Unk_02006d14 *o);
    void act11Step2();
    void act11Step1(Unk_02006d14 *o);
    void act11Step0(Unk_02006d14 *o);
    BOOL setupAct11(Unk_02006d14 *o);
    void postAct10(Unk_02006d14 *o);
    BOOL setupAct10(Unk_02006d14 *o);
    void postAct0F(Unk_02006d14 *o);
    BOOL setupAct0F(Unk_02006d14 *o);
    void postAct0E();
    void mainAct0E(Unk_02006d14 *o);
    void act0EStep01(Unk_02006d14 *o);
    void act0EStep02(Unk_02006d14 *o);
    void act0EStep03(Unk_02006d14 *o);
    void act0EStep04(Unk_02006d14 *o);
    void act0EStep05(Unk_02006d14 *o);
    void act0EStep06(Unk_02006d14 *o);
    void act0EStep07(Unk_02006d14 *o);
    void act0EStep08(Unk_02006d14 *o);
    void act0EStep09(Unk_02006d14 *o);
    void act0EStep10(Unk_02006d14 *o);
    void act0EStep11(Unk_02006d14 *o);
    void act0EStep12(Unk_02006d14 *o);
    void act0EStep13(Unk_02006d14 *o);
    void act0EStep14(Unk_02006d14 *o);
    void act0EStep15(Unk_02006d14 *o);
    void act0EStep16(Unk_02006d14 *o);
    void act0EStep17(Unk_02006d14 *o);
    void act0EStep18(Unk_02006d14 *o);
    void act0EStep19(Unk_02006d14 *o);
    BOOL waitItemAnimEnd(Unk_02006d14 *o, u16 *p, u32 a, u32 b);

    /* 0x00 */ s32 netMoveMode;    // move kind (1/2) of the net-synced move action 0x15 (NpcActor::onExecute)
    /* 0x04 */ u8 netAction;
    /* 0x05 */ u8 netPriority;
    /* 0x06 */ u8 netArgs[0xe];
    /* 0x14 */ s32 priority;
    /* 0x18 */ u8 isTalking;
    /* 0x19 */ u8 talkingRequest;
    /* 0x1a */ u8 pad_1a[2];
    /* 0x1c */ s32 action;
    /* 0x20 */ NpcActionEntry *actionEntry;
    /* 0x24 */ s32 pendingAction;
    /* 0x28 */ s32 pendingPriority;
    /* 0x2c */ NpcActionParams pendingParams;
    /* 0x60 */ NpcActionParams curParams;
    /* 0x94 */ s32 actionDone;
    /* 0x98 */ u8 actStep;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 pad_9a[2];
    /* 0x9c */ s32 moveMode;
    /* 0xa0 */ u16 unk_a0;
    /* 0xa2 */ u8 pad_a2[2];
    /* 0xa4 */ s32 emotionEntry;
    /* 0xa8 */ u8 emotionIntro;
    /* 0xa9 */ u8 emotionId;
    /* 0xaa */ u8 pad_aa[2];
    /* 0xac */ s32 itemEffect;
    /* 0xb0 */ s32 act07Variant;
};

#endif
