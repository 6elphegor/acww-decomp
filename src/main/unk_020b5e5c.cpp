#include "types.h"

struct Vec3 {
    s32 x, y, z;
};

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
extern "C" s32 func_020951ec(void);
extern "C" BOOL func_020b705c(u8 v);

class FtrActorTable {
public:
    s32 get(u32 a);
};

extern "C" u8 gFieldSceneKind;
extern "C" u8 gTouchPrevHeld;
extern "C" u8 gTouchPrevChanged;

inline BOOL IsMode0() { return gFieldSceneKind == 0; }
inline BOOL IsBoth() { return gTouchPrevHeld && gTouchPrevChanged; }
inline BOOL IsMode1() { return gFieldSceneKind == 1; }

extern "C" BOOL func_020b6080(u8 *obj, Vec3 *out, s32 *a, u8 *b);
extern "C" s32 func_020b6048(s32 a, s32 *pa, u8 *pb);
extern "C" s32 func_020b6014(s32 a, s32 *pa, u8 *pb);
extern "C" s32 func_020b6010(void);
extern "C" s32 func_020b6008(void);
extern "C" s32 func_020b6000(void);
extern "C" s32 func_020b5ff8(void);
extern "C" s32 func_020b5fd0(s32 a);
extern "C" s32 func_020b5fc8(s32 a);
extern "C" s32 func_020b5f98(s32 a);
extern "C" s32 func_020b5f70(s32 a);
extern "C" s32 func_020b5f48(void);
extern "C" s32 func_020b5f20(s32 a);
extern "C" s32 func_020b5ef8(void);
extern "C" s32 func_020b5ed0(void);
extern "C" s32 func_020b5ea8(s32 a);
extern "C" s32 func_020b5e80(s32 a);
extern "C" s32 func_020b5e5c(s32 idx, s32 arg);

typedef s32 (*Unk_020e4470_Fn)(s32);
#define FN(f) ((Unk_020e4470_Fn)(f))

extern "C" Unk_020e4470_Fn data_020e4470[23];
extern "C" Unk_020e4470_Fn data_020e4470[23] = {
    FN(func_020b6010), FN(func_020b6008), FN(func_020b6000), FN(func_020b5ff8),
    FN(func_020b6010), FN(func_020b6010), FN(func_020b5fc8), FN(func_020b5fd0),
    FN(func_020b5f98), FN(func_020b5f70), FN(func_020b6010), FN(func_020b5f48),
    FN(func_020b5ef8), FN(func_020b5ed0), FN(func_020b5f20), FN(func_020b5f98),
    FN(func_020b5ea8), FN(func_020b5e80), FN(func_020b5e80), FN(func_020b6010),
    FN(func_020b6010), FN(func_020b6010), FN(func_020b6010),
};

extern "C" BOOL func_020b6080(u8 *obj, Vec3 *out, s32 *a, u8 *b) {
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
    return func_020b705c(obj[0x18]);
}

extern "C" s32 func_020b6048(s32 a, s32 *pa, u8 *pb) {
    u8 tb;
    s32 ta;
    Vec3 v;
    if (pa == NULL) {
        pa = &ta;
    }
    if (pb == NULL) {
        pb = &tb;
    }
    if (func_020b6080((u8 *)a, &v, pa, pb)) {
        return func_020b5e5c(*pa, *pb);
    }
    return 0;
}

extern "C" s32 func_020b6014(s32 a, s32 *pa, u8 *pb) {
    if (IsBoth()) {
        return func_020b6048(a, pa, pb);
    }
    return 0;
}

extern "C" s32 func_020b6010(void) { return 0; }

extern "C" s32 func_020b6008(void) { return func_020951ec(); }

extern "C" s32 func_020b6000(void) { return NpcRegistry_FindVillager(); }

extern "C" s32 func_020b5ff8(void) { return NpcRegistry_FindSpNpc(); }

extern "C" s32 func_020b5fd0(s32 a) {
    if (IsMode0()) {
        return BuildingList_GetAt(a);
    }
    return 0;
}

extern "C" s32 func_020b5fc8(s32 a) { return func_020b5fd0(a); }

extern "C" s32 func_020b5f98(s32 a) {
    if (IsMode1()) {
        return ((FtrActorTable *)FtrActorTable_GetInstance())->get(a);
    }
    return 0;
}

extern "C" s32 func_020b5f70(s32 a) {
    if (IsMode0()) {
        return VillagerBoard_Get(a);
    }
    return 0;
}

extern "C" s32 func_020b5f48(void) {
    if (IsMode1()) {
        return Atm_GetInstance();
    }
    return 0;
}

extern "C" s32 func_020b5f20(s32 a) {
    if (IsMode1()) {
        return MuseumExhibitInfo_GetByIndex(a);
    }
    return 0;
}

extern "C" s32 func_020b5ef8(void) {
    if (IsMode1()) {
        return RecycleBox_GetInstance();
    }
    return 0;
}

extern "C" s32 func_020b5ed0(void) {
    if (IsMode1()) {
        return RoomTelephone_GetInstance();
    }
    return 0;
}

extern "C" s32 func_020b5ea8(s32 a) {
    if (IsMode1()) {
        return RoomBoardSign_GetByIndex(a);
    }
    return 0;
}

extern "C" s32 func_020b5e80(s32 a) {
    if (IsMode0()) {
        return Snowball_FindByParam(a);
    }
    return 0;
}

extern "C" s32 func_020b5e5c(s32 idx, s32 arg) {
    if (idx < 0x17) {
        return data_020e4470[idx](arg);
    }
    return 0;
}

