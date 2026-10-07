#include "uptr.h"
#include "types.h"
#include "gfx/VecFx32.h"
#include "text/Unk_02050288.h"
#include "gfx/Mtx43.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"
#include "talk/MsgString.h"
#include "talk/EncodedString.h"
#include "ui/LabelString.h"
#include "talk/EncodedString41.h"
#define PROTO_LOCAL_data_021cb69c  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gCurrentHeap  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gFontB  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gFontC  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gFontD  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_gMelodyEditPattern  // declared below: the shared prototype conflicts with the calls here
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/autoload_2/unk_020ec848.h"
#include "proto/main/unk_0200137c.h"
#include "proto/main/unk_020027b4.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_020501d4.h"
#include "proto/main/unk_02051218.h"
#include "proto/main/unk_02052b50.h"
#include "proto/main/unk_02065330.h"
#include "proto/main/unk_0206d988.h"
#include "proto/main/unk_0206f4f0.h"
#include "proto/main/unk_0206f804.h"
#include "proto/main/unk_0206f834.h"
#include "proto/main/unk_0206fc44.h"
#include "proto/main/unk_0206fde4.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_02089fbc.h"
#include "proto/main/unk_0208f0b0.h"
#include "proto/main/unk_02094810.h"
#include "proto/main/unk_02095cdc.h"
#include "proto/main/unk_02096c10.h"
#include "proto/main/unk_020b2c50.h"
#include "proto/ov003/unk_ov003_0221ffb8.h"
#include "proto/ov003/unk_ov003_02225800.h"

// The CPU-side matrix (bss) the matrix-stack code here uses.
// Owned here by position: it lies between the data of the neighbouring files in link order and fits this file's
// size order (linkprep check); the original file is this one or another file between those neighbours.
extern "C" { extern Mtx43 data_021cb69c; }
Mtx43 data_021cb69c;

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)




class MsgString;



// ---------------------------------------------------------------------------------------------------------------------







extern "C" {
}

extern "C" {
}

extern "C" {
extern u32 gMelodyEditPattern[];
}

extern "C" {
extern u32 gSaveTownTune[];
}

extern "C" {
extern u32 gSaveVillagers[];
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
extern void *gCommManager;
}

extern "C" {
extern u8 data_021eceac[];
}

extern "C" {
extern u8 data_021e7f8c[];
}

extern "C" {
extern u8 gSaveLostAndFound[];
}

extern "C" {
extern u8 gSaveRecycleBin[];
}

extern "C" {
extern u8 gFieldSceneKind;
}

extern "C" {
extern u32 data_020c7c1c;
}

extern "C" {
typedef void (*CommSubHandler)(u8 *, u32);
}

extern "C" {
extern CommSubHandler sCommSubHandlers[];
}

extern "C" {
extern GameFontDesc gFontD;
}

extern "C" {
extern GameFontDesc gFontB;
}

extern "C" {
extern GameFontDesc gFontC;
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 func_0208c134(void *a, u32 b, u32 c);
}

extern "C" {
s32 MI_CpuCopy8(void *src, void *dst, u32 n);
}

extern "C" {
}

extern "C" {
}

extern "C" {
void SaveVillagers_ClearTuneRequester(void *a);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void func_020728d4(void *p);
}

extern "C" {
void func_020728a4(void *p, void *d, s32 n);
}

extern "C" {
void func_02072824(void *p, s32 a, s32 b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_0208f1a8(void *p, s32 v);
}

extern "C" {
}

extern "C" {
}

extern "C" {
s32 BottleThrow_SetTarget(void *a, u8 b);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
BOOL EncodedString_SetRaw(EncodedString41 *buf, const void *src, s32 len);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
u32 Msg_MeasureWidth(u32 arg);
}

extern "C" {
}

extern "C" {
TextLabel *MsgTextLabel_CreateBuffer(u32 a, u32 b, u32 c);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, u32 b, u32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
}

extern "C" {
}

extern "C" {
void MTX_Copy33To43_(void *a, void *b);
}

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}

extern "C" {
void MTX_Concat43(void *a, void *b, void *c);
}

extern "C" {
void MTX_Identity43_(void *p);
}

extern "C" {
}

extern "C" {
BOOL func_02070358(u32 a, u16 *p);
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

extern "C" {
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
// prototypes (test harness)


void CpuMtx_MultRotTrans(void *a, VecFx32 *v) {
    Mtx43 m;
    MTX_Copy33To43_(a, &m);
    m.m[9] = v->x;
    m.m[10] = v->y;
    m.m[11] = v->z;
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultTrans(VecFx32 *v) {
    Mtx43 m;
    MTX_Identity43_(&m);
    m.m[9] = v->x;
    m.m[10] = v->y;
    m.m[11] = v->z;
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultRot(void *a) {
    Mtx43 m;
    MTX_Copy33To43_(a, &m);
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultRotScaledTrans(void *a, VecFx32 *v, VecFx32 *w) {
    Mtx43 m;
    MTX_Copy33To43_(a, &m);
    if (w == NULL) {
        m.m[9] = v->x;
        m.m[10] = v->y;
        m.m[11] = v->z;
    } else {
        m.m[9] = func_01ffcb0c(v->x, w->x);
        m.m[10] = func_01ffcb0c(v->y, w->y);
        m.m[11] = func_01ffcb0c(v->z, w->z);
    }
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

LabelString::LabelString() {
    clear();
    label = NULL;
}

LabelString::~LabelString() { destroyLabel(); }

u32 LabelString::capacity() { return 0x2a; }

u8 *LabelString::data() { return HOST_AT(this, 0x12, text[0], 0); }

void LabelString::destroyLabel() {
    if (label != NULL) {
        MsgTextLabel_Destroy(label);
        label = NULL;
    }
}

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}
