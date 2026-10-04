#include "types.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"

extern "C" {
extern u8 sMailCheckWords[];
}

extern "C" {
extern s16 sMailCheckWordEnds[];
}

extern "C" {
extern u8 sMailCheckWordUses[];
}

extern "C" {
extern u8 sMailCheckSeparators[];
}

extern "C" {
extern char sMailCheckBankName[];
}

extern "C" {
s32 Mem_Copy(void *src, void *dst, s32 n);
}

extern "C" {
s32 Text_GetLength(void *p, s32 n);
}

extern "C" {
s32 Text_GetLineEnd(void *p, s32 n, s32 z);
}

extern "C" {
s32 Text_FitToWidth(void *str, s32 maxLen, s32 maxWidth, s32 *outLen, s32 arg4);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
BOOL Gfx2d_IsMainScreenLayer(u32 x);
}

extern "C" {
s32 Gfx2d_GetLayerBgIndex(u32 n);
}

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};



class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    /* 0x04 */ u8 hasAttributes;
};

extern "C" BOOL String_Load(MsgString *buf, u8 *key, const char *name);

// ---------------------------------------------------------------------------------------------------------------------

class TalkBmgReader : public BmgReader {
public:
    TalkBmgReader();
    virtual ~TalkBmgReader();
    virtual u32 getBuffer();
    virtual u32 getBufferSize();
};

// 0x200-byte destination buffer at +0xe
class EncodedString512 : public EncodedString {
public:
    EncodedString512();
    virtual ~EncodedString512();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x200];
};

// 0x28-byte destination buffer at +0xe
class EncodedString40 : public EncodedString {
public:
    EncodedString40();
    virtual ~EncodedString40();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 text[0x28];
};

class MsgString513 : public MsgString {
public:
    MsgString513();
    virtual ~MsgString513();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[513];
};

class MsgString33B : public MsgString {
public:
    MsgString33B();
    virtual ~MsgString33B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[33];
};

class MsgString129 : public MsgString {
public:
    MsgString129();
    virtual ~MsgString129();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[129];
};

class MsgString25B : public MsgString {
public:
    MsgString25B();
    virtual ~MsgString25B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[25];
};

class LetterTextLine : public MsgString {
public:
    LetterTextLine();
    virtual ~LetterTextLine();
    virtual u32 capacity();
    virtual u8 *data();

    void setNameHighlight(u8 a, u8 b);
    void setHighlight(u8 a, u8 b, u32 c);
    void clearText();
    void setTextWithMarks(EncodedString *src, BOOL b);
    void setText(EncodedString *src);
    void redrawIfDirty(BOOL b);
    void createLabel();
    void freeLabel();
    void setTarget(u16 v, u32 x);

    /* 0x12 */ u8 text[0x2a];
    /* 0x3c */ TextLabel *textLabel;
    /* 0x40 */ u16 charBase;
    /* 0x42 */ u8 bgIndex;
    /* 0x43 */ u8 isSubScreen;
    /* 0x44 */ u8 isDirty;
    /* 0x45 */ u8 highlightStart;
    /* 0x46 */ u8 highlightLength;
    /* 0x47 */ u8 highlightAlt;
    /* 0x48 */ u8 nameHighlightStart;
    /* 0x49 */ u8 nameHighlightLength;
};

class LetterLayout {
public:
    void redrawAll();
    void freeAllLabels();
    s32 getBodyLineOfPos(s32 v);
    s32 getBodyLineCount();
    u8 *getBodyLineStarts();

    /* 0x000 */ u8 headerLines[0x98];
    /* 0x098 */ u8 bodyLines[4][0x4c];
    /* 0x1c8 */ u8 recipientName[0x28];
    /* 0x1f0 */ s32 bodyLineStarts[5];
    /* 0x204 */ s32 bodyLineCount;
};

extern "C" BOOL String_LoadByIndexB(MsgString *buf, const char *name, u32 key);

MsgString129::MsgString129() { clear(); }

MsgString129::~MsgString129() {}

u32 MsgString129::capacity() { return 0x81; }

u8 *MsgString129::data() { return (u8 *)this + 0x12; }

MsgString33B::MsgString33B() { clear(); }

MsgString33B::~MsgString33B() {}

u32 MsgString33B::capacity() { return 0x21; }

u8 *MsgString33B::data() { return (u8 *)this + 0x12; }

