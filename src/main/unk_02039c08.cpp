#include "types.h"

struct Unk_02039cf4_Obj {
    u32 unk_00;
    u32 unk_04;
};

extern "C" {
s32 func_02063b8c(s32 n);
void _ZN12ItemPickSpec3setEii(Unk_02039cf4_Obj *o, s32 a, s32 b);
void func_02063388(Unk_02039cf4_Obj *o);
void ItemPick_One(u16 *a, Unk_02039cf4_Obj *o, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL Item_GetIfNotCreature(u16 *a, u16 *b);
s32 MTX_MultVec43(void *v, void *m, void *out);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void VEC_CrossProduct(void *dst, void *a, void *b);
void VEC_Normalize(void *dst, void *src);
}

extern u16 data_021ed210[15];
extern u16 data_021ed22e[15];
extern s16 data_02135f44[];

extern "C" BOOL func_02039d94(u32 i, u16 v);
extern "C" u16 func_02039dd4(u32 i);

class ViewFrustum {
public:
    s32 testSphere(void *m, void *v, s32 r, s32 *out);
    void calcPlanes();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04[3];
    /* 0x10 */ s32 unk_10[3];
    /* 0x1c */ s32 unk_1c[3];
    /* 0x28 */ s32 unk_28[3];
    /* 0x34 */ s32 unk_34[6];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u16 unk_58;
};

void ViewFrustum::calcPlanes() {
    s32 v[12];
    s32 idx = unk_58 >> 4;
    s32 s = FX_Div(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
    s32 y = func_01ffcb0c(unk_50, s);
    s32 x = func_01ffcb0c(unk_4c, y);
    v[0] = -x;
    v[1] = -y;
    v[2] = -unk_50;
    v[3] = -x;
    v[4] = y;
    v[5] = -unk_50;
    v[6] = x;
    v[7] = y;
    v[8] = -unk_50;
    v[9] = x;
    v[10] = -y;
    v[11] = -unk_50;
    VEC_CrossProduct(&v[3], &v[0], &unk_04[0]);
    VEC_CrossProduct(&v[6], &v[3], &unk_10[0]);
    VEC_CrossProduct(&v[9], &v[6], &unk_1c[0]);
    VEC_CrossProduct(&v[0], &v[9], &unk_28[0]);
    VEC_Normalize(&unk_04[0], &unk_04[0]);
    VEC_Normalize(&unk_10[0], &unk_10[0]);
    VEC_Normalize(&unk_1c[0], &unk_1c[0]);
    VEC_Normalize(&unk_28[0], &unk_28[0]);
}

s32 ViewFrustum::testSphere(void *m, void *v, s32 r, s32 *out) {
    MTX_MultVec43(v, m, out);
    s32 t = -out[2];
    if (t < unk_50 - r) {
        return 0x7fffffff;
    }
    if (t > unk_54 + r) {
        return 0x7fffffff;
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_04[2]);
        s32 b = func_01ffcb0c(out[0], unk_04[0]);
        s32 c = func_01ffcb0c(out[1], unk_04[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_10[2]);
        s32 b = func_01ffcb0c(out[0], unk_10[0]);
        s32 c = func_01ffcb0c(out[1], unk_10[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_1c[2]);
        s32 b = func_01ffcb0c(out[0], unk_1c[0]);
        s32 c = func_01ffcb0c(out[1], unk_1c[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    {
        s32 a = func_01ffcb0c(out[2], unk_28[2]);
        s32 b = func_01ffcb0c(out[0], unk_28[0]);
        s32 c = func_01ffcb0c(out[1], unk_28[1]);
        if (a + (b + c) > r) {
            return 0x7fffffff;
        }
    }
    return -out[2];
}

extern "C" void func_02039e6c(u16 v) {
    u16 *p = data_021ed210;
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

extern "C" BOOL func_02039e44() {
    s32 i;
    u16 *p = data_021ed210;
    for (i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" s32 func_02039e1c() {
    s32 n = 0;
    u16 *p = data_021ed210;
    for (s32 i = 0; i < 15; i++) {
        if (p[i] != 0xfff1) {
            n++;
        }
    }
    return n;
}

extern "C" BOOL func_02039dec(u16 v) {
    for (u32 i = 0; i < 15; i++) {
        if (func_02039dd4(i) == 0xfff1) {
            return func_02039d94(i, v);
        }
    }
    return FALSE;
}

extern "C" u16 func_02039dd4(u32 i) {
    if (i < 15) {
        return data_021ed22e[i];
    }
    return 0xfff1;
}

extern "C" BOOL func_02039d94(u32 i, u16 v) {
    if (i < 15) {
        u16 t[2];
        t[0] = v;
        t[1] = 0xfff1;
        if (Item_GetIfNotCreature(&t[0], &t[1])) {
            data_021ed22e[i] = t[1];
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02039d90() {}

extern "C" void func_02039d8c() {}

extern "C" void func_02039d78(u16 *p) {
    for (s32 i = 0; i < 90; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039d74() {}

extern "C" void func_02039d70() {}

extern "C" void func_02039d6c() {}

extern "C" void func_02039d58(u16 *p) {
    for (s32 i = 0; i < 15; i++) {
        p[i] = 0xfff1;
    }
}

extern "C" void func_02039cf4(u16 *p) {
    for (s32 i = 0; i < 3; i++) {
        s32 tbl[3] = {1, 0, 2};
        u16 out[2];
        Unk_02039cf4_Obj o1;
        _ZN12ItemPickSpec3setEii(&o1, tbl[func_02063b8c(3)], 0);
        ItemPick_One(out, &o1, 0, 0, 1, 1, 0);
        func_02063388(&o1);
        p[i] = out[0];
    }
}

extern "C" void func_02039c08(u16 *arr, s32 n) {
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
                s32 r = func_02063b8c(100);
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
                    func_02063388(&o1);
                    *e = *(u16 *)&out;
                    cnt++;
                }
                break;
            }
        }
    }
}
