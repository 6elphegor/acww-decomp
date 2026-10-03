#include "types.h"
#include "text/Unk_02050288.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();
    void reset();
    void copyFrom(MsgStringAttr *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgString;

// buffer interface (destination-side, member at +4)
class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

// ---------------------------------------------------------------------------------------------------------------------

// Fixed 0x29 byte string holder
class EncodedString41 : public EncodedString {
public:
    EncodedString41();
    virtual ~EncodedString41();
    virtual u32 capacity();
    virtual u8 *data();

    s32 func_0206f828();

    /* 0x0e */ u8 unk_0e[0x29];
};

// String buffer wrapping a text renderer (TextLabel) at +0x3c
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 getTextWidth();
    void setHighlight(u8 a, u8 b, u32 c, u32 d);
    void redrawAt(s32 v);
    void redrawRight();
    void redrawOffset(s32 a, s32 b);
    void redrawAligned(s32 a, s32 b);
    void createBufferLabel(u32 a, u32 b, u8 x, u8 y);
    void createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void setLayerColors(u32 id, u8 x, u8 y);
    void destroyLabel();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
};

struct Unk_0206fd10_Mtx {
    s32 m[9];
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fde4_Mtx {
    s32 v[12];
};

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_0206fd10_Vec {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u8 data_020de390;
}

extern "C" {
extern u32 data_020de394[];
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
typedef void (*Unk_0206f804_Fn)(u8 *, u32);
}

extern "C" {
extern Unk_0206f804_Fn data_020de3a8[];
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
extern Unk_0206fd10_Mtx data_021cb69c;
}

extern "C" {
extern Unk_0206fde4_Mtx data_021cb6cc[];
}

extern "C" {
s32 Snd_PlaySe(u32 a);
}

extern "C" {
void *Hud_GetCountdown();
}

extern "C" {
s32 func_0208c134(void *a, u32 b, u32 c);
}

extern "C" {
s32 MI_CpuCopy8(void *src, void *dst, u32 n);
}

extern "C" {
void Melody_Pack(void *a, void *b);
}

extern "C" {
void Melody_ApplyEditPattern();
}

extern "C" {
void SaveVillagers_ClearTuneRequester(void *a);
}

extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
s32 LetterDelivery_QueueOutgoing(void *obj, s32 v);
}

extern "C" {
BOOL LetterDelivery_HasFreeOutgoingSlot(void);
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
void BottleLetterRecord_GetLetter(void *p);
}

extern "C" {
void func_02065c94();
}

extern "C" {
void *func_0208f158(void *p);
}

extern "C" {
void func_02065e70(void *p, void *q);
}

extern "C" {
void func_0208f168(void *p);
}

extern "C" {
void func_0208f1a8(void *p, s32 v);
}

extern "C" {
void NetBuf_UnpackPair20(void *a, void *b, void *c);
}

extern "C" {
s32 FishCatch_StartRelease(u8 a, u32 b, void *c);
}

extern "C" {
s32 BottleThrow_SetTarget(void *a, u8 b);
}

extern "C" {
u8 *func_02095204(u8 x);
}

extern "C" {
BOOL HeldInsect_GetStage(u8 x);
}

extern "C" {
void HeldInsect_Start(u32 a, u8 b);
}

extern "C" {
s32 HeldInsect_Release(u8 a, s32 b);
}

extern "C" {
s32 Bbs_AddPost(void *p);
}

extern "C" {
s32 func_020512e0(const u8 *str, s32 len);
}

extern "C" {
s32 func_020512f8(const u8 *str, s32 len);
}

extern "C" {
BOOL func_020a78a4(EncodedString41 *buf, const void *src, s32 len);
}

extern "C" {
BOOL StrBuf_GetBytes(EncodedString41 *buf, u8 *dst, s32 size);
}

extern "C" {
void String_FormatNumber(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void String_Load(void *a, u8 *b, void *c);
}

extern "C" {
void String_Load2d(void *a, u8 *b, u32 c);
}

extern "C" {
u32 Msg_MeasureWidth(u32 arg);
}

extern "C" {
void _ZdlPv(void *p);
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
s32 Gfx2d_GetLayerBgIndex(u32 id);
}

extern "C" {
s32 Gfx2d_IsMainScreenLayer(u32 id);
}

extern "C" {
void func_01ffb46c(void *a, void *b);
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
s32 Item_GetFossilGroup(u16 *p);
}

extern "C" {
BOOL func_02070358(u32 a, u16 *p);
}

extern "C" {
void func_0206f53c(u32 x);
}

extern "C" {
void func_0206f56c(u8 *p);
}

extern "C" {
void func_0206f5a0(u8 *p);
}

extern "C" {
void func_0206f5ac(u8 *p, u32 code);
}

extern "C" {
void func_0206f604(u32 a, u32 b, ...);
}

extern "C" {
void func_0206f638(u8 v);
}

extern "C" {
u8 func_0206f644();
}

extern "C" {
void func_0206f650();
}

extern "C" {
void func_0206f668(u8 *p);
}

extern "C" {
void func_0206f6b8(u8 *p);
}

extern "C" {
void func_0206f6fc(u8 *p, u32 id);
}

extern "C" {
void func_0206f770(u8 *p, u32 id);
}

extern "C" {
void func_0206f7d0(u8 *p);
}

extern "C" {
void func_0206f804(u8 *p, u32 x);
}

extern "C" {
void func_0206f81c();
}

extern "C" {
BOOL String_EqualsEncodedBytes(MsgString *a, u8 *b, s32 len);
}

extern "C" {
void String_FromEncodedBytesEx(MsgString *dst, const void *s, s32 len, BOOL a, u8 b);
}

extern "C" {
void String_ToEncodedBytes(MsgString *a, u8 *b);
}

extern "C" {
void String_FromEncodedBytes(MsgString *dst, const void *s, s32 len);
}

extern "C" {
void String_FormatNumberWrapper(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
}

extern "C" {
void String_LoadByIndex(void *a, void *c, u8 v);
}

extern "C" {
void String_Load2dMenu(void *a, u8 v);
}

extern "C" {
void String_Load2dMenuByRef(void *a, u8 *p);
}

extern "C" {
void CpuMtx_MultRotScaledTrans(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);
}

extern "C" {
void CpuMtx_MultRot(void *a);
}

extern "C" {
void CpuMtx_MultTrans(Unk_0206fd10_Vec *v);
}

extern "C" {
void CpuMtx_MultRotTrans(void *a, Unk_0206fd10_Vec *v);
}

extern "C" {
void func_0206fde4(u32 i);
}

extern "C" {
void func_0206fe0c(u32 i);
}

extern "C" {
s32 func_0206fe34(u32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
// prototypes (test harness)
void CpuMtx_MultRotTrans(void *a, Unk_0206fd10_Vec *v);
void CpuMtx_MultTrans(Unk_0206fd10_Vec *v);
void CpuMtx_MultRot(void *a);
void CpuMtx_MultRotScaledTrans(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w);


void CpuMtx_MultRotTrans(void *a, Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultTrans(Unk_0206fd10_Vec *v) {
    Unk_0206fd10_Mtx m;
    MTX_Identity43_(&m);
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultRot(void *a) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

void CpuMtx_MultRotScaledTrans(void *a, Unk_0206fd10_Vec *v, Unk_0206fd10_Vec *w) {
    Unk_0206fd10_Mtx m;
    func_01ffb46c(a, &m);
    if (w == NULL) {
        m.x = v->x;
        m.y = v->y;
        m.z = v->z;
    } else {
        m.x = func_01ffcb0c(v->x, w->x);
        m.y = func_01ffcb0c(v->y, w->y);
        m.z = func_01ffcb0c(v->z, w->z);
    }
    MTX_Concat43(&m, &data_021cb69c, &data_021cb69c);
}

LabelString::LabelString() {
    clear();
    unk_3c = NULL;
}

LabelString::~LabelString() { destroyLabel(); }

u32 LabelString::vfunc_08() { return 0x2a; }

u8 *LabelString::vfunc_0c() { return (u8 *)this + 0x12; }

void LabelString::destroyLabel() {
    if (unk_3c != NULL) {
        MsgTextLabel_Destroy(unk_3c);
        unk_3c = NULL;
    }
}

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}
