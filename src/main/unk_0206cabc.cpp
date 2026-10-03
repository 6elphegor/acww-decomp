#include "types.h"
#include "text/Unk_02050288.h"

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

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

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

class BmgReader {
public:
    BmgReader(u8 arg1);
    virtual ~BmgReader();
    virtual u32 getBuffer() = 0;
    virtual u32 getBufferSize() = 0;

    /* 0x04 */ u8 unk_04;
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

    /* 0x0e */ u8 unk_0e[0x200];
};

// 0x28-byte destination buffer at +0xe
class EncodedString40 : public EncodedString {
public:
    EncodedString40();
    virtual ~EncodedString40();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x0e */ u8 unk_0e[0x28];
};

class MsgString513 : public MsgString {
public:
    MsgString513();
    virtual ~MsgString513();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[513];
};

class MsgString33B : public MsgString {
public:
    MsgString33B();
    virtual ~MsgString33B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[33];
};

class MsgString129 : public MsgString {
public:
    MsgString129();
    virtual ~MsgString129();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[129];
};

class MsgString25B : public MsgString {
public:
    MsgString25B();
    virtual ~MsgString25B();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[25];
};

class LetterTextLine : public MsgString {
public:
    LetterTextLine();
    virtual ~LetterTextLine();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void setNameHighlight(u8 a, u8 b);
    void setHighlight(u8 a, u8 b, u32 c);
    void clearText();
    void setTextWithMarks(EncodedString *src, BOOL b);
    void setText(EncodedString *src);
    void redrawIfDirty(BOOL b);
    void createLabel();
    void freeLabel();
    void setTarget(u16 v, u32 x);

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ TextLabel *unk_3c;
    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ u8 unk_46;
    /* 0x47 */ u8 unk_47;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
};

class LetterLayout {
public:
    void redrawAll();
    void freeAllLabels();
    s32 getBodyLineOfPos(s32 v);
    s32 getBodyLineCount();
    u8 *getBodyLineStarts();

    /* 0x000 */ u8 unk_000[0x98];
    /* 0x098 */ u8 unk_098[4][0x4c];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
};

extern "C" BOOL String_LoadByIndexB(MsgString *buf, const char *name, u32 key);

MsgString129::MsgString129() { clear(); }

MsgString129::~MsgString129() {}

u32 MsgString129::vfunc_08() { return 0x81; }

u8 *MsgString129::vfunc_0c() { return (u8 *)this + 0x12; }

MsgString33B::MsgString33B() { clear(); }

MsgString33B::~MsgString33B() {}

u32 MsgString33B::vfunc_08() { return 0x21; }

u8 *MsgString33B::vfunc_0c() { return (u8 *)this + 0x12; }

