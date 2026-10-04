// mwcc-flags: -nothumb -O4,p
#include "types.h"
#include "sys/Unk_Task.h"
#include "sys/Unk_Seq.h"
#include "snd/PlayCtx.h"
#include "sys/PrioNode.h"
#include "snd/SndSeSystemCfg.h"
#include "snd/SndSeBytes4.h"
#include "snd/BgmObj.h"
#include "snd/SndSeGroup.h"
#include "sys/FndList.h"
#include "sys/TaskList.h"
#include "sys/ListNode.h"
#include "sys/InfoList.h"
#include "snd/Player.h"







struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);


extern "C" {
void Fatal_Trap(void);
BOOL func_020e7968(List *list, ListNode *node);
BOOL func_020e7a10(List *list, ListNode *node, ListNode *after);
extern TaskNode *gTaskCurrentNode;
extern s32 gTaskPhase;
extern TaskList gTaskDrawList;
extern TaskList gTaskDeleteList;
extern TaskList gTaskCreateList;
extern TaskList gTaskExecuteList;
extern TaskList4 gProcTree;
extern const char *const sTaskPhaseNames[];
void *func_01ffcffc(void *);
extern void *gSndHeap;
extern void *gSndCaptureBuffer;
extern u8 gSndDefaultHandle[];
extern u8 data_021f5aac[];
extern u8 data_021f5a1c[];
void NNS_SndHandleInit(void *p);
void NNS_SndPlayerStopSeq(void *p, u32 x);
void func_0210cebc(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void NNS_SndArcPlayerStartSeqArc(void *a, u32 b, void *c);
void NNS_SndHeapLoadState(void *a, u32 b);
void *func_0210bd4c(void *a);
s32 NNS_SndArcLoadGroup(u32 a, void *b);
s32 NNS_SndHeapSaveState(void *a);
void *NNS_SndHeapAlloc(void *a, u32 b, void (*c)(void), u32 d, u32 e);
void *NNS_SndHeapCreate(u32 a, u32 b);
void NNS_SndArcInit(void *a, u32 b, void *c, u32 d);
void NNS_SndArcInitOnMemory(void *a, u32 b);
s32 NNS_SndArcPlayerSetup(void *a);
void NNS_SndInit(void);
void func_0210ef44(u32 a, u32 b, u32 c);
void NNS_FndInitList(void *list, u16 offset);
void NNS_SndHandleReleaseSeq(void *p);
s32 NNS_SndMain(void);
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
InfoB *func_0210b8a0(u32 a, u32 b);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void func_0210a1e8(void *p, s32 v);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 v);
void func_0210a148(void *p, u32 a, u32 b);
void NNS_SndPlayerSetTrackPitch(void *p, u32 a, s32 b);
u64 OS_GetTick(void);
u32 SndVoice_GetSyllable(u32 a, u32 b);
u32 SndMgr_GetVoiceSeqIndex(BgmObj *o, u32 id);
s32 SndMgr_ClampVolume(BgmObj *o, s32 v);
void SndMgr_PlayVoice(BgmObj *o, u32 a, s32 b, s32 c);
void SndMgr_PlaySe(void *p, u32 v);
extern u8 gSndMgr[];
extern u8 data_021f5b64, data_021f5b60, data_021f5b48, data_021f5b58, data_021f5b54, data_021f5b4c, data_021f5b50;
extern u8 data_021f5b6c, data_021f5b68, sVoicePendingVolume;
extern u16 sVoicePendingSyllable, data_021f5b74, data_021f5b78;
extern s32 sVoicePendingPitch;
extern Cfg4 gSndSeSystem;
void *NNS_FndGetPrevListObject(void *list, void *obj);
void *NNS_FndGetNextListObject(void *list, void *obj);
void NNS_FndRemoveListObject(void *list, void *obj);
void NNS_FndAppendListObject(void *list, void *obj);

extern s32 (*gSndListenerDistanceCallback)(PlayCtx *);
extern s32 (*gSndListenerVolumeCallback)(PlayCtx *);
extern s32 (*gSndListenerPanCallback)(PlayCtx *);
extern u16 gSndPanTrackMask;
void SndSeGroup_StartVoice(Group *g, s32 i, s32 v);
void SndSeGroup_ApplyVoiceParams(Group *g, s32 i);
}




















// PROTOS-BEGIN
extern "C" {
BOOL func_020ed54c(TaskList *l);
void Task_RunDrawPhase(void);
void Task_RunAllPhases(void);
BOOL func_020ed764(TaskList4 *l);
s16 func_020ed81c(Unk_Seq *o, s32 loop);
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

extern "C" s16 func_020ed81c(Unk_Seq *o, s32 loop) {
    if (o->cmds == NULL || o->state == 2) return 2;
    while (((u32 *)o->cmds)[o->cmdIndex] != 0) {
        o->state = o->vfunc_08(o->cmds[o->cmdIndex]);
        if (o->state != 2) break;
        o->cmdIndex++;
        o->unk_12 = 0;
        if (loop == 0) break;
    }
    return o->state;
}
