#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "game/Unk_02095774_Ent.h"
#include "net/PlayerNetSync.h"
#include "item/ItemPickSpec.h"








inline BOOL Unk_0209579c_IsTwo(u8 v) {
    if (v == 2) return TRUE;
    return FALSE;
}

inline u16 Unk_02095f38_F(u32 v) {
    if (v < 5) return (u16)(v + 0x1518);
    return 0x1518;
}

extern CommManager *gCommManager;
extern u32 sPlayerPosSyncVars[];
extern u32 sPlayerAngleSyncVars[];
extern u32 sPlayerStateSyncVars[];
extern u8 sThrownBottleReturnOdds[];
extern u8 gPlayerSessionTable[];
extern u8 data_021e7f8c[];
extern u8 data_021eceac[];
extern u8 gU8None[];
extern u8 data_020e1d68[];
extern Unk_02095f38_G data_021ed150;

extern "C" {
BOOL func_020729bc(CommManager *p, s32 v);
}

extern "C" {
u32 func_02072970(CommManager *p, u32 v);
}

extern "C" {
u32 _ZN11CommManager12isSlotActiveEi(CommManager *p, s32 v);
}

extern "C" {
u32 _ZN11CommManager7isMyAidEj(CommManager *p, s32 v);
}

extern "C" {
BOOL func_02072e44(CommManager *p);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
void NetBuf_UnpackPair20(u32 a, s32 *x, s32 *y);
}

extern "C" {
void CommRecord_UnpackSource(u32 a, u8 *b, s32 c);
}

extern "C" {
void CommSyncVar_SetVar(s32 a, void *b, s32 c, s32 d);
}

extern "C" {
s32 PlayerSessionTable_GetActor(void *p, s32 i);
}

extern "C" {
BOOL PlayerActor_GetSlotAction(s32 *out, s32 a, s32 idx);
}

extern "C" {
BOOL PlayerActor_GetSlotAngle(s16 *out, s32 a, s32 idx);
}

extern "C" {
u32 PlayerActor_GetNetStateVar(s32 idx);
}

extern "C" {
u32 PlayerActor_GetNetPosVar(s32 idx);
}

extern "C" {
Unk_02095774_Ent *PlayerActor_Get(s32 idx);
}

extern "C" {
BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx);
}

extern "C" {
s32 func_020a03f0();
}

extern "C" {
s32 Net_GetJoiningAid();
}

extern "C" {
s32 NetSession_GetLastSyncSlot();
}

extern "C" {
ProcBase *func_02002d3c(s32 a, s32 b);
}

extern "C" {
Unk_02095774_Ent *PlayerActor_GetActor(s32 idx);
}

extern "C" {
u32 PlayerSession_FindFreeGfxSlot();
}

extern "C" {
void PlayerSession_SetGfxSlot(s32 idx, u32 v);
}

extern "C" {
s32 PlayerActor_GetLocalSessionSlot();
}

extern "C" {
void PlayerActor_Spawn(s32 idx, void *pos, void *rot, u32 flags);
}

extern "C" {
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
}

extern "C" {
u8 *PlayerSession_GetLastScene(s32 idx);
}

extern "C" {
s32 *PlayerSession_GetLastAction(s32 idx);
}

extern "C" {
s32 *PlayerSession_GetLastPos(s32 idx);
}

extern "C" {
s16 *PlayerSession_GetLastAngle(s32 idx);
}

extern "C" {
void ProcBase_RequestDelete(void *p);
}

extern "C" {
u8 NetArea_GetSlotScene(s32 idx);
}

extern "C" {
void PlayerSession_RemovePitfallOnClimbOut(s32 *idx, u8 *b, s32 *v, s32 *c, s32 *d, s32 *e);
}

extern "C" {
s32 func_0208f1c0(void *p);
}

extern "C" {
void *TownExchange_GetLetter(void *p);
}

extern "C" {
s32 func_02065578(void *p);
}

extern "C" {
s32 func_0208f198(void *p);
}

extern "C" {
s32 func_0208f15c(void *p);
}

extern "C" {
s32 Random_GlobalBelow(u32 n);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void Letter_MarkSent(void *p);
}

extern "C" {
void *BottleLetterRecord_GetLetter(void *p);
}

extern "C" {
void Letter_Copy(void *p, void *q);
}

extern "C" {
void Letter_Clear(void *p);
}

extern "C" {
s32 BottleLetter_IsBottleInTown();
}

extern "C" {
s32 BottleLetter_PlaceBottle();
}

extern "C" {
s32 BottleLetter_CreateGameLetter(u8 *p);
}

extern "C" {
s32 func_02096e78(void *p);
}

extern "C" {
void func_02096f10(void *p, s32 v);
}

extern "C" {
Unk_02095dcc_Grid *TownBlockMap_Get();
}

extern "C" {
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void Town_GetUpdater();
}

extern "C" {
s32 Town_WashUpBottle();
}

extern "C" {
void Letter_ComposeBottleMail(void *a, void *b, void *c);
}

extern "C" {
void *Inventory_GetEmptyLetter();
}

extern "C" {
void *PlayerData_GetCurrent();
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
void Catalog_SetItem(void *a, u16 *b, s32 c, s32 d);
}

extern "C" {
void CommSub_Send(s32 a, s32 b);
}

extern "C" {
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
void ItemPick_FromRange(u16 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}

extern "C" {
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

struct Unk_020e1cd0_Rec {
    GameProc *(*fn)();
    s16 a;
    s16 b;
};

static inline void Unk_0209579c_Set(s16 *d, s16 a, s16 b, s16 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

Unk_020e1cd0_Rec sPlayerNetSyncProfile = {&PlayerNetSync::create, 10, 14};

GameProc *PlayerNetSync::create() { return new PlayerNetSync(); }

PlayerNetSync::PlayerNetSync() {}

PlayerNetSync::~PlayerNetSync() {}

BOOL PlayerNetSync::onCreate() { return TRUE; }

BOOL PlayerNetSync::onExecute() {
    CommManager *g;
    s32 i, m1;
    s32 *p8;
    u8 *pc;
    s32 *r4;
    s16 *p10;
    s32 idx;
    u8 c;
    s16 s;
    s32 v, x, y;
    i = 3;
    g = gCommManager;
    m1 = -1;
    do {
        if (_ZN11CommManager12isSlotActiveEi(g, i) && !_ZN11CommManager7isMyAidEj(g, i)) {
            idx = i;
            c = NetArea_GetSlotScene(i);
            p8 = PlayerSession_GetLastAction(idx);
            pc = PlayerSession_GetLastScene(idx);
            r4 = PlayerSession_GetLastPos(idx);
            p10 = PlayerSession_GetLastAngle(idx);
            if (c != 0xc && c != 0xd && c != 0xe && c != 0x2f && c != 0x2e) {
                if (PlayerActor_GetSlotAction(&v, m1, idx)) {
                    if (PlayerActor_GetSlotPosXZ(&c, &x, &y, m1, idx)) {
                        if (PlayerActor_GetSlotAngle(&s, m1, idx)) {
                            PlayerSession_RemovePitfallOnClimbOut(&idx, &c, p8, &v, &x, &y);
                            *p8 = v;
                            *pc = c;
                            s32 yt = y;
                            r4[0] = x;
                            r4[1] = 0;
                            r4[2] = yt;
                            *p10 = s;
                        }
                    }
                }
            }
        }
        i--;
    } while (i >= 0);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
        Unk_02095774_Ent *o = PlayerActor_GetActor(4);
        if (o) {
            s32 n = g->localSlot;
            if (n < 4) {
                CommSyncVar_SetVar(n + 4, (u8 *)o + 0x8e, 0, 0);
                CommSyncVar_SetVar(n, o->position, 0, 0);
                CommSyncVar_SetVar(n + 8, 0, 0, 0);
            }
        }
    }
    return TRUE;
}

BOOL PlayerNetSync::onDraw() { return TRUE; }

BOOL PlayerNetSync::onDelete() { return TRUE; }

