// mwcc-version: 1.2/sp2
// mwcc-flags: -str reuse
#include "types.h"
#include "actor/Unk_ov003_SceneEntry.h"
#include "game/Unk_ov003_Vec.h"
#include "talk/TalkWindowState.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/MsgRequest.h"
#include "talk/TalkMsgRequest.h"
#include "town/BuildingActor.h"











class Unk_020b1ddc;


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
    virtual char *vfunc_ac();

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

char *ShopBuilding::vfunc_ac() {
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
