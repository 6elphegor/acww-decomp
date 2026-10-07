#include "uptr.h"
#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/ToonTable.h"
#include "gfx/Mtx43.h"
#include "actor/ActorListNode.h"
#include "gfx/AbAllObjGfx.h"
#include "npc/VillagerId.h"
#include "actor/Actor.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_02105d50.h"
#include "proto/autoload_2/unk_0210fa84.h"
#include "proto/autoload_2/unk_02110c98.h"
#include "proto/autoload_2/unk_02119434.h"
#include "proto/main/unk_020027b4.h"
#include "proto/main/unk_020029e8.h"
#include "proto/main/unk_02002b1c.h"
#include "proto/main/unk_02003008.h"
#include "proto/main/unk_0202e840.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_020a427c.h"
#include "proto/main/unk_020d477c.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
extern u8 data_02135934[];
}

extern "C" {
extern u32 sPersonalityFileNameFmt[];
}

extern "C" {
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
extern u32 **gProfileTable;
}

extern "C" {
extern u32 gSaveTownId;
}

extern "C" {
extern u32 sPersonalityVoiceTypes[];
}

extern "C" {
}

extern "C" {
extern u8 gViewFrustum[];
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void G3X_SetClearColor(u16 a, u32 b, u32 c, u32 d, u32 e);
}

extern "C" {
void DC_FlushRange(void *p, u32 n);
}

extern "C" {
}

extern "C" {
void MTX_Inverse43(void *a, void *b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void OS_EnableDTCM(void);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void G3i_PerspectiveW_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
}

extern "C" {
}

extern "C" {
void GX_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJ(void *p, u32 a, u32 b);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 a, u32 b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void List_Remove(void *list, void *node);
}

extern "C" {
void List_PushBack(void *list, void *node);
}

extern "C" {
void Mtx43_SetTranslate(void *m, s32 a, s32 b, s32 c);
}

extern "C" {
void Mtx43_RotateX(void *m, s32 a);
}

extern "C" {
void Mtx43_RotateY(void *m, s32 a);
}

extern "C" {
void Math_Atan2(s32 a, s32 b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void VEC_Add(void *a, void *b, void *c);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
u32 Villager_GetSpeciesName(u32 a, u32 b);
}

extern "C" {
}

extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}

extern "C" {
void *ProcList_FindByProfile(void *list, u32 id, void *p);
}

extern "C" {
void *ProcList_FindById(void *list, u32 id);
}

extern "C" {
}

extern "C" {
s32 func_02039eb8(void *a, void *b, void *c, void *d, void *e);
}

extern "C" {
void func_020030b4_dummy(void);
}



extern Mtx43 data_02135934_;


AbAllObjGfx sAbAllObjGfx;









AbAllObjGfx::AbAllObjGfx() : paletteBuf(0), charBuf(0) {}

AbAllObjGfx::~AbAllObjGfx() {
    freePalette();
    freeChars();
}

extern "C" void AbAllObjGfx_Upload(void) {
    AbAllObjGfx *p = &sAbAllObjGfx;
    AbAllObjGfx_InitFile(p);
    BOOL a = p->loadPalette();
    BOOL b = p->loadChars();
    if (a) p->uploadPalette();
    if (b) p->uploadChars();
    p->freePalette();
    p->freeChars();
}

extern "C" void AbAllObjGfx_InitFile(void *p) { FS_InitFile(p); }

BOOL AbAllObjGfx::loadPalette() {
    paletteBuf = File_Load((void *)"/ab_all/ab_all_obj_ncl.bin");
    if (paletteBuf) return TRUE;
    return FALSE;
}

BOOL AbAllObjGfx::loadChars() {
    void *p = File_Load((void *)"/ab_all/ab_all_obj_ncg.bin");
    charBuf = p;
    if (p) return TRUE;
    return FALSE;
}

void AbAllObjGfx::freePalette() {
    if (paletteBuf) {
        Mem_Free(paletteBuf);
        paletteBuf = 0;
    }
}

void AbAllObjGfx::freeChars() {
    if (charBuf) {
        Mem_Free(charBuf);
        charBuf = 0;
    }
}

void AbAllObjGfx::uploadPalette() {
    DC_FlushRange(paletteBuf, 0x80);
    GX_LoadOBJPltt(paletteBuf, 0, 0x80);
    GXS_LoadOBJPltt(paletteBuf, 0, 0x80);
}

void AbAllObjGfx::uploadChars() {
    DC_FlushRange(charBuf, 0x1000);
    GX_LoadOBJ(charBuf, 0, 0x1000);
    GXS_LoadOBJ(charBuf, 0, 0x1000);
}

