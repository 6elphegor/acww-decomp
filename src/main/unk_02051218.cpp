#include "types.h"

extern "C" {
extern u8 sTextCharWidths[0xe0];
void MI_CpuFill8(void *dst, u32 value, u32 size);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern u8 gFieldSceneKind;
extern void *gSceneBlockMap;
extern u32 sSpotReserveResult;
extern void *gCommManager;
extern u8 sSpotReservations[];
extern u8 gSaveHouse[];

u32 Msg_DecodeGameChar(u8 *buf, u32 c);
u8 Msg_MeasureWidth(u8 *buf);
void *FtrActorGrid_GetInstance();
u8 *_ZN12FtrActorGrid8getActorEiii(void *p, s32 x, s32 y, s32 z);
void FtrActor_GetFtrIndex(void *p);
void *BlockMap_GetItemPtr(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 FtrInfo_GetDmaUnk04();
s32 Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
s32 func_02072e44(void *p);
s32 func_020729cc(void *p, s32 v);
void func_02052a70(void *p, s32 v);
void func_020728d4(void *p);
void func_02072824(void *p, s32 a, s32 b);
void func_020728a4(void *p, void *data, s32 size);
s32 Scene_GetCurrent();
s32 func_020529e4(void *p, s32 a, s32 b, void *c);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
s32 NetArea_IsLocalOwner();
void FtrSync_ToggleGyroidAt(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02060244(void *p, s32 a, s32 b);
void *BlockMap_GetForArea(s32 a);
s32 BlockMap_SetItemAtUnit(void *p, void *b, s32 c, s32 d, s32 e);

u32 Text_GetCharWidth(u32 c);
u32 SpotSync_GetReserveResult();
void SpotSync_RequestReserve(s32 *p);
void SpotSync_Release(void *p);
void FtrSync_RequestToggleGyroidAt(s32 a, s32 b, s32 c, s32 d);
void FtrSync_SendRoomLight(s32 a, s32 b, s32 c);
void FtrSync_ApplyRoomLight(s32 a, s32 b);

}

extern "C" void BedSpot_RequestApproach(s32 *p) { SpotSync_RequestReserve(p); }

extern "C" u32 BedSpot_GetApproachResult() { return SpotSync_GetReserveResult(); }

extern "C" void BedSpot_RequestGetOut(s32 *p) { SpotSync_RequestReserve(p); }

extern "C" u32 BedSpot_GetGetOutResult() { return SpotSync_GetReserveResult(); }

extern "C" void BedSpot_Release() { SpotSync_Release(0); }

extern "C" void BedSpot_RequestRoll(s32 *p) { SpotSync_RequestReserve(p); }

extern "C" u32 BedSpot_GetRollResult() { return SpotSync_GetReserveResult(); }

extern "C" BOOL Room_CanDropOnFurnitureAt(s32 x, s32 y) {
    BOOL r;
    if (gFieldSceneKind == 1 ? TRUE : FALSE) {
        void *p = gSceneBlockMap;
        u8 *q = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), x, y, 0);
        if (p != NULL && q != NULL) {
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 code;
            void *o = BlockMap_GetItemPtr(p, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            FtrActor_GetFtrIndex(q);
            if (FtrInfo_GetDmaUnk04() == 1 && o != NULL) {
                if (Item_IsFurniture(o) != 0) {
                    code = 0xfff1;
                    r = Item_GetFurnitureIndex(o) == Item_GetFurnitureIndex(&code) ? TRUE : FALSE;
                } else {
                    r = *(u16 *)o == 0xfff1 ? TRUE : FALSE;
                }
                if (r) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void Text_BuildCharWidthTable() {
    s32 i;
    u8 buf[12];
    for (i = 0; (u32)i < 0xe0; i++) {
        buf[Msg_DecodeGameChar(buf, (u8)i)] = 0;
        sTextCharWidths[i] = Msg_MeasureWidth(buf);
    }
}

extern "C" u32 Text_GetCharWidth(u32 c) {
    return sTextCharWidths[c];
}

extern "C" s32 Text_MeasureWidth(const u8 *p, s32 n) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        sum += Text_GetCharWidth(p[i]);
    }
    return sum;
}

extern "C" s32 Text_GetLineEnd(const u8 *p, s32 n, s32 k) {
    s32 i;
    for (i = 0; i < n; i++) {
        u8 c = p[i];
        if (c == 0) {
            return i;
        }
        if (c == 0x86) {
            return i + k;
        }
    }
    return i;
}

extern "C" s32 Text_GetTrimmedLength(const u8 *str, s32 len) {
    s32 i;
    s32 last = 0;
    for (i = 0; i < len; i++) {
        u8 c = str[i];
        if (c == 0) {
            return last;
        }
        if (c != 0x85) {
            last = i + 1;
        }
    }
    return last;
}

extern "C" s32 Text_GetLength(const u8 *str, s32 len) {
    s32 i;
    for (i = 0; i < len; i++) {
        if (str[i] == 0) {
            return i;
        }
    }
    return i;
}

extern "C" s32 Text_FitToWidth(const u8 *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4) {
    s32 width = 0;
    s32 i;
    s32 n = Text_GetLineEnd(str, maxLen, arg4);
    for (i = 0; i < n; i++) {
        width += Text_GetCharWidth(str[i]);
        if (width > maxWidth) {
            *outLen = i;
            return 1;
        }
    }
    *outLen = n;
    if (n == maxLen) {
        if (str[n - 1] == 0x86) {
            return 3;
        }
        return 2;
    }
    if (n == 0) {
        return 0;
    }
    if (str[n - 1] == 0x86) {
        return 3;
    }
    return 0;
}

extern "C" void Mem_Copy(const void *src, void *dst, u32 size) {
    MI_CpuCopy8(src, dst, size);
}

extern "C" void Mem_Clear(void *dst, u32 size) {
    MI_CpuFill8(dst, 0, size);
}

extern "C" BOOL Text_EqualsTrimmed(const u8 *a, const u8 *b, s32 len) {
    s32 n = Text_GetTrimmedLength(a, len);
    s32 i;
    if (n != Text_GetTrimmedLength(b, len)) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

u8 sTextCharWidths[0xe0];
