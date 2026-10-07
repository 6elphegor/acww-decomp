#include "types.h"
#include "gfx/VecFx32.h"
#include "net/CommManager.h"
#include "save/TownExchangeRecord.h"
#include "ui/HudController.h"
#define PROTO_LOCAL_CommSub_RecvTownTune  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_Melody_Pack  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gMelodyEditPattern  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_02065330.h"
#include "proto/main/unk_0206d988.h"
#include "proto/main/unk_0206f4f0.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_02089fbc.h"
#include "proto/main/unk_0208f0b0.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02095cdc.h"
#include "proto/main/unk_02096c10.h"
#include "proto/ov003/unk_ov003_0221ffb8.h"
#include "proto/ov003/unk_ov003_02225800.h"

// U119: network message handlers 0x0206f4f0-0x0206f804 (the handler table sCommSubHandlers is in the next unit)


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

s32 MI_CpuCopy8(void *src, void *dst, u32 n);
void Melody_Pack(void *a, void *b);
void SaveVillagers_ClearTuneRequester(void *a);
s32 BottleThrow_SetTarget(void *a, u8 b);

void CommSub_RecvTownTune(u8 *p);
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
    VecFx32 pos;
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
    ((TownExchangeRecord *)(g))->resetCounter();
    ((TownExchangeRecord *)(g))->setUnkFlag(0);
    Heap_Free(heap, buf);
}

extern "C" void CommSub_ClearBottleLetter() {
    Letter_Clear(BottleLetterRecord_GetLetter(data_021eceac));
}

extern "C" u8 CommSub_GetPostReply() { return sCommSubPostReply; }

extern "C" void CommSub_SetPostReply(u8 v) { sCommSubPostReply = v; }

extern "C" void CommSub_Send(u32 a, u32 b, ...) {
    void *g = gCommManager;
    ((CommManager *)(g))->beginRecord();
    ((CommManager *)(g))->writeRecord((u8 *)(&a), 1);
    ((CommManager *)(g))->endRecord(0x16, b);
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
    ((HudCountdown *)(r))->start(sCommCountdownKinds[x], 0);
}

extern "C" void CommSub_RecvCountdownRequest(u8 *p) {
    s32 i = p[0] - 0xd;
    if (i == 0) {
        if (!((HudCountdown *)(Hud_GetCountdown()))->isStopped()) {
            HudCountdown_StartWithSe(i);
            CommSub_Send(0x12, 4);
        }
    } else {
        if (((HudCountdown *)(Hud_GetCountdown()))->isStopped()) {
            HudCountdown_StartWithSe(i);
            CommSub_Send((u8)(i + 0x12), 4);
        }
    }
}
