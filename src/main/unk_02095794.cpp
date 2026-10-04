#include "types.h"
#include "Unk_020d8c7c.h"

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02095774_Ent {
    u8 pad_00[0x5c];
    s32 position[3];
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_0209579c_Rec {
    u8 pad_00[0xe];
    u8 state;
};

struct Unk_02095dcc_Grid {
    u8 pad_00[0xc];
    s32 unitsX;
    s32 unitsZ;
};

struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 listIndex;
    s32 itemClass;
};

struct Unk_0209579c_Pos {
    s32 x, y, z;
    Unk_0209579c_Pos() {}
};

struct Unk_0209579c_L {
    u8 a, b;
    s16 c;
    s16 r1[3];
    s16 pad;
    s32 v1, x1, y1;
    s16 r2[3];
    s16 r3[3];
    s32 v2, x2, y2;
};

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
struct Unk_02095f38_G {
    u8 pad_00[0x58];
    u32 unk_58;
};
extern Unk_02095f38_G data_021ed150;

extern "C" {
BOOL _ZN11CommManager11isLocalSlotEj(CommManager *p, s32 v);
}

extern "C" {
u32 func_02072970(CommManager *p, u32 v);
}

extern "C" {
u32 _ZN11CommManager12isSlotActiveEi(CommManager *p, s32 v);
}

extern "C" {
u32 func_020729cc(CommManager *p, s32 v);
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
Unk_0209579c_Rec *_ZN5Actor13findByProfileEjPS_(s32 a, s32 b);
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
void ItemPickSpec_Destruct(ItemPickSpec *o);
}

inline BOOL Unk_02095dcc_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

struct Unk_020e1c78_Rec {
    GameProc *(*fn)();
    s16 a;
    s16 b;
};

class RemotePlayerSpawner : public GameProc {
public:
    static GameProc *create();
    RemotePlayerSpawner();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~RemotePlayerSpawner();
};

class PlayerNetSync : public GameProc {
public:
    PlayerNetSync();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~PlayerNetSync();
};
static inline void Unk_0209579c_Set(s16 *d, s16 a, s16 b, s16 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

Unk_020e1c78_Rec sRemotePlayerSpawnerProfile = {&RemotePlayerSpawner::create, 8, 12};

GameProc *RemotePlayerSpawner::create() { return new RemotePlayerSpawner(); }

RemotePlayerSpawner::RemotePlayerSpawner() {}

RemotePlayerSpawner::~RemotePlayerSpawner() {}

BOOL RemotePlayerSpawner::vfunc_00() { return TRUE; }

BOOL RemotePlayerSpawner::onExecute() {
    CommManager *g = gCommManager;
    s32 mode = g->unk_64;
    u8 la, lb;
    s16 lc;
    s16 lr1[3];
    s32 lv1, lx1, ly1;
    s16 lr2[3], lr3[3];
    s32 lv2, lx2, ly2;
    Unk_0209579c_Pos p1, p2, p3;
    s32 ob;
    s32 i;
    s32 j;
    if (Scene_GetCurrent() == 0x2e) goto ret1;
    if (Scene_GetCurrent() == 0xd || Scene_GetCurrent() == 0x2f || Scene_GetCurrent() == 0xe) {
        if (func_020a03f0()) return TRUE;
        Unk_0209579c_Rec *rec = _ZN5Actor13findByProfileEjPS_(0x72, 0);
        if (rec == NULL) goto ret1;
        if (Unk_0209579c_IsTwo(rec->state)) goto ret1;
        if (Scene_GetCurrent() == 0xd || Scene_GetCurrent() == 0x2f) {
            mode = Net_GetJoiningAid();
        } else {
            mode = NetSession_GetLastSyncSlot();
        }
        if (mode >= 4) goto ret1;
        if (PlayerActor_GetActor(mode)) goto ret1;
        p1.x = 0;
        p1.y = 0;
        p1.z = 0;
        lr1[0] = 0;
        lr1[1] = 0;
        lr1[2] = 0;
        if (Scene_GetCurrent() == 0xd || Scene_GetCurrent() == 0x2f) {
            p1.x = 0x10000;
            p1.y = 2;
            p1.z = 0x5000;
            lr1[0] = 0;
            lr1[1] = 0;
            lr1[2] = 0;
        } else {
            p1.x = 0x10000;
            p1.y = 2;
            p1.z = 0x11800;
            lr1[0] = 0;
            lr1[1] = (s16)0x8000;
            lr1[2] = 0;
        }
        PlayerSession_SetGfxSlot(mode, PlayerSession_FindFreeGfxSlot());
        PlayerActor_Spawn(mode, &p1, lr1, 0x4000000);
        goto ret1;
    }
    if (!_ZN11CommManager12isSlotActiveEi(g, mode)) goto ret1;
    if (!PlayerActor_GetActor(4)) goto ret1;
    ob = PlayerActor_GetLocalSessionSlot();
    i = 0;
    do {
        if (!_ZN11CommManager11isLocalSlotEj(g, i) && _ZN11CommManager12isSlotActiveEi(g, i) && !PlayerActor_GetActor(i)) {
            if (PlayerActor_GetSlotAction(&lv1, -1, i) && lv1 < 0x93 && PlayerActor_GetSlotPosXZ(&la, &lx1, &ly1, -1, i) &&
                la == Scene_GetCurrent() && PlayerActor_GetSlotAngle(&lc, -1, i)) {
                p2.x = lx1;
                p2.y = 2;
                p2.z = ly1;
                Unk_0209579c_Set(lr2, 0, lc, 0);
                PlayerSession_SetGfxSlot(i, PlayerSession_FindFreeGfxSlot());
                PlayerActor_Spawn(i, &p2, lr2, 0x800000);
            } else if (PlayerActor_TestSlotFlag(0x1b, ob)) {
                u8 *bp = PlayerSession_GetLastScene(i);
                s32 *ip = PlayerSession_GetLastAction(i);
                if (*bp == Scene_GetCurrent() && *ip != 0x93) {
                    s32 *pp = PlayerSession_GetLastPos(i);
                    p3.x = pp[0];
                    p3.y = pp[1];
                    p3.z = pp[2];
                    Unk_0209579c_Set(lr3, 0, *PlayerSession_GetLastAngle(i), 0);
                    PlayerSession_SetGfxSlot(i, PlayerSession_FindFreeGfxSlot());
                    PlayerActor_Spawn(i, &p3, lr3, (*ip << 22) & 0x3fc00000);
                }
            }
        }
        i++;
    } while ((u32)i < 4);
    j = 0;
    do {
        if (!_ZN11CommManager11isLocalSlotEj(g, j) && !PlayerActor_TestSlotFlag(0x1b, ob)) {
            Unk_02095774_Ent *e = PlayerActor_GetActor(j);
            if (e) {
                if (!Unk_0209579c_IsTwo(((Unk_0209579c_Rec *)e)->state)) {
                    if (PlayerActor_GetSlotAction(&lv2, -1, j)) {
                        if (lv2 >= 0x93) {
                            ProcBase_RequestDelete(e);
                        } else if (PlayerActor_GetSlotPosXZ(&lb, &lx2, &ly2, -1, j)) {
                            if (lb != Scene_GetCurrent()) ProcBase_RequestDelete(e);
                        } else {
                            ProcBase_RequestDelete(e);
                        }
                    } else {
                        ProcBase_RequestDelete(e);
                    }
                }
            }
        }
        j++;
    } while ((u32)j < 4);
ret1:
    return TRUE;
}

BOOL RemotePlayerSpawner::onDraw() { return TRUE; }

BOOL RemotePlayerSpawner::vfunc_0c() { return TRUE; }

