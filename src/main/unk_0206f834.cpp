#include "types.h"
#include "text/Unk_02050288.h"
#include "gfx/Unk_0206fd10_Mtx.h"
#include "game/Unk_0206f6fc_Pos.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"
#include "talk/MsgString.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)




class MsgString;

// buffer interface (destination-side, member at +4)
class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr attr;
};


// ---------------------------------------------------------------------------------------------------------------------

// Fixed 0x29 byte string holder
class EncodedString41 : public EncodedString {
public:
    EncodedString41();
    virtual ~EncodedString41();
    virtual u32 capacity();
    virtual u8 *data();

    s32 getLength();

    /* 0x0e */ u8 bytes[0x29];
};

// String buffer wrapping a text renderer (TextLabel) at +0x3c
class LabelString : public MsgString {
public:
    LabelString();
    virtual ~LabelString();
    virtual u32 capacity();
    virtual u8 *data();

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

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *label;
};





extern "C" {
extern u8 sCommSubPostReply;
}

extern "C" {
extern u32 sCommCountdownKinds[];
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
extern Unk_0206f804_Fn sCommSubHandlers[];
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
extern Unk_0206fde4_Mtx sCpuMtxStack[];
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
void Letter_Clear();
}

extern "C" {
void *TownExchange_GetLetter(void *p);
}

extern "C" {
void Letter_Copy(void *p, void *q);
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
u8 *PlayerActor_GetActor(u8 x);
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
s32 Text_GetLength(const u8 *str, s32 len);
}

extern "C" {
s32 Text_GetTrimmedLength(const u8 *str, s32 len);
}

extern "C" {
BOOL EncodedString_SetRaw(EncodedString41 *buf, const void *src, s32 len);
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
void HudCountdown_StartWithSe(u32 x);
}

extern "C" {
void CommSub_RecvTownTune(u8 *p);
}

extern "C" {
void CommSub_RecvPostReply(u8 *p);
}

extern "C" {
void CommSub_RecvPostLetter(u8 *p, u32 code);
}

extern "C" {
void CommSub_Send(u32 a, u32 b, ...);
}

extern "C" {
void CommSub_SetPostReply(u8 v);
}

extern "C" {
u8 CommSub_GetPostReply();
}

extern "C" {
void CommSub_ClearBottleLetter();
}

extern "C" {
void CommSub_RecvBottleLetter(u8 *p);
}

extern "C" {
void CommSub_RecvItemList15(u8 *p);
}

extern "C" {
void CommSub_RecvReleaseOrThrow(u8 *p, u32 id);
}

extern "C" {
void CommSub_RecvInsectRelease(u8 *p, u32 id);
}

extern "C" {
void CommSub_RecvBbsPost(u8 *p);
}

extern "C" {
void CommSub_Dispatch(u8 *p, u32 x);
}

extern "C" {
void CommSub_ResetPostReply();
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
void CpuMtx_RestoreFromStack(u32 i);
}

extern "C" {
void CpuMtx_StoreToStack(u32 i);
}

extern "C" {
s32 Museum_CountDonatedFossilsInGroup(u32 a, s32 b);
}

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
// prototypes (test harness)
void String_Load2dMenuByRef(void *a, u8 *p);
void String_Load2dMenu(void *a, u8 v);
void String_LoadByIndex(void *a, void *c, u8 v);
void String_FormatNumberWrapper(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void String_FromEncodedBytes(MsgString *dst, const void *s, s32 len);
void String_ToEncodedBytes(MsgString *a, u8 *b);
void String_FromEncodedBytesEx(MsgString *dst, const void *s, s32 len, BOOL a, u8 b);
BOOL String_EqualsEncodedBytes(MsgString *a, u8 *b, s32 len);


void LabelString::setLayerColors(u32 id, u8 x, u8 y) {
    s32 t = Gfx2d_GetLayerBgIndex(id);
    if (label != NULL) {
        label->vramLoader = t;
        if (Gfx2d_IsMainScreenLayer(id) != 0) {
            label->copyMode = 2;
        } else {
            label->copyMode = 1;
        }
        if (t == 4) {
            label->rowStride1K = 1;
        } else {
            label->rowStride1K = 0;
        }
        label->bgColor = y;
        label->fgColor = x;
    }
}

void LabelString::createLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (label != NULL) {
        destroyLabel();
    }
    label = MsgTextLabel_CreateVram(a, b, 2);
    setLayerColors(id, x, y);
    if (flag != 0) {
        label->font = &gFontC;
    }
}

void LabelString::createSmallLabel(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag) {
    if (label != NULL) {
        destroyLabel();
    }
    label = MsgTextLabel_CreateVram(a, b, 1);
    setLayerColors(id, x, y);
    if (flag != 0) {
        label->font = &gFontD;
    } else {
        label->font = &gFontB;
    }
}

void LabelString::createBufferLabel(u32 a, u32 b, u8 x, u8 y) {
    if (label != NULL) {
        destroyLabel();
    }
    label = MsgTextLabel_CreateBuffer(a, b, 2);
    if (label != NULL) {
        label->bgColor = y;
        label->fgColor = x;
        label->group = 2;
    }
}

void LabelString::redrawAligned(s32 a, s32 b) {
    TextLabel *o = label;
    if (o != NULL) {
        o->textStart = (u32)data();
        if (b != 0) {
            label->underline = 1;
        } else {
            label->underline = 0;
        }
        if (a != 0) {
            label->alignCenter();
        } else {
            label->xOffset = 0;
        }
        label->requestRedraw();
    }
}

void LabelString::redrawOffset(s32 a, s32 b) {
    TextLabel *o = label;
    if (o != NULL) {
        o->textStart = (u32)data();
        if (a != 0) {
            label->alignCenter();
        } else {
            label->xOffset = 0;
        }
        label->xOffset = label->xOffset + b;
        label->requestRedraw();
    }
}

void LabelString::redrawRight() {
    TextLabel *o = label;
    if (o != NULL) {
        o->textStart = (u32)data();
        label->alignRight();
        label->requestRedraw();
    }
}

void LabelString::redrawAt(s32 v) {
    TextLabel *o = label;
    if (o != NULL) {
        o->textStart = (u32)data();
        label->xOffset = v;
        label->requestRedraw();
    }
}

u32 LabelString::getTextWidth() { return Msg_MeasureWidth((u32)this + 0x12); }

void String_Load2dMenuByRef(void *a, u8 *p) { String_Load2d(a, p, 0); }

void String_Load2dMenu(void *a, u8 v) {
    u8 t = v;
    String_Load2dMenuByRef(a, &t);
}

void String_LoadByIndex(void *a, void *c, u8 v) {
    u8 t = v;
    String_Load(a, &t, c);
}

void String_FormatNumberWrapper(void *o, s32 a, s32 b, s32 c, s32 d, u8 e) { String_FormatNumber(o, a, b, c, d, e); }

void String_FromEncodedBytes(MsgString *dst, const void *s, s32 len) {
    EncodedString41 l;
    EncodedString_SetRaw(&l, s, len);
    dst->fromEncoded(&l, 0, 0);
}

void String_ToEncodedBytes(MsgString *a, u8 *b) {
    EncodedString41 l;
    l.fromMsgString(a);
    StrBuf_GetBytes(&l, b, 0x29);
}

void String_FromEncodedBytesEx(MsgString *dst, const void *s, s32 len, BOOL a, u8 b) {
    if (a == 0) {
        b = 0;
    }
    EncodedString41 l;
    EncodedString_SetRaw(&l, s, len);
    dst->fromEncoded(&l, a, b);
}

void LabelString::setHighlight(u8 a, u8 b, u32 c, u32 d) {
    if (label != NULL) {
        label->setHighlight(a, b, c, d);
    }
}

BOOL String_EqualsEncodedBytes(MsgString *a, u8 *b, s32 len) {
    EncodedString41 l;
    l.fromMsgString(a);
    s32 n = Text_GetTrimmedLength(b, len);
    if (n != Text_GetTrimmedLength(l.bytes, len)) {
        return FALSE;
    }
    s32 i = 0;
    while (i < n) {
        u32 x = b[i];
        u32 y = l.bytes[i];
        if (x == 0x8d) {
            x = 0xb1;
        }
        if (y == 0x8d) {
            y = 0xb1;
        }
        if (x != y) {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

EncodedString41::EncodedString41() {}

EncodedString41::~EncodedString41() {}

u32 EncodedString41::capacity() { return 0x29; }

u8 *EncodedString41::data() { return bytes; }

static inline u32 Unk_0206fe34_Id(u32 i) {
    if (i < 0x34) {
        return i * 4 + 0x450c;
    }
    return 0x450c;
}
