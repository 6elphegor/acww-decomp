#include "types.h"

struct Unk_0203ff50_Slot { u8 pad[0x10]; u8 unk_10, unk_11; u8 unk_12, unk_13; u8 rest[0x30]; };

extern "C" {

s32 func_02063b8c(s32);
void DateTime_AddDays(s32, s32);
void MI_CpuCopy8(void *, void *, u32);
s32 EventSchedule_CollectAtNoon(void *, s32, void *);

BOOL func_02040754(void *, u8 *p, u32 v);
}

extern const u32 data_020c9060[7];
extern const u32 data_020c907c[7];
const u32 data_020c9060[7] = {0xc, 0xc, 0xc, 0xc, 0x14, 0x14, 0xc};
const u32 data_020c907c[7] = {0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x3e};

extern "C" s32 func_020407a8(void *, s32 *out, s32 x)
{
    s32 i;
    s32 cnt = 0;
    u8 a[8];
    u8 b[0x58];
    DateTime_AddDays(x, 1);
    for (i = 0; i < 5; i++) {
        MI_CpuCopy8((void *)x, a, 8);
        if (EventSchedule_CollectAtNoon(b, 7, a) <= 0) {
            *out = 1;
            cnt++;
        } else {
            *out = 0;
        }
        DateTime_AddDays(x, 1);
        out++;
    }
    return cnt;
}

extern "C" s32 func_02040778(void *, s32 *arr, s32 n)
{
    s32 r = func_02063b8c(n);
    s32 i = 0;
    s32 res = -1;
    for (; i < 5; arr++, i++) {
        if (*arr == 1 && --r < 0) {
            res = i;
            break;
        }
    }
    return res;
}

extern "C" BOOL func_02040754(void *, u8 *p, u32 v)
{
    BOOL result = FALSE;
    s32 i;
    for (i = 0; i <= 5; p++, i++) {
        if (*p != 99 && *p == v) {
            result = TRUE;
            break;
        }
    }
    return result;
}

extern "C" s32 func_020406c4(Unk_0203ff50_Slot *s, u8 *a) {
    s32 ids[7];
    s32 wts[7];
    s32 i;
    s32 sum;
    s32 k;
    s32 r;
    s32 m;
    s32 res = 0x63;
    s32 j;

    for (i = 0; i < 7; i++) {
        ids[i] = 0x63;
        wts[i] = 0;
    }
    sum = 0;
    k = 0;
    j = 0;
    for (; j < 7; j++) {
        s32 id = data_020c907c[j];
        if (func_02040754(s, a, id) == 0) {
            ids[k] = id;
            wts[k] = data_020c9060[j];
            k++;
            sum += data_020c9060[j];
        }
    }
    if (sum > 0) {
        r = func_02063b8c(sum);
        for (m = 0; m < k; m++) {
            r -= wts[m];
            if (r < 0) {
                res = ids[m];
                break;
            }
        }
    }
    return res;
}

