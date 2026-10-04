#include "types.h"
#include "text/Unk_02050288.h"
#include "Unk_020d8c7c.h"
#include "game/Unk_020a88fc_Pad.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "talk/MsgTag.h"
#include "talk/MsgRunner.h"

inline void *operator new(unsigned long, void *p) { return p; }

extern "C" {
// Other files
BOOL Text_AsciiToGameCharPtr(u8 *out, const u8 *c);
}

extern "C" {
BOOL Text_GameCharToAscii(char *out, u32 index);
}

extern "C" {
const char *Text_GetSpecialCharStr3(void);
}

extern "C" {
const char *Text_GetSpecialCharStr2(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr10(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr9(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr5(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr7(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr6(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr4(void);
}

extern "C" {
u8 *Text_GetSpecialCharStr1(void);
}

extern "C" {
BOOL StrBuf_SetBytes(StrBuf *buf, const void *src, s32 len);
}

extern "C" {
void StrBuf_Clear(StrBuf *buf);
}

extern "C" {
void AbAllObjGfx_Upload(void);
}

extern "C" {
void Gfx2d_HideMainPlanes(u32 arg);
}

extern "C" {
void Gfx2d_ShowMainPlanes(u32 arg);
}

extern "C" {
void HudObjGfx_ClearMsgUiActive(void);
}

extern "C" {
void HudObjGfx_SetMsgUiActive(void);
}

extern "C" {
void HudObjGfx_LoadForScene(void);
}

extern "C" {
void File_ReadRange(void *file, void *buf, u32 size, u32 offset);
}

extern "C" {
BOOL Talk_IsAltTextEnabled(void);
}

extern "C" {
void TalkWindow_DrawAll(void);
}

extern "C" {
void TalkWindow_UpdateAll(void);
}

extern "C" {
void TalkWindow_DestroyAll(void);
}

extern "C" {
void TalkWindow_CreateAll(void);
}

extern "C" {
u8 Talk_ColorTagToTextColor(u32 x);
}

extern "C" {
void CommRecord_PackSource(void *p, int a, int b);
}

extern "C" {
void InputModeIcon_Draw(void);
}

extern "C" {
void InputModeIcon_Update(void);
}

extern "C" {
void InputModeIcon_Exit(void);
}

extern "C" {
void InputModeIcon_Init(void);
}

extern "C" {
BOOL InputMode_IsButtons(void);
}

extern "C" {
void InputMode_SetTouch(void);
}

extern "C" {
void InputMode_SetButtons(void);
}

extern "C" {
void FieldInfoBalloon_Draw(void);
}

extern "C" {
void FieldInfoBalloon_Update(void);
}

extern "C" {
void FieldInfoBalloon_Release(void);
}

extern "C" {
void FieldInfoBalloon_Init(void);
}

extern "C" {
void *Heap_Alloc(void *heap, u32 size);
}

extern "C" {
void Heap_Free(void *heap, void *ptr);
}

extern "C" {
void NNS_FndRemoveListObject(void *list, void *obj);
}

extern "C" {
void NNS_FndAppendListObject(void *list, void *obj);
}

extern "C" {
void MI_CpuFill8(void *dst, u32 value, u32 size);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 size);
}

extern "C" {
void FS_CloseFile(void *file);
}

extern "C" {
void FS_InitFile(void *file);
}

extern "C" {
BOOL FS_OpenFile(void *file, const char *path);
}

extern "C" {
char *func_0212a120(char *s, s32 c);
}

extern "C" {
int strcmp(const u8 *a, const u8 *b);
}

extern "C" {
char *func_0212a2ec(char *dst, const char *src, u32 n);
}

extern "C" {
char *func_0212a360(char *dst, const char *src);
}

extern "C" {
u32 func_0212a438(const char *s);
}

extern "C" {
// Script stack helpers (another file)
void func_020a8c9c(void *list);
}

extern "C" {
void func_020a8cb0(void *list);
}

extern "C" {
BOOL func_020a8cb4(void *list);
}

extern "C" {
void func_020a8cc4(void *list, u8 **p);
}

extern "C" {
u8 **func_020a8cd8(void *list);
}

extern "C" {
void func_020a8ce4(void *list);
}

extern "C" {
// This file
BOOL Msg_EncodeGameChar(u8 *out, const u8 *src);
}

extern "C" {
BOOL Msg_DecodeGameChar(char *out, u8 c);
}

extern "C" {
u32 Msg_GetCharAt(u32 a, u32 b);
}

extern "C" {
BOOL Input_IsTouchBlocked(void);
}

extern "C" {
BOOL Input_IsKeyBlocked(void);
}

extern "C" {
void Input_ResetMode(void);
}

extern "C" {
u16 Msg_ReadU16(u8 *p, u32 i);
}

extern "C" {
u8 Msg_ReadU8(u8 *p, u32 i);
}

extern "C" {
u8 Bmg_ReadU8(void *p);
}

extern "C" {
u16 Bmg_ReadU16(void *p);
}

extern "C" {
u32 Bmg_ReadU32(void *p);
}

extern "C" {
u32 Bmg_ReadMagic(void *p);
}

extern "C" {
void MsgUiProc_HideObjPlane(void);
}

extern "C" {
void MsgUiProc_ShowObjPlane(void);
}

extern "C" {
extern void *gTextHeap;
}

extern "C" {
extern u8 gTextLabelList[];
}

extern "C" {
extern u32 sBmgMsgAttrTableA[];
}

extern "C" {
extern u32 sBmgMsgAttrTableB[];
}

extern "C" {
extern u32 sBmgMsgAttrTableC[];
}

extern "C" {
extern u8 sColorTags[][7];
}

extern "C" {
extern u8 gTouchCurY;
}

extern "C" {
extern u8 gTouchCurX;
}

extern "C" {
extern u8 gTouchPressY;
}

extern "C" {
extern u8 gTouchPressX;
}

extern "C" {
extern u8 gTouchHeld;
}

extern "C" {
extern u8 gTouchChanged;
}

extern "C" {
extern u16 gPad[2];
}

extern "C" {
extern u8 sInputButtonMode;
}

extern "C" {
extern u8 gU8None;
}

extern "C" {
extern u8 sInputLocked;
}

extern "C" {
extern u8 data_021edd14;
}

class MsgString;



class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};


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

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL appendRange(u8 *start, u8 *end);
    BOOL assignRange(u8 *start, u8 *end);
    BOOL equals(MsgString *other);
    u8 appendString(MsgString *other);
    u8 append(u8 *str);
    u8 setLine(u8 *str);
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    u8 copy(MsgString *other);
    u8 set(u8 *str);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    virtual u32 capacity();
    virtual u8 *data();
    void initEmpty();
};

// Buffer defined in another file (ctor func_020aa8e0, dtor func_020aa8c8), 0x34 bytes
class Unk_020aa8e0 : public MsgString {
public:
    Unk_020aa8e0();
    virtual ~Unk_020aa8e0();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u8 unk_14[0x20];
};

class MsgRequest {
public:
    virtual ~MsgRequest();
    virtual void vfunc_08();
    MsgRequest();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

struct BmgMsgAttr {
    u32 textOffset;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

// Script interpreter root
class MsgParser {
public:
    MsgParser();
    virtual ~MsgParser();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    void popText();
    void pushText(u8 *p);
    void begin(u8 *p);
    BOOL step(u32 arg);
    BOOL isLeadByte(u32 c);
    void unreadTag(u8 *p);
    void skip(s32 n);
    void processTag();
    void reset();

    /* 0x04 */ u8 *cursor;
    /* 0x08 */ u8 callStack[0x1c];
};

class MsgWalker : public MsgParser {
public:
    MsgWalker() {}
    virtual ~MsgWalker() {}
    virtual BOOL canContinue();
    u8 *run(BOOL arg);
};

class MsgQuery : public MsgWalker {
public:
    MsgQuery();
    virtual ~MsgQuery();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 v);
    virtual void onTag(u8 *cmd);
    virtual BOOL canContinue();

    void onTagFind();
    void onCharCountLines();
    void onCharCount();
    void onCharFindNth();
    void resetQuery();

    /* 0x24 */ u32 mode;
    /* 0x28 */ MsgTag tag;
    /* 0x3c */ u32 curChar;
    /* 0x40 */ s32 findGroup;
    /* 0x44 */ s32 findId;
    /* 0x48 */ u32 targetIndex;
    /* 0x4c */ u32 charCount;
    /* 0x50 */ u32 targetLines;
    /* 0x54 */ u32 lineCount;
    /* 0x58 */ u8 isDone;
};

class MsgProcessor;

// Text drawn by running a script through MsgProcessor
class MsgTextLabel : public TextLabel {
public:
    MsgTextLabel(s32 arg1, s32 arg2, s32 arg3);
    MsgTextLabel(u32 arg1, s32 arg2, s32 arg3);
    virtual ~MsgTextLabel();
    virtual void draw();
    virtual u32 measureWidth();

    void onTag(u8 *p);
    void onChar(u32 c);
    void onEnd();
    void onBegin();
    void setProcessor(MsgProcessor *v);

    /* 0x7c */ u32 mode;
    /* 0x80 */ MsgProcessor *processor;
};

class MsgProcessor : public MsgParser {
public:
    MsgProcessor(u8 flag);
    virtual ~MsgProcessor();

    void clearStopAtNewline();
    void setStopAtNewline();
    void clearLabel();
    void setLabel(MsgTextLabel *p);
    u32 run(u8 *p);

    /* 0x24 */ MsgTextLabel *label;
    /* 0x28 */ u8 stopAtNewline;
};

class MsgRenderProcessor : public MsgProcessor {
public:
    MsgRenderProcessor();
    virtual ~MsgRenderProcessor();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    /* 0x2c */ u32 altTextEnd;
};

class MsgCopyProcessor : public MsgProcessor {
public:
    MsgCopyProcessor();
    virtual ~MsgCopyProcessor();
    virtual void onEnd();
    u8 getResult();
    void finish();
    void beginCopy(MsgString *s, u8 *str, u32 mode, u8 flag);

    /* 0x2c */ MsgString *dest;
    /* 0x30 */ u8 *srcText;
    /* 0x34 */ u32 copyMode;
    /* 0x38 */ u8 result;
};


// BMG message file reader
class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    BOOL readText();
    BOOL readInfEntryWithAttr();
    BOOL readInfEntry();
    BOOL readDatHeader();
    BOOL readInfHeader();
    BOOL readFileHeader();
    void resetState();
    BOOL loadMessage(u8 *arg1);
    void close();
    u8 open(const char *path);

    /* 0x04 */ u8 hasAttributes;
    /* 0x05 */ u8 filePath[0x3f];
    /* 0x44 */ u8 file[0x48];
    /* 0x8c */ u8 isOpen;
    /* 0x8d */ u8 msgIndex;
    /* 0x90 */ u32 entry[3];
    /* 0x9c */ u32 textOffset;
    /* 0xa0 */ u32 textSize;
};

class MsgUiProc : public GameProc {
public:
    MsgUiProc();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~MsgUiProc();
};

struct BmgInfEntryAttr {
    u32 textOffset;
    u8 attrs[6];
};

struct BmgInfHeader {
    u32 magic;
    u32 size;
    u16 msgCount;
    u16 entrySize;
    u16 unk_0c;
    u8 unk_0e;
};

struct BmgDatHeader {
    u32 magic;
    u32 size;
    u32 unk_08;
};

struct BmgFileHeader {
    u32 magic;
    u32 type;
    u32 fileSize;
    u32 sectionCount;
    u8 encoding;
    u8 pad[0xb];
    u32 unk_1c;
};

struct Flag18 {
    u8 pad[0x18];
    u8 flag;
};

extern "C" {
extern BmgInfHeader sBmgInfHeader;
}

extern "C" {
extern BmgDatHeader sBmgDatHeader;
}

extern "C" {
extern BmgFileHeader sBmgFileHeader;
}

extern MsgProcessor gMsgRenderProcessor;
extern MsgCopyProcessor gMsgCopyProcessor;
extern MsgQuery gMsgQuery;
extern Flag18 data_021edcfc;
// prototypes (test harness)
extern "C" MsgUiProc *MsgUiProc_Create(void);


// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

// ---- MsgUiProc
extern "C" MsgUiProc *MsgUiProc_Create(void) {
    return new MsgUiProc;
}

MsgUiProc::MsgUiProc() {}

MsgUiProc::~MsgUiProc() {}

BOOL MsgUiProc::vfunc_00() {
    InputModeIcon_Init();
    Input_ResetMode();
    AbAllObjGfx_Upload();
    HudObjGfx_LoadForScene();
    HudObjGfx_SetMsgUiActive();
    TalkWindow_CreateAll();
    FieldInfoBalloon_Init();
    MsgUiProc_ShowObjPlane();
    return TRUE;
}

BOOL MsgUiProc::vfunc_0c() {
    MsgUiProc_HideObjPlane();
    FieldInfoBalloon_Release();
    TalkWindow_DestroyAll();
    HudObjGfx_ClearMsgUiActive();
    InputModeIcon_Exit();
    return TRUE;
}

BOOL MsgUiProc::onExecute() {
    InputModeIcon_Update();
    TalkWindow_UpdateAll();
    FieldInfoBalloon_Update();
    return TRUE;
}

BOOL MsgUiProc::onDraw() {
    FieldInfoBalloon_Draw();
    TalkWindow_DrawAll();
    InputModeIcon_Draw();
    return TRUE;
}


// ---- MsgTag

// ---- BmgMsgAttr

extern "C" {
void BmgMsgAttr_Clear(BmgMsgAttr *s);
}

// ---- Touch input
static inline BOOL IsTouching() {
    return gTouchHeld != 0 && gTouchChanged != 0;
}

// ---- MsgQuery
// MsgTag::MsgTag(), which func_020a6a0c calls to re-construct its token in place. A placement new adds a
// null check, and C++ has no other way to call a constructor on an existing object.
extern "C" void func_020a776c(MsgTag *token);

extern "C" {
u32 Msg_CountChars(u32 a);
}

