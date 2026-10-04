// mwcc-flags: -nothumb -O4,p
// In-house BGM controller SndMgr_PlayTalkVoice, autoload_2 0x020ee98c-0x020ef150. C++, mwcc 1.2/base -O4,p.
// Header = G004_all_best.cpp prototypes (SndMgr_GetVoiceSeqIndex now takes its real second argument).
#include "types.h"
#include "sys/Unk_Task.h"
#include "sys/Unk_Seq.h"

struct ListNode {
    ListNode *prev;
    ListNode *next;
};
struct List {
    ListNode *head;
    ListNode *tail;
};

struct NodeInfo {
    u8 pad0[4];
    u32 unk_04;
    u8 pad1[4];
    u16 unk_0c;
};
struct InfoNode {
    InfoNode *unk_00;
    InfoNode *unk_04;
    NodeInfo *unk_08;
};
struct PrioNode {
    PrioNode *unk_00;
    PrioNode *unk_04;
    void *unk_08;
    u16 unk_0c;
};
struct InfoList {
    InfoNode *head;
};

typedef void (Unk_Task::*TaskFn)();

struct TaskNode {
    TaskNode *unk_00;
    TaskNode *unk_04;
    Unk_Task *unk_08;
};
struct TaskNode10 {
    u8 pad[0x10];
    Unk_Task *unk_10;
};
struct TaskList4 {
    TaskNode10 *head;
    TaskFn fn;
};
struct TaskList {
    TaskNode *unk_00;
    u32 tail;
    TaskFn unk_08;
};


struct Ent {
    /* 0x00 */ void *handle;
    /* 0x04 */ s16 trackPitch;
    /* 0x06 */ u16 index;
    /* 0x08 */ u8 seqArc;
    /* 0x09 */ u8 flags;
    /* 0x0a */ u8 trackVolume;
    /* 0x0b */ u8 pad;
};

struct Group;
typedef void (*GroupFn)(Group *g, s32 i, s32 v);
struct Group {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ Ent voices[3];
    /* 0x2c */ GroupFn startVoiceFn;
    /* 0x30 */ GroupFn applyParamsFn;
    /* 0x34 */ u16 flags;
    /* 0x36 */ u8 numVoices;
};

struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};
struct PlayCtx {
    /* 0x00 */ Group *group;
    /* 0x04 */ void *source;
    /* 0x08 */ u8 pad[8];
    /* 0x10 */ s32 distance;
    /* 0x14 */ s32 volume;
    /* 0x18 */ s32 pan;
    /* 0x1c */ s32 baseVolume;
    /* 0x20 */ s32 unk_20;
};
struct InfoB {
    u8 pad[4];
    u8 unk_04;
};
struct Cfg4 {
    s32 unk_00, unk_04, unk_08, active;
};
struct Bytes4 {
    u8 b0, b1, b2, b3;
};
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 active;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 unk_15;
    /* 0x1c */ u32 heapLevel;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

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
struct BgmObj {
    u8 pad[0x44];
    s32 voiceType;
};
u64 OS_GetTick(void);
u32 SndVoice_GetSyllable(u32 a, u32 b);
u32 SndMgr_GetVoiceSeqIndex(BgmObj *o, u32 id); // BGM id -> sequence number for the object mode
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


extern "C" void SndMgr_PlayTalkVoice(BgmObj *o, s32 mode, u32 kind, u32 a, u32 b) {
    s32 z;
    s32 y;
    s32 x;
    s32 v;
    u32 t;
    u32 m;
    u32 r;
    if (o->voiceType == 5) Fatal_Trap();
    z = 0;
    switch (mode) {
    case 0:
        if (a == 37) return;
        if (b == 37) return;
        if (a == 39 || b == 39) {
            SndMgr_PlaySe(gSndMgr, 44);
            goto tail;
        }
        y = z;
        x = z;
        switch (kind) {
        case 0:
            t = data_021f5b64;
            if (t == 4) {
                if (data_021f5b60 == 1) {
                    data_021f5b60 = 0;
                } else {
                    data_021f5b60 = 1;
                }
            }
            m = data_021f5b60;
            if (m == 1) {
                data_021f5b48 += 1;
                y = data_021f5b48 * 40;
                if (y > 160) y = 160;
            }
            if (t > 4 && m == 1) {
                y -= (t - 4) << 5;
                if (y < 96) y = 96;
            }
            if (a == 16 || b == 16) {
                data_021f5b58 += 1;
            } else {
                data_021f5b58 = 0;
            }
            if (data_021f5b58 >= 2) {
                y = 172;
                x = 20;
            }
            break;
        case 1:
            if (data_021f5b54 != 0) {
                data_021f5b54 -= 1;
            } else {
                data_021f5b54 = (u8)(((u8)OS_GetTick()) >> 6) + 10;
            }
            switch (data_021f5b54) {
            case 0:
            case 8:
                y = 240;
                x = 125;
                break;
            case 1:
            case 9:
                y = 180;
                x = 110;
                break;
            case 2:
            case 10:
                y = 150;
                x = 90;
                break;
            case 4:
            case 12:
                y = 190;
                x = 125;
                break;
            case 5:
            case 13:
                y = 120;
                x = 110;
                break;
            case 6:
            case 14:
                y = 90;
                x = y;
                break;
            default:
                y = -77;
                x = 105;
                break;
            }
            break;
        case 2:
            r = data_021f5b54;
            if (r == 0) {
                data_021f5b4c = (u8)(((u8)OS_GetTick()) >> 6) + 14;
                data_021f5b54 = 1;
            } else if (r == data_021f5b4c) {
                data_021f5b54 = 0;
                if (data_021f5b50 == 0) {
                    data_021f5b50 = 1;
                } else {
                    data_021f5b50 = 0;
                }
            } else {
                data_021f5b54 = r + 1;
            }
            r = data_021f5b50;
            if (r == 0) {
                y = -(data_021f5b54 << 3);
            } else {
                y = 300 - (data_021f5b54 << 3);
            }
            if (r == 0) {
                x = (u8)(-(data_021f5b54 << 2));
            } else {
                x = (u8)(20 - (data_021f5b54 << 2));
            }
            if (data_021f5b6c == 0) data_021f5b54 = 1;
            break;
        case 3:
            if (data_021f5b54 != 0) {
                data_021f5b54 -= 1;
            } else {
                data_021f5b54 = (u8)(((u8)OS_GetTick()) >> 6) + 10;
            }
            switch (data_021f5b54) {
            case 0:
            case 8:
                y = 90;
                x = 100;
                break;
            case 1:
            case 9:
                y = 30;
                x = 85;
                break;
            case 2:
            case 10:
                y = 0;
                x = 65;
                break;
            case 4:
            case 12:
                y = 40;
                x = 100;
                break;
            case 5:
            case 13:
                y = -30;
                x = 85;
                break;
            case 6:
            case 14:
                y = -60;
                x = 65;
                break;
            default:
                y = -227;
                x = 80;
                break;
            }
            break;
        case 4:
            t = data_021f5b64;
            if (t == 4) {
                if (data_021f5b60 == 1) {
                    data_021f5b60 = 0;
                } else {
                    data_021f5b60 = 1;
                }
            }
            m = data_021f5b60;
            if (m == 1) {
                data_021f5b48 += 1;
                y = data_021f5b48 * 40;
                if (y > 160) y = 160;
            }
            if (t > 4 && m == 1) {
                y -= (t - 4) << 5;
                if (y < 96) y = 96;
            }
            if (a == 16 || b == 16) {
                data_021f5b58 += 1;
            } else {
                data_021f5b58 = 0;
            }
            if (data_021f5b58 >= 2) {
                y = 172;
                x = 20;
            }
            y += 128;
            break;
        }
        z += y;
        v = (u8)(x + 80);
        if (a == 0 || a == 38 || a == 39 || a == 40 || a == 41 || b == 0 || (u16)(b + 0xffda) <= 3) {
            data_021f5b6c = 0;
            data_021f5b68 = 0;
            data_021f5b64 = 0;
        }
        if (a == 42 || b == 42 || a == 43 || b == 43) {
            data_021f5b68 += 1;
            data_021f5b64 = 0;
        }
        data_021f5b64 += 1;
        data_021f5b6c += 1;
        if (a == 40 || a == 41 || a == 38) {
            if (a == 40) {
                sVoicePendingSyllable = data_021f5b74;
                z = 384;
                v = 110;
            }
            if (a == 41) {
                sVoicePendingSyllable = data_021f5b74;
                z = 256;
                v = 127;
            }
            m = sVoicePendingSyllable;
            if (a == 38) {
                v = 90;
                z = -128;
            }
            sVoicePendingVolume = v;
            sVoicePendingPitch = z;
            if (m != 0) {
                u32 id = SndMgr_GetVoiceSeqIndex(o, m);
                SndMgr_PlayVoice(o, (u16)(id + 1), SndMgr_ClampVolume(o, v), z);
            }
            sVoicePendingSyllable = 0;
            return;
        } else if (b == 40 || b == 41 || b == 38) {
            m = sVoicePendingSyllable;
            if (b == 40) {
                z = 384;
                v = 110;
            }
            if (b == 41) {
                z = 256;
                v = 127;
            }
            if (b == 38) {
                v = 90;
                z = -128;
            }
            sVoicePendingVolume = v;
            sVoicePendingPitch = z;
            if (m != 0) {
                u32 id = SndMgr_GetVoiceSeqIndex(o, m);
                SndMgr_PlayVoice(o, (u16)(id + 1), SndMgr_ClampVolume(o, v), z);
            }
            sVoicePendingSyllable = 0;
            t = SndVoice_GetSyllable(a, b);
            if (t != 95) sVoicePendingSyllable = t;
            return;
        } else {
            t = SndVoice_GetSyllable(a, b);
            if (t == 95) goto tail;
            sVoicePendingSyllable = t;
            sVoicePendingVolume = v;
            sVoicePendingPitch = z;
        }
tail:
        data_021f5b78 = a;
        data_021f5b74 = b;
        return;
    case 1:
        SndMgr_PlaySe(gSndMgr, 44);
        break;
    case 2:
        break;
    }
}

