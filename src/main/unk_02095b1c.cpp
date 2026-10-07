#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "town/TownBlockMap.h"
#include "game/Unk_02095774_Ent.h"
#include "net/PlayerNetSync.h"
#include "item/ItemPickSpec.h"
#include "sys/ProcProfile.h"
#define PROTO_LOCAL_PlayerSession_GetLastPos  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/main/unk_0203c23c.h"
#include "proto/main/unk_0206269c.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02065330.h"
#include "proto/main/unk_0206f4f0.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_0208f0b0.h"
#include "proto/main/unk_02093ff0.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02095cdc.h"
#include "proto/main/unk_02096c10.h"
#include "proto/main/unk_02097444.h"
#include "proto/main/unk_02098e90.h"
#include "proto/main/unk_0209eb94.h"
#include "proto/main/unk_020a427c.h"








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
extern SaveTownStateView data_021ed150;

extern "C" {
BOOL func_020729bc(CommManager *p, s32 v);
}

extern "C" {
u32 func_02072970(CommManager *p, u32 v);
}

extern "C" {
}

extern "C" {
}

extern "C" {
BOOL func_02072e44(CommManager *p);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
ProcBase *func_02002d3c(s32 a, s32 b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 *PlayerSession_GetLastPos(s32 idx);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 func_0208f1c0(void *p);
}

extern "C" {
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
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 func_02096e78(void *p);
}

extern "C" {
void func_02096f10(void *p, s32 v);
}

extern "C" {
TownBlockMap *TownBlockMap_Get();
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
}

extern "C" {
}

extern "C" {
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline void Unk_0209579c_Set(s16 *d, s16 a, s16 b, s16 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

ProcProfile sPlayerNetSyncProfile = {(void *(*)())&PlayerNetSync::create, 10, 14};

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
        if ((g)->isSlotActive(i) && !(g)->isMyAid(i)) {
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
    if ((gCommManager)->isSlotActive(gCommManager->myAid)) {
        Actor *o = PlayerActor_GetActor(4);
        if (o) {
            s32 n = g->localSlot;
            if (n < 4) {
                CommSyncVar_SetVar(n + 4, &o->rotY, 0, 0);
                CommSyncVar_SetVar(n, &o->position, 0, 0);
                CommSyncVar_SetVar(n + 8, 0, 0, 0);
            }
        }
    }
    return TRUE;
}

BOOL PlayerNetSync::onDraw() { return TRUE; }

BOOL PlayerNetSync::onDelete() { return TRUE; }

