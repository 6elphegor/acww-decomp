// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "sys/CmdSeq.h"
#include "snd/PlayCtx.h"
#include "snd/BgmObj.h"
#include "snd/SndSeGroup.h"
#include "sys/FndList.h"
#include "sys/TaskList.h"
#include "sys/ListNode.h"
#define PROTO_LOCAL_gSndMgr  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020ed81c.h"
#include "proto/autoload_2/unk_020edd58.h"
#include "proto/autoload_2/unk_020ee98c.h"
#include "proto/autoload_2/unk_020ef150.h"
#include "proto/autoload_2/unk_021093f4.h"
#include "proto/autoload_2/unk_0210c084.h"
#include "proto/itcm/unk_01ffa4a0.h"
#include "proto/itcm/unk_01ffcfc0.h"
#include "proto/main/unk_0206d49c.h"







struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);

struct Bytes4 {
    u8 b[4];
};
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 active;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 groupParams;
    /* 0x1c */ u32 heapLevel;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

extern "C" {
BOOL List_PushBack(List *list, ListNode *node);
BOOL List_InsertAfter(List *list, ListNode *node, ListNode *after);
extern QNode *gTaskCurrentNode;
extern s32 gTaskPhase;
extern TaskList gTaskDrawList;
extern TaskList gTaskDeleteList;
extern TaskList gTaskCreateList;
extern TaskList gTaskExecuteList;
extern TaskList4 gProcTree;
extern const char *const sTaskPhaseNames[];
extern void *gSndHeap;
extern void *gSndCaptureBuffer;
extern u8 gSndDefaultHandle[];
extern u8 data_021f5aac[];
extern u8 data_021f5a1c[];
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void NNS_SndHeapLoadState(void *a, u32 b);
void *NNS_SndHeapGetCurrentLevel(void *a);
s32 NNS_SndHeapSaveState(void *a);
void *NNS_SndHeapAlloc(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *NNS_SndHeapCreate(u32 a, u32 b);
void NNS_SndArcInit(void *a, u32 b, void *c, u32 d);
void NNS_SndArcInitOnMemory(void *a, u32 b);
void NNS_SndCaptureStartOutputEffect(u32 a, u32 b, u32 c);
void NNS_FndInitList(void *list, u16 offset);
void NNS_SndHandleReleaseSeq(void *p);
BOOL SndSeVoice_IsHeld(Ent *e);
void SndSeVoice_Stop(Ent *e, s32 a);
BOOL SndSeVoice_IsPlayingId(Ent *e, u32 a, u32 b);
void SndSeVoice_SetFlag(Ent *e, s32 bit, s32 on);
void SndSeVoice_SetParams(Ent *e, s32 c, s32 d);
s32 SndSeGroup_FindFreeVoice(Group *g);
void SndSeVoice_StartHeld(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_Start(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeGroup_SetFlag(Group *g, s32 bit, s32 on);
void SndSeVoice_Init(Ent *e);
void SndSeGroup_EvalListener(PlayCtx *c);
InfoB *NNS_SndArcGetSeqArcSeqParam(u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void NNS_SndPlayerSetPlayerPriority(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 v);
void NNS_SndPlayerSetTrackVolume(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPitch(void *p, u32 a, s32 b);
extern u8 gSndMgr[];
extern Player gSndSeSystem;
void *NNS_FndGetPrevListObject(void *list, void *obj);
void *NNS_FndGetNextListObject(void *list, void *obj);
void NNS_FndRemoveListObject(void *list, void *obj);
void NNS_FndAppendListObject(void *list, void *obj);

extern s32 (*gSndListenerDistanceCallback)(PlayCtx *);
extern s32 (*gSndListenerVolumeCallback)(PlayCtx *);
extern s32 (*gSndListenerPanCallback)(PlayCtx *);
void SndSeGroup_StartVoice(Group *g, s32 i, s32 v);
void SndSeGroup_ApplyVoiceParams(Group *g, s32 i);
}




















// PROTOS-BEGIN
extern "C" {
#define TaskList_run _ZN8TaskList3runEv
BOOL TaskList_run(TaskList *l);
void Task_RunDrawPhase(void);
void Task_RunAllPhases(void);
#define TaskTree_run _ZN8TaskTree3runEv
BOOL TaskTree_run(TaskList4 *l);
void *Snd_GetHeapLevel(void);
void *Snd_RestoreHeapLevel(u32 a);
s32 Snd_LoadGroup(u32 a);
void Snd_StartSeqArc(s32 a, void *b, void *c);
void Snd_AllocCaptureBuffer(void);
void Snd_CaptureBufferDisposeCallback(void);
void *Snd_GetHeap(void);
void SndSeGroupList_StopAll(FndList *o);
void SndSeSystem_UnloadGroup(Player *o);
BOOL SndSeSystem_LoadGroup(Player *o);
void SndSeGroup_StopHeld(Group *g, s32 a);
void SndSeGroup_StopAll(Group *g, s32 a);
void SndSeGroup_StopVoice(Group *g, s32 i, s32 a);
void SndSeGroup_ReleaseAll(Group *g);
void SndSeGroup_Shutdown(Group *g);
s32 SndSeGroup_FindFreeVoice(Group *g);
void SndSeGroup_SetFlag(Group *g, s32 bit, s32 on);
BOOL SndSeVoice_IsHeld(Ent *e);
void SndSeVoice_SetFlag(Ent *e, s32 bit, s32 on);
void SndSeVoice_Stop(Ent *e, s32 x);
BOOL SndSeVoice_IsPlayingId(Ent *e, u32 a, u32 b);
void SndSeVoice_StartHeld(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_Start(Ent *e, u32 a, u32 b, s32 c, s16 d);
void SndSeVoice_SetParams(Ent *e, s32 c, s32 d);
void SndSeVoice_Init(Ent *e);
void SndSeGroup_EvalListener(PlayCtx *p);
void SndSeGroup_ApplyVoiceParams(Group *g, s32 i);
void SndSeGroup_StartVoice(Group *g, s32 i, s32 v);
void *SndList_GetFirst(void **p);
void *SndList_GetNext(void *list, void *obj);
}
// PROTOS-END

extern "C" BOOL SndSeSystem_Setup(Player *o, u32 a, u32 b, Bytes4 s) {
    if (o->active != 0) Fatal_Trap();
    if (s.b[0] == 255) Fatal_Trap();
    o->groupParams = s;
    if (s.b[3] == 0) {
        if (SndSeSystem_LoadGroup(o) == 0) return FALSE;
    } else {
        o->heapLevel = 255;
    }
    o->unk_10 = a;
    o->unk_14 = b;
    NNS_SndHandleInit(o->unk_20);
    NNS_SndHandleInit(o->unk_24);
    NNS_FndInitList(&o->list, 0);
    o->active = 1;
    return TRUE;
}
