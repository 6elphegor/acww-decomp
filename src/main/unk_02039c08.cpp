#include "types.h"
#include "gfx/ViewFrustum.h"

struct Unk_02039cf4_Obj {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
s32 Random_GlobalBelow(s32 n);
void _ZN12ItemPickSpec3setEii(Unk_02039cf4_Obj *o, s32 a, s32 b);
void ItemPickSpec_Destruct(Unk_02039cf4_Obj *o);
void ItemPick_One(u16 *a, Unk_02039cf4_Obj *o, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL Item_GetIfNotCreature(u16 *a, u16 *b);
s32 MTX_MultVec43(void *v, void *m, void *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void VEC_CrossProduct(void *dst, void *a, void *b);
void VEC_Normalize(void *dst, void *src);
}

extern u16 gSaveLostAndFound[15];
extern u16 gSaveRecycleBin[15];
extern s16 data_02135f44[];

extern "C" BOOL RecycleBin_Set(u32 i, u16 v);
extern "C" u16 RecycleBin_Get(u32 i);


void ViewFrustum::calcPlanes() {
    s32 v[12];
    s32 idx = fovy >> 4;
    s32 s = FX_Div(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
    s32 y = func_01ffcb0c(nearClip, s);
    s32 x = func_01ffcb0c(aspect, y);
    v[0] = -x;
    v[1] = -y;
    v[2] = -nearClip;
    v[3] = -x;
    v[4] = y;
    v[5] = -nearClip;
    v[6] = x;
    v[7] = y;
    v[8] = -nearClip;
    v[9] = x;
    v[10] = -y;
    v[11] = -nearClip;
    VEC_CrossProduct(&v[3], &v[0], &leftPlane[0]);
    VEC_CrossProduct(&v[6], &v[3], &topPlane[0]);
    VEC_CrossProduct(&v[9], &v[6], &rightPlane[0]);
    VEC_CrossProduct(&v[0], &v[9], &bottomPlane[0]);
    VEC_Normalize(&leftPlane[0], &leftPlane[0]);
    VEC_Normalize(&topPlane[0], &topPlane[0]);
    VEC_Normalize(&rightPlane[0], &rightPlane[0]);
    VEC_Normalize(&bottomPlane[0], &bottomPlane[0]);
}

s32 ViewFrustum::testSphere(void *m, void *v, s32 r, s32 *out) {
    MTX_MultVec43(v, m, out);
    s32 t = -out[2];
    if (t < nearClip - r) {
        return 0x7fffffff;
    }
    if (t > farClip + r) {
        return 0x7fffffff;
    }
    {
        s32 a = func_01ffcb0c(out[2], leftPlane[2]);
        s32 b = func_01ffcb0c(out[0], leftPlane[0]);
        s32 c = func_01ffcb0c(out[1], leftPlane[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], topPlane[2]);
        s32 b = func_01ffcb0c(out[0], topPlane[0]);
        s32 c = func_01ffcb0c(out[1], topPlane[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], rightPlane[2]);
        s32 b = func_01ffcb0c(out[0], rightPlane[0]);
        s32 c = func_01ffcb0c(out[1], rightPlane[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], bottomPlane[2]);
        s32 b = func_01ffcb0c(out[0], bottomPlane[0]);
        s32 c = func_01ffcb0c(out[1], bottomPlane[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    return -out[2];
}

extern "C" void LostAndFound_Add(u16 v) {
    u16 *p = gSaveLostAndFound;
    s32 idx = 15;
    for (s32 i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            idx = i;
            i = 15;
        }
    }
    if (idx == 15) {
        for (idx = 0; idx < 14; idx++) {
            p[idx] = p[idx + 1];
        }
        idx = 14;
    }
    p[idx] = v;
}

extern "C" BOOL LostAndFound_HasAny() {
    s32 i;
    u16 *p = gSaveLostAndFound;
    for (i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 LostAndFound_Count() {
    s32 n = 0;
    u16 *p = gSaveLostAndFound;
    for (s32 i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            n++;
        }
    }
    return n;
}

extern "C" BOOL RecycleBin_Add(u16 v) {
    for (u32 i = 0; i < 15; i++) {
        if (RecycleBin_Get(i) == 0xfff1) {
            return RecycleBin_Set(i, v);
        }
    }
    return FALSE;
}

extern "C" u16 RecycleBin_Get(u32 i) {
    if (i < 15) {
        return gSaveRecycleBin[i];
    }
    return 0xfff1;
}

extern "C" BOOL RecycleBin_Set(u32 i, u16 v) {
    if (i < 15) {
        u16 t[2];
        t[0] = v;
        t[1] = 0xfff1;
        if (Item_GetIfNotCreature(&t[0], &t[1])) {
            gSaveRecycleBin[i] = t[1];
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void ChestStorage_Construct() {}

extern "C" void ChestStorage_Destruct() {}

extern "C" void ChestStorage_Clear(u16 *p) {
    for (s32 i = 0; i < 90; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void ChestStorage_GetItems() {}

extern "C" void LostAndFound_Construct() {}

extern "C" void LostAndFound_Destruct() {}

extern "C" void LostAndFound_Clear(u16 *p) {
    for (s32 i = 0; i < 15; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void LostAndFound_InitRandom(u16 *p) {
    for (s32 i = 0; i < 3; i++) {
        s32 tbl[3] = {1, 0, 2};
        u16 out[2];
        Unk_02039cf4_Obj o1;
        _ZN12ItemPickSpec3setEii(&o1, tbl[Random_GlobalBelow(3)], 0);
        ItemPick_One(out, &o1, 0, 0, 1, 1, 0);
        ItemPickSpec_Destruct(&o1);
        p[i] = out[0];
    }
}

extern "C" void LostAndFound_AddDailyItems(u16 *arr, s32 n) {
    s32 tbl[3] = {1, 0, 2};
    u32 out;
    Unk_02039cf4_Obj o1;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 15; i++) {
        if (arr[i] != 0xfff1) {
            cnt++;
        }
    }
    for (s32 k = 0; k < n; k++) {
        if (cnt >= 10) {
            break;
        }
        for (s32 j = 0; j < 15; j++) {
            u16 *e = &arr[j];
            if (*e == 0xfff1) {
                s32 r = Random_GlobalBelow(100);
                s32 idx = 0xff;
                if (r >= 50 && r < 100) {
                } else if (r >= 30 && r < 50) {
                    *e = 0x1566;
                    cnt++;
                } else if (r >= 20 && r < 30) {
                    idx = 0;
                } else if (r >= 10 && r < 20) {
                    idx = 1;
                } else if (r >= 0 && r < 10) {
                    idx = 2;
                }
                if (idx != 0xff) {
                    _ZN12ItemPickSpec3setEii(&o1, tbl[idx], 0);
                    ItemPick_One((u16 *)&out, &o1, 0, 0, 1, 1, 0);
                    ItemPickSpec_Destruct(&o1);
                    *e = *(u16 *)&out;
                    cnt++;
                }
                break;
            }
        }
    }
}
