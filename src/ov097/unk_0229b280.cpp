#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "menu/Unk_ov002_022013a0.h"
#undef postCreate
#undef vfunc_14

extern "C" {
s32 Snd_PlaySe(s32 a);
void Item_ToPlacedForm(u16 *out, u16 *in, s32 n);
s32 Item_IsFurniture(u16 *p);
s32 FieldAction_RequestDrop(s32 a, s32 b);
u16 *RoomWallFloor_SetWallpaper(void *a, s32 b, s32 c, s32 d);
u16 *RoomWallFloor_SetCarpet(void *a, s32 b, s32 c, s32 d);
u32 Room_CountOccupants();
s32 FtrMgr_FindPlacementForPlayer(void *out, void *in, s32 n);
s32 FtrMgr_SpawnFromArg(s32 p);
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
}

extern "C" CommManager *gCommManager;


class MenuSlideView {
public:
    MenuSlideView();
    ~MenuSlideView();
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 offset;
    /* 0x10 */ s32 extent;
    /* 0x14 */ s32 edgeDistance;
    /* 0x18 */ u8 direction;
};

class MenuProc : public GameProc {
public:
    MenuProc();
    virtual ~MenuProc();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL execWaitScreen();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    /* 0x50 */ Unk_ov002_022013a0 keyRepeat;
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ MenuSlideView slide;
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

// Vtable 0x0229aea8 (ov096 class; ov097 functions are free functions on it)
class PocketMenu : public MenuProc {
public:
    void requestCameraPop();

    /* 0x91 */ u8 unk_91[0x25];
    /* 0xb6 */ u8 actionTarget;
    /* 0xb7 */ u8 unk_b7[0xc4 - 0xb7];
    /* 0xc4 */ s32 fieldRequest;
    /* 0xc8 */ u8 unk_c8[0x27f0 - 0xc8];
    /* 0x27f0 */ u8 unk_27f0[0x114];
};

extern "C" {
void PocketMenu_ReturnToIdle(class PocketMenu *self);
void PocketMenu_ShowMessage(class PocketMenu *self, s32 a, s32 b, s32 c);
u16 PocketMenu_GetItem(class PocketMenu *self, u32 a);
void PocketMenu_SetSlotItem(class PocketMenu *self, u32 k, u32 x, u32 y);
void PocketMenu_ClearSlotItem(class PocketMenu *self, u32 a);
}

extern "C" BOOL PocketMenu_CanEditRoom();

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
            ChoiceIdList_Add(self->unk_27f0, 0xc, 0x13);
        } else if (x >= 0x1100 && x <= 0x1143) {
            ChoiceIdList_Add(self->unk_27f0, 0xb, 0x12);
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

