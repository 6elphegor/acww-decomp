// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222defc {
    void *parts[5];
    void *task;
    u8 isSlidingOut;
};

struct Unk_ov001_0222a320 {
    u16 a;
    u16 b;
};

extern "C" const u8 sWfcHeaderCells[16];
extern "C" const u8 sWfcHeaderPalettes[16];
extern "C" const Unk_ov001_0222a320 sWfcHeaderPartPos[5];
extern "C" Unk_ov001_0222defc *sWfcHeader;

extern "C" {

void WfcObj_GetPos(void *, s32, s32 *, s32 *);
void WfcObj_SetPos(void *, s32, s32, s32);
void WfcObj_SetPriority(void *, s32, s32);
void WfcObj_SetModePalette(void *, s32, s32, s32);
void WfcObj_Free(void *);
void *WfcObj_GetOam(void *, s32);
void WfcCell_Copy(s32, s32, void *);
void *WfcObj_Create(s32, s32, s32);
void WfcHeap_FreeAndClear(void *);
void *WfcHeap_AllocClear(s32, s32);
void WfcTask_RequestDelete(s32, s32);
void WfcTask_SetFunc(s32, void *);
u32 WfcTask_Add(s32, void *, s32, s32);
void WfcTop_LoadScreen(s32);
void WfcSound_Play(s32);

void WfcHeader_SlideOutTask0(s32 a);
void WfcHeader_SlideOutTask1(s32 a);
void WfcHeader_SlideOutTask2(s32 a);
void WfcHeader_SlideOutTask3(s32 a);
void WfcHeader_SlideOutTask4(s32 r);
void WfcHeader_SlideInDone(s32 r);
void WfcHeader_SlideInTask4(s32 r);
void WfcHeader_SlideInTask3(s32 r);
void WfcHeader_SlideInTask2(s32 r);
void WfcHeader_SlideInTask1(s32 r);
void WfcHeader_SlideInTask0(s32 r);
void WfcHeader_Create(s32 n);
void WfcHeader_StartSlideOut();
void WfcHeader_SetStep(s32 n);
s32 WfcHeader_IsAnimating();
BOOL WfcHeader_IsSlideOutDone();
}

void WfcHeader_Create(s32 n)
{
    s32 i;
    void *p = WfcHeap_AllocClear(0x1c, 4);
    sWfcHeader = (Unk_ov001_0222defc *)p;
    const u8 *p9 = sWfcHeaderCells + n * 5;
    const u8 *p8 = sWfcHeaderPalettes + n * 5;
    s32 z = 0;
    for (i = 0; i < 5; i++) {
        sWfcHeader->parts[i] = WfcObj_Create(1, *p9, 1);
        WfcObj_SetPriority(sWfcHeader->parts[i], -1, z);
        WfcObj_SetPos(sWfcHeader->parts[i], -1, -0x2a, sWfcHeaderPartPos[i].b);
        WfcObj_SetModePalette(sWfcHeader->parts[i], -1, z, *p8);
        p9++;
        p8++;
    }
    sWfcHeader->task = (void *)WfcTask_Add(0, (void *)WfcHeader_SlideInTask0, 0, 0x78);
    WfcTop_LoadScreen(n);
    WfcSound_Play(0xd);
}

void WfcHeader_SlideInTask0(s32 r)
{
    s32 a, b, i;
    WfcObj_GetPos(sWfcHeader->parts[0], 0, &a, &b);
    a += 8;
    if (a < sWfcHeaderPartPos[0].a || a > 0x100) {
        for (i = 0; i < 5; i++)
            WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
        return;
    }
    a = sWfcHeaderPartPos[0].a;
    for (i = 0; i < 5; i++)
        WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideInTask1);
}

void WfcHeader_SlideInTask1(s32 r)
{
    s32 a, b, i;
    WfcObj_GetPos(sWfcHeader->parts[1], 0, &a, &b);
    a += 8;
    if (a < sWfcHeaderPartPos[1].a || a > 0x100) {
        for (i = 1; i < 5; i++)
            WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
        return;
    }
    a = sWfcHeaderPartPos[1].a;
    for (i = 1; i < 5; i++)
        WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideInTask2);
}

void WfcHeader_SlideInTask2(s32 r)
{
    s32 a, b, i;
    WfcObj_GetPos(sWfcHeader->parts[2], 0, &a, &b);
    a += 8;
    if (a < sWfcHeaderPartPos[2].a || a > 0x100) {
        for (i = 2; i < 5; i++)
            WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
        return;
    }
    a = sWfcHeaderPartPos[2].a;
    for (i = 2; i < 5; i++)
        WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideInTask3);
}

void WfcHeader_SlideInTask3(s32 r)
{
    s32 a, b, i;
    WfcObj_GetPos(sWfcHeader->parts[3], 0, &a, &b);
    a += 8;
    if (a < sWfcHeaderPartPos[3].a || a > 0x100) {
        for (i = 3; i < 5; i++)
            WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
        return;
    }
    a = sWfcHeaderPartPos[3].a;
    for (i = 3; i < 5; i++)
        WfcObj_SetPos(sWfcHeader->parts[i], -1, a, sWfcHeaderPartPos[i].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideInTask4);
}

void WfcHeader_SlideInTask4(s32 r)
{
    s32 a, b;
    WfcObj_GetPos(sWfcHeader->parts[4], 0, &a, &b);
    a += 8;
    if (a < sWfcHeaderPartPos[4].a || a > 0x100) {
        WfcObj_SetPos(sWfcHeader->parts[4], -1, a, sWfcHeaderPartPos[4].b);
        return;
    }
    a = sWfcHeaderPartPos[4].a;
    WfcObj_SetPos(sWfcHeader->parts[4], -1, a, sWfcHeaderPartPos[4].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideInDone);
}

void WfcHeader_SlideInDone(s32 r)
{
    WfcTask_RequestDelete(0, r);
    sWfcHeader->task = 0;
}

void WfcHeader_StartSlideOut()
{
    sWfcHeader->isSlidingOut = 1;
    sWfcHeader->task = (void *)WfcTask_Add(0, (void *)WfcHeader_SlideOutTask4, 0, 0x78);
}

void WfcHeader_SetStep(s32 n)
{
    s32 i;
    const u8 *p9 = sWfcHeaderCells + n * 5;
    const u8 *p8 = sWfcHeaderPalettes + n * 5;
    s32 z = 0;
    for (i = 0; i < 5; i += 2) {
        void *t = WfcObj_GetOam(sWfcHeader->parts[i], z);
        WfcCell_Copy(1, *p9, t);
        WfcObj_SetPriority(sWfcHeader->parts[i], -1, z);
        WfcObj_SetPos(sWfcHeader->parts[i], -1, sWfcHeaderPartPos[i].a, sWfcHeaderPartPos[i].b);
        WfcObj_SetModePalette(sWfcHeader->parts[i], -1, z, *p8);
        p9 += 2;
        p8 += 2;
    }
    WfcTop_LoadScreen(n);
}

s32 WfcHeader_IsAnimating()
{
    if (sWfcHeader->task != 0) return TRUE;
    return FALSE;
}

void WfcHeader_SlideOutTask4(s32 r)
{
    s32 a, b;
    WfcObj_GetPos(sWfcHeader->parts[4], 0, &a, &b);
    a -= 8;
    if (a > sWfcHeaderPartPos[3].a) {
        WfcObj_SetPos(sWfcHeader->parts[4], -1, a, sWfcHeaderPartPos[4].b);
        return;
    }
    a = sWfcHeaderPartPos[3].a;
    WfcObj_SetPos(sWfcHeader->parts[4], -1, a, sWfcHeaderPartPos[4].b);
    WfcTask_SetFunc(r, (void *)WfcHeader_SlideOutTask3);
}

void WfcHeader_SlideOutTask3(s32 a)
{
    s32 xy[2];
    s32 i;
    WfcObj_GetPos(sWfcHeader->parts[3], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > sWfcHeaderPartPos[2].a) {
        for (i = 3; i < 5; i++) {
            WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
        }
        return;
    }
    xy[0] = sWfcHeaderPartPos[2].a;
    for (i = 3; i < 5; i++) {
        WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
    }
    WfcTask_SetFunc(a, (void *)WfcHeader_SlideOutTask2);
}

void WfcHeader_SlideOutTask2(s32 a)
{
    s32 xy[2];
    s32 i;
    WfcObj_GetPos(sWfcHeader->parts[2], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > sWfcHeaderPartPos[1].a) {
        for (i = 2; i < 5; i++) {
            WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
        }
        return;
    }
    xy[0] = sWfcHeaderPartPos[1].a;
    for (i = 2; i < 5; i++) {
        WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
    }
    WfcTask_SetFunc(a, (void *)WfcHeader_SlideOutTask1);
}

void WfcHeader_SlideOutTask1(s32 a)
{
    s32 xy[2];
    s32 i;
    WfcObj_GetPos(sWfcHeader->parts[1], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    if (xy[0] > sWfcHeaderPartPos[0].a) {
        for (i = 1; i < 5; i++) {
            WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
        }
        return;
    }
    xy[0] = sWfcHeaderPartPos[0].a;
    for (i = 1; i < 5; i++) {
        WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
    }
    WfcTask_SetFunc(a, (void *)WfcHeader_SlideOutTask0);
}

void WfcHeader_SlideOutTask0(s32 a)
{
    s32 xy[2];
    s32 i;
    WfcObj_GetPos(sWfcHeader->parts[0], 0, &xy[0], &xy[1]);
    xy[0] -= 8;
    for (i = 0; i < 5; i++) {
        WfcObj_SetPos(sWfcHeader->parts[i], -1, xy[0], sWfcHeaderPartPos[i].b);
    }
    if (xy[0] > 0x1d6) return;
    if (xy[0] < 0x100) return;
    WfcTask_RequestDelete(0, a);
    for (i = 0; i < 5; i++) {
        WfcObj_Free(sWfcHeader->parts[i]);
    }
    WfcHeap_FreeAndClear(&sWfcHeader);
}

BOOL WfcHeader_IsSlideOutDone()
{
    Unk_ov001_0222defc *g = sWfcHeader;
    if (g == 0) return TRUE;
    return g->isSlidingOut == 0 ? TRUE : FALSE;
}

// Declarations for data defined further down (definition order sets the data layout)
extern "C" const u8 sWfcHeaderPalettes[16];
extern "C" const u8 sWfcHeaderCells[16];
extern "C" const Unk_ov001_0222a320 sWfcHeaderPartPos[5];

extern "C" const u8 sWfcHeaderPalettes[16] = {2, 1, 3, 1, 3, 5, 1, 4, 1, 5, 7, 1, 7, 1, 6, 0};

extern "C" const u8 sWfcHeaderCells[16] = {1, 0, 5, 0, 6, 4, 0, 2, 0, 6, 4, 0, 5, 0, 3, 0};

extern "C" const Unk_ov001_0222a320 sWfcHeaderPartPos[5] = {{0x20, 0x21}, {0x50, 0x30}, {0x68, 0x21}, {0x98, 0x30}, {0xb0, 0x21}};

extern "C" Unk_ov001_0222defc *sWfcHeader = 0;
