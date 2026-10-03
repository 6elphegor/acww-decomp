#include "types.h"

// U119: network message handlers 0x0206f4f0-0x0206f804 (the handler table sCommSubHandlers is in the next unit)

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u32 gMelodyEditPattern[];
extern u32 gSaveTownTune[];
extern u32 gSaveVillagers[];
extern void *gCurrentHeap;
extern void *gCommManager;
extern u8 data_021eceac[];
extern u8 data_021e7f8c[];
extern u8 gSaveLostAndFound[];
extern u8 gSaveRecycleBin[];
extern u8 gFieldSceneKind;
extern u32 data_020c7c1c;

s32 Snd_PlaySe(u32 a);
void *Hud_GetCountdown();
s32 _ZN12HudCountdown5startEii(void *a, u32 b, u32 c);
BOOL _ZN12HudCountdown9isStoppedEv(void *a);
s32 MI_CpuCopy8(void *src, void *dst, u32 n);
void Melody_Pack(void *a, void *b);
void Melody_ApplyEditPattern();
void SaveVillagers_ClearTuneRequester(void *a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
s32 LetterDelivery_QueueOutgoing(void *obj, s32 v);
BOOL LetterDelivery_HasFreeOutgoingSlot(void);
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *d, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
void BottleLetterRecord_GetLetter(void *p);
void Letter_Clear();
void *TownExchange_GetLetter(void *p);
void Letter_Copy(void *p, void *q);
void _ZN18TownExchangeRecord12resetCounterEv(void *p);
void _ZN18TownExchangeRecord10setUnkFlagEj(void *p, s32 v);
void NetBuf_UnpackPair20(void *a, void *b, void *c);
s32 FishCatch_StartRelease(u8 a, u32 b, void *c);
s32 BottleThrow_SetTarget(void *a, u8 b);
u8 *PlayerActor_GetActor(u8 x);
BOOL HeldInsect_GetStage(u8 x);
void HeldInsect_Start(u32 a, u8 b);
s32 HeldInsect_Release(u8 a, s32 b);
s32 Bbs_AddPost(void *p);

void CommSub_RecvCountdownRequest(u8 *p);
void HudCountdown_StartWithSe(u32 x);
void CommSub_RecvTownTune(u8 *p);
void CommSub_RecvPostReply(u8 *p);
void CommSub_RecvPostLetter(u8 *p, u32 code);
void CommSub_Send(u32 a, u32 b, ...);
void CommSub_SetPostReply(u8 v);
u8 CommSub_GetPostReply();
void CommSub_ClearBottleLetter();
void CommSub_RecvBottleLetter(u8 *p);
void CommSub_RecvItemList15(u8 *p);
void CommSub_RecvReleaseOrThrow(u8 *p, u32 id);
void CommSub_RecvInsectRelease(u8 *p, u32 id);
void CommSub_RecvBbsPost(u8 *p);
}

u8 sCommSubPostReply = 0x18;
u32 sCommCountdownKinds[5] = {0, 1, 2, 3, 4};

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" void CommSub_RecvBbsPost(u8 *p) {
    void *heap = gCurrentHeap;
    void *buf = Heap_AllocTail(heap, 0xc0);
    MI_CpuCopy8(p + 1, buf, 0xc0);
    Bbs_AddPost(buf);
    Heap_Free(heap, buf);
}

extern "C" void CommSub_RecvInsectRelease(u8 *p, u32 id) {
    if (Unk_0206f6fc_IsZero(gFieldSceneKind)) {
        u8 id8;
        s16 off;
        u8 *q;
        q = p + 1;
        id8 = id;
        off = (p[2] - 0x1e) * 0xb6;
        u8 *r = PlayerActor_GetActor(id8);
        if (r != NULL) {
            off = off + *(s16 *)(r + 0x8e);
            if (HeldInsect_GetStage(id8) == 0) {
                HeldInsect_Start(q[0], id8);
                HeldInsect_Release(id8, off);
            }
        }
    }
}

extern "C" void CommSub_RecvReleaseOrThrow(u8 *p, u32 id) {
    u8 buf[5];
    Unk_0206f6fc_Pos pos;
    if (Unk_0206f6fc_IsZero(gFieldSceneKind)) {
        u8 id8 = id;
        MI_CpuCopy8(p + 2, buf, 5);
        NetBuf_UnpackPair20(buf, &pos.x, &pos.z);
        pos.y = data_020c7c1c;
        if (p[0] == 2) {
            u32 v = p[1];
            u16 x;
            if (v < 0x38) {
                x = v + 0x12e8;
            } else {
                x = 0x12e8;
            }
            FishCatch_StartRelease(id8, x, &pos);
        } else {
            BottleThrow_SetTarget(&pos, id8);
        }
    }
}

extern "C" void CommSub_RecvItemList15(u8 *p) {
    u8 tmp[0x1e];
    MI_CpuCopy8(p + 1, tmp, 0x1e);
    switch (p[0]) {
    case 3:
        MI_CpuCopy8(tmp, gSaveLostAndFound, 0x1e);
        break;
    case 4:
        MI_CpuCopy8(tmp, gSaveRecycleBin, 0x1e);
        break;
    }
}

extern "C" void CommSub_RecvBottleLetter(u8 *p) {
    void *heap = gCurrentHeap;
    void *buf = Heap_AllocTail(heap, 0xf4);
    MI_CpuCopy8(p + 1, buf, 0xf4);
    u8 *const g = data_021e7f8c;
    void *t = TownExchange_GetLetter(g);
    Letter_Copy(t, buf);
    _ZN18TownExchangeRecord12resetCounterEv(g);
    _ZN18TownExchangeRecord10setUnkFlagEj(g, 0);
    Heap_Free(heap, buf);
}

extern "C" void CommSub_ClearBottleLetter() {
    BottleLetterRecord_GetLetter(data_021eceac);
    Letter_Clear();
}

extern "C" u8 CommSub_GetPostReply() { return sCommSubPostReply; }

extern "C" void CommSub_SetPostReply(u8 v) { sCommSubPostReply = v; }

extern "C" void CommSub_Send(u32 a, u32 b, ...) {
    void *g = gCommManager;
    _ZN11CommManager11beginRecordEv(g);
    _ZN11CommManager11writeRecordEPhj(g, &a, 1);
    _ZN11CommManager9endRecordEjj(g, 0x16, b);
}

extern "C" void CommSub_RecvPostLetter(u8 *p, u32 code) {
    void *heap = gCurrentHeap;
    void *buf = Heap_AllocTail(heap, 0xf4);
    s32 r = 0xb;
    MI_CpuCopy8(p + 1, buf, 0xf4);
    if (LetterDelivery_QueueOutgoing(buf, 1)) {
        if (LetterDelivery_HasFreeOutgoingSlot()) {
            r = 9;
        } else {
            r = 0xa;
        }
    }
    Heap_Free(heap, buf);
    CommSub_Send(r, code);
}

extern "C" void CommSub_RecvPostReply(u8 *p) { sCommSubPostReply = *p; }

extern "C" void CommSub_RecvTownTune(u8 *p) {
    MI_CpuCopy8(p + 1, gMelodyEditPattern, 0x10);
    Melody_Pack(gSaveTownTune, gMelodyEditPattern);
    Melody_ApplyEditPattern();
    SaveVillagers_ClearTuneRequester(gSaveVillagers);
}

extern "C" void HudCountdown_StartWithSe(u32 x) {
    if (x == 0) {
        Snd_PlaySe(0x67);
    } else {
        Snd_PlaySe(0x66);
    }
    void *r = Hud_GetCountdown();
    _ZN12HudCountdown5startEii(r, sCommCountdownKinds[x], 0);
}

extern "C" void CommSub_RecvCountdownRequest(u8 *p) {
    s32 i = p[0] - 0xd;
    if (i == 0) {
        if (!_ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
            HudCountdown_StartWithSe(i);
            CommSub_Send(0x12, 4);
        }
    } else {
        if (_ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
            HudCountdown_StartWithSe(i);
            CommSub_Send((u8)(i + 0x12), 4);
        }
    }
}
