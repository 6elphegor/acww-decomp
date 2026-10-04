#include "types.h"
#include "gfx/VecFx32.h"
#include "room/FtrActorTable.h"


extern "C" s32 Snowball_FindByParam(s32 a);
extern "C" s32 RoomBoardSign_GetByIndex(s32 a);
extern "C" s32 RoomTelephone_GetInstance(void);
extern "C" s32 RecycleBox_GetInstance(void);
extern "C" s32 MuseumExhibitInfo_GetByIndex(s32 a);
extern "C" s32 Atm_GetInstance(void);
extern "C" s32 VillagerBoard_Get(s32 a);
extern "C" s32 FtrActorTable_GetInstance(void);
extern "C" s32 BuildingList_GetAt(s32 a);
extern "C" s32 NpcRegistry_FindSpNpc(void);
extern "C" s32 NpcRegistry_FindVillager(void);
extern "C" s32 PlayerActor_GetCharacter(void);
extern "C" BOOL TouchPickKind_HasTarget(u8 v);


extern "C" u8 gFieldSceneKind;
extern "C" u8 gTouchPrevHeld;
extern "C" u8 gTouchPrevChanged;

inline BOOL IsMode0() { return gFieldSceneKind == 0; }
inline BOOL IsBoth() { return gTouchPrevHeld && gTouchPrevChanged; }
inline BOOL IsMode1() { return gFieldSceneKind == 1; }

extern "C" BOOL TouchPickResult_GetTarget(u8 *obj, VecFx32 *out, s32 *a, u8 *b);
extern "C" s32 TouchPick_GetTargetObject(s32 a, s32 *pa, u8 *pb);
extern "C" s32 TouchPick_GetTappedObject(s32 a, s32 *pa, u8 *pb);
extern "C" s32 TouchTarget_ResolveNone(void);
extern "C" s32 TouchTarget_ResolvePlayer(void);
extern "C" s32 TouchTarget_ResolveVillager(void);
extern "C" s32 TouchTarget_ResolveSpNpc(void);
extern "C" s32 TouchTarget_ResolveBuilding(s32 a);
extern "C" s32 TouchTarget_ResolveBuildingAlt(s32 a);
extern "C" s32 TouchTarget_ResolveFurniture(s32 a);
extern "C" s32 TouchTarget_ResolveVillagerBoard(s32 a);
extern "C" s32 TouchTarget_ResolveAtm(void);
extern "C" s32 TouchTarget_ResolveMuseumInfo(s32 a);
extern "C" s32 TouchTarget_ResolveRecycleBox(void);
extern "C" s32 TouchTarget_ResolvePhone(void);
extern "C" s32 TouchTarget_ResolveBoardSign(s32 a);
extern "C" s32 TouchTarget_ResolveSnowball(s32 a);
extern "C" s32 TouchTarget_Resolve(s32 idx, s32 arg);

typedef s32 (*TouchTargetResolver)(s32);
#define FN(f) ((TouchTargetResolver)(f))

extern "C" TouchTargetResolver sTouchTargetResolvers[23];
extern "C" TouchTargetResolver sTouchTargetResolvers[23] = {
    FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolvePlayer), FN(TouchTarget_ResolveVillager), FN(TouchTarget_ResolveSpNpc),
    FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolveBuildingAlt), FN(TouchTarget_ResolveBuilding),
    FN(TouchTarget_ResolveFurniture), FN(TouchTarget_ResolveVillagerBoard), FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolveAtm),
    FN(TouchTarget_ResolveRecycleBox), FN(TouchTarget_ResolvePhone), FN(TouchTarget_ResolveMuseumInfo), FN(TouchTarget_ResolveFurniture),
    FN(TouchTarget_ResolveBoardSign), FN(TouchTarget_ResolveSnowball), FN(TouchTarget_ResolveSnowball), FN(TouchTarget_ResolveNone),
    FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolveNone), FN(TouchTarget_ResolveNone),
};

extern "C" BOOL TouchPickResult_GetTarget(u8 *obj, VecFx32 *out, s32 *a, u8 *b) {
    if (out) {
        out->x = *(s32 *)(obj + 0xc);
        out->y = *(s32 *)(obj + 0x10);
        out->z = *(s32 *)(obj + 0x14);
    }
    if (a) {
        *a = obj[0x18];
    }
    if (b) {
        *b = obj[0x19];
    }
    return TouchPickKind_HasTarget(obj[0x18]);
}

extern "C" s32 TouchPick_GetTargetObject(s32 a, s32 *pa, u8 *pb) {
    u8 tb;
    s32 ta;
    VecFx32 v;
    if (pa == NULL) {
        pa = &ta;
    }
    if (pb == NULL) {
        pb = &tb;
    }
    if (TouchPickResult_GetTarget((u8 *)a, &v, pa, pb)) {
        return TouchTarget_Resolve(*pa, *pb);
    }
    return 0;
}

extern "C" s32 TouchPick_GetTappedObject(s32 a, s32 *pa, u8 *pb) {
    if (IsBoth()) {
        return TouchPick_GetTargetObject(a, pa, pb);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveNone(void) { return 0; }

extern "C" s32 TouchTarget_ResolvePlayer(void) { return PlayerActor_GetCharacter(); }

extern "C" s32 TouchTarget_ResolveVillager(void) { return NpcRegistry_FindVillager(); }

extern "C" s32 TouchTarget_ResolveSpNpc(void) { return NpcRegistry_FindSpNpc(); }

extern "C" s32 TouchTarget_ResolveBuilding(s32 a) {
    if (IsMode0()) {
        return BuildingList_GetAt(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveBuildingAlt(s32 a) { return TouchTarget_ResolveBuilding(a); }

extern "C" s32 TouchTarget_ResolveFurniture(s32 a) {
    if (IsMode1()) {
        return (s32)((FtrActorTable *)FtrActorTable_GetInstance())->get(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveVillagerBoard(s32 a) {
    if (IsMode0()) {
        return VillagerBoard_Get(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveAtm(void) {
    if (IsMode1()) {
        return Atm_GetInstance();
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveMuseumInfo(s32 a) {
    if (IsMode1()) {
        return MuseumExhibitInfo_GetByIndex(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveRecycleBox(void) {
    if (IsMode1()) {
        return RecycleBox_GetInstance();
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolvePhone(void) {
    if (IsMode1()) {
        return RoomTelephone_GetInstance();
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveBoardSign(s32 a) {
    if (IsMode1()) {
        return RoomBoardSign_GetByIndex(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_ResolveSnowball(s32 a) {
    if (IsMode0()) {
        return Snowball_FindByParam(a);
    }
    return 0;
}

extern "C" s32 TouchTarget_Resolve(s32 idx, s32 arg) {
    if (idx < 0x17) {
        return sTouchTargetResolvers[idx](arg);
    }
    return 0;
}

