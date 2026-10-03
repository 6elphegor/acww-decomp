#include "types.h"
#include "text/Unk_02050288.h"
#include "Unk_020d8c7c.h"

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
void _ZN12MsgCallStackC1Ev(void *list);
}

extern "C" {
void _ZN12MsgCallStackD1Ev(void *list);
}

extern "C" {
BOOL _ZN12MsgCallStack7isEmptyEv(void *list);
}

extern "C" {
void _ZN12MsgCallStack4pushERKj(void *list, u8 **p);
}

extern "C" {
u8 **_ZN12MsgCallStack3topEv(void *list);
}

extern "C" {
void _ZN12MsgCallStack3popEv(void *list);
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

extern u8 sInputButtonMode;

extern "C" {
}

extern u8 sInputLocked;

extern "C" {
}

// class of the byte globals registered with the destructor at 0x020082a8
struct Unk_02008040 {
    u8 v;
    Unk_02008040(u8 x) { v = x; }
    ~Unk_02008040();
};

// scene registration record
struct Unk_020e29e0_Rec {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
};

extern Unk_02008040 gU8None;
extern Unk_02008040 gTalkMsgIndexNone;
extern Unk_02008040 gTalkMsgIndexEnd;
extern const u8 sColorTags[10][7];
extern const u32 sBmgMsgAttrTableA[25];
extern const u32 sBmgMsgAttrTableB[25];
extern const u32 sBmgMsgAttrTableC[25];
extern Unk_020e29e0_Rec sMsgUiProcProfile;

class MsgString;

// Script command token, 0x14 bytes
class MsgTag {
public:
    MsgTag();
    u8 getArgU8();
    void getAltTextArgs(u32 *a, char **b, char **c);
    void getStrings3(char **a, char **b, char **c);
    void getStrings2(char **a, char **b);
    s32 getSlotIndex();
    BOOL isSlotTag();
    u32 readArgBytes8Strings2(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, MsgString *s5,
                      MsgString *s6);
    u32 getTrailingStringsSize();
    u32 readArgStrings5(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2, u8 *s3,
                      MsgString *s4, u8 *s5, MsgString *s6);
    u32 readArgStrings4(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2, u8 *s3,
                      MsgString *s4);
    u32 readArgStrings3(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2);
    u32 readArgStrings2(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0);
    void getArgU16(u16 *out);
    void getArgBytes(u8 *buf, s32 n);
    void getArgs5(u8 *a, u8 *b, u8 *c, u8 *d, u8 *e);
    void getArgs4(u8 *a, u8 *b, u8 *c, u8 *d);
    void getArgs3(u8 *a, u8 *b, u8 *c);
    void getArgs2(u8 *a, u8 *b);
    void getArgs1(u8 *a);
    void parse(u8 *p);

    void eq(s32 x, s32 y, u8 *f) {
        if (unk_00 == x && unk_04 == y) *f = 1;
    }

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};
class MsgParser;
class MsgStringAttr;
class MsgProcessor;
class MsgWalker;
class EncodedString;
class MsgRequest;
class MsgRenderProcessor;
class MsgTextLabel;
class MsgString;
class MsgQuery;
class MsgString33;
class MsgCopyProcessor;
class BmgReader;
class MsgParser;
class MsgStringAttr;
class MsgProcessor;
class MsgWalker;
class EncodedString;
class MsgRequest;
class MsgRenderProcessor;
class MsgTextLabel;
class MsgString;
class MsgQuery;
class MsgString33;
class MsgCopyProcessor;
class BmgReader;
class MsgParser;
class MsgStringAttr;
class MsgProcessor;
class MsgWalker;
class EncodedString;
class MsgRequest;
class MsgRenderProcessor;
class MsgTextLabel;
class MsgString;
class MsgQuery;
class MsgString33;
class MsgCopyProcessor;
class BmgReader;

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
    virtual u32 capacity();
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 capacity();
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

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

// 0x020e2a08: small state object (position + two bytes)
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

class MsgProcessor : public MsgParser {
public:
    MsgProcessor(u8 flag);
    virtual ~MsgProcessor();

    void clearStopAtNewline();
    void setStopAtNewline();
    void clearLabel();
    void setLabel(MsgTextLabel *p);
    u32 run(u8 *p);

    /* 0x24 */ MsgTextLabel *unk_24;
    /* 0x28 */ u8 unk_28;
};

class MsgWalker : public MsgParser {
public:
    MsgWalker() {}
    virtual ~MsgWalker() {}
    virtual BOOL canContinue();
    u8 *run(BOOL arg);
};

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

class MsgRequest {
public:
    virtual ~MsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c() = 0;
    MsgRequest();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class MsgRenderProcessor : public MsgProcessor {
public:
    MsgRenderProcessor();
    virtual ~MsgRenderProcessor();
    virtual void onBegin();
    virtual void onEnd();
    virtual void onChar(u32 c);
    virtual void onTag(u8 *p);

    /* 0x2c */ u32 unk_2c;
};

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

    /* 0x7c */ u32 unk_7c;
    /* 0x80 */ MsgProcessor *unk_80;
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

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
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

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ MsgTag unk_28;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u32 unk_48;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u8 unk_58;
};

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    virtual u32 capacity();
    virtual u8 *data();
    void initEmpty();
};

class MsgCopyProcessor : public MsgProcessor {
public:
    MsgCopyProcessor();
    virtual ~MsgCopyProcessor();
    virtual void onEnd();
    u8 getResult();
    void finish();
    void beginCopy(MsgString *s, u8 *str, u32 mode, u8 flag);

    /* 0x2c */ MsgString *unk_2c;
    /* 0x30 */ u8 *unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38;
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

    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05[0x3f];
    /* 0x44 */ u8 unk_44[0x48];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x90 */ u32 unk_90[3];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
};

// Buffer defined in another file (ctor func_020aa8e0, dtor func_020aa8c8), 0x34 bytes
class ChoiceString : public MsgString {
public:
    ChoiceString();
    virtual ~ChoiceString();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x14 */ u8 unk_14[0x20];
};

struct BmgMsgAttr {
    u32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

class MsgProcessor;

class MsgRunner {
public:
    MsgRunner(MsgWalker *obj);
    void start(u8 *p);
    BOOL advance();
    void reset();

    /* 0x00 */ MsgWalker *unk_00;
    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 *unk_08;
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
    u32 unk_00;
    u8 unk_04[6];
};

struct BmgInfHeader {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e;
    u8 pad_0f[5];
};

struct BmgDatHeader {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct BmgFileHeader {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
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

extern MsgRenderProcessor gMsgRenderProcessor;
extern MsgCopyProcessor gMsgCopyProcessor;
extern MsgQuery gMsgQuery;

struct Unk_020a88fc_Pad {
    s32 v[2];
    Unk_020a88fc_Pad() {}
    ~Unk_020a88fc_Pad() {}
};

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
extern "C" void _ZN6MsgTagC1Ev(MsgTag *token);

extern "C" {
u32 Msg_CountChars(u32 a);
}
// prototypes (test harness)
extern "C" void MsgUiProc_ShowObjPlane();
extern "C" void MsgUiProc_HideObjPlane();
extern "C" u32 Bmg_ReadMagic(void *p);
extern "C" u32 Bmg_ReadU32(void *p);
extern "C" u16 Bmg_ReadU16(void *p);
extern "C" u8 Bmg_ReadU8(void *p);
extern "C" u8 *Bmg_GetMsgAttr(u8 *p);
extern "C" void MsgRunner_DtorStub(void);
extern "C" MsgTextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
extern "C" MsgTextLabel *MsgTextLabel_CreateBuffer(s32 a, s32 b, s32 c);
extern "C" void MsgTextLabel_Destroy(MsgTextLabel *obj);
extern "C" u32 Msg_MeasureWidth(u32 arg);
extern "C" u32 TextLabel_MeasureMsgWidth(TextLabel *obj);
extern "C" BOOL EncodedString_SetRaw(StrBuf *buf, const void *src, s32 len);
extern "C" u8 Msg_ReadU8(u8 *p, u32 i);
extern "C" u16 Msg_ReadU16(u8 *p, u32 i);
extern "C" void MsgTag_DtorStub();
extern "C" u8 *Msg_GetColorTag(s32 i);
extern "C" BmgMsgAttr *BmgMsgAttr_Init(BmgMsgAttr *s);
extern "C" void BmgMsgAttr_Fini();
extern "C" void BmgMsgAttr_Copy(BmgMsgAttr *d, BmgMsgAttr *s);
extern "C" void BmgMsgAttr_Clear(BmgMsgAttr *s);
extern "C" void BmgMsgAttr_Get();
extern "C" u8 BmgMsgAttr_GetByte04(BmgMsgAttr *s);
extern "C" u8 BmgMsgAttr_GetByte05(BmgMsgAttr *s);
extern "C" u8 BmgMsgAttr_GetByte06(BmgMsgAttr *s);
extern "C" u8 BmgMsgAttr_GetByte07(BmgMsgAttr *s);
extern "C" u8 BmgMsgAttr_GetByte09(BmgMsgAttr *s);
extern "C" void BmgMsgAttr_GetByte08(u8 *out, BmgMsgAttr *s);
extern "C" u32 BmgMsgAttr_LookupUnkA(BmgMsgAttr *s);
extern "C" u32 BmgMsgAttr_LookupUnkB(BmgMsgAttr *s);
extern "C" u32 BmgMsgAttr_LookupUnkC(BmgMsgAttr *s);
extern "C" BOOL Input_IsTouchTrig();
extern "C" BOOL Input_IsTouchTrigInRect(s32 x0, s32 x1, s32 y0, s32 y1);
extern "C" BOOL Input_GetTouchTrigPos(u32 *x, u32 *y);
extern "C" BOOL Input_GetTouchHeldPos(u32 *a, u32 *b);
extern "C" BOOL Input_IsAnyKeyTrig(void);
extern "C" BOOL Input_IsATrig(void);
extern "C" BOOL Input_IsBTrig(void);
extern "C" BOOL Input_IsUpTrig(void);
extern "C" BOOL Input_IsDownTrig(void);
extern "C" BOOL Input_IsStartTrig(void);
extern "C" BOOL Input_IsAHeld(void);
extern "C" BOOL Input_IsBHeld(void);
extern "C" BOOL Input_IsUpHeld(void);
extern "C" BOOL Input_IsDownHeld(void);
extern "C" void Input_Lock(void);
extern "C" void Input_Unlock(void);
extern "C" void Input_SetTouchMode(void);
extern "C" void Input_SetButtonMode(void);
extern "C" BOOL Input_IsTouchMode(void);
extern "C" u8 Input_IsButtonMode(void);
extern "C" void Input_ResetMode(void);
extern "C" void Input_LoadMode(void);
extern "C" void Input_StoreMode(void);
extern "C" BOOL Input_IsKeyBlocked(void);
extern "C" BOOL Input_IsTouchBlocked(void);
extern "C" u32 Msg_FindTag(u32 a, s32 b, s32 c);
extern "C" u32 Msg_GetCharAt(u32 a, u32 b);
extern "C" u32 Msg_GetCharFromEnd(u32 a, u32 b);
extern "C" u32 Msg_CountChars(u32 a);
extern "C" u32 Msg_SkipLines(u32 a, u32 b);
extern "C" BOOL Msg_DecodeGameChar(char *out, u8 c);
extern "C" BOOL Msg_EncodeGameChar(u8 *out, const u8 *src);


extern "C" void MsgUiProc_Create(void);
const u32 sBmgMsgAttrTableC[25] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
Unk_02008040 gU8None(0xff);
u8 sInputLocked;
BmgFileHeader sBmgFileHeader;

extern "C" void MsgUiProc_ShowObjPlane() { Gfx2d_ShowMainPlanes(0x10); }

extern "C" void MsgUiProc_HideObjPlane() { Gfx2d_HideMainPlanes(0x10); }

// ---- MsgStringAttr
MsgStringAttr::MsgStringAttr() {
    unk_04 = -1;
    unk_08 = gU8None.v;
    unk_09 = gU8None.v;
}

MsgStringAttr::~MsgStringAttr() {}

void MsgStringAttr::copyFrom(MsgStringAttr *other) {
    unk_04 = other->unk_04;
    unk_08 = other->unk_08;
    unk_09 = other->unk_09;
}

void MsgStringAttr::reset() {
    unk_04 = -1;
    unk_08 = gU8None.v;
    unk_09 = gU8None.v;
}

extern "C" u32 Bmg_ReadMagic(void *p) {
    u8 tmp[8];
    u8 *src, *dst;
    dst = tmp;
    src = (u8 *)p + 4;
    while (src != p) {
        src--;
        *dst = *src;
        dst++;
    }
    return *(u32 *)tmp;
}

extern "C" u32 Bmg_ReadU32(void *p) { return *(u32 *)p; }

extern "C" u16 Bmg_ReadU16(void *p) { return *(u16 *)p; }

extern "C" u8 Bmg_ReadU8(void *p) { return *(u8 *)p; }

// ---- BmgReader
BmgReader::BmgReader(u8 arg1) {
    unk_04 = arg1;
    unk_8c = 0;
    unk_8d = gU8None.v;
    unk_9c = 0;
    unk_a0 = 0;
    FS_InitFile(unk_44);
    MI_CpuFill8(&unk_05, 0, 0x3f);
}

BmgReader::~BmgReader() {
    close();
}

u8 BmgReader::open(const char *path) {
    func_0212a2ec((char *)unk_05, path, 0x3e);
    unk_8c = FS_OpenFile(unk_44, path) ? 1 : 0;
    return unk_8c;
}

void BmgReader::close() {
    if (unk_8c != 0) {
        FS_CloseFile(unk_44);
        unk_8c = 0;
        unk_8d = gU8None.v;
    }
}

BOOL BmgReader::loadMessage(u8 *arg1) {
    BOOL ok;
    resetState();
    unk_8d = *arg1;
    BOOL r = readFileHeader();
    ok = TRUE;
    if (!(r & ok)) {
        ok = FALSE;
    }
    if (ok) {
        ok &= readInfHeader();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    if (ok) {
        ok &= readDatHeader();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    if (ok) {
        if (unk_04 != 0) {
            ok &= readInfEntryWithAttr();
            if (ok) ok = TRUE; else ok = FALSE;
        } else {
            ok &= readInfEntry();
            if (ok) ok = TRUE; else ok = FALSE;
        }
    }
    if (ok) {
        ok &= readText();
        if (ok) ok = TRUE; else ok = FALSE;
    }
    return ok;
}

void BmgReader::resetState() {
    Unk_020a88fc_Pad pad;
    unk_8d = 0;
    MI_CpuFill8(unk_90, 0, 12);
    unk_9c = 0;
    unk_a0 = 0;
    MI_CpuFill8(&sBmgFileHeader, 0, 0x20);
    MI_CpuFill8(&sBmgInfHeader, 0, 0x14);
    MI_CpuFill8(&sBmgDatHeader, 0, 0xc);
}

BOOL BmgReader::readFileHeader() {
    File_ReadRange(unk_44, &sBmgFileHeader, 0x20, 0);
    sBmgFileHeader.unk_00 = Bmg_ReadMagic(&sBmgFileHeader);
    sBmgFileHeader.unk_04 = Bmg_ReadMagic(&sBmgFileHeader.unk_04);
    sBmgFileHeader.unk_08 = Bmg_ReadU32(&sBmgFileHeader.unk_08);
    sBmgFileHeader.unk_0c = Bmg_ReadU32(&sBmgFileHeader.unk_0c);
    sBmgFileHeader.unk_10 = Bmg_ReadU8(&sBmgFileHeader.unk_10);
    sBmgFileHeader.unk_1c = Bmg_ReadU32(&sBmgFileHeader.unk_1c);
    BOOL c1 = sBmgFileHeader.unk_04 == 0x626d6731;
    BOOL c2 = sBmgFileHeader.unk_08 != 0;
    BOOL c3 = sBmgFileHeader.unk_0c == 2;
    if (sBmgFileHeader.unk_00 == 0x4d455347 && c1 && c2 && c3) {
        return TRUE;
    }
    return FALSE;
}

BOOL BmgReader::readInfHeader() {
    File_ReadRange(unk_44, &sBmgInfHeader, 0x14, 0x20);
    sBmgInfHeader.unk_00 = Bmg_ReadMagic(&sBmgInfHeader);
    sBmgInfHeader.unk_04 = Bmg_ReadU32(&sBmgInfHeader.unk_04);
    sBmgInfHeader.unk_08 = Bmg_ReadU16(&sBmgInfHeader.unk_08);
    sBmgInfHeader.unk_0a = Bmg_ReadU16(&sBmgInfHeader.unk_0a);
    sBmgInfHeader.unk_0c = Bmg_ReadU16(&sBmgInfHeader.unk_0c);
    sBmgInfHeader.unk_0e = Bmg_ReadU8(&sBmgInfHeader.unk_0e);
    BOOL c1 = sBmgInfHeader.unk_00 == 0x494e4631;
    u16 n = sBmgInfHeader.unk_08;
    BOOL c2 = FALSE;
    if (n <= 0x100 && unk_8d < n) {
        c2 = TRUE;
    }
    BOOL c3 = sBmgInfHeader.unk_0a == (unk_04 ? 12 : 4);
    BOOL c4 = sBmgInfHeader.unk_0c == 0;
    if (c1 && c2 && c3 && c4) {
        return TRUE;
    }
    return FALSE;
}

BOOL BmgReader::readDatHeader() {
    File_ReadRange(unk_44, &sBmgDatHeader, 12, sBmgInfHeader.unk_04 + 0x20);
    sBmgDatHeader.unk_00 = Bmg_ReadMagic(&sBmgDatHeader);
    sBmgDatHeader.unk_04 = Bmg_ReadU32(&sBmgDatHeader.unk_04 + 0);
    return sBmgDatHeader.unk_00 == 0x44415431;
}

BOOL BmgReader::readInfEntry() {
    u32 buf[2];
    u32 off = unk_8d * 4 + 0x10;
    BOOL last = (u32)(sBmgInfHeader.unk_08 - 1) == unk_8d;
    File_ReadRange(unk_44, buf, last ? 4 : 8, off + 0x20);
    unk_9c = Bmg_ReadU32(&buf[0]);
    if (last) {
        unk_a0 = sBmgDatHeader.unk_04 - (unk_9c + 8);
    } else {
        unk_a0 = Bmg_ReadU32(&buf[1]) - unk_9c;
    }
    unk_90[0] = unk_9c;
    return TRUE;
}

BOOL BmgReader::readInfEntryWithAttr() {
    BmgInfEntryAttr buf[2];
    s32 count;
    s32 i;
    u32 off = unk_8d * 12 + 0x10;
    BOOL last = (u32)(sBmgInfHeader.unk_08 - 1) == unk_8d;
    File_ReadRange(unk_44, buf, last ? 12 : 24, off + 0x20);
    if (last) {
        count = 1;
    } else {
        count = 2;
    }
    for (i = 0; i < count; i++) {
        BmgInfEntryAttr *p = &buf[i];
        p->unk_00 = Bmg_ReadU32(&p->unk_00);
        p->unk_04[0] = Bmg_ReadU8(&p->unk_04[0]);
        p->unk_04[1] = Bmg_ReadU8(&p->unk_04[1]);
        p->unk_04[2] = Bmg_ReadU8(&p->unk_04[2]);
        p->unk_04[3] = Bmg_ReadU8(&p->unk_04[3]);
        p->unk_04[4] = Bmg_ReadU8(&p->unk_04[4]);
        p->unk_04[5] = Bmg_ReadU8(&p->unk_04[5]);
    }
    unk_9c = buf[0].unk_00;
    if (last) {
        unk_a0 = sBmgDatHeader.unk_04 - (unk_9c + 8);
    } else {
        unk_a0 = buf[1].unk_00 - unk_9c;
    }
    MI_CpuCopy8(buf, unk_90, 12);
    return TRUE;
}

BOOL BmgReader::readText() {
    u32 a = getBuffer();
    u32 b = getBufferSize();
    u32 off = unk_9c + 8;
    if (b >= unk_a0) {
        b = unk_a0;
    }
    File_ReadRange(unk_44, (void *)a, b, sBmgInfHeader.unk_04 + 0x20 + off);
    return TRUE;
}

// ---- MsgRunner
extern "C" u8 *Bmg_GetMsgAttr(u8 *p) {
    u8 *r = NULL;
    if (p[4] != 0) {
        r = p + 0x90;
    }
    return r;
}

MsgRunner::MsgRunner(MsgWalker *obj) {
    unk_00 = obj;
    unk_04 = NULL;
    unk_08 = NULL;
}

extern "C" void MsgRunner_DtorStub(void) {}

void MsgRunner::reset() {
    unk_00->reset();
    unk_04 = NULL;
    unk_08 = NULL;
}

BOOL MsgRunner::advance() {
    BOOL r = FALSE;
    if (unk_04 != NULL) {
        unk_08 = unk_00->run(FALSE);
        if (unk_08 != NULL) {
            r = TRUE;
        } else {
            unk_04 = NULL;
        }
    }
    return r;
}

void MsgRunner::start(u8 *p) {
    unk_04 = p;
    unk_08 = p;
    unk_00->begin(p);
}

// ---- MsgParser
void MsgParser::reset() {
    unk_04 = NULL;
    while (!_ZN12MsgCallStack7isEmptyEv(&unk_08)) {
        _ZN12MsgCallStack3popEv(&unk_08);
    }
}

MsgParser::MsgParser() {
    unk_04 = NULL;
    _ZN12MsgCallStackC1Ev(&unk_08);
}

MsgParser::~MsgParser() {
    reset();
    _ZN12MsgCallStackD1Ev(&unk_08);
}

void MsgParser::onBegin() {}

void MsgParser::onEnd() {}

void MsgParser::onChar(u32 c) {}

void MsgParser::onTag(u8 *p) {}

void MsgParser::processTag() {
    u8 *p = unk_04;
    unk_04 = p + p[1];
    onTag(p);
}

void MsgParser::skip(s32 n) {
    if (unk_04 != NULL) {
        unk_04 = unk_04 + n;
    }
}

void MsgParser::unreadTag(u8 *p) {
    unk_04 = unk_04 - p[1];
}

BOOL MsgParser::isLeadByte(u32 c) {
    return FALSE;
}

BOOL MsgParser::step(u32 arg) {
    u32 c = *unk_04;
    BOOL r = TRUE;
    if (c == 0 || (arg != 0 && c == 0xa)) {
        if (_ZN12MsgCallStack7isEmptyEv(&unk_08)) {
            onEnd();
            r = FALSE;
        } else {
            popText();
        }
    } else if (c == 0x1a) {
        processTag();
    } else {
        if (isLeadByte(c)) {
            c = c << 8;
            unk_04 = unk_04 + 1;
            c |= *unk_04;
        }
        unk_04 = unk_04 + 1;
        onChar(c);
    }
    return r;
}

void MsgParser::begin(u8 *p) {
    unk_04 = p;
    onBegin();
}

void MsgParser::pushText(u8 *p) {
    if (p != NULL) {
        _ZN12MsgCallStack4pushERKj(&unk_08, &unk_04);
        unk_04 = p;
    }
}

void MsgParser::popText() {
    unk_04 = *_ZN12MsgCallStack3topEv(&unk_08);
    _ZN12MsgCallStack3popEv(&unk_08);
}

// ---- MsgWalker
BOOL MsgWalker::canContinue() {
    return TRUE;
}

u8 *MsgWalker::run(BOOL arg) {
    u8 *r = NULL;
    for (;;) {
        if (unk_04 == (u8 *)arg) {
            onEnd();
            break;
        }
        if (!canContinue()) {
            r = unk_04;
            break;
        }
        if (!step((u32)r)) {
            break;
        }
    }
    return r;
}

// ---- MsgProcessor
MsgProcessor::MsgProcessor(u8 flag) {
    unk_24 = NULL;
    unk_28 = flag;
}

MsgProcessor::~MsgProcessor() {}

u32 MsgProcessor::run(u8 *p) {
    for (;;) {
        if (unk_04 == p) {
            onEnd();
            break;
        }
        if (!step(unk_28)) {
            break;
        }
    }
    return 0;
}

void MsgProcessor::setLabel(MsgTextLabel *p) { unk_24 = p; }

void MsgProcessor::clearLabel() { unk_24 = NULL; }

void MsgProcessor::setStopAtNewline() { unk_28 = 1; }

void MsgProcessor::clearStopAtNewline() { unk_28 = 0; }

// ---- MsgRenderProcessor
MsgRenderProcessor::MsgRenderProcessor() : MsgProcessor(1) {
    unk_2c = 0;
}

MsgRenderProcessor::~MsgRenderProcessor() {}

void MsgRenderProcessor::onBegin() {
    if (unk_24 != NULL) {
        unk_24->onBegin();
    }
}

void MsgRenderProcessor::onEnd() {
    if (unk_24 != NULL) {
        unk_24->onEnd();
    }
}

void MsgRenderProcessor::onChar(u32 c) {
    if (unk_24 != NULL) {
        unk_24->onChar(c);
    }
    if (unk_2c != 0 && (u8 *)unk_04 == (u8 *)unk_2c) {
        unk_2c = 0;
        popText();
    }
}

void MsgRenderProcessor::onTag(u8 *p) {
    MsgTag s;
    s.parse(p);
    u32 a = s.unk_00;
    u32 b = s.unk_04;
    if (a == 2) {
        skip(s.getTrailingStringsSize());
    } else if (a == 0xff) {
        if (b == 2) {
            u32 x;
            char *y, *z;
            s.getAltTextArgs(&x, &y, &z);
            if (!Talk_IsAltTextEnabled()) {
                skip(x * 2);
                pushText((u8 *)z);
                unk_2c = (u32)y;
            }
        }
    } else if (a == 0) {
        u8 *r = NULL;
        if (b == 0) {
            r = Text_GetSpecialCharStr6();
        } else if (b == 1) {
            r = Text_GetSpecialCharStr7();
        } else if (b == 6) {
            r = Text_GetSpecialCharStr5();
        } else if (b == 7) {
            r = Text_GetSpecialCharStr4();
        } else if (b == 8) {
            r = Text_GetSpecialCharStr1();
        } else if (b == 9) {
            r = Text_GetSpecialCharStr9();
        } else if (b == 10) {
            r = Text_GetSpecialCharStr10();
        }
        if (r != NULL) {
            pushText(r);
        }
    }
    if (unk_24 != NULL) {
        unk_24->onTag(p);
    }
}

// ---- MsgTextLabel
extern "C" MsgTextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c) {
    BOOL ok = FALSE;
    void *mem = Heap_Alloc(gTextHeap, 0x84);
    MsgTextLabel *obj = NULL;
    if (mem != NULL) {
        obj = new (mem) MsgTextLabel(a, b, c);
        ok = TRUE;
    }
    if (ok) {
        NNS_FndAppendListObject(gTextLabelList, obj);
    }
    return obj;
}

extern "C" MsgTextLabel *MsgTextLabel_CreateBuffer(s32 a, s32 b, s32 c) {
    BOOL ok = FALSE;
    void *mem = Heap_Alloc(gTextHeap, 0x84);
    MsgTextLabel *obj = NULL;
    if (mem != NULL) {
        obj = new (mem) MsgTextLabel(a, b, c);
        ok = TRUE;
    }
    if (ok) {
        NNS_FndAppendListObject(gTextLabelList, obj);
    }
    return obj;
}

extern "C" void MsgTextLabel_Destroy(MsgTextLabel *obj) {
    if (obj != NULL) {
        NNS_FndRemoveListObject(gTextLabelList, obj);
        obj->~MsgTextLabel();
        Heap_Free(gTextHeap, obj);
    }
}

extern "C" u32 Msg_MeasureWidth(u32 arg) {
    u32 r = 0;
    MsgTextLabel *obj = MsgTextLabel_CreateVram(0, 1, 2);
    if (obj != NULL) {
        obj->unk_10 = arg;
        r = obj->measureWidth();
    }
    MsgTextLabel_Destroy(obj);
    return r;
}

extern "C" u32 TextLabel_MeasureMsgWidth(TextLabel *obj) {
    return Msg_MeasureWidth(obj->measureWidth());
}

MsgTextLabel::MsgTextLabel(u32 arg1, s32 arg2, s32 arg3) : TextLabel(arg1, arg2, arg3) {
    unk_7c = 0;
    unk_80 = NULL;
}

MsgTextLabel::MsgTextLabel(s32 arg1, s32 arg2, s32 arg3) : TextLabel(arg1, arg2, arg3) {
    unk_7c = 0;
    unk_80 = NULL;
}

MsgTextLabel::~MsgTextLabel() {}

void MsgTextLabel::setProcessor(MsgProcessor *v) { unk_80 = v; }

void MsgTextLabel::onBegin() {
    if (unk_7c == 1) {
        beginRow();
    } else if (unk_7c == 2) {
        beginMeasure();
    }
}

void MsgTextLabel::onEnd() {
    if (unk_7c == 1) {
        flushRow();
    } else if (unk_7c == 2) {
        endMeasure();
    }
}

void MsgTextLabel::onChar(u32 c) {
    if (unk_7c == 1) {
        drawChar(c);
    } else if (unk_7c == 2) {
        measureChar(c);
    }
}

void MsgTextLabel::onTag(u8 *p) {
    if (unk_7c == 1) {
        MsgTag s;
        s.parse(p);
        u32 a = *(volatile u32 *)&s.unk_00;
        u32 b = *(volatile u32 *)&s.unk_04;
        if (a == 0xff) {
            if (b == 0) {
                unk_38 = Talk_ColorTagToTextColor(s.getArgU8());
            }
        }
    }
}

void MsgTextLabel::draw() {
    MsgProcessor *p = unk_80;
    if (p == NULL) {
        p = &gMsgRenderProcessor;
    }
    unk_7c = 1;
    p->setLabel(this);
    p->reset();
    p->begin((u8 *)unk_10);
    p->run((u8 *)unk_14);
    p->clearLabel();
    unk_7c = 0;
}

u32 MsgTextLabel::measureWidth() {
    MsgProcessor *p = unk_80;
    if (p == NULL) {
        p = &gMsgRenderProcessor;
    }
    unk_7c = 2;
    p->setLabel(this);
    p->reset();
    p->begin((u8 *)unk_10);
    p->run((u8 *)unk_14);
    p->clearLabel();
    unk_7c = 0;
    return unk_68;
}

// ---- MsgCopyProcessor
MsgCopyProcessor::MsgCopyProcessor() : MsgProcessor(1) {
    unk_2c = NULL;
    unk_30 = NULL;
    unk_34 = 0;
    unk_38 = 0;
}

MsgCopyProcessor::~MsgCopyProcessor() {}

void MsgCopyProcessor::beginCopy(MsgString *s, u8 *str, u32 mode, u8 flag) {
    unk_2c = s;
    unk_30 = str;
    unk_34 = mode;
    unk_38 = 0;
    if (flag) {
        setStopAtNewline();
    } else {
        clearStopAtNewline();
    }
    begin(str);
}

void MsgCopyProcessor::finish() {
    unk_2c = NULL;
    unk_30 = NULL;
    unk_34 = 0;
    unk_38 = 0;
}

u8 MsgCopyProcessor::getResult() {
    return unk_38;
}

void MsgCopyProcessor::onEnd() {
    if (unk_2c != NULL) {
        if (unk_34 == 0) {
            unk_38 = unk_2c->assignRange(unk_30, unk_04);
        } else if (unk_34 == 1) {
            unk_38 = unk_2c->appendRange(unk_30, unk_04);
        }
    }
}

// ---- MsgString
MsgString::MsgString() : unk_04(0) {}

MsgString::~MsgString() {}

void MsgString::clear() {
    StrBuf_Clear((StrBuf *)this);
    unk_04 = 0;
    unk_08.reset();
}

u8 MsgString::set(u8 *str) {
    gMsgCopyProcessor.beginCopy(this, str, 0, 0);
    gMsgCopyProcessor.run(NULL);
    u8 r = gMsgCopyProcessor.getResult();
    gMsgCopyProcessor.finish();
    return r;
}

u8 MsgString::copy(MsgString *other) {
    u8 r = set(other->data());
    unk_08.copyFrom(&other->unk_08);
    return r;
}

BOOL MsgString::fromEncoded(EncodedString *src, BOOL a, BOOL b) {
    s32 srcSize = src->capacity();
    u8 *srcPtr = src->data();
    u8 *dst = data();
    u32 dstSize = capacity();
    u32 pos = 0;
    BOOL over = FALSE;
    BOOL done = FALSE;
    s32 i = 0;
    for (; i < srcSize;) {
        u8 *out = dst + pos;
        char tmp[8];
        u32 n = Msg_DecodeGameChar(tmp, *srcPtr);
        if (pos + n > dstSize) {
            over = TRUE;
        }
        if (!over) {
            if (n == 1) {
                s8 c = tmp[0];
                if (c == 0) {
                    done = TRUE;
                    if (b) {
                        func_0212a360(tmp, Text_GetSpecialCharStr3());
                        n = func_0212a438(tmp);
                        if (pos + n > dstSize) {
                            over = done;
                        }
                    }
                } else if (a) {
                    if (c == 0xa) {
                        func_0212a360(tmp, Text_GetSpecialCharStr2());
                        n = func_0212a438(tmp);
                        if (pos + n > dstSize) {
                            over = TRUE;
                        }
                    }
                }
            }
            if (!over) {
                for (u32 j = 0; j < n; j++) {
                    out[j] = tmp[j];
                }
            }
        }
        if (over) {
            break;
        }
        pos += n;
        if (done) {
            break;
        }
        i++;
        srcPtr++;
    }
    if (!over && pos < dstSize) {
        done = TRUE;
        while (pos < dstSize) {
            dst[pos] = 0;
            pos++;
        }
    }
    if (!done) {
        *(dst + dstSize - 1) = 0;
    }
    unk_08.copyFrom(&src->unk_04);
    if (!over && done) {
        return TRUE;
    }
    return FALSE;
}

u8 MsgString::setLine(u8 *str) {
    gMsgCopyProcessor.beginCopy(this, str, 0, 1);
    gMsgCopyProcessor.run(NULL);
    u8 r = gMsgCopyProcessor.getResult();
    gMsgCopyProcessor.finish();
    return r;
}

u8 MsgString::append(u8 *str) {
    gMsgCopyProcessor.beginCopy(this, str, 1, 0);
    gMsgCopyProcessor.run(NULL);
    u8 r = gMsgCopyProcessor.getResult();
    gMsgCopyProcessor.finish();
    return r;
}

u8 MsgString::appendString(MsgString *other) {
    return append(other->data());
}

BOOL MsgString::equals(MsgString *other) {
    u8 *o = other->data();
    return strcmp(data(), o) == 0;
}

BOOL MsgString::assignRange(u8 *start, u8 *end) {
    clear();
    u8 *buf = data();
    u32 cap = capacity();
    s32 len = end - start;
    BOOL ok;
    if ((u32)(len + 1) <= cap) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        unk_04 = len;
    } else {
        unk_04 = cap - 1;
    }
    MI_CpuCopy8(start, buf, unk_04);
    return ok;
}

BOOL MsgString::appendRange(u8 *start, u8 *end) {
    u8 *buf = data();
    u32 cap = capacity();
    buf += unk_04;
    cap -= unk_04;
    s32 len = end - start;
    BOOL ok;
    if ((u32)(len + 1) <= cap) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (!ok) {
        len = cap - 1;
    }
    MI_CpuCopy8(start, buf, len);
    unk_04 += len;
    return ok;
}

// ---- EncodedString
EncodedString::EncodedString() {}

EncodedString::~EncodedString() {}

extern "C" BOOL EncodedString_SetRaw(StrBuf *buf, const void *src, s32 len) {
    return StrBuf_SetBytes(buf, src, len);
}

BOOL EncodedString::fromMsgString(MsgString *src) {
    u8 *sp = src->data();
    u32 srcSize = src->capacity();
    u32 consumed = 0;
    u8 *dp = data();
    u32 dstSize = capacity();
    u32 count = 0;
    BOOL ok = TRUE;
    while (consumed < srcSize && count < dstSize) {
        u8 c;
        if (*sp == 0) {
            break;
        }
        u32 n = Msg_EncodeGameChar(&c, sp);
        if (n == 0) {
            n = 1;
            ok = FALSE;
        } else {
            *dp = c;
            dp++;
            count++;
        }
        sp += n;
        consumed += n;
    }
    if (count >= dstSize && *sp != 0) {
        ok = FALSE;
    }
    while (count < dstSize) {
        *dp = 0;
        count++;
        dp++;
    }
    unk_04.copyFrom(&src->unk_08);
    return ok;
}

// ---- MsgTag

extern "C" u8 Msg_ReadU8(u8 *p, u32 i) {
    u8 t = p[i];
    return Bmg_ReadU8(&t);
}

extern "C" u16 Msg_ReadU16(u8 *p, u32 i) {
    u8 *q = p + i;
    u16 t = q[0] | (q[1] << 8);
    return Bmg_ReadU16(&t);
}

void MsgTag::parse(u8 *p) {
    u8 a = Msg_ReadU8(p, 0);
    u8 b = Msg_ReadU8(p, 1);
    u8 c = Msg_ReadU8(p, 2);
    u16 d = Msg_ReadU16(p, 3);
    unk_00 = c;
    unk_04 = d;
    unk_08 = b - 5;
    unk_0c = (char *)(p + 5);
    unk_10 = p;
}

MsgTag::MsgTag() {
    unk_00 = -1;
    unk_04 = -1;
    unk_08 = 0;
    unk_0c = NULL;
}

extern "C" void MsgTag_DtorStub() {}

void MsgTag::getArgs1(u8 *a) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
}

void MsgTag::getArgs2(u8 *a, u8 *b) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
    *b = Msg_ReadU8((u8 *)unk_0c, 1);
}

void MsgTag::getArgs3(u8 *a, u8 *b, u8 *c) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
    *b = Msg_ReadU8((u8 *)unk_0c, 1);
    *c = Msg_ReadU8((u8 *)unk_0c, 2);
}

void MsgTag::getArgs4(u8 *a, u8 *b, u8 *c, u8 *d) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
    *b = Msg_ReadU8((u8 *)unk_0c, 1);
    *c = Msg_ReadU8((u8 *)unk_0c, 2);
    *d = Msg_ReadU8((u8 *)unk_0c, 3);
}

void MsgTag::getArgs5(u8 *a, u8 *b, u8 *c, u8 *d, u8 *e) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
    *b = Msg_ReadU8((u8 *)unk_0c, 1);
    *c = Msg_ReadU8((u8 *)unk_0c, 2);
    *d = Msg_ReadU8((u8 *)unk_0c, 3);
    *e = Msg_ReadU8((u8 *)unk_0c, 4);
}

void MsgTag::getArgBytes(u8 *buf, s32 n) {
    for (s32 i = 0; i < n; i++) buf[i] = Msg_ReadU8((u8 *)unk_0c, i);
}

void MsgTag::getArgU16(u16 *out) { *out = Msg_ReadU16((u8 *)unk_0c, 0); }

u32 MsgTag::readArgStrings2(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0) {
    u8 buf[2];
    MsgString *arr[2];
    getArgs2(&buf[0], &buf[1]);
    *a1 = buf[0];
    *a3 = buf[1];
    arr[0] = a2;
    arr[1] = s0;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (u32 i = 0; i < 2; i++) {
        MsgString *t = arr[i];
        t->setLine((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 MsgTag::readArgStrings3(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2) {
    u8 buf[8];
    MsgString *arr[3];
    getArgs3(&buf[0], &buf[1], &buf[2]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 3; i++) {
        MsgString *t = arr[i];
        t->setLine((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 MsgTag::readArgStrings4(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2,
                                u8 *s3, MsgString *s4) {
    u8 buf[8];
    MsgString *arr[4];
    getArgs4(&buf[0], &buf[1], &buf[2], &buf[3]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    *s3 = buf[3];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    arr[3] = s4;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 4; i++) {
        MsgString *t = arr[i];
        t->setLine((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 MsgTag::readArgStrings5(u8 *a1, MsgString *a2, u8 *a3, MsgString *s0, u8 *s1, MsgString *s2,
                                u8 *s3, MsgString *s4, u8 *s5, MsgString *s6) {
    u8 buf[12];
    MsgString *arr[5];
    getArgs5(&buf[0], &buf[1], &buf[2], &buf[3], &buf[4]);
    *a1 = buf[0];
    *a3 = buf[1];
    *s1 = buf[2];
    *s3 = buf[3];
    *s5 = buf[4];
    arr[0] = a2;
    arr[1] = s0;
    arr[2] = s2;
    arr[3] = s4;
    arr[4] = s6;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (s32 i = 0; i < 5; i++) {
        MsgString *t = arr[i];
        t->setLine((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

u32 MsgTag::getTrailingStringsSize() {
    s32 k = unk_04;
    u32 n = 0;
    if (k == 0 || k == 4) {
        n = 2;
    } else if (k == 1 || k == 5) {
        n = 3;
    } else if (k == 2 || k == 6) {
        n = 4;
    } else if (k == 3 || k == 7) {
        n = 5;
    }
    ChoiceString t;
    u32 total = 1;
    char *p = unk_0c + unk_08 + 1;
    for (u32 i = 0; i < n; i++) {
        t.setLine((u8 *)p);
        u32 m = t.unk_04 + 1;
        total += m;
        p += m;
    }
    return total;
}

u32 MsgTag::readArgBytes8Strings2(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, MsgString *s5,
                                MsgString *s6) {
    struct {
        u32 pad;
        u8 buf[8];
        MsgString *arr[2];
    } L;
    getArgBytes(L.buf, 8);
    *a1 = L.buf[0];
    *a3 = L.buf[2];
    *s1 = L.buf[4];
    *s3 = L.buf[6];
    *a2 = L.buf[1];
    *s0 = L.buf[3];
    *s2 = L.buf[5];
    *s4 = L.buf[7];
    L.arr[0] = s5;
    L.arr[1] = s6;
    char *p = unk_0c + unk_08 + 1;
    u32 total = 1;
    for (u32 i = 0; i < 2; i++) {
        MsgString *t = *(MsgString **)((u8 *)L.arr + i * 4);
        t->setLine((u8 *)p);
        u32 n = t->unk_04 + 1;
        total += n;
        p += n;
    }
    return total;
}

BOOL MsgTag::isSlotTag() {
    if (unk_04 >= 15 && unk_04 <= 25) return TRUE;
    return FALSE;
}

s32 MsgTag::getSlotIndex() { return unk_04 - 15; }

void MsgTag::getStrings2(char **a, char **b) {
    char *s;
    char *p;
    *a = NULL;
    *b = NULL;
    s = unk_0c;
    if (s[0] != 0) *a = s;
    p = func_0212a120(s, 0);
    p++;
    if ((u32)(p - unk_0c) < unk_08) *b = p;
}

void MsgTag::getStrings3(char **a, char **b, char **c) {
    char *s;
    char *p;
    char *q;
    *a = NULL;
    *b = NULL;
    *c = NULL;
    s = unk_0c;
    if (s[0] != 0) *a = s;
    p = func_0212a120(s, 0);
    if (p[1] != 0) *b = p + 1;
    q = func_0212a120(p + 1, 0);
    q++;
    if ((u32)(q - unk_0c) < unk_08) *c = q;
}

void MsgTag::getAltTextArgs(u32 *a, char **b, char **c) {
    *a = Msg_ReadU8((u8 *)unk_0c, 0);
    *b = unk_0c + unk_08;
    *c = unk_0c + 1;
}

u8 MsgTag::getArgU8() {
    u8 v;
    getArgs1(&v);
    return v;
}

// ---- BmgMsgAttr

extern "C" u8 *Msg_GetColorTag(s32 i) { return (u8 *)sColorTags[i]; }

extern "C" BmgMsgAttr *BmgMsgAttr_Init(BmgMsgAttr *s) {
    BmgMsgAttr_Clear(s);
    return s;
}

extern "C" void BmgMsgAttr_Fini() {}

extern "C" void BmgMsgAttr_Copy(BmgMsgAttr *d, BmgMsgAttr *s) {
    d->unk_00 = s->unk_00;
    d->unk_04 = s->unk_04;
    d->unk_05 = s->unk_05;
    d->unk_06 = s->unk_06;
    d->unk_07 = s->unk_07;
    d->unk_08 = s->unk_08;
    d->unk_09 = s->unk_09;
    d->unk_0a = s->unk_0a;
    d->unk_0b = s->unk_0b;
}

extern "C" void BmgMsgAttr_Clear(BmgMsgAttr *s) { MI_CpuFill8(s, 0, 0xc); }

extern "C" void BmgMsgAttr_Get() {}

extern "C" u8 BmgMsgAttr_GetByte04(BmgMsgAttr *s) { return s->unk_04; }

extern "C" u8 BmgMsgAttr_GetByte05(BmgMsgAttr *s) { return s->unk_05; }

extern "C" u8 BmgMsgAttr_GetByte06(BmgMsgAttr *s) { return s->unk_06; }

extern "C" u8 BmgMsgAttr_GetByte07(BmgMsgAttr *s) { return s->unk_07; }

extern "C" u8 BmgMsgAttr_GetByte09(BmgMsgAttr *s) { return s->unk_09; }

extern "C" void BmgMsgAttr_GetByte08(u8 *out, BmgMsgAttr *s) { *out = s->unk_08; }

extern "C" u32 BmgMsgAttr_LookupUnkA(BmgMsgAttr *s) { return sBmgMsgAttrTableA[BmgMsgAttr_GetByte04(s)]; }

extern "C" u32 BmgMsgAttr_LookupUnkB(BmgMsgAttr *s) { return sBmgMsgAttrTableB[BmgMsgAttr_GetByte04(s)]; }

extern "C" u32 BmgMsgAttr_LookupUnkC(BmgMsgAttr *s) { return sBmgMsgAttrTableC[BmgMsgAttr_GetByte04(s)]; }

// ---- MsgString33
MsgString33::MsgString33() { initEmpty(); }

MsgString33::~MsgString33() {}

u32 MsgString33::capacity() { return 0x21; }

u8 *MsgString33::data() { return (u8 *)this + 0x12; }

void MsgString33::initEmpty() { clear(); }

// ---- MsgRequest
MsgRequest::MsgRequest() {
    unk_1e = gU8None.v;
    MI_CpuFill8(unk_04, 0, 0x1a);
}

MsgRequest::~MsgRequest() {}

void MsgRequest::vfunc_08() {
    unk_1e = gU8None.v;
    MI_CpuFill8(unk_04, 0, 0x1a);
}

void MsgRequest::setFileName(const char *src) {
    func_0212a2ec(unk_04, src, 0x19);
}

extern "C" BOOL Input_IsTouchTrig() {
    BOOL r = FALSE;
    if (!Input_IsTouchBlocked() && IsTouching()) r = TRUE;
    return r;
}

extern "C" BOOL Input_IsTouchTrigInRect(s32 x0, s32 x1, s32 y0, s32 y1) {
    BOOL r = FALSE;
    if (!Input_IsTouchBlocked() && IsTouching()) {
        s32 x = gTouchPressX;
        s32 y = gTouchPressY;
        if (x >= x0 && x < x1 && y >= y0 && y < y1) r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_GetTouchTrigPos(u32 *x, u32 *y) {
    BOOL r = FALSE;
    if (!Input_IsTouchBlocked() && IsTouching()) {
        u32 a = gTouchPressX;
        u32 b = gTouchPressY;
        if (x != NULL) *x = a;
        if (y != NULL) *y = b;
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_GetTouchHeldPos(u32 *a, u32 *b) {
    BOOL r = FALSE;
    if (!Input_IsTouchBlocked() && gTouchHeld) {
        u8 x = gTouchCurX;
        u8 y = gTouchCurY;
        if (a) {
            *a = x;
        }
        if (b) {
            *b = y;
        }
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsAnyKeyTrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0xfff)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsATrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0x1)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsBTrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0x2)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsUpTrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0x40)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsDownTrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0x80)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsStartTrig(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[1] & 0x8)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsAHeld(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[0] & 0x1)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsBHeld(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[0] & 0x2)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsUpHeld(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[0] & 0x40)) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Input_IsDownHeld(void) {
    BOOL r = FALSE;
    if (!Input_IsKeyBlocked() && (gPad[0] & 0x80)) {
        r = TRUE;
    }
    return r;
}

extern "C" void Input_Lock(void) { sInputLocked = 1; }

extern "C" void Input_Unlock(void) { sInputLocked = 0; }

extern "C" void Input_SetTouchMode(void) { sInputButtonMode = 0; }

extern "C" void Input_SetButtonMode(void) { sInputButtonMode = 1; }

extern "C" BOOL Input_IsTouchMode(void) {
    if (!sInputButtonMode) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u8 Input_IsButtonMode(void) {
    return sInputButtonMode;
}

extern "C" void Input_ResetMode(void) {
    sInputLocked = 0;
    sInputButtonMode = 0;
}

extern "C" void Input_LoadMode(void) {
    if (InputMode_IsButtons()) {
        sInputButtonMode = 1;
    } else {
        sInputButtonMode = 0;
    }
}

extern "C" void Input_StoreMode(void) {
    if (sInputButtonMode) {
        InputMode_SetButtons();
    } else {
        InputMode_SetTouch();
    }
}

extern "C" BOOL Input_IsKeyBlocked(void) {
    if (sInputLocked && !sInputButtonMode) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Input_IsTouchBlocked(void) {
    if (sInputLocked && sInputButtonMode) {
        return TRUE;
    }
    return FALSE;
}

MsgQuery::MsgQuery() : unk_24(0) {
    unk_3c = 0;
    unk_40 = -1;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
}

MsgQuery::~MsgQuery() {}

extern "C" u32 Msg_FindTag(u32 a, s32 b, s32 c) {
    gMsgQuery.resetQuery();
    gMsgQuery.unk_24 = 0;
    gMsgQuery.unk_40 = b;
    gMsgQuery.unk_44 = c;
    gMsgQuery.begin((u8 *)a);
    gMsgQuery.run(FALSE);
    if (((Flag18 *)((u8 *)&gMsgQuery + 0x40))->flag) {
        return (u32)gMsgQuery.unk_28.unk_10;
    }
    return 0;
}

extern "C" u32 Msg_GetCharAt(u32 a, u32 b) {
    gMsgQuery.resetQuery();
    gMsgQuery.unk_24 = 1;
    gMsgQuery.unk_48 = b;
    gMsgQuery.begin((u8 *)a);
    gMsgQuery.run(FALSE);
    if (((Flag18 *)((u8 *)&gMsgQuery + 0x40))->flag) {
        return gMsgQuery.unk_3c;
    }
    return 0;
}

extern "C" u32 Msg_GetCharFromEnd(u32 a, u32 b) {
    s32 n = Msg_CountChars(a) - b - 1;
    u32 r = 0;
    if (n >= 0) {
        r = Msg_GetCharAt(a, n);
    }
    return r;
}

extern "C" u32 Msg_CountChars(u32 a) {
    gMsgQuery.resetQuery();
    gMsgQuery.unk_24 = 3;
    gMsgQuery.begin((u8 *)a);
    gMsgQuery.run(FALSE);
    if (((Flag18 *)((u8 *)&gMsgQuery + 0x40))->flag) {
        return gMsgQuery.unk_4c;
    }
    return 0;
}

extern "C" u32 Msg_SkipLines(u32 a, u32 b) {
    gMsgQuery.resetQuery();
    gMsgQuery.unk_24 = 4;
    gMsgQuery.unk_50 = b;
    gMsgQuery.begin((u8 *)a);
    gMsgQuery.run(FALSE);
    if (((Flag18 *)((u8 *)&gMsgQuery + 0x40))->flag) {
        return (u32)gMsgQuery.unk_04;
    }
    return 0;
}

void MsgQuery::onBegin() {
    if (unk_24 == 4 && unk_50 == 0) {
        unk_58 = 1;
    }
}

void MsgQuery::onEnd() {
    if (unk_24 == 3) {
        unk_58 = 1;
    }
}

void MsgQuery::onChar(u32 v) {
    unk_3c = v;
    static void (MsgQuery::*tbl[5])() = {0, &MsgQuery::onCharFindNth, 0, &MsgQuery::onCharCount,
                                             &MsgQuery::onCharCountLines};
    void (MsgQuery::*fn)() = tbl[unk_24];
    if (fn) {
        (this->*fn)();
    }
}

const u8 sColorTags[10][7] = {
    {26, 6, 255, 0, 0, 0, 0},
    {26, 6, 255, 0, 0, 1, 0},
    {26, 6, 255, 0, 0, 2, 0},
    {26, 6, 255, 0, 0, 3, 0},
    {26, 6, 255, 0, 0, 4, 0},
    {26, 6, 255, 0, 0, 5, 0},
    {26, 6, 255, 0, 0, 6, 0},
    {26, 6, 255, 0, 0, 7, 0},
    {26, 6, 255, 0, 0, 8, 0},
    {26, 6, 255, 0, 0, 9, 0}};
u8 sInputButtonMode;
Unk_02008040 gTalkMsgIndexNone(0xff);
const u32 sBmgMsgAttrTableA[25] = {0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6};
const u32 sBmgMsgAttrTableB[25] = {0, 0, 1, 1, 2, 2, 1, 0, 1, 2, 0, 2, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1};
Unk_02008040 gTalkMsgIndexEnd(0xfe);
Unk_020e29e0_Rec sMsgUiProcProfile = {(void *)MsgUiProc_Create, 0xc9, 0xc7};
BmgDatHeader sBmgDatHeader;

void MsgQuery::onTag(u8 *cmd) {
    unk_28.parse(cmd);
    static void (MsgQuery::*tbl[5])() = {&MsgQuery::onTagFind, 0, 0, 0, 0};
    void (MsgQuery::*fn)() = tbl[unk_24];
    if (fn) {
        (this->*fn)();
    }
}

BOOL MsgQuery::canContinue() {
    return unk_58 == 0;
}

void MsgQuery::resetQuery() {
    unk_24 = 0;
    _ZN6MsgTagC1Ev(&unk_28);
    unk_3c = 0;
    unk_40 = -1;
    unk_44 = -1;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
    reset();
}

void MsgQuery::onCharFindNth() {
    if (unk_4c++ == unk_48) {
        unk_58 = 1;
    }
}

void MsgQuery::onCharCount() {
    unk_4c++;
}

void MsgQuery::onCharCountLines() {
    if (unk_3c == 10) {
        unk_54++;
        if (unk_54 == unk_50) {
            unk_58 = 1;
        }
    }
}

void MsgQuery::onTagFind() {
    unk_28.eq(*(volatile s32 *)&unk_40, *(volatile s32 *)&unk_44, &unk_58);
}

extern "C" BOOL Msg_DecodeGameChar(char *out, u8 c) { return Text_GameCharToAscii(out, c); }

extern "C" BOOL Msg_EncodeGameChar(u8 *out, const u8 *src) { return Text_AsciiToGameCharPtr(out, src); }

BmgInfHeader sBmgInfHeader;
MsgRenderProcessor gMsgRenderProcessor;
MsgCopyProcessor gMsgCopyProcessor;
MsgQuery gMsgQuery;

