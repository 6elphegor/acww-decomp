// mwcc-version: 1.2/sp2
// mwcc-flags: -str reuse
#include "types.h"
#include "gfx/Unk_ov003_Blk.h"
#include "field/Unk_ov003_Flags.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"











class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual VecFx32 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void onMessageEnd(u32 attr);
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 getBtaAnim(u32 a);
    void getResources();
    void updateMatrix();

    /* 0x12e */ u16 unk_12e;    // in TalkMsgRequest's tail padding (door-close SE delay in ov009)
    /* 0x130 */ u8 doorState;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 itemId;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *modelRes;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk baseMatrix;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 gridX;
    /* 0x22c */ u32 gridZ;
    /* 0x230 */ u8 exitDelay;
    /* 0x231 */ u8 colliderFlags;
    /* 0x232 */ Unk_ov003_Flags entryFlags;
    /* 0x233 */ u8 visitRefused;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 entryState;
    /* 0x27c */ u8 closedTalk;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 warpTimer;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *colliders;
    /* 0x28c */ u8 colliderCount;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec entryPos;
    /* 0x2b0 */
};

extern "C" {
extern u8 data_021ed104[];

s32 Item_GetNookShopLevel(void *p);
void *PlayerData_GetCurrent();
void Clock_GetDateTime(void *p);
void Clock_GetMinuteHour(void *p);
BOOL GameStart_IsActive();
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
BOOL Unk_02097ff4_testFlag(void *p, s32 a);
BOOL NookShop_IsClosedOn(void *p, void *q);
BOOL NookShop_IsReopenDueNow(void *p);
void *NookShop_GetRenovation(void *p);
BOOL NookShop_IsClosedTomorrow(void *p);
BOOL NookShop_IsClosedToday(void *p);
}


// ============================================================ class ShopBuilding
class ShopBuilding : public BuildingActor {
public:
    ShopBuilding();
    virtual ~ShopBuilding();

    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_98();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();

    BOOL isClosedToday();

    /* 0x2b0 */ s32 shopLevel;
};

extern "C" ShopBuilding *ShopBuilding_Create() {
    return new ShopBuilding;
}

ShopBuilding::ShopBuilding() {
}

ShopBuilding::~ShopBuilding() {
}

BOOL ShopBuilding::vfunc_70() {
    shopLevel = Item_GetNookShopLevel(&itemId);
    return TRUE;
}

char *ShopBuilding::vfunc_a4() {
    return BuildingActor::vfunc_a4();
}

char *ShopBuilding::vfunc_a8() {
    return BuildingActor::vfunc_a8();
}

BOOL ShopBuilding::vfunc_ac() {
    return BuildingActor::vfunc_ac();
}

void ShopBuilding::vfunc_78() {
    struct {
        s32 pad0, pad1;
        s32 a, b;
    } l;
    setFileName("obj_etc_closed");
    if (shopLevel == -1) {
        if (entryFlags.f1) {
            setFileName("obj_etc_error");
            msgIndex = 0;
        } else {
            msgIndex = 4;
        }
    } else {
        void *x = PlayerData_GetCurrent();
        if (GameStart_IsActive() || Unk_02097ff4_testFlag(x, 0x23)) {
            setFileName("sp_etc_sequence4");
            msgIndex = 0x15;
        } else if (isClosedToday()) {
            msgIndex = 7;
        } else if (entryFlags.f1) {
            setFileName("obj_etc_error");
            msgIndex = 0;
        } else {
            BOOL k = FALSE;
            u8 *p = data_021ed104;
            if (((u8 *)NookShop_GetRenovation(p))[3]) {
                l.a = 0;
                l.b = 0;
                Clock_GetDateTime(&l.a);
                if (NookShop_IsClosedTomorrow(p)) {
                    if (*((u8 *)&l + 10) > 0xc) {
                        k = TRUE;
                    }
                } else if (NookShop_IsClosedToday(p)) {
                    k = TRUE;
                } else if (NookShop_IsReopenDueNow(p)) {
                    k = TRUE;
                }
            }
            if (k) {
                msgIndex = 7;
            } else {
                msgIndex = shopLevel & 3;
            }
        }
    }
}

BOOL ShopBuilding::vfunc_8c() {
    struct {
        u8 a, b, c, d;
    } d;
    Clock_GetMinuteHour(&d);
    if (shopLevel == -1) {
        if (d.b >= 8 && d.b < 0x17) {
            return TRUE;
        }
        return FALSE;
    }
    void *x = PlayerData_GetCurrent();
    if (GameStart_IsActive() || (x && Unk_02097ff4_testFlag(x, 0x23))) {
        return FALSE;
    }
    if (x && Unk_02097ff4_testFlag(x, 1)) {
        return TRUE;
    }
    if (isClosedToday()) {
        return FALSE;
    }
    if (d.b >= 8) {
        if (d.b < 0x17) {
            goto range;
        }
    }
    return FALSE;
range:
    if (!NookShop_IsReopenDueNow(data_021ed104)) {
        return TRUE;
    }
    return FALSE;
}

BOOL ShopBuilding::isClosedToday() {
    if (shopLevel != -1) {
        struct {
            s32 a, b;
        } d;
        d.a = 0;
        d.b = 0;
        Clock_GetDateTime(&d);
        if (NookShop_IsClosedOn(data_021ed104, &d)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL ShopBuilding::vfunc_98() {
    return TRUE;
}

extern "C" Unk_ov003_SceneEntry sShopBuildingProfile = {(void *(*)())ShopBuilding_Create, 0x21, 0x27, 0, 0xc8000, 0x12c000, 0x258000};
