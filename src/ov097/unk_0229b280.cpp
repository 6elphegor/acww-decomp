#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "menu/MenuSlide.h"
#include "menu/MenuProc.h"
#include "menu/PocketMenu.h"
#define PROTO_LOCAL_RoomWallFloor_SetCarpet  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_RoomWallFloor_SetWallpaper  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL__ZN10PocketMenu15actionUseCarpetEv  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL__ZN10PocketMenu18actionUseWallpaperEv  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_02060b9c.h"
#include "proto/main/unk_020b0e60.h"
#include "proto/ov002/unk_ov002_022013ac.h"
#include "proto/ov004/unk_ov004_02233074.h"
#include "proto/ov096/unk_02294c40.h"
#include "proto/ov097/unk_0229b280.h"

extern "C" {
s32 Item_IsFurniture(u16 *p);
s32 FieldAction_RequestDrop(s32 a, s32 b);
u16 *RoomWallFloor_SetWallpaper(void *a, s32 b, s32 c, s32 d);
u16 *RoomWallFloor_SetCarpet(void *a, s32 b, s32 c, s32 d);
}

extern "C" CommManager *gCommManager;





extern "C" {
}


static inline BOOL Unk_ov097_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" void _ZN10PocketMenu15actionUseCarpetEv(PocketMenu *self) {
    if (!PocketMenu_CanEditRoom()) {
        PocketMenu_ReturnToIdle(self);
        PocketMenu_ShowMessage(self, 23, 0xff, 1);
    } else {
    u16 v0;
    volatile u16 v1;
    u32 k = self->actionTarget;
    v0 = PocketMenu_GetItem(self, k);
    self->requestCameraPop();
    v1 = *RoomWallFloor_SetCarpet(&v0, 0, 1, 1);
    BOOL r = FALSE;
    u32 x = v1;
    u32 y = v1;
    if (y >= 0x1144 && x <= 0x1187) {
        r = TRUE;
    }
    if (r) {
        PocketMenu_SetSlotItem(self, k, x, 0);
    } else {
        PocketMenu_ClearSlotItem(self, k);
    }
    PocketMenu_ReturnToIdle(self);
    }
}

extern "C" void _ZN10PocketMenu18actionUseWallpaperEv(PocketMenu *self) {
    if (!PocketMenu_CanEditRoom()) {
        PocketMenu_ReturnToIdle(self);
        PocketMenu_ShowMessage(self, 24, 0xff, 1);
    } else {
    u16 v0;
    volatile u16 v1;
    u32 k = self->actionTarget;
    v0 = PocketMenu_GetItem(self, k);
    self->requestCameraPop();
    v1 = *RoomWallFloor_SetWallpaper(&v0, 0, 1, 1);
    BOOL r = FALSE;
    u32 x = v1;
    u32 y = v1;
    if (y >= 0x1100 && x <= 0x1143) {
        r = TRUE;
    }
    if (r) {
        PocketMenu_SetSlotItem(self, k, x, 0);
    } else {
        PocketMenu_ClearSlotItem(self, k);
    }
    PocketMenu_ReturnToIdle(self);
    }
}

extern "C" void PocketMenu_AddRoomItemOptions(PocketMenu *self, s32 a) {
    if (PocketMenu_CanEditRoom()) {
        volatile u16 v = a;
        BOOL r = FALSE;
        u32 x = v;
        u32 y = v;
        if (y >= 0x1144 && x <= 0x1187) {
            r = TRUE;
        }
        if (r) {
            ChoiceIdList_Add(self->optionList, 0xc, 0x13);
        } else if (x >= 0x1100 && x <= 0x1143) {
            ChoiceIdList_Add(self->optionList, 0xb, 0x12);
        }
    }
}

extern "C" s32 PocketMenu_RequestDropIndoor(PocketMenu *self, s32 a) {
    u16 in = a;
    u16 v;
    s32 out;
    Item_ToPlacedForm(&v, &in, 0);
    if (Item_IsFurniture(&v)) {
        switch (FtrMgr_FindPlacementForPlayer(&out, &v, 1)) {
        case 0:
            PocketMenu_ReturnToIdle(self);
            PocketMenu_ShowMessage(self, 3, 0xff, 0);
            Snd_PlaySe(0x73);
            return 0;
        case 1:
            PocketMenu_ReturnToIdle(self);
            PocketMenu_ShowMessage(self, 5, 0xff, 1);
            Snd_PlaySe(0x73);
            return 0;
        case 2:
            PocketMenu_ReturnToIdle(self);
            PocketMenu_ShowMessage(self, 3, 0xff, 0);
            Snd_PlaySe(0x73);
            return 0;
        default:
            FtrMgr_SpawnFromArg(out);
            break;
        }
    } else {
    self->fieldRequest = FieldAction_RequestDrop(gCommManager->myAid, a);
    if (self->fieldRequest == -1) {
        PocketMenu_ReturnToIdle(self);
        PocketMenu_ShowMessage(self, 3, 0xff, 0);
        Snd_PlaySe(0x73);
        return 0;
    }
    return 2;
    }
    return 1;
}

extern "C" BOOL PocketMenu_CanEditRoom() {
    CommManager *g = gCommManager;
    if (g->isOnline()) {
        if (g->myAid != 0 || Room_CountOccupants() > 1) {
            return FALSE;
        }
    } else if (Room_CountOccupants() > 1) {
        return FALSE;
    }
    return TRUE;
}

