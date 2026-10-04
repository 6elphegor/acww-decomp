#include "types.h"
#include "gfx/Unk_02093aa8_Vec.h"
#include "gfx/Unk_02093dc8_Obj.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "save/TownId.h"
#include "talk/EncodedStringBase.h"
#include "player/PlayerId.h"
#include "gfx/Unk_02093c28_Obj.h"
#include "talk/MsgString.h"
#include "game/GroundInfo.h"
#include "talk/EncodedString.h"
#include "talk/MsgString9B.h"












extern "C" {
extern Unk_02093c28_Entry gEffectManager[];
}

extern "C" {
extern Unk_02093bb4_Scratch data_021d0830;
}

extern "C" {
extern Unk_02093aa8_Vec gVec3Zero;
}

extern "C" {
extern u32 sEffectDefaultTrackedCbs[];
}

extern "C" {
extern u32 sEffectDefaultOneShotCbs[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
s32 EffectSpl_CreateTracked(void *, s32, s32, void *);
}

extern "C" {
s32 EffectSpl_CreateOneShot(void *, s32, s32, void *);
}

extern "C" {
s32 EffectSpl_ApplySceneTint(void *);
}

extern "C" {
s32 func_02090424(void *, s32, s32);
}

extern "C" {
s32 func_020904f0(void *, s32, s32, s32, s32, s32, s32);
}

extern "C" {
s32 func_02090538(void *);
}

extern "C" {
void func_020e93a0(void *, s32);
}

extern "C" {
s32 func_020e94f8(void *);
}

extern "C" {
void VEC_Add(void *, void *, void *);
}

extern "C" {
s32 MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
s32 MI_CpuFill8(void *dst, u32 v, u32 n);
}

extern "C" {
s32 memcmp(const void *, const void *, u32);
}

extern "C" {
s32 EffectCb_FollowTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 EffectCb_InitTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 Effect_StartOneShot(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
}

extern "C" {
void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o);
}

 // extern "C"

// ---------------------------------------------------------------------------------------------------------------------
// Message buffers (see unk_0206c714.cpp for the bases)




class MsgString;



extern "C" BOOL EncodedString_SetRaw(void *, const void *, s32);

// 8-byte destination buffer at +0xe
class EncodedString8 : public EncodedString {
public:
    EncodedString8();
    virtual ~EncodedString8();
    virtual u32 capacity();
    virtual u8 *data();

    void copyTo(void *dst, u32 n);

    /* 0x0e */ u8 text[8];
};


// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14



extern "C" {
extern TownId gSaveTownId;
}

extern "C" {
extern u8 gSavePlayers[];
}

extern "C" {
s32 PlayerDataArray_FindById(void *, void *);
}

extern "C" {
s32 PlayerActor_Get(s32);
}

extern "C" {
s32 func_02002cf8(u32, u32, u32, u32, u32);
}

extern "C" {
u32 Random_GlobalBelow(u32);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 PlayerActor_GetActor(s32);
}

extern "C" {
BOOL PlayerId_ListContainsId(u16 v, u16 *arr, s32 n);
}

extern "C" {
s32 PlayerActor_IsInAction(s32, s32);
}

extern "C" {
s32 FieldPos_ToUnit(s32 *, s32 *, void *);
}

extern "C" {
s32 Area_PlaceItem(s32, s32, s32, s32, s32);
}

EncodedString8::EncodedString8() {}

EncodedString8::~EncodedString8() {}

u32 EncodedString8::capacity() { return 8; }

void EncodedString8::copyTo(void *dst, u32 n) { MI_CpuCopy8(text, dst, n); }

u8 *EncodedString8::data() { return text; }

