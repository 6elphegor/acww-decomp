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
u8 *func_02050204(void);
}

extern "C" {
u8 *func_02050208(void);
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
void func_02011868(void);
}

extern "C" {
void func_02011874(void);
}

extern "C" {
void func_0201195c(void);
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
void func_0208efd0(void);
}

extern "C" {
void func_0208efe0(void);
}

extern "C" {
void func_0208eff0(void);
}

extern "C" {
void func_0208f000(void);
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
void func_020a8b88(void);
}

extern "C" {
void func_020a8b94(void);
}

extern "C" {
extern void *gTextHeap;
}

extern "C" {
extern u8 gTextLabelList[];
}

extern "C" {
extern u32 data_020d0800[];
}

extern "C" {
extern u32 data_020d0864[];
}

extern "C" {
extern u32 data_020d08c8[];
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
extern u8 data_021edb68;
}

extern "C" {
extern u8 sInputLocked;
}

extern "C" {
extern u8 data_021edd14;
}

class MsgString;

// Script command token, 0x14 bytes
class MsgTag {
public:
    MsgTag();
    u8 getArgU8();
    void func_020a72c4(u32 *a, char **b, char **c);
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

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
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

// buffer interface with write position at +4 and member at +8
class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
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

class MsgString33 : public MsgString {
public:
    MsgString33();
    virtual ~MsgString33();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void func_020a7188();
};

// Buffer defined in another file (ctor func_020aa8e0, dtor func_020aa8c8), 0x34 bytes
class Unk_020aa8e0 : public MsgString {
public:
    Unk_020aa8e0();
    virtual ~Unk_020aa8e0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x20];
};

class MsgRequest {
public:
    virtual ~MsgRequest();
    virtual void vfunc_08();
    MsgRequest();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
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

    /* 0x7c */ u32 unk_7c;
    /* 0x80 */ MsgProcessor *unk_80;
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

class Unk_020e2b70 : public GameProc {
public:
    Unk_020e2b70();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_020e2b70();
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

extern MsgProcessor gMsgRenderProcessor;
extern MsgCopyProcessor gMsgCopyProcessor;
extern MsgQuery gMsgQuery;
extern Flag18 data_021edcfc;
// prototypes (test harness)
extern "C" Unk_020e2b70 *func_020a8c84(void);


// mwcc 1.2 emits functions in reverse order, so they are defined here from highest to lowest address

// ---- Unk_020e2b70
extern "C" Unk_020e2b70 *func_020a8c84(void) {
    return new Unk_020e2b70;
}

Unk_020e2b70::Unk_020e2b70() {}

Unk_020e2b70::~Unk_020e2b70() {}

BOOL Unk_020e2b70::vfunc_00() {
    func_0208f000();
    Input_ResetMode();
    AbAllObjGfx_Upload();
    func_0201195c();
    func_02011874();
    TalkWindow_CreateAll();
    FieldInfoBalloon_Init();
    func_020a8b94();
    return TRUE;
}

BOOL Unk_020e2b70::vfunc_0c() {
    func_020a8b88();
    FieldInfoBalloon_Release();
    TalkWindow_DestroyAll();
    func_02011868();
    func_0208eff0();
    return TRUE;
}

BOOL Unk_020e2b70::onExecute() {
    func_0208efe0();
    TalkWindow_UpdateAll();
    FieldInfoBalloon_Update();
    return TRUE;
}

BOOL Unk_020e2b70::onDraw() {
    FieldInfoBalloon_Draw();
    TalkWindow_DrawAll();
    func_0208efd0();
    return TRUE;
}

struct Unk_020a88fc_Pad {
    s32 v[2];
    Unk_020a88fc_Pad() {}
    ~Unk_020a88fc_Pad() {}
};

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
// MsgTag::MsgTag(), which func_020a6a0c calls to re-construct its token in place. LampLights placement new adds a
// null check, and C++ has no other way to call a constructor on an existing object.
extern "C" void func_020a776c(MsgTag *token);

extern "C" {
u32 Msg_CountChars(u32 a);
}

